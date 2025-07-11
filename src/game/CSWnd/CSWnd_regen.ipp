#include "regen.hpp"
// CSWnd.ipp
#include "CSWnd.hpp"

// CCSWnd_Char::InitActiveEffect
__SUB_CLASS_THIS0(000BC640, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [eax+0x3600]
	push 0
	push edx
	call CCSWnd_Char::SetActiveEffectItem
	ret
}
}
// CCSWnd_Char::ShowEntrustedShop
__SUB_CLASS_THIS(000BC6B0, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4A4]
	mov eax,dword ptr [eax+0x19E4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block5

 Block4:
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0x4A4]
	push edx
	push eax
	call CUserPreview::ShowEntrustedShop

 Block5:
	pop esi
	ret 8
}
}
// CCSWnd_Inventory::Draw
_SUB_EXCEPTION_HANDLER(BE710)
__SUB_CLASS_THIS(000BE710, __thiscall, 48416,  CCSWnd_Inventory, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BE710
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
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],ebx
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
	mov dword ptr [esp+0x38],0

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov esi,dword ptr [ebp+0xB0C]
	mov dword ptr [esp+0x54],0
	mov dword ptr [ebp+0xB0C],0xFFFFFFFF
	test esi,esi
	jl Block17

 Block6:
	mov eax,dword ptr [ebp+0xB08]
	mov ecx,dword ptr [ebx+eax*4+0x501]
	test ecx,ecx
	je Block8

 Block7:
	mov ecx,dword ptr [ecx-4]

 Block8:
	dec ecx
	cmp esi,ecx
	jge Block17

 Block9:
	push esi
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x28],0

 Block14:
	test edi,edi
	je Block17

 Block15:
	mov ecx,dword ptr [edi+0x18]
	or ecx,dword ptr [edi+0x1C]
	je Block17

 Block16:
	mov dword ptr [ebp+0xB0C],esi

 Block17:
	mov esi,dword ptr [esp+0x1C]
	test esi,esi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push 0xD4
	push 0xA0
	push 0x34
	push 0
	push esi
	call eax
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov ecx,dword ptr [ebp+0xB08]
	lea eax,[ebx+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [eax-4]

 Block23:
	mov ecx,dword ptr [ebp+0xB04]
	mov edx,eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x20],edx
	lea esp,[esp]

 Block24:
	mov eax,dword ptr [ebp+0xB04]
	add eax,0xC
	cmp eax,edx
	jl Block26

 Block25:
	mov eax,edx

 Block26:
	cmp ecx,eax
	jge Block60

 Block27:
	mov edx,dword ptr [ebp+0xB08]
	push ecx
	push edx
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block32

 Block28:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block29:
	mov ecx,dword ptr [esp+0x30]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block31

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block31:
	mov dword ptr [esp+0x30],0

 Block32:
	test edi,edi
	je Block59

 Block33:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	mov ecx,ebp
	mov ebx,eax
	call CCSWnd_Inventory::GetItemSlotRect
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x18]
	mov ecx,edi
	call edx
	push 2
	push 0
	push 0
	push 0
	cmp eax,3
	jne Block35

 Block34:
	mov ecx,edi
	call GW_ItemSlotPet::IsDead
	mov ecx,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x5C]
	push 0
	push 0
	push eax
	push ecx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call eax
	jmp Block36

 Block35:
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	push 0
	push ecx
	push edx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call ecx

 Block36:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebp+0xB08]
	cmp eax,2
	je Block41

 Block37:
	cmp eax,3
	je Block41

 Block38:
	cmp eax,4
	je Block41

 Block39:
	push ebx
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block41

 Block40:
	push ebx
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block44

 Block41:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	push 0
	push ecx
	mov edi,eax
	mov eax,dword ptr [ebp+0xB00]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x44]
	push edi
	add eax,0xFFFFFFF4
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x3C],esp
	push esi
	call eax
	call draw_number_by_image
	add esp,0x18

 Block44:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block47

 Block45:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0x72363636
	push 0x20
	push 0x20
	push edx
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [ebp+0xB0C]
	jne Block58

 Block48:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ecx
	push edx
	push esi
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov eax,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov eax,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	mov ebx,dword ptr [esp+0x18]

 Block59:
	inc dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x14]
	jmp Block24

 Block60:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call edx
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
// CCSWnd_Char::SetEmotion
__SUB_CLASS_THIS(000BBA80, __thiscall, 48156,  CCSWnd_Char, void, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,0x51EB851F
	imul esi
	mov ecx,dword ptr [ecx+0x4A4]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	sub esi,eax
	push 0xFFFFFFFF
	add esi,8
	push esi
	add ecx,0x88
	call CAvatar::SetEmotion
	pop esi
	ret 4
}
}
// CCSWnd_Inventory::OnSetFocus
__SUB_CLASS_THIS(000BB8E0, __thiscall, 48411,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB0C]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CCSWnd_Char::GetWeaponItemID
__SUB_CLASS_THIS(000BD4F0, __thiscall, 48164,  CCSWnd_Char, long, long, long&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x308]
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push edi
	cmp eax,0x11
	je Block2

 Block1:
	pop edi
	pop esi
	pop ebp
	mov eax,ecx
	pop ebx
	add esp,8
	ret 8

 Block2:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block13

 Block3:
	mov ebx,dword ptr [eax+0x1E0]
	mov ebp,dword ptr [esp+0x1C]
	xor edi,edi
	xor esi,esi

 Block4:
	mov eax,1
	mov ecx,esi
	shl eax,cl
	test eax,ebx
	je Block6

 Block5:
	push eax
	call get_substitute_weaponid
	add esp,4
	mov edi,eax
	cmp dword ptr [esi*4+_D_G_ANWEAPONTYPE],ebp
	je Block8

 Block6:
	inc esi
	cmp esi,0x11
	jle Block4

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8

 Block8:
	push edi
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetCharacterImgEntry
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block12

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8

 Block13:
	mov eax,dword ptr [esi+0xED]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8
}
}
// CCSWnd_Inventory::OnMouseEnter
__SUB_CLASS_THIS(000BB8F0, __thiscall, 48415,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xB4]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CCSWnd_Locker::OnChildNotify
__SUB_CLASS_THIS(000BB7B0, __thiscall, 48370,  CCSWnd_Locker, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E9
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CCSWnd_Char::ShowMessageBox
__SUB_CLASS_THIS(000BBB00, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x4A4]
	jmp  CUserPreview::ShowMessageBox
}
}
// CCSWnd_Inventory::EnableExTrunkButton
__SUB_CLASS_THIS0(000BBB20, __thiscall, 48408,  CCSWnd_Inventory, void) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [eax+0xB4]
	mov eax,dword ptr [eax+0xB10]
	mov eax,dword ptr [eax+0x490]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x1C]
	push ebx
	add ecx,4
	add eax,4
	xor ebx,ebx
	cmp eax,0x30
	setle bl
	push ebx
	call edx
	pop ebx
	ret
}
}
// CCSWnd_Char::ShowBullet
__SUB_CLASS_THIS(000BE150, __thiscall, 48156,  CCSWnd_Char, void, long) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	lea eax,[esp+8]
	push eax
	push 0x2F
	mov esi,ecx
	call CCSWnd_Char::GetWeaponItemID
	mov edi,eax
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x2F
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x4A4]
	add eax,0x8C
	cmp dword ptr [eax+0x45],edi
	je Block3

 Block2:
	mov dword ptr [eax+0x45],edi
	mov ecx,dword ptr [esi+0x4A4]
	push eax
	add ecx,0x88
	call CAvatar::SetAvatarLook

 Block3:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	mov ecx,dword ptr [esi+0x4A4]
	push edi
	call CUserPreview::DoShootAttack

 Block4:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CCSWnd_Char::InitPet
_SUB_EXCEPTION_HANDLER(BDE30)
__SUB_CLASS_THIS0(000BDE30, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BDE30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	xor ebx,ebx
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x28]
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
	mov ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],ebx

 Block5:
	mov ecx,dword ptr [esi+0x1F]
	mov edx,dword ptr [esi+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	push eax
	push 5
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	xor edi,edi
	cmp eax,edi
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,edi
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x20],edi

 Block10:
	cmp esi,edi
	je Block12

 Block11:
	lea eax,[esi+0xC]
	jmp Block13

 Block12:
	push edi
	lea ecx,[esp+0x28]
	call TSecType<long>::_ctor_1
	mov ebx,1
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x18],ebx

 Block13:
	mov ecx,eax
	call TSecType<long>::GetData
	cmp dword ptr [ebp+0x490],eax
	setne byte ptr [esp+0x17]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x44],edi
	test bl,1
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
	cmp byte ptr [esp+0x17],0
	je Block23

 Block17:
	test esi,esi
	je Block19

 Block18:
	lea eax,[esi+0xC]
	jmp Block20

 Block19:
	push 0
	lea ecx,[esp+0x34]
	call TSecType<long>::_ctor_1
	or ebx,2
	mov dword ptr [esp+0x44],1
	mov dword ptr [esp+0x18],ebx

 Block20:
	push 0
	push 0
	mov ecx,eax
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call CCSWnd_Char::SetPet
	mov dword ptr [esp+0x44],edi
	test bl,2
	je Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block23

 Block22:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block23:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CCSWnd_Inventory::OnMouseMove
__SUB_CLASS_THIS(000BEEC0, __thiscall, 48413,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	mov eax,dword ptr [esp+0x18]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	lea ecx,[esi-4]
	call CCSWnd_Inventory::GetSlotPositionFromPoint
	mov edi,eax
	mov dword ptr [esp+8],edi
	test edi,edi
	je Block14

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block6

 Block2:
	push ebx
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block5:
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	pop ebx

 Block6:
	mov eax,dword ptr [esi+0xB04]
	push edi
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	pop ebp
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov edx,dword ptr [esp+0xC]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov dword ptr [esp+0xC],0

 Block11:
	test edi,edi
	je Block14

 Block12:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block14

 Block13:
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
	mov ecx,dword ptr [esp+0x38]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x38]
	lea ecx,[esi+0xB4]
	push eax
	call CUIToolTip::ShowItemToolTip
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block14:
	lea ecx,[esi+0xB4]
	call CUIToolTip::ClearToolTip
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8
}
}
// CCSWnd_Char::GetEntrustedShopSN
__SUB_CLASS_THIS0(000BBA00, __thiscall, 48159,  CCSWnd_Char, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4A4]
	mov eax,dword ptr [eax+0x3AF0]
	ret
}
}
// CCSWnd_Char::OnWear
_SUB_EXCEPTION_HANDLER(C5A60)
__SUB_CLASS_THIS(000C5A60, __thiscall, 48157,  CCSWnd_Char, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C5A60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x220]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	movzx ecx,byte ptr [esi+0xB4]
	mov ebx,dword ptr [esp+0x230]
	xor ebp,ebp
	push ebp
	lea eax,[esp+0x18]
	push eax
	push ecx
	push ebx
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block37

 Block1:
	mov edi,dword ptr [esp+0x14]
	cmp edi,0xE
	je Block3

 Block2:
	push edi
	call is_sticker_bodypart
	add esp,4
	test eax,eax
	je Block37

 Block3:
	mov eax,0x14F8B589
	imul ebx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x10
	je Block37

 Block4:
	mov ecx,dword ptr [esi+0x4E8]
	cmp dword ptr [ecx+0x4E8],ebp
	je Block6

 Block5:
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov edi,dword ptr [esp+0x14]

 Block6:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x69
	jne Block11

 Block7:
	cmp dword ptr [esi+0x2E0],ebp
	je Block11

 Block8:
	mov dword ptr [esi+0x2E0],ebp
	mov dword ptr [esi+0x2E4],ebp

 Block9:
	cmp edi,0xC
	jne Block14

 Block10:
	mov ecx,dword ptr [esp+0x238]
	mov edx,dword ptr [esp+0x234]
	push ecx
	push edx
	push ebx
	mov ecx,esi
	call CCSWnd_Char::SetRing
	jmp Block22

 Block11:
	mov ecx,dword ptr [esi+0x2D8]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	jne Block9

 Block12:
	cmp edi,6
	jne Block9

 Block13:
	mov dword ptr [esi+0x2D8],ebp
	mov dword ptr [esi+0x2DC],ebp
	jmp Block16

 Block14:
	cmp edi,0x12
	je Block20

 Block15:
	cmp edi,0x13
	je Block20

 Block16:
	cmp dword ptr [esi+edi*8+0x2B0],ebx
	jne Block19

 Block17:
	cmp dword ptr [esp+0x238],ebp
	jne Block19

 Block18:
	mov dword ptr [esi+edi*8+0x2B4],ebp
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+eax*8+0x2B0],ebp
	jmp Block22

 Block19:
	mov ecx,dword ptr [esp+0x234]
	mov dword ptr [esi+edi*8+0x2B0],ebx
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esi+edx*8+0x2B4],ecx
	jmp Block22

 Block20:
	cmp dword ptr [esp+0x238],ebp
	je Block37

 Block21:
	mov eax,dword ptr [esp+0x234]
	push edi
	push eax
	push ebx
	mov ecx,esi
	call CCSWnd_Char::SetRiding
	test eax,eax
	je Block37

 Block22:
	cmp dword ptr [esp+0x14],0xA
	jne Block25

 Block23:
	mov ecx,dword ptr [esi+0x308]
	push ecx
	mov ecx,esi
	call CCSWnd_Char::IsTwoHandWeapon
	test eax,eax
	je Block25

 Block24:
	mov dword ptr [esi+0x308],ebp
	mov dword ptr [esi+0x30C],ebp

 Block25:
	push ebx
	mov ecx,esi
	call CCSWnd_Char::IsTwoHandWeapon
	test eax,eax
	je Block28

 Block26:
	cmp dword ptr [esi+0x300],ebp
	je Block28

 Block27:
	mov dword ptr [esi+0x300],ebp
	mov dword ptr [esi+0x304],ebp

 Block28:
	lea edx,[esi+0xA8]
	push edx
	lea ecx,[esp+0x1C]
	call AvatarLook::_ctor_2
	mov dword ptr [esp+0x228],ebp
	xor eax,eax
	lea ecx,[esi+0x2B0]
	nop

 Block29:
	mov edx,dword ptr [ecx]
	mov dword ptr [esp+eax*4+0x31],edx
	inc eax
	add ecx,8
	cmp eax,0x3C
	jl Block29

 Block30:
	mov ebx,dword ptr [esi+0x308]
	mov eax,0x14F8B589
	imul ebx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	jne Block36

 Block31:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	call CItemInfo::GetEquipItem
	mov edi,eax
	cmp edi,ebp
	je Block36

 Block32:
	mov ecx,dword ptr [esi+0xED]
	push ecx
	call get_weapon_type
	push eax
	call get_weapon_typeindex_from_weapon_type
	mov ecx,eax
	mov eax,dword ptr [edi+0x1E0]
	mov edx,1
	shl edx,cl
	add esp,8
	test edx,eax
	je Block34

 Block33:
	mov edx,dword ptr [esi+0xED]
	mov dword ptr [esp+0x5D],edx
	jmp Block35

 Block34:
	push eax
	call get_substitute_weaponid
	add esp,4
	mov dword ptr [esp+0x5D],eax

 Block35:
	mov dword ptr [esp+0x2D],ebx

 Block36:
	mov ecx,dword ptr [esi+0x4A4]
	lea eax,[esp+0x18]
	push eax
	add ecx,0x88
	call CAvatar::SetAvatarLook

 Block37:
	mov ecx,dword ptr [esp+0x220]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x218
	ret 0xC
}
}
// CCSWnd_Locker::OnMouseButton
_SUB_EXCEPTION_HANDLER(BE1B0)
__SUB_CLASS_THIS(000BE1B0, __thiscall, 48374,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BE1B0
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
	lea ecx,[esi+0x8C]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esi+0xADC]
	lea ecx,[eax+0x564]
	call CCSWnd_Char::EndChat
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x1C],0

 Block5:
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x201
	jne Block11

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esi+0xADC]
	push ecx
	lea ebx,[esi-4]
	push edx
	mov ecx,ebx
	add edi,0x48C
	call CCSWnd_Locker::GetLockerIndex
	test eax,eax
	jl Block30

 Block7:
	mov edi,dword ptr [edi]
	test edi,edi
	je Block30

 Block8:
	cmp eax,dword ptr [edi-4]
	jae Block30

 Block9:
	cmp dword ptr [esi+0xAD8],eax
	je Block30

 Block10:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xAD8],eax
	call CWnd::InvalidateRect
	jmp Block30

 Block11:
	cmp eax,0x203
	jne Block30

 Block12:
	mov eax,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esi+0xADC]
	mov ecx,dword ptr [esp+0x38]
	push eax
	push ecx
	add ebx,0x48C
	lea ecx,[esi-4]
	mov dword ptr [esp+0x38],ebx
	call CCSWnd_Locker::GetLockerIndex
	test eax,eax
	jl Block30

 Block13:
	mov ebp,dword ptr [ebx]
	test ebp,ebp
	je Block30

 Block14:
	cmp eax,dword ptr [ebp-4]
	jae Block30

 Block15:
	mov edi,eax
	imul edi,0x37
	mov ebx,dword ptr [edi+ebp+0x10]
	push ebx
	call is_random_box_item
	add esp,4
	test eax,eax
	je Block20

 Block16:
	mov edx,dword ptr [esi+0xADC]
	cmp dword ptr [edx+0x534],0
	jne Block30

 Block17:
	push 0xB50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [edx+edi+0x10]
	add edx,edi
	push ecx
	mov ecx,dword ptr [esi+0xADC]
	push ecx
	mov ecx,dword ptr [edx+4]
	mov edx,dword ptr [edx]
	push ecx
	push edx
	mov ecx,eax
	call CUICashItemGachapon::_ctor_0
	mov ecx,dword ptr [esi+0xADC]
	mov dword ptr [ecx+0x534],eax
	jmp Block30

 Block19:
	mov ecx,dword ptr [esi+0xADC]
	xor eax,eax
	mov dword ptr [ecx+0x534],eax
	jmp Block30

 Block20:
	cmp ebx,0x4FA6AC
	jne Block25

 Block21:
	mov edx,dword ptr [esi+0xADC]
	cmp dword ptr [edx+0x538],0
	jne Block30

 Block22:
	push 0xB48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esi+0xADC]
	push ecx
	mov ecx,dword ptr [edx+edi+4]
	add edx,edi
	mov edx,dword ptr [edx]
	push ecx
	push edx
	mov ecx,eax
	call CUICashGachapon::_ctor_0
	mov ecx,dword ptr [esi+0xADC]
	mov dword ptr [ecx+0x538],eax
	jmp Block30

 Block24:
	mov ecx,dword ptr [esi+0xADC]
	xor eax,eax
	mov dword ptr [ecx+0x538],eax
	jmp Block30

 Block25:
	push ebx
	call is_changemaplepoint_item
	add esp,4
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [edi+ebp+4]
	mov eax,dword ptr [edi+ebp]
	mov ecx,dword ptr [esi+0xADC]
	push ebx
	push edx
	push eax
	call CCashShop::SendChangeMaplePoint
	jmp Block30

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	push ebx
	call CharacterData::FindEmptySlotPosition
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [edi+ebp+4]
	mov edx,dword ptr [edi+ebp]
	push eax
	push ebx
	push ecx
	mov ecx,dword ptr [esi+0xADC]
	push edx
	call CCashShop::OnMoveCashItemLtoS
	mov dword ptr [esi+0xAD8],0xFFFFFFFF
	jmp Block30

 Block29:
	mov ecx,dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance]
	push ebx
	call CCSWnd_Inventory::SetInventoryTI
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x1A8F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block30:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x10
}
}
// CCSWnd_Char::OnDefaultAvatar
__SUB_CLASS_THIS0(000BEC80, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	push 0x1E0
	lea edi,[esi+0x2B0]
	push 0
	push edi
	call _memset
	add esp,0xC
	xor eax,eax
	mov dword ptr [esi+0x490],eax
	mov dword ptr [esi+0x494],eax
	mov eax,edi
	lea ecx,[esi+0xC1]
	mov edx,0x3C

 Block1:
	mov edi,dword ptr [ecx]
	mov dword ptr [eax],edi
	add eax,8
	add ecx,4
	sub edx,1
	jne Block1

 Block2:
	mov eax,dword ptr [esi+0x4E8]
	mov dword ptr [eax+0x4E8],edx
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block4:
	mov ecx,esi
	call CCSWnd_Char::InitRiding
	mov ecx,esi
	call CCSWnd_Char::InitRing
	call CCSWnd_Char::InitPet
	mov ecx,esi
	call CCSWnd_Char::InitActiveEffect
	lea ecx,[esi+0xA8]
	push ecx
	mov ecx,dword ptr [esi+0x4A4]
	add ecx,0x88
	call CAvatar::SetAvatarLook
	mov ecx,dword ptr [esi+0x4A4]
	pop edi
	pop esi
	jmp  CUserPreview::InitObjects
}
}
// CCSWnd_Char::OnChat
_SUB_EXCEPTION_HANDLER(BFBD0)
__SUB_CLASS_THIS(000BFBD0, __thiscall, 48161,  CCSWnd_Char, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BFBD0
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
	mov ecx,dword ptr [esi+0x9C]
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x24]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block2

 Block1:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x11D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block3

 Block2:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x4A4]
	call CUserPreview::OnChat

 Block3:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CCSWnd_Char::DeleteFloatNotice
