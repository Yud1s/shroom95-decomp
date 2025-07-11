#include "regen.hpp"
// UserRemote.ipp
#include "UserRemote.hpp"

// CUserRemote::Init
_SUB_EXCEPTION_HANDLER(555460)
__SUB_CLASS_THIS(00555460, __thiscall, 41503,  CUserRemote, void, CInPacket&, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_555460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x230
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x244]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x25C]
	mov edi,dword ptr [esp+0x254]
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	mov ecx,edi
	mov dword ptr [esi+0x638],eax
	call CInPacket::Decode1
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esi+0x3AC0],al
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x19EC]
	mov dword ptr [esp+0x250],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x24C],ebx
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x19F0]
	mov dword ptr [esp+0x250],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x24C],ebx
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+0x19F8],ax
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0x19FA],al
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+0x19FC],ax
	call CInPacket::Decode1
	mov byte ptr [esi+0x19FE],al
	push edi
	lea eax,[esp+0x30]
	lea ebp,[esi+0x3AC4]
	push eax
	mov ecx,ebp
	call SecondaryStat::DecodeForRemote
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0x4EE4],ecx
	push edi
	lea ecx,[esp+0x40]
	call AvatarLook::_ctor_3
	mov ecx,edi
	mov dword ptr [esp+0x24C],2
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x2E98],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x2E9C],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x39C4],eax
	call CInPacket::Decode4
	lea ecx,[esi+0x88]
	push eax
	mov dword ptr [esi+0x4EB4],eax
	call CAvatar::SetChairHeight
	mov ecx,edi
	call CInPacket::Decode2
	movsx edx,ax
	mov ecx,edi
	mov dword ptr [esp+0x20],edx
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x640],ecx
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,edi
	call CInPacket::Decode2
	movsx edx,ax
	push edx
	mov ecx,ebx
	call CWvsPhysicalSpace2D::GetFoothold
	mov dword ptr [esp+0x1C],eax
	call CVecCtrlUser::CreateInstance
	mov ebx,eax
	lea ecx,[esi+0x19E4]
	push ebx
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlUser
	test eax,eax
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esi+4]
	push eax
	mov ecx,ebx
	call CVecCtrl::Init
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi+0x640]
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+4]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x28]
	push 0
	push 0
	push ecx
	push edx
	push 0
	mov ecx,ebx
	call eax
	mov ecx,dword ptr [ebx+0x1D8]
	mov dword ptr [esi+0x640],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push eax
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	call CUser::Init
	mov eax,dword ptr [ebp+0x2B4]
	push eax
	lea ecx,[ebp+0x2AC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0x88]
	call CAvatar::SetMechanicMode
	mov edx,dword ptr [ebp+0x5A8]
	push 1
	push edx
	lea eax,[ebp+0x5A0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,esi
	call CUser::SetMorphed
	mov ecx,dword ptr [ebp+0x5CC]
	push 1
	push ecx
	add ebp,0x5C4
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,esi
	call CUser::SetGhostState
	mov eax,dword ptr [esp+0x24]
	cmp dword ptr [esi+0x2EDC],eax
	je Block9

 Block8:
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x2EDC],eax
	call CUser::SetCarryItemEffect

 Block9:
	mov edx,dword ptr [esp+0x18]
	push edx
	mov ecx,esi
	call CUser::SetActiveEffectItem
	mov eax,dword ptr [esi+0x4EB4]
	push eax
	mov ecx,esi
	call CUser::SetActivePortableChair
	mov ecx,edi
	xor ebp,ebp
	call CInPacket::Decode1
	test al,al
	je Block16

 Block10:
	jmp Block12

 Block12:
	push 0x248
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x24C],3
	test eax,eax
	je Block14

 Block13:
	mov ecx,eax
	call CPet::_ctor_default
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0x254],2
	call CUser::SetActivePet
	mov ecx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [ecx+ebp*8+4]
	push edi
	push esi
	inc ebp
	call CPet::Init_1
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	jne Block12

 Block16:
	mov ecx,esi
	call CUser::SetSetItemEffect
	mov ebx,dword ptr [esi+0x4E98]
	lea ebp,[ebx+0x18]
	mov ecx,ebp
	call ZFatalSection::Lock
	test ebp,ebp
	je Block19

 Block17:
	add dword ptr [ebp+4],0xFFFFFFFF
	jne Block19

 Block18:
	mov dword ptr [ebp],0

 Block19:
	mov edx,dword ptr [ebx+0xC]
	push 0
	lea ebp,[esi+0x88]
	push edx
	mov ecx,ebp
	call CAvatar::SetRidingVehicle
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x3A04],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x3A08],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esi+0x3A0C],eax
	call CUser::IsTamingMobTired
	push 0
	mov ecx,ebp
	mov dword ptr [ebp+0x5A4],eax
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,ebp
	call edx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x2DF4],eax
	test eax,eax
	je Block37

 Block20:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x2DF8],eax
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	lea ebx,[esi+0x2DFC]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x250],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24C],2
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x2E00],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x2E04],edx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esi+0x2E0C],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x2E08],ecx
	mov ecx,edi
	call CInPacket::Decode1
	cmp dword ptr [esi+0x638],0
	movzx eax,al
	mov dword ptr [esi+0x2E10],eax
	jne Block37

 Block23:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0
	mov ecx,dword ptr [esi+0x2E08]
	mov edx,dword ptr [esi+0x2E04]
	push eax
	mov eax,dword ptr [esi+0x2E0C]
	push eax
	mov eax,dword ptr [esi+0x2E00]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x264],5
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x264],6
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x34]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x264],7
	test ebp,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov dword ptr [esp+0x34],0
	call edx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block31:
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2DF4]
	push ecx
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x270],8
	call CChatBalloon::MakeMiniRoomBalloon
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24C],5
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x24C],2
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x4EDC],eax
	test eax,eax
	je Block53

 Block38:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push 0
	mov ebx,9
	push 0
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x254],bl
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block41

 Block39:
	mov eax,dword ptr [eax-4]
	cmp eax,0x28
	jle Block41

 Block40:
	push 0x28
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	mov byte ptr [esp+0x24C],0xA
	mov dword ptr [esp+0x28],1
	jmp Block42

 Block41:
	lea eax,[esp+0x14]

 Block42:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	test byte ptr [esp+0x28],1
	mov dword ptr [esp+0x24C],ebx
	je Block45

 Block43:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea edx,[esp+0x14]
	lea ebp,[esi+0x4EE0]
	push edx
	mov ecx,ebp
	call ZXString<char>::op_assign
	cmp dword ptr [esi+0x638],0
	jne Block51

 Block46:
	mov eax,dword ptr [esi+0x1944]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x258],0xB
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	mov eax,dword ptr [ebp]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x260],0xC
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x25C],bl
	call CChatBalloon::MakeADBoardBalloon

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24C],2
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block55

 Block54:
	push 8
	lea ebp,[esi+0x2E78]
	push ebp
	mov ecx,edi
	call CInPacket::DecodeBuffer
	push 8
	lea eax,[esi+0x2E80]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ebx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	push esi
	push ebp
	mov ecx,ebx
	call CUserPool::OnCoupleRecordAdd

 Block55:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block57

 Block56:
	push 8
	lea ebp,[esi+0x2F00]
	push ebp
	mov ecx,edi
	call CInPacket::DecodeBuffer
	push 8
	lea ecx,[esi+0x2F08]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ebx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	push esi
	push ebp
	mov ecx,ebx
	call CUserPool::OnFriendRecordAdd

 Block57:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block59

 Block58:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x2EB0],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x2EB4],eax
	call CInPacket::Decode4
	mov edx,dword ptr [esi+0x2EB0]
	push eax
	push esi
	mov dword ptr [esi+0x2EB8],eax
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::OnMarriageRecordAdd

 Block59:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ebx,al
	test bl,1
	je Block63

 Block60:
	cmp dword ptr [esi+0x638],0
	je Block62

 Block61:
	or dword ptr [esi+0x4EEC],1
	jmp Block63

 Block62:
	mov ecx,esi
	call CUser::LoadDarkForceEffect

 Block63:
	test bl,2
	je Block68

 Block64:
	cmp dword ptr [esi+0x638],0
	je Block66

 Block65:
	or dword ptr [esi+0x4EEC],2
	jmp Block68

 Block66:
	mov ecx,dword ptr [esi+0x2EAC]
	test ecx,ecx
	je Block68

 Block67:
	push 1
	call CDragon::CreateEffect

 Block68:
	test bl,4
	je Block72

 Block69:
	cmp dword ptr [esi+0x638],0
	je Block71

 Block70:
	or dword ptr [esi+0x4EEC],4
	jmp Block72

 Block71:
	mov ecx,esi
	call CUser::LoadSwallowingEffect

 Block72:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block76

 Block73:
	mov ecx,edi
	call CInPacket::Decode4
	test eax,eax
	jle Block76

 Block74:
	mov ebp,eax

 Block75:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	push esi
	call CUserPool::OnNewYearCardRecordAdd
	sub ebp,1
	jne Block75

 Block76:
	mov ecx,edi
	call CInPacket::Decode4
	cmp dword ptr [esp+0x258],0
	mov dword ptr [esi+0x2E18],eax
	je Block78

 Block77:
	push 1
	mov ecx,esi
	call CUser::ShowGauge

 Block78:
	mov ecx,dword ptr [esp+0x244]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x23C
	ret 0xC
}
}
// CUserRemote::~CUserRemote
_SUB_EXCEPTION_HANDLER(554360)
__SUB_CLASS_THIS0(00554360, __thiscall, 41501,  CUserRemote, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_554360
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
	int 3// TODO: 	mov dword ptr [esi],offset CUserRemote::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUserRemote::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUserRemote::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CUserRemote::`vftable'
	mov eax,dword ptr [esi+0x19E8]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x18],2
	call CAnimationDisplayer::RemovePrepareAnimation
	mov eax,dword ptr [esi+0x4EE0]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push offset ZRef<TemporaryStatBase<long>>::~ZRef<TemporaryStatBase<long>>
	push 7
	push 8
	lea ecx,[esi+0x4E7C]
	push ecx
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CUser::~CUser
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUserRemote::GetJobCode
__SUB_CLASS_THIS0(00554470, __thiscall, 41508,  CUserRemote, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4EE4]
	ret
}
}
// CUserRemote::OnSetActivePortableChair
__SUB_CLASS_THIS(00549240, __thiscall, 41509,  CUserRemote, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esi+0x4EB4],eax
	call CAvatar::SetChairHeight
	pop esi
	ret 4
}
}
// CUserRemote::IsPreview
__SUB_CLASS_THIS0(00554450, __thiscall, 41507,  CUserRemote, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUserRemote::OnSetActiveEffectItem
__SUB_CLASS_THIS(00549220, __thiscall, 41509,  CUserRemote, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	push eax
	mov ecx,esi
	call CUser::SetActiveEffectItem
	pop esi
	ret 4
}
}
// CUserRemote::GetSecondaryStat
__SUB_CLASS_THIS0(00554430, __thiscall, 41506,  CUserRemote, const SecondaryStat&) {
__asm {

 Block0:
	lea eax,[ecx+0x3AC4]
	ret
}
}
// CUserRemote::Update
_SUB_EXCEPTION_HANDLER(555D50)
// 9567B4
static uint8_t _SUB_555D50_LOOKUP_TABLE_0[13] = {
0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 
};
__SUB_CLASS_THIS0(00555D50, __thiscall, 41501,  CUserRemote, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_555D50
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x19E4]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	lea edi,[eax-0xC]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov eax,dword ptr [esi+0x2E98]
	cmp eax,ebp
	je Block5

 Block4:
	push 0x1E
	push 0x32
	push eax
	call CUser::FixedPosTo
	mov ebx,eax
	cmp ebx,ebp
	mov dword ptr [esp+0x18],ebx
	jge Block8

 Block5:
	push ebp
	push ebp
	mov ecx,edi
	call CVecCtrl::UpdatePassive
	mov dword ptr [esp+0x18],eax
	cmp eax,0xFFFFFFFF
	jne Block7

 Block6:
	mov dword ptr [esp+0x18],ebp

 Block7:
	mov eax,dword ptr [edi+0x1D8]
	mov edx,dword ptr [esi+0x88]
	lea ecx,[esi+0x88]
	push ebp
	push eax
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ebx,dword ptr [esp+0x18]

 Block8:
	test bl,0x10
	je Block12

 Block9:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x64],ebp
	call CUser::GetVecCtrl_0
	lea edx,[esp+0x28]
	push 0x8AC
	push edx
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	push ebp
	mov byte ptr [esp+0x64],3
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 1
	push 1
	mov ecx,esi
	call CUser::SetSetItemBackground

 Block12:
	test ebx,0x100000
	je Block46

 Block13:
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ebx,4
	mov ecx,esi
	mov dword ptr [esp+0x4C],ebx
	call edx
	cmp eax,0x458
	jg Block28

 Block14:
	cmp eax,0x456
	jge Block26

 Block15:
	cmp eax,0x1B2
	jg Block25

 Block16:
	cmp eax,0x1B0
	jge Block23

 Block17:
	sub eax,0x19A
	cmp eax,0xC
	ja Block43

 Block18:
	movzx eax,byte ptr [eax+_SUB_555D50_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block19
cmp EAX, 1
je Block21
cmp EAX, 2
je Block43


 Block19:
	lea ecx,[esp+0x1C]
	push 0xAD4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block40

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block21:
	lea edx,[esp+0x20]
	push 0xAD4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block40

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block23:
	lea eax,[esp+0x28]
	push 0x17A8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block40

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block25:
	cmp eax,0x44C
	jne Block43

 Block26:
	lea ecx,[esp+0x30]
	push 0x13FD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block40

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block28:
	cmp eax,0xCE4
	jg Block34

 Block29:
	je Block35

 Block30:
	cmp eax,0x578
	je Block32

 Block31:
	add eax,0xFFFFFA7E
	cmp eax,2
	ja Block43

 Block32:
	lea edx,[esp+0x38]
	push 0xAD5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block40

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block34:
	add eax,0xFFFFF312
	cmp eax,2
	ja Block43

 Block35:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F78E2A
	call CSkillInfo::GetSkill
	test eax,eax
	je Block37

 Block36:
	push 0
	push 0x7FFFFFFF
	push 0
	push 6
	push 1
	push eax
	mov ecx,esi
	call CUser::ShowSkillEffect

 Block37:
	lea eax,[esp+0x40]
	push 0x932
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x50],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	lea edi,[esi+0x88]
	or eax,0xFFFFFFFF
	push 1
	mov ecx,edi
	mov dword ptr [edi+0x5BC],eax
	mov dword ptr [edi+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,edi
	mov dword ptr [esi+0x644],0xCF
	call eax

 Block40:
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	je Block43

 Block41:
	cmp word ptr [ebp],0
	je Block43

 Block42:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	lea eax,[esp+0x40]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x58],0xB
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x640]
	not eax
	mov dword ptr [esp+0x54],esp
	and eax,1
	push eax
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	call CAnimationDisplayer::Effect_General

 Block43:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test ebp,ebp
	je Block45

 Block44:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block45:
	mov ebx,dword ptr [esp+0x18]

 Block46:
	test ebx,0x1000000
	je Block49

 Block47:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0xC
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],0
	lea ecx,[esp+0x54]
	push 0xAD7
	push ecx
	mov byte ptr [esp+0x68],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],0xE
	push 0
	mov byte ptr [esp+0x64],0xF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	test ebx,0x2000000
	je Block52

 Block50:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0x10
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],0
	lea ecx,[esp+0x54]
	push 0xAD7
	push ecx
	mov byte ptr [esp+0x68],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],0x12
	push 0
	mov byte ptr [esp+0x64],0x13
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	test ebx,0x400000
	je Block59

 Block53:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x4F5C6E
	call CSkillInfo::GetSkill
	mov ebp,eax
	test ebp,ebp
	je Block59

 Block54:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0x14
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],0
	movzx ecx,byte ptr [esi+0x3AC0]
	push ecx
	lea edx,[esp+0x58]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x68],0x15
	call SKILLENTRY::GetEffectUOL
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x640]
	mov byte ptr [esp+0x60],0x16
	test eax,eax
	je Block56

 Block55:
	mov eax,dword ptr [eax]
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [esp+0x64],0x17
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test ecx,ecx
	je Block59

 Block58:
	call _xbstr_t::Data_t::Release

 Block59:
	test ebx,0x400
	je Block61

 Block60:
	mov eax,dword ptr [esi+0x4EB4]
	push eax
	mov ecx,esi
	call CUser::SetActivePortableChair

 Block61:
	test bl,0x40
	je Block68

 Block62:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0x18
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],0
	lea ecx,[esp+0x54]
	push 0xB2B
	push ecx
	mov byte ptr [esp+0x68],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x640]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],0x1A
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [esp+0x64],0x1B
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x40]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x4C],edi
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0
	push 0
	push 0xC00614A4
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x70],0x1C
	call CUser::GetVecCtrl_0
	lea edx,[esp+0x60]
	push 0xB2C
	push edx
	mov byte ptr [esp+0x74],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x640]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x1E
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [esp+0x70],0x1F
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x4C],edi
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	test bl,bl
	jns Block70

 Block69:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0
	push 0
	push 0
	push 0x1F4
	push 0x406849
	call CSkillInfo::GetSkill
	push eax
	mov ecx,esi
	call CUser::ShowSkillSpecialEffect

 Block70:
	test ebx,0x4000000
	je Block73

 Block71:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,0x23
	neg eax
	sbb eax,eax
	and eax,0xFF76AB7D
	add eax,0x1C9C7AC
	push eax
	call CSkillInfo::GetSkill
	test eax,eax
	je Block73

 Block72:
	push 0
	push 0x7FFFFFFF
	push 0
	push 6
	push 1
	push eax
	mov ecx,esi
	call CUser::ShowSkillEffect

 Block73:
	test ebx,0x100
	je Block82

 Block74:
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ebx,0x20
	mov ecx,esi
	mov dword ptr [esp+0x4C],ebx
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x21
	jne Block80

 Block75:
	lea edx,[esp+0x40]
	push 0x190E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x50],0x21
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block80

 Block78:
	cmp word ptr [ebp],0
	je Block80

 Block79:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	lea edi,[esi+4]
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x58],0x22
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x640]
	not eax
	mov dword ptr [esp+0x54],esp
	and eax,1
	push eax
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	call CAnimationDisplayer::Effect_General

 Block80:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test ebp,ebp
	je Block82

 Block81:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block82:
	cmp dword ptr [esi+0x4ED0],0
	je Block88

 Block83:
	mov ecx,dword ptr [esi+0x4EB8]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	mov edi,eax
	test edi,edi
	je Block91

 Block84:
	mov ecx,edi
	call SKILLENTRY::GetMaxLevel
	mov eax,dword ptr [esi+0x4EB8]
	cmp eax,0x21612A9
	je Block89

 Block85:
	cmp eax,0x2179951
	je Block89

 Block86:
	call get_update_time
	sub eax,dword ptr [esi+0x4ED4]
	cmp eax,dword ptr [edi+0x2C]
	jne Block88

 Block87:
	mov edx,dword ptr [esi+0x4EC0]
	push 0
	push 1
	push edx
	push edi
	mov ecx,esi
	mov dword ptr [esi+0x4ED0],0
	call CUser::ShowSkillPrepare

 Block88:
	mov ecx,esi
	call CUser::Update
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block89:
	call get_update_time
	sub eax,dword ptr [esi+0x4ED8]
	js Block88

 Block90:
	mov eax,dword ptr [esi+0x4EC0]
	push 0
	push 1
	push eax
	push edi
	mov ecx,esi
	call CUser::ShowSkillPrepare
	lea edi,[esi+0x88]
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	lea edi,[ecx+edi+0x5C0]
	call get_update_time
	add eax,dword ptr [edi+8]
	mov dword ptr [esi+0x4ED8],eax
	jmp Block88

 Block91:
	push 0x21000003
	lea ecx,[esp+0x3C]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x38]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x38],edx
	call _CxxThrowException
	mov edi,edi
	retf 0x955E
}
}
// CUserRemote::OnPetActivated
_SUB_EXCEPTION_HANDLER(5547D0)
__SUB_CLASS_THIS(005547D0, __thiscall, 41511,  CUserRemote, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5547D0
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x20]
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edi,al
	cmp edi,2
	ja Block9

 Block1:
	mov ecx,ebx
	call CInPacket::Decode1
	test al,al
	je Block8

 Block2:
	mov ecx,ebx
	call CInPacket::Decode1
	xor ecx,ecx
	test al,al
	setne cl
	mov eax,ecx
	test eax,eax
	je Block4

 Block3:
	push 0
	push edi
	mov ecx,esi
	call CUser::SetActivePet

 Block4:
	push 0x248
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CPet::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CUser::SetActivePet
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+edi*8+4]
	push ebx
	push esi
	call CPet::Init_1
	push 1
	lea ecx,[esi+0x88]
	call CAvatar::NotifyAvatarModified
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block8:
	push 0
	push edi
	mov ecx,esi
	call CUser::SetActivePet
	push 1
	lea ecx,[esi+0x88]
	call CAvatar::NotifyAvatarModified
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block9:
	or eax,0xFFFFFFFF
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUserRemote::GetUpFromPortableChair
__SUB_CLASS_THIS(00554520, __thiscall, 41512,  CUserRemote, void, int32_t) {
__asm {

 Block0:
	mov dword ptr [ecx+0x4EB4],0
	mov dword ptr [esp+4],0
	add ecx,0x88
	jmp  CAvatar::SetChairHeight
}
}
// CUserRemote::OnShootAttack
_SUB_EXCEPTION_HANDLER(5567D0)
__SUB_CLASS_THIS(005567D0, __thiscall, 41518,  CUserRemote, void, long, const SKILLENTRY*, long, long, int32_t, long, long, ZArray<ATTACKINFO>&, NakedParam<tagPOINT>, unsigned long, int32_t, const SKILLENTRY*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5567D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x230
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x240]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block2

 Block1:
	mov edi,dword ptr [eax]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	call get_update_time
	push edi
	mov dword ptr [esp+0x50],eax
	call is_shoot_skill_not_using_shooting_weapon
	add esp,4
	test eax,eax
	jne Block8

 Block4:
	mov eax,dword ptr [esi+0x58C]
	push eax
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block8

 Block5:
	cmp eax,0x2E
	je Block8

 Block6:
	cmp eax,0x2F
	je Block8

 Block7:
	cmp eax,0x31
	jne Block453

 Block8:
	lea ebx,[esi+0x88]
	mov ecx,ebx
	mov dword ptr [esp+0xC0],ebx
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	mov eax,dword ptr [ecx+ebx+0x5CC]
	lea ebx,[ecx+ebx+0x5C0]
	test eax,eax
	je Block453

 Block9:
	cmp dword ptr [eax-4],0
	je Block453

 Block10:
	cmp dword ptr [ebp+0x34],0
	mov eax,dword ptr [ebp+0x14]
	lea ecx,[eax+eax*2]
	lea ecx,[ecx*8+ActionData::m_saCharacterActions]
	je Block12

 Block11:
	mov ebx,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x28],0
	jmp Block13

 Block12:
	mov eax,dword ptr [ecx+0x10]
	imul eax,dword ptr [ebx+8]
	cdq
	idiv dword ptr [ecx+0xC]
	mov ebx,dword ptr [ebp+0xC]
	push eax
	push ebx
	call CUser::GetShootDelay
	add esp,8
	mov dword ptr [esp+0x28],eax

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	mov dword ptr [esp+0x94],0
	call eax
	mov ecx,dword ptr [eax+0x338]
	mov dword ptr [esp+0xAC],eax
	push ecx
	add eax,0x330
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esp+0xD0],eax
	xor eax,eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x248],eax
	cmp ebx,eax
	je Block24

 Block14:
	cmp dword ptr [ebx+0x20C],eax
	je Block16

 Block15:
	mov al,byte ptr [ebp+0x10]
	jmp Block17

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block17:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	push eax
	push ecx
	lea edx,[esp+0x78]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetBallUOL
	push eax
	lea ecx,[esp+0x20]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x6C]
	test ecx,ecx
	je Block19

 Block18:
	call _xbstr_t::Data_t::Release

 Block19:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block24

 Block20:
	cmp dword ptr [eax],0
	je Block24

 Block21:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block24

 Block22:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block24

 Block23:
	mov dword ptr [esp+0xD0],0

 Block24:
	lea ecx,[esi+0x614]
	call TSecType<long>::GetData
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	push eax
	mov eax,dword ptr [esi+0x5F8]
	lea ecx,[esi+4]
	push eax
	lea eax,[esp+0x8C]
	push eax
	mov dword ptr [esp+0xB0],ecx
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	push eax
	push edi
	call GetShootAttackPt0
	add esp,0x14
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0xA0],edx
	test ebx,ebx
	je Block26

 Block25:
	mov eax,dword ptr [ebp+0x10]
	push eax
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x138]
	push ecx
	add eax,0x130
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	mov dword ptr [esp+0x8C],eax
	jg Block27

 Block26:
	mov dword ptr [esp+0x8C],1

 Block27:
	cmp edi,0x30FEFE
	jne Block30

 Block28:
	mov ecx,dword ptr [ebp+0x38]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ebp+0x3C]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x138]
	push ecx
	add eax,0x130
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x8C],eax

 Block30:
	test ebx,ebx
	je Block32

 Block31:
	mov edx,dword ptr [ebp+0x10]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x12C]
	push ecx
	add eax,0x124
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	mov dword ptr [esp+0x6C],eax
	jg Block33

 Block32:
	mov dword ptr [esp+0x6C],1

 Block33:
	mov eax,dword ptr [esp+0xAC]
	mov edx,dword ptr [eax+0x4AC]
	push edx
	add eax,0x4A4
	push eax
	mov dword ptr [esp+0x98],1
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block35

 Block34:
	mov dword ptr [esp+0x90],2

 Block35:
	cmp edi,0x217C05C
	je Block38

 Block36:
	cmp edi,0x217E76D
	je Block38

 Block37:
	cmp edi,0x217E775
	jne Block39

 Block38:
	mov dword ptr [esp+0x90],3

 Block39:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block41

 Block40:
	xor edx,edx
	jmp Block42

 Block41:
	mov edx,dword ptr [ecx-4]

 Block42:
	mov ebx,dword ptr [ebp+0x20]
	mov eax,dword ptr [esi+0x58C]
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	push edx
	mov edx,dword ptr [ebp+0x10]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push eax
	movzx eax,byte ptr [esi+0x3AC0]
	push edx
	push eax
	push ecx
	lea ecx,[esp+0x1D4]
	call CSkill_HitAni::_ctor_0
	push 0
	push edi
	push ebx
	mov byte ptr [esp+0x254],1
	call CUser::GetBulletDelay
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [ebp+0x24]
	add esp,0xC
	mov dword ptr [esp+0xAC],eax
	mov dword ptr [esp+0xCC],edx
	mov dword ptr [esp+0x20],0
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block210

 Block43:
	lea ebx,[ebx]

 Block44:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [ebp+0x24]
	imul eax,0x98
	mov ebx,dword ptr [ecx]
	mov ecx,dword ptr [ebx+eax]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ebx,eax
	mov dword ptr [esp+0x64],ecx
	add ecx,4
	mov dword ptr [esp+0xB0],eax
	lea eax,[esp+0x19C]
	push eax
	mov dword ptr [esp+0x64],ebx
	call edx
	mov ecx,dword ptr [esp+0xA4]
	mov esi,eax
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x154]
	push edx
	call eax
	mov ecx,dword ptr [esi]
	xor edx,edx
	cmp ecx,dword ptr [eax]
	mov eax,dword ptr [esp+0x9C]
	setl dl
	cmp edi,0x1F914CF
	mov ecx,eax
	mov dword ptr [esp+0x68],edx
	mov edx,dword ptr [esp+0xA0]
	mov dword ptr [esp+0x30],edx
	jg Block52

 Block45:
	je Block51

 Block46:
	mov ecx,edi
	sub ecx,0xA9634C
	je Block51

 Block47:
	sub ecx,0x3D3012
	je Block50

 Block48:
	sub ecx,1
	jne Block55

 Block49:
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [esp+0x14]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFED4
	add ecx,0x96
	add ecx,eax
	jmp Block58

 Block50:
	mov ecx,dword ptr [ebp+0x28]
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [esp+0x30],ecx
	jmp Block59

 Block51:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x640]
	and cl,1
	movsx ecx,cl
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF74
	add ecx,0x46
	add ecx,eax
	jmp Block58

 Block52:
	mov esi,edi
	sub esi,0x217C05C
	je Block57

 Block53:
	sub esi,0x2711
	je Block57

 Block54:
	sub esi,8
	je Block56

 Block55:
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [esp+0x14]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF9C
	add ecx,0x32
	add ecx,eax
	jmp Block58

 Block56:
	add edx,4
	mov dword ptr [esp+0x30],edx

 Block57:
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+0x640]
	and dl,1
	movsx edx,dl
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFA0
	add edx,0x30
	add ecx,edx
	mov edx,dword ptr [esp+0xA0]

 Block58:
	mov dword ptr [esp+0x2C],ecx

 Block59:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [ebx+0x90],eax
	push 1
	lea eax,[esp+0xD8]
	push eax
	mov dword ptr [ebx+0x94],edx
	call CMob::GetBodyRect
	lea ecx,[esp+0xD4]
	push ecx
	call IsRectEmpty
	test eax,eax
	jne Block210

 Block60:
	mov eax,dword ptr [ebx+0x94]
	mov ecx,dword ptr [esp+0xD8]
	cmp eax,ecx
	jl Block62

 Block61:
	mov ecx,dword ptr [esp+0xE0]
	cmp eax,ecx
	jle Block63

 Block62:
	mov dword ptr [ebx+0x94],ecx

 Block63:
	cmp dword ptr [esp+0x68],0
	je Block65

 Block64:
	mov ecx,dword ptr [esp+0xDC]
	mov edx,dword ptr [esp+0xD4]
	lea eax,[ecx+edx]
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xFFFFFFF6
	cmp eax,ecx
	jmp Block66

 Block65:
	mov ecx,dword ptr [esp+0xD4]
	mov eax,dword ptr [esp+0xDC]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xA
	cmp ecx,eax

 Block66:
	jge Block68

 Block67:
	mov eax,ecx

 Block68:
	mov dword ptr [ebx+0x90],eax
	cmp edi,0x2DCAAC
	jne Block71

 Block69:
	cmp dword ptr [esp+0x20],1
	jl Block71

 Block70:
	mov ecx,dword ptr [esp+0xD4]
	mov edx,dword ptr [esp+0xD8]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xEC]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xF0]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x174]
	push eax
	call CMob::GetHitPointHeightRand
	mov ecx,dword ptr [eax]
	mov dword ptr [ebx+0x90],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebx+0x94],edx

 Block71:
	mov eax,dword ptr [ebx+0x94]
	sub eax,dword ptr [esp+0x30]
	mov esi,dword ptr [ebx+0x90]
	sub esi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],eax
	lea eax,[esp+0x104]
	push eax
	call SetRectEmpty
	mov ecx,dword ptr [ebp+0xC]
	test ecx,ecx
	je Block73

 Block72:
	mov edx,dword ptr [ebp+0x10]
	push edx
	call SKILLENTRY::GetLevelData
	add eax,0x1CC
	push eax
	lea eax,[esp+0x108]
	push eax
	call SECRECT::ToRect
	add esp,8

 Block73:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr [esp+0xC4],ecx
	cmp edi,0x4FAA90
	jne Block79

 Block74:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x640]
	mov esi,dword ptr [esp+0xA4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x18],eax
	lea eax,[esp+0x174]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x98],eax
	lea eax,[esp+0x184]
	push eax
	mov ecx,esi
	call edx
	test byte ptr [esp+0x18],1
	mov eax,dword ptr [eax]
	jne Block76

 Block75:
	mov ecx,dword ptr [esp+0x10C]
	mov edx,dword ptr [esp+0x104]
	neg ecx
	neg edx
	mov dword ptr [esp+0x104],ecx
	mov dword ptr [esp+0x10C],edx

 Block76:
	mov ecx,dword ptr [esp+0x98]
	push ecx
	push eax
	lea edx,[esp+0x10C]
	push edx
	call OffsetRect
	mov eax,dword ptr [esp+0x14]
	test byte ptr [eax+0x640],1
	mov esi,dword ptr [esp+0x104]
	jne Block78

 Block77:
	mov esi,dword ptr [esp+0x10C]

 Block78:
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr [esp+0xC4],esi
	sub esi,dword ptr [esp+0x9C]
	mov eax,ecx
	sub eax,ecx
	mov dword ptr [esp+0x38],eax
	jmp Block84

 Block79:
	cmp edi,0x1F962ED
	je Block83

 Block80:
	cmp edi,0x1F914C9
	je Block83

 Block81:
	cmp edi,0x217C067
	jne Block84

 Block82:
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [esp+0x2C]
	lea esi,[edx+ecx]
	neg esi
	sbb esi,esi
	and esi,0xFFFFFC90
	add esi,0x1B8
	jmp Block84

 Block83:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x2C]
	lea esi,[ecx+eax]
	neg esi
	sbb esi,esi
	and esi,0xFFFFFCB8
	add esi,0x1A4

 Block84:
	mov eax,dword ptr [esp+0x38]
	mov edx,eax
	imul edx,eax
	mov eax,esi
	imul eax,esi
	add edx,eax
	mov dword ptr [esp+0x18],edx
	fild dword ptr [esp+0x18]
	call __CIsqrt
	fld qword ptr [__real_4079000000000000]
	fcom
	fnstsw ax
	test ah,5
	jp Block86

 Block85:
	fdiv st,st(1)
	mov ecx,dword ptr [ebx+0x90]
	sub ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	fmul st,st(1)
	fiadd dword ptr [esp+0x2C]
	call __ftol2_sse
	mov edx,dword ptr [ebx+0x94]
	mov dword ptr [ebx+0x90],eax
	sub edx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x18],edx
	fild dword ptr [esp+0x18]
	fmulp st(1),st(0)
	fiadd dword ptr [esp+0x30]
	call __ftol2_sse
	mov dword ptr [ebx+0x94],eax
	jmp Block87

 Block86:
	fstp st(0)

 Block87:
	fld qword ptr [__real_3ff8000000000000]
	fmul st,st(1)
	call __ftol2_sse
	mov dword ptr [esp+0x50],eax
	cmp edi,0x1F914CF
	jne Block89

 Block88:
	fmul qword ptr [__real_4004000000000000]
	call __ftol2_sse
	mov dword ptr [esp+0x50],eax
	jmp Block90

 Block89:
	fstp st(0)

 Block90:
	mov ecx,dword ptr [esp+0x20]
	xor esi,esi
	cmp ecx,esi
	jne Block92

 Block91:
	mov dword ptr [esp+0x94],eax
	jmp Block102

 Block92:
	cmp edi,0x2F514D
	je Block101

 Block93:
	cmp edi,0x1F914CF
	je Block101

 Block94:
	cmp edi,0x30FEFB
	je Block100

 Block95:
	cmp edi,0x2F785B
	je Block100

 Block96:
	cmp edi,0x2F785C
	je Block99

 Block97:
	cmp edi,0x30FEFC
	je Block99

 Block98:
	cmp edi,0xC80ED8
	jne Block102

 Block99:
	mov eax,dword ptr [esp+0x28]
	add eax,0x190
	mov dword ptr [esp+0x50],eax
	jmp Block102

 Block100:
	mov edx,dword ptr [esp+0x94]
	lea eax,[ecx+4]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*2]
	mov dword ptr [esp+0x50],eax
	jmp Block102

 Block101:
	mov ecx,dword ptr [esp+0x94]
	add ecx,0xC8
	mov dword ptr [esp+0x50],ecx

 Block102:
	cmp edi,0x1F962F1
	jne Block104

 Block103:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x50],edx

 Block104:
	mov ecx,dword ptr [esp+0x90]
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x58],edx
	mov dword ptr [esp+0x5C],eax
	cmp ecx,2
	jne Block106

 Block105:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x640]
	and al,1
	movsx eax,al
	neg eax
	sbb eax,eax
	and eax,0x3C
	add eax,0xFFFFFFE2
	add eax,edx
	mov dword ptr [esp+0x58],eax

 Block106:
	mov eax,ecx
	imul eax,dword ptr [esp+0x8C]
	cmp eax,esi
	mov dword ptr [esp+0x48],esi
	mov dword ptr [esp+0x38],eax
	jle Block208

 Block107:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x4C]
	lea eax,[ecx+edx]
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x84],eax
	mov eax,dword ptr [esp+0x8C]
	lea esi,[eax*8]
	sub esi,eax
	neg esi
	mov dword ptr [esp+0x40],0
	mov dword ptr [esp+0x34],esi
	jmp Block111

 Block110:
	mov ebx,dword ptr [esp+0x60]
	mov esi,dword ptr [esp+0x34]

 Block111:
	mov eax,dword ptr [ebx+0x90]
	mov ebx,dword ptr [ebx+0x94]
	mov ecx,dword ptr [esp+0x14]
	push edi
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x7C],ebx
	call CUser::IsFanShapeShoot
	test eax,eax
	je Block113

 Block112:
	lea ecx,[ebx+esi+7]
	mov dword ptr [esp+0x78],ecx

 Block113:
	xor ebx,ebx
	cmp dword ptr [esp+0x6C],ebx
	jle Block133

 Block114:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x70]
	lea esi,[edx+eax*4+0x18]

 Block115:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,dword ptr [ebp+8]
	jge Block133

 Block116:
	cmp edi,0xD72A0E
	jne Block118

 Block117:
	mov edx,dword ptr [ebp+8]
	push edx
	mov eax,ecx
	mov ecx,dword ptr [esp+0x18]
	push eax
	push edi
	call CUser::GetDamageDelay
	mov dword ptr [esp+0x50],eax

 Block118:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x3C],eax
	cmp edi,0x1F914C9
	je Block126

 Block119:
	cmp edi,0x1F962ED
	je Block126

 Block120:
	cmp edi,0x217C067
	je Block126

 Block121:
	cmp dword ptr [esp+0x48],2
	jle Block128

 Block122:
	cmp edi,0x217C05C
	je Block125

 Block123:
	cmp edi,0x217E76D
	je Block125

 Block124:
	cmp edi,0x217E775
	jne Block128

 Block125:
	add eax,0x5A
	jmp Block127

 Block126:
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [ecx+0x90]
	sub eax,dword ptr [esp+0x2C]
	cdq
	xor eax,edx
	sub eax,edx
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	fmul qword ptr [__real_3ff8000000000000]
	call __ftol2_sse

 Block127:
	mov dword ptr [esp+0x3C],eax

 Block128:
	mov ecx,dword ptr [ebp+0x20]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x139C
	je Block131

 Block129:
	cmp eax,0x139D
	je Block131

 Block130:
	xor eax,eax
	jmp Block132

 Block131:
	mov eax,ecx

 Block132:
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x30]
	push 1
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	push edx
	lea ecx,[esp+0x1D8]
	call CSkill_HitAni::operator()
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ecx+0x19E8]
	mov edx,dword ptr [esp+0x94]
	mov ecx,dword ptr [esp+0x90]
	push edx
	mov edx,dword ptr [esp+0x90]
	push ecx
	mov ecx,dword ptr [esi+0x3C]
	push edx
	mov edx,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	push edx
	mov edx,dword ptr [esp+0x90]
	push ecx
	mov ecx,dword ptr [edx+4]
	mov edx,dword ptr [esp+0xCC]
	push ecx
	mov ecx,dword ptr [esp+0x74]
	add edx,ecx
	mov ecx,dword ptr [esp+0x9C]
	push edx
	push edi
	push eax
	call CMob::AddDamageInfo
	inc dword ptr [esp+0x70]
	inc ebx
	add esi,4
	cmp ebx,dword ptr [esp+0x6C]
	jl Block115

 Block133:
	mov edx,dword ptr [esp+0x74]
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x7C],edx
	mov dword ptr [esp+0x80],eax
	cmp edi,0x1F962ED
	je Block136

 Block134:
	cmp edi,0x1F914C9
	je Block136

 Block135:
	cmp edi,0x217C067
	jne Block139

 Block136:
	mov eax,edi
	sub eax,0x217C067
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFEC
	add eax,0x1B8
	cmp dword ptr [ebp+0x18],0
	je Block138

 Block137:
	neg eax

 Block138:
	mov ecx,dword ptr [esp+0x9C]
	mov edx,dword ptr [esp+0xA0]
	add eax,ecx
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x80],edx

 Block139:
	cmp dword ptr [ebp+0xC],0
	je Block148

 Block140:
	lea eax,[esp+0x104]
	push eax
	call IsRectEmpty
	test eax,eax
	je Block148

 Block141:
	cmp edi,0x1F962ED
	je Block148

 Block142:
	cmp edi,0x1F914C9
	je Block148

 Block143:
	cmp edi,0x217C067
	je Block148

 Block144:
	cmp dword ptr [esp+0x68],0
	je Block147

 Block145:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,dword ptr [esp+0xDC]
	jle Block207

 Block146:
	jmp Block148

 Block147:
	mov edx,dword ptr [esp+0x2C]
	cmp edx,dword ptr [esp+0xD4]
	jge Block207

 Block148:
	mov eax,dword ptr [ebp+0xC]
	push eax
	call is_shoot_skill_not_showing_bullet
	add esp,4
	test eax,eax
	jne Block207

 Block149:
	cmp edi,0xE6935F
	je Block207

 Block150:
	cmp edi,0xA9634C
	je Block207

 Block151:
	cmp edi,0xC80EDE
	je Block207

 Block152:
	cmp edi,0x141F5E4
	je Block207

 Block153:
	cmp edi,0x1421CF4
	je Block207

 Block154:
	cmp edi,0x4FAA90
	jne Block163

 Block155:
	cmp dword ptr [esp+0x20],eax
	jne Block207

 Block156:
	mov eax,dword ptr [esp+0x8C]
	cdq
	idiv dword ptr [esp+0x90]
	test eax,eax
	jle Block158

 Block157:
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x30]
	jmp Block159

 Block158:
	mov esi,dword ptr [esp+0x58]
	mov ebx,dword ptr [esp+0x5C]

 Block159:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block161

 Block160:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block161:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+0x1960]
	mov byte ptr [esp+0x250],2
	test ecx,ecx
	je Block255

 Block162:
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x48]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0xB0]
	push eax
	mov eax,dword ptr [esp+0xD8]
	push eax
	mov eax,dword ptr [esp+0x9C]
	add ecx,edx
	add ecx,dword ptr [esp+0x40]
	push ebx
	add ecx,dword ptr [esp+0x68]
	push esi
	push ecx
	jmp Block206

 Block163:
	cmp edi,0x217C05C
	je Block195

 Block164:
	cmp edi,0x217E76D
	je Block195

 Block165:
	cmp edi,0x217E775
	je Block195

 Block166:
	cmp edi,0x21612AC
	je Block195

 Block167:
	cmp edi,0x2179952
	je Block195

 Block168:
	cmp dword ptr [esp+0xD0],0
	mov esi,dword ptr [esp+0x20]
	je Block170

 Block169:
	test esi,esi
	je Block188

 Block170:
	cmp edi,0x2F9F6C
	je Block188

 Block171:
	cmp edi,0x4FAA8F
	je Block188

 Block172:
	cmp edi,0xC80EDA
	je Block188

 Block173:
	cmp edi,0xC80EDF
	je Block188

 Block174:
	cmp edi,0x1F962F1
	je Block188

 Block175:
	push edi
	call is_guided_bullet_skill
	add esp,4
	test eax,eax
	jne Block188

 Block176:
	cmp edi,0x4E23EA
	je Block185

 Block177:
	cmp edi,0xE6935E
	je Block185

 Block178:
	test esi,esi
	je Block181

 Block179:
	cmp edi,0x4FAA8C
	je Block181

 Block180:
	cmp edi,0x2DCAAC
	jne Block207

 Block181:
	mov eax,dword ptr [esp+0x8C]
	cdq
	idiv dword ptr [esp+0x90]
	cmp esi,eax
	jge Block183

 Block182:
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x30]
	jmp Block184

 Block183:
	mov esi,dword ptr [esp+0x58]
	mov ebx,dword ptr [esp+0x5C]

 Block184:
	mov ecx,dword ptr [ebp+0x20]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x58C]
	push ecx
	push eax
	push ecx
	lea eax,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x1960
	mov byte ptr [esp+0x254],6
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xBC],esp
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	call CMob::GetVecCtrl
	mov edx,dword ptr [esp+0x94]
	mov ecx,dword ptr [esp+0x64]
	mov eax,dword ptr [esp+0x90]
	push edx
	mov edx,dword ptr [esp+0x58]
	push eax
	mov eax,dword ptr [esp+0xA0]
	add ecx,edx
	add ecx,dword ptr [esp+0x44]
	push ebx
	add ecx,dword ptr [esp+0x6C]
	push esi
	push ecx
	mov byte ptr [esp+0x270],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterBulletAnimation
	jmp Block207

 Block185:
	xor eax,eax
	test esi,esi
	je Block187

 Block186:
	mov ecx,dword ptr [ebp+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0xB0]
	mov eax,dword ptr [edx+eax-0x98]

 Block187:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x50]
	lea edx,[esp+0xD0]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x70]
	lea edx,[esp+0x3C]
	push edx
	push eax
	push edi
	call CUser::RegisterSerialBullet
	jmp Block207

 Block188:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
	push eax
	call get_soul_arrow
	add esp,4
	add eax,0x22C
	push eax
	lea ecx,[esp+0x28]
	call Ztl_bstr_t::_ctor_copy
	lea ecx,[esp+0x1C]
	call _xbstr_t::length
	test eax,eax
	jne Block190

 Block189:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],ecx
	jmp Block191

 Block190:
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x3C],edx

 Block191:
	mov eax,dword ptr [esp+0x8C]
	cdq
	idiv dword ptr [esp+0x90]
	cmp esi,eax
	jge Block193

 Block192:
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x30]
	jmp Block194

 Block193:
	mov esi,dword ptr [esp+0x58]
	mov ebx,dword ptr [esp+0x5C]

 Block194:
	mov eax,dword ptr [esp+0x3C]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x1960
	mov byte ptr [esp+0x250],5
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xB8],esp
	push ecx
	mov ecx,dword ptr [esp+0x78]
	call CMob::GetVecCtrl
	mov edx,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x8C]
	push edx
	mov edx,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x9C]
	add ecx,edx
	add ecx,dword ptr [esp+0x40]
	push ebx
	add ecx,dword ptr [esp+0x68]
	push esi
	push ecx
	mov byte ptr [esp+0x26C],4
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x248],1
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block207

 Block195:
	mov ebx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x14]
	push ebx
	push edi
	push ecx
	push edx
	lea eax,[esp+0xC4]
	push eax
	mov ecx,esi
	call CUser::GetRidingMechanicBulletPos
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	push ebx
	push edi
	push ecx
	push edx
	lea eax,[esp+0x1A4]
	push eax
	mov ecx,esi
	call CUser::GetRidingMechanicBulletPos
	mov ecx,dword ptr [eax+4]
	xor ebx,ebx
	cmp dword ptr [esp+0x48],2
	mov dword ptr [esp+0x80],ecx
	jle Block200

 Block196:
	cmp edi,0x217C05C
	je Block199

 Block197:
	cmp edi,0x217E76D
	je Block199

 Block198:
	cmp edi,0x217E775
	jne Block200

 Block199:
	mov ebx,0xB4

 Block200:
	mov edx,dword ptr [esp+0x1C]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block202

 Block201:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block202:
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x250],3
	test esi,esi
	je Block255

 Block203:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x44]
	push ecx
	push esi
	mov dword ptr [esp+0x4C],0
	call edx
	test eax,eax
	jge Block205

 Block204:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block205:
	mov eax,dword ptr [esp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xB8],esp
	push ecx
	mov ecx,dword ptr [esp+0x78]
	call CMob::GetVecCtrl
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0xCC]
	lea eax,[ebx+edx]
	mov edx,dword ptr [esp+0x90]
	push edx
	mov edx,dword ptr [esp+0xCC]
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	lea esi,[ecx+eax]
	mov ecx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x6C]
	add esi,ecx
	add esi,edx
	add eax,ecx
	push esi
	add eax,edx

 Block206:
	mov byte ptr [esp+0x26C],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMagicBulletAnimation

 Block207:
	mov ecx,dword ptr [esp+0x48]
	mov eax,dword ptr [esp+0xAC]
	add dword ptr [esp+0x34],0xE
	add dword ptr [esp+0x40],eax
	add dword ptr [esp+0x84],eax
	inc ecx
	cmp ecx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x48],ecx
	jl Block110

 Block208:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [ebp+0x24]
	inc esi
	mov dword ptr [esp+0x20],esi
	call ZArray<ATTACKINFO>::GetCount
	cmp esi,eax
	jb Block44

 Block209:
	mov esi,dword ptr [esp+0x14]

 Block210:
	mov edx,dword ptr [ebp+0x24]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block284

 Block211:
	cmp dword ptr [eax-4],0
	je Block281

 Block212:
	cmp edi,0xE6935F
	je Block217

 Block213:
	cmp edi,0xA9634C
	je Block217

 Block214:
	cmp edi,0xC80EDE
	je Block217

 Block215:
	cmp edi,0x141F5E4
	je Block217

 Block216:
	cmp edi,0x1421CF4
	jne Block281

 Block217:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x40],eax
	lea eax,[esp+0x1A4]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,0x1C
	mov dword ptr [esp+0x44],eax
	cmp edi,0xA9634C
	je Block221

 Block218:
	cmp edi,0xE6935F
	je Block220

 Block219:
	mov eax,dword ptr [esi+0x640]
	and al,1
	movsx ecx,al
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF9C
	add ecx,0x32
	add dword ptr [esp+0x40],ecx
	jmp Block222

 Block220:
	mov edx,dword ptr [esi+0x640]
	and dl,1
	movsx eax,dl
	neg eax
	sbb eax,eax
	and eax,0xFFFFFED4
	add eax,0x96
	add dword ptr [esp+0x40],eax
	jmp Block222

 Block221:
	mov ecx,dword ptr [esi+0x640]
	and cl,1
	movsx edx,cl
	neg edx
	sbb edx,edx
	and edx,0xFFFFFF74
	add edx,0x46
	add dword ptr [esp+0x40],edx

 Block222:
	mov ebx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x17C]
	push eax
	call edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x58],ecx
	mov dword ptr [esp+0x74],ecx
	mov ecx,ebx
	mov dword ptr [esp+0x5C],edx
	mov dword ptr [esp+0x78],edx
	mov dword ptr [esp+0x34],0
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block229

 Block223:
	xor ebx,ebx
	lea ebx,[ebx]

 Block224:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x14C]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x74]
	cmp dword ptr [eax],ecx
	jge Block226

 Block225:
	mov edx,dword ptr [ebp+0x24]
	mov eax,dword ptr [edx]
	mov eax,dword ptr [eax+ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x134]
	push eax
	call edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x74],ecx
	mov dword ptr [esp+0x78],edx

 Block226:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x15C]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x58]
	cmp dword ptr [eax],ecx
	jle Block228

 Block227:
	mov edx,dword ptr [ebp+0x24]
	mov eax,dword ptr [edx]
	mov eax,dword ptr [eax+ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x18C]
	push eax
	call edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x58],ecx
	mov dword ptr [esp+0x5C],edx

 Block228:
	mov ecx,dword ptr [ebp+0x24]
	inc dword ptr [esp+0x34]
	add ebx,0x98
	call ZArray<ATTACKINFO>::GetCount
	cmp dword ptr [esp+0x34],eax
	jb Block224

 Block229:
	mov edx,dword ptr [esi+0x640]
	lea ecx,[esp+0x74]
	test dl,1
	jne Block231

 Block230:
	lea ecx,[esp+0x58]

 Block231:
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	mov dword ptr [esp+0xC8],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [esp+0xC4],eax
	test dl,1
	je Block234

 Block232:
	cmp ecx,eax
	jle Block235

 Block233:
	test dl,1
	jne Block237

 Block234:
	cmp eax,ecx
	jg Block237

 Block235:
	lea ecx,[esp+0x1B4]
	mov byte ptr [esp+0x248],0
	call CSkill_HitAni::~CSkill_HitAni
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x248],0xFFFFFFFF
	test esi,esi
	je Block453

 Block236:
	lea edx,[esi+8]
	push edx
	jmp Block446

 Block237:
	sub eax,ecx
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	fld1
	mov eax,2
	fld st(0)

 Block238:
	test al,1
	je Block240

 Block239:
	fmul st,st(2)

 Block240:
	shr eax,1
	je Block242

 Block241:
	fld st(2)
	fmulp st(3),st
	jmp Block238

 Block242:
	fstp st(2)
	mov eax,2
	fldz

 Block243:
	test al,1
	je Block245

 Block244:
	fmul st(1),st

 Block245:
	shr eax,1
	je Block247

 Block246:
	fmul st(0),st
	jmp Block243

 Block247:
	fstp st(0)
	faddp st(1),st(0)
	call __CIsqrt
	fld qword ptr [__real_3ff8000000000000]
	fnstcw word ptr [esp+0x20]
	movzx eax,word ptr [esp+0x20]
	fmul st,st(1)
	or eax,0xC00
	mov dword ptr [esp+0x18],eax
	fldcw word ptr [esp+0x18]
	fistp qword ptr [esp+0xB4]
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0x84],eax
	fldcw word ptr [esp+0x20]
	cmp edi,0x141F5E4
	je Block251

 Block248:
	cmp edi,0x1421CF4
	je Block251

 Block249:
	cmp edi,0x1F914CF
	jne Block259

 Block250:
	fmul qword ptr [__real_4004000000000000]
	fnstcw word ptr [esp+0x20]
	movzx eax,word ptr [esp+0x20]
	or eax,0xC00
	mov dword ptr [esp+0x18],eax
	fldcw word ptr [esp+0x18]
	fistp qword ptr [esp+0xB4]
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr [esp+0x84],ecx
	fldcw word ptr [esp+0x20]
	jmp Block252

 Block251:
	fnstcw word ptr [esp+0x20]
	movzx eax,word ptr [esp+0x20]
	or eax,0xC00
	mov dword ptr [esp+0x18],eax
	fldcw word ptr [esp+0x18]
	fistp qword ptr [esp+0x7C]
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x84],edx
	fldcw word ptr [esp+0x20]
	cmp edi,0x1F914CF
	jne Block260

 Block252:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block254

 Block253:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block254:
	mov ebx,dword ptr [esi+0x1960]
	mov edx,dword ptr [ebp+0x30]
	mov byte ptr [esp+0x250],7
	push edx
	test ebx,ebx
	jne Block256

 Block255:
	push 0x80004003
	call _com_issue_error

 Block256:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x44]
	push ecx
	push ebx
	mov dword ptr [esp+0x4C],0
	call edx
	test eax,eax
	jge Block258

 Block257:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block258:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xD8]
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x38],esp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xA0]
	push eax
	mov eax,dword ptr [esp+0xEC]
	push edx
	lea edx,[ecx+eax]
	mov ecx,dword ptr [esp+0x70]
	add edx,ecx
	add eax,ecx
	push edx
	mov byte ptr [esp+0x270],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMobBulletAnimation
	jmp Block281

 Block259:
	fstp st(0)

 Block260:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	push eax
	call get_soul_arrow
	mov ebx,dword ptr [eax+0x22C]
	add eax,0x22C
	add esp,4
	mov dword ptr [esp+0x48],ebx
	test ebx,ebx
	je Block262

 Block261:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block262:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block266

 Block263:
	cmp dword ptr [eax],0
	je Block266

 Block264:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block266

 Block265:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block267

 Block266:
	lea eax,[esp+0x48]
	jmp Block268

 Block267:
	lea eax,[esp+0x1C]

 Block268:
	mov eax,dword ptr [eax]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block270

 Block269:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block270:
	mov eax,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x250],9
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	jne Block272

 Block271:
	push 0x80004003
	call _com_issue_error

 Block272:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x3C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0xB0]
	mov dword ptr [esp+0x44],0
	call eax
	test eax,eax
	jge Block274

 Block273:
	mov ecx,dword ptr [esp+0x2C]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block274:
	mov edx,dword ptr [esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x4C]
	push ecx
	mov ecx,dword ptr [esp+0xD4]
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x34],esp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	push eax
	mov eax,dword ptr [esp+0xE8]
	push edx
	lea edx,[ecx+eax]
	mov ecx,dword ptr [esp+0x6C]
	add edx,ecx
	add eax,ecx
	push edx
	mov byte ptr [esp+0x26C],8
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	mov byte ptr [esp+0x248],1
	test ebx,ebx
	je Block281

 Block275:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block281

 Block276:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block278

 Block277:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block278:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block280

 Block279:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block280:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block281:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block284

 Block282:
	cmp dword ptr [eax-4],0
	jne Block363

 Block283:
	mov esi,dword ptr [esp+0x14]

 Block284:
	mov esi,dword ptr [esi+0x58C]
	push esi
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block286

 Block285:
	mov dword ptr [esp+0x50],0xC8
	cmp eax,0x2E
	jne Block287

 Block286:
	mov dword ptr [esp+0x50],0x12C

 Block287:
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x21
	jne Block289

 Block288:
	add dword ptr [esp+0x50],0x78
	jmp Block298

 Block289:
	cmp edi,0x21612AC
	je Block297

 Block290:
	cmp edi,0x2179952
	je Block297

 Block291:
	cmp edi,0x217C05C
	je Block296

 Block292:
	cmp edi,0x217E76D
	je Block296

 Block293:
	cmp edi,0x217E775
	je Block296

 Block294:
	cmp edi,0x217C067
	jne Block298

 Block295:
	mov dword ptr [esp+0x50],0x1B8
	jmp Block298

 Block296:
	mov dword ptr [esp+0x50],0x1C2
	jmp Block298

 Block297:
	mov dword ptr [esp+0x50],0x190

 Block298:
	cmp edi,0x217C05C
	mov ecx,dword ptr [esp+0xA0]
	mov edx,dword ptr [esp+0x9C]
	mov esi,ecx
	mov ebx,edx
	mov dword ptr [esp+0x78],esi
	jg Block304

 Block299:
	je Block308

 Block300:
	cmp edi,0xE6935F
	je Block303

 Block301:
	cmp edi,0x1F914CF
	jne Block306

 Block302:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x640]
	and al,1
	movsx ebx,al
	neg ebx
	sbb ebx,ebx
	and ebx,0xFFFFFF74
	add ebx,0x46
	add ebx,edx
	jmp Block309

 Block303:
	mov ebx,dword ptr [ebp+0x18]
	neg ebx
	sbb ebx,ebx
	and ebx,0xFFFFFED4
	add ebx,0x96
	add ebx,edx
	jmp Block309

 Block304:
	mov eax,edi
	sub eax,0x217E76D
	je Block308

 Block305:
	sub eax,8
	je Block307

 Block306:
	mov ebx,dword ptr [ebp+0x18]
	neg ebx
	sbb ebx,ebx
	and ebx,0xFFFFFF9C
	add ebx,0x32
	add ebx,edx
	jmp Block309

 Block307:
	lea esi,[ecx+4]
	mov dword ptr [esp+0x78],esi

 Block308:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x640]
	and al,1
	movsx eax,al
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFA0
	add eax,0x30
	add ebx,eax

 Block309:
	cmp dword ptr [ebp+0x18],0
	mov eax,dword ptr [esp+0x50]
	je Block311

 Block310:
	neg eax

 Block311:
	add eax,edx
	sub ecx,esi
	mov edx,ecx
	mov dword ptr [esp+0xB4],eax
	imul edx,ecx
	sub eax,ebx
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x24],edx
	fild dword ptr [esp+0x24]
	call __CIsqrt
	fld qword ptr [__real_3ff8000000000000]
	fmul st,st(1)
	call __ftol2_sse
	mov dword ptr [esp+0x40],eax
	cmp edi,0x141F5E4
	je Block315

 Block312:
	cmp edi,0x1421CF4
	je Block315

 Block313:
	cmp edi,0x1F914CF
	jne Block316

 Block314:
	fmul qword ptr [__real_4004000000000000]

 Block315:
	call __ftol2_sse
	mov dword ptr [esp+0x40],eax
	jmp Block317

 Block316:
	fstp st(0)

 Block317:
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x8C]
	imul eax,ecx
	xor edx,edx
	cmp eax,edx
	mov dword ptr [esp+0x48],edx
	mov dword ptr [esp+0x38],eax
	jle Block363

 Block318:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x6C],edx
	mov edx,dword ptr [esp+0x28]
	neg ecx
	add edx,eax
	add ecx,ecx
	add ecx,ecx
	mov dword ptr [esp+0x84],edx
	mov dword ptr [esp+0x34],ecx

 Block319:
	cmp dword ptr [esp+0x90],2
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [esp+0xA0]
	mov esi,ecx
	jne Block321

 Block320:
	mov edx,dword ptr [esp+0x14]
	mov edx,dword ptr [edx+0x640]
	and dl,1
	movsx esi,dl
	neg esi
	sbb esi,esi
	and esi,0x3C
	add esi,0xFFFFFFE2
	add esi,ecx

 Block321:
	mov ecx,dword ptr [esp+0x34]
	lea edx,[eax+ecx+4]
	mov eax,dword ptr [ebp+0xC]
	push eax
	mov dword ptr [esp+0x60],edx
	call is_shoot_skill_not_showing_bullet
	add esp,4
	test eax,eax
	jne Block362

 Block322:
	cmp edi,0x4E23EA
	je Block362

 Block323:
	cmp edi,0xE6935E
	je Block362

 Block324:
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x78]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edi
	push edx
	push ebx
	lea eax,[esp+0x8C]
	push eax
	call CUser::GetRidingMechanicBulletPos
	cmp edi,0x1F914CF
	jne Block331

 Block325:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block327

 Block326:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block327:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x1960]
	mov edx,dword ptr [ebp+0x30]
	mov byte ptr [esp+0x250],0xA
	push edx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block255

 Block328:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x6C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0xB0]
	mov dword ptr [esp+0x74],0
	call eax
	test eax,eax
	jge Block330

 Block329:
	mov ecx,dword ptr [esp+0x30]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block330:
	mov edx,dword ptr [esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x50]
	push ecx
	mov ecx,dword ptr [esp+0x8C]
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x9C]
	push esi
	push ecx
	push ebx
	add edx,eax
	push edx
	mov byte ptr [esp+0x270],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMobBulletAnimation
	jmp Block362

 Block331:
	cmp edi,0x217C05C
	je Block350

 Block332:
	cmp edi,0x217E76D
	je Block350

 Block333:
	cmp edi,0x217E775
	je Block350

 Block334:
	cmp edi,0x21612AC
	je Block350

 Block335:
	cmp edi,0x2179952
	je Block350

 Block336:
	cmp dword ptr [esp+0xD0],0
	jne Block347

 Block337:
	push edi
	call is_shoot_skill_not_consuming_bullet
	add esp,4
	test eax,eax
	jne Block347

 Block338:
	push edi
	call is_guided_bullet_skill
	add esp,4
	test eax,eax
	jne Block347

 Block339:
	cmp edi,0x2F9F6C
	je Block347

 Block340:
	cmp edi,0x4FAA8F
	je Block347

 Block341:
	cmp edi,0x4FAA90
	je Block347

 Block342:
	cmp edi,0xC80EDA
	je Block347

 Block343:
	cmp edi,0xC80EDE
	je Block347

 Block344:
	cmp edi,0xC80EDF
	je Block347

 Block345:
	cmp edi,0x1F962F1
	je Block347

 Block346:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [esp+0x14]
	push eax
	mov eax,dword ptr [ecx+0x58C]
	push eax
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x1960
	mov byte ptr [esp+0x254],0xE
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x8C]
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x9C]
	push esi
	push ecx
	push ebx
	add edx,eax
	push edx
	mov byte ptr [esp+0x270],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterBulletAnimation
	jmp Block362

 Block347:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	push eax
	call get_soul_arrow
	add esp,4
	add eax,0x22C
	push eax
	lea ecx,[esp+0x68]
	call Ztl_bstr_t::_ctor_copy
	lea ecx,[esp+0x1C]
	call _xbstr_t::length
	test eax,eax
	lea eax,[esp+0x64]
	je Block349

 Block348:
	lea eax,[esp+0x1C]

 Block349:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x1960
	mov byte ptr [esp+0x250],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x48]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x6C]
	push eax
	mov eax,dword ptr [esp+0x98]
	push esi
	push ecx
	push ebx
	add edx,eax
	push edx
	mov byte ptr [esp+0x26C],0xC
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x248],1
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block362

 Block350:
	cmp dword ptr [esp+0x48],2
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x5C],eax
	jle Block355

 Block351:
	cmp edi,0x217C05C
	je Block354

 Block352:
	cmp edi,0x217E76D
	je Block354

 Block353:
	cmp edi,0x217E775
	jne Block355

 Block354:
	mov dword ptr [esp+0x3C],0xB4
	jmp Block356

 Block355:
	mov dword ptr [esp+0x3C],0

 Block356:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x68],esp
	test eax,eax
	je Block358

 Block357:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block358:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x1960]
	mov byte ptr [esp+0x250],0xB
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block255

 Block359:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x70]
	push edx
	push eax
	mov eax,dword ptr [ecx+0xB0]
	mov dword ptr [esp+0x78],0
	call eax
	test eax,eax
	jge Block361

 Block360:
	mov ecx,dword ptr [esp+0x2C]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block361:
	mov edx,dword ptr [esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x68]
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x34],esp
	push edx
	mov edx,dword ptr [esp+0x90]
	add eax,ecx
	mov ecx,dword ptr [esp+0x94]
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	lea esi,[ecx+eax]
	mov ecx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x6C]
	add esi,ecx
	add eax,ecx
	add esi,edx
	push esi
	add eax,edx
	mov byte ptr [esp+0x26C],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMagicBulletAnimation

 Block362:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0xAC]
	add dword ptr [esp+0x34],8
	add dword ptr [esp+0x6C],ecx
	add dword ptr [esp+0x84],ecx
	inc eax
	cmp eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x48],eax
	jl Block319

 Block363:
	cmp edi,0x30FEFC
	jg Block408

 Block364:
	je Block384

 Block365:
	mov eax,edi
	sub eax,0x2F785B
	je Block368

 Block366:
	sub eax,1
	je Block425

 Block367:
	sub eax,0x1869F
	jne Block444

 Block368:
	mov edx,dword ptr [ebp+0x24]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block444

 Block369:
	cmp dword ptr [eax-4],0
	je Block444

 Block370:
	mov eax,dword ptr [ebp+0x10]
	mov ebx,dword ptr [ebp+0xC]
	push eax
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov ecx,dword ptr [esi+0x1D4]
	add esi,0x1CC
	push ecx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xFC],eax
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x108],eax
	mov ecx,dword ptr [esi+0x20]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x114],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x24]
	mov dword ptr [esp+0x120],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x94]
	add eax,0x90
	mov eax,dword ptr [eax]
	add esp,0x20
	push edx
	push eax
	lea ecx,[esp+0xFC]
	push ecx
	call OffsetRect
	cmp edi,0x2F785B
	jne Block376

 Block371:
	lea edx,[esp+0x70]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x248],0xF
	test eax,eax
	je Block373

 Block372:
	mov eax,dword ptr [eax]
	jmp Block374

 Block373:
	xor eax,eax

 Block374:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x94]
	push 0
	push 0xFF
	push 0x80
	push 0x1F4
	add edx,ecx
	push edx
	lea ecx,[esp+0x108]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x248],1
	test ecx,ecx
	je Block376

 Block375:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x70],0

 Block376:
	sub dword ptr [esp+0xF8],0x32
	sub dword ptr [esp+0x100],0xAA
	cmp dword ptr [ebx+0x20C],0
	je Block378

 Block377:
	mov al,byte ptr [ebp+0x10]
	jmp Block379

 Block378:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax

 Block379:
	movzx ecx,al
	push ecx
	lea edx,[esp+0xAC]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x248],0x10
	test eax,eax
	je Block381

 Block380:
	mov eax,dword ptr [eax]
	jmp Block382

 Block381:
	xor eax,eax

 Block382:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x94]
	add ecx,edx
	mov edx,dword ptr [ebp+0x18]
	push ecx
	lea ecx,[esp+0xF8]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFallingAnimation
	mov ecx,dword ptr [esp+0xA8]
	test ecx,ecx
	je Block444

 Block383:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA8],0
	jmp Block444

 Block384:
	mov ebx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ebx]
	xor edi,edi
	cmp eax,edi
	je Block444

 Block385:
	cmp dword ptr [eax-4],edi
	je Block444

 Block386:
	mov ecx,ebx
	mov dword ptr [esp+0x20],edi
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block444

 Block387:
	mov esi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x38],edi

 Block388:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x38]
	mov ecx,dword ptr [ecx+eax]
	cmp ecx,edi
	je Block406

 Block389:
	push edi
	lea edx,[esp+0x128]
	push edx
	call CMob::GetBodyRect
	mov eax,dword ptr [esp+0x12C]
	mov ecx,dword ptr [esp+0x124]
	sub eax,ecx
	cmp eax,0x96
	jge Block391

 Block390:
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x4B
	lea ecx,[ecx+eax-0x4B]
	sub edx,eax
	add dword ptr [esp+0x12C],edx
	mov dword ptr [esp+0x124],ecx

 Block391:
	mov eax,dword ptr [esp+0x130]
	add eax,0xFFFFFFF6
	mov dword ptr [esp+0x128],eax
	cmp dword ptr [esi+0x20C],edi
	je Block393

 Block392:
	mov al,byte ptr [ebp+0x10]
	jmp Block394

 Block393:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax

 Block394:
	movzx ecx,al
	push ecx
	lea edx,[esp+0xB4]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x248],0x12
	cmp eax,edi
	je Block396

 Block395:
	mov eax,dword ptr [eax]
	jmp Block397

 Block396:
	xor eax,eax

 Block397:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x94]
	add ecx,edx
	mov edx,dword ptr [ebp+0x18]
	push ecx
	lea ecx,[esp+0x128]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFallingAnimation
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x248],1
	cmp eax,edi
	je Block406

 Block398:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block405

 Block399:
	cmp esi,edi
	je Block405

 Block400:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block402

 Block401:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block402:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block404

 Block403:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block404:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block405:
	mov esi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0xB0],edi

 Block406:
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x38],0x98
	mov ecx,ebx
	call ZArray<ATTACKINFO>::GetCount
	cmp dword ptr [esp+0x20],eax
	jb Block388

 Block407:
	jmp Block444

 Block408:
	cmp edi,0xC80ED8
	je Block425

 Block409:
	cmp edi,0x1F962E9
	jne Block444

 Block410:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	push eax
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov ecx,dword ptr [esi+0x1D4]
	add esi,0x1CC
	push ecx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x11C],eax
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x128],eax
	mov ecx,dword ptr [esi+0x20]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x134],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0xC4]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esi]
	mov ebx,dword ptr [ecx+0x640]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x140],eax
	add esp,0x20
	lea eax,[esp+0x16C]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1AC]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	test bl,1
	jne Block412

 Block411:
	mov ecx,dword ptr [esp+0x11C]
	mov edx,dword ptr [esp+0x114]
	neg ecx
	neg edx
	mov dword ptr [esp+0x114],ecx
	mov dword ptr [esp+0x11C],edx

 Block412:
	push edi
	push eax
	lea eax,[esp+0x11C]
	push eax
	call OffsetRect
	lea ecx,[esp+0x98]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x248],0x13
	test eax,eax
	je Block414

 Block413:
	mov eax,dword ptr [eax]
	jmp Block415

 Block414:
	xor eax,eax

 Block415:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0xFF
	push 0x80
	push 0xCE4
	push 0xB4
	lea edx,[esp+0x128]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x248],1
	test eax,eax
	je Block424

 Block416:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block423

 Block417:
	test esi,esi
	je Block423

 Block418:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block420

 Block419:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block420:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block422

 Block421:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block422:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block423:
	mov dword ptr [esp+0x98],0

 Block424:
	mov ecx,dword ptr [esp+0xC0]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0x9B
	call CAvatar::GetLayerZ
	sub eax,2
	push eax
	push 0xE1
	push 0x546
	push 0x5DC
	mov ecx,esi
	call CAnimationDisplayer::RegisterFadeInOutAnimation
	jmp Block444

 Block425:
	mov eax,dword ptr [ebp+0x24]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block444

 Block426:
	cmp dword ptr [eax-4],0
	je Block444

 Block427:
	mov ecx,dword ptr [ebp+0x10]
	mov edi,dword ptr [ebp+0xC]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov edx,dword ptr [esi+0x1D4]
	add esi,0x1CC
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xEC],eax
	mov eax,dword ptr [esi+0x14]
	push eax
	lea ecx,[esi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xF8],eax
	mov edx,dword ptr [esi+0x20]
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x104],eax
	mov ecx,dword ptr [esi+0x2C]
	push ecx
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0xC4]
	mov edx,dword ptr [esp+0x34]
	mov ebx,dword ptr [edx+0x640]
	add esp,0x20
	mov dword ptr [esp+0xF0],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x13C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0xC0],eax
	lea eax,[esp+0x144]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	test bl,1
	jne Block429

 Block428:
	mov ecx,dword ptr [esp+0xEC]
	mov edx,dword ptr [esp+0xE4]
	neg ecx
	neg edx
	mov dword ptr [esp+0xE4],ecx
	mov dword ptr [esp+0xEC],edx

 Block429:
	mov ecx,dword ptr [esp+0xC0]
	push ecx
	push eax
	lea edx,[esp+0xEC]
	push edx
	call OffsetRect
	mov eax,0xFA
	sub dword ptr [esp+0xE8],eax
	sub dword ptr [esp+0xF0],eax
	cmp dword ptr [edi+0x20C],0
	je Block431

 Block430:
	mov al,byte ptr [ebp+0x10]
	jmp Block432

 Block431:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx

 Block432:
	movzx eax,al
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x248],0x11
	test eax,eax
	je Block434

 Block433:
	mov eax,dword ptr [eax]
	jmp Block435

 Block434:
	xor eax,eax

 Block435:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x94]
	add edx,ecx
	mov ecx,dword ptr [ebp+0x18]
	push edx
	lea edx,[esp+0xE8]
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterFallingAnimation
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x248],1
	test eax,eax
	je Block444

 Block436:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block443

 Block437:
	test esi,esi
	je Block443

 Block438:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block440

 Block439:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block440:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block442

 Block441:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block442:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block443:
	mov dword ptr [esp+0x18],0

 Block444:
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea edx,[esp+0x208]
	push edx
	mov byte ptr [esp+0x258],0x15
	call __eh_vector_dtor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea eax,[esp+0x1CC]
	push eax
	mov byte ptr [esp+0x258],0x14
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esp+0x1C]
	int 3// TODO: 	mov dword ptr [esp+0x1B4],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x248],0xFFFFFFFF
	test eax,eax
	je Block453

 Block445:
	mov esi,eax
	add eax,8
	push eax

 Block446:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block453

 Block447:
	test esi,esi
	je Block453

 Block448:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block450

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block450:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block452

 Block451:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block452:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block453:
	mov ecx,dword ptr [esp+0x240]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x38
}
}
// CUserRemote::IsRemoteUser
__SUB_CLASS_THIS0(00554460, __thiscall, 41507,  CUserRemote, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CUserRemote::OnBodyAttack
_SUB_EXCEPTION_HANDLER(5548F0)
__SUB_CLASS_THIS(005548F0, __thiscall, 41516,  CUserRemote, void, long, const SKILLENTRY*, long, long, int32_t, long, ZArray<ATTACKINFO>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5548F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xCC]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	call get_update_time
	mov esi,dword ptr [esp+0xE0]
	xor edi,edi
	mov ebx,eax
	mov dword ptr [esp+0x38],ebx
	cmp esi,edi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x24],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x24],edi

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax
	mov edx,dword ptr [esp+0xF0]
	movzx ecx,al
	mov eax,dword ptr [ebp+0x5B0]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [esp+0xF0]
	push eax
	lea ecx,[esp+0x28]
	push esi
	push ecx
	call CUser::GetAfterimageUOL
	add esp,0x18
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0xD4],edi
	cmp ecx,edi
	je Block35

 Block6:
	cmp dword ptr [ecx],edi
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	cmp eax,edi
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	jne Block10

 Block9:
	call _xbstr_t::Data_t::Release
	jmp Block35

 Block10:
	mov eax,dword ptr [ebp+0x58C]
	push edi
	push edi
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x2C],esp
	cmp eax,edi
	je Block12

 Block11:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov edx,dword ptr [esp+0xF8]
	mov eax,dword ptr [esp+0xFC]
	push edx
	push eax
	push ebx
	mov ecx,ebp
	call CUser::RegisterAfterimage
	xor eax,eax
	push 1
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[ebp+0x88]
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	call CAvatar::GetBodyRect
	mov ebx,dword ptr [esp+0xF4]
	mov ecx,ebx
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block16

 Block13:
	mov dword ptr [esp+0x14],edi

 Block14:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [ebx]
	add esi,dword ptr [esp+0x14]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	lea edx,[esp+0x50]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esi]
	push edx
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	add dword ptr [esp+0x14],0x98
	mov dword ptr [esi+0x90],ecx
	mov edx,dword ptr [eax+4]
	mov ecx,ebx
	mov dword ptr [esi+0x94],edx
	inc edi
	call ZArray<ATTACKINFO>::GetCount
	cmp edi,eax
	jb Block14

 Block15:
	xor edi,edi

 Block16:
	mov ecx,dword ptr [ebx]
	cmp ecx,edi
	jne Block18

 Block17:
	xor edx,edx
	jmp Block19

 Block18:
	mov edx,dword ptr [ecx-4]

 Block19:
	mov eax,dword ptr [ebp+0x58C]
	push edi
	push ecx
	mov ecx,dword ptr [esp+0xF0]
	push edx
	mov edx,dword ptr [esp+0xF0]
	push ecx
	mov ecx,dword ptr [esp+0xF0]
	push eax
	movzx eax,byte ptr [ebp+0x3AC0]
	push edx
	push eax
	push ecx
	lea ecx,[esp+0x68]
	call CSkill_HitAni::_ctor_0
	mov ecx,ebx
	mov byte ptr [esp+0xD4],1
	mov dword ptr [esp+0x14],edi
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block27

 Block20:
	mov dword ptr [esp+0x20],edi

 Block21:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+edx]
	lea esi,[eax+edx]
	xor edi,edi
	cmp dword ptr [esp+0xDC],edi
	mov dword ptr [esp+0x1C],ecx
	jle Block25

 Block22:
	lea ebx,[esi+0x18]

 Block23:
	mov eax,dword ptr [esp+0x14]
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x58],esp
	push eax
	push edx
	lea ecx,[esp+0x6C]
	call CSkill_HitAni::operator()
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	mov eax,dword ptr [ebp+0x19E8]
	push ecx
	mov ecx,dword ptr [ebx+0x3C]
	push edx
	mov edx,dword ptr [ebx]
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x118]
	push edx
	mov edx,dword ptr [esi+4]
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x5C]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push edx
	push eax
	call CMob::AddDamageInfo
	inc edi
	add ebx,4
	cmp edi,dword ptr [esp+0xDC]
	jl Block23

 Block24:
	mov ebx,dword ptr [esp+0xF4]

 Block25:
	mov esi,dword ptr [esp+0x14]
	add dword ptr [esp+0x20],0x98
	inc esi
	mov ecx,ebx
	mov dword ptr [esp+0x14],esi
	call ZArray<ATTACKINFO>::GetCount
	cmp esi,eax
	jb Block21

 Block26:
	xor edi,edi

 Block27:
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0xE4],3
	call __eh_vector_dtor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xE4],2
	call __eh_vector_dtor_iterator
	mov esi,dword ptr [esp+0x18]
	int 3// TODO: 	mov dword ptr [esp+0x48],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	cmp esi,edi
	je Block35

 Block28:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block29:
	cmp esi,edi
	je Block35

 Block30:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block34

 Block33:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block34:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block35:
	mov ecx,dword ptr [esp+0xCC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC4
	ret 0x1C
}
}
// CUserRemote::OnAttack
_SUB_EXCEPTION_HANDLER(55A670)
__SUB_CLASS_THIS(0055A670, __thiscall, 41510,  CUserRemote, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55A670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov ebp,dword ptr [esp+0x90]
	xor ebx,ebx
	mov ecx,ebp
	mov dword ptr [esp+0x3C],ebx
	call CInPacket::Decode1
	movzx eax,al
	mov edi,eax
	and eax,0xF
	mov ecx,ebp
	sar edi,4
	mov dword ptr [esp+0x28],eax
	call CInPacket::Decode1
	mov ecx,ebp
	mov byte ptr [esi+0x3AC0],al
	call CInPacket::Decode1
	movzx esi,al
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block48

 Block1:
	mov ecx,ebp
	call CInPacket::Decode4
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block49

 Block2:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov ebx,eax
	mov dword ptr [esp+0x30],ebx
	test ebx,ebx
	je Block7

 Block3:
	cmp esi,1
	jg Block5

 Block4:
	mov esi,1

 Block5:
	mov ecx,ebx
	call SKILLENTRY::GetMaxLevel
	cmp esi,eax
	mov dword ptr [esp+0x24],esi
	jl Block7

 Block6:
	mov dword ptr [esp+0x24],eax

 Block7:
	cmp dword ptr [esp+0x14],0x30FEFE
	mov dword ptr [esp+0x44],0
	jne Block50

 Block8:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx esi,al
	mov dword ptr [esp+0x44],esi
	test esi,esi
	je Block50

 Block9:
	mov ecx,ebp
	call CInPacket::Decode4
	test eax,eax
	je Block50

 Block10:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov dword ptr [esp+0x58],eax
	test eax,eax
	je Block15

 Block11:
	cmp esi,1
	jg Block13

 Block12:
	mov esi,1

 Block13:
	mov ecx,eax
	call SKILLENTRY::GetMaxLevel
	cmp esi,eax
	mov dword ptr [esp+0x44],esi
	jl Block15

 Block14:
	mov dword ptr [esp+0x44],eax

 Block15:
	mov ecx,ebp
	call CInPacket::Decode1
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]
	movzx eax,al
	and eax,0x20
	mov dword ptr [esp+0x60],eax
	xor eax,eax
	cmp ecx,dword ptr [esi+0x4EE8]
	mov dword ptr [esi+0x4EE8],0xFFFFFFFF
	sete al
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	jne Block32

 Block16:
	cmp ecx,0x2F9F6C
	je Block32

 Block17:
	cmp ecx,0x4FAA8C
	je Block32

 Block18:
	cmp ecx,0xE6935E
	je Block32

 Block19:
	cmp ecx,0xC80EDA
	je Block32

 Block20:
	cmp ecx,0x21612A9
	je Block32

 Block21:
	cmp ecx,0x2179951
	je Block32

 Block22:
	cmp ecx,0x1EA20AB
	je Block32

 Block23:
	cmp ecx,0x1F962F1
	je Block32

 Block24:
	cmp ecx,0x217C05C
	je Block32

 Block25:
	cmp ecx,0x217E76D
	je Block32

 Block26:
	cmp ecx,0x1E9F9A2
	je Block32

 Block27:
	test ebx,ebx
	je Block29

 Block28:
	cmp dword ptr [ebx+0xC],3
	je Block32

 Block29:
	mov ebx,esi
	lea esi,[ebx+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block31

 Block30:
	mov ecx,esi
	call CAvatar::ResetOneTimeAction
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax

 Block31:
	mov ecx,dword ptr [ebx+0x19E8]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RemovePrepareAnimation
	mov dword ptr [ebx+0x4ED0],0

 Block32:
	mov ecx,ebp
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,eax
	shr ecx,0xF
	and eax,0x7FFF
	and ecx,1
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x2C],eax
	cmp eax,0x110
	ja Block169

 Block33:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebp
	mov dword ptr [esp+0x54],edx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,ebp
	mov dword ptr [esp+0x48],eax
	call CInPacket::Decode4
	lea ecx,[esp+0x8C]
	push ecx
	xor esi,esi
	push edi
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x98],esi
	call ZArray<ATTACKINFO>::_Alloc
	cmp edi,esi
	mov dword ptr [esp+0x84],esi
	jle Block70

 Block34:
	mov edx,dword ptr [esp+0x90]
	add edx,0x14
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x50],edi
	jmp Block36

 Block36:
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx-0x14],eax
	test eax,eax
	je Block69

 Block37:
	mov ecx,ebp
	call CInPacket::Decode1
	cmp dword ptr [esp+0x14],0x40413E
	mov esi,dword ptr [esp+0x1C]
	movzx edx,al
	mov dword ptr [esi-0x10],edx
	jne Block66

 Block38:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi],eax
	mov dword ptr [esp+0x4C],0
	test eax,eax
	jle Block69

 Block39:
	mov eax,esi
	add eax,4
	mov dword ptr [esp+0x34],eax
	lea ebx,[ebx]

 Block40:
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [edx-0x14]
	xor ebx,ebx
	test eax,eax
	je Block64

 Block41:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push eax
	call CMobPool::GetMob
	test eax,eax
	je Block64

 Block42:
	mov edi,dword ptr [eax+0x174]
	test edi,edi
	je Block64

 Block43:
	mov eax,dword ptr [edi+0x1B8]
	push eax
	lea ecx,[edi+0x1B0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov esi,eax
	add esp,8
	test esi,esi
	jle Block46

 Block44:
	mov edx,dword ptr [esp+0x34]
	cmp dword ptr [edx],ebx
	jle Block46

 Block45:
	mov ebx,1

 Block46:
	push 0x40413E
	mov ecx,edi
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	jne Block51

 Block47:
	xor esi,esi
	jmp Block52

 Block48:
	mov dword ptr [esp+0x14],ebx

 Block49:
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	jmp Block7

 Block50:
	mov dword ptr [esp+0x58],0
	jmp Block15

 Block51:
	test ebx,ebx
	je Block64

 Block52:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax+0x5A0],0xA
	jne Block63

 Block53:
	mov edi,dword ptr [esp+0x28]
	cmp edi,1
	jle Block63

 Block54:
	xor ebx,ebx
	test edi,edi
	jle Block64

 Block55:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4

 Block56:
	mov eax,0x66666667
	test bl,1
	jne Block58

 Block57:
	lea edx,[esi*8]
	sub edx,esi
	jmp Block59

 Block58:
	lea edx,[esi+esi*2]

 Block59:
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [ecx],eax
	test eax,eax
	jne Block61

 Block60:
	mov eax,1

 Block61:
	mov dword ptr [ecx],eax
	inc ebx
	add ecx,4
	cmp ebx,edi
	jl Block56

 Block62:
	jmp Block64

 Block63:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx],esi

 Block64:
	mov eax,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x1C]
	add dword ptr [esp+0x34],4
	inc eax
	cmp eax,dword ptr [edx]
	mov dword ptr [esp+0x4C],eax
	jl Block40

 Block65:
	jmp Block69

 Block66:
	cmp dword ptr [esp+0x28],0
	jle Block69

 Block67:
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x28]
	add esi,4
	nop

 Block68:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,ebp
	mov dword ptr [esi+0x3C],eax
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	add esi,4
	sub edi,1
	jne Block68

 Block69:
	add dword ptr [esp+0x1C],0x98
	sub dword ptr [esp+0x50],1
	jne Block36

 Block70:
	xor esi,esi
	cmp dword ptr [esp+0x8C],0xD4
	mov dword ptr [esp+0x6C],esi
	mov dword ptr [esp+0x70],esi
	jne Block72

 Block71:
	mov ecx,ebp
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esp+0x6C],ecx
	mov ecx,ebp
	call CInPacket::Decode2
	movsx edx,ax
	mov dword ptr [esp+0x70],edx

 Block72:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x50],esi
	cmp eax,0x205D29
	je Block79

 Block73:
	cmp eax,0x21E3C9
	je Block79

 Block74:
	cmp eax,0x236A69
	je Block79

 Block75:
	cmp eax,0x1518A28
	je Block79

 Block76:
	cmp eax,0x151FF59
	je Block79

 Block77:
	cmp eax,0x1F914CF
	jne Block80

 Block78:
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x50],eax
	call CUser::RemoveSwallowingEffect
	jmp Block80

 Block79:
	mov ecx,ebp
	call CInPacket::Decode4
	mov dword ptr [esp+0x4C],eax

 Block80:
	mov ebx,dword ptr [esp+0x90]
	mov ebp,dword ptr [esp+0x78]
	xor esi,esi
	jmp Block82

 Block82:
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block94

 Block83:
	cmp esi,dword ptr [eax-4]
	jae Block94

 Block84:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block92

 Block85:
	mov dword ptr [esp+0x34],eax
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	add ecx,4
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block87

 Block86:
	mov eax,dword ptr [esp+0x1C]
	jmp Block88

 Block87:
	xor ebp,ebp
	or dword ptr [esp+0x3C],1
	mov dword ptr [esp+0x78],ebp
	lea eax,[esp+0x74]

 Block88:
	test byte ptr [esp+0x3C],1
	mov edi,dword ptr [eax+4]
	je Block91

 Block89:
	and dword ptr [esp+0x3C],0xFFFFFFFE
	test ebp,ebp
	je Block91

 Block90:
	push 0
	lea ecx,[esp+0x78]
	call ZRef<CMob>::_ReleaseRaw
	xor ebp,ebp
	mov dword ptr [esp+0x78],ebp

 Block91:
	test edi,edi
	jne Block93

 Block92:
	push esi
	lea ecx,[esp+0x94]
	call ZArray<ATTACKINFO>::FindIndex
	push eax
	lea ecx,[esp+0x94]
	call ZArray<ATTACKINFO>::RemoveAt
	dec esi
	sub ebx,0x98
	inc esi
	add ebx,0x98
	jmp Block82

 Block93:
	mov dword ptr [ebx],edi
	inc esi
	add ebx,0x98
	jmp Block82

 Block94:
	cmp dword ptr [esp+0x8C],0xD6
	je Block162

 Block95:
	mov edi,dword ptr [esp+0x18]
	mov edx,dword ptr [edi+0x640]
	xor edx,dword ptr [esp+0x40]
	and edx,1
	xor dword ptr [edi+0x640],edx
	cmp dword ptr [esp+0x5C],0
	jne Block126

 Block96:
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	je Block109

 Block97:
	mov eax,dword ptr [esi]
	cmp eax,0x231C4A
	je Block110

 Block98:
	cmp eax,0x2F9F6C
	je Block110

 Block99:
	cmp eax,0x4FAA8C
	je Block110

 Block100:
	cmp eax,0xE6935E
	je Block110

 Block101:
	cmp eax,0xC80EDA
	je Block110

 Block102:
	cmp eax,0x21612A9
	je Block110

 Block103:
	cmp eax,0x2179951
	je Block110

 Block104:
	cmp eax,0x1F962F1
	je Block110

 Block105:
	cmp eax,0x217C05C
	je Block110

 Block106:
	cmp eax,0x217E76D
	je Block110

 Block107:
	push eax
	call is_throw_bomb_skill
	add esp,4
	test eax,eax
	jne Block110

 Block108:
	cmp dword ptr [esi+0xC],3
	je Block110

 Block109:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push esi
	push ecx
	push edx
	mov ecx,edi
	call CUser::SetAttackAction
	test eax,eax
	je Block168

 Block110:
	test esi,esi
	je Block126

 Block111:
	mov eax,dword ptr [esi]
	cmp eax,0x2F9F6C
	je Block126

 Block112:
	cmp eax,0x4FAA8C
	je Block126

 Block113:
	cmp eax,0x4F5C6E
	je Block126

 Block114:
	cmp eax,0xE6935E
	je Block126

 Block115:
	cmp eax,0xC80EDA
	je Block126

 Block116:
	cmp eax,0xC7E7CA
	je Block126

 Block117:
	cmp eax,0x21612A9
	je Block126

 Block118:
	cmp eax,0x2179951
	je Block126

 Block119:
	cmp eax,0x1F962F1
	je Block126

 Block120:
	push eax
	call is_throw_bomb_skill
	add esp,4
	test eax,eax
	jne Block126

 Block121:
	mov eax,dword ptr [esi+0xC]
	cmp eax,3
	je Block126

 Block122:
	cmp eax,4
	jne Block125

 Block123:
	cmp dword ptr [esp+0x60],0
	je Block125

 Block124:
	cmp dword ptr [esp+0x14],0x423D0D
	jne Block126

 Block125:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push 0x7FFFFFFF
	push 0
	push eax
	push ecx
	push esi
	mov ecx,edi
	call CUser::ShowSkillEffect

 Block126:
	mov eax,dword ptr [esp+0x2C]
	lea esi,[eax+eax*2]
	add edi,0x88
	mov ecx,edi
	lea esi,[esi*8+ActionData::m_saCharacterActions]
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	mov eax,dword ptr [edx+edi+0x5C8]
	imul eax,dword ptr [esi+0x10]
	lea edi,[edx+edi+0x5C0]
	cdq
	idiv dword ptr [esi+0xC]
	mov ebp,eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x10F3E0
	je Block143

 Block127:
	cmp eax,0x14011E
	je Block143

 Block128:
	cmp eax,0x895829
	je Block143

 Block129:
	cmp eax,0x1522669
	je Block143

 Block130:
	cmp eax,0x217994B
	je Block143

 Block131:
	cmp eax,0x3F1
	je Block143

 Block132:
	cmp eax,0x989A71
	je Block143

 Block133:
	cmp eax,0x13130F1
	je Block143

 Block134:
	cmp eax,0x1315801
	je Block143

 Block135:
	cmp eax,0x1C9C771
	je Block143

 Block136:
	cmp eax,0x3FC
	je Block143

 Block137:
	cmp eax,0x989A7C
	je Block143

 Block138:
	cmp eax,0x13130FC
	je Block143

 Block139:
	cmp eax,0x131580C
	je Block143

 Block140:
	cmp eax,0x1C9C77C
	je Block143

 Block141:
	cmp eax,0x4215FB
	je Block143

 Block142:
	cmp eax,0x1F962EA
	jne Block162

 Block143:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+4]
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	add edi,4
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,edi
	call edx
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	sub edi,ebx
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push ecx
	mov ecx,esi
	add ebx,4
	call edx
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [esp+0x14]
	sub eax,esi
	cmp ebx,0x10F3E0
	je Block148

 Block144:
	cmp ebx,0x1F962EA
	je Block148

 Block145:
	fld qword ptr [__real_4039000000000000]
	xor esi,esi

 Block146:
	mov ecx,eax
	fstp qword ptr [esp+0x74]
	mov edx,edi
	imul ecx,eax
	imul edx,edi
	add ecx,edx
	mov dword ptr [esp+0x60],ecx
	fild dword ptr [esp+0x60]
	call __CIsqrt
	fld qword ptr [__real_4079000000000000]
	fcom
	fnstsw ax
	test ah,5
	jp Block149

 Block147:
	fstp st(1)
	fld st(0)
	jmp Block150

 Block148:
	fld qword ptr [__real_402e000000000000]
	mov esi,1
	jmp Block146

 Block149:
	fxch

 Block150:
	fsubp st(1),st(0)
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0
	fdiv qword ptr [esp+0x7C]
	push ebp
	push esi
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble
	cmp ebx,0x3F1
	je Block155

 Block151:
	cmp ebx,0x989A71
	je Block155

 Block152:
	cmp ebx,0x13130F1
	je Block155

 Block153:
	cmp ebx,0x1315801
	je Block155

 Block154:
	cmp ebx,0x1C9C771
	jne Block156

 Block155:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xFF
	add ecx,0x88
	call CAvatar::GetLayerZ
	sub eax,0x64
	push eax
	push 0x208
	push 0xC80
	push 0x2D0
	mov ecx,esi
	call CAnimationDisplayer::RegisterFadeInOutAnimation

 Block156:
	cmp ebx,0x3FC
	je Block161

 Block157:
	cmp ebx,0x989A7C
	je Block161

 Block158:
	cmp ebx,0x13130FC
	je Block161

 Block159:
	cmp ebx,0x131580C
	je Block161

 Block160:
	cmp ebx,0x1C9C77C
	jne Block162

 Block161:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xFF
	add ecx,0x88
	call CAvatar::GetLayerZ
	sub eax,0x64
	push eax
	push 0x208
	push 0xC80
	push 0x2D0
	mov ecx,esi
	call CAnimationDisplayer::RegisterFadeInOutAnimation

 Block162:
	mov eax,dword ptr [esp+0x8C]
	add eax,0xFFFFFF2D
	cmp eax,3
	ja Block168

 Block163:
	cmp EAX, 0
