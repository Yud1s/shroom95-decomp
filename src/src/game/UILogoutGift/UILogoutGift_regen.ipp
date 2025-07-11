#include "regen.hpp"
// UILogoutGift.ipp
#include "UILogoutGift.hpp"

// CUILogoutGift::OnCreate
_SUB_EXCEPTION_HANDLER(3DEC80)
__SUB_CLASS_THIS(003DEC80, __thiscall, 72428,  CUILogoutGift, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DEC80
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
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	push offset _S_UIUIWINDOWIMGLOG
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x38],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
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
	call ebp

 Block7:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xC4
	push 0x15
	push 0x3E8
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
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
	mov byte ptr [esp+0x34],bl
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
	call ebp

 Block17:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xC4
	push 0x57
	push 0x3E9
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],3
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block34

 Block24:
	add eax,8
	cmp eax,ebx
	je Block34

 Block25:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block27

 Block26:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block27:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block29

 Block28:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xC4
	push 0x99
	push 0x3EA
	push esi
	call edx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax+0x40A8]
	mov dword ptr [esi+0xAF8],ecx
	mov edx,dword ptr [eax+0x40AC]
	mov dword ptr [esi+0xAFC],edx
	mov eax,dword ptr [eax+0x40B0]
	mov dword ptr [esi+0xB00],eax

 Block31:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block34:
	xor edi,edi
	jmp Block27
}
}
// CUILogoutGift::OnDestory
__SUB_CLASS_THIS0(003DE0C0, __thiscall, 72427,  CUILogoutGift, void) {
__asm {

 Block0:
	add ecx,0xB0
	jmp  CUIToolTip::ClearToolTip
}
}
// CUILogoutGift::OnKey
__SUB_CLASS_THIS(003DE0B0, __thiscall, 72429,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUILogoutGift::OnMouseMove
_SUB_EXCEPTION_HANDLER(3DE830)
__SUB_CLASS_THIS(003DE830, __thiscall, 72432,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE830
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
	mov ebp,ecx
	xor ebx,ebx
	lea eax,[ebp+0xAF4]
	xor edi,edi
	lea esi,[ebx+0x19]
	mov dword ptr [esp+0x14],eax

 Block1:
	test ebx,ebx
	jne Block17

 Block2:
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esi+0x20]
	push edx
	mov dword ptr [esp+0x30],ecx
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x34],0x96
	mov dword ptr [esp+0x3C],0xB6
	call PtInRect
	test eax,eax
	je Block14

 Block3:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	test eax,eax
	jl Block14

 Block4:
	cmp dword ptr [ebp+0xA8],edi
	je Block17

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CWvsContext::GetCommodityBySN
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	lea ecx,[ebp-4]
	call CUILogoutGift::ShowItemToolTip
	mov ebx,eax
	test ebx,ebx
	je Block9

 Block8:
	mov dword ptr [ebp+0xA8],edi

 Block9:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov edx,dword ptr [esp+0x20]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block13

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block13:
	mov dword ptr [esp+0x20],0

 Block14:
	add dword ptr [esp+0x14],4
	add esi,0x42
	inc edi
	cmp esi,0xDF
	jl Block1

 Block15:
	test ebx,ebx
	jne Block17

 Block16:
	lea ecx,[ebp+0xAC]
	mov dword ptr [ebp+0xA8],0xFFFFFFFF
	call CUIToolTip::ClearToolTip

 Block17:
	xor eax,eax
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
// CUILogoutGift::ShowItemToolTip
_SUB_EXCEPTION_HANDLER(3DE1B0)
__SUB_CLASS_THIS(003DE1B0, __thiscall, 72436,  CUILogoutGift, int32_t, NakedParam<ZRef<CS_COMMODITY>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE1B0
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x68]
	xor edi,edi
	mov dword ptr [esp+0x5C],edi
	cmp eax,edi
	je Block47

 Block1:
	cmp dword ptr [TSingleton<CWvsContext>::ms_pInstance],edi
	je Block44

 Block2:
	cmp dword ptr [TSingleton<CItemInfo>::ms_pInstance],edi
	je Block44

 Block3:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	jne Block8

 Block4:
	mov ebp,dword ptr [esp+0x68]
	mov eax,dword ptr [ebp+0xC]
	add eax,0xFB3B4C00
	cmp eax,0x98967F
	jbe Block9

 Block5:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	push eax
	call is_cash_package_item
	add esp,4
	test eax,eax
	jne Block8

 Block6:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block8

 Block7:
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	jmp Block47

 Block8:
	mov ebp,dword ptr [esp+0x68]

 Block9:
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],edi
	cmp dword ptr [ebp+0x54],edi
	je Block21

 Block10:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,0x3F84
	mov ecx,esi
	mov dword ptr [esp+0x24],esi
	call ZArray<CS_LIMITGOODS>::GetCount
	test eax,eax
	jbe Block21

 Block11:
	mov dword ptr [esp+0x1C],edi

 Block12:
	mov esi,dword ptr [esi]
	add esi,dword ptr [esp+0x1C]
	je Block18

 Block13:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	mov ebp,dword ptr [esp+0x68]
	cmp eax,dword ptr [esi]
	jne Block18

 Block14:
	xor eax,eax
	lea ecx,[esi+4]
	nop

 Block15:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block18

 Block16:
	cmp edx,dword ptr [ebp+0xC]
	je Block20

 Block17:
	inc eax
	add ecx,4
	cmp eax,0xA
	jl Block15

 Block18:
	mov ecx,dword ptr [esp+0x24]
	add dword ptr [esp+0x1C],0x68
	inc edi
	call ZArray<CS_LIMITGOODS>::GetCount
	cmp edi,eax
	jae Block21

 Block19:
	mov esi,dword ptr [esp+0x24]
	jmp Block12

 Block20:
	mov eax,dword ptr [esp+0x24]
	imul edi,0x68
	add edi,dword ptr [eax]
	mov dword ptr [esp+0x18],edi

 Block21:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	mov ecx,dword ptr [esp+0x68]
	jne Block25

 Block22:
	mov edx,dword ptr [esp+0x18]
	push edx
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block24

 Block23:
	add eax,4
	push eax
	call edi

 Block24:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[ebx+4]
	mov ecx,esi
	mov byte ptr [esp+0x6C],1
	call eax
	mov ecx,dword ptr [esp+0x80]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x80]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebx+0xB0]
	mov byte ptr [esp+0x74],0
	call CUIToolTip::SetToolTip_Package
	mov dword ptr [esp+0x14],1
	jmp Block34

 Block25:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1536
	jne Block27

 Block26:
	mov dword ptr [esp+0x14],1
	jmp Block34

 Block27:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block29

 Block28:
	mov dword ptr [esp+0x14],1
	jmp Block34

 Block29:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x22B
	mov ecx,dword ptr [esp+0x68]
	jne Block39

 Block30:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetEquipExtItem
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block32

 Block31:
	mov eax,dword ptr [eax+4]
	push eax
	sub esp,8
	lea edx,[esp+0x70]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZRef<CS_COMMODITY>::_ctor_copy
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[ebx+4]
	mov ecx,esi
	mov byte ptr [esp+0x68],3
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebx+0xB0]
	mov byte ptr [esp+0x70],2
	call CUIToolTip::SetToolTip_EquipExt
	mov dword ptr [esp+0x14],1

 Block32:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],0
	call ZRef<CItemInfo::EQUIPEXTITEM>::~ZRef<CItemInfo::EQUIPEXTITEM>
	cmp dword ptr [esp+0x14],0
	jne Block34

 Block33:
	lea ecx,[ebx+0xB0]
	call CUIToolTip::ClearToolTip

 Block34:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block38

 Block35:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x68]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esp+0x68]
	test ecx,ecx
	je Block38

 Block37:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block38:
	mov eax,dword ptr [esp+0x14]
	jmp Block48

 Block39:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	mov byte ptr [esp+0x5C],4
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x28]
	push ecx
	push 2
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block42

 Block40:
	cmp dword ptr [esp+0x24],0xC
	jne Block42

 Block41:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax+0x20]
	mov edx,dword ptr [esp+0x18]
	push 0
	push 1
	push edx
	mov edx,dword ptr [eax+0x70]
	mov eax,dword ptr [eax+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [ebx+4]
	lea esi,[ebx+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebx+0xB0]
	call CUIToolTip::SetToolTip_Ring
	jmp Block43

 Block42:
	lea ecx,[esp+0x28]
	call CUIToolTip::ItemToolTipParam::_ctor_default
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x18]
	push 0
	push 0
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [eax+0x70]
	push 1
	push ecx
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esp+0x30]
	lea edx,[esp+0x38]
	lea esi,[ebx+4]
	push edx
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x4C],1
	call eax
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebx+0xB0]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x5C],4
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam

 Block43:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x5C],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block34

 Block44:
	add eax,4
	push eax
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block45:
	mov ecx,dword ptr [esp+0x68]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,edi
	je Block47

 Block46:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block47:
	xor eax,eax

 Block48:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x10
}
}
// CUILogoutGift::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3DE690)
__SUB_CLASS_THIS(003DE690, __thiscall, 72430,  CUILogoutGift, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	add ecx,0xB0
	call CUIToolTip::ClearToolTip
	mov esi,dword ptr [esp+0x28]
	cmp esi,0x3E8
	jb Block3

 Block1:
	cmp esi,0x3EA
	ja Block3

 Block2:
	push 0x139
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	add esi,0xFFFFFC18
	push esi
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUILogoutGift::Draw
_SUB_EXCEPTION_HANDLER(3DE9B0)
__SUB_CLASS_THIS(003DE9B0, __thiscall, 72431,  CUILogoutGift, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE9B0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x40]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x40],ebx
	mov edi,dword ptr [esp+0x18]
	add esi,0xAF8
	mov byte ptr [esp+0x38],1
	lea ebp,[ebx+0x19]
	mov dword ptr [esp+0x14],esi
	nop

 Block1:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	lea eax,[esp+0x2C]
	push eax
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block17

 Block2:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	test eax,eax
	je Block16

 Block3:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov esi,eax
	mov eax,0x14F8B589
	imul esi
	sar edx,0xD
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x5B
	jne Block7

 Block4:
	push ebx
	push ebx
	push 0xB6
	push ebp
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block6:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawSpecialIconForSlot
	push esi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetSpecialName
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block10

 Block7:
	push 2
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xB6
	push ebp
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block9

 Block8:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	push esi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]

 Block10:
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x38],1
	cmp eax,ebx
	je Block22

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block14:
	mov edx,dword ptr [esp+0x2C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block21

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	jmp Block21

 Block16:
	mov eax,dword ptr [esp+0x2C]

 Block17:
	mov byte ptr [esp+0x38],1
	cmp eax,ebx
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block21

 Block20:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block21:
	mov dword ptr [esp+0x2C],ebx

 Block22:
	mov esi,dword ptr [esp+0x14]
	add esi,4
	add ebp,0x42
	cmp ebp,0xDF
	mov dword ptr [esp+0x14],esi
	jl Block1

 Block23:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp edi,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUILogoutGift::CUILogoutGift
_SUB_EXCEPTION_HANDLER(3DE730)
__SUB_CLASS_THIS0(003DE730, __thiscall, 72425,  CUILogoutGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE730
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
	mov dword ptr [esp+0xC],esi
	call CDialog::_ctor_default
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUILogoutGift>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUILogoutGift>::ms_pInstance],0

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea eax,[esi+0x94]
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUILogoutGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUILogoutGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUILogoutGift::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x18],2
	mov dword ptr [esi+0xAC],0xFFFFFFFF
	call CUIToolTip::_ctor_default
	lea ecx,[esp+8]
	push 0x16AA
	push ecx
	mov byte ptr [esp+0x20],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],4
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUILogoutGift::OnMouseEnter
__SUB_CLASS_THIS(003DE090, __thiscall, 72433,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xAC]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUILogoutGift::~CUILogoutGift
_SUB_EXCEPTION_HANDLER(3DE0E0)
__SUB_CLASS_THIS0(003DE0E0, __thiscall, 72427,  CUILogoutGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DE0E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUILogoutGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUILogoutGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUILogoutGift::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x14],2
	call CUIToolTip::~CUIToolTip
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea eax,[esi+0x94]
	push eax
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUILogoutGift>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUILogoutGift::TryShowLogoutGiftDialog
_SUB_EXCEPTION_HANDLER(3DEEE0)
__SUB0(003DEEE0, __cdecl, 72434,  int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DEEE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	cmp dword ptr [TSingleton<CUILogoutGift>::ms_pInstance],0
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block2:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block15

 Block3:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block15

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block15

 Block5:
	cmp dword ptr [eax+0x40A4],0
	je Block15

 Block6:
	call TSingleton<CUILogoutGift>::CreateInstance
	mov ecx,eax
	call CDialog::DoModal
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block16

 Block7:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block16

 Block8:
	add eax,8
	je Block16

 Block9:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block11

 Block10:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0x16AB
	push ecx
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x897B50
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov ecx,dword ptr [TSingleton<CUILogoutGift>::ms_pInstance]
	test ecx,ecx
	je Block14

 Block12:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUILogoutGift>::ms_pInstance]
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block15:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block16:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block11
}
}