__SUB_CLASS_THIS0(000BCB10, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4B8]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x4B8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CCSWnd_Char::ShowPersonalShop
__SUB_CLASS_THIS(000BC660, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4A4]
	mov eax,dword ptr [eax+0x19E4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block5

 Block4:
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0x4A4]
	push edx
	push eax
	call CUserPreview::ShowPersonalShop

 Block5:
	pop esi
	ret 8
}
}
// CCSWnd_Locker::OnMouseEnter
__SUB_CLASS_THIS(000BB800, __thiscall, 48375,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x8C]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CCSWnd_Inventory::OnMouseButton
__SUB_CLASS_THIS(000BED40, __thiscall, 48412,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0xB4]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esi+0xB0C]
	add ecx,0x564
	call CCSWnd_Char::EndChat
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [eax+4]
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
	mov dword ptr [esp+0x1C],0

 Block5:
	mov eax,dword ptr [esp+0x24]
	cmp eax,0x201
	jne Block14

 Block6:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	lea edi,[esi-4]
	push edx
	mov ecx,edi
	call CCSWnd_Inventory::GetSlotPositionFromPoint
	mov ebp,eax
	mov eax,dword ptr [esi+0xB04]
	push ebp
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov dword ptr [esp+0x14],0

 Block11:
	test esi,esi
	je Block18

 Block12:
	mov eax,dword ptr [esi+0x18]
	or eax,dword ptr [esi+0x1C]
	je Block18

 Block13:
	push ebp
	mov ecx,edi
	call CCSWnd_Inventory::SetSelectedNo
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10

 Block14:
	cmp eax,0x203
	jne Block18

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx
	lea ecx,[esi-4]
	call CCSWnd_Inventory::GetSlotPositionFromPoint
	push eax
	mov eax,dword ptr [esi+0xB04]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block18

 Block16:
	mov edx,dword ptr [edi+0x18]
	or edx,dword ptr [edi+0x1C]
	je Block18

 Block17:
	mov eax,dword ptr [esi+0xB04]
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xB0C]
	push edx
	call CCashShop::OnMoveCashItemStoL
	mov dword ptr [esi+0xB08],0xFFFFFFFF

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CCSWnd_Inventory::GetSlotPositionFromPoint
__SUB_CLASS_THIS(000BE640, __thiscall, 48418,  CCSWnd_Inventory, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,dword ptr [esi+0xB08]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edi,dword ptr [esi+0xB04]
	mov ebp,eax

 Block8:
	mov eax,dword ptr [esi+0xB04]
	add eax,0xC
	cmp eax,ebp
	jl Block10

 Block9:
	mov eax,ebp

 Block10:
	cmp edi,eax
	jge Block14

 Block11:
	lea edx,[esp+0x10]
	push edx
	push edi
	mov ecx,esi
	call CCSWnd_Inventory::GetItemSlotRect
	mov eax,dword ptr [esp+0x28]
	push eax
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block13

 Block12:
	inc edi
	jmp Block8

 Block13:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCSWnd_Inventory::ClearToolTip
__SUB_CLASS_THIS0(00080ED0, __thiscall, 48417,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xB4
	jmp  CUIToolTip::ClearToolTip
}
}
// CCSWnd_Inventory::SetInventoryTI
__SUB_CLASS_THIS(00093CB0, __thiscall, 48421,  CCSWnd_Inventory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x84]
	dec eax
	mov dword ptr [esp+4],eax
	jmp  CCtrlTab::SetTab
}
}
// get_face_wearing_colorlens
__SUB(000BB5B0, __cdecl, 145025,  long, const AvatarLook&, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	call get_cashslot_item_type
	add esp,4
	cmp eax,0x23
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x11]
	pop esi
	ret

 Block2:
	mov ecx,dword ptr [esp+8]
	mov ecx,dword ptr [ecx+0x11]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	push edi
	mov edi,0xA
	idiv edi
	mov eax,0x99999999
	mov edi,edx
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	add eax,eax
	sub eax,edi
	add eax,esi
	imul eax,0x64
	pop edi
	add eax,ecx
	pop esi
	ret
}
}
// CCSWnd_Locker::SetSelectedNo
__SUB_CLASS_THIS(000BD070, __thiscall, 48378,  CCSWnd_Locker, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCSWnd_Locker::ResetScrollBar
	cmp dword ptr [esp+8],0
	jne Block6

 Block1:
	mov ecx,dword ptr [esi+0xAE0]
	mov eax,dword ptr [ecx+0x48C]
	test eax,eax
	je Block6

 Block2:
	cmp dword ptr [eax-4],0
	jbe Block6

 Block3:
	mov ecx,eax
	test ecx,ecx
	jne Block5

 Block4:
	dec ecx
	mov dword ptr [esi+0xADC],ecx
	jmp Block7

 Block5:
	mov ecx,dword ptr [ecx-4]
	dec ecx
	mov dword ptr [esi+0xADC],ecx
	jmp Block7

 Block6:
	mov dword ptr [esi+0xADC],0xFFFFFFFF

 Block7:
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [ecx+0x3C]
	cmp eax,1
	jle Block9

 Block8:
	dec eax
	push eax
	call CCtrlScrollBar::SetCurPos
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block9:
	pop esi
	ret 4
}
}
// CCSWnd_Char::CreateFloatNotice
_SUB_EXCEPTION_HANDLER(C0110)
__SUB_CLASS_THIS(000C0110, __thiscall, 48167,  CCSWnd_Char, void, const char*, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C0110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+8],ecx
	xor edi,edi
	mov dword ptr [ebp+0x44],edi
	lea eax,[ebp+0x64]
	push 0x5AF
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x44]
	push ecx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea edx,[ebp+0x64]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov bl,2
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block4

 Block3:
	mov esi,dword ptr [eax]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	mov eax,8
	push esi
	mov word ptr [ebp+0x50],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x58],eax
	cmp eax,edi
	jne Block8

 Block6:
	cmp esi,edi
	je Block8

 Block7:
	push 0x8007000E
	call _com_issue_error

 Block8:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],4
	cmp ecx,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [ebp-4],3
	call IWzFont::Create
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp+0x50],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ecx,dword ptr [ebp+0x64]
	cmp ecx,edi
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov dword ptr [ebp+0x1C],edi
	lea edx,[ebp+0x64]
	push 0x53D
	push edx
	mov byte ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],6
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],5
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],7
	call esi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov eax,dword ptr [ebp+0x1C]
	push edi
	push edi
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_RM],edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x40],bx
	jne Block34

 Block28:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	cmp eax,edi
	je Block30

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block30:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x20],bx
	jne Block35

 Block32:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,edi
	je Block36

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block34:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x40]
	push eax
	call esi
	jmp Block31

 Block35:
	lea edx,[ebp-0x20]
	push edx
	call esi

 Block36:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x30],bx
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp-0x30]
	push ecx
	call esi

 Block40:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea edx,[ebp+0x38]
	push edx
	call __eh_vector_ctor_iterator
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x3E6
	push eax
	mov byte ptr [ebp-4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x10
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x24],8
	mov dword ptr [ebp-0x10],eax
	mov byte ptr [ebp-4],0xF
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp+0x24]
	push eax
	call esi

 Block46:
	lea ecx,[ebp+0x38]
	xor esi,esi
	mov dword ptr [ebp+0x68],ecx
	mov bl,0x13
	mov edi,edi

 Block47:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0x12
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	mov ecx,dword ptr [ebp+0x68]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block19

 Block51:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xF
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	add dword ptr [ebp+0x68],4
	inc esi
	cmp esi,3
	jl Block47

 Block58:
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[ebp+0x68]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x68],0
	call edx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov ecx,dword ptr [ebp+0x68]
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	mov dword ptr [ebp+0x34],eax
	jg Block64

 Block63:
	mov dword ptr [ebp+0x34],1

 Block64:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov eax,dword ptr [ebp+0x78]
	lea edx,[ebp+0x50]
	push edx
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	mov bl,0x15
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x50],8
	mov esi,eax
	mov dword ptr [ebp+0x48],esi
	mov byte ptr [ebp-4],0xF
	jne Block71

 Block69:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov ecx,dword ptr [ebp+0x34]
	lea eax,[esi+ecx-1]
	cdq
	idiv ecx
	mov ebx,eax
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x64],ebx
	test eax,eax
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x68],0
	call eax
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [ebp+0x40]
	mov esi,dword ptr [ebp+0x68]
	test eax,eax
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block80:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,ebx
	imul eax,dword ptr [ebp+0x34]
	shr ecx,1
	add ecx,eax
	shr esi,1
	mov dword ptr [ebp],eax
	mov eax,dword ptr [ebp+0x3C]
	add esi,ecx
	mov dword ptr [ebp+0x68],esi
	test eax,eax
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[ebp+0x60]
	push ecx
	push eax
	mov edi,eax
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block84:
	mov eax,dword ptr [ebp+0x60]
	mov esi,dword ptr [ZImports::_VariantInit]
	shr eax,1
	mov dword ptr [ebp+0x60],eax
	lea eax,[ebp+0xC]
	push eax
	call esi
	lea ecx,[ebp+0xC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea edx,[ebp+0x50]
	mov bl,0x17
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x50]
	push eax
	push 0xC00616FC
	push edx
	mov edx,dword ptr [ebp+0x68]
	push edx
	mov eax,0xD4
	sub eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push 0x32
	add eax,0x1F
	push eax
	lea eax,[ebp+0x4C]
	push eax
	call IWzGr2D::CreateLayer
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x4B8]
	cmp edi,eax
	je Block95

 Block91:
	mov dword ptr [esi+0x4B8],eax
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block93:
	test edi,edi
	je Block95

 Block94:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block95:
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],bl
	jne Block100

 Block98:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp word ptr [ebp+0xC],8
	mov byte ptr [ebp-4],0xF
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea edx,[ebp+0x4C]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x19
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x50],cx
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block107:
	mov edi,dword ptr [esi+0x4B8]
	mov byte ptr [ebp-4],0x1A
	test edi,edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov edx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block111:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x50],di
	jne Block114

 Block112:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	mov eax,3
	mov word ptr [ebp+0xC],ax
	mov dword ptr [ebp+0x14],0
	mov ecx,dword ptr [esi+0x4B8]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	lea edx,[ebp+0xC]
	push edx
	lea eax,[ebp+4]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0xC],di
	jne Block122

 Block120:
	mov eax,dword ptr [ebp+0x14]
	xor ecx,ecx
	mov word ptr [ebp+0xC],cx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov edi,dword ptr [ebp+4]
	test edi,edi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x68]
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push ecx
	push edx
	push 0
	push 0
	push edi
	call eax
	test eax,eax
	jge Block127

 Block126:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block127:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x50]
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
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	mov eax,dword ptr [ebp+0x38]
	mov esi,dword ptr [ebp+0x60]
	test eax,eax
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x68],0
	call eax
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block137:
	mov edx,dword ptr [ebp+0x50]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x38]
	shr esi,1
	push esi
	shr eax,1
	push eax
	mov eax,dword ptr [ecx+0x84]
	push 0xC0
	push edx
	push 0
	push 0
	push edi
	call eax
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block139:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x1D
	jne Block142

 Block140:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	mov ebx,dword ptr [ebp+0x60]
	shr ebx,1
	cmp dword ptr [ebp+0x64],0
	mov dword ptr [ebp+0x68],ebx
	mov dword ptr [ebp+0x4C],0
	jle Block161

 Block148:
	nop

 Block149:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block19

 Block150:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block9

 Block151:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block153:
	mov edx,dword ptr [ebp+0x50]
	mov esi,dword ptr [ebp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edi]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	push 0
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x3C]
	push 0
	shr eax,1
	push eax
	mov eax,dword ptr [ecx+0x84]
	push esi
	push 0xC0
	push edx
	push 0
	push ebx
	push edi
	call eax
	test eax,eax
	jge Block155

 Block154:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block155:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x1D
	jne Block158

 Block156:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov eax,dword ptr [ebp+0x4C]
	inc eax
	add ebx,esi
	cmp eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x4C],eax
	jl Block149

 Block160:
	mov dword ptr [ebp+0x68],ebx

 Block161:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block163

 Block162:
	push eax
	call _com_issue_error

 Block163:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[ebp+0x64]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x64],0
	call edx
	test eax,eax
	jge Block167

 Block166:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block167:
	mov eax,dword ptr [ebp+0x40]
	mov esi,dword ptr [ebp+0x64]
	test eax,eax
	jne Block169

 Block168:
	push 0x80004003
	call _com_issue_error

 Block169:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x4C],0
	call eax
	test eax,eax
	jge Block171

 Block170:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block171:
	mov edx,dword ptr [ebp+0x50]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+0x84]
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x40]
	shr esi,1
	push esi
	shr eax,1
	push eax
	mov eax,dword ptr [ebp+0x68]
	push 0xC0
	push edx
	push 0
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block173

 Block172:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block173:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x1D
	jne Block176

 Block174:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block181

 Block180:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block181:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x24]
	push ecx
	call esi
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0x21
	call esi
	lea ecx,[ebp+0x50]
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
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x78]
	lea eax,[ebp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x22
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block189

 Block188:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block189:
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [ebp]
	sub ecx,dword ptr [ebp+0x48]
	cdq
	sub eax,edx
	sar eax,1
	push eax
	mov eax,0x55555556
	imul ecx
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [ebp+0x64]
	shr edx,1
	add ecx,edx
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x50],si
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x24],si
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov ebx,dword ptr [ebp+8]
	mov esi,dword ptr [ebx+0x4B8]
	test esi,esi
	jne Block199

 Block198:
	push 0x80004003
	call _com_issue_error

 Block199:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block201

 Block200:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block201:
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [ebx+0x4D0],eax
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xF
	call ecx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0xE
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],5
	call edx
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block203:
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block205

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block205:
	lea esp,[ebp-0x50]
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
	ret 8
}
}
// CCSWnd_Char::SetColorLens
_SUB_EXCEPTION_HANDLER(BBB50)
__SUB_CLASS_THIS(000BBB50, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BBB50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x208
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x218]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esi+0x4A4]
	lea eax,[ebx+0x8C]
	push eax
	lea ecx,[esp+0x14]
	call AvatarLook::_ctor_2
	mov edi,dword ptr [esp+0x228]
	xor eax,eax
	mov dword ptr [esp+0x220],eax
	cmp dword ptr [esi+0x4E0],edi
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0xB9]
	mov dword ptr [esp+0x21],ecx
	mov dword ptr [esi+0x4E0],eax
	jmp Block3

 Block2:
	lea edx,[esi+0xA8]
	push edi
	push edx
	call get_face_wearing_colorlens
	mov dword ptr [esp+0x29],eax
	mov eax,dword ptr [esp+0x234]
	add esp,8
	mov dword ptr [esi+0x4E0],edi

 Block3:
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[ebx+0x88]
	mov dword ptr [esi+0x4E4],eax
	call CAvatar::SetAvatarLook
	mov ecx,dword ptr [esp+0x218]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x214
	ret 8
}
}
// CCSWnd_Char::CCSWnd_Char
__SUB_CLASS_THIS0(00080940, __thiscall, 48145,  CCSWnd_Char, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	lea eax,[esi+0x80]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFF80
	mov dword ptr [TSingleton<CCSWnd_Char>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CCSWnd_Char>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_Char::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_Char::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_Char::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x84],ebx
	mov dword ptr [esi+0x8C],ebx
	mov dword ptr [esi+0x94],ebx
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA4],ebx
	xor eax,eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	push 0xF0
	lea eax,[esi+0xC1]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi+0xA8],offset AvatarLook::`vftable'
	mov byte ptr [esi+0xB4],bl
	mov dword ptr [esi+0xB5],ebx
	mov dword ptr [esi+0xB9],ebx
	mov dword ptr [esi+0xBD],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x2A1],eax
	mov dword ptr [esi+0x2A5],eax
	mov dword ptr [esi+0x2A9],eax
	mov dword ptr [esi+0x49C],ebx
	mov dword ptr [esi+0x4A4],ebx
	mov dword ptr [esi+0x4A8],ebx
	mov dword ptr [esi+0x4AC],ebx
	mov dword ptr [esi+0x4B0],ebx
	mov dword ptr [esi+0x4B4],ebx
	mov dword ptr [esi+0x4B8],ebx
	add esp,0xC
	mov dword ptr [esi+0x4C4],ebx
	mov dword ptr [esi+0x4C8],ebx
	mov dword ptr [esi+0x4CC],ebx
	int 3// TODO: 	mov dword ptr [esi+0x4BC],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CCSWnd_Char::OnSetFocus
__SUB_CLASS_THIS(000BB620, __thiscall, 48152,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CCSWnd_Char::OnKeyRet
// 4BFF34
static uint8_t _SUB_BFCC0_LOOKUP_TABLE_0[28] = {
0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 
};
__SUB_CLASS_THIS(000BFCC0, __thiscall, 48155,  CCSWnd_Char, int32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4A4]
	cmp dword ptr [eax+0x3AEC],0
	push edi
	jne Block47

 Block1:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	js Block47

 Block2:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	shr eax,0x10
	and eax,0xFF
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	mov ecx,dword ptr [esi+0x9C]
	mov edi,eax
	test ecx,ecx
	je Block4

 Block3:
	lea eax,[ecx+4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [edx+0xA0],eax
	jne Block19

 Block6:
	cmp byte ptr [edi],5
	jne Block9

 Block7:
	cmp dword ptr [edi+1],0x35
	jne Block9

 Block8:
	mov ecx,esi
	call CCSWnd_Char::EndChat

 Block9:
	mov eax,dword ptr [esp+0x10]
	add eax,0xFFFFFFF3
	cmp eax,0x1B
	ja Block13

 Block10:
	movzx eax,byte ptr [eax+_SUB_BFCC0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block14
cmp EAX, 1
je Block12
cmp EAX, 2
je Block11
cmp EAX, 3
je Block13


 Block11:
	mov ecx,esi
	call CCSWnd_Char::EndChat
	jmp Block20

 Block12:
	mov ecx,esi
	call CCSWnd_Char::EndChat

 Block13:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block14:
	mov ecx,dword ptr [esi+0x9C]
	lea edx,[esp+0x10]
	push edx
	call CCtrlEdit::GetText
	mov ecx,eax
	call ZXString<char>::IsEmpty
	test eax,eax
	mov eax,dword ptr [esp+0x10]
	sete bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	test bl,bl
	je Block18

 Block17:
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push eax
	call CCtrlEdit::GetText
	mov ecx,esi
	call CCSWnd_Char::OnChat

 Block18:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block19:
	cmp dword ptr [esp+0x10],0xD
	je Block38

 Block20:
	cmp byte ptr [edi],5
	jne Block47

 Block21:
	mov edi,dword ptr [edi+1]
	cmp edi,0x35
	jne Block28

 Block22:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [esi+0x4A4]
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	mov dword ptr [eax+0x200],1
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block28:
	cmp edi,0x34
	jne Block47

 Block29:
	mov ecx,dword ptr [esi+0x4A4]
	mov edx,dword ptr [ecx+0x5F8]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block13

 Block30:
	mov ecx,dword ptr [esi+0xED]
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0x10]
	push eax
	push ecx
	call get_weapon_type
	add esp,4
	push eax
	mov ecx,esi
	call CCSWnd_Char::GetWeaponItemID
	mov edx,dword ptr [esi+0xE9]
	push edx
	mov edi,eax
	call get_weapon_type
	add esp,4
	cmp eax,0x22
	jne Block32

 Block31:
	xor ebx,ebx
	jmp Block33

 Block32:
	mov ebx,dword ptr [esp+0x10]

 Block33:
	test edi,edi
	je Block13

 Block34:
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block37

 Block35:
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x2E
	je Block37

 Block36:
	mov ecx,dword ptr [esi+0x4A4]
	push ebx
	push edi
	call CUserPreview::DoMeleeAttack
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block37:
	mov ecx,dword ptr [esi+0x4A4]
	push 0
	push edi
	call CUserPreview::DoShootAttack
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block38:
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	test eax,eax
	je Block41

 Block39:
	cmp byte ptr [eax],0
	je Block41

 Block40:
	xor edi,edi
	jmp Block42

 Block41:
	mov edi,1

 Block42:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	test edi,edi
	je Block46

 Block45:
	mov ecx,esi
	call CCSWnd_Char::StartChat

 Block46:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	ret 8

 Block47:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CCSWnd_Char::OnTakeOff
_SUB_EXCEPTION_HANDLER(BCA00)
__SUB_CLASS_THIS0(000BCA00, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BCA00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x208
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x218]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esi+0xA8]
	push eax
	lea ecx,[esp+0x14]
	call AvatarLook::_ctor_2
	xor ebx,ebx
	xor eax,eax
	mov ecx,0x3B
	lea edi,[esp+0x2D]
	mov dword ptr [esp+0x25],ebx
	rep stosd
	mov dword ptr [esp+0x220],ebx
	lea edx,[esi+0x2BC]
	mov eax,0x3B

 Block1:
	mov dword ptr [edx-4],ebx
	mov dword ptr [edx],ebx
	add edx,8
	sub eax,1
	jne Block1

 Block2:
	mov ecx,esi
	call CCSWnd_Char::InitRiding
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [esi+0x4A4]
	add ecx,0x88
	call CAvatar::SetAvatarLook
	mov ecx,dword ptr [esi+0x4A4]
	call CUserPreview::InitObjects
	mov ecx,dword ptr [esi+0x4A4]
	push ebx
	mov dword ptr [esi+0x494],ebx
	mov dword ptr [esi+0x490],ebx
	call CUserPreview::SetPet
	mov edx,dword ptr [esi+0x4E8]
	mov dword ptr [edx+0x4E8],ebx
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block4:
	mov ecx,esi
	call CCSWnd_Char::InitActiveEffect
	mov ecx,dword ptr [esp+0x218]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x214
	ret
}
}
// CCSWnd_Char::OnChildNotify
__SUB_CLASS_THIS(000C5A20, __thiscall, 48150,  CCSWnd_Char, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EC
	jne Block3

 Block1:
	cmp edx,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CCSWnd_Char::OnTabChanged
	ret 0xC

 Block3:
	cmp edx,0x64
	jne Block5

 Block4:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block5:
	ret 0xC
}
}
// CCSWnd_Char::CmpAvatar
__SUB_CLASS_THIS(000BB680, __thiscall, 48158,  CCSWnd_Char, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp edi,0xE
	je Block2

 Block1:
	push edi
	call is_sticker_bodypart
	add esp,4
	test eax,eax
	je Block8

 Block2:
	cmp edi,0xC
	je Block15

 Block3:
	cmp edi,0xD
	je Block15

 Block4:
	cmp edi,0xF
	je Block15

 Block5:
	cmp edi,0x10
	je Block15

 Block6:
	cmp edi,0xE
	jne Block9

 Block7:
	cmp dword ptr [esi+0x490],0
	jne Block11

 Block8:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block9:
	cmp edi,0xB
	jne Block11

 Block10:
	mov ecx,dword ptr [esi+0xBD]
	jmp Block12

 Block11:
	mov ecx,dword ptr [esi+edi*4+0xC1]

 Block12:
	mov eax,dword ptr [esi+edi*8+0x2B0]
	test eax,eax
	je Block8

 Block13:
	cmp ecx,eax
	je Block8

 Block14:
	mov eax,dword ptr [esi+edi*8+0x2B4]
	pop edi
	pop esi
	ret 4

 Block15:
	mov ecx,offset _D_G_ANRINGBODYPART
	jmp Block17

 Block17:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [esi+eax*4+0xC1]
	test eax,eax
	je Block19

 Block18:
	cmp dword ptr [esi+edi*8+0x2B0],eax
	je Block8

 Block19:
	add ecx,4
	cmp ecx,offset _D_G_ANPETABILBODYP
	jl Block17

 Block20:
	mov eax,dword ptr [esi+edi*8+0x2B4]
	pop edi
	pop esi
	ret 4
}
}
// CCSWnd_Locker::OnButtonClicked
__SUB_CLASS_THIS(000BC700, __thiscall, 48371,  CCSWnd_Locker, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block6

 Block1:
	mov edx,dword ptr [ecx+0xADC]
	test edx,edx
	jl Block6

 Block2:
	mov ecx,dword ptr [ecx+0xAE0]
	mov eax,dword ptr [ecx+0x48C]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp edx,eax
	jae Block6

 Block5:
	mov dword ptr [esp+4],edx
	jmp  CCashShop::OnRebateLockerItem

 Block6:
	ret 4
}
}
// CCSWnd_Locker::ResetScrollBar
__SUB_CLASS_THIS0(000BC860, __thiscall, 48368,  CCSWnd_Locker, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAE0]
	add eax,0x48C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [ecx+0x8C]
	lea edx,[eax+5]
	mov eax,0xAAAAAAAB
	mul edx
	shr edx,2
	dec edx
	push edx
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CCSWnd_Char::TransientLayer_Clear
_SUB_EXCEPTION_HANDLER(BCB30)
__SUB_CLASS_THIS0(000BCB30, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BCB30
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
	xor ebx,ebx
	mov dword ptr [ecx+0x4D8],ebx
	cmp dword ptr [ecx+0x4C4],ebx
	je Block23

 Block1:
	mov ecx,dword ptr [ecx+0x4C8]
	mov dword ptr [esp+0x18],ecx
	cmp ecx,ebx
	je Block23

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block3:
	lea eax,[esp+0x18]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x20],edi
	cmp edi,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block5:
	mov dword ptr [esp+0x4C],ebx
	cmp edi,ebx
	je Block24

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [esp+0x14]
	call _rand
	cdq
	mov ecx,0x3E8
	idiv ecx
	lea esi,[edx+esi+0x3E8]
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block25

 Block9:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],esi
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],2
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x4C],3
	cmp esi,ebx
	je Block24

 Block10:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	push 0xFF
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov esi,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x24],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call edx
	cmp dword ptr [esp+0x18],ebx
	jne Block3

 Block23:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	push eax
	call _com_issue_error
}
}
// CCSWnd_Inventory::CCSWnd_Inventory
_SUB_EXCEPTION_HANDLER(80E10)
__SUB_CLASS_THIS0(00080E10, __thiscall, 48406,  CCSWnd_Inventory, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_80E10
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
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_Inventory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_Inventory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_Inventory::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x18],8
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB08],1
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
// zmin_int_
__SUB(000BB970, __cdecl, 145030,  int32_t, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	cmp eax,ecx
	jl Block2

 Block1:
	mov eax,ecx

 Block2:
	ret
}
}
// CCSWnd_Locker::GetLockerIndex
__SUB_CLASS_THIS(000BC7E0, __thiscall, 48379,  CCSWnd_Locker, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0x38]
	lea esi,[eax+eax*2]
	lea ecx,[eax+eax*2+6]
	add esi,esi
	add ecx,ecx
	cmp esi,ecx
	jge Block4

 Block1:
	lea esp,[esp]

 Block2:
	push esi
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CCSWnd_Locker::GetLockerRect
	push ebp
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block3:
	mov ecx,dword ptr [edi+0x8C]
	mov eax,dword ptr [ecx+0x38]
	add eax,2
	lea edx,[eax+eax*2]
	inc esi
	add edx,edx
	cmp esi,edx
	jl Block2

 Block4:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCSWnd_Char::OnCreate
_SUB_EXCEPTION_HANDLER(C4590)
__SUB_CLASS_THIS(000C4590, __thiscall, 48148,  CCSWnd_Char, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C4590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x60],edi
	mov eax,dword ptr [ebp+0x70]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x2C]
	push ecx
	mov dword ptr [edi+0x4E8],eax
	call esi
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[ebp+0x4C]
	push eax
	mov dword ptr [ebp-4],0
	call esi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x4C]
	push eax
	push 0
	push 0xA5
	push 0xD4
	push 0x28
	push 0x18
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x4B4]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x4B4],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x4C],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x4C]
	push edx
	call ebx

 Block17:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x2C],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x2C]
	push ecx
	call ebx

 Block21:
	mov esi,dword ptr [edi+0x4B4]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC0000000
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	push 0
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,2
	mov edx,0xD
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp+0x4C],dx
	mov dword ptr [ebp+0x54],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov esi,dword ptr [edi+0x4B4]
	mov byte ptr [ebp-4],3
	test esi,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov esi,dword ptr [edi+0x4B4]
	test esi,esi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call esi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[ebp+0x2C]
	push ecx
	mov dword ptr [ebp-4],4
	call esi
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	push 0
	push 0
	lea eax,[ebp+0x4C]
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xC6B
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x4AC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x14],si
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x2C],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x4C],si
	jne Block61

 Block59:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	call ebx
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea eax,[ebp+0x2C]
	push eax
	mov dword ptr [ebp-4],esi
	call ebx
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	push 0
	push 0
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xC6C
	mov bl,9
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x4B0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x14],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x2C],si
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	or ebx,0xFFFFFFFF
	mov dword ptr [ebp-4],ebx
	cmp word ptr [ebp+0x4C],si
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov ecx,dword ptr [edi+0x4E8]
	call CCashShop::IsControlingUserPreview
	push eax
	mov ecx,edi
	call CCSWnd_Char::SetUserPreviewControl
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ebp-4],0xC
	test eax,eax
	je Block85

 Block84:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block94

 Block87:
	add eax,8
	je Block94

 Block88:
	lea esi,[eax-8]
	test esi,esi
	je Block90

 Block89:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block90:
	mov eax,dword ptr [edi+0xA4]
	mov dword ptr [edi+0xA4],esi
	mov dword ptr [ebp+0x48],eax
	test eax,eax
	je Block92

 Block91:
	push 0
	lea ecx,[ebp+0x44]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block92:
	mov ecx,dword ptr [edi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0
	push 0x73
	push 0xB
	push 0x8D
	push 3
	push 0x3EC
	push edi
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block93:
	push eax
	call _com_issue_error

 Block94:
	xor esi,esi
	jmp Block90

 Block95:
	lea eax,[ebp+0x2C]
	push eax
	mov dword ptr [ebp-4],0xD
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	xor edi,edi
	push edi
	push edi
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xC68
	mov bl,0xE
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xF
	cmp dword ptr [_D_G_RM],edi
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block102

 Block100:
	cmp eax,0x80004002
	je Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x6C],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x2C],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,edi
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x4C],si
	jne Block113

 Block111:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0x15
	call esi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	push edi
	push edi
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x3C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0xC67
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x17
	cmp dword ptr [_D_G_RM],edi
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block123

 Block121:
	cmp eax,0x80004002
	je Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov esi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x4C],si
	jne Block126

 Block124:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x3C],si
	jne Block130

 Block128:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,edi
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x2C],si
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov dword ptr [ebp+0x5C],edi
	jmp Block137

 Block137:
	mov edi,dword ptr [ebp+0x10]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x3C],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1D
	test edi,edi
	je Block5

 Block138:
	lea eax,[ebp]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block143

 Block139:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x24]
	test eax,eax
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block141:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block143

 Block142:
	cmp edi,0x80004002
	jne Block178

 Block143:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [ebp+0x5C]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x1F
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	je Block5

 Block144:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block149

 Block145:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x28]
	test eax,eax
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block149

 Block148:
	cmp edi,0x80004002
	jne Block178

 Block149:
	mov esi,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi+0xA4]
	mov byte ptr [ebp-4],0x22
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x14],di
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp],di
	jne Block156

 Block154:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,3
	mov dword ptr [ebp+0x5C],eax
	jl Block137

 Block158:
	mov ecx,dword ptr [esi+0xA4]
	push 0
	call CCtrlTab::SetTab
	lea ecx,[ebp-0xC8]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[ebp+0x60]
	push 0x1A25
	push ecx
	mov byte ptr [ebp-4],0x23
	mov dword ptr [ebp-0xA4],0xFFFFFFFF
	mov dword ptr [ebp-0xAC],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,eax
	lea edx,[ebp-0xB4]
	cmp edx,ebx
	je Block170

 Block159:
	mov edi,dword ptr [ebp-0xB4]
	test edi,edi
	je Block168

 Block160:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block167

 Block161:
	test edi,edi
	je Block167

 Block162:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block164

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block164:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block166

 Block165:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block166:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block167:
	mov dword ptr [ebp-0xB4],0

 Block168:
	mov eax,dword ptr [ebx]
	mov dword ptr [ebp-0xB4],eax
	test eax,eax
	je Block170

 Block169:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov edi,dword ptr [ebp+0x60]
	test edi,edi
	je Block179

 Block171:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	xor ebx,ebx
	cmp eax,ebx
	jne Block180

 Block172:
	cmp edi,ebx
	je Block180

 Block173:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block175

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block175:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block177

 Block176:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block177:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	jmp Block180

 Block178:
	push edi
	call _com_issue_error

 Block179:
	xor ebx,ebx

 Block180:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x24
	cmp eax,ebx
	je Block182

 Block181:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block183

 Block182:
	xor eax,eax

 Block183:
	mov byte ptr [ebp-4],0x23
	cmp eax,ebx
	je Block195

 Block184:
	add eax,8
	cmp eax,ebx
	je Block195

 Block185:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block187

 Block186:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block187:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	cmp eax,ebx
	je Block191

 Block188:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block191

 Block189:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block191

 Block190:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block191:
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[ebp-0xC8]
	push eax
	push 0xF
	push 0xB6
	push 0xD6
	push 0x32
	mov dword ptr [ebp-0x98],0x1E
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3EB
	push esi
	call edx
	mov dword ptr [ebp-0x10],ebx
	mov dword ptr [ebp-0x1C],1
	mov dword ptr [ebp-0x18],ebx
	mov dword ptr [ebp-0x14],ebx
	lea eax,[ebp+0x60]
	push 0x4DE
	push eax
	mov byte ptr [ebp-4],0x25
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x26
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block193:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x27
	cmp eax,ebx
	je Block196

 Block194:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block197

 Block195:
	xor edi,edi
	jmp Block187

 Block196:
	xor eax,eax

 Block197:
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block211

 Block198:
	add eax,8
	cmp eax,ebx
	je Block211

 Block199:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block201

 Block200:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block201:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	cmp eax,ebx
	je Block205

 Block202:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block205

 Block203:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block205

 Block204:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block205:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x1C]
	push eax
	push ebx
	push 0xED
	push 0x11
	push 0x3E8
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x522
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x84]
	push ebx
	push 1
	push eax
	mov byte ptr [ebp-4],0x28
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block207

 Block206:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block207:
	lea ecx,[ebp+0x60]
	push 0x4DF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x29
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block209

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block209:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x2A
	cmp eax,ebx
	je Block212

 Block210:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block213

 Block211:
	xor edi,edi
	jmp Block201

 Block212:
	xor eax,eax

 Block213:
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block227

 Block214:
	add eax,8
	cmp eax,ebx
	je Block227

 Block215:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block217

 Block216:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block217:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	cmp eax,ebx
	je Block221

 Block218:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block221

 Block219:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block221

 Block220:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block221:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x1C]
	push eax
	push ebx
	push 0xED
	push 0x65
	push 0x3E9
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x523
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x8C]
	push ebx
	push 1
	push eax
	mov byte ptr [ebp-4],0x2B
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block223

 Block222:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block223:
	lea ecx,[ebp+0x60]
	push 0xB8B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x2C
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block225

 Block224:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block225:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x2D
	cmp eax,ebx
	je Block228

 Block226:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block229

 Block227:
	xor edi,edi
	jmp Block217

 Block228:
	xor eax,eax

 Block229:
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block241

 Block230:
	add eax,8
	cmp eax,ebx
	je Block241

 Block231:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block233

 Block232:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block233:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	cmp eax,ebx
	je Block237

 Block234:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block237

 Block235:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block237

 Block236:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block237:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x1C]
	push eax
	push ebx
	push 0xED
	push 0xBB
	push 0x3EA
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0xB8C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x94]
	push ebx
	push 1
	push eax
	mov byte ptr [ebp-4],0x2E
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x25
	cmp eax,ebx
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block239:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x14]
	push ecx
	call edi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block242

 Block240:
	push eax
	call _com_issue_error

 Block241:
	xor edi,edi
	jmp Block233

 Block242:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x2F
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block244

 Block243:
	push eax
	call _com_issue_error

 Block244:
	push 0
	push 0
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0xC69
	mov bl,0x30
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x31
	jne Block246

 Block245:
	push 0x80004003
	call _com_issue_error

 Block246:
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x32
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	je Block250

 Block247:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov edi,ecx
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	jge Block250

 Block248:
	cmp eax,0x80004002
	je Block250

 Block249:
	push eax
	call _com_issue_error

 Block250:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x34
	jne Block257

 Block251:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block253:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block254:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x35
	jne Block258

 Block255:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block259

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block257:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x8C]
	push eax
	call ebx
	jmp Block254

 Block258:
	lea edx,[ebp]
	push edx
	call ebx

 Block259:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x36
	jne Block262

 Block260:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea ecx,[ebp+0x14]
	push ecx
	call ebx

 Block263:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x5FB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x37
	test edi,edi
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	lea eax,[ebp-0x5C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x36
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x38
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x5C],0
	test eax,eax
	je Block269

 Block266:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	jge Block269

 Block267:
	cmp eax,0x80004002
	je Block269

 Block268:
	push eax
	call _com_issue_error

 Block269:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x3A
	jne Block272

 Block270:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea eax,[ebp-0x5C]
	push eax
	call ebx

 Block273:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x5FC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x3B
	push edx
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3C
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x3C],ebx
	test eax,eax
	je Block277

 Block274:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x3C],ebx
	test eax,eax
	jge Block277

 Block275:
	cmp eax,0x80004002
	je Block277

 Block276:
	push eax
	call _com_issue_error

 Block277:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x3E
	jne Block280

 Block278:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	mov edi,dword ptr [esi+0x49C]
	test edi,edi
	je Block286

 Block282:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block285

 Block283:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block285

 Block284:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block285:
	mov ebx,dword ptr [ebp+0x3C]
	mov dword ptr [esi+0x49C],0

 Block286:
	mov edi,dword ptr [ebp+0x5C]
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CWvsPhysicalSpace2D>>::call
	mov dword ptr [eax+4],1
	add eax,0x10
	mov dword ptr [esi+0x49C],eax
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block288

 Block287:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block288:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block290

 Block289:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block290:
	mov ecx,dword ptr [esi+0x49C]
	call CWvsPhysicalSpace2D::Load
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	call CWvsPhysicalSpace2D::SetFieldAttr
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea edx,[eax+0x2D9]
	push edx
	lea ecx,[eax+0xF9]
	push ecx
	push eax
	lea ecx,[esi+0xA8]
	mov byte ptr [ebp-4],0x3F
	call AvatarLook::Load_1
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x3E
	test eax,eax
	je Block295

 Block291:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block294

 Block292:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block294

 Block293:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block294:
	mov ebx,dword ptr [ebp+0x3C]
	mov edi,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x48],0

 Block295:
	mov eax,dword ptr [esi+0x4A4]
	test eax,eax
	je Block304

 Block296:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block303

 Block297:
	mov eax,dword ptr [esi+0x4A4]
	test eax,eax
	je Block299

 Block298:
	add eax,8
	jmp Block300

 Block299:
	xor eax,eax

 Block300:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+0x4A4]
	test eax,eax
	je Block303

 Block301:
	add eax,8
	je Block303

 Block302:
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block303:
	mov dword ptr [esi+0x4A4],0

 Block304:
	push 0
	call ZRefCounted_AllocHelper<CUserPreview>::call
	add esp,4
	test eax,eax
	je Block306

 Block305:
	add eax,8
	jmp Block307

 Block306:
	xor eax,eax

 Block307:
	mov dword ptr [eax+4],1
	add eax,0xFFFFFFF8
	mov ecx,eax
	mov dword ptr [esi+0x4A4],eax
	call CUserPreview::Init
	mov ecx,esi
	call CCSWnd_Char::OnDefaultAvatar
	mov byte ptr [ebp-4],0x3A
	test ebx,ebx
	je Block309

 Block308:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block309:
	mov byte ptr [ebp-4],0x36
	test edi,edi
	je Block311

 Block310:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block311:
	mov eax,dword ptr [ebp+0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x25
	call eax
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block313

 Block312:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block313:
	lea ecx,[ebp-0xC8]
	mov byte ptr [ebp-4],0x1C
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x14
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xD8]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CCSWnd_Char::GetPersonalShopSN
__SUB_CLASS_THIS0(000BB9F0, __thiscall, 48159,  CCSWnd_Char, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4A4]
	mov eax,dword ptr [eax+0x3AE4]
	ret
}
}
// CCSWnd_Inventory::GetItemSlotRect
__SUB_CLASS_THIS(000BDC10, __thiscall, 48423,  CCSWnd_Inventory, int32_t, long, tagRECT*) {
__asm {

 Block0:
	sub esp,8
	push ebp
	push edi
	lea eax,[esp+8]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push esi
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
	pop esi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [edi+0xB08]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edx,dword ptr [edi+0xB04]
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,edx
	jl Block14

 Block8:
	add edx,0xC
	cmp edx,eax
	jge Block10

 Block9:
	mov eax,edx

 Block10:
	cmp ecx,eax
	jge Block14

 Block11:
	sub ecx,dword ptr [edi+0xB04]
	mov eax,ecx
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	and ecx,0x80000003
	jns Block13

 Block12:
	dec ecx
	or ecx,0xFFFFFFFC
	inc ecx

 Block13:
	imul eax,0x23
	imul ecx,0x23
	lea edx,[eax+0x57]
	push edx
	lea edx,[ecx+0x36]
	push edx
	add eax,0x37
	push eax
	mov eax,dword ptr [esp+0x24]
	add ecx,0x16
	push ecx
	push eax
	call SetRect
	pop edi
	mov eax,1
	pop ebp
	add esp,8
	ret 8

 Block14:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	call SetRectEmpty
	pop edi
	xor eax,eax
	pop ebp
	add esp,8
	ret 8
}
}
// CCSWnd_Locker::GetLockerRect
__SUB_CLASS_THIS(000BC740, __thiscall, 48380,  CCSWnd_Locker, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [esi],0
	mov dword ptr [esi+4],0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0xC],0
	test edx,edx
	jl Block5

 Block1:
	mov eax,dword ptr [ecx+0xAE0]
	add eax,0x48C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block5

 Block3:
	mov eax,dword ptr [ecx+0x8C]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*4]
	sub ecx,eax
	neg ecx
	lea ecx,[edx+ecx*2]
	cmp ecx,0xB
	ja Block5

 Block4:
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	imul eax,0x23
	add edx,edx
	sub ecx,edx
	imul ecx,0x23
	add ecx,0x15
	add eax,0x1E
	mov dword ptr [esi],ecx
	add ecx,0x20
	mov dword ptr [esi+4],eax
	add eax,0x20
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],eax

 Block5:
	mov eax,esi
	pop esi
	ret 8
}
}
// get_substitute_weaponid
__SUB(000BB510, __cdecl, 145023,  long, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,1
	lea esp,[esp]

 Block1:
	mov edx,1
	shl edx,cl
	test eax,edx
	jne Block4

 Block2:
	inc ecx
	cmp ecx,0x11
	jle Block1

 Block3:
	xor eax,eax
	ret

 Block4:
	mov eax,dword ptr [ecx*4+_D_G_ANWEAPONTYPE]
	imul eax,0x2710
	add eax,0xF4A10
	ret
}
}
// CCSWnd_Char::Draw
_SUB_EXCEPTION_HANDLER(BF380)
__SUB_CLASS_THIS(000BF380, __thiscall, 48151,  CCSWnd_Char, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BF380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x74]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	xor esi,esi
	mov dword ptr [esp+0x6C],esi
	mov dword ptr [esp+0x24],esi
	lea edx,[esp+0x74]
	push 1
	push edx
	mov byte ptr [esp+0x74],1
	call get_basic_font
	lea eax,[esp+0x28]
	push 0x38
	push eax
	mov byte ptr [esp+0x7C],2
	call get_basic_font
	add esp,0x10
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x70],3
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x30]
	cmp eax,esi
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
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
	mov ecx,dword ptr [ebx+0x4E8]
	mov edx,dword ptr [ecx+0x44]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	mov dword ptr [esp+0x20],edx
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x70],4
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x70],5
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [edi+0x20CC]
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x74],6
	push edx
	test eax,eax
	je Block12

 Block11:
	add eax,4
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x44]
	push 0x10C
	push eax
	mov eax,dword ptr [edi+0x20CC]
	mov bl,7
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block15

 Block14:
	add eax,4
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x90]
	mov byte ptr [esp+0x88],8
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x88],bl
	call IWzFont::CalcTextWidth
	mov ebp,dword ptr [esp+0x2C]
	test ebp,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,0xE1
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x84],6
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x6C],5
	cmp word ptr [esp+0x34],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x44],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x6C],3
	cmp word ptr [esp+0x54],di
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x70],9
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ebx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0xA
	test ebx,ebx
	je Block38

 Block37:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x4E8]
	mov edi,dword ptr [ecx+0x4A4]
	jmp Block39

 Block38:
	mov edi,offset _S___28

 Block39:
	lea edx,[esp+0x54]
	push edx
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov byte ptr [esp+0x6C],0xB
	test ebx,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x4E8]
	mov esi,dword ptr [edx+0x4A4]
	jmp Block44

 Block43:
	mov esi,offset _S___28

 Block44:
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_0
	push 0x11F
	lea eax,[esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,0xC
	push esi
	mov byte ptr [esp+0x8C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x90]
	mov byte ptr [esp+0x88],0xD
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov byte ptr [esp+0x88],bl
	call IWzFont::CalcTextWidth
	mov ecx,0xE1
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x84],0xB
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x6C],0xA
	cmp word ptr [esp+0x54],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x6C],9
	cmp word ptr [esp+0x44],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x6C],3
	cmp word ptr [esp+0x34],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],2
	test eax,eax
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CCSWnd_Char::SetPet
__SUB_CLASS_THIS(000BC400, __thiscall, 48157,  CCSWnd_Char, void, long, long, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4A4]
	mov eax,dword ptr [eax+0x19E4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block9

 Block4:
	mov eax,dword ptr [esp+8]
	cmp dword ptr [esi+0x490],eax
	jne Block7

 Block5:
	cmp dword ptr [esp+0x10],0
	jne Block8

 Block6:
	mov dword ptr [esi+0x494],0
	mov dword ptr [esi+0x490],0
	jmp Block8

 Block7:
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+0x490],eax
	mov dword ptr [esi+0x494],edx

 Block8:
	mov eax,dword ptr [esi+0x490]
	mov ecx,dword ptr [esi+0x4A4]
	push eax
	call CUserPreview::SetPet

 Block9:
	pop esi
	ret 0xC
}
}
// CCSWnd_Char::OnDestroy
__SUB_CLASS_THIS0(000BD480, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x49C]
	push esi
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
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov dword ptr [ebx+0x49C],0
	pop edi

 Block5:
	cmp dword ptr [ebx+0x4A4],0
	lea esi,[ebx+0x4A0]
	je Block7

 Block6:
	push 0
	mov ecx,esi
	call ZRef<CUserPreview>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block7:
	pop esi
	pop ebx
	ret
}
}
// CCSWnd_Inventory::OnButtonClicked
__SUB_CLASS_THIS(000BB840, __thiscall, 48414,  CCSWnd_Inventory, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC16
	cmp eax,5
	ja Block8

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
je Block6
cmp EAX, 5
je Block7


 Block2:
	mov ecx,dword ptr [ecx+0xB10]
	mov dword ptr [esp+4],1
	jmp  CCashShop::OnExItemSlot

 Block3:
	mov ecx,dword ptr [ecx+0xB10]
	mov dword ptr [esp+4],2
	jmp  CCashShop::OnExItemSlot

 Block4:
	mov ecx,dword ptr [ecx+0xB10]
	mov dword ptr [esp+4],3
	jmp  CCashShop::OnExItemSlot

 Block5:
	mov ecx,dword ptr [ecx+0xB10]
	mov dword ptr [esp+4],4
	jmp  CCashShop::OnExItemSlot

 Block6:
	mov ecx,dword ptr [ecx+0xB10]
	mov dword ptr [esp+4],5
	jmp  CCashShop::OnExItemSlot

 Block7:
	mov ecx,dword ptr [ecx+0xB10]
	call CCashShop::OnIncTrunkCount

 Block8:
	ret 4
}
}
// CCSWnd_Char::Update
__SUB_CLASS_THIS0(000BD800, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x4A4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::UpdateBeforeUserUpdate
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	mov ecx,esi
	call CWnd::Update
	cmp dword ptr [esi+0x4D4],0
	je Block14

 Block1:
	push edi
	mov edi,dword ptr [ZImports::_timeGetTime]
	call edi
	sub eax,dword ptr [esi+0x4D0]
	cmp eax,0xFA0
	jbe Block3

 Block2:
	mov ecx,esi
	call CCSWnd_Char::DeleteFloatNotice

 Block3:
	cmp dword ptr [esi+0x4D8],0
	je Block7

 Block4:
	call edi
	sub eax,dword ptr [esi+0x4D0]
	cmp eax,0x1388
	jbe Block6

 Block5:
	mov ecx,esi
	call CCSWnd_Char::TransientLayer_Clear

 Block6:
	cmp dword ptr [esi+0x4D8],0
	jne Block13

 Block7:
	call edi
	sub eax,dword ptr [esi+0x4D0]
	cmp eax,0x1B58
	jbe Block13

 Block8:
	mov eax,dword ptr [esi+0x4C8]
	mov dword ptr [esi+0x4D4],0
	mov dword ptr [esp+8],eax
	test eax,eax
	je Block12

 Block9:
	push ebx
	lea ebx,[esi+0x4BC]
	mov edi,edi

 Block10:
	mov edi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	add esp,4
	push edi
	mov ecx,ebx
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block10

 Block11:
	pop ebx

 Block12:
	mov ecx,dword ptr [esi+0x4A4]
	pop edi
	pop esi
	add esp,4
	jmp  CUserPreview::DeleteFireCrack

 Block13:
	pop edi

 Block14:
	pop esi
	pop ecx
	ret
}
}
// CCSWnd_Locker::OnDestroy
__SUB_CLASS_THIS0(000BB7A0, __thiscall, 48368,  CCSWnd_Locker, void) {
__asm {

 Block0:
	ret
}
}
// CCSWnd_Inventory::OnCreate
_SUB_EXCEPTION_HANDLER(C34F0)
__SUB_CLASS_THIS(000C34F0, __thiscall, 48409,  CCSWnd_Inventory, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C34F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	mov eax,dword ptr [ebp+0x70]
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xB10],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [ebp-4],0xFFFFFFFF
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
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [ebp+0x58],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[ebp+0x54]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push ebx
	push 0x9C
	push 0x1C
	push 0x11
	push 4
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0x84]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	mov edi,1
	push ecx
	mov dword ptr [eax+0x34],edi
	mov dword ptr [eax+0x38],ebx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	lea eax,[ebp-0x3C]
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	xor edi,edi
	push edi
	push edi
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xC94
	mov bl,2
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [ebp-0x4C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],6
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x4C]
	push ecx
	call ebx

 Block23:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],7
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x3C]
	push eax
	call ebx

 Block27:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block31:
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push edi
	push edi
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xC95
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x5C],si
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp-0x5C]
	push eax
	call ebx

 Block44:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],si
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x1C]
	push edx
	call ebx

 Block48:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[ebp]
	push ecx
	call ebx

 Block52:
	mov dword ptr [ebp+0x50],edi
	jmp Block54

 Block54:
	mov edi,dword ptr [ebp+0x4C]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x48],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block15

 Block55:
	lea eax,[ebp+0x24]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block60

 Block56:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x10]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block60

 Block59:
	cmp edi,0x80004002
	jne Block169

 Block60:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x13
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block15

 Block61:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block66

 Block62:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x5C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x5C]
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block66

 Block65:
	cmp edi,0x80004002
	jne Block169

 Block66:
	mov esi,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi+0x84]
	mov byte ptr [ebp-4],0x16
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+0x14],di
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x24],di
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [ebp+0x50]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x50],eax
	jl Block54

 Block75:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block77

 Block76:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block82

 Block79:
	add eax,8
	je Block82

 Block80:
	lea edi,[eax-8]
	test edi,edi
	je Block83

 Block81:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[edi+0xC]
	push ecx
	call ebx
	jmp Block84

 Block82:
	xor edi,edi

 Block83:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block84:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	test eax,eax
	je Block88

 Block85:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block86:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block88

 Block87:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block88:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	xor edi,edi
	push edi
	push 0x66
	push 0x36
	push 0xA0
	push edi
	push 1
	push 0x3E9
	push esi
	call eax
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [eax+0x34],0x8C
	mov ecx,dword ptr [esi+0x84]
	push edi
	mov dword ptr [esi+0xB04],1
	call CCtrlTab::SetTab
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x34],1
	mov dword ptr [ebp+0x38],edi
	mov dword ptr [ebp+0x3C],edi
	lea ecx,[ebp+0x60]
	push 0x4E2
	push ecx
	mov byte ptr [ebp-4],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x19
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x1A
	cmp eax,edi
	je Block92

 Block91:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block105

 Block94:
	add eax,8
	cmp eax,edi
	je Block105

 Block95:
	lea edi,[eax-8]
	test edi,edi
	je Block97

 Block96:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block97:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	test eax,eax
	je Block101

 Block98:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block101

 Block99:
	lea ecx,[edi+4]
	push ecx
	call ebx
	test edi,edi
	je Block101

 Block100:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block101:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0x1B
	push 0xB0
	push 0x3EA
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x4E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x1B
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block103:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block106

 Block104:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block107

 Block105:
	xor edi,edi
	jmp Block97

 Block106:
	xor eax,eax

 Block107:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block119

 Block108:
	add eax,8
	je Block119

 Block109:
	lea edi,[eax-8]
	test edi,edi
	je Block111

 Block110:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block111:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	test eax,eax
	je Block115

 Block112:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block115

 Block113:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block115

 Block114:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block115:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0x36
	push 0xB0
	push 0x3EB
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x4E4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x1D
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block117:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block120

 Block118:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block121

 Block119:
	xor edi,edi
	jmp Block111

 Block120:
	xor eax,eax

 Block121:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block133

 Block122:
	add eax,8
	je Block133

 Block123:
	lea edi,[eax-8]
	test edi,edi
	je Block125

 Block124:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block125:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	test eax,eax
	je Block129

 Block126:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block129

 Block127:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block129

 Block128:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block129:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0x51
	push 0xB0
	push 0x3EC
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x4E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x1F
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block131:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block134

 Block132:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block135

 Block133:
	xor edi,edi
	jmp Block125

 Block134:
	xor eax,eax

 Block135:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block147

 Block136:
	add eax,8
	je Block147

 Block137:
	lea edi,[eax-8]
	test edi,edi
	je Block139

 Block138:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block139:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	test eax,eax
	je Block143

 Block140:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block143

 Block141:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block143

 Block142:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block143:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0x6C
	push 0xB0
	push 0x3ED
	push esi
	call edx
	lea eax,[ebp+0x60]
	push 0x4E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x21
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block145:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block148

 Block146:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block149

 Block147:
	xor edi,edi
	jmp Block139

 Block148:
	xor eax,eax

 Block149:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block159

 Block150:
	add eax,8
	je Block159

 Block151:
	lea edi,[eax-8]
	test edi,edi
	je Block153

 Block152:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block153:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	test eax,eax
	je Block157

 Block154:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block157

 Block155:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block157

 Block156:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block157:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0x87
	push 0xB0
	push 0x3EF
	push esi
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call edi
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block158:
	push eax
	call _com_issue_error

 Block159:
	xor edi,edi
	jmp Block153

 Block160:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x23
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	push 0
	push 0
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block170

 Block165:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x5C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi+0xB00]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x5C]
	test eax,eax
	je Block167

 Block166:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block167:
	mov dword ptr [esi+0xB00],ebx
	test edi,edi
	jge Block172

 Block168:
	cmp edi,0x80004002
	je Block172

 Block169:
	push edi
	call _com_issue_error

 Block170:
	mov eax,dword ptr [esi+0xB00]
	test eax,eax
	je Block172

 Block171:
	mov dword ptr [esi+0xB00],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x24
	jne Block175

 Block173:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov edi,8
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x24],di
	jne Block179

 Block177:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x14],di
	jne Block183

 Block181:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	or edi,0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esi+0xB0C],edi
	call CCSWnd_Inventory::EnableExButton
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block186

 Block185:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block186:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],edi
	call edx
	lea esp,[ebp-0x7C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CCSWnd_Char::CmpPet
_SUB_EXCEPTION_HANDLER(BDFD0)
__SUB_CLASS_THIS0(000BDFD0, __thiscall, 48159,  CCSWnd_Char, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BDFD0
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
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	xor ebp,ebp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x14],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],ebp

 Block5:
	mov ecx,dword ptr [esi+0x1F]
	mov edx,dword ptr [esi+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	cmp eax,ebp
	je Block7

 Block6:
	push eax
	push 5
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x3C],ebp
	mov ebx,1
	add eax,0xC
	jmp Block8

 Block7:
	push ebp
	lea ecx,[esp+0x2C]
	call TSecType<long>::_ctor_1
	mov dword ptr [esp+0x3C],1
	mov ebx,2

 Block8:
	mov ecx,eax
	mov dword ptr [esp+0x14],ebx
	call TSecType<long>::GetData
	mov esi,eax
	mov dword ptr [esp+0x3C],ebp
	test bl,2
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block11

 Block10:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test bl,1
	je Block16

 Block12:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block16

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	je Block16

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block16:
	mov eax,dword ptr [edi+0x490]
	cmp eax,ebp
	je Block19

 Block17:
	cmp esi,eax
	je Block19

 Block18:
	mov eax,dword ptr [edi+0x494]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block19:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CCSWnd_Char::SetRiding
_SUB_EXCEPTION_HANDLER(BC490)
__SUB_CLASS_THIS(000BC490, __thiscall, 48160,  CCSWnd_Char, int32_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BC490
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
	xor ebx,ebx
	cmp edi,ebx
	je Block22

 Block1:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea eax,[esp+0x28]
	push eax
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	sete al
	mov dword ptr [esp+0x1C],ebx
	cmp al,bl
	je Block4

 Block2:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp ecx,ebx
	je Block22

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block22

 Block4:
	cmp dword ptr [esi+0x340],ebx
	je Block7

 Block5:
	cmp dword ptr [esi+0x348],ebx
	je Block7

 Block6:
	mov eax,dword ptr [esi+0x4A4]
	mov dword ptr [esi+0x344],ebx
	mov dword ptr [esi+0x340],ebx
	mov dword ptr [esi+0x34C],ebx
	mov dword ptr [esi+0x348],ebx
	mov dword ptr [eax+0x5F8],ebx
	mov ecx,dword ptr [esp+0x24]

 Block7:
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+ebp*8+0x2B0],edi
	mov dword ptr [esi+ebp*8+0x2B4],edx
	cmp dword ptr [esi+0x340],ebx
	je Block20

 Block8:
	mov eax,dword ptr [esi+0x348]
	cmp eax,ebx
	je Block20

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	cmp eax,ebx
	je Block14

 Block10:
	mov ecx,dword ptr [esi+0x340]
	push ecx
	mov ecx,eax
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	je Block14

 Block11:
	mov eax,dword ptr [esi+0x4A4]
	mov esi,dword ptr [esi+0x340]
	mov dword ptr [eax+0x5F8],esi
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov eax,1
	jmp Block23

 Block14:
	cmp ebp,0x12
	jne Block16

 Block15:
	mov dword ptr [esi+0x348],ebx
	mov dword ptr [esi+0x34C],ebx
	jmp Block18

 Block16:
	cmp ebp,0x13
	jne Block18

 Block17:
	mov dword ptr [esi+0x340],ebx
	mov dword ptr [esi+0x344],ebx

 Block18:
	mov esi,dword ptr [esi+0x4A4]
	mov dword ptr [esi+0x5F8],ebx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block22

 Block20:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp ecx,ebx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block22:
	xor eax,eax

 Block23:
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
// _ZtlSecureFuse_CLadderOrRope__
__SUB(000BB930, __cdecl, 145029,  CLadderOrRope*, CLadderOrRope**, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	mov eax,edx
	rol eax,5
	xor eax,ecx
	xor ecx,0xBAADF00D
	ror ecx,5
	add ecx,edx
	cmp ecx,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	ret
}
}
// CCSWnd_Inventory::ResetInfo
__SUB_CLASS_THIS0(000BE620, __thiscall, 48408,  CCSWnd_Inventory, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCSWnd_Inventory::EnableExButton
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx+0x44]
	push eax
	call CCtrlTab::SetTab
	pop esi
	ret
}
}
// CCSWnd_Char::OnTabChanged
_SUB_EXCEPTION_HANDLER(BF040)
__SUB_CLASS_THIS(000BF040, __thiscall, 48156,  CCSWnd_Char, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BF040
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x2C],ecx
	mov eax,3
	xor edi,edi
	mov word ptr [ebp-0x40],ax
	mov dword ptr [ebp-0x38],edi
	mov ecx,dword ptr [ecx+0x4B4]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp-0x30]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],2
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [ebp-0x18],edi
	lea eax,[ebp-0x14]
	push 0xC6A
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x18]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x50]
	push eax
	call esi
	lea ecx,[ebp-0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea edx,[ebp-0x60]
	push edx
	mov byte ptr [ebp-4],5
	call esi
	lea eax,[ebp-0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	push edi
	push edi
	mov edi,dword ptr [ebp-0x18]
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],6
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],7
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[ebp-0x70]
	mov byte ptr [ebp-4],6
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov esi,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x70],si
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x60],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x50],si
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov ecx,3
	mov word ptr [ebp-0x28],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0x20],ecx
	mov esi,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0xD
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edi,dword ptr [ebp-0x28]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x24]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x14]
	push edi
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x1C]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0xC
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ecx,dword ptr [ebp-0x2C]
	push 0
	call CWnd::InvalidateRect
	mov byte ptr [ebp-4],3
	test edi,edi
	je Block39

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block39:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x7C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CCSWnd_Locker::ClearToolTip
__SUB_CLASS_THIS0(00080CF0, __thiscall, 48377,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x8C
	jmp  CUIToolTip::ClearToolTip
}
}
// CCSWnd_Inventory::OnDestroy
__SUB_CLASS_THIS0(000BB830, __thiscall, 48408,  CCSWnd_Inventory, void) {
__asm {

 Block0:
	add ecx,0xB8
	jmp  CUIToolTip::ClearToolTip
}
}
// CCSWnd_Inventory::EnableExButton
__SUB_CLASS_THIS0(000BD9D0, __thiscall, 48408,  CCSWnd_Inventory, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push esi
	push edi
	lea eax,[esp+0xC]
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	push ebp
	lea ebx,[eax-0x10]
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block4:
	mov dword ptr [esp+0x14],0
	pop ebp

 Block5:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [edi+0x505]
	add ecx,4
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edx,dword ptr [ecx]
	add eax,3
	xor ebx,ebx
	cmp eax,0x60
	mov eax,dword ptr [edx+0x1C]
	setle bl
	push ebx
	call eax
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [edi+0x509]
	add ecx,4
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	mov edx,dword ptr [ecx]
	add eax,3
	xor ebx,ebx
	cmp eax,0x60
	mov eax,dword ptr [edx+0x1C]
	setle bl
	push ebx
	call eax
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [edi+0x50D]
	add ecx,4
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]

 Block11:
	mov edx,dword ptr [ecx]
	add eax,3
	xor ebx,ebx
	cmp eax,0x60
	mov eax,dword ptr [edx+0x1C]
	setle bl
	push ebx
	call eax
	mov ecx,dword ptr [esi+0xAC]
	mov edi,dword ptr [edi+0x511]
	add ecx,4
	test edi,edi
	je Block13

 Block12:
	mov edi,dword ptr [edi-4]

 Block13:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	xor eax,eax
	add edi,3
	cmp edi,0x60
	setle al
	push eax
	call edx
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret
}
}
// CCSWnd_Char::ShowADBoard
__SUB_CLASS_THIS(000BBB10, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x4A4]
	jmp  CUserPreview::ShowADBoard
}
}
// CCSWnd_Char::OnButtonClicked
__SUB_CLASS_THIS(000BB630, __thiscall, 48149,  CCSWnd_Char, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x4E8]
	call CCashShop::RestoreFocus
	mov eax,dword ptr [esp+8]
	sub eax,0x3E8
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov ecx,dword ptr [esi+0x4E8]
	call CCashShop::OnTakeOff
	pop esi
	ret 4

 Block4:
	mov ecx,dword ptr [esi+0x4E8]
	call CCashShop::OnDefaultAvatar
	pop esi
	ret 4

 Block5:
	mov ecx,dword ptr [esi+0x4E8]
	call CCashShop::OnBuyAvatar

 Block6:
	pop esi
	ret 4
}
}
// CCSWnd_Char::SetUserPreviewControl
_SUB_EXCEPTION_HANDLER(BD5F0)
__SUB_CLASS_THIS(000BD5F0, __thiscall, 48165,  CCSWnd_Char, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BD5F0
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
	call CWnd::GetLayer
	mov esi,dword ptr [esp+0x10]
	cmp dword ptr [esp+0x2C],0
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],0
	mov dword ptr [eax],esi
	je Block17

 Block1:
	mov dword ptr [esp+0x24],esp
	test esi,esi
	je Block3

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block3:
	push 0x78
	push 0x82
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ebp,esp
	push ecx
	mov eax,esp
	mov dword ptr [ebp],0
	mov byte ptr [esp+0x44],1
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block5:
	mov ecx,ebp
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [edi+0x4AC]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x4C],0
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [edi+0x4A8]
	add esp,0x28
	cmp ebp,eax
	je Block15

 Block11:
	mov dword ptr [edi+0x4A8],eax
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	test ebp,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block15:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block33

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block33

 Block17:
	mov dword ptr [esp+0x28],esp
	test esi,esi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block19:
	push 0x11
	push 0x77
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ebp,esp
	push ecx
	mov eax,esp
	mov dword ptr [ebp],0
	mov byte ptr [esp+0x44],2
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block21:
	mov ecx,ebp
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block24

 Block22:
	cmp eax,0x80004002
	je Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov eax,dword ptr [edi+0x4B0]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],0
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [edi+0x4A8]
	add esp,0x28
	cmp ebp,eax
	je Block31

 Block27:
	mov dword ptr [edi+0x4A8],eax
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	test ebp,ebp
	je Block31

 Block30:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block31:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block35

 Block34:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block35:
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
// CCSWnd_Inventory::OnChildNotify
_SUB_EXCEPTION_HANDLER(C4160)
__SUB_CLASS_THIS(000C4160, __thiscall, 48410,  CCSWnd_Inventory, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C4160
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x38]
	cmp edi,0x3E8
	jne Block3

 Block1:
	cmp dword ptr [esp+0x3C],0x1F4
	jne Block7

 Block2:
	mov eax,dword ptr [esp+0x40]
	push eax
	call CCSWnd_Inventory::OnTabChanged
	jmp Block9

 Block3:
	cmp edi,0x3E9
	jne Block10

 Block4:
	cmp dword ptr [esp+0x3C],0x12C
	jb Block7

 Block5:
	cmp dword ptr [esp+0x3C],0x130
	ja Block7

 Block6:
	lea ecx,[esi+0xB8]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esi+0xB08]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [ecx*4+CCSWnd_Inventory::ms_anItemScrollPos],eax
	lea edx,[eax*4+1]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB04],edx
	call CWnd::InvalidateRect

 Block7:
	cmp dword ptr [esp+0x3C],0x64
	jne Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block9:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC

 Block10:
	lea eax,[edi-0x3EA]
	xor ebp,ebp
	cmp eax,3
	ja Block38

 Block11:
	cmp dword ptr [esp+0x3C],0x65
	jne Block38

 Block12:
	test byte ptr [_D__S3__12],1
	jne Block14

 Block13:
	or dword ptr [_D__S3__12],1
	push ebp
	push offset _S_
	push ebp
	push ebp
	mov ecx,offset _D_S_ASCATEGORY__1
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [_D_S_ASCATEGORY__1],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,offset _D_S_ASCATEGORY__1
	call ZXString<char>::ReleaseBuffer
	push 0xA
	push offset _D_S_ASCATEGORY__1+4
	mov byte ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x1A87
	push offset _D_S_ASCATEGORY__1+8
	mov byte ptr [esp+0x38],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xB
	push offset _D_S_ASCATEGORY__1+12
	mov byte ptr [esp+0x38],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x1A38
	push offset _D_S_ASCATEGORY__1+16
	mov byte ptr [esp+0x38],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	// TODO: 	push offset `dynamic atexit destructor for '`TSimpleSingleton<CDayOfWeek>::GetInstance'::`2'::singleton''+768
	call _atexit
	add esp,4
	mov dword ptr [esp+0x30],0xFFFFFFFF

 Block14:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x30],5
	mov dword ptr [esp+0x18],ebp
	lea edx,[esp+0x1C]
	push 0x253
	mov bl,6
	push edx
	mov byte ptr [esp+0x38],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx*4+0xC69B44]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea ecx,[esp+0x1C]
	push 0x254
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [edi+edx*4-0xAA3]
	mov byte ptr [esp+0x30],8
	cmp edi,ebp
	jne Block18

 Block17:
	xor ecx,ecx
	jmp Block19

 Block18:
	mov ecx,dword ptr [edi-4]

 Block19:
	mov edx,dword ptr [edx*4+0xC69B44]
	mov eax,dword ptr [eax]
	push 0xFA0
	push 0x60
	dec ecx
	push ecx
	push edx
	push 4
	push eax
	lea eax,[esp+0x2C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x1C
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x38]
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x18]
	add eax,0xFFFFFC16
	cmp eax,3
	ja Block33

 Block22:
	cmp EAX, 0
je Block23
cmp EAX, 1
je Block25
cmp EAX, 2
je Block27
cmp EAX, 3
je Block29


 Block23:
	mov ecx,dword ptr [esi+0x94]
	cmp dword ptr [esp+0x40],ebp
	jne Block31

 Block24:
	push ebp
	push ebp
	push ebp
	jmp Block32

 Block25:
	mov ecx,dword ptr [esi+0x9C]
	cmp dword ptr [esp+0x40],ebp
	jne Block31

 Block26:
	push ebp
	push ebp
	push ebp
	jmp Block32

 Block27:
	mov ecx,dword ptr [esi+0xA4]
	cmp dword ptr [esp+0x40],ebp
	jne Block31

 Block28:
	push ebp
	push ebp
	push ebp
	jmp Block32

 Block29:
	mov ecx,dword ptr [esi+0xAC]
	cmp dword ptr [esp+0x40],ebp
	jne Block31

 Block30:
	push ebp
	push ebp
	push ebp
	jmp Block32

 Block31:
	push 1
	push ebx
	push edi

 Block32:
	call CCtrlButton::SetToolTip

 Block33:
	mov byte ptr [esp+0x30],5
	cmp edi,ebp
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp ebx,ebp
	je Block37

 Block36:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov edi,dword ptr [esp+0x38]

 Block38:
	cmp edi,0x3EF
	jne Block7

 Block39:
	cmp dword ptr [esp+0x3C],0x65
	jne Block7

 Block40:
	cmp dword ptr [esp+0x40],ebp
	jne Block42

 Block41:
	mov ecx,dword ptr [esi+0xB4]
	push ebp
	push ebp
	push ebp
	call CCtrlButton::SetToolTip
	jmp Block9

 Block42:
	mov dword ptr [esp+0x40],ebp
	lea ecx,[esp+0x38]
	push 0x251
	mov ebx,9
	push ecx
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xB10]
	mov ecx,dword ptr [edx+0x490]
	mov eax,dword ptr [eax]
	push 0xFA0
	push ecx
	push 4
	push eax
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x44],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0x14
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea ecx,[esp+0x38]
	push 0x250
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB4]
	mov esi,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push 1
	push esi
	push eax
	mov byte ptr [esp+0x3C],0xB
	call CCtrlButton::SetToolTip
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebp
	je Block9

 Block47:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block9
}
}
// CCSWnd_Char::TransientLayer_Weather
_SUB_EXCEPTION_HANDLER(C0F30)
__SUB_CLASS_THIS(000C0F30, __thiscall, 48169,  CCSWnd_Char, void, NakedParam<ZXString16>, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C0F30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x27C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ecx+0x4D8],1
	add ecx,0x4BC
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x208],ecx
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov dword ptr [ebp+0x38],edi
	mov dword ptr [ebp+0x18],edi
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],2
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x248]
	push eax
	call esi
	lea ecx,[ebp-0x248]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x228]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x228]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [ebp+0x6C]
	push edi
	push edi
	lea ecx,[ebp-0x248]
	push ecx
	lea edx,[ebp-0x228]
	push edx
	push ecx
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x258]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0xC]
	mov dword ptr [ebp+0xC],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x258],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x250]
	xor edx,edx
	mov word ptr [ebp-0x258],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x258]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x228],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x220]
	xor ecx,ecx
	mov word ptr [ebp-0x228],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x228]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x248],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x248],ax
	mov eax,dword ptr [ebp-0x240]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x248]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x20],esp
	push 0x616
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xB
	test edi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x24]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	mov dword ptr [ebp-0x204],esi
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x24],bx
	jne Block26

 Block24:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	test esi,esi
	jne Block50

 Block28:
	mov dword ptr [ebp+0x44],esi

 Block29:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push edi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block31:
	cmp esi,dword ptr [ebp+0x5C]
	jae Block50

 Block32:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],0xD
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block40

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+8]
	cmp dword ptr [ebp+0x38],0
	je Block35

 Block34:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov dword ptr [ebp+0x38],ebx
	test esi,esi
	jge Block37

 Block36:
	cmp esi,0x80004002
	jne Block49

 Block37:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xA
	jne Block43

 Block38:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block44

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block40:
	cmp dword ptr [ebp+0x38],0
	je Block37

 Block41:
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x38],0
	test eax,eax
	je Block37

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block37

 Block43:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,dword ptr [ebp+0x38]
	test ebx,ebx
	je Block48

 Block45:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x18]
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov esi,dword ptr [eax]
	cmp esi,ebx
	je Block48

 Block46:
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax
	test esi,esi
	je Block48

 Block47:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block48:
	inc dword ptr [ebp+0x44]
	mov esi,dword ptr [ebp+0x44]
	mov ebx,8
	jmp Block29

 Block49:
	push esi
	call _com_issue_error

 Block50:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	push 0x624
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0xF
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x24],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x20C],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x24],bx
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x20],esp
	push 0x1AA6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],0x13
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	mov esi,eax
	call _rand
	cdq
	mov ecx,0x19
	idiv ecx
	mov eax,0x10624DD3
	mov byte ptr [ebp-4],0xA
	add edx,0x1E
	imul esi,edx
	imul esi
	sar edx,4
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov dword ptr [ebp+0x20],esi
	cmp word ptr [ebp+0x24],bx
	jne Block61

 Block59:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,6
	sub eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+8],0
	imul eax,0x1388
	mov dword ptr [ebp+0x78],eax
	test esi,esi
	jle Block393

 Block63:
	lea esp,[esp]

 Block64:
	call _rand
	cdq
	mov ecx,3
	idiv ecx
	mov esi,edx
	call _rand
	cdq
	mov ecx,3
	idiv ecx
	imul edx,esi
	add edx,0xF
	mov dword ptr [ebp+0x1C],edx
	call _rand
	cdq
	mov ecx,0x168
	idiv ecx
	mov dword ptr [ebp+0x5C],edx
	call _rand
	cdq
	mov ecx,0xBB8
	idiv ecx
	mov ebx,dword ptr [ebp-0x204]
	xor esi,esi
	add edx,ecx
	mov dword ptr [ebp-0x1E8],edx
	cmp ebx,esi
	jne Block68

 Block65:
	mov eax,dword ptr [ebp+0x18]
	cmp eax,esi
	je Block67

 Block66:
	mov esi,dword ptr [eax-4]

 Block67:
	call _rand
	xor edx,edx
	div esi
	mov dword ptr [ebp+0x4C],edx
	jmp Block69

 Block68:
	mov dword ptr [ebp+0x4C],esi

 Block69:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,6
	ja Block78

 Block70:
	cmp EAX, 0
je Block71
cmp EAX, 1
je Block72
cmp EAX, 2
je Block73
cmp EAX, 3
je Block74
cmp EAX, 4
je Block75
cmp EAX, 5
je Block76
cmp EAX, 6
je Block77


 Block71:
	call _rand
	cdq
	mov ecx,0xD4
	idiv ecx
	mov esi,edx
	add esi,0x18
	mov dword ptr [ebp+0x40],esi
	call _rand
	cdq
	mov ecx,0xA5
	idiv ecx
	mov edi,edx
	add edi,0x28
	mov dword ptr [ebp+0x50],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	add edi,0x52
	mov dword ptr [ebp+0x48],edi
	lea edx,[edx+esi-0x64]
	mov dword ptr [ebp+0x3C],edx
	jmp Block78

 Block72:
	call _rand
	cdq
	mov ecx,0xD4
	idiv ecx
	mov esi,edx
	add esi,0x18
	mov dword ptr [ebp+0x40],esi
	call _rand
	cdq
	mov ecx,0xA5
	idiv ecx
	mov edi,edx
	add edi,0x28
	mov dword ptr [ebp+0x50],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	add edi,0xFFFFFFAE
	mov dword ptr [ebp+0x48],edi
	lea edx,[edx+esi-0x64]
	mov dword ptr [ebp+0x3C],edx
	jmp Block78

 Block73:
	call _rand
	cdq
	mov ecx,0xD4
	idiv ecx
	mov esi,edx
	add esi,0x18
	mov dword ptr [ebp+0x40],esi
	call _rand
	cdq
	mov ecx,0xA5
	idiv ecx
	add esi,0xFFFFFF96
	mov dword ptr [ebp+0x3C],esi
	mov edi,edx
	add edi,0x28
	mov dword ptr [ebp+0x50],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+edi-0x64]
	mov dword ptr [ebp+0x48],edx
	jmp Block78

 Block74:
	call _rand
	cdq
	mov ecx,0xD4
	idiv ecx
	mov esi,edx
	add esi,0x18
	mov dword ptr [ebp+0x40],esi
	call _rand
	cdq
	mov ecx,0xA5
	idiv ecx
	add esi,0x6A
	mov dword ptr [ebp+0x3C],esi
	mov edi,edx
	add edi,0x28
	mov dword ptr [ebp+0x50],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+edi-0x64]
	mov dword ptr [ebp+0x48],edx
	jmp Block78

 Block75:
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	add edx,0x78
	mov dword ptr [ebp+0x40],edx
	call _rand
	fild dword ptr [ebp+0x5C]
	cdq
	mov ecx,0x14
	idiv ecx
	fst qword ptr [ebp-0x14]
	add edx,0xC3
	mov dword ptr [ebp+0x50],edx
	call __CIcos
	fmul qword ptr [__real_4068800000000000]
	fadd qword ptr [__real_4060400000000000]
	call __ftol2_sse
	fld qword ptr [ebp-0x14]
	mov dword ptr [ebp+0x3C],eax
	call __CIsin
	fabs
	fmul qword ptr [__real_4068800000000000]
	fadd qword ptr [__real_4044000000000000]
	call __ftol2_sse
	mov dword ptr [ebp+0x48],eax
	jmp Block78

 Block76:
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	add edx,0x78
	mov dword ptr [ebp+0x40],edx
	call _rand
	fild dword ptr [ebp+0x5C]
	cdq
	mov ecx,0x14
	idiv ecx
	fst qword ptr [ebp-0x14]
	add edx,0x70
	mov dword ptr [ebp+0x50],edx
	call __CIcos
	fmul qword ptr [__real_4060e00000000000]
	fadd qword ptr [__real_4060400000000000]
	call __ftol2_sse
	fld qword ptr [ebp-0x14]
	mov dword ptr [ebp+0x3C],eax
	call __CIsin
	fmul qword ptr [__real_4060e00000000000]
	fadd qword ptr [__real_405e800000000000]
	call __ftol2_sse
	mov dword ptr [ebp+0x48],eax
	jmp Block78

 Block77:
	call _rand
	cdq
	mov ecx,0xD4
	idiv ecx
	add edx,0x18
	mov dword ptr [ebp+0x40],edx
	call _rand
	cdq
	mov ecx,0xA5
	idiv ecx
	add edx,0x28
	mov dword ptr [ebp+0x50],edx

 Block78:
	mov dword ptr [ebp+0x58],0
	mov byte ptr [ebp-4],0x15
	test ebx,ebx
	jne Block120

 Block79:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push edx
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block80:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [ecx+edx*4]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x16
	mov word ptr [ebp-0x238],cx
	mov dword ptr [ebp-0x230],eax
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block82:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	je Block5

 Block83:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp-0x238]
	push eax
	push 0xC0061508
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x200]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x58],eax
	call edx

 Block85:
	mov eax,dword ptr [ebp-0x200]
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov edi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x238],di
	jne Block94

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x238],ax
	mov eax,dword ptr [ebp-0x230]
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block90:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x24],di
	jne Block95

 Block92:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block96

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block94:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x238]
	push ecx
	call ebx
	jmp Block91

 Block95:
	lea eax,[ebp+0x24]
	push eax
	call ebx

 Block96:
	push 0xFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+4],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0x18]
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edx+eax*4]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	je Block5

 Block97:
	lea edx,[ebp-0x1F0]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block5

 Block98:
	lea eax,[ebp-0x278]
	push eax
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x278],8
	mov edi,eax
	mov dword ptr [ebp+4],edi
	mov byte ptr [ebp-4],0x1A
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x270]
	xor ecx,ecx
	mov word ptr [ebp-0x278],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp-0x278]
	push edx
	call ebx

 Block102:
	mov eax,dword ptr [ebp-0x1F0]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	lea eax,[ebp-0x184]
	push eax
	call esi
	lea ecx,[ebp-0x184]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block105:
	lea edx,[ebp-0x54]
	push edx
	mov byte ptr [ebp-4],0x1C
	call esi
	lea eax,[ebp-0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block106:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	je Block5

 Block107:
	lea edx,[ebp-0x1F8]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block5

 Block108:
	mov edx,dword ptr [ebp-0x184]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x180]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x17C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x178]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x54]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x48]
	push 0
	push edi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov eax,dword ptr [ebp-0x1F8]
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov esi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x54],si
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp-0x54]
	push ecx
	call ebx

 Block116:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x184],si
	jne Block119

 Block117:
	mov eax,dword ptr [ebp-0x17C]
	xor edx,edx
	mov word ptr [ebp-0x184],dx
	test eax,eax
	je Block163

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block119:
	lea eax,[ebp-0x184]
	push eax
	call ebx
	jmp Block163

 Block120:
	mov ebx,dword ptr [ebp+0xC]
	xor edi,edi
	mov edi,edi

 Block121:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x268]
	push ecx
	mov byte ptr [ebp-4],0x1F
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	je Block124

 Block122:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x210]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x210]
	mov esi,ecx
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	jge Block124

 Block123:
	cmp eax,0x80004002
	jne Block1

 Block124:
	cmp word ptr [ebp-0x268],8
	mov byte ptr [ebp-4],0x22
	jne Block127

 Block125:
	mov eax,dword ptr [ebp-0x260]
	xor edx,edx
	mov word ptr [ebp-0x268],dx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea eax,[ebp-0x268]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block128:
	test esi,esi
	sete al
	mov byte ptr [ebp-4],0x15
	test al,al
	jne Block132

 Block129:
	test esi,esi
	je Block131

 Block130:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block131:
	inc edi
	jmp Block121

 Block132:
	test esi,esi
	je Block134

 Block133:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block134:
	call _rand
	cdq
	idiv edi
	mov eax,0x20
	mov esi,edx
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x288]
	mov byte ptr [ebp-4],0x23
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	je Block137

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x218]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x218]
	mov esi,ecx
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	jge Block137

 Block136:
	cmp eax,0x80004002
	jne Block1

 Block137:
	cmp word ptr [ebp-0x288],8
	mov byte ptr [ebp-4],0x26
	jne Block140

 Block138:
	mov eax,dword ptr [ebp-0x280]
	xor edx,edx
	mov word ptr [ebp-0x288],dx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[ebp-0x288]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block141:
	push 0
	push 0xFF
	push 0xC0061508
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x10],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [ebp-4],0x27
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block143

 Block142:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block143:
	lea eax,[ebp-0x1CC]
	push eax
	mov byte ptr [ebp-4],0x26
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [ebp+0x58],edi
	call edx
	jmp Block146

 Block145:
	mov edi,dword ptr [ebp+0x58]

 Block146:
	mov eax,dword ptr [ebp-0x1CC]
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x114]
	push eax
	call ebx
	lea ecx,[ebp-0x114]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block149:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x28
	call ebx
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block150:
	mov byte ptr [ebp-4],0x29
	test edi,edi
	je Block5

 Block151:
	mov edx,dword ptr [ebp-0x114]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x110]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x10C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x108]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x20
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push edi
	call eax
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block153:
	mov edi,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x24],di
	jne Block156

 Block154:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x114],di
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[ebp-0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block163

 Block162:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block163:
	xor edi,edi
	mov dword ptr [ebp+0x34],edi
	mov dword ptr [ebp+0x44],edi
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+0x54],edi
	lea ecx,[ebp-0x1D4]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0x2D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x34]
	push edx
	push eax
	mov byte ptr [ebp-4],0x2E
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x1D4]
	add esp,0xC
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block165

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block165:
	lea eax,[ebp-0x1DC]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x44]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x2F
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x1DC]
	add esp,0xC
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block167:
	lea edx,[ebp-0x1E4]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x14]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x30
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x1E4]
	add esp,0xC
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block169

 Block168:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block169:
	lea edx,[ebp-0x1EC]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x54]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x31
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x1EC]
	add esp,0xC
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block171:
	mov eax,dword ptr [ebp+0x44]
	mov edx,0xD
	mov word ptr [ebp-0x74],dx
	mov dword ptr [ebp-0x6C],eax
	cmp eax,edi
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block173:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x32
	cmp ecx,edi
	je Block5

 Block174:
	mov ebx,dword ptr [ebp-0x74]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x70]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x6C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x68]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block176

 Block175:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block176:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x2D
	jne Block179

 Block177:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	cmp eax,edi
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea edx,[ebp-0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x94]
	push eax
	call esi
	lea ecx,[ebp-0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block181:
	lea edx,[ebp-0x174]
	push edx
	mov byte ptr [ebp-4],0x33
	call esi
	lea eax,[ebp-0x174]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block182:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x34
	cmp ecx,edi
	je Block5

 Block183:
	mov edx,dword ptr [ebp-0x94]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x90]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x8C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x88]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x174]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x170]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x16C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x168]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x1C]
	cdq
	sub eax,edx
	push edi
	sar eax,1
	push eax
	mov eax,dword ptr [ebx+0x90]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block185

 Block184:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block185:
	mov esi,8
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp-0x174],si
	jne Block188

 Block186:
	mov eax,dword ptr [ebp-0x16C]
	xor ecx,ecx
	mov word ptr [ebp-0x174],cx
	cmp eax,edi
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[ebp-0x174]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block189:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x94],si
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [ebp-0x94],ax
	mov eax,dword ptr [ebp-0x8C]
	cmp eax,edi
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[ebp-0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	lea edx,[ebp-0x134]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x134]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block194:
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x35
	cmp ecx,edi
	je Block5

 Block195:
	mov ebx,dword ptr [ebp-0x134]
	fild dword ptr [ebp+0x5C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x130]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x12C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x128]
	sub esp,8
	mov dword ptr [eax+0xC],ebx
	fstp qword ptr [esp]
	mov eax,dword ptr [edx+0xA0]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block197

 Block196:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block197:
	cmp word ptr [ebp-0x134],8
	mov byte ptr [ebp-4],0x2D
	jne Block200

 Block198:
	mov eax,dword ptr [ebp-0x12C]
	xor ecx,ecx
	mov word ptr [ebp-0x134],cx
	cmp eax,edi
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[ebp-0x134]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov eax,3
	mov edx,0x7D0
	mov word ptr [ebp-0x194],ax
	mov dword ptr [ebp-0x18C],edx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x36
	cmp ecx,edi
	je Block5

 Block202:
	mov ebx,dword ptr [ebp-0x194]
	fldz
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x190]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x188]
	sub esp,8
	mov dword ptr [eax+0xC],edx
	fstp qword ptr [esp]
	mov eax,dword ptr [edi+0xA0]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block204

 Block203:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block204:
	cmp word ptr [ebp-0x194],8
	mov byte ptr [ebp-4],0x2D
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x18C]
	xor ecx,ecx
	mov word ptr [ebp-0x194],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp-0x194]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,4
	je Block250

 Block209:
	cmp eax,5
	je Block250

 Block210:
	mov eax,3
	mov word ptr [ebp-0x164],ax
	mov dword ptr [ebp-0x15C],0
	push 0
	lea ecx,[ebp-0x1F4]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [ebp-4],0x37
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x38
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0xB4],dx
	mov dword ptr [ebp-0xAC],eax
	test eax,eax
	je Block212

 Block211:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block212:
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x39
	test ecx,ecx
	je Block5

 Block213:
	mov edi,dword ptr [ebp-0x164]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x160]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x15C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x158]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ecx]
	lea edi,[eax+eax+0xA5]
	push edi
	lea edi,[eax+eax+0xD4]
	push edi
	mov edi,0x28
	sub edi,eax
	push edi
	mov edi,0x18
	sub edi,eax
	push edi
	mov edi,dword ptr [ebp-0xB4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0xB0]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0xAC]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0xA8]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x9C]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block215

 Block214:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block215:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0xB4],si
	jne Block218

 Block216:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	test eax,eax
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea edx,[ebp-0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block219:
	mov eax,dword ptr [ebp-0x1F4]
	mov byte ptr [ebp-4],0x37
	test eax,eax
	je Block221

 Block220:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block221:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x164],si
	jne Block224

 Block222:
	xor eax,eax
	mov word ptr [ebp-0x164],ax
	mov eax,dword ptr [ebp-0x15C]
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea ecx,[ebp-0x164]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block225:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x154]
	push edx
	call esi
	lea eax,[ebp-0x154]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block226:
	lea ecx,[ebp-0xD4]
	mov bl,0x3A
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0xD4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block227:
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x3B
	test ecx,ecx
	je Block5

 Block228:
	mov edi,dword ptr [ebp-0x154]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x150]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x14C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x148]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp-0xD4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0xD0]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0xCC]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0xC8]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [ebp+0x50]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x90]
	call ecx
	test eax,eax
	jge Block230

 Block229:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block230:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0xD4],di
	jne Block233

 Block231:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea eax,[ebp-0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block234:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x154],di
	jne Block237

 Block235:
	mov eax,dword ptr [ebp-0x14C]
	xor ecx,ecx
	mov word ptr [ebp-0x154],cx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea edx,[ebp-0x154]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	mov eax,0xD
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [ebp-0xEC],eax
	test eax,eax
	je Block240

 Block239:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block240:
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	je Block5

 Block241:
	mov ebx,dword ptr [ebp-0xF4]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0xF0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0xEC]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0xE8]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block243

 Block242:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block243:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0xF4],di
	jne Block246

 Block244:
	mov eax,dword ptr [ebp-0xEC]
	xor ecx,ecx
	mov word ptr [ebp-0xF4],cx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[ebp-0xF4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block5

 Block248:
	mov edx,dword ptr [ebp-0x20C]
	mov ecx,dword ptr [eax]
	push 5
	push edx
	mov edx,dword ptr [ebp+0x14]
	push 0x64
	push 0x64
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x98]
	call eax
	test eax,eax
	jge Block293

 Block249:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex
	jmp Block293

 Block250:
	push 0
	lea ecx,[ebp-0x1D0]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x3D
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x34],dx
	mov dword ptr [ebp-0x2C],eax
	test eax,eax
	je Block252

 Block251:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block252:
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x3E
	test ecx,ecx
	je Block5

 Block253:
	mov edi,dword ptr [ebp-0x34]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x30]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x2C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x28]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block255

 Block254:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block255:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],bl
	jne Block258

 Block256:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block259:
	mov eax,dword ptr [ebp-0x1D0]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block261

 Block260:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block261:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x64]
	push eax
	call esi
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block262:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],0x3F
	call esi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block263:
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x40
	test ecx,ecx
	je Block5

 Block264:
	mov edi,dword ptr [ebp-0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x60]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x5C]
	mov ebx,dword ptr [ebp+0x40]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x58]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp-0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x40]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x50]
	mov eax,dword ptr [edx+0x90]
	push edi
	push ebx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block266

 Block265:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block266:
	mov esi,8
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp-0x44],si
	jne Block269

 Block267:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block270:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x64],si
	jne Block273

 Block271:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block274:
	mov edx,3
	mov word ptr [ebp-0xA4],dx
	mov dword ptr [ebp-0x9C],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[ebp-0x1D8]
	push eax
	mov byte ptr [ebp-4],0x41
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x42
	mov word ptr [ebp-0x84],cx
	mov dword ptr [ebp-0x7C],eax
	test eax,eax
	je Block276

 Block275:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block276:
	mov ecx,dword ptr [ebp+0x48]
	cmp edi,ecx
	mov byte ptr [ebp-4],0x43
	mov dword ptr [ebp+0x5C],edi
	jl Block278

 Block277:
	mov dword ptr [ebp+0x5C],ecx

 Block278:
	mov edi,dword ptr [ebp+0x3C]
	cmp ebx,edi
	mov dword ptr [ebp+0x4C],ebx
	jl Block280

 Block279:
	mov dword ptr [ebp+0x4C],edi

 Block280:
	mov esi,dword ptr [ebp+0x54]
	test esi,esi
	je Block5

 Block281:
	mov eax,dword ptr [ebp+0x50]
	sub eax,ecx
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,ebx
	mov ebx,dword ptr [ebp-0xA4]
	sub eax,edi
	cdq
	xor eax,edx
	sub eax,edx
	sub esp,0x10
	mov edx,esp
	mov dword ptr [edx],ebx
	mov ebx,dword ptr [ebp-0xA0]
	mov dword ptr [edx+4],ebx
	mov ebx,dword ptr [ebp-0x9C]
	mov dword ptr [edx+8],ebx
	mov ebx,dword ptr [ebp-0x98]
	push ecx
	mov dword ptr [edx+0xC],ebx
	mov edx,dword ptr [ebp+0x48]
	xor ecx,ecx
	cmp edx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp-0x84]
	setl cl
	push eax
	mov edi,dword ptr [esi]
	xor eax,eax
	add ecx,dword ptr [ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	cmp ecx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ebp-0x80]
	setl al
	add eax,dword ptr [ebp+0x4C]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x7C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x78]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [edi+0x9C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block283

 Block282:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	mov ecx,esi
	push ecx
	push eax
	call _com_issue_errorex

 Block283:
	mov esi,8
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp-0x84],si
	jne Block286

 Block284:
	mov eax,dword ptr [ebp-0x7C]
	xor edx,edx
	mov word ptr [ebp-0x84],dx
	test eax,eax
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea eax,[ebp-0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block287:
	mov eax,dword ptr [ebp-0x1D8]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block289

 Block288:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block289:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0xA4],si
	jne Block292

 Block290:
	xor eax,eax
	mov word ptr [ebp-0xA4],ax
	mov eax,dword ptr [ebp-0x9C]
	test eax,eax
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea ecx,[ebp-0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block293:
	mov eax,dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x58]
	xor edi,edi
	mov edx,0xD
	mov word ptr [ebp-0xC4],dx
	mov dword ptr [ebp-0xBC],eax
	cmp eax,edi
	je Block295

 Block294:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block295:
	lea eax,[ebp-0x214]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x44
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x45
	cmp esi,edi
	je Block5

 Block296:
	mov edx,dword ptr [ebp-0xC4]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0xC0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0xBC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0xB8]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block298

 Block297:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block298:
	mov eax,dword ptr [ebp-0x214]
	mov byte ptr [ebp-4],0x44
	cmp eax,edi
	je Block300

 Block299:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block300:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x2D
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [ebp-0xC4],ax
	mov eax,dword ptr [ebp-0xBC]
	cmp eax,edi
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[ebp-0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block304:
	lea edx,[ebp-0x1E0]
	push edx
	mov ecx,ebx
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov byte ptr [ebp-4],0x46
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block306

 Block305:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block306:
	mov esi,dword ptr [esi]
	cmp esi,edi
	je Block5

 Block307:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [esi]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0x6C]
	sar eax,1
	neg eax
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block309

 Block308:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block309:
	mov eax,dword ptr [ebp-0x1E0]
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block311

 Block310:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block311:
	lea eax,[ebp-0x1FC]
	push eax
	mov ecx,ebx
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0xC0]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov byte ptr [ebp-4],0x47
	mov dword ptr [ebp+0x5C],edi
	call eax
	cmp eax,edi
	jge Block313

 Block312:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block313:
	mov esi,dword ptr [esi]
	cmp esi,edi
	je Block5

 Block314:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [esi]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0x74]
	sar eax,1
	neg eax
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block316

 Block315:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block316:
	mov eax,dword ptr [ebp-0x1FC]
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block318

 Block317:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block318:
	cmp dword ptr [ebp+0x70],2
	jne Block327

 Block319:
	call _rand
	cdq
	mov ecx,0xBB8
	idiv ecx
	mov eax,3
	mov word ptr [ebp-0x1B4],ax
	add edx,0x12C
	mov dword ptr [ebp-0x1AC],edx
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x48
	cmp ecx,edi
	je Block5

 Block320:
	mov ebx,dword ptr [ebp-0x1B4]
	fldz
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x1B0]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1A8]
	sub esp,8
	mov dword ptr [eax+0xC],edx
	fstp qword ptr [esp]
	mov eax,dword ptr [edi+0xA0]
	push ecx
	mov esi,ecx
	call eax
	xor edi,edi
	cmp eax,edi
	jge Block322

 Block321:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block322:
	cmp word ptr [ebp-0x1B4],8
	mov byte ptr [ebp-4],0x2D
	jne Block325

 Block323:
	mov eax,dword ptr [ebp-0x1AC]
	xor ecx,ecx
	mov word ptr [ebp-0x1B4],cx
	cmp eax,edi
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea edx,[ebp-0x1B4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	mov ebx,dword ptr [ebp+0x58]

 Block327:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xE0]
	push 0x1FFFFFF
	push ebx
	call ecx
	cmp eax,edi
	jge Block329

 Block328:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block329:
	lea edx,[ebp-0x104]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x104]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block330:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov byte ptr [ebp-4],0x49
	mov dword ptr [ebp+0x5C],edi
	call eax
	cmp eax,edi
	jge Block332

 Block331:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block332:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp-0x1E8]
	lea eax,[ecx+edx]
	mov ecx,3
	mov word ptr [ebp-0xE4],cx
	mov dword ptr [ebp-0xDC],eax
	cmp dword ptr [ebp+0x1C],0x64
	mov byte ptr [ebp-4],0x4A
	jle Block334

 Block333:
	lea edi,[ecx+0x2F]
	jmp Block335

 Block334:
	mov edx,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+4]
	lea eax,[edx+edx]
	sub edi,eax

 Block335:
	lea ecx,[ebp-0x1C8]
	push ecx
	mov ecx,ebx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x4B
	test esi,esi
	je Block5

 Block336:
	mov ecx,dword ptr [ebp-0x104]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x100]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0xFC]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp-0xE4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0xE0]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0xDC]
	push 0xFF
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xD8]
	push edi
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block338

 Block337:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block338:
	mov eax,dword ptr [ebp-0x1C8]
	mov byte ptr [ebp-4],0x4A
	test eax,eax
	je Block340

 Block339:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block340:
	mov esi,8
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp-0xE4],si
	jne Block343

 Block341:
	xor eax,eax
	mov word ptr [ebp-0xE4],ax
	mov eax,dword ptr [ebp-0xDC]
	test eax,eax
	je Block344

 Block342:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block344

 Block343:
	lea ecx,[ebp-0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block344:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x104],si
	jne Block347

 Block345:
	mov eax,dword ptr [ebp-0xFC]
	xor edx,edx
	mov word ptr [ebp-0x104],dx
	test eax,eax
	je Block348

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block347:
	lea eax,[ebp-0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block348:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,5
	ja Block380

 Block349:
	cmp EAX, 0
je Block350
cmp EAX, 1
je Block350
cmp EAX, 2
je Block350
cmp EAX, 3
je Block350
cmp EAX, 4
je Block365
cmp EAX, 5
je Block365


 Block350:
	mov ecx,3
	mov word ptr [ebp-0x124],cx
	mov dword ptr [ebp-0x11C],0x10000000
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x4C
	test eax,eax
	je Block5

 Block351:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x58]
	lea ecx,[ebp+0x5C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block353

 Block352:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block353:
	mov eax,dword ptr [ebp+0x78]
	cdq
	idiv dword ptr [ebp+0x1C]
	mov ecx,3
	mov word ptr [ebp-0x1A4],cx
	add eax,dword ptr [ebp+0x5C]
	mov edx,eax
	mov dword ptr [ebp-0x19C],edx
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x4D
	test ecx,ecx
	je Block5

 Block354:
	mov ebx,dword ptr [ebp-0x124]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x120]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x11C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x118]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x1A4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x1A0]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x198]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [ebp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x90]
	push edx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block356

 Block355:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block356:
	mov esi,8
	mov byte ptr [ebp-4],0x4C
	cmp word ptr [ebp-0x1A4],si
	jne Block359

 Block357:
	mov eax,dword ptr [ebp-0x19C]
	xor ecx,ecx
	mov word ptr [ebp-0x1A4],cx
	test eax,eax
	je Block360

 Block358:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block360

 Block359:
	lea edx,[ebp-0x1A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block360:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x124],si
	jne Block364

 Block361:
	xor eax,eax
	mov word ptr [ebp-0x124],ax
	mov eax,dword ptr [ebp-0x11C]

 Block362:
	test eax,eax
	je Block379

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block364:
	lea ecx,[ebp-0x124]
	jmp Block378

 Block365:
	mov edx,3
	mov word ptr [ebp-0x144],dx
	mov dword ptr [ebp-0x13C],0x10000000
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x4E
	test eax,eax
	je Block5

 Block366:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [ebp],0
	call eax
	test eax,eax
	jge Block368

 Block367:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block368:
	mov esi,dword ptr [ebp]
	call _rand
	cdq
	mov ecx,0x7530
	idiv ecx
	mov eax,dword ptr [ebp+0x78]
	mov ecx,3
	mov word ptr [ebp-0x1C4],cx
	lea eax,[edx+eax-0x3A98]
	cdq
	idiv dword ptr [ebp+0x1C]
	add eax,esi
	mov edx,eax
	mov dword ptr [ebp-0x1BC],edx
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x4F
	test ecx,ecx
	je Block5

 Block369:
	mov ebx,dword ptr [ebp-0x144]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x140]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x13C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x138]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x1C4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x1C0]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1B8]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [ebp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x90]
	push edx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block371

 Block370:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block371:
	mov esi,8
	mov byte ptr [ebp-4],0x4E
	cmp word ptr [ebp-0x1C4],si
	jne Block374

 Block372:
	mov eax,dword ptr [ebp-0x1BC]
	xor ecx,ecx
	mov word ptr [ebp-0x1C4],cx
	test eax,eax
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea edx,[ebp-0x1C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block375:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x144],si
	jne Block377

 Block376:
	xor eax,eax
	mov word ptr [ebp-0x144],ax
	mov eax,dword ptr [ebp-0x13C]
	jmp Block362

 Block377:
	lea ecx,[ebp-0x144]

 Block378:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block379:
	mov ebx,dword ptr [ebp+0x58]

 Block380:
	mov ecx,dword ptr [ebp-0x208]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,ebx
	je Block383

 Block381:
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax
	test esi,esi
	je Block383

 Block382:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block383:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block385

 Block384:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block385:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block387

 Block386:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block387:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block389

 Block388:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block389:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block391

 Block390:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block391:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0xA
	call ecx
	mov eax,dword ptr [ebp+8]
	inc eax
	cmp eax,dword ptr [ebp+0x20]
	mov dword ptr [ebp+8],eax
	jl Block64

 Block392:
	mov edi,dword ptr [ebp+0xC]

 Block393:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],2
	call eax
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],1
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block395

 Block394:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block395:
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block397

 Block396:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block397:
	lea esp,[ebp-0x298]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0x10
}
}
// CCSWnd_Char::OnMouseButton
__SUB_CLASS_THIS(000BC380, __thiscall, 48153,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push ebx
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov ebx,ecx
	jne Block5

 Block1:
	push edi
	push esi
	push offset _D_RTON
	call PtInRect
	test eax,eax
	jne Block4

 Block2:
	push edi
	push esi
	push offset _D_RTOFF
	call PtInRect
	test eax,eax
	jne Block4

 Block3:
	push edi
	push esi
	push offset _D_RTBG
	call PtInRect
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [ebx+0x4E4]
	call CCashShop::IsControlingUserPreview
	mov ecx,dword ptr [ebx+0x4E4]
	neg eax
	sbb eax,eax
	inc eax
	push eax
	call CCashShop::SetUserPreviewControl
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block5:
	lea ecx,[ebx-4]
	call CCSWnd_Char::EndChat
	pop edi
	pop esi
	pop ebx
	ret 0x10
}
}
// CCSWnd_Char::GetMessageBoxSN
__SUB_CLASS_THIS0(000BB9E0, __thiscall, 48159,  CCSWnd_Char, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4A4]
	mov eax,dword ptr [eax+0x3AD0]
	ret
}
}
// CCSWnd_Char::IsTwoHandWeapon
_SUB_EXCEPTION_HANDLER(BFF50)
__SUB_CLASS_THIS(000BFF50, __thiscall, 48166,  CCSWnd_Char, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BFF50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ebp+8]
	xor ebx,ebx
	cmp ecx,ebx
	je Block28

 Block1:
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	je Block3

 Block2:
	xor ecx,ecx
	cmp eax,0xE
	sete cl
	mov eax,ecx
	jmp Block29

 Block3:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x14]
	push edx
	call CItemInfo::GetItemProp
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	sete cl
	mov dword ptr [ebp-4],ebx
	cmp cl,bl
	je Block8

 Block4:
	mov dword ptr [ebp-4],0xFFFFFFFF

 Block5:
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,1
	jmp Block29

 Block8:
	xor esi,esi
	lea ebx,[ebx]

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	lea eax,[esi+0x1E]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	je Block21

 Block10:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block12

 Block11:
	cmp eax,0x80004002
	jne Block22

 Block12:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],4
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	sete cl
	cmp cl,bl
	sete cl
	mov byte ptr [ebp-4],bl
	cmp cl,bl
	jne Block23

 Block17:
	cmp eax,ebx
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block19:
	inc esi
	cmp esi,0xA
	jl Block9

 Block20:
	jmp Block25

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	push eax
	call _com_issue_error

 Block23:
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,0xA
	je Block5

 Block26:
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	xor eax,eax

 Block29:
	lea esp,[ebp-0x34]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
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
// CCSWnd_Char::BlowWeather
_SUB_EXCEPTION_HANDLER(C5D30)
__SUB_CLASS_THIS(000C5D30, __thiscall, 48156,  CCSWnd_Char, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C5D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [esp+0x58]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [ebp+0x4D4],1
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [esp+0x14]
	xor ebx,ebx
	cmp ecx,ebx
	sete al
	mov dword ptr [esp+0x50],ebx
	cmp al,bl
	je Block3

 Block1:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp ecx,ebx
	je Block57

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block57

 Block3:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x618
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],2
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x733
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],3
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],4
	call get_int32
	add esp,8
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0xEED
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],5
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],6
	call get_int32
	add esp,8
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x67A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],7
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],8
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x734
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],9
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x50],0xA
	cmp word ptr [eax],si
	jne Block31

 Block30:
	mov eax,dword ptr [eax+8]
	jmp Block32

 Block31:
	mov eax,offset _S___3

 Block32:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString16::Assign
	mov byte ptr [esp+0x50],0xC
	cmp word ptr [esp+0x38],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	lea edx,[esp+0x20]
	push 0x1AC3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x5C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x5C],0xD
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0xF
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea edx,[esp+0x28]
	push 0xDDA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea eax,[esp+0x24]
	push 0xDD9
	push eax
	mov byte ptr [esp+0x58],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x18]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x60],0x11
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov byte ptr [esp+0x50],0x10
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x50],0xF
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block44

 Block43:
	cmp word ptr [esi],bx
	jne Block50

 Block44:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0xC
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov byte ptr [esp+0x50],bl
	cmp esi,ebx
	je Block48

 Block47:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block57

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block57

 Block50:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	mov ecx,ebp
	call CCSWnd_Char::CreateFloatNotice
	mov eax,dword ptr [esp+0x30]
	cmp eax,3
	jne Block52

 Block51:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [ebp+0x4A4]
	push eax
	call CUserPreview::ShowFireCrack
	jmp Block53

 Block52:
	mov ecx,dword ptr [esp+0x34]
	push edi
	push ecx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x68],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov ecx,ebp
	call CCSWnd_Char::TransientLayer_Weather

 Block53:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0xC
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [esp+0x54],bl
	call ZXString16::_Release
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CCSWnd_Char::SetRing
_SUB_EXCEPTION_HANDLER(BF830)
__SUB_CLASS_THIS(000BF830, __thiscall, 48157,  CCSWnd_Char, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BF830
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x3C]
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp edi,ebx
	je Block50

 Block1:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea eax,[esp+0x14]
	push eax
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x34],ebx
	cmp cl,bl
	jne Block48

 Block2:
	mov ecx,dword ptr [esp+0x44]
	cmp dword ptr [esi+0x310],edi
	jne Block5

 Block3:
	cmp ecx,ebx
	jne Block5

 Block4:
	mov dword ptr [esi+0x314],ebx
	mov dword ptr [esi+0x310],ebx
	jmp Block48

 Block5:
	cmp dword ptr [esi+0x318],edi
	jne Block8

 Block6:
	cmp ecx,ebx
	jne Block8

 Block7:
	mov dword ptr [esi+0x31C],ebx
	mov dword ptr [esi+0x318],ebx
	jmp Block48

 Block8:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x99D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],1
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1C],8
	mov edi,eax
	mov byte ptr [esp+0x34],bl
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	cmp edi,ebx
	je Block16

 Block15:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esi+0x310],edx
	mov dword ptr [esi+0x314],eax

 Block16:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x99E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],3
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1C],8
	mov edi,eax
	mov byte ptr [esp+0x34],bl
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp edi,ebx
	je Block24

 Block23:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esi+0x318],edx
	mov dword ptr [esi+0x31C],eax

 Block24:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0x1AAD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],5
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x3C],6
	call Ztl_variant_t::GetUnknown
	test eax,eax
	setne byte ptr [esp+0x44]
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp byte ptr [esp+0x44],bl
	je Block47

 Block31:
	xor edi,edi
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [esi+0x310]
	mov byte ptr [esp+0x34],7
	cmp eax,ebx
	je Block35

 Block32:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemInfo
	push eax
	lea ecx,[esp+0x48]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov edi,dword ptr [esp+0x44]

 Block35:
	cmp edi,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block39

 Block36:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1AAD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],8
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x3C],9
	mov dword ptr [esp+0x1C],1
	call Ztl_variant_t::GetUnknown
	mov byte ptr [esp+0x44],1
	test eax,eax
	jne Block40

 Block39:
	mov byte ptr [esp+0x44],bl

 Block40:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x34],7
	je Block42

 Block41:
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t

 Block42:
	cmp byte ptr [esp+0x44],bl
	je Block44

 Block43:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x318],eax
	mov dword ptr [esi+0x31C],ecx
	jmp Block45

 Block44:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esi+0x310],edx
	mov dword ptr [esi+0x314],eax

 Block45:
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block47:
	mov eax,dword ptr [esp+0x10]

 Block48:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CCSWnd_Locker::CCSWnd_Locker
_SUB_EXCEPTION_HANDLER(80C50)
__SUB_CLASS_THIS0(00080C50, __thiscall, 48366,  CCSWnd_Locker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_80C50
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
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CCSWnd_Locker>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CCSWnd_Locker>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_Locker::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_Locker::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_Locker::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x18],3
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAD8],edi
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
// CCSWnd_Char::SetActiveEffectItem
__SUB_CLASS_THIS(000BBAC0, __thiscall, 48162,  CCSWnd_Char, void, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,ecx
	mov ecx,dword ptr [eax+0x4A4]
	cmp dword ptr [ecx+0x39BC],edx
	jne Block2

 Block1:
	xor edx,edx
	push edx
	mov dword ptr [eax+0x4DC],edx
	call CUser::SetActiveEffectItem
	ret 8

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [eax+0x4DC],esi
	pop esi
	push edx
	call CUser::SetActiveEffectItem
	ret 8
}
}
// CCSWnd_Char::InitRing
__SUB_CLASS_THIS0(000BB730, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_ANRINGBODYPART]
	mov edx,dword ptr [ecx+eax*4+0xC1]
	mov dword ptr [ecx+eax*8+0x2B0],edx
	xor edx,edx
	mov dword ptr [ecx+eax*8+0x2B4],edx
	mov eax,dword ptr [_D_G_ANRINGBODYPART+4]
	push esi
	mov esi,dword ptr [ecx+eax*4+0xC1]
	mov dword ptr [ecx+eax*8+0x2B0],esi
	mov dword ptr [ecx+eax*8+0x2B4],edx
	mov eax,dword ptr [_D_G_ANRINGBODYPART+8]
	mov esi,dword ptr [ecx+eax*4+0xC1]
	mov dword ptr [ecx+eax*8+0x2B0],esi
	mov dword ptr [ecx+eax*8+0x2B4],edx
	mov eax,dword ptr [_D_G_ANRINGBODYPART+12]
	mov esi,dword ptr [ecx+eax*4+0xC1]
	mov dword ptr [ecx+eax*8+0x2B0],esi
	mov dword ptr [ecx+eax*8+0x2B4],edx
	pop esi
	ret
}
}
// CCSWnd_Locker::OnMouseMove
_SUB_EXCEPTION_HANDLER(BE4B0)
__SUB_CLASS_THIS(000BE4B0, __thiscall, 48373,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BE4B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x58]
	mov ebp,dword ptr [edi+0xADC]
	push eax
	push ecx
	lea ecx,[edi-4]
	add ebp,0x48C
	call CCSWnd_Locker::GetLockerIndex
	xor ebx,ebx
	cmp eax,ebx
	jl Block4

 Block1:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block4

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block4

 Block3:
	mov esi,eax
	imul esi,0x37
	mov eax,dword ptr [esi+ecx+0x10]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x18]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+esi+0x27]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [edx+0x20],ecx
	mov eax,dword ptr [eax+esi+0x2B]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x24],eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esi+eax]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x18],edx
	mov edx,dword ptr [esi+eax+4]
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [_D_DB_DATE_19000101__215]
	mov dword ptr [eax+0x1C],edx
	mov edx,dword ptr [_D_DB_DATE_19000101__215+4]
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esp+0x44],ebx
	mov eax,dword ptr [ebp]
	push ebx
	push ebx
	push ebx
	lea ecx,[eax+esi+0x1A]
	mov eax,dword ptr [esp+0x24]
	push ebx
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [edi]
	mov dword ptr [esp+0x30],ecx
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	mov byte ptr [esp+0x68],1
	call eax
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x8C]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x50],bl
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block5

 Block4:
	lea ecx,[edi+0x8C]
	call CUIToolTip::ClearToolTip

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// CCSWnd_Locker::OnCreate
_SUB_EXCEPTION_HANDLER(C31C0)
__SUB_CLASS_THIS(000C31C0, __thiscall, 48369,  CCSWnd_Locker, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C31C0
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
	mov eax,dword ptr [esp+0x6C]
	lea ecx,[esp+0x14]
	mov dword ptr [esi+0xAE0],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x3D]
	push edx
	add eax,0x39
	push eax
	mov dword ptr [esp+0x6C],0
	call _ZtlSecureFuseHelper<short>::call
	movsx edi,ax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block4:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,1
	jne Block6

 Block5:
	lea ebx,[ecx+4]
	jmp Block10

 Block6:
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x15
	je Block8

 Block7:
	cmp edi,0x7D0
	jne Block9

 Block8:
	mov ebx,6
	jmp Block10

 Block9:
	xor ebx,ebx
	cmp ecx,3
	setne bl
	dec ebx
	and ebx,9

 Block10:
	xor edi,edi
	mov ebp,1
	mov dword ptr [esp+0x58],0
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x54],edi
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x68],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x6C],eax
	mov byte ptr [esp+0x64],2
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0x64],1
	cmp eax,edi
	je Block17

 Block14:
	add eax,8
	cmp eax,edi
	je Block17

 Block15:
	lea edi,[eax-8]
	test edi,edi
	je Block17

 Block16:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block19

 Block18:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x43
	push 0x1D
	push 0xE5
	push ebx
	push ebp
	push 0x3E9
	push esi
	call eax
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [eax+0x34],0xD0
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x68],3
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x80],esp
	push 0x50E
	mov bl,4
	push ecx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],5
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],6
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xAD8]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov edi,8
	mov byte ptr [esp+0x64],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x3C],di
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block32:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x1C],di
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block36:
	mov byte ptr [esp+0x64],1
	cmp word ptr [esp+0x2C],di
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block40:
	mov dword ptr [esi+0xADC],0xFFFFFFFF
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
// CCSWnd_Locker::Draw
_SUB_EXCEPTION_HANDLER(BCD60)
__SUB_CLASS_THIS(000BCD60, __thiscall, 48376,  CCSWnd_Locker, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BCD60
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
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x24]
	push eax
	call CWnd::GetCanvas
	mov ebx,dword ptr [ebp+0xAE0]
	mov esi,dword ptr [esp+0x24]
	add ebx,0x48C
	mov dword ptr [esp+0x48],0
	mov dword ptr [esp+0x28],ebx
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push eax
	push 0xE5
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
	mov ecx,dword ptr [ebp+0xADC]
	test ecx,ecx
	jl Block8

 Block5:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	cmp ecx,eax
	jb Block9

 Block8:
	mov dword ptr [ebp+0xADC],0xFFFFFFFF

 Block9:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block11

 Block10:
	cmp dword ptr [eax-4],0
	jne Block12

 Block11:
	mov ebp,dword ptr [ebp+0x8C]
	push 0
	mov ecx,ebp
	call CCtrlScrollBar::SetScrollRange
	jmp Block34

 Block12:
	mov ecx,ebp
	call CCSWnd_Locker::ResetScrollBar
	mov eax,dword ptr [ebp+0x8C]
	mov ecx,dword ptr [eax+0x38]
	mov eax,ecx
	lea edi,[ecx+ecx*2]
	lea edx,[eax+eax*2+6]
	add edi,edi
	add edx,edx
	cmp edi,edx
	mov dword ptr [esp+0x14],edi
	jge Block34

 Block13:
	mov eax,edi
	imul eax,0x37
	mov dword ptr [esp+0x1C],eax
	jmp Block15

 Block14:
	mov ebx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x14]

 Block15:
	mov ecx,ebx
	call ZArray<GW_CashItemInfo>::GetCount
	cmp edi,eax
	jae Block34

 Block16:
	mov ebx,dword ptr [ebx]
	add ebx,dword ptr [esp+0x1C]
	push edi
	mov eax,dword ptr [ebx+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x20],eax
	call CCSWnd_Locker::GetLockerRect
	mov edx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x18]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	push edi
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x58],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [esp+0x14]
	cmp eax,dword ptr [ebp+0xADC]
	jne Block28

 Block17:
	mov ebp,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ebp
	push edi
	push esi
	call edx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 2
	push 0x20
	lea eax,[ebp-1]
	push eax
	push edi
	push esi
	call edx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	push edi
	push esi
	call edx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebp
	lea eax,[edi-1]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebp
	dec eax
	push eax
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ebp,dword ptr [esp+0x20]

 Block28:
	mov eax,dword ptr [esp+0x18]
	push eax
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block30

 Block29:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block33

 Block30:
	mov eax,dword ptr [ebp+0xAD8]
	movzx ebx,word ptr [ebx+0x18]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x44]
	push ebx
	add ecx,0xFFFFFFF4
	push ecx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push esi
	call eax
	call draw_number_by_image
	add esp,0x18

 Block33:
	mov eax,dword ptr [ebp+0x8C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x14]
	add dword ptr [esp+0x1C],0x37
	lea edx,[eax+eax*2+6]
	inc ecx
	add edx,edx
	cmp ecx,edx
	mov dword ptr [esp+0x14],ecx
	jl Block14

 Block34:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ecx
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
// CCSWnd_Char::InitRiding
__SUB_CLASS_THIS0(000BB9B0, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+0x344],eax
	mov dword ptr [ecx+0x340],eax
	mov dword ptr [ecx+0x34C],eax
	mov dword ptr [ecx+0x348],eax
	mov ecx,dword ptr [ecx+0x4A4]
	push eax
	call CUserPreview::SetRiding
	ret
}
}
// CCSWnd_Char::OnKey
__SUB_CLASS_THIS(000C5D20, __thiscall, 48154,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	add ecx,0xFFFFFFFC
	jmp  CCSWnd_Char::OnKeyRet
}
}
// CCSWnd_Locker::OnSetFocus
__SUB_CLASS_THIS(000BB820, __thiscall, 48372,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xADC]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CCSWnd_Char::StartChat
__SUB_CLASS_THIS0(000BBA10, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x9C]
	push eax
	call CWnd::SetFocusChild
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block1:
	mov eax,dword ptr [esi+0x9C]
	test eax,eax
	je Block3

 Block2:
	add eax,4
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push eax
	call CWndMan::SetFocus

 Block5:
	mov ecx,dword ptr [esi+0x9C]
	push 0
	call CCtrlEdit::SetText
	pop esi
	ret
}
}
// CCSWnd_Char::EndChat
__SUB_CLASS_THIS0(000BBA50, __thiscall, 48147,  CCSWnd_Char, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x9C]
	push 0
	call CCtrlEdit::SetText
	push 0
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ecx,dword ptr [esi+0x4E8]
	pop esi
	jmp  CCashShop::RestoreFocus
}
}