je Block164
cmp EAX, 1
je Block165
cmp EAX, 2
je Block166
cmp EAX, 3
je Block167


 Block164:
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x40]
	lea eax,[esp+0x90]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	push eax
	call CUserRemote::OnMeleeAttack
	jmp Block168

 Block165:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x78]
	push eax
	mov eax,dword ptr [esp+0x78]
	push ecx
	push edx
	mov edx,dword ptr [esp+0x7C]
	push eax
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0xA8]
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	push edx
	mov edx,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x54]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push edx
	call CUserRemote::OnShootAttack
	jmp Block168

 Block166:
	mov eax,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x38]
	call CUserRemote::OnMagicAttack
	jmp Block168

 Block167:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x40]
	lea edx,[esp+0x90]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push edx
	call CUserRemote::OnBodyAttack

 Block168:
	lea ecx,[esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZArray<ATTACKINFO>::RemoveAll

 Block169:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 8
}
}
// CUserRemote::IsLocalUser
__SUB_CLASS_THIS0(00554440, __thiscall, 41507,  CUserRemote, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUserRemote::LoadCompletely
_SUB_EXCEPTION_HANDLER(555130)
__SUB_CLASS_THIS0(00555130, __thiscall, 41501,  CUserRemote, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_555130
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
	xor ebp,ebp
	lea ecx,[esi+0x88]
	push 1
	mov dword ptr [esi+0x638],ebp
	call CAvatar::NotifyAvatarModified
	xor edi,edi

 Block1:
	mov eax,dword ptr [esi+0x2E44]
	cmp dword ptr [edi+eax+4],ebp
	je Block7

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x40],ebp
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov ecx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edi+ecx+4]
	xor edx,edx
	add esp,8
	cmp eax,ebp
	sete dl
	push edx
	call CLife::ShowNameTag
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebp
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	add edi,8
	cmp edi,0x18
	jl Block1

 Block8:
	mov ecx,esi
	call CUser::SetMapSpecificEffect
	mov eax,dword ptr [esi+0x4EB4]
	push eax
	mov ecx,esi
	call CUser::SetActivePortableChair
	mov ecx,dword ptr [esi+0x39B4]
	push ecx
	mov ecx,esi
	call CUser::SetActiveEffectItem
	mov edx,dword ptr [esi+0x39B8]
	push edx
	mov ecx,esi
	call CUser::SetCarryItemEffect
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax+0x13D4]
	lea edi,[ebx+0x18]
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block13

 Block9:
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block13

 Block10:
	mov ebp,dword ptr [ZImports::_Sleep]

 Block11:
	push 0
	call ebp
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block11

 Block12:
	xor ebp,ebp

 Block13:
	cmp edi,ebp
	je Block16

 Block14:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block16

 Block15:
	mov dword ptr [edi],ebp

 Block16:
	mov eax,dword ptr [ebx+0xC]
	push ebp
	push eax
	lea ecx,[esi+0x88]
	call CAvatar::SetRidingVehicle
	cmp dword ptr [esi+0x2DF4],ebp
	je Block31

 Block17:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],ebp
	mov edx,dword ptr [esi+0x2E10]
	mov eax,dword ptr [esi+0x2E0C]
	mov ecx,dword ptr [esi+0x2E08]
	push edx
	mov edx,dword ptr [esi+0x2E04]
	push eax
	mov eax,dword ptr [esi+0x2E00]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],1
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block19:
	mov ecx,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x58],2
	cmp ecx,ebp
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x38]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x58],3
	cmp edi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x2C]
	push ecx
	push edi
	mov dword ptr [esp+0x34],ebp
	call edx
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esi+0x2DFC]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2DF4]
	push ecx
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x64],4
	call CChatBalloon::MakeMiniRoomBalloon
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],1
	cmp eax,ebp
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	cmp dword ptr [esi+0x4EDC],ebp
	je Block37

 Block32:
	mov eax,dword ptr [esi+0x1944]
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],5
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esi+0x4EE0]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x54],6
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call CChatBalloon::MakeADBoardBalloon

 Block37:
	mov ecx,esi
	call CUserRemote::CheckDelayedEffect
	mov eax,dword ptr [esi+0x19E8]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::IsPartyMemberID
	test eax,eax
	je Block39

 Block38:
	push 1
	mov ecx,esi
	call CUser::ShowGauge

 Block39:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CUserRemote::CanUseBareHand
