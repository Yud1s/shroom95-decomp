#include "regen.hpp"
// GW.ipp
#include "GW.hpp"

// GW_WildHunterInfo::GetRidingType
__SUB_CLASS_THIS0(0053A170, __thiscall, 81375,  GW_WildHunterInfo, long) {
__asm {

 Block0:
	movzx eax,byte ptr [ecx]
	test eax,eax
	jg Block2

 Block1:
	xor eax,eax
	mov eax,dword ptr [eax*4+_D_RIDING_WILDHUNTE__41]
	ret

 Block2:
	cmp eax,6
	jl Block4

 Block3:
	mov eax,6

 Block4:
	mov eax,dword ptr [eax*4+_D_RIDING_WILDHUNTE__41]
	ret
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nRepleteness
__SUB_CLASS(000F4D30, __fastcall, 122606,  GW_ItemSlotPet, unsigned char, unsigned char) {
__asm {

 Block0:
	push ebx
	push esi
	mov bl,dl
	mov esi,ecx
	lea edx,[esi+0x43]
	mov cl,bl
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x45],eax
	pop esi
	mov al,bl
	pop ebx
	ret
}
}
// GW_ItemSlotPet::DumpString
__SUB_CLASS_THIS0(000F6C70, __thiscall, 122625,  GW_ItemSlotPet, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp],0
	mov dword ptr [eax],0
	pop ecx
	ret 4
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niLUK
__SUB_CLASS0(000F2310, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	push eax
	add ecx,0x24
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
__SUB_CLASS0(000F24D0, __fastcall, 104251,  GW_ItemSlotEquipOpt, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x10]
	push eax
	add ecx,0xC
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::IsPossibleTradingItem
__SUB_CLASS_THIS0(000F6A70, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x71]
	push eax
	add ecx,0x6D
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,1
	ret
}
}
// GW_CharacterStat::_ZtlSecurePut_nHP
__SUB_CLASS(000F4B40, __fastcall, 121462,  GW_CharacterStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x61]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x69],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotEquip::GetItemTitle
__SUB_CLASS_THIS0(000F7DC0, __thiscall, 106605,  GW_ItemSlotEquip, ZXString<char>) {
__asm {

 Block0:
	push ecx
	add ecx,0x30
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [edi],0
	je Block4

 Block1:
	mov eax,ecx
	push esi
	lea esi,[eax+1]
	nop

 Block2:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	pop esi

 Block4:
	mov eax,edi
	pop edi
	pop ecx
	ret 4
}
}
// GW_ItemSlotBase::CreateItem
_SUB_EXCEPTION_HANDLER(F75E0)
__SUB(000F75E0, __cdecl, 121806,  ZRef<GW_ItemSlotBase>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F75E0
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
	mov eax,dword ptr [esp+0x24]
	sub eax,1
	mov dword ptr [esp+0xC],0
	je Block12

 Block1:
	sub eax,1
	je Block6

 Block2:
	sub eax,1
	je Block4

 Block3:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block4:
	push 0x75
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x18],2
	test esi,esi
	je Block14

 Block5:
	mov ecx,esi
	call GW_ItemSlotBase::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotPet::`vftable'
	mov eax,esi
	jmp Block15

 Block6:
	push 0x4D
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x18],1
	test esi,esi
	je Block8

 Block7:
	mov ecx,esi
	call GW_ItemSlotBase::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotBundle::`vftable'
	jmp Block9

 Block8:
	xor esi,esi

 Block9:
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [edi+4],esi
	test esi,esi
	je Block11

 Block10:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block12:
	push 0x139
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block14

 Block13:
	mov ecx,eax
	call GW_ItemSlotEquip::_ctor_default
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block17

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
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
// GW_ItemSlotPet::GetItemTitle
__SUB_CLASS_THIS0(000F7E60, __thiscall, 122616,  GW_ItemSlotPet, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// GW_ItemSlotPet::SetProtected
__SUB_CLASS_THIS0(000F69D0, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotEquip::SetItemTitle
__SUB_CLASS_THIS(000F7460, __thiscall, 106606,  GW_ItemSlotEquip, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push 0xD
	push eax
	add ecx,0x30
	push ecx
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret 4
}
}
// GW_ItemSlotPet::GetDataSize
__SUB_CLASS_THIS0(000F6970, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	mov eax,0x69
	ret
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nGrade
__SUB_CLASS0(000F24B0, __fastcall, 104248,  GW_ItemSlotEquipOpt, unsigned char) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	push eax
	add ecx,6
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquip::RawEncode
__SUB_CLASS_THIS(000F7F70, __thiscall, 106615,  GW_ItemSlotEquip, void, COutPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov ebx,ecx
	call GW_ItemSlotBase::RawEncode
	mov eax,dword ptr [ebx+0x4B]
	lea esi,[ebx+0x49]
	push eax
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode1
	mov edx,dword ptr [esi+8]
	push edx
	lea eax,[esi+6]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x10]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x18]
	push edx
	lea eax,[esi+0x14]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x20]
	push edx
	lea eax,[esi+0x1C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x30]
	push edx
	lea eax,[esi+0x2C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x38]
	push edx
	lea eax,[esi+0x34]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x40]
	push edx
	lea eax,[esi+0x3C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x48]
	push edx
	lea eax,[esi+0x44]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x50]
	push edx
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x54]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x60]
	push edx
	lea eax,[esi+0x5C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x68]
	push edx
	lea eax,[esi+0x64]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x70]
	push edx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x78]
	push edx
	lea eax,[esi+0x74]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x80]
	push edx
	lea eax,[esi+0x7C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	push ecx
	lea edx,[ebx+0x30]
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [esp+0x18],eax
	mov dword ptr [eax],0
	test edx,edx
	je Block5

 Block1:
	mov eax,edx
	lea ebp,[eax+1]
	jmp Block3

 Block3:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block3

 Block4:
	mov ecx,dword ptr [esp+0x18]
	sub eax,ebp
	mov ebp,eax
	push ebp
	push edx
	push 0
	push ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	mov ecx,dword ptr [esp+0x24]
	add esp,0xC
	push ebp
	call ZXString<char>::ReleaseBuffer

 Block5:
	mov ecx,edi
	call COutPacket::EncodeStr
	mov edx,dword ptr [esi+0x88]
	push edx
	lea eax,[esi+0x84]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x8E]
	push edx
	lea eax,[esi+0x8C]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x94]
	push edx
	lea eax,[esi+0x92]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0xA0]
	push edx
	lea eax,[esi+0x98]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xAC]
	push ecx
	lea edx,[esi+0xA4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xB8]
	push eax
	add esi,0xB0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [ebx+0x107]
	lea esi,[ebx+0x105]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode1
	mov eax,dword ptr [esi+8]
	push eax
	lea ecx,[esi+6]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x10]
	push eax
	lea ecx,[esi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x18]
	push eax
	lea ecx,[esi+0x14]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x1C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x24]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x30]
	push eax
	add esi,0x2C
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [ebx+0x18]
	or edx,dword ptr [ebx+0x1C]
	jne Block7

 Block6:
	push 8
	lea eax,[ebx+0x28]
	push eax
	mov ecx,edi
	call COutPacket::EncodeBuffer

 Block7:
	push 8
	lea ecx,[ebx+0x3D]
	push ecx
	mov ecx,edi
	call COutPacket::EncodeBuffer
	mov edx,dword ptr [ebx+0x45]
	push edx
	mov ecx,edi
	call COutPacket::Encode4
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
__SUB_CLASS0(000F2550, __fastcall, 104251,  GW_ItemSlotEquipOpt, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x30]
	push eax
	add ecx,0x2C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipOpt::GW_ItemSlotEquipOpt
