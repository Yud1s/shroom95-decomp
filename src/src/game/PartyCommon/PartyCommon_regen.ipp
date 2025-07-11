#include "regen.hpp"
// PartyCommon.ipp
#include "PartyCommon.hpp"

// ADVER_COMMON::CreateAdver
_SUB_EXCEPTION_HANDLER(2959E0)
__SUB(002959E0, __cdecl, 37632,  ZRef<ADVER_COMMON>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2959E0
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
	mov dword ptr [esp+0xC],0
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esi+4],0
	mov edi,dword ptr [esp+0x24]
	push edi
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x10],1
	call CPartyQuestInfoManager::IsPartyQuestID
	add esp,4
	test eax,eax
	je Block3

 Block1:
	push 0x104
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block6

 Block2:
	mov ecx,eax
	call PARTYADVER::_ctor_default
	jmp Block7

 Block3:
	push edi
	call CPartyQuestInfoManager::IsExpeditionQuestID
	add esp,4
	test eax,eax
	je Block8

 Block4:
	push 0x3D4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call EXPEDITION_ADVER::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	mov ecx,esi
	call ZRef<ADVER_COMMON>::op_assign_ptr

 Block8:
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
// PARTYADVER::GetMemberMax
__SUB_CLASS_THIS0(00294F30, __thiscall, 134198,  PARTYADVER, long) {
__asm {

 Block0:
	mov eax,6
	ret
}
}
// EXPEDITION_ADVER::Decode
_SUB_EXCEPTION_HANDLER(2951F0)
__SUB_CLASS_THIS(002951F0, __thiscall, 134217,  EXPEDITION_ADVER, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2951F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3D8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x3D4],eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3E4]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x3F4]
	mov esi,ecx
	lea ecx,[esp+0xC]
	call EXPEDITION_ADVER::_ctor_default
	push 0x3D4
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x3F4],0
	call CInPacket::DecodeBuffer
	push 0x3D
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esi+0x10]
	push edx
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0xC],eax
	lea edi,[esi+0x50]
	mov ecx,0xE1
	lea esi,[esp+0x5C]
	rep movsd
	mov ecx,dword ptr [esp+0x3E4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [esp+0x3D4]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x3E4
	ret 4
}
}
// EXPEDITION_ADVER::GetMemberMax
__SUB_CLASS_THIS0(00295600, __thiscall, 134220,  EXPEDITION_ADVER, long) {
__asm {

 Block0:
	add ecx,0x50
	jmp  EXPEDITION::GetMemberLimit
}
}
// EXPEDITION_ADVER::GetBossID
__SUB_CLASS_THIS0(002959C0, __thiscall, 134221,  EXPEDITION_ADVER, unsigned long) {
__asm {

 Block0:
	add ecx,0x50
	jmp  EXPEDITION::GetMasterID
}
}
// EXPEDITION::GetMasterName
__SUB_CLASS_THIS0(00295710, __thiscall, 43198,  EXPEDITION, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+4],0
	push edi
	mov dword ptr [esp+8],0
	jl Block5

 Block1:
	mov edi,dword ptr [esi+4]
	call EXPEDITION::GetMaxPartyIndex
	cmp eax,edi
	jl Block5

 Block2:
	imul edi,0xB2
	lea ecx,[edi+esi+8]
	call PARTYMEMBER::GetMemberCount
	test eax,eax
	jg Block4

 Block3:
	mov esi,dword ptr [esp+0x10]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block4:
	mov eax,dword ptr [esi+4]
	mov edi,dword ptr [esp+0x10]
	imul eax,0xB2
	push edi
	lea ecx,[eax+esi+8]
	call PARTYMEMBER::GetBossName
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret 4

 Block5:
	mov eax,dword ptr [esp+0x10]
	pop edi
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 4
}
}
// EXPEDITION_ADVER::GetMasterID
__SUB_CLASS_THIS0(002959D0, __thiscall, 134221,  EXPEDITION_ADVER, unsigned long) {
__asm {

 Block0:
	add ecx,0x50
	jmp  EXPEDITION::GetMasterID
}
}
// EXPEDITION_ADVER::~EXPEDITION_ADVER
__SUB_CLASS_THIS0(00294F80, __thiscall, 134223,  EXPEDITION_ADVER, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// PARTYADVER::IsBossOnline
__SUB_CLASS_THIS0(00294F10, __thiscall, 134196,  PARTYADVER, int32_t) {
__asm {

 Block0:
	add ecx,0x50
	jmp  PARTYMEMBER::IsBossOnline
}
}
// EXPEDITION::GetPartyIndex
__SUB_CLASS_THIS(00295800, __thiscall, 43202,  EXPEDITION, long, unsigned long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov ebx,ecx
	xor edi,edi
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block6

 Block1:
	mov ebp,dword ptr [esp+0x14]
	lea esi,[ebx+8]

 Block2:
	xor eax,eax
	mov ecx,esi
	lea esp,[esp]

 Block3:
	cmp dword ptr [ecx],ebp
	je Block7

 Block4:
	inc eax
	add ecx,4
	cmp eax,6
	jl Block3

 Block5:
	mov ecx,ebx
	inc edi
	add esi,0xB2
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block2

 Block6:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	ret 4

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// PARTYADVER::Encode
__SUB_CLASS_THIS(00295530, __thiscall, 134194,  PARTYADVER, void, COutPacket&) {
__asm {

 Block0:
	push 0x104
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call COutPacket::EncodeBuffer
	ret 4
}
}
// EXPEDITION_ADVER::EXPEDITION_ADVER
__SUB_CLASS_THIS0(00295020, __thiscall, 134213,  EXPEDITION_ADVER, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call ADVER_COMMON::_ctor_default
	push 0x384
	lea eax,[esi+0x50]
	push 0
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset EXPEDITION_ADVER::`vftable'
	call _memset
	add esp,0xC
	mov eax,esi
	pop esi
	ret
}
}
// EXPEDITION_ADVER::GetMemberCount
__SUB_CLASS_THIS0(00294F70, __thiscall, 134220,  EXPEDITION_ADVER, long) {
__asm {

 Block0:
	add ecx,0x50
	jmp  EXPEDITION::GetMemberCount
}
}
// EXPEDITION::GetCharacterID
_SUB_EXCEPTION_HANDLER(295AA0)
__SUB_CLASS_THIS(00295AA0, __thiscall, 43204,  EXPEDITION, unsigned long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295AA0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block4

 Block1:
	lea esi,[ebp+8]

 Block2:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call PARTYMEMBER::GetCharacterID
	mov ebx,eax
	test ebx,ebx
	jne Block8

 Block3:
	mov ecx,ebp
	inc edi
	add esi,0xB2
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block2

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block8:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,ebx
	jmp Block7
}
}
// EXPEDITION_ADVER::GetBossName
__SUB_CLASS_THIS0(002959A0, __thiscall, 134219,  EXPEDITION_ADVER, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	add ecx,0x50
	mov dword ptr [esp+8],0
	call EXPEDITION::GetMasterName
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// PARTYADVER::GetBossID
__SUB_CLASS_THIS0(00294F40, __thiscall, 134199,  PARTYADVER, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xFE]
	ret
}
}
// EXPEDITION_ADVER::GetPartyMember
_SUB_EXCEPTION_HANDLER(295610)
__SUB_CLASS_THIS0(00295610, __thiscall, 134222,  EXPEDITION_ADVER, ZArray<PARTYMEMBER>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295610
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [edi],eax
	lea ecx,[esi+0x50]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],1
	call EXPEDITION::GetPartyCount
	mov ebx,eax
	sub ebx,1
	js Block6

 Block1:
	mov eax,ebx
	imul eax,0xB2
	lea ebp,[eax+esi+0x58]
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x28]

 Block4:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<PARTYMEMBER>::InsertBefore
	mov esi,ebp
	mov ecx,0x2C
	mov edi,eax
	rep movsd
	dec ebx
	sub ebp,0xB2
	movsw
	test ebx,ebx
	jge Block3

 Block5:
	mov eax,dword ptr [esp+0x28]
	jmp Block7

 Block6:
	mov eax,edi

 Block7:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// ADVER_COMMON::ADVER_COMMON
__SUB_CLASS_THIS0(00294F90, __thiscall, 37619,  ADVER_COMMON, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset ADVER_COMMON::`vftable'
	mov dword ptr [eax+0xC],ecx
	mov byte ptr [eax+0x10],cl
	ret
}
}
// PARTYADVER::GetPartyMember
_SUB_EXCEPTION_HANDLER(295570)
__SUB_CLASS_THIS0(00295570, __thiscall, 134200,  PARTYADVER, ZArray<PARTYMEMBER>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295570
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
	xor eax,eax
	mov dword ptr [esp+0x10],eax
	mov ebx,dword ptr [esp+0x24]
	mov dword ptr [ebx],eax
	push 0xFFFFFFFF
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],1
	call ZArray<PARTYMEMBER>::InsertBefore
	add esi,0x50
	mov edi,eax
	mov ecx,0x2C
	rep movsd
	movsw
	mov eax,ebx
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
// PARTYADVER::Decode
_SUB_EXCEPTION_HANDLER(295100)
__SUB_CLASS_THIS(00295100, __thiscall, 134195,  PARTYADVER, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295100
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x104],eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x114]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x124]
	mov esi,ecx
	lea ecx,[esp+0xC]
	call PARTYADVER::_ctor_default
	push 0x104
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x124],0
	call CInPacket::DecodeBuffer
	push 0x3D
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esi+0x10]
	push edx
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0xC],eax
	lea edi,[esi+0x50]
	mov ecx,0x2C
	lea esi,[esp+0x5C]
	rep movsd
	movsw
	mov ecx,dword ptr [esp+0x114]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [esp+0x104]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x114
	ret 4
}
}
// ADVER_COMMON::GetMemberCount
__SUB_CLASS_THIS0(00294ED0, __thiscall, 37627,  ADVER_COMMON, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	ret
}
}
// PARTYADVER::GetMemberCount
__SUB_CLASS_THIS0(00294F20, __thiscall, 134198,  PARTYADVER, long) {
__asm {

 Block0:
	add ecx,0x50
	jmp  PARTYMEMBER::GetMemberCount
}
}
// EXPEDITION::GetMemberCount
__SUB_CLASS_THIS0(00294EE0, __thiscall, 43200,  EXPEDITION, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	xor edi,edi
	lea esi,[ecx+8]
	lea ebx,[edi+5]
	jmp Block2

 Block2:
	mov ecx,esi
	call PARTYMEMBER::GetMemberCount
	add edi,eax
	add esi,0xB2
	sub ebx,1
	jne Block2

 Block3:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	ret
}
}
// EXPEDITION::GetMemberLimit
_SUB_EXCEPTION_HANDLER(2953F0)
__SUB_CLASS_THIS0(002953F0, __thiscall, 43200,  EXPEDITION, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2953F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	call CPartyQuestInfoManager::Get
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block2:
	mov eax,dword ptr [ecx+0x20]
	test eax,eax
	jg Block4

 Block3:
	xor eax,eax
	mov ebx,eax
	jmp Block7

 Block4:
	cmp eax,0x1E
	jge Block6

 Block5:
	mov ebx,eax
	jmp Block7

 Block6:
	mov ebx,0x1E

 Block7:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// EXPEDITION::IsMember
_SUB_EXCEPTION_HANDLER(295B70)
__SUB_CLASS_THIS(00295B70, __thiscall, 43205,  EXPEDITION, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295B70
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
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call EXPEDITION::GetPartyIndex_1
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esp+0x1C]
	setne cl
	mov dword ptr [esp+0x14],0xFFFFFFFF
	mov esi,ecx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// EXPEDITION_ADVER::Encode
__SUB_CLASS_THIS(002955E0, __thiscall, 134216,  EXPEDITION_ADVER, void, COutPacket&) {
__asm {

 Block0:
	push 0x3D4
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call COutPacket::EncodeBuffer
	ret 4
}
}
// PARTYADVER::~PARTYADVER
__SUB_CLASS_THIS0(00294FE0, __thiscall, 134201,  PARTYADVER, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// EXPEDITION_ADVER::IsBossOnline
__SUB_CLASS_THIS0(00294F50, __thiscall, 134218,  EXPEDITION_ADVER, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x54]
	imul eax,0xB2
	lea ecx,[eax+ecx+0x58]
	jmp  PARTYMEMBER::IsBossOnline
}
}
// ADVER_COMMON::GetBossID
__SUB_CLASS_THIS0(00294FB0, __thiscall, 37628,  ADVER_COMMON, unsigned long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// EXPEDITION::GetPartyIndex
_SUB_EXCEPTION_HANDLER(295860)
__SUB_CLASS_THIS(00295860, __thiscall, 43201,  EXPEDITION, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_295860
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
	mov dword ptr [esp+0x20],esi
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x1C],eax
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block12

 Block1:
	add esi,0x20
	mov dword ptr [esp+0x18],esi

 Block2:
	mov edi,dword ptr [esp+0x18]
	xor ebp,ebp

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test edi,edi
	je Block7

 Block4:
	mov eax,edi
	lea edx,[eax+1]

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block7:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	test esi,esi
	je Block9

 Block8:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block9:
	test ebx,ebx
	jne Block16

 Block10:
	inc ebp
	add edi,0xD
	cmp ebp,6
	jl Block3

 Block11:
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	add dword ptr [esp+0x18],0xB2
	inc esi
	mov dword ptr [esp+0x1C],esi
	call EXPEDITION::GetMaxPartyIndex
	cmp esi,eax
	jle Block2

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	or eax,0xFFFFFFFF

 Block15:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block16:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x1C]
	jmp Block15
}
}
// EXPEDITION::GetPartyCount
__SUB_CLASS_THIS0(002954E0, __thiscall, 43200,  EXPEDITION, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push edi
	mov ebx,ecx
	xor ebp,ebp
	xor edi,edi
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block9

 Block1:
	push esi
	lea esi,[ebx+8]

 Block2:
	xor eax,eax
	mov ecx,esi
	lea ebx,[ebx]

 Block3:
	cmp dword ptr [ecx],0
	jne Block6

 Block4:
	inc eax
	add ecx,4
	cmp eax,6
	jl Block3

 Block5:
	jmp Block7

 Block6:
	inc ebp

 Block7:
	mov ecx,ebx
	inc edi
	add esi,0xB2
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block2

 Block8:
	pop esi

 Block9:
	pop edi
	mov eax,ebp
	pop ebp
	pop ebx
	ret
}
}
// EXPEDITION::GetMasterID
__SUB_CLASS_THIS0(002957B0, __thiscall, 43199,  EXPEDITION, unsigned long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	cmp dword ptr [edi+4],0
	jl Block4

 Block1:
	mov esi,dword ptr [edi+4]
	call EXPEDITION::GetMaxPartyIndex
	cmp eax,esi
	jl Block4

 Block2:
	imul esi,0xB2
	lea ecx,[esi+edi+8]
	call PARTYMEMBER::GetMemberCount
	test eax,eax
	jle Block4

 Block3:
	mov eax,dword ptr [edi+4]
	imul eax,0xB2
	mov eax,dword ptr [eax+edi+0xB6]
	pop edi
	pop esi
	ret

 Block4:
	pop edi
	xor eax,eax
	pop esi
	ret
}
}
// PARTYADVER::PARTYADVER
__SUB_CLASS_THIS0(00294FF0, __thiscall, 134191,  PARTYADVER, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call ADVER_COMMON::_ctor_default
	push 0xB2
	lea eax,[esi+0x50]
	push 0
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset PARTYADVER::`vftable'
	call _memset
	add esp,0xC
	mov eax,esi
	pop esi
	ret
}
}
// EXPEDITION::Decode
__SUB_CLASS_THIS(00294FC0, __thiscall, 43197,  EXPEDITION, void, CInPacket&) {
__asm {

 Block0:
	push 0x384
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// PARTYADVER::GetBossName
__SUB_CLASS_THIS0(00295550, __thiscall, 134197,  PARTYADVER, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	add ecx,0x50
	mov dword ptr [esp+8],0
	call PARTYMEMBER::GetBossName
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// EXPEDITION::GetMaxPartyIndex
__SUB_CLASS_THIS0(002954B0, __thiscall, 43200,  EXPEDITION, long) {
__asm {

 Block0:
	call EXPEDITION::GetMemberLimit
	mov ecx,eax
	dec ecx
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test eax,eax
	jg Block2

 Block1:
	xor eax,eax
	ret

 Block2:
	cmp eax,4
	jl Block4

 Block3:
	mov eax,4

 Block4:
	ret
}
}