__SUB_CLASS_THIS0(00554490, __thiscall, 41521,  CUserRemote, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4E5C]
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	xor ecx,ecx
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,5
	sete cl
	mov eax,ecx
	ret
}
}
// CUserRemote::CheckDelayedEffect
__SUB_CLASS_THIS0(005539E0, __thiscall, 41501,  CUserRemote, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4EEC]
	test eax,eax
	je Block9

 Block1:
	test al,1
	je Block3

 Block2:
	call CUser::LoadDarkForceEffect

 Block3:
	test byte ptr [esi+0x4EEC],2
	je Block6

 Block4:
	mov ecx,dword ptr [esi+0x2EAC]
	test ecx,ecx
	je Block6

 Block5:
	push 1
	call CDragon::CreateEffect

 Block6:
	test byte ptr [esi+0x4EEC],4
	je Block8

 Block7:
	mov ecx,esi
	call CUser::LoadSwallowingEffect

 Block8:
	mov dword ptr [esi+0x4EEC],0

 Block9:
	pop esi
	ret
}
}
// CUserRemote::IsKindOf
__SUB_CLASS_THIS(005544D0, __thiscall, 41526,  CUserRemote, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUserRemote::ms_RTTI_CUserRemote
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
// CUserRemote::RedrawGuildNameTag
__SUB_CLASS_THIS0(005539D0, __thiscall, 41501,  CUserRemote, void) {
__asm {

 Block0:
	jmp  CUser::DrawNameTags
}
}
// CUserRemote::CUserRemote
_SUB_EXCEPTION_HANDLER(554540)
__SUB_CLASS_THIS(00554540, __thiscall, 41499,  CUserRemote, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_554540
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
	mov eax,dword ptr [esp+0x20]
	push eax
	call CUser::_ctor_0
	xor edi,edi
	lea ecx,[esi+0x3AC4]
	mov dword ptr [esp+0x18],edi
	int 3// TODO: 	mov dword ptr [esi],offset CUserRemote::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUserRemote::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUserRemote::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CUserRemote::`vftable'
	call SecondaryStat::_ctor_default
	mov dword ptr [esi+0x4ED0],edi
	mov dword ptr [esi+0x4ED8],edi
	mov dword ptr [esi+0x4EE0],edi
	mov dword ptr [esi+0x4EE4],edi
	mov dword ptr [esi+0x4EE8],0xFFFFFFFF
	mov dword ptr [esi+0x4EEC],edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUserRemote::GetCharacterLevel
__SUB_CLASS_THIS0(00554420, __thiscall, 41505,  CUserRemote, unsigned char) {
__asm {

 Block0:
	mov al,byte ptr [ecx+0x3AC0]
	ret
}
}
// CUserRemote::OnMove
__SUB_CLASS_THIS(00548A80, __thiscall, 41509,  CUserRemote, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x19E4]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+4]
	push 0
	push ecx
	lea ecx,[eax+0x238]
	call CMovePath::OnMovePacket

 Block2:
	ret 4
}
}
// CUserRemote::OnMagicAttack
_SUB_EXCEPTION_HANDLER(558C30)
__SUB_CLASS_THIS(00558C30, __thiscall, 41520,  CUserRemote, void, long, const SKILLENTRY*, long, long, int32_t, long, ZArray<ATTACKINFO>&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_558C30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x12C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x140]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x154]
	test edi,edi
	je Block213

 Block1:
	lea esi,[ebp+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	lea eax,[ecx+esi+0x5C0]
	mov ecx,dword ptr [eax+0xC]
	test ecx,ecx
	je Block213

 Block2:
	cmp dword ptr [ecx-4],0
	je Block213

 Block3:
	test ecx,ecx
	je Block5

 Block4:
	mov ecx,dword ptr [ecx-4]

 Block5:
	mov edx,dword ptr [eax+0xC]
	mov esi,dword ptr [eax+8]
	sub esi,dword ptr [edx+ecx*4-4]
	mov dword ptr [esp+0x50],esi
	call get_update_time
	cmp dword ptr [edi+0x20C],0
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x20],eax
	je Block7

 Block6:
	mov al,byte ptr [esp+0x158]
	jmp Block8

 Block7:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x158]
	push 0
	push eax
	push ecx
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call SKILLENTRY::GetBallUOL
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	mov ecx,ebp
	mov dword ptr [esp+0x148],0
	call edx
	movzx eax,al
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetAfterimageUOL
	mov eax,dword ptr [esp+0x68]
	mov ebx,dword ptr [esp+0x15C]
	mov byte ptr [esp+0x148],1
	test eax,eax
	je Block13

 Block9:
	cmp dword ptr [eax],0
	je Block13

 Block10:
	mov ecx,dword ptr [eax]
	test ecx,ecx
	je Block13

 Block11:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	je Block13

 Block12:
	mov ecx,dword ptr [ebp+0x58C]
	push 0
	push 0
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	add eax,8
	mov dword ptr [esp+0x28],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esp+0x170]
	mov eax,dword ptr [esp+0x64]
	push ebx
	push edx
	add eax,esi
	push eax
	mov ecx,ebp
	call CUser::RegisterAfterimage

 Block13:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[ebp+4]
	lea eax,[esp+0x6C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x60],eax
	lea eax,[esp+0x6C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,0x1C
	mov dword ptr [esp+0x64],eax
	mov eax,dword ptr [esp+0x168]
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block15

 Block14:
	xor edx,edx
	jmp Block16

 Block15:
	mov edx,dword ptr [ecx-4]

 Block16:
	mov eax,dword ptr [ebp+0x58C]
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x160]
	push edx
	movzx edx,byte ptr [ebp+0x3AC0]
	push ebx
	push eax
	push ecx
	push edx
	push edi
	lea ecx,[esp+0xDC]
	call CSkill_HitAni::_ctor_0
	mov ecx,dword ptr [esp+0x168]
	mov byte ptr [esp+0x148],2
	mov dword ptr [esp+0x28],0
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block102

 Block17:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x168]
	imul eax,0x98
	mov esi,dword ptr [ecx]
	mov ebp,dword ptr [esi+eax]
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	add esi,eax
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0xB4]
	push eax
	mov dword ptr [esp+0x5C],ebp
	call edx
	mov ecx,dword ptr [esp+0x14]
	mov edi,eax
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x94]
	push edx
	call eax
	mov ecx,dword ptr [edi]
	xor edx,edx
	cmp ecx,dword ptr [eax]
	mov eax,dword ptr [esp+0x60]
	setl dl
	push 1
	lea ecx,[esp+0x3C]
	mov dword ptr [esi+0x90],eax
	push ecx
	mov ecx,ebp
	mov edi,edx
	mov ebx,edi
	neg ebx
	sbb ebx,ebx
	and ebx,0xFFFFFF9C
	add ebx,0x32
	add ebx,eax
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esi+0x94],eax
	call CMob::GetBodyRect
	cmp dword ptr [esp+0x20],0x2195AD
	je Block42

 Block18:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x231C4A
	je Block42

 Block19:
	cmp eax,0x20361A
	je Block42

 Block20:
	cmp eax,0x23435C
	je Block42

 Block21:
	cmp eax,0x21BCBA
	je Block42

 Block22:
	cmp eax,0x205D29
	je Block42

 Block23:
	cmp eax,0x21E3C9
	je Block42

 Block24:
	cmp eax,0x236A69
	je Block42

 Block25:
	cmp eax,0x205D2F
	je Block42

 Block26:
	cmp eax,0x21E3CF
	je Block42

 Block27:
	cmp eax,0x236A70
	je Block42

 Block28:
	cmp eax,0x1EA20AC
	je Block42

 Block29:
	cmp eax,0x21E3CE
	je Block42

 Block30:
	cmp eax,0xB8CC9B
	je Block42

 Block31:
	cmp eax,0xB8A58E
	je Block42

 Block32:
	cmp eax,0x1518A28
	je Block42

 Block33:
	cmp eax,0x151FF59
	je Block42

 Block34:
	cmp eax,0x1527489
	je Block42

 Block35:
	cmp eax,0x151B138
	je Block42

 Block36:
	cmp eax,0x1522669
	je Block42

 Block37:
	lea edx,[esp+0x38]
	push edx
	call IsRectEmpty
	test eax,eax
	jne Block101

 Block38:
	test edi,edi
	je Block41

 Block39:
	cmp ebx,dword ptr [esp+0x40]
	jle Block101

 Block40:
	jmp Block42

 Block41:
	cmp ebx,dword ptr [esp+0x38]
	jge Block101

 Block42:
	mov eax,dword ptr [esi+0x94]
	mov ecx,dword ptr [esp+0x3C]
	cmp eax,ecx
	jl Block44

 Block43:
	mov ecx,dword ptr [esp+0x44]
	cmp eax,ecx
	jle Block45

 Block44:
	mov dword ptr [esi+0x94],ecx

 Block45:
	test edi,edi
	je Block47

 Block46:
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x38]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xFFFFFFF6
	cmp eax,ecx
	jmp Block48

 Block47:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x38]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xA
	cmp ecx,eax

 Block48:
	jge Block50

 Block49:
	mov eax,ecx

 Block50:
	cmp dword ptr [esp+0x20],0x236A6F
	mov dword ptr [esi+0x90],eax
	jne Block53

 Block51:
	cmp dword ptr [esp+0x28],0
	jle Block53

 Block52:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0xAC]
	push eax
	mov ecx,ebp
	call CMob::GetHitPointHeightRand
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x90],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x94],edx

 Block53:
	mov ecx,dword ptr [esi+0x94]
	sub ecx,dword ptr [esp+0x64]
	mov eax,dword ptr [esi+0x90]
	mov edx,ecx
	sub eax,ebx
	imul edx,ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x30],edx
	mov dword ptr [esp+0x48],eax
	fild dword ptr [esp+0x30]
	call __CIsqrt
	fld qword ptr [__real_4082c00000000000]
	fcom
	fnstsw ax
	test ah,5
	jp Block55

 Block54:
	fdiv st,st(1)
	fild dword ptr [esp+0x48]
	fmul st,st(1)
	fiadd dword ptr [esp+0x6C]
	call __ftol2_sse
	fimul dword ptr [esp+0x18]
	mov dword ptr [esi+0x90],eax
	fiadd dword ptr [esp+0x64]
	call __ftol2_sse
	mov dword ptr [esi+0x94],eax
	jmp Block56

 Block55:
	fstp st(0)

 Block56:
	mov edx,dword ptr [esp+0x154]
	mov edi,dword ptr [edx]
	cmp edi,0x2195AD
	je Block64

 Block57:
	cmp edi,0x231C4A
	je Block64

 Block58:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block63

 Block59:
	cmp dword ptr [eax],0
	je Block63

 Block60:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block63

 Block61:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block63

 Block62:
	fmul qword ptr [__real_3ff8000000000000]
	call __ftol2_sse
	jmp Block65

 Block63:
	fstp st(0)
	mov dword ptr [esp+0x30],0
	jmp Block66

 Block64:
	mov eax,dword ptr [esp+0x28]
	fstp st(0)
	imul eax,0x32

 Block65:
	mov dword ptr [esp+0x30],eax

 Block66:
	cmp edi,0x151FF5A
	jg Block72

 Block67:
	cmp edi,0x151FF59
	jge Block74

 Block68:
	cmp edi,0x1516318
	je Block74

 Block69:
	cmp edi,0x1518A28
	je Block74

 Block70:
	cmp edi,0x151D849
	je Block74

 Block71:
	jmp Block75

 Block72:
	cmp edi,0x1522669
	je Block74

 Block73:
	cmp edi,0x1527489
	jne Block75

 Block74:
	mov eax,dword ptr [esp+0x15C]
	mov ebp,dword ptr [esp+0x14]
	lea edi,[eax+eax*2]
	add ebp,0x88
	mov ecx,ebp
	lea edi,[edi*8+ActionData::m_saCharacterActions]
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	mov eax,dword ptr [ecx+ebp+0x5C8]
	imul eax,dword ptr [edi+0x10]
	lea ebp,[ecx+ebp+0x5C0]
	cdq
	idiv dword ptr [edi+0xC]
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esp+0x28]
	imul eax,0x32
	mov dword ptr [esp+0x30],eax

 Block75:
	mov edx,dword ptr [esp+0x154]
	cmp dword ptr [edx],0x231C4A
	mov eax,dword ptr [esp+0x50]
	jne Block77

 Block76:
	mov dword ptr [esp+0x150],1
	xor eax,eax

 Block77:
	xor ebp,ebp
	cmp dword ptr [esp+0x150],ebp
	jle Block80

 Block78:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x54]
	add eax,ecx
	add eax,edx
	mov dword ptr [esp+0x18],eax
	lea edi,[esi+0x18]

 Block79:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push ecx
	push eax
	lea ecx,[esp+0xE0]
	call CSkill_HitAni::operator()
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [edx+0x19E8]
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	push ecx
	mov ecx,dword ptr [edi+0x3C]
	push edx
	mov edx,dword ptr [edi]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x18C]
	push edx
	mov edx,dword ptr [esi+4]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	call CMob::AddDamageInfo
	inc ebp
	add edi,4
	cmp ebp,dword ptr [esp+0x150]
	jl Block79

 Block80:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,0xB8CC9E
	je Block100

 Block81:
	cmp ecx,0x205D2B
	je Block100

 Block82:
	cmp ecx,0x21E3CB
	je Block100

 Block83:
	cmp ecx,0x200F0C
	je Block100

 Block84:
	cmp ecx,0x1E9F99B
	je Block100

 Block85:
	mov eax,dword ptr [esp+0x154]
	mov eax,dword ptr [eax]
	cmp eax,0x21E3CE
	je Block89

 Block86:
	cmp eax,0x1527489
	je Block89

 Block87:
	push 0
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x1960]
	mov byte ptr [esp+0x150],4
	test ecx,ecx
	je Block181

 Block88:
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	call CMob::GetVecCtrl
	mov edx,dword ptr [esi+0x94]
	mov eax,dword ptr [esi+0x90]
	mov ecx,dword ptr [esp+0x74]
	push edx
	mov edx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x68]
	push ecx
	mov ecx,dword ptr [esp+0x70]
	add edx,ecx
	push ebx
	add edx,eax
	add ecx,eax
	push edx
	push ecx
	mov byte ptr [esp+0x170],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	jmp Block100

 Block89:
	cmp dword ptr [esp+0x28],0
	jne Block95

 Block90:
	mov eax,dword ptr [esp+0x60]
	mov edi,dword ptr [esp+0x64]
	cmp ecx,0x1527489
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x640]
	mov dword ptr [esp+0x18],eax
	jne Block94

 Block91:
	and dl,1
	movsx esi,dl
	neg esi
	sbb esi,esi
	and esi,0xFFFFFE90
	add esi,0xB8
	add esi,eax
	mov eax,dword ptr [ecx+0x2EAC]
	test eax,eax
	je Block93

 Block92:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x8C]
	push edx
	call eax
	mov edi,dword ptr [eax+4]
	sub edi,0x32
	jmp Block96

 Block93:
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x74]
	push eax
	call edx
	mov edi,dword ptr [eax+4]
	sub edi,0x32
	jmp Block96

 Block94:
	and dl,1
	movsx esi,dl
	neg esi
	sbb esi,esi
	and esi,0xFFFFFFCE
	add esi,0x19
	add esi,eax
	jmp Block96

 Block95:
	mov ecx,dword ptr [esp+0x168]
	mov edx,dword ptr [ecx]
	push 1
	lea eax,[esp+0xA8]
	push eax
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+edx-0x98]
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0xA4]
	mov edx,dword ptr [esp+0xAC]
	lea eax,[edx+ecx]
	mov ecx,dword ptr [esp+0xB0]
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [esp+0xA8]
	add eax,ecx
	cdq
	sub eax,edx
	mov edi,eax
	sar esi,1
	sar edi,1

 Block96:
	mov eax,dword ptr [esp+0x168]
	mov ecx,dword ptr [eax]
	push 1
	lea edx,[esp+0x80]
	push edx
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [edx+ecx]
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0x84]
	mov eax,dword ptr [esp+0x7C]
	add eax,ecx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x80]
	mov ebx,eax
	mov eax,dword ptr [esp+0x88]
	add eax,edx
	cdq
	sub eax,edx
	xor ecx,ecx
	mov ebp,eax
	sar ebx,1
	sar ebp,1
	cmp dword ptr [esp+0x20],0x1527489
	sete cl
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block98

 Block97:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block98:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+0x1960]
	mov byte ptr [esp+0x150],3
	test ecx,ecx
	je Block181

 Block99:
	mov eax,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov dword ptr [esp+0x20],eax
	call IWzGr2DLayer::Getz
	mov ecx,dword ptr [esp+0x5C]
	push eax
	mov eax,dword ptr [esp+0x5C]
	push ebp
	push ebx
	push edi
	lea edx,[ecx+eax+0x10E]
	push esi
	add ecx,eax
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x16C],2
	call CAnimationDisplayer::RegisterChainlightningAnimation

 Block100:
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x168]
	inc esi
	mov dword ptr [esp+0x28],esi
	call ZArray<ATTACKINFO>::GetCount
	cmp esi,eax
	jb Block17

 Block101:
	mov edi,dword ptr [esp+0x154]
	mov ebp,dword ptr [esp+0x14]

 Block102:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x236A69
	jg Block127

 Block103:
	je Block108

 Block104:
	cmp eax,0x205D2F
	jg Block118

 Block105:
	je Block133

 Block106:
	cmp eax,0x20361A
	je Block110

 Block107:
	cmp eax,0x205D29
	jne Block151

 Block108:
	mov ecx,dword ptr [esp+0x16C]
	lea edx,[ecx+ecx*2]
	mov eax,0x51EB851F
	imul edx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add edx,eax
	mov eax,0xFFFFFFB5
	sub eax,edx
	mov dword ptr [esp+0x3C],eax
	neg eax
	mov dword ptr [esp+0x44],eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	mov ecx,eax
	mov eax,0xFFFFFF9C
	sub eax,ecx
	mov dword ptr [esp+0x38],eax
	neg eax
	lea esi,[ebp+4]
	mov dword ptr [esp+0x40],eax
	lea eax,[esp+0x9C]
	push eax
	mov ecx,esi
	call edx
	mov ebx,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebx]
	sub eax,0x28
	push eax
	push ecx
	lea edx,[esp+0x40]
	push edx
	call OffsetRect
	cmp dword ptr [edi+0x20C],0
	je Block121

 Block109:
	mov al,byte ptr [esp+0x158]
	jmp Block122

 Block110:
	mov eax,dword ptr [esp+0x158]
	push eax
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	add eax,0x1CC
	push eax
	lea ecx,[esp+0x80]
	push ecx
	call SECRECT::ToRect
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[ebp+4]
	add esp,8
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	call edx
	mov ebx,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebx]
	sub eax,0x28
	push eax
	push ecx
	lea edx,[esp+0x84]
	push edx
	call OffsetRect
	cmp dword ptr [edi+0x20C],0
	je Block112

 Block111:
	mov al,byte ptr [esp+0x158]
	jmp Block113

 Block112:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	mov ecx,ebp
	call edx

 Block113:
	movzx eax,al
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x148],5
	test eax,eax
	je Block115

 Block114:
	mov eax,dword ptr [eax]
	jmp Block116

 Block115:
	xor eax,eax

 Block116:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edx,[esp+0x7C]
	push edx
	push eax
	call CAnimationDisplayer::RegisterExplosionAnimation
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x148],2
	test ecx,ecx
	je Block151

 Block117:
	call _xbstr_t::Data_t::Release
	jmp Block151

 Block118:
	mov ecx,eax
	sub ecx,0x21E3C9
	je Block108

 Block119:
	sub ecx,6
	je Block133

 Block120:
	jmp Block151

 Block121:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	mov ecx,ebp
	call edx

 Block122:
	movzx eax,al
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x148],6
	test eax,eax
	je Block124

 Block123:
	mov eax,dword ptr [eax]
	jmp Block125

 Block124:
	xor eax,eax

 Block125:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	push eax
	call CAnimationDisplayer::RegisterExplosionAnimation
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x148],2
	test ecx,ecx
	je Block151

 Block126:
	call _xbstr_t::Data_t::Release
	jmp Block151

 Block127:
	cmp eax,0x152748A
	jg Block132

 Block128:
	je Block150

 Block129:
	cmp eax,0x236A70
	je Block140

 Block130:
	cmp eax,0xB8CC9B
	je Block133

 Block131:
	jmp Block151

 Block132:
	cmp eax,0x1EA20AC
	jne Block151

 Block133:
	cmp eax,0x236A70
	jg Block138

 Block134:
	je Block140

 Block135:
	cmp eax,0x205D2F
	je Block141

 Block136:
	cmp eax,0x21E3CF
	je Block140

 Block137:
	jmp Block142

 Block138:
	cmp eax,0xB8CC9B
	je Block141

 Block139:
	cmp eax,0x1EA20AC
	jne Block142

 Block140:
	mov dword ptr [esp+0x2C],0xAC8
	jmp Block142

 Block141:
	mov dword ptr [esp+0x2C],0xBB8

 Block142:
	mov eax,dword ptr [esp+0x158]
	push eax
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	add eax,0x1CC
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	call SECRECT::ToRect
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	mov ebx,dword ptr [ebp+0x640]
	lea esi,[ebp+4]
	add esp,8
	lea eax,[esp+0xB4]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x6C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	test bl,1
	jne Block144

 Block143:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x38]
	neg ecx
	neg edx
	mov dword ptr [esp+0x38],ecx
	mov dword ptr [esp+0x40],edx

 Block144:
	mov ecx,dword ptr [esp+0x30]
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	call OffsetRect
	lea eax,[esp+0x58]
	push eax
	mov ecx,edi
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x148],7
	test eax,eax
	je Block146

 Block145:
	mov eax,dword ptr [eax]
	jmp Block147

 Block146:
	xor eax,eax

 Block147:
	mov ecx,dword ptr [esp+0x2C]
	push 0
	push 0xFF
	push 0x80
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xB4
	lea edx,[esp+0x4C]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x148],2
	test ecx,ecx
	je Block149

 Block148:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x58],0

 Block149:
	cmp dword ptr [esp+0x20],0x1EA20AC
	jne Block151

 Block150:
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0x9B
	lea ecx,[ebp+0x88]
	call CAvatar::GetLayerZ
	sub eax,2
	push eax
	push 0xE1
	push 0x546
	push 0x5DC
	mov ecx,esi
	call CAnimationDisplayer::RegisterFadeInOutAnimation

 Block151:
	mov edi,dword ptr [esp+0x168]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block189

 Block152:
	cmp dword ptr [eax-4],0
	je Block185

 Block153:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0xB8CC9E
	je Block158

 Block154:
	cmp eax,0x205D2B
	je Block158

 Block155:
	cmp eax,0x21E3CB
	je Block158

 Block156:
	cmp eax,0x200F0C
	je Block158

 Block157:
	cmp eax,0x1E9F99B
	jne Block185

 Block158:
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[ebp+4]
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [edi]
	sub eax,0x1C
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [ebp+0x640]
	and al,1
	movsx ecx,al
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF9C
	add ecx,0x32
	add ebx,ecx
	mov ecx,dword ptr [edx]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x74]
	push edx
	mov dword ptr [esp+0x5C],ebx
	call eax
	mov ebx,dword ptr [eax]
	mov ecx,dword ptr [eax+4]
	mov eax,ecx
	mov dword ptr [esp+0x4C],ecx
	mov edx,ebx
	mov ecx,edi
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x30],0
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block166

 Block159:
	xor esi,esi

 Block160:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [esi+ecx]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x74]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [eax],ecx
	jge Block162

 Block161:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [esi+edx]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x8C]
	push edx
	call eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],edx

 Block162:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+eax]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x9C]
	push eax
	call edx
	cmp dword ptr [eax],ebx
	jle Block164

 Block163:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+eax]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x94]
	push eax
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x4C],eax

 Block164:
	inc dword ptr [esp+0x30]
	mov ecx,edi
	add esi,0x98
	call ZArray<ATTACKINFO>::GetCount
	cmp dword ptr [esp+0x30],eax
	jb Block160

 Block165:
	mov dword ptr [esp+0x48],ebx

 Block166:
	mov edx,dword ptr [ebp+0x640]
	lea ecx,[esp+0x18]
	test dl,1
	jne Block168

 Block167:
	lea ecx,[esp+0x48]

 Block168:
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	mov dword ptr [esp+0x34],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [esp+0x30],eax
	test dl,1
	je Block171

 Block169:
	cmp ecx,eax
	jle Block172

 Block170:
	test dl,1
	jne Block176

 Block171:
	cmp eax,ecx
	jg Block176

 Block172:
	lea ecx,[esp+0xBC]
	mov byte ptr [esp+0x148],1
	call CSkill_HitAni::~CSkill_HitAni
	mov ecx,dword ptr [esp+0x68]
	test ecx,ecx
	je Block174

 Block173:
	call _xbstr_t::Data_t::Release

 Block174:
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block213

 Block175:
	call _xbstr_t::Data_t::Release
	jmp Block213

 Block176:
	mov ebx,dword ptr [esp+0x24]
	fnstcw word ptr [esp+0x14]
	sub eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	movzx eax,word ptr [esp+0x14]
	or eax,0xC00
	fmul qword ptr [__real_3ff8000000000000]
	mov dword ptr [esp+0x18],eax
	fldcw word ptr [esp+0x18]
	fistp qword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x18],edx
	fldcw word ptr [esp+0x14]
	test ebx,ebx
	je Block186

 Block177:
	cmp dword ptr [ebx],0
	je Block186

 Block178:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block186

 Block179:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block186

 Block180:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	lea eax,[ebx+8]
	mov dword ptr [esp+0x50],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov esi,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0x150],8
	test esi,esi
	jne Block182

 Block181:
	push 0x80004003
	call _com_issue_error

 Block182:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x34]
	push edx
	push esi
	mov dword ptr [esp+0x3C],0
	call eax
	test eax,eax
	jge Block184

 Block183:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block184:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x58],esp
	push eax
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x74]
	push eax
	mov eax,dword ptr [esp+0x70]
	add edx,ecx
	add edx,eax
	add ecx,eax
	push edx
	push ecx
	mov byte ptr [esp+0x170],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	jmp Block186

 Block185:
	mov ebx,dword ptr [esp+0x24]

 Block186:
	mov edi,dword ptr [edi]
	test edi,edi
	je Block190

 Block187:
	cmp dword ptr [edi-4],0
	jne Block199

 Block188:
	jmp Block190

 Block189:
	mov ebx,dword ptr [esp+0x24]

 Block190:
	test ebx,ebx
	je Block199

 Block191:
	cmp dword ptr [ebx],0
	je Block199

 Block192:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block199

 Block193:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block199

 Block194:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x21E3CE
	je Block199

 Block195:
	cmp eax,0x1527489
	je Block199

 Block196:
	mov edi,dword ptr [esp+0x160]
	mov eax,dword ptr [esp+0x60]
	mov esi,edi
	neg esi
	sbb esi,esi
	and esi,0xFFFFFF9C
	add esi,0x32
	add esi,eax
	neg edi
	sbb edi,edi
	and edi,0xFFFFFE70
	add edi,0xC8
	add edi,eax
	mov eax,edi
	sub eax,esi
	mov ecx,eax
	imul ecx,eax
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	call __CIsqrt
	fmul qword ptr [__real_3ff8000000000000]
	call __ftol2_sse
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov ebx,eax
	mov eax,esp
	mov dword ptr [eax],ecx
	add ecx,8
	mov dword ptr [esp+0x20],esp
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0x150],9
	test ecx,ecx
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x74]
	push eax
	push edi
	push eax
	mov eax,dword ptr [esp+0x6C]
	add ebx,ecx
	push esi
	add ebx,eax
	add ecx,eax
	push ebx
	push ecx
	mov byte ptr [esp+0x170],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	mov ebx,dword ptr [esp+0x24]

 Block199:
	lea ecx,[esp+0xBC]
	mov byte ptr [esp+0x148],1
	call CSkill_HitAni::~CSkill_HitAni
	mov esi,dword ptr [esp+0x68]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x148],0
	test esi,esi
	je Block206

 Block200:
	lea edx,[esi+8]
	push edx
	call edi
	test eax,eax
	jne Block206

 Block201:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block203:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block205

 Block204:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block205:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block206:
	mov dword ptr [esp+0x148],0xFFFFFFFF
	test ebx,ebx
	je Block213

 Block207:
	lea eax,[ebx+8]
	push eax
	call edi
	test eax,eax
	jne Block213

 Block208:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block210

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block210:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block212

 Block211:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block212:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block213:
	mov ecx,dword ptr [esp+0x140]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x138
	ret 0x20
}
}
// CUserRemote::GetRTTI
__SUB_CLASS_THIS0(005544C0, __thiscall, 41525,  CUserRemote, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUserRemote::ms_RTTI_CUserRemote
	ret
}
}
// CUserRemote::OnMeleeAttack
_SUB_EXCEPTION_HANDLER(559D60)
__SUB_CLASS_THIS(00559D60, __thiscall, 41516,  CUserRemote, void, long, const SKILLENTRY*, long, long, int32_t, long, ZArray<ATTACKINFO>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_559D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4F8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x2C],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	call get_update_time
	mov esi,dword ptr [esp+0x520]
	mov dword ptr [esp+0x28],eax
	cmp esi,ebx
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x18],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x18],ebx

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x41C]
	push ecx
	add eax,0x414
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp]
	mov edi,eax
	mov eax,dword ptr [edx+4]
	add esp,8
	neg edi
	sbb edi,edi
	mov ecx,ebp
	neg edi
	call eax
	mov edx,dword ptr [esp+0x530]
	movzx ecx,al
	mov eax,dword ptr [ebp+0x5B0]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebx,dword ptr [esp+0x530]
	push ebx
	lea eax,[esp+0x2C]
	push esi
	push eax
	call CUser::GetAfterimageUOL
	add esp,0x18
	mov ecx,dword ptr [esp+0x1C]
	xor edx,edx
	mov dword ptr [esp+0x514],edx
	cmp ecx,edx
	je Block105

 Block6:
	cmp dword ptr [ecx],edx
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	cmp eax,edx
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edx
	jne Block10

 Block9:
	call _xbstr_t::Data_t::Release
	jmp Block105

 Block10:
	xor eax,eax
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],eax
	cmp esi,edx
	je Block13

 Block11:
	push ebx
	mov ecx,esi
	call SKILLENTRY::GetLevelData
	push eax
	lea ecx,[esp+0xF4]
	call SKILLLEVELDATA::_ctor_0
	add eax,0x1CC
	push eax
	mov byte ptr [esp+0x518],1
	mov dword ptr [esp+0x18],1
	call IsRectEmpty
	mov ecx,dword ptr [esp+0x20]
	add esp,4
	test eax,eax
	jne Block13

 Block12:
	mov bl,1
	jmp Block14

 Block13:
	xor bl,bl

 Block14:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x514],0
	je Block16

 Block15:
	lea ecx,[esp+0xF0]
	call SKILLLEVELDATA::~SKILLLEVELDATA
	mov ecx,dword ptr [esp+0x1C]

 Block16:
	test bl,bl
	mov ebx,dword ptr [esp+0x528]
	je Block18

 Block17:
	mov ecx,dword ptr [esp+0x524]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetLevelData
	add eax,0x1CC
	push eax
	lea edx,[esp+0x40]
	push edx
	call SECRECT::ToRect
	add esp,8
	jmp Block23

 Block18:
	cmp dword ptr [esp+0x18],0x12A191
	mov eax,ebx
	jne Block20

 Block19:
	mov eax,0x11

 Block20:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block22

 Block21:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetMeleeAttackRange

 Block23:
	mov eax,dword ptr [esp+0x18]
	lea ebx,[ebx+ebx*2]
	lea ebx,[ebx*8+ActionData::m_saCharacterActions]
	push eax
	mov dword ptr [esp+0x18],ebx
	call is_throw_bomb_skill
	add esp,4
	test eax,eax
	jne Block30

 Block24:
	lea esi,[ebp+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	lea eax,[ecx+esi+0x5C0]
	mov eax,dword ptr [eax+8]
	imul eax,dword ptr [ebx+0x10]
	cdq
	idiv dword ptr [ebx+0xC]
	mov esi,eax
	mov dword ptr [esp+0x64],esi
	test edi,edi
	je Block26

 Block25:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x428]
	push ecx
	add eax,0x420
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [ebp+0x590]
	push eax
	mov eax,dword ptr [ebp+0x58C]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x40],esp
	test eax,eax
	je Block29

 Block28:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov eax,dword ptr [esp+0x538]
	mov ecx,dword ptr [esp+0x53C]
	mov edx,dword ptr [esp+0x38]
	push eax
	push ecx
	add esi,edx
	push esi
	mov ecx,ebp
	call CUser::RegisterAfterimage
	jmp Block31

 Block30:
	mov dword ptr [esp+0x64],0x78

 Block31:
	test byte ptr [ebp+0x640],1
	jne Block33

 Block32:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	push eax
	mov eax,dword ptr [esp+0x48]
	neg ecx
	push ecx
	push edx
	neg eax
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	call SetRect

 Block33:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[ebp+4]
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x34],edi
	call edx
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x44]
	push edx
	call OffsetRect
	mov ecx,dword ptr [esp+0x534]
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block37

 Block34:
	mov dword ptr [esp+0x20],ebx
	jmp Block36

 Block36:
	mov eax,dword ptr [esp+0x534]
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	add esi,dword ptr [esp+0x20]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x6C]
	push eax
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x90],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x94],edx
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esi+0x90]
	sub ecx,dword ptr [eax]
	add dword ptr [esp+0x20],0x98
	add dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esp+0x534]
	inc ebx
	call ZArray<ATTACKINFO>::GetCount
	cmp ebx,eax
	jb Block36

 Block37:
	mov esi,dword ptr [esp+0x18]
	cmp esi,0x40413C
	je Block43

 Block38:
	cmp esi,0xE6935E
	je Block43

 Block39:
	mov edi,dword ptr [esp+0x534]
	mov eax,dword ptr [edi]
	test eax,eax
	jne Block41

 Block40:
	xor ecx,ecx
	jmp Block42

 Block41:
	mov ecx,dword ptr [eax-4]

 Block42:
	xor edx,edx
	cmp dword ptr [esp+0x24],edx
	push ecx
	setg dl
	push eax
	push edx
	call sort_attackInfo_by_distance
	add esp,0xC
	jmp Block44

 Block43:
	mov edi,dword ptr [esp+0x534]

 Block44:
	cmp esi,0x40684F
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x28]
	lea eax,[ecx+edx]
	mov dword ptr [ebp+0x2ED4],eax
	test eax,eax
	jne Block59

 Block46:
	mov dword ptr [ebp+0x2ED4],1
	jmp Block59

 Block47:
	cmp esi,0x3F1
	je Block57

 Block48:
	cmp esi,0x989A71
	je Block57

 Block49:
	cmp esi,0x13130F1
	je Block57

 Block50:
	cmp esi,0x1315801
	je Block57

 Block51:
	cmp esi,0x1C9C771
	je Block57

 Block52:
	cmp esi,0x3FC
	je Block57

 Block53:
	cmp esi,0x989A7C
	je Block57

 Block54:
	cmp esi,0x13130FC
	je Block57

 Block55:
	cmp esi,0x131580C
	je Block57

 Block56:
	cmp esi,0x1C9C77C
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x28]
	lea eax,[ecx+edx]
	mov dword ptr [ebp+0x2ED8],eax
	test eax,eax
	jne Block59

 Block58:
	mov dword ptr [ebp+0x2ED8],1

 Block59:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block61

 Block60:
	xor edx,edx
	jmp Block62

 Block61:
	mov edx,dword ptr [ecx-4]

 Block62:
	mov eax,dword ptr [ebp+0x58C]
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x530]
	push edx
	mov edx,dword ptr [esp+0x530]
	push ecx
	mov ecx,dword ptr [esp+0x530]
	push eax
	movzx eax,byte ptr [ebp+0x3AC0]
	push edx
	push eax
	push ecx
	lea ecx,[esp+0x8C]
	call CSkill_HitAni::_ctor_0
	mov ecx,edi
	mov byte ptr [esp+0x514],2
	mov dword ptr [esp+0x24],0
	call ZArray<ATTACKINFO>::GetCount
	test eax,eax
	jbe Block82

 Block63:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],eax
	lea ecx,[ecx]

 Block64:
	cmp dword ptr [esp+0x18],0x40413E
	mov edx,dword ptr [esp+0x534]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx+eax]
	lea esi,[ecx+eax]
	mov dword ptr [esp+0x34],edx
	jne Block69

 Block65:
	xor edi,edi
	cmp dword ptr [esi+0x14],edi
	jle Block81

 Block66:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x28]
	lea ebp,[eax+ecx]
	lea ebx,[esi+0x18]
	mov edi,edi

 Block67:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov dword ptr [esp+0x78],esp
	mov ecx,esp
	push offset _S___3
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edx+0x19E8]
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	push ecx
	mov ecx,dword ptr [ebx]
	push edx
	mov edx,dword ptr [esp+0x550]
	push edi
	push 0
	push ecx
	mov ecx,dword ptr [esi+4]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	push ebp
	push 0x40413E
	push eax
	call CMob::AddDamageInfo
	inc edi
	add ebx,4
	cmp edi,dword ptr [esi+0x14]
	jl Block67

 Block68:
	jmp Block81

 Block69:
	mov edi,dword ptr [esp+0x14]
	cmp edi,0x118
	jl Block71

 Block70:
	mov edi,0x118

 Block71:
	mov edx,dword ptr [esp+0x64]
	xor ebp,ebp
	add edi,edx
	cmp dword ptr [esp+0x51C],ebp
	jle Block81

 Block72:
	lea ebx,[esi+0x18]
	mov edi,edi

 Block73:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0x406849
	jne Block75

 Block74:
	mov eax,ebp
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF60
	add eax,0xF0
	add edi,eax
	jmp Block80

 Block75:
	cmp eax,0x4DD5CB
	jne Block77

 Block76:
	mov edi,ebp
	dec edi
	neg edi
	sbb edi,edi
	and edi,0xFFFFFF60
	add edi,0xF0
	jmp Block80

 Block77:
	cmp eax,0x4E23EF
	je Block79

 Block78:
	cmp eax,0xE6935C
	jne Block80

 Block79:
	mov ecx,dword ptr [esp+0x51C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push ebp
	push edx
	call CUser::GetDamageDelay
	mov edi,eax

 Block80:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push ecx
	push eax
	lea ecx,[esp+0x90]
	call CSkill_HitAni::operator()
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edx+0x19E8]
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	push ecx
	mov ecx,dword ptr [ebx+0x3C]
	push edx
	mov edx,dword ptr [ebx]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x558]
	push edx
	mov edx,dword ptr [esi+4]
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	push edx
	lea edx,[edi+ecx]
	mov ecx,dword ptr [esp+0x50]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x74]
	push eax
	call CMob::AddDamageInfo
	inc ebp
	add ebx,4
	cmp ebp,dword ptr [esp+0x51C]
	jl Block73

 Block81:
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x534]
	add dword ptr [esp+0x20],0x98
	add dword ptr [esp+0x14],0x46
	inc esi
	mov dword ptr [esp+0x24],esi
	call ZArray<ATTACKINFO>::GetCount
	cmp esi,eax
	jb Block64

 Block82:
	cmp dword ptr [esp+0x18],0x423D0C
	jne Block97

 Block83:
	mov edx,dword ptr [esp+0x524]
	mov ebp,dword ptr [esp+0x520]
	push edx
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov eax,dword ptr [esi+0x1D4]
	add esi,0x1CC
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x54],eax
	mov ecx,dword ptr [esi+0x14]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	mov edx,dword ptr [esi+0x2C]
	push edx
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0x50]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x78],eax
	mov eax,dword ptr [esp+0x4C]
	mov ebx,dword ptr [eax+0x640]
	add esp,0x20
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	test bl,1
	jne Block85

 Block84:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x4C]
	neg ecx
	neg edx
	mov dword ptr [esp+0x4C],ecx
	mov dword ptr [esp+0x54],edx

 Block85:
	push edi
	push eax
	lea eax,[esp+0x54]
	push eax
	call OffsetRect
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebp
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x514],3
	test eax,eax
	je Block87

 Block86:
	mov eax,dword ptr [eax]
	jmp Block88

 Block87:
	xor eax,eax

 Block88:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0xFF
	push 0x80
	push 0x5DC
	push 0x578
	lea edx,[esp+0x60]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x514],2
	test eax,eax
	je Block97

 Block89:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block96

 Block90:
	test esi,esi
	je Block96

 Block91:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block95

 Block94:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block95:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block96:
	mov dword ptr [esp+0x34],0

 Block97:
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea eax,[esp+0xC0]
	push eax
	mov byte ptr [esp+0x524],5
	call __eh_vector_dtor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0x524],4
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esp+0x1C]
	int 3// TODO: 	mov dword ptr [esp+0x6C],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x514],0xFFFFFFFF
	test eax,eax
	je Block105

 Block98:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block105

 Block99:
	test esi,esi
	je Block105

 Block100:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block102:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block104

 Block103:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block104:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block105:
	mov ecx,dword ptr [esp+0x50C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x504
	ret 0x1C
}
}