__SUB_CLASS_THIS0(000F4C40, __thiscall, 104253,  GW_ItemSlotEquipOpt, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov edx,esi
	xor cl,cl
	call _ZtlSecureTearHelper<unsigned char>::call
	lea edx,[esi+6]
	xor cl,cl
	mov dword ptr [esi+2],eax
	call _ZtlSecureTearHelper<unsigned char>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<short>::call
	lea edx,[esi+0x14]
	xor ecx,ecx
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<short>::call
	lea edx,[esi+0x1C]
	xor ecx,ecx
	mov dword ptr [esi+0x18],eax
	call _ZtlSecureTearHelper<short>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<short>::call
	lea edx,[esi+0x2C]
	xor ecx,ecx
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x30],eax
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotPet::IsPreventSlipItem
__SUB_CLASS_THIS0(000F6930, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotBundle::ResetProtected
__SUB_CLASS_THIS0(000F6850, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x34]
	push edi
	push eax
	lea edi,[esi+0x30]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	and ax,0xFFFE
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x34],eax
	pop esi
	ret
}
}
// GW_CharacterStat::DecodeChangeStat
__SUB_CLASS_THIS(000FA000, __thiscall, 121470,  GW_CharacterStat, unsigned long, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ebx,eax
	test bl,1
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode1
	mov byte ptr [esi+0x12],al

 Block2:
	test bl,2
	je Block4

 Block3:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x13],eax

 Block4:
	test bl,4
	je Block6

 Block5:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x17],eax

 Block6:
	test bl,8
	je Block8

 Block7:
	push 8
	lea eax,[esi+0x1B]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer

 Block8:
	test ebx,0x80000
	je Block10

 Block9:
	push 8
	lea ecx,[esi+0x23]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeBuffer

 Block10:
	test ebx,0x100000
	je Block12

 Block11:
	push 8
	lea edx,[esi+0x2B]
	push edx
	mov ecx,edi
	call CInPacket::DecodeBuffer

 Block12:
	test bl,0x10
	je Block14

 Block13:
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+0x33]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x35],eax

 Block14:
	test bl,0x20
	je Block16

 Block15:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x39]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x3D],eax

 Block16:
	test bl,0x40
	je Block18

 Block17:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x41]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x45],eax

 Block18:
	test bl,bl
	jns Block20

 Block19:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x49]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x4D],eax

 Block20:
	test ebx,0x100
	je Block22

 Block21:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x51]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x55],eax

 Block22:
	test ebx,0x200
	je Block24

 Block23:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x59]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x5D],eax

 Block24:
	test ebx,0x400
	je Block26

 Block25:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x61]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x69],eax

 Block26:
	test ebx,0x800
	je Block28

 Block27:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x6D]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x75],eax

 Block28:
	test ebx,0x1000
	je Block30

 Block29:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x79]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x81],eax

 Block30:
	test ebx,0x2000
	je Block32

 Block31:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x85]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8D],eax

 Block32:
	test ebx,0x4000
	je Block34

 Block33:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x91]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x95],eax

 Block34:
	test ebx,0x8000
	je Block40

 Block35:
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,3
	je Block38

 Block36:
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block38

 Block37:
	cmp ecx,0x7D1
	jne Block39

 Block38:
	push edi
	lea ecx,[esi+0xCD]
	call ExtendSP::Decode
	jmp Block40

 Block39:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x99]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x9D],eax

 Block40:
	test ebx,0x10000
	je Block42

 Block41:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xA1]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA9],eax

 Block42:
	test ebx,0x20000
	je Block44

 Block43:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0xAD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xB1],eax

 Block44:
	test ebx,0x40000
	je Block46

 Block45:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xB5]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBD],eax

 Block46:
	test ebx,0x200000
	je Block48

 Block47:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xC1]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC9],eax

 Block48:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	ret 4
}
}
// GW_ItemSlotPet::SetBinded
__SUB_CLASS_THIS0(000F6A10, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotEquip::GW_ItemSlotEquip
_SUB_EXCEPTION_HANDLER(F5FD0)
__SUB_CLASS_THIS0(000F5FD0, __thiscall, 106602,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F5FD0
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
	call GW_ItemSlotBase::_ctor_default
	mov ecx,dword ptr [_D_DB_DATE_19000101__209+4]
	mov eax,dword ptr [_D_DB_DATE_19000101__209]
	mov dword ptr [esi+0x41],ecx
	or ecx,0xFFFFFFFF
	lea edx,[esi+0xED]
	mov dword ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotEquip::`vftable'
	mov dword ptr [esi+0x3D],eax
	mov dword ptr [esi+0x45],ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF9]
	xor ecx,ecx
	mov dword ptr [esi+0xF5],eax
	call _ZtlSecureTearHelper<long>::call
	lea ecx,[esi+0x105]
	mov dword ptr [esi+0x101],eax
	call GW_ItemSlotEquipOpt::_ctor_default
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// GW_ItemSlotEquip::SetWarmSupport
__SUB_CLASS_THIS0(000F6310, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	or ax,4
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotEquip::SetItemNumber
__SUB_CLASS_THIS(000F60A0, __thiscall, 106604,  GW_ItemSlotEquip, void, short) {
__asm {

 Block0:
	ret 4
}
}
// GW_ItemSlotPet::SetItemTitle
__SUB_CLASS_THIS(000F74C0, __thiscall, 122617,  GW_ItemSlotPet, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret 4
}
}
// GW_ItemSlotEquip::ResetPossibleTrading
__SUB_CLASS_THIS0(000F63D0, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	and ax,0xFFEF
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotPet::ResetProtected
__SUB_CLASS_THIS0(000F69E0, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotBundle::_ZtlSecurePut_nAttribute
__SUB_CLASS(000F4CD0, __fastcall, 113355,  GW_ItemSlotBundle, short, short) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x30]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x34],eax
	pop edi
	mov ax,si
	pop esi
	ret
}
}
// GW_ItemSlotBundle::IsPreventSlipItem
__SUB_CLASS_THIS0(000F66B0, __thiscall, 113356,  GW_ItemSlotBundle, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_CharacterStat::DecodeMoney
__SUB_CLASS_THIS(000F52E0, __thiscall, 121467,  GW_CharacterStat, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	lea edx,[esi+0xB5]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBD],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotEquip::GetItemNumber
__SUB_CLASS_THIS0(000F6090, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// GW_CharacterStat::_ZtlSecureGet_nPOP
__SUB_CLASS0(0007D980, __fastcall, 121459,  GW_CharacterStat, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB1]
	push eax
	add ecx,0xAD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::BackwardUpdateCashItem
__SUB_CLASS_THIS(000F5660, __thiscall, 122624,  GW_ItemSlotPet, void, GW_ItemSlotBase*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi+0x37]
	mov esi,ecx
	push eax
	lea ecx,[edi+0x35]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[esi+0x35]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x37],eax
	mov edx,dword ptr [edi+0x3F]
	push edx
	lea eax,[edi+0x3B]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x3B]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x3F],eax
	mov ecx,dword ptr [edi+0x45]
	push ecx
	lea edx,[edi+0x43]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[esi+0x43]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x45],eax
	mov eax,dword ptr [edi+0x4D]
	push eax
	lea ecx,[edi+0x49]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x49]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x4D],eax
	mov edx,dword ptr [edi+0x55]
	push edx
	lea eax,[edi+0x51]
	push eax
	call _ZtlSecureFuseHelper<unsigned short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x51]
	call _ZtlSecureTearHelper<unsigned short>::call
	mov dword ptr [esi+0x55],eax
	mov ecx,dword ptr [edi+0x69]
	push ecx
	lea edx,[edi+0x61]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esi+0x61]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x69],eax
	mov eax,dword ptr [edi+0x71]
	push eax
	lea ecx,[edi+0x6D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x6D]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x71],eax
	mov edx,dword ptr [edi+0x59]
	mov dword ptr [esi+0x59],edx
	mov eax,dword ptr [edi+0x5D]
	pop edi
	mov dword ptr [esi+0x5D],eax
	pop esi
	ret 4
}
}
// GW_WildHunterInfo::CheckOverlapMob
__SUB_CLASS_THIS(00539FE0, __thiscall, 81372,  GW_WildHunterInfo, int32_t, unsigned long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	xor eax,eax
	inc ecx

 Block1:
	cmp dword ptr [ecx],edx
	je Block4

 Block2:
	inc eax
	add ecx,4
	cmp eax,5
	jl Block1

 Block3:
	xor eax,eax
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// GW_ItemSlotBundle::GetDataSize
__SUB_CLASS_THIS0(000F66F0, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	mov eax,0x41
	ret
}
}
// GW_ItemSlotBundle::SetItemTitle
__SUB_CLASS_THIS(000F7490, __thiscall, 113359,  GW_ItemSlotBundle, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push 0xD
	push eax
	add ecx,0x40
	push ecx
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret 4
}
}
// GW_ItemSlotBundle::SetLevel
__SUB_CLASS_THIS(000F6760, __thiscall, 113362,  GW_ItemSlotBundle, void, unsigned char) {
__asm {

 Block0:
	ret 4
}
}
// GW_NewYearCardRecord::Decode
_SUB_EXCEPTION_HANDLER(F8BF0)
__SUB_CLASS_THIS(000F8BF0, __thiscall, 66714,  GW_NewYearCardRecord, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F8BF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x28]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi],eax
	call CInPacket::Decode4
	mov dword ptr [esi+4],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esp+0x14]
	mov ebp,dword ptr [ZImports::_lstrcpynA]
	push 0xD
	push ecx
	lea edx,[esi+8]
	push edx
	mov dword ptr [esp+0x2C],0
	call ebp
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push 8
	lea ecx,[esi+0x19]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0x15],eax
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esp+0x10]
	push edx
	mov ecx,edi
	mov dword ptr [esi+0x21],eax
	call CInPacket::DecodeStr
	mov eax,dword ptr [esp+0x10]
	push 0xD
	push eax
	lea ecx,[esi+0x25]
	push ecx
	mov byte ptr [esp+0x2C],1
	call ebp
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x32],edx
	call CInPacket::Decode1
	movzx eax,al
	push 8
	lea ecx,[esi+0x3A]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0x36],eax
	call CInPacket::DecodeBuffer
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [esp+0x28]
	push 0x79
	push eax
	add esi,0x42
	push esi
	call ebp
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 4
}
}
// GW_CharacterStat::_ZtlSecureGet_nLevel
__SUB_CLASS0(0007D940, __fastcall, 121456,  GW_CharacterStat, unsigned char) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x35]
	push eax
	add ecx,0x33
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niPAD
__SUB_CLASS0(000F2370, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x40]
	push eax
	add ecx,0x3C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niMDD
__SUB_CLASS0(000F23D0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x58]
	push eax
	add ecx,0x54
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_WildHunterInfo::Decode
__SUB_CLASS_THIS(000F2BC0, __thiscall, 120247,  GW_WildHunterInfo, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode1
	movzx eax,al
	cdq
	mov ecx,0xA
	idiv ecx
	inc esi
	lea edi,[ecx-5]
	mov byte ptr [esi-1],al
	mov dword ptr [esi+0x14],edx

 Block1:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	add esi,4
	sub edi,1
	jne Block1

 Block2:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_nEXP
__SUB_CLASS0(000F2490, __fastcall, 126182,  GW_ItemSlotEquipBase, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAC]
	push eax
	add ecx,0xA4
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// GW_MiniGameRecord::Decode
__SUB_CLASS_THIS(000F2AD0, __thiscall, 103074,  GW_MiniGameRecord, void, CInPacket&) {
__asm {

 Block0:
	push 0x14
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_CharacterStat::operator=
__SUB_CLASS_THIS(001D8F80, __thiscall, 121477,  GW_CharacterStat, GW_CharacterStat&, const GW_CharacterStat&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi]
	mov esi,ecx
	mov ecx,edi
	mov dword ptr [esi],eax
	lea eax,[esi+4]
	sub ecx,esi
	mov ebp,0xD
	lea ebx,[ebx]

 Block1:
	mov dl,byte ptr [ecx+eax]
	mov byte ptr [eax],dl
	inc eax
	sub ebp,1
	jne Block1

 Block2:
	mov al,byte ptr [edi+0x11]
	mov byte ptr [esi+0x11],al
	movzx ecx,byte ptr [edi+0x12]
	mov byte ptr [esi+0x12],cl
	mov edx,dword ptr [edi+0x13]
	mov dword ptr [esi+0x13],edx
	mov eax,dword ptr [edi+0x17]
	mov dword ptr [esi+0x17],eax
	mov ecx,dword ptr [edi+0x1B]
	mov dword ptr [esi+0x1B],ecx
	mov edx,dword ptr [edi+0x1F]
	mov dword ptr [esi+0x1F],edx
	mov eax,dword ptr [edi+0x23]
	mov dword ptr [esi+0x23],eax
	mov ecx,dword ptr [edi+0x27]
	mov dword ptr [esi+0x27],ecx
	mov edx,dword ptr [edi+0x2B]
	mov dword ptr [esi+0x2B],edx
	mov eax,dword ptr [edi+0x2F]
	mov dword ptr [esi+0x2F],eax
	movzx ecx,byte ptr [edi+0x33]
	mov byte ptr [esi+0x33],cl
	movzx edx,byte ptr [edi+0x34]
	mov byte ptr [esi+0x34],dl
	mov eax,dword ptr [edi+0x35]
	mov dword ptr [esi+0x35],eax
	movzx ecx,word ptr [edi+0x39]
	mov word ptr [esi+0x39],cx
	movzx edx,word ptr [edi+0x3B]
	mov word ptr [esi+0x3B],dx
	mov eax,dword ptr [edi+0x3D]
	mov dword ptr [esi+0x3D],eax
	movzx ecx,word ptr [edi+0x41]
	mov word ptr [esi+0x41],cx
	movzx edx,word ptr [edi+0x43]
	mov word ptr [esi+0x43],dx
	mov eax,dword ptr [edi+0x45]
	mov dword ptr [esi+0x45],eax
	movzx ecx,word ptr [edi+0x49]
	mov word ptr [esi+0x49],cx
	movzx edx,word ptr [edi+0x4B]
	mov word ptr [esi+0x4B],dx
	mov eax,dword ptr [edi+0x4D]
	mov dword ptr [esi+0x4D],eax
	movzx ecx,word ptr [edi+0x51]
	mov word ptr [esi+0x51],cx
	movzx edx,word ptr [edi+0x53]
	mov word ptr [esi+0x53],dx
	mov eax,dword ptr [edi+0x55]
	mov dword ptr [esi+0x55],eax
	movzx ecx,word ptr [edi+0x59]
	mov word ptr [esi+0x59],cx
	movzx edx,word ptr [edi+0x5B]
	mov word ptr [esi+0x5B],dx
	mov eax,dword ptr [edi+0x5D]
	mov dword ptr [esi+0x5D],eax
	mov ecx,dword ptr [edi+0x61]
	mov dword ptr [esi+0x61],ecx
	mov edx,dword ptr [edi+0x65]
	mov dword ptr [esi+0x65],edx
	mov eax,dword ptr [edi+0x69]
	mov dword ptr [esi+0x69],eax
	mov ecx,dword ptr [edi+0x6D]
	mov dword ptr [esi+0x6D],ecx
	mov edx,dword ptr [edi+0x71]
	mov dword ptr [esi+0x71],edx
	mov eax,dword ptr [edi+0x75]
	mov dword ptr [esi+0x75],eax
	mov ecx,dword ptr [edi+0x79]
	mov dword ptr [esi+0x79],ecx
	mov edx,dword ptr [edi+0x7D]
	mov dword ptr [esi+0x7D],edx
	mov eax,dword ptr [edi+0x81]
	mov dword ptr [esi+0x81],eax
	mov ecx,dword ptr [edi+0x85]
	mov dword ptr [esi+0x85],ecx
	mov edx,dword ptr [edi+0x89]
	mov dword ptr [esi+0x89],edx
	mov eax,dword ptr [edi+0x8D]
	mov dword ptr [esi+0x8D],eax
	movzx ecx,word ptr [edi+0x91]
	mov word ptr [esi+0x91],cx
	movzx edx,word ptr [edi+0x93]
	mov word ptr [esi+0x93],dx
	mov eax,dword ptr [edi+0x95]
	mov dword ptr [esi+0x95],eax
	movzx ecx,word ptr [edi+0x99]
	mov word ptr [esi+0x99],cx
	movzx edx,word ptr [edi+0x9B]
	mov word ptr [esi+0x9B],dx
	mov eax,dword ptr [edi+0x9D]
	mov dword ptr [esi+0x9D],eax
	mov ecx,dword ptr [edi+0xA1]
	mov dword ptr [esi+0xA1],ecx
	mov edx,dword ptr [edi+0xA5]
	mov dword ptr [esi+0xA5],edx
	mov eax,dword ptr [edi+0xA9]
	mov dword ptr [esi+0xA9],eax
	movzx ecx,word ptr [edi+0xAD]
	mov word ptr [esi+0xAD],cx
	movzx edx,word ptr [edi+0xAF]
	mov word ptr [esi+0xAF],dx
	mov eax,dword ptr [edi+0xB1]
	mov dword ptr [esi+0xB1],eax
	mov ecx,dword ptr [edi+0xB5]
	mov dword ptr [esi+0xB5],ecx
	mov edx,dword ptr [edi+0xB9]
	mov dword ptr [esi+0xB9],edx
	mov eax,dword ptr [edi+0xBD]
	mov dword ptr [esi+0xBD],eax
	mov ecx,dword ptr [edi+0xC1]
	mov dword ptr [esi+0xC1],ecx
	mov edx,dword ptr [edi+0xC5]
	mov dword ptr [esi+0xC5],edx
	mov eax,dword ptr [edi+0xC9]
	lea ebx,[esi+0xCD]
	mov ecx,ebx
	mov dword ptr [esi+0xC9],eax
	call ZList<SPSet>::RemoveAll
	lea ecx,[edi+0xCD]
	push ecx
	mov ecx,ebx
	call ZList<SPSet>::AddTail_List
	mov edx,dword ptr [edi+0xE1]
	mov dword ptr [esi+0xE1],edx
	mov eax,dword ptr [edi+0xE5]
	mov dword ptr [esi+0xE5],eax
	mov ecx,dword ptr [edi+0xE9]
	mov dword ptr [esi+0xE9],ecx
	movzx edx,byte ptr [edi+0xED]
	mov byte ptr [esi+0xED],dl
	mov eax,dword ptr [edi+0xEE]
	mov dword ptr [esi+0xEE],eax
	movzx ecx,byte ptr [edi+0xF2]
	mov byte ptr [esi+0xF2],cl
	mov edx,dword ptr [edi+0xF3]
	mov dword ptr [esi+0xF3],edx
	mov ax,word ptr [edi+0xF7]
	pop edi
	mov word ptr [esi+0xF7],ax
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// GW_CharacterStat::~GW_CharacterStat
__SUB_CLASS_THIS0(000824E0, __thiscall, 121476,  GW_CharacterStat, void) {
__asm {

 Block0:
	add ecx,0xCD
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<SPSet>::`vftable'
	jmp  ZList<SPSet>::RemoveAll
}
}
// GW_ItemSlotPet::SetWarmSupport
__SUB_CLASS_THIS0(000F6A00, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_WildHunterInfo::GetRandomCapturedMob
__SUB_CLASS_THIS0(0053A2C0, __thiscall, 81376,  GW_WildHunterInfo, unsigned long) {
__asm {

 Block0:
	sub esp,0x14
	xor eax,eax
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [ecx+1]
	push esi
	xor esi,esi
	mov dword ptr [esp+4],0
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esp+4],eax
	mov esi,1

 Block2:
	mov eax,dword ptr [ecx+5]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esp+esi*4+4],eax
	inc esi

 Block4:
	mov eax,dword ptr [ecx+9]
	test eax,eax
	je Block6

 Block5:
	mov dword ptr [esp+esi*4+4],eax
	inc esi

 Block6:
	mov eax,dword ptr [ecx+0xD]
	test eax,eax
	je Block8

 Block7:
	mov dword ptr [esp+esi*4+4],eax
	inc esi

 Block8:
	mov ecx,dword ptr [ecx+0x11]
	test ecx,ecx
	je Block10

 Block9:
	mov dword ptr [esp+esi*4+4],ecx
	inc esi

 Block10:
	test esi,esi
	jne Block12

 Block11:
	xor eax,eax
	pop esi
	add esp,0x14
	ret

 Block12:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	pop esi
	mov eax,dword ptr [esp+edx*4]
	add esp,0x14
	ret
}
}
// GW_CharacterStat::GW_CharacterStat
__SUB_CLASS_THIS0(000824B0, __thiscall, 121474,  GW_CharacterStat, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	int 3// TODO: 	mov dword ptr [eax+0xCD],offset ZList<SPSet>::`vftable'
	mov dword ptr [eax+0xD5],ecx
	mov dword ptr [eax+0xD9],ecx
	mov dword ptr [eax+0xDD],ecx
	ret
}
}
// GW_ItemSlotBundle::SetPossibleTrading
__SUB_CLASS_THIS0(000F6880, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x34]
	push edi
	push eax
	lea edi,[esi+0x30]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	or ax,2
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x34],eax
	pop esi
	ret
}
}
// FUNCKEY_MAPPED::Decode
__SUB_CLASS_THIS(000F2B20, __thiscall, 86904,  FUNCKEY_MAPPED, void, CInPacket&) {
__asm {

 Block0:
	push 5
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_ItemSlotBase::~GW_ItemSlotBase
_SUB_EXCEPTION_HANDLER(F4B80)
__SUB_CLASS_THIS0(000F4B80, __thiscall, 121811,  GW_ItemSlotBase, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F4B80
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
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

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
// GW_ItemSlotBase::Encode
__SUB_CLASS_THIS(000F6660, __thiscall, 121808,  GW_ItemSlotBase, void, COutPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x18]
	push edi
	call edx
	mov edi,dword ptr [esp+0xC]
	push eax
	mov ecx,edi
	call COutPacket::Encode1
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4
}
}
// GW_ItemSlotEquip::SetLevel
__SUB_CLASS_THIS(000F6430, __thiscall, 106609,  GW_ItemSlotEquip, void, unsigned char) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov cl,byte ptr [esp+8]
	lea edx,[esi+0xDB]
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0xDD],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotEquip::GetIUCAdd
__SUB_CLASS_THIS0(000F6230, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x101]
	push eax
	add ecx,0xF9
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,8
	and eax,0xFF
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niSTR
__SUB_CLASS0(000F22B0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x10]
	push eax
	add ecx,0xC
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nTameness
__SUB_CLASS(000F4D10, __fastcall, 122608,  GW_ItemSlotPet, short, short) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3B]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x3F],eax
	pop edi
	mov ax,si
	pop esi
	ret
}
}
// GW_ItemSlotBundle::RawEncode
__SUB_CLASS_THIS(000F86C0, __thiscall, 113367,  GW_ItemSlotBundle, void, COutPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	push edi
	mov esi,ecx
	call GW_ItemSlotBase::RawEncode
	mov eax,dword ptr [esi+0x2C]
	push eax
	lea ecx,[esi+0x28]
	push ecx
	call _ZtlSecureFuseHelper<unsigned short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	push ecx
	lea ebp,[esi+0x40]
	mov ebx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ebx],0
	test ebp,ebp
	je Block4

 Block1:
	mov eax,ebp
	lea edx,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block2

 Block3:
	sub eax,edx
	mov edi,eax
	push edi
	push ebp
	push 0
	push edi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x1C]

 Block4:
	mov ecx,edi
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi+0x34]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	add esp,8
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block6

 Block5:
	cmp eax,0xE9
	jne Block7

 Block6:
	push 8
	add esi,0x38
	push esi
	mov ecx,edi
	call COutPacket::EncodeBuffer

 Block7:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// GW_ItemSlotPet::SetItemAttribute
