#include "regen.hpp"
// ITC_DBBasic.ipp
#include "ITC_DBBasic.hpp"

// ITCITEM::ITCITEM
__SUB_CLASS_THIS0(001752B0, __thiscall, 6054,  ITCITEM, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0x10],ecx
	xor edx,edx
	mov word ptr [eax+0xC],dx
	mov word ptr [eax+0xE],dx
	int 3// TODO: 	mov dword ptr [eax],offset ITCITEM::`vftable'
	mov dword ptr [eax+0x18],ecx
	mov word ptr [eax+0x1C],dx
	mov edx,dword ptr [_D_DB_DATE_19000101__168]
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],edx
	mov edx,dword ptr [_D_DB_DATE_19000101__168+4]
	mov dword ptr [eax+0x30],edx
	mov dword ptr [eax+0xFC],ecx
	mov dword ptr [eax+0x100],ecx
	mov dword ptr [eax+0x104],ecx
	mov dword ptr [eax+0x108],ecx
	mov dword ptr [eax+0x10C],ecx
	ret
}
}
// ITCITEM::Decode
_SUB_EXCEPTION_HANDLER(175710)
__SUB(00175710, __cdecl, 6057,  ZRef<ITCITEM>, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_175710
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
	xor ebx,ebx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x18],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call ITCITEM::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov esi,dword ptr [esp+0x30]
	mov dword ptr [esi+4],eax
	cmp eax,ebx
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0x18]
	push edi
	mov ebp,1
	push eax
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x1C],ebp
	call GW_ItemSlotBase::Decode
	add esp,8
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,0x14
	mov dword ptr [esp+0x2C],ebp
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block9

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push ebp
	call eax

 Block9:
	mov ebp,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebp+0x20],eax
	mov ebp,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebp+0x24],eax
	mov ebp,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [ebp+0xFC],eax
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,0x100
	mov dword ptr [esp+0x2C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,0x28
	mov dword ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esi+4]
	push 8
	add eax,0x2C
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+4]
	mov ebp,dword ptr [ZImports::_lstrcpyA]
	push eax
	add ecx,0x34
	push ecx
	call ebp
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,0x66
	push ecx
	call ebp
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,0x98
	push ecx
	call ebp
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov word ptr [ebx+0xC],ax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov word ptr [ebx+0xE],ax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x10],eax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x104],eax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x108],eax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x10C],eax
	mov ebx,dword ptr [esi+4]
	mov ecx,edi
	call CInPacket::Decode2
	mov word ptr [ebx+0x1C],ax
	mov eax,esi
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
// ITCITEM::~ITCITEM
_SUB_EXCEPTION_HANDLER(175310)
__SUB_CLASS_THIS0(00175310, __thiscall, 6059,  ITCITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_175310
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
	mov eax,dword ptr [esi+0x100]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x18]
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	mov dword ptr [esi+0x18],0

 Block9:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// IsITCTradeLimitItem
_SUB_EXCEPTION_HANDLER(1753D0)
__SUB(001753D0, __cdecl, 141922,  int32_t, const GW_ItemSlotBase*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1753D0
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
	mov esi,dword ptr [ebp+8]
	xor edi,edi
	cmp esi,edi
	je Block23

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	call edx
	test eax,eax
	jne Block23

 Block2:
	lea ebx,[esi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	jne Block23

 Block3:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsOnlyItem
	test eax,eax
	jne Block23

 Block4:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block23

 Block5:
	mov eax,dword ptr [esi+0x18]
	or eax,dword ptr [esi+0x1C]
	jne Block23

 Block6:
	push offset _D_DB_DATE_20790101__30
	lea ecx,[esi+0x20]
	push ecx
	call CompareFileTime
	test eax,eax
	jl Block23

 Block7:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsTradeBlockItem_0
	test eax,eax
	jne Block23

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x18]
	mov ecx,esi
	call eax
	mov ebx,1
	cmp eax,ebx
	jne Block22

 Block9:
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x20],edi
	add esi,0x105
	mov ecx,esi
	mov byte ptr [esp+0x38],bl
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nCHUC
	test al,al
	je Block11

 Block10:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x38],0
	call ZRef<SocketOptionInfo>::~ZRef<SocketOptionInfo>
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<ItemOptionInfo>::~ZRef<ItemOptionInfo>
	mov eax,ebx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block11:
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	test ax,ax
	je Block13

 Block12:
	mov edi,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx ecx,ax
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CItemOptionInfo::GetItemOption
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],2
	call ZRef<ItemOptionInfo>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],bl
	call ZRef<ItemOptionInfo>::~ZRef<ItemOptionInfo>
	cmp dword ptr [esp+0x18],0
	jne Block10

 Block13:
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	test ax,ax
	je Block15

 Block14:
	mov edi,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	cwde
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CItemOptionInfo::GetItemOption
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],3
	call ZRef<ItemOptionInfo>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],bl
	call ZRef<ItemOptionInfo>::~ZRef<ItemOptionInfo>
	cmp dword ptr [esp+0x18],0
	jne Block10

 Block15:
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	test ax,ax
	je Block17

 Block16:
	mov edi,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	movsx edx,ax
	push edx
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CItemOptionInfo::GetItemOption
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],4
	call ZRef<ItemOptionInfo>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],bl
	call ZRef<ItemOptionInfo>::~ZRef<ItemOptionInfo>
	cmp dword ptr [esp+0x18],0
	jne Block10

 Block17:
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	test ax,ax
	je Block19

 Block18:
	mov edi,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	movsx ecx,ax
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CItemOptionInfo::GetSocketOption
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],5
	call ZRef<SocketOptionInfo>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],bl
	call ZRef<SocketOptionInfo>::~ZRef<SocketOptionInfo>
	cmp dword ptr [esp+0x20],0
	jne Block10

 Block19:
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	test ax,ax
	je Block21

 Block20:
	mov edi,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	mov ecx,esi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	cwde
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CItemOptionInfo::GetSocketOption
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],6
	call ZRef<SocketOptionInfo>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],bl
	call ZRef<SocketOptionInfo>::~ZRef<SocketOptionInfo>
	cmp dword ptr [esp+0x20],0
	jne Block10

 Block21:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x38],0
	call ZRef<SocketOptionInfo>::~ZRef<SocketOptionInfo>
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<ItemOptionInfo>::~ZRef<ItemOptionInfo>

 Block22:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block23:
	mov eax,1
	mov ecx,dword ptr [esp+0x30]
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