__SUB_CLASS_THIS(000F6B10, __thiscall, 122615,  GW_ItemSlotPet, void, short) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0x6D]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x71],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nPetAttribute
__SUB_CLASS(000F4D50, __fastcall, 122608,  GW_ItemSlotPet, short, short) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x49]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x4D],eax
	pop edi
	mov ax,si
	pop esi
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niACC
__SUB_CLASS0(000F23F0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x60]
	push eax
	add ecx,0x5C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niSpeed
__SUB_CLASS0(000F2450, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x78]
	push eax
	add ecx,0x74
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::GetLevelUpType
__SUB_CLASS_THIS0(000F6700, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nRemainLife
__SUB_CLASS(000F4D70, __fastcall, 122612,  GW_ItemSlotPet, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x61]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x69],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecurePut_nEXP
__SUB_CLASS(000F4C20, __fastcall, 126183,  GW_ItemSlotEquipBase, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xA4]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xAC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotEquip::IsReleased
__SUB_CLASS_THIS0(000F61D0, __thiscall, 66921,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	lea eax,[ecx+0x105]
	mov ecx,dword ptr [eax+2]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	and eax,4
	ret
}
}
// GW_ItemSlotBundle::IsBindedItem
__SUB_CLASS_THIS0(000F66D0, __thiscall, 113356,  GW_ItemSlotBundle, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotEquip::SetBinded
__SUB_CLASS_THIS0(000F6350, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	or ax,8
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotBase::RawEncode
__SUB_CLASS_THIS(000F6B90, __thiscall, 121808,  GW_ItemSlotBase, void, COutPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov ebp,ecx
	push edi
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0x14]
	push eax
	mov ecx,esi
	call COutPacket::Encode4
	mov eax,dword ptr [ebp+0x18]
	or eax,dword ptr [ebp+0x1C]
	lea edi,[ebp+0x18]
	je Block2

 Block1:
	mov ebx,1
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	push ebx
	mov ecx,esi
	call COutPacket::Encode1
	test ebx,ebx
	je Block5

 Block4:
	push 8
	push edi
	mov ecx,esi
	call COutPacket::EncodeBuffer

 Block5:
	push 8
	add ebp,0x20
	push ebp
	mov ecx,esi
	call COutPacket::EncodeBuffer
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// GW_ItemSlotPet::GetType
__SUB_CLASS_THIS0(000F6960, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	mov eax,3
	ret
}
}
// GW_ItemSlotEquip::RawDecode
_SUB_EXCEPTION_HANDLER(F8360)
__SUB_CLASS_THIS(000F8360, __thiscall, 106614,  GW_ItemSlotEquip, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F8360
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
	mov ebx,ecx
	mov edi,dword ptr [esp+0x20]
	push edi
	call GW_ItemSlotBase::RawDecode
	mov ecx,edi
	call CInPacket::Decode1
	lea esi,[ebx+0x49]
	mov edx,esi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+2],eax
	call CInPacket::Decode1
	lea edx,[esi+6]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+8],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x10],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x18],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x28],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x30],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x34]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x38],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x3C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x40],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x44]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x48],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x4C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x50],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x54]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x58],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x5C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x60],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x64]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x68],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x70],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x74]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x78],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x7C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x80],eax
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esp+0x20]
	push 0xD
	push ecx
	lea edx,[ebx+0x30]
	push edx
	mov dword ptr [esp+0x24],0
	call dword ptr [ZImports::_lstrcpynA]
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x84]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x88],eax
	call CInPacket::Decode1
	lea edx,[esi+0x8C]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+0x8E],eax
	call CInPacket::Decode1
	lea edx,[esi+0x92]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+0x94],eax
	call CInPacket::Decode4
	lea edx,[esi+0x98]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xA4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xAC],eax
	call CInPacket::Decode4
	lea edx,[esi+0xB0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB8],eax
	call CInPacket::Decode1
	lea esi,[ebx+0x105]
	mov edx,esi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+2],eax
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+6]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+8],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x10],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x18],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x28],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x30],eax
	mov eax,dword ptr [ebx+0x18]
	or eax,dword ptr [ebx+0x1C]
	jne Block2

 Block1:
	push 8
	lea ecx,[ebx+0x28]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	jmp Block3

 Block2:
	mov dword ptr [ebx+0x28],0
	mov dword ptr [ebx+0x2C],0

 Block3:
	push 8
	lea edx,[ebx+0x3D]
	push edx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x45],eax
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
	pop ebx
	add esp,0xC
	ret 4
}
}
// GW_ItemSlotBundle::GetEXP
__SUB_CLASS_THIS0(000F6720, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotPet::GetItemAttribute
__SUB_CLASS_THIS0(000F6A90, __thiscall, 122619,  GW_ItemSlotPet, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x71]
	push eax
	add ecx,0x6D
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// FUNCKEY_MAPPED::Encode
__SUB_CLASS_THIS(000F6D80, __thiscall, 86903,  FUNCKEY_MAPPED, void, COutPacket&) {
__asm {

 Block0:
	push 5
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call COutPacket::EncodeBuffer
	ret 4
}
}
// ExtendSP::Decode
__SUB_CLASS_THIS(000F9CB0, __thiscall, 118967,  ExtendSP, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0x10
	push ebp
	push esi
	mov ebp,ecx
	call ZList<SPSet>::RemoveAll
	mov esi,dword ptr [esp+0x1C]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jle Block4

 Block1:
	push ebx
	mov dword ptr [esp+0xC],eax
	push edi

 Block2:
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov bl,al
	call CInPacket::Decode1
	lea edx,[esp+0x14]
	mov cl,bl
	mov byte ptr [esp+0x24],al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov cl,byte ptr [esp+0x24]
	lea edx,[esp+0x1A]
	mov dword ptr [esp+0x16],eax
	call _ZtlSecureTearHelper<unsigned char>::call
	mov edi,eax
	mov ecx,ebp
	mov dword ptr [esp+0x1C],edi
	call ZList<SPSet>::AddTail_
	sub dword ptr [esp+0x10],1
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],edi
	jne Block2

 Block3:
	pop edi
	pop ebx

 Block4:
	pop esi
	pop ebp
	add esp,0x10
	ret 4
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niMaxHP
__SUB_CLASS0(000F2330, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x30]
	push eax
	add ecx,0x2C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niPDD
__SUB_CLASS0(000F23B0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x50]
	push eax
	add ecx,0x4C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::ResetPossibleTrading
__SUB_CLASS_THIS0(000F6AE0, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x71]
	push edi
	push eax
	lea edi,[esi+0x6D]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	and ax,0xFFFE
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x71],eax
	pop esi
	ret
}
}
// GW_ItemSlotEquip::DumpString
__SUB_CLASS_THIS0(000F6BF0, __thiscall, 106613,  GW_ItemSlotEquip, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp],0
	mov dword ptr [eax],0
	pop ecx
	ret 4
}
}
// GW_ItemSlotEquip::SetIUCAdd
__SUB_CLASS_THIS(000F6500, __thiscall, 106610,  GW_ItemSlotEquip, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x101]
	push eax
	lea ecx,[esi+0xF9]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x10]
	and edx,0xFF
	shl edx,8
	and eax,0xFFFF00FF
	add eax,edx
	add esp,8
	lea edx,[esi+0xF9]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x101],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niEVA
__SUB_CLASS0(000F2410, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x68]
	push eax
	add ecx,0x64
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::_ZtlSecurePut_nNumber
__SUB_CLASS(000F4CB0, __fastcall, 113353,  GW_ItemSlotBundle, uint16_t, uint16_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x28]
	mov ecx,esi
	call _ZtlSecureTearHelper<unsigned short>::call
	mov dword ptr [edi+0x2C],eax
	pop edi
	mov ax,si
	pop esi
	ret
}
}
// GW_ItemSlotPet::GW_ItemSlotPet
__SUB_CLASS_THIS0(000F6900, __thiscall, 122631,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call GW_ItemSlotBase::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotPet::`vftable'
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotEquip::GetDataSize
__SUB_CLASS_THIS0(000F6080, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,0x12D
	ret
}
}
// GW_ItemSlotEquip::SetItemAttribute
__SUB_CLASS_THIS(000F6410, __thiscall, 106604,  GW_ItemSlotEquip, void, short) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::IsSupportWarmItem
__SUB_CLASS_THIS0(000F6940, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotPet::RawEncode
__SUB_CLASS_THIS(000F6C90, __thiscall, 122627,  GW_ItemSlotPet, void, COutPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call GW_ItemSlotBase::RawEncode
	push 0xD
	lea eax,[esi+0x28]
	push eax
	mov ecx,edi
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [esi+0x37]
	push ecx
	lea edx,[esi+0x35]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+0x3F]
	push ecx
	lea edx,[esi+0x3B]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode2
	mov ecx,dword ptr [esi+0x45]
	push ecx
	lea edx,[esi+0x43]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode1
	push 8
	lea ecx,[esi+0x59]
	push ecx
	mov ecx,edi
	call COutPacket::EncodeBuffer
	mov edx,dword ptr [esi+0x4D]
	push edx
	lea eax,[esi+0x49]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x55]
	push edx
	lea eax,[esi+0x51]
	push eax
	call _ZtlSecureFuseHelper<unsigned short>::call
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,edi
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x69]
	push edx
	lea eax,[esi+0x61]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x71]
	push ecx
	add esi,0x6D
	push esi
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx edx,ax
	push edx
	mov ecx,edi
	call COutPacket::Encode2
	pop edi
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::GetNewSN
__SUB_CLASS_THIS0(000F6A60, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niMAD
__SUB_CLASS0(000F2390, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x48]
	push eax
	add ecx,0x44
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niCraft
__SUB_CLASS0(000F2430, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x70]
	push eax
	add ecx,0x6C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::ResetPossibleTrading
__SUB_CLASS_THIS0(000F68B0, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x34]
	push edi
	push eax
	lea edi,[esi+0x30]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	and ax,0xFFFD
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x34],eax
	pop esi
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niMaxMP
__SUB_CLASS0(000F2350, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x38]
	push eax
	add ecx,0x34
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::DumpString
__SUB_CLASS_THIS0(000F6C10, __thiscall, 113365,  GW_ItemSlotBundle, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp],0
	mov dword ptr [eax],0
	pop ecx
	ret 4
}
}
// GW_ItemSlotEquip::GetType
__SUB_CLASS_THIS0(000F6070, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// GW_ItemSlotBundle::IsProtectedItem
__SUB_CLASS_THIS0(000F6780, __thiscall, 113356,  GW_ItemSlotBundle, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,1
	ret
}
}
// GW_ItemSlotEquip::SetIUCValue
__SUB_CLASS_THIS(000F64C0, __thiscall, 106610,  GW_ItemSlotEquip, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x101]
	push eax
	lea ecx,[esi+0xF9]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	and eax,0xFFFFFF00
	add eax,dword ptr [esp+0x10]
	add esp,8
	lea edx,[esi+0xF9]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x101],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotBundle::SetProtected
__SUB_CLASS_THIS0(000F6820, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x34]
	push edi
	push eax
	lea edi,[esi+0x30]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	or ax,1
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x34],eax
	pop esi
	ret
}
}
// GW_ItemSlotEquip::IsBindedItem
__SUB_CLASS_THIS0(000F6110, __thiscall, 84850,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,8
	shr eax,3
	ret
}
}
// GW_ItemSlotBundle::SetItemAttribute
__SUB_CLASS_THIS(000F68E0, __thiscall, 113357,  GW_ItemSlotBundle, void, short) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x34],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotBundle::IsSupportWarmItem
__SUB_CLASS_THIS0(000F66C0, __thiscall, 113356,  GW_ItemSlotBundle, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// ExtendSP::Get
__SUB_CLASS_THIS(000F44F0, __thiscall, 118964,  ExtendSP, unsigned char, unsigned char) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xC]
	push ebx
	push esi
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block4

 Block1:
	mov bl,byte ptr [esp+0x10]

 Block2:
	lea eax,[esp+8]
	push eax
	call ZList<SPSet>::GetNext
	mov esi,eax
	mov ecx,dword ptr [esi+2]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,0xC
	cmp al,bl
	je Block5

 Block3:
	cmp dword ptr [esp+8],0
	jne Block2

 Block4:
	pop esi
	xor al,al
	pop ebx
	pop ecx
	ret 4

 Block5:
	mov edx,dword ptr [esi+8]
	push edx
	add esi,6
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	pop esi
	pop ebx
	pop ecx
	ret 4
}
}
// GW_ItemSlotPet::GetSN
__SUB_CLASS_THIS0(000F6A40, __thiscall, 122622,  GW_ItemSlotPet, _LARGE_INTEGER) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax],0
	mov dword ptr [eax+4],0
	ret 4
}
}
// GW_ItemSlotPet::RawDecode
__SUB_CLASS_THIS(000F5750, __thiscall, 122626,  GW_ItemSlotPet, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call GW_ItemSlotBase::RawDecode
	push 0xD
	lea eax,[esi+0x28]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+0x35]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+0x37],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x3B]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x3F],eax
	call CInPacket::Decode1
	lea edx,[esi+0x43]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	push 8
	lea ecx,[esi+0x59]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0x45],eax
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x49]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x4D],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x51]
	call _ZtlSecureTearHelper<unsigned short>::call
	mov ecx,edi
	mov dword ptr [esi+0x55],eax
	call CInPacket::Decode4
	lea edx,[esi+0x61]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x69],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x6D]
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x71],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::GetEXP
__SUB_CLASS_THIS0(000F69B0, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotBase::RawDecode
__SUB_CLASS_THIS(000F5310, __thiscall, 121817,  GW_ItemSlotBase, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block2

 Block1:
	push 8
	lea eax,[esi+0x18]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	push 8
	add esi,0x20
	push esi
	mov ecx,edi
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	ret 4

 Block2:
	xor eax,eax
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],eax
	push 8
	add esi,0x20
	push esi
	mov ecx,edi
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::SetPreventSlip
__SUB_CLASS_THIS0(000F69F0, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotEquip::BackwardUpdateCashItem
__SUB_CLASS_THIS(000F5370, __thiscall, 106612,  GW_ItemSlotEquip, void, GW_ItemSlotBase*) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	mov eax,dword ptr [ebp+0x4B]
	push esi
	lea esi,[ebp+0x49]
	push edi
	push eax
	push esi
	mov ebx,ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	lea edi,[ebx+0x49]
	add esp,8
	mov edx,edi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+2],eax
	mov ecx,dword ptr [esi+8]
	push ecx
	lea edx,[esi+6]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[edi+6]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [ebp+0x10D]
	push eax
	lea ecx,[ebp+0x10B]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[ebx+0x10B]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [ebx+0x10D],eax
	mov edx,dword ptr [esi+0x10]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x10],eax
	mov ecx,dword ptr [esi+0x18]
	push ecx
	lea edx,[esi+0x14]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x18],eax
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x1C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x20],eax
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x28],eax
	mov ecx,dword ptr [esi+0x30]
	push ecx
	lea edx,[esi+0x2C]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x30],eax
	mov eax,dword ptr [esi+0x38]
	push eax
	lea ecx,[esi+0x34]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x34]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x38],eax
	mov edx,dword ptr [esi+0x40]
	push edx
	lea eax,[esi+0x3C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x3C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x40],eax
	mov ecx,dword ptr [esi+0x48]
	push ecx
	lea edx,[esi+0x44]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x44]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x48],eax
	mov eax,dword ptr [esi+0x50]
	push eax
	lea ecx,[esi+0x4C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x4C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x50],eax
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x54]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x54]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x58],eax
	mov ecx,dword ptr [esi+0x60]
	push ecx
	lea edx,[esi+0x5C]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x5C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x60],eax
	mov eax,dword ptr [esi+0x68]
	push eax
	lea ecx,[esi+0x64]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x64]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x68],eax
	mov edx,dword ptr [esi+0x70]
	push edx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x6C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x70],eax
	mov ecx,dword ptr [esi+0x78]
	push ecx
	lea edx,[esi+0x74]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x74]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x78],eax
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi+0x7C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x7C]
	call _ZtlSecureTearHelper<short>::call
	push 0xD
	lea edx,[ebp+0x30]
	mov dword ptr [edi+0x80],eax
	push edx
	lea eax,[ebx+0x30]
	push eax
	call dword ptr [ZImports::_lstrcpynA]
	mov ecx,dword ptr [esi+0x88]
	push ecx
	lea edx,[esi+0x84]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x84]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x88],eax
	mov eax,dword ptr [ebp+0x3D]
	mov dword ptr [ebx+0x3D],eax
	mov ecx,dword ptr [ebp+0x41]
	mov dword ptr [ebx+0x41],ecx
	mov edx,dword ptr [ebp+0x45]
	mov dword ptr [ebx+0x45],edx
	mov eax,dword ptr [esi+0xB8]
	push eax
	add esi,0xB0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[edi+0xB0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xB8],eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// GW_ItemSlotEquip::IsPossibleTradingItem
__SUB_CLASS_THIS0(000F6130, __thiscall, 84850,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,0x10
	shr eax,4
	ret
}
}
// GW_ItemSlotBundle::GetType
__SUB_CLASS_THIS0(000F66E0, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	mov eax,2
	ret
}
}
// GW_ItemSlotPet::GetItemNumber
__SUB_CLASS_THIS0(000F6980, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// GW_ItemSlotEquip::IsPreventSlipItem
__SUB_CLASS_THIS0(000F60D0, __thiscall, 84850,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,2
	shr eax,1
	ret
}
}
// GW_ItemSlotEquip::ResetProtected
__SUB_CLASS_THIS0(000F6290, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	and ax,0xFFFE
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotPet::SetEXP
__SUB_CLASS_THIS(000F6A30, __thiscall, 122621,  GW_ItemSlotPet, void, long) {
__asm {

 Block0:
	ret 4
}
}
// GW_ItemSlotEquip::SetPossibleTrading
__SUB_CLASS_THIS0(000F6390, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	or ax,0x10
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotPet::_ZtlSecureGet_nTameness
__SUB_CLASS0(000F2590, __fastcall, 122607,  GW_ItemSlotPet, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3F]
	push eax
	add ecx,0x3B
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::SetBinded
__SUB_CLASS_THIS0(000F6750, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotEquip::SetReleased
__SUB_CLASS_THIS(000F6470, __thiscall, 106611,  GW_ItemSlotEquip, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],1
	push esi
	lea esi,[ecx+0x105]
	jne Block2

 Block1:
	mov eax,dword ptr [esi+2]
	push eax
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	or al,4
	mov cl,al
	add esp,8
	mov edx,esi
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+2],eax
	pop esi
	ret 4

 Block2:
	mov ecx,dword ptr [esi+2]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	xor cl,cl
	add esp,8
	mov edx,esi
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+2],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotEquip::SetEXP
__SUB_CLASS_THIS(000F6450, __thiscall, 106610,  GW_ItemSlotEquip, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0xE1]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE9],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::IsDead
__SUB_CLASS_THIS0(000F6C30, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsLimitedLifePet
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x69]
	push eax
	add esi,0x61
	push esi
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	test eax,eax
	setle cl
	pop esi
	mov eax,ecx
	ret

 Block2:
	mov ecx,esi
	pop esi
	jmp  GW_ItemSlotPet::IsDeadByDate
}
}
// GW_ItemSlotEquip::IsSupportWarmItem
__SUB_CLASS_THIS0(000F60F0, __thiscall, 84850,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,4
	shr eax,2
	ret
}
}
// GW_ItemSlotBase::GW_ItemSlotBase
_SUB_EXCEPTION_HANDLER(F5EF0)
__SUB_CLASS_THIS0(000F5EF0, __thiscall, 121804,  GW_ItemSlotBase, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F5EF0
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
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x20],eax
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotBase::`vftable'
	lea edi,[esi+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov cl,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x20],1
	call TSecType<long>::SetData
	xor eax,eax
	mov dword ptr [esi+0x18],0
	mov dword ptr [esi+0x1C],0
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x24],eax
	mov eax,esi
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
// GW_ItemSlotPet::SetPossibleTrading
__SUB_CLASS_THIS0(000F6AB0, __thiscall, 122618,  GW_ItemSlotPet, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x71]
	push edi
	push eax
	lea edi,[esi+0x6D]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	or ax,1
	movzx ecx,ax
	add esp,8
	mov edx,edi
	call _ZtlSecureTearHelper<short>::call
	pop edi
	mov dword ptr [esi+0x71],eax
	pop esi
	ret
}
}
// GW_ItemSlotPet::IsProtectedItem
__SUB_CLASS_THIS0(000F6920, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotEquip::IsProtectedItem
__SUB_CLASS_THIS0(000F60B0, __thiscall, 84850,  GW_ItemSlotEquip, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,1
	ret
}
}
// GW_Friend::Decode
__SUB_CLASS_THIS(000F2B30, __thiscall, 86603,  GW_Friend, void, CInPacket&) {
__asm {

 Block0:
	push 0x27
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
__SUB_CLASS0(000F2530, __fastcall, 104251,  GW_ItemSlotEquipOpt, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	push eax
	add ecx,0x24
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::SetLevel
__SUB_CLASS_THIS(000F6A20, __thiscall, 122620,  GW_ItemSlotPet, void, unsigned char) {
__asm {

 Block0:
	ret 4
}
}
// GW_ItemSlotBase::Decode
_SUB_EXCEPTION_HANDLER(F7EA0)
__SUB(000F7EA0, __cdecl, 121807,  ZRef<GW_ItemSlotBase>, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F7EA0
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
	mov edi,dword ptr [esp+0x30]
	mov ecx,edi
	mov dword ptr [esp+0x10],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	lea ecx,[esp+0x18]
	push ecx
	call GW_ItemSlotBase::CreateItem
	add esp,8
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],1
	test esi,esi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x70]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	push edi
	mov dword ptr [ecx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x28],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block3:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// GW_ItemSlotPet::IsBindedItem
__SUB_CLASS_THIS0(000F6950, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
__SUB_CLASS0(000F2510, __fastcall, 104251,  GW_ItemSlotEquipOpt, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push eax
	add ecx,0x1C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotPet::IsDeadByDate
__SUB_CLASS_THIS0(000F1BE0, __thiscall, 122613,  GW_ItemSlotPet, int32_t) {
__asm {

 Block0:
	push offset _D_DB_DATE_20790101__35
	add ecx,0x59
	push ecx
	call CompareFileTime
	xor ecx,ecx
	test eax,eax
	setge cl
	mov eax,ecx
	ret
}
}
// GW_ItemSlotBundle::IsPossibleTradingItem
__SUB_CLASS_THIS0(000F67A0, __thiscall, 113356,  GW_ItemSlotBundle, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	and eax,2
	shr eax,1
	ret
}
}
// GW_ItemSlotBundle::SetPreventSlip
__SUB_CLASS_THIS0(000F6730, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	ret
}
}
// GW_Memo::Decode
__SUB_CLASS_THIS(000F8D40, __thiscall, 120009,  GW_Memo, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [ZImports::_lstrcpynA]
	push 0xD
	push ecx
	lea edx,[esi+4]
	push edx
	call ebx
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [eax]
	push 0xC9
	push ecx
	lea edx,[esi+0x11]
	push edx
	call ebx
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push 8
	lea eax,[esi+0xDA]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	pop edi
	mov dword ptr [esi+0xE2],ecx
	pop esi
	pop ebx
	ret 4
}
}
// GW_ItemSlotBundle::SetWarmSupport
__SUB_CLASS_THIS0(000F6740, __thiscall, 113360,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	ret
}
}
// GW_ItemSlotBundle::SetEXP
__SUB_CLASS_THIS(000F6770, __thiscall, 113363,  GW_ItemSlotBundle, void, long) {
__asm {

 Block0:
	ret 4
}
}
// GW_ItemSlotPet::IsPetSkillExist
__SUB_CLASS_THIS(002B4D90, __thiscall, 122623,  GW_ItemSlotPet, int32_t, uint16_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x55]
	push eax
	add ecx,0x51
	push ecx
	call _ZtlSecureFuseHelper<unsigned short>::call
	add esp,8
	test word ptr [esp+4],ax
	mov eax,0
	setne al
	ret 4
}
}
// GW_ItemSlotPet::GetLevel
__SUB_CLASS_THIS0(000F69A0, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_CoupleRecord::Decode
__SUB_CLASS_THIS(000F2B60, __thiscall, 92049,  GW_CoupleRecord, void, CInPacket&) {
__asm {

 Block0:
	push 0x21
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_CharacterStat::Decode
__SUB_CLASS_THIS(000F9D40, __thiscall, 121466,  GW_CharacterStat, void, CInPacket&, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x10],eax
	push ebx
	mov ebx,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,dword ptr [esp+0x24]
	mov esi,ecx
	mov ecx,edi
	test ebx,ebx
	je Block2

 Block1:
	call CInPacket::Decode4
	lea eax,[esp+0xC]
	jmp Block3

 Block2:
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	lea eax,[esi+4]

 Block3:
	push 0xD
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	test ebx,ebx
	je Block5

 Block4:
	call CInPacket::Decode1
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	call CInPacket::Decode4
	jmp Block6

 Block5:
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0x11],al
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0x12],al
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x13],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x17],eax

 Block6:
	push 0x18
	lea eax,[esi+0x1B]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+0x33]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov ecx,edi
	mov dword ptr [esi+0x35],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea ebx,[esi+0x39]
	mov edx,ebx
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x3D],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x41]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x45],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x49]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x4D],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x51]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x55],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x59]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0x5D],eax
	call CInPacket::Decode4
	lea edx,[esi+0x61]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x69],eax
	call CInPacket::Decode4
	lea edx,[esi+0x6D]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x75],eax
	call CInPacket::Decode4
	lea edx,[esi+0x79]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x81],eax
	call CInPacket::Decode4
	lea edx,[esi+0x85]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8D],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x91]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	push ebx
	mov dword ptr [esi+0x95],eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	add esp,8
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,3
	je Block9

 Block7:
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block9

 Block8:
	cmp ecx,0x7D1
	jne Block10

 Block9:
	lea edx,[esi+0x99]
	xor ecx,ecx
	call _ZtlSecureTearHelper<short>::call
	push edi
	lea ecx,[esi+0xCD]
	mov dword ptr [esi+0x9D],eax
	call ExtendSP::Decode
	jmp Block11

 Block10:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x99]
	call _ZtlSecureTearHelper<short>::call
	lea ecx,[esi+0xCD]
	mov dword ptr [esi+0x9D],eax
	call ZList<SPSet>::RemoveAll

 Block11:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xA1]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA9],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0xAD]
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0xB1],eax
	call CInPacket::Decode4
	lea edx,[esi+0xC1]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC9],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE1]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE9],eax
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0xED],al
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xF3],eax
	call CInPacket::Decode2
	mov ecx,dword ptr [esp+0x1C]
	pop edi
	mov word ptr [esi+0xF7],ax
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x14
	ret 8
}
}
// GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
__SUB_CLASS0(000F24F0, __fastcall, 104251,  GW_ItemSlotEquipOpt, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18]
	push eax
	add ecx,0x14
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_FriendRecord::Decode
__SUB_CLASS_THIS(000F2B70, __thiscall, 107248,  GW_FriendRecord, void, CInPacket&) {
__asm {

 Block0:
	push 0x25
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niINT
__SUB_CLASS0(000F22F0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push eax
	add ecx,0x1C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquip::GetItemAttribute
__SUB_CLASS_THIS0(000F61B0, __thiscall, 106608,  GW_ItemSlotEquip, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD1]
	push eax
	add ecx,0xCD
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquip::SetPreventSlip
__SUB_CLASS_THIS0(000F62D0, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	or ax,2
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
// GW_ItemSlotEquip::GetLevelUpType
__SUB_CLASS_THIS0(000F6150, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD7]
	push eax
	add ecx,0xD5
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	movzx eax,al
	ret
}
}
// GW_ItemSlotEquip::GetLevel
__SUB_CLASS_THIS0(000F6170, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDD]
	push eax
	add ecx,0xDB
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	movzx eax,al
	ret
}
}
// GW_ItemSlotBundle::GW_ItemSlotBundle
__SUB_CLASS_THIS0(000F6690, __thiscall, 113371,  GW_ItemSlotBundle, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call GW_ItemSlotBase::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset GW_ItemSlotBundle::`vftable'
	mov eax,esi
	pop esi
	ret
}
}
// GW_MarriageRecord::Decode
__SUB_CLASS_THIS(000F2B50, __thiscall, 100675,  GW_MarriageRecord, void, CInPacket&) {
__asm {

 Block0:
	push 0x30
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// GW_ItemSlotBundle::GetItemAttribute
__SUB_CLASS_THIS0(000F67E0, __thiscall, 113361,  GW_ItemSlotBundle, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquip::GetEXP
__SUB_CLASS_THIS0(000F6190, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xE9]
	push eax
	add ecx,0xE1
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// GW_CharacterStat::_ZtlSecurePut_nMP
__SUB_CLASS(000F4B60, __fastcall, 121462,  GW_CharacterStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x79]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x81],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecurePut_nLevelUpType
__SUB_CLASS(000F4BE0, __fastcall, 126179,  GW_ItemSlotEquipBase, unsigned char, unsigned char) {
__asm {

 Block0:
	push ebx
	push esi
	mov bl,dl
	mov esi,ecx
	lea edx,[esi+0x8C]
	mov cl,bl
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x8E],eax
	pop esi
	mov al,bl
	pop ebx
	ret
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nLevel
__SUB_CLASS(000F4CF0, __fastcall, 122606,  GW_ItemSlotPet, unsigned char, unsigned char) {
__asm {

 Block0:
	push ebx
	push esi
	mov bl,dl
	mov esi,ecx
	lea edx,[esi+0x35]
	mov cl,bl
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x37],eax
	pop esi
	mov al,bl
	pop ebx
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niDEX
__SUB_CLASS0(000F22D0, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18]
	push eax
	add ecx,0x14
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::SetItemNumber
__SUB_CLASS_THIS(000F6800, __thiscall, 113357,  GW_ItemSlotBundle, void, short) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0x28]
	call _ZtlSecureTearHelper<unsigned short>::call
	mov dword ptr [esi+0x2C],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotPet::_ZtlSecureGet_nLevel
__SUB_CLASS0(000F2570, __fastcall, 122604,  GW_ItemSlotPet, unsigned char) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x37]
	push eax
	add ecx,0x35
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBase::DumpString
__SUB_CLASS_THIS0(000F6B70, __thiscall, 121816,  GW_ItemSlotBase, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp],0
	mov dword ptr [eax],0
	pop ecx
	ret 4
}
}
// GW_ItemSlotBundle::BackwardUpdateCashItem
__SUB_CLASS_THIS(000F5630, __thiscall, 113364,  GW_ItemSlotBundle, void, GW_ItemSlotBase*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [eax+0x34]
	push ecx
	add eax,0x30
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x34],eax
	pop esi
	ret 4
}
}
// GW_ItemSlotBundle::RawDecode
_SUB_EXCEPTION_HANDLER(F87A0)
__SUB_CLASS_THIS(000F87A0, __thiscall, 113366,  GW_ItemSlotBundle, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F87A0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x1C]
	push edi
	call GW_ItemSlotBase::RawDecode
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x28]
	call _ZtlSecureTearHelper<unsigned short>::call
	mov dword ptr [esi+0x2C],eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esp+0x1C]
	push 0xD
	push ecx
	lea edx,[esi+0x40]
	push edx
	mov dword ptr [esp+0x20],0
	call dword ptr [ZImports::_lstrcpynA]
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<short>::call
	lea ecx,[esi+0xC]
	mov dword ptr [esi+0x34],eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block2

 Block1:
	cmp eax,0xE9
	jne Block3

 Block2:
	push 8
	add esi,0x38
	push esi
	mov ecx,edi
	call CInPacket::DecodeBuffer
	jmp Block4

 Block3:
	mov dword ptr [esi+0x38],0
	mov dword ptr [esi+0x3C],0

 Block4:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// GW_ItemSlotBase::IsCashItem
__SUB_CLASS_THIS0(0009C620, __thiscall, 76651,  GW_ItemSlotBase, int32_t) {
__asm {

 Block0:
	push offset _D_DB_DATE_20790101__36
	add ecx,0x20
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	xor ecx,ecx
	test eax,eax
	setl cl
	mov eax,ecx
	ret
}
}
// GW_ItemSlotEquip::GetItemGrade
__SUB_CLASS_THIS0(000F61F0, __thiscall, 66920,  GW_ItemSlotEquip, unsigned char) {
__asm {

 Block0:
	lea eax,[ecx+0x105]
	mov ecx,dword ptr [eax+2]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	and eax,3
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecureGet_niJump
__SUB_CLASS0(000F2470, __fastcall, 126180,  GW_ItemSlotEquipBase, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	push eax
	add ecx,0x7C
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotEquipBase::_ZtlSecurePut_nLevel
__SUB_CLASS(000F4C00, __fastcall, 126179,  GW_ItemSlotEquipBase, unsigned char, unsigned char) {
__asm {

 Block0:
	push ebx
	push esi
	mov bl,dl
	mov esi,ecx
	lea edx,[esi+0x92]
	mov cl,bl
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0x94],eax
	pop esi
	mov al,bl
	pop ebx
	ret
}
}
// GW_CharacterStat::_ZtlSecureGet_nHP
__SUB_CLASS0(0009C820, __fastcall, 121461,  GW_CharacterStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x69]
	push eax
	add ecx,0x61
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// GW_CharacterStat::_ZtlSecureGet_nJob
__SUB_CLASS0(0007D960, __fastcall, 121459,  GW_CharacterStat, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3D]
	push eax
	add ecx,0x39
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// GW_ItemSlotBundle::GetItemTitle
__SUB_CLASS_THIS0(000F7E10, __thiscall, 113358,  GW_ItemSlotBundle, ZXString<char>) {
__asm {

 Block0:
	push ecx
	add ecx,0x40
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [edi],0
	je Block4

 Block1:
	mov eax,ecx
	push esi
	lea esi,[eax+1]
	nop

 Block2:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	pop esi

 Block4:
	mov eax,edi
	pop edi
	pop ecx
	ret 4
}
}
// GW_ItemSlotBundle::GetLevel
__SUB_CLASS_THIS0(000F6710, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotEquip::GetIUCValue
__SUB_CLASS_THIS0(000F6210, __thiscall, 84855,  GW_ItemSlotEquip, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x101]
	push eax
	add ecx,0xF9
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,0xFF
	ret
}
}
// GW_ItemSlotPet::GetLevelUpType
__SUB_CLASS_THIS0(000F6990, __thiscall, 122614,  GW_ItemSlotPet, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// GW_ItemSlotPet::SetItemNumber
__SUB_CLASS_THIS(000F69C0, __thiscall, 122615,  GW_ItemSlotPet, void, short) {
__asm {

 Block0:
	ret 4
}
}
// GW_ItemSlotBundle::GetItemNumber
__SUB_CLASS_THIS0(000F67C0, __thiscall, 84845,  GW_ItemSlotBundle, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2C]
	push eax
	add ecx,0x28
	push ecx
	call _ZtlSecureFuseHelper<unsigned short>::call
	add esp,8
	movzx eax,ax
	ret
}
}
// GW_ItemSlotPet::_ZtlSecurePut_nAttribute
__SUB_CLASS(000F4D90, __fastcall, 122608,  GW_ItemSlotPet, short, short) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x6D]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x71],eax
	pop edi
	mov ax,si
	pop esi
	ret
}
}
// GW_ItemSlotEquip::SetProtected
__SUB_CLASS_THIS0(000F6250, __thiscall, 106607,  GW_ItemSlotEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD1]
	push eax
	lea ecx,[esi+0xCD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	or ax,1
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xCD]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD1],eax
	pop esi
	ret
}
}
