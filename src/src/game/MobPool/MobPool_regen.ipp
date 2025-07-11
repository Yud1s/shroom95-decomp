#include "regen.hpp"
// MobPool.ipp
#include "MobPool.hpp"

// CMobPool::FindHitMobByChainlightning
__SUB_CLASS_THIS(00257770, __thiscall, 49444,  CMobPool, long, CMob*, CMob**, long, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x7C
	mov eax,dword ptr [ebp+8]
	push ebx
	push esi
	mov esi,1
	cmp dword ptr [ebp+0x10],esi
	push edi
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [edi],eax
	mov dword ptr [esp+0x10],esi
	jle Block21

 Block1:
	mov ebx,edi
	jmp Block4

 Block3:
	mov edi,dword ptr [ebp+0xC]

 Block4:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x20]
	push eax
	call edx
	cmp dword ptr [ebp+0x14],0
	je Block8

 Block5:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	mov ecx,edx
	sub ecx,dword ptr [ebp+0x18]
	sub eax,0x190
	cmp eax,ecx
	mov edi,ecx
	jl Block7

 Block6:
	mov edi,eax

 Block7:
	mov eax,edx
	jmp Block10

 Block8:
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [esp+0x20]
	lea ecx,[eax+4]
	lea eax,[esp+0x38]
	push eax
	call edx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebp+0x18]
	add eax,0x190
	add ecx,edx
	cmp ecx,eax
	jge Block10

 Block9:
	mov eax,ecx

 Block10:
	mov edx,dword ptr [esp+0x24]
	lea ecx,[edx+0x96]
	push ecx
	push eax
	add edx,0xFFFFFF6A
	push edx
	push edi
	lea edx,[esp+0x60]
	push edx
	call SetRect
	mov eax,dword ptr [ebx]
	xor edi,edi
	push edi
	push edi
	push edi
	push edi
	push edi
	push eax
	push 0xA
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	lea edx,[esp+0x70]
	push edx
	call CMobPool::FindHitMobInRect
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block21

 Block11:
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0xC],0x7FFFFFFF
	test eax,eax
	jle Block21

 Block12:
	xor eax,eax
	test esi,esi
	jle Block16

 Block13:
	mov ecx,dword ptr [esp+edi*4+0x60]
	nop

 Block14:
	mov edx,dword ptr [ebp+0xC]
	cmp dword ptr [edx+eax*4],ecx
	je Block18

 Block15:
	inc eax
	cmp eax,esi
	jl Block14

 Block16:
	mov eax,dword ptr [esp+edi*4+0x60]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x40]
	push eax
	call edx
	mov esi,dword ptr [esp+0x28]
	sub esi,dword ptr [eax]
	mov eax,dword ptr [ebx]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x48]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x2C]
	sub ecx,dword ptr [eax+4]
	mov eax,ecx
	imul eax,ecx
	mov ecx,esi
	imul ecx,esi
	mov esi,dword ptr [esp+0x10]
	add eax,ecx
	cmp eax,dword ptr [esp+0xC]
	jge Block18

 Block17:
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x14],edi

 Block18:
	inc edi
	cmp edi,dword ptr [esp+0x1C]
	jl Block12

 Block19:
	cmp dword ptr [esp+0xC],0x7FFFFFFF
	je Block21

 Block20:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+edx*4+0x60]
	inc esi
	mov dword ptr [ebx+4],eax
	add ebx,4
	cmp esi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],esi
	jl Block3

 Block21:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CMobPool::OnMobChangeController
__SUB_CLASS_THIS(00258D10, __thiscall, 49469,  CMobPool, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov ebp,ecx
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebx,al
	test ebx,ebx
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CClientOptMan>::ms_pInstance]
	push 2
	call CClientOptMan::GetOpt
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode4
	mov dword ptr [esp+0x10],eax

 Block3:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	test ebx,ebx
	je Block12

 Block4:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	push esi
	push eax
	push edi
	push ebx
	mov ecx,ebp
	call CMobPool::SetLocalMob
	mov ecx,dword ptr [TSingleton<CClientOptMan>::ms_pInstance]
	push 2
	call CClientOptMan::GetOpt
	test eax,eax
	je Block13

 Block5:
	push edi
	mov ecx,ebp
	call CMobPool::GetMob
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call CMob::GetActiveVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	lea esi,[eax-0xC]
	jmp Block8

 Block7:
	xor esi,esi

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	test esi,esi
	je Block13

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x18]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CVecCtrlMob::SetMoveRandManSeed
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block12:
	push edi
	mov ecx,ebp
	call CMobPool::SetRemoteMob

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CMobPool::CheckMobInTrapezoid
__SUB_CLASS_THIS(00255F80, __thiscall, 49458,  CMobPool, int32_t, long, long, long, long, long, CMob*) {
__asm {

 Block0:
	sub esp,0x30
	push ebx
	mov ebx,dword ptr [esp+0x40]
	push ebp
	push esi
	mov esi,dword ptr [esp+0x44]
	xor eax,eax
	cmp esi,ebx
	setg al
	push edi
	push 1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [esp+0x50],eax
	call CMob::GetBodyRect
	mov eax,dword ptr [esp+0x44]
	mov edi,esi
	sub edi,eax
	sub eax,esi
	mov ebp,eax

 Block1:
	mov ecx,dword ptr [esp+0x48]
	xor eax,eax
	test ecx,ecx
	je Block3

 Block2:
	cmp esi,ebx
	setg al
	jmp Block4

 Block3:
	cmp esi,ebx
	setl al

 Block4:
	test eax,eax
	je Block13

 Block5:
	test ecx,ecx
	je Block9

 Block6:
	mov dword ptr [esp+0x18],esi
	mov eax,ebp
	sub esi,0x14
	add ebp,0x14
	sub edi,0x14
	cmp ebx,esi
	jge Block8

 Block7:
	mov dword ptr [esp+0x10],esi
	jmp Block11

 Block8:
	mov dword ptr [esp+0x10],ebx
	jmp Block11

 Block9:
	mov dword ptr [esp+0x10],esi
	add esi,0x14
	mov eax,edi
	sub ebp,0x14
	add edi,0x14
	cmp esi,ebx
	mov dword ptr [esp+0x18],esi
	jl Block11

 Block10:
	mov dword ptr [esp+0x18],ebx

 Block11:
	cdq
	idiv dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x50]
	mov edx,ecx
	sub edx,eax
	add eax,ecx
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x18],edx
	push ecx
	lea edx,[esp+0x38]
	push edx
	call IntersectRect
	test eax,eax
	je Block1

 Block12:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x30
	ret 0x18

 Block13:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x30
	ret 0x18
}
}
// CMobPool::FindHitMobInRect
_SUB_EXCEPTION_HANDLER(257530)
__SUB_CLASS_THIS(00257530, __thiscall, 49438,  CMobPool, long, const tagRECT&, CMob**, long, CMob*, long, long, unsigned long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_257530
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
	mov ecx,dword ptr [ecx+0x28]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x20],ecx
	cmp ecx,ebp
	je Block27

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,dword ptr [esp+0x5C]
	jge Block27

 Block2:
	lea ecx,[esp+0x20]
	push ecx
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	mov edx,dword ptr [esi+0x118]
	push edx
	lea eax,[esi+0x110]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block26

 Block3:
	mov ecx,dword ptr [esi+0x47C]
	push ecx
	lea edx,[esi+0x474]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block26

 Block4:
	mov edi,dword ptr [esp+0x60]
	cmp edi,ebp
	je Block6

 Block5:
	mov eax,dword ptr [esi+0x170]
	push eax
	lea ecx,[esi+0x168]
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [edi+0x170]
	push edx
	add edi,0x168
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,0x10
	cmp ebx,eax
	je Block26

 Block6:
	mov edi,dword ptr [esp+0x64]
	cmp edi,ebp
	je Block8

 Block7:
	mov eax,dword ptr [esi+0x170]
	push eax
	lea ecx,[esi+0x168]
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,edi
	jne Block26

 Block8:
	mov edi,dword ptr [esp+0x6C]
	cmp edi,ebp
	je Block10

 Block9:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp edi,eax
	jne Block26

 Block10:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],ebp
	je Block12

 Block11:
	cmp dword ptr [esp+0x74],ebp
	je Block26

 Block12:
	mov ecx,esi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block26

 Block13:
	mov ecx,esi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block26

 Block14:
	cmp dword ptr [esp+0x70],ebp
	jne Block16

 Block15:
	cmp dword ptr [esi+0x310],ebp
	jne Block26

 Block16:
	mov dword ptr [esp+0x14],ebp
	push 1
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x54],ebp
	call CMob::GetMultiBodyRect
	push 1
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call CMob::GetBodyRect
	push 0xFFFFFFFF
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	call ZArray<tagRECT>::Insert
	xor ebx,ebx
	lea esp,[esp]

 Block17:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block25

 Block18:
	cmp ebx,dword ptr [eax-4]
	jae Block25

 Block19:
	lea edi,[eax+ebp]
	push edi
	call IsRectEmpty
	test eax,eax
	jne Block21

 Block20:
	mov ecx,dword ptr [esp+0x54]
	push ecx
	push edi
	lea edx,[esp+0x3C]
	push edx
	call IntersectRect
	test eax,eax
	jne Block22

 Block21:
	inc ebx
	add ebp,0x10
	jmp Block17

 Block22:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [ecx+eax*4],esi
	inc eax
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block25

 Block23:
	cmp dword ptr [esi+0x238],eax
	jne Block25

 Block24:
	inc dword ptr [esp+0x1C]

 Block25:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	xor ebp,ebp

 Block26:
	cmp dword ptr [esp+0x20],ebp
	jne Block1

 Block27:
	mov eax,dword ptr [esp+0x1C]
	shl eax,0x10
	or eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x24
}
}
// CMobPool::FindBossMob
__SUB_CLASS_THIS0(00256570, __thiscall, 49456,  CMobPool, CMob*) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x28]
	push esi
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block6

 Block1:
	lea ecx,[ecx]

 Block2:
	lea eax,[esp+4]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,0xC
	cmp eax,0x98967F
	je Block5

 Block3:
	cmp eax,0x8DE8F8
	je Block5

 Block4:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x6C]
	push edx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block7

 Block5:
	cmp dword ptr [esp+4],0
	jne Block2

 Block6:
	xor eax,eax
	pop esi
	pop ecx
	ret

 Block7:
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
// CMobPool::FindHitDazzledMobInRect
_SUB_EXCEPTION_HANDLER(2581B0)
__SUB_CLASS_THIS(002581B0, __thiscall, 49442,  CMobPool, long, const tagRECT&, CMob**, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2581B0
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
	mov ecx,dword ptr [ecx+0x28]
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x1C],ecx
	cmp ecx,ebx
	je Block16

 Block1:
	mov edi,edi

 Block2:
	cmp esi,dword ptr [esp+0x58]
	jge Block16

 Block3:
	lea eax,[esp+0x1C]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov edi,dword ptr [eax+4]
	mov ecx,dword ptr [edi+0x118]
	push ecx
	lea edx,[edi+0x110]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block15

 Block4:
	mov eax,dword ptr [edi+0x47C]
	push eax
	lea ecx,[edi+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block15

 Block5:
	cmp dword ptr [edi+0x310],ebx
	je Block15

 Block6:
	mov dword ptr [esp+0x14],ebx
	push 1
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x50],ebx
	call CMob::GetMultiBodyRect
	push 1
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CMob::GetBodyRect
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	xor ebp,ebp
	jmp Block8

 Block8:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block14

 Block9:
	cmp ebx,dword ptr [eax-4]
	jae Block14

 Block10:
	lea esi,[eax+ebp]
	push esi
	call IsRectEmpty
	test eax,eax
	jne Block12

 Block11:
	mov eax,dword ptr [esp+0x50]
	push eax
	push esi
	lea ecx,[esp+0x38]
	push ecx
	call IntersectRect
	test eax,eax
	jne Block13

 Block12:
	inc ebx
	add ebp,0x10
	jmp Block8

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [edx+eax*4],edi
	inc eax
	mov dword ptr [esp+0x18],eax

 Block14:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	mov esi,dword ptr [esp+0x18]
	xor ebx,ebx

 Block15:
	cmp dword ptr [esp+0x1C],ebx
	jne Block2

 Block16:
	mov eax,esi
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0xC
}
}
// CMobPool::OnMobPacket
__SUB_CLASS_THIS(002570B0, __thiscall, 49465,  CMobPool, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode4
	push eax
	mov ecx,edi
	call CMobPool::GetMob
	mov ecx,eax
	test ecx,ecx
	je Block24

 Block1:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x131
	jne Block3

 Block2:
	call CMob::OnEscortStopEndPermmision
	pop edi
	pop esi
	ret 8

 Block3:
	add eax,0xFFFFFEE1
	cmp eax,0x16
	ja Block24

 Block4:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block6
cmp EAX, 2
je Block24
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8
cmp EAX, 5
je Block15
cmp EAX, 6
je Block9
cmp EAX, 7
je Block10
cmp EAX, 8
je Block14
cmp EAX, 9
je Block24
cmp EAX, 10
je Block24
cmp EAX, 11
je Block11
cmp EAX, 12
je Block12
cmp EAX, 13
je Block13
cmp EAX, 14
je Block17
cmp EAX, 15
je Block23
cmp EAX, 16
je Block18
cmp EAX, 17
je Block19
cmp EAX, 18
je Block24
cmp EAX, 19
je Block20
cmp EAX, 20
je Block21
cmp EAX, 21
je Block22
cmp EAX, 22
je Block16


 Block5:
	push esi
	call CMob::OnMove
	pop edi
	pop esi
	ret 8

 Block6:
	push esi
	call CMob::OnCtrlAck
	pop edi
	pop esi
	ret 8

 Block7:
	push esi
	call CMob::OnStatSet
	pop edi
	pop esi
	ret 8

 Block8:
	push esi
	call CMob::OnStatReset
	pop edi
	pop esi
	ret 8

 Block9:
	push esi
	call CMob::OnAffected
	pop edi
	pop esi
	ret 8

 Block10:
	push esi
	call CMob::OnDamaged
	pop edi
	pop esi
	ret 8

 Block11:
	push esi
	call CMob::OnHPIndicator
	pop edi
	pop esi
	ret 8

 Block12:
	push esi
	call CMob::OnCatchEffect
	pop edi
	pop esi
	ret 8

 Block13:
	push esi
	call CMob::OnEffectByItem
	pop edi
	pop esi
	ret 8

 Block14:
	push esi
	call CMob::OnSpecialEffectBySkill
	pop edi
	pop esi
	ret 8

 Block15:
	push esi
	call CMob::OnSuspendReset
	pop edi
	pop esi
	ret 8

 Block16:
	push esi
	call CMob::OnMobAttackedByMob
	pop edi
	pop esi
	ret 8

 Block17:
	push esi
	call CMob::OnMobSpeaking
	pop edi
	pop esi
	ret 8

 Block18:
	push esi
	call CMob::OnMobSkillDelay
	pop edi
	pop esi
	ret 8

 Block19:
	push esi
	call CMob::OnEscortFullPath
	pop edi
	pop esi
	ret 8

 Block20:
	push esi
	call CMob::OnEscortStopSay
	pop edi
	pop esi
	ret 8

 Block21:
	push esi
	call CMob::OnEscortReturnBefore
	pop edi
	pop esi
	ret 8

 Block22:
	push esi
	call CMob::OnNextAttack
	pop edi
	pop esi
	ret 8

 Block23:
	push esi
	call CMob::OnIncMobChargeCount

 Block24:
	pop edi
	pop esi
	ret 8
}
}
// CMobPool::FindHitMobInManyRects
__SUB_CLASS_THIS(00256230, __thiscall, 49440,  CMobPool, long, const ZArray<tagRECT>&, CMob**, unsigned long*, long, long&) {
__asm {

 Block0:
	sub esp,0x28
	mov eax,dword ptr [esp+0x3C]
	push esi
	xor esi,esi
	mov dword ptr [eax],esi
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp+4],esi
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block23

 Block1:
	mov eax,dword ptr [esp+0x34]
	push ebp
	mov ebp,dword ptr [esp+0x3C]
	sub eax,ebp
	push ebx
	mov dword ptr [esp+0x3C],eax
	push edi

 Block2:
	cmp esi,dword ptr [esp+0x48]
	jge Block22

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<CMob>>::GetNext
	mov ebx,dword ptr [eax+4]
	mov edx,dword ptr [ebx+0x118]
	push edx
	lea eax,[ebx+0x110]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block21

 Block4:
	mov ecx,dword ptr [ebx+0x47C]
	push ecx
	lea edx,[ebx+0x474]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block21

 Block5:
	mov eax,dword ptr [ebx+0x174]
	cmp dword ptr [eax+0x208],0
	jne Block21

 Block6:
	mov ecx,ebx
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block21

 Block7:
	mov ecx,ebx
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block21

 Block8:
	cmp dword ptr [ebx+0x310],0
	jne Block21

 Block9:
	push 1
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	xor edi,edi
	call CMob::GetBodyRect
	lea edx,[esp+0x18]
	push edx
	call IsRectEmpty
	test eax,eax
	jne Block21

 Block10:
	mov ecx,dword ptr [esp+0x3C]
	xor esi,esi
	call ZArray<tagRECT>::GetCount
	test eax,eax
	jbe Block16

 Block11:
	mov dword ptr [esp+0x44],esi

 Block12:
	cmp edi,0xF
	jge Block16

 Block13:
	mov eax,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	add eax,dword ptr [esp+0x44]
	lea ecx,[esp+0x18]
	push eax
	push ecx
	lea edx,[esp+0x30]
	push edx
	call IntersectRect
	test eax,eax
	je Block15

 Block14:
	mov ecx,esi
	mov eax,1
	shl eax,cl
	mov ecx,dword ptr [esp+0x40]
	or dword ptr [ebp],eax
	mov dword ptr [ecx+ebp],ebx
	inc edi

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	add dword ptr [esp+0x44],0x10
	inc esi
	call ZArray<tagRECT>::GetCount
	cmp esi,eax
	jb Block12

 Block16:
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [ecx]
	cmp eax,edi
	jge Block18

 Block17:
	mov eax,edi

 Block18:
	xor edx,edx
	test eax,eax
	setle dl
	dec edx
	and eax,edx
	mov dword ptr [ecx],eax
	test edi,edi
	je Block20

 Block19:
	inc dword ptr [esp+0x10]
	add ebp,4

 Block20:
	mov esi,dword ptr [esp+0x10]

 Block21:
	cmp dword ptr [esp+0x14],0
	jne Block2

 Block22:
	pop edi
	pop ebx
	pop ebp

 Block23:
	mov eax,esi
	pop esi
	add esp,0x28
	ret 0x14
}
}
// CMobPool::~CMobPool
_SUB_EXCEPTION_HANDLER(256C50)
__SUB_CLASS_THIS0(00256C50, __thiscall, 49435,  CMobPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_256C50
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
	int 3// TODO: 	mov dword ptr [esi],offset CMobPool::`vftable'
	lea edi,[esi+0x64]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x58]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x1C],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob>>::`vftable'
	call ZList<ZRef<CMob>>::RemoveAll
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x1C],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob>>::`vftable'
	call ZList<ZRef<CMob>>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x1C],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob>>::`vftable'
	call ZList<ZRef<CMob>>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x1C],bl
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CMobPool>::ms_pInstance],ebx
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
// CMobPool::CancelChaseTarget
__SUB_CLASS_THIS(002565E0, __thiscall, 49467,  CMobPool, void, CMob*) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block16

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi

 Block2:
	lea eax,[esp+0xC]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov ecx,edi
	call CMob::IsActive
	test eax,eax
	je Block14

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CMob::GetActiveVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block4:
	lea esi,[eax-0xC]
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	test esi,esi
	je Block14

 Block9:
	test ebx,ebx
	je Block11

 Block10:
	lea eax,[ebx+4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	cmp dword ptr [esi+0x300],eax
	jne Block14

 Block13:
	push 0
	push 0
	push 0
	mov ecx,edi
	call CMob::ChaseTarget

 Block14:
	cmp dword ptr [esp+0xC],0
	jne Block2

 Block15:
	pop edi
	pop esi
	pop ebx

 Block16:
	pop ecx
	ret 4
}
}
// CMobPool::ResetGuidedMob
__SUB_CLASS_THIS(002572E0, __thiscall, 49464,  CMobPool, void, long, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	call CMobPool::GetMob
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CMob::ResetGuided

 Block2:
	ret 8
}
}
// CMobPool::FindHitMobInTrapezoid_Plural
_SUB_EXCEPTION_HANDLER(257AA0)
__SUB_CLASS_THIS(00257AA0, __thiscall, 49448,  CMobPool, long, long, long, long, long, long, ZArray<ZRef<CMob> >&, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_257AA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [ecx+0x28]
	mov ebx,dword ptr [ebp+0x1C]
	xor edi,edi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block44

 Block1:
	mov ecx,ebx
	call ZArray<ZRef<CMob>>::GetCount
	cmp eax,dword ptr [ebp+0x20]
	jae Block44

 Block2:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x30],esi
	cmp esi,edi
	je Block4

 Block3:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov edx,dword ptr [esi+0x118]
	push edx
	lea eax,[esi+0x110]
	push eax
	mov dword ptr [esp+0x70],edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block39

 Block5:
	mov ecx,dword ptr [esi+0x47C]
	push ecx
	lea edx,[esi+0x474]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block39

 Block6:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],edi
	je Block8

 Block7:
	push edi
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call ZRef<CMob>::_ReleaseRaw
	jmp Block42

 Block8:
	mov ecx,esi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block7

 Block9:
	cmp dword ptr [esi+0x310],edi
	jne Block7

 Block10:
	mov ecx,esi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block7

 Block11:
	mov ecx,dword ptr [ebp+0x18]
	mov edi,dword ptr [ebp+0x14]
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebp+0xC]
	push esi
	push ecx
	mov ecx,dword ptr [ebp+8]
	push edi
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	je Block38

 Block12:
	cmp dword ptr [ebp+0x24],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	je Block37

 Block13:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,edi
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	fld1
	mov eax,2
	fst qword ptr [esp+0x24]

 Block14:
	test al,1
	je Block16

 Block15:
	fmul st,st(1)

 Block16:
	shr eax,1
	je Block18

 Block17:
	fld st(1)
	fmulp st(2),st
	jmp Block14

 Block18:
	mov edx,dword ptr [esi]
	fstp st(1)
	mov edx,dword ptr [edx+0x10]
	fstp qword ptr [esp+0x24]
	lea eax,[esp+0x44]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp+8]
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	fld1
	mov eax,2

 Block19:
	test al,1
	je Block21

 Block20:
	fmul st,st(1)

 Block21:
	shr eax,1
	je Block23

 Block22:
	fld st(1)
	fmulp st(2),st
	jmp Block19

 Block23:
	fstp st(1)
	fadd qword ptr [esp+0x24]
	call __ftol2_sse
	mov ecx,ebx
	mov dword ptr [esp+0x24],eax
	call ZArray<ZRef<CMob>>::GetHeadPosition
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block37

 Block24:
	push eax
	mov ecx,ebx
	call ZArray<ZRef<CMob>>::IndexOf
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,ebx
	mov edi,eax
	call ZArray<ZRef<CMob>>::GetNext
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[eax+4]
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp+8]
	mov dword ptr [esp+0x20],eax
	fild dword ptr [esp+0x20]
	mov eax,2
	fld1
	fst qword ptr [esp+0x34]

 Block25:
	test al,1
	je Block27

 Block26:
	fmul st,st(1)

 Block27:
	shr eax,1
	je Block29

 Block28:
	fld st(1)
	fmulp st(2),st
	jmp Block25

 Block29:
	mov edx,dword ptr [esi]
	fstp st(1)
	mov edx,dword ptr [edx+0x10]
	fstp qword ptr [esp+0x34]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [ebp+0x14]
	mov dword ptr [esp+0x20],eax
	fild dword ptr [esp+0x20]
	mov eax,2
	fld1

 Block30:
	test al,1
	je Block32

 Block31:
	fmul st,st(1)

 Block32:
	shr eax,1
	je Block34

 Block33:
	fld st(1)
	fmulp st(2),st
	jmp Block30

 Block34:
	fstp st(1)
	fadd qword ptr [esp+0x34]
	call __ftol2_sse
	cmp dword ptr [esp+0x24],eax
	jge Block36

 Block35:
	mov dword ptr [esp+0x14],edi

 Block36:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block24

 Block37:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call ZArray<ZRef<CMob>>::Insert

 Block38:
	push 0
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [esp+0x30],0
	xor edi,edi
	jmp Block43

 Block39:
	add esi,8
	lea eax,[esi+4]
	push eax
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block42

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block42:
	mov dword ptr [esp+0x30],edi

 Block43:
	cmp dword ptr [esp+0x18],edi
	jne Block1

 Block44:
	mov eax,dword ptr [ebx]
	cmp eax,edi
	jne Block46

 Block45:
	xor eax,eax
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x20

 Block46:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x20
}
}
// CMobPool::Update
_SUB_EXCEPTION_HANDLER(258610)
__SUB_CLASS_THIS0(00258610, __thiscall, 49435,  CMobPool, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_258610
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
	mov dword ptr [esp+0x1C],ebp
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov dword ptr [esp+0x18],0
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	call CMapLoadable::UpdateObstacleInfo
	mov eax,dword ptr [ebp+0x28]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block7

 Block5:
	nop

 Block6:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	add esp,4
	call eax
	cmp dword ptr [esp+0x14],0
	jne Block6

 Block7:
	mov eax,dword ptr [ebp+0x3C]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block34

 Block8:
	lea ecx,[esp+0x14]
	push ecx
	mov edi,eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block10

 Block9:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	mov dword ptr [esp+0x48],0
	call edx
	mov ecx,esi
	call CMob::GetRemainDamageInfoDelay
	test eax,eax
	jle Block14

 Block11:
	add esi,8
	lea eax,[esi+4]
	push eax
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block33

 Block12:
	lea ecx,[esi+4]
	push ecx
	call ebx
	test esi,esi
	je Block33

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block33

 Block14:
	push edi
	lea ecx,[ebp+0x30]
	call ZList<ZRef<CMob>>::RemoveAt
	mov ecx,dword ptr [esi+0x470]
	push ecx
	lea edx,[esi+0x468]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,5
	ja Block20

 Block15:
	cmp EAX, 0
je Block16
cmp EAX, 1
je Block16
cmp EAX, 2
je Block17
cmp EAX, 3
je Block18
cmp EAX, 4
je Block19
cmp EAX, 5
je Block16


 Block16:
	mov ecx,esi
	call CMob::OnDie
	jmp Block20

 Block17:
	mov ecx,esi
	call CMob::OnBomb
	jmp Block20

 Block18:
	mov ecx,esi
	call CMob::OnDestructByMiss
	jmp Block20

 Block19:
	mov ecx,esi
	call CMob::OnSwallowed

 Block20:
	lea ecx,[ebp+0x44]
	call ZList<ZRef<CMob>>::AddTail_
	mov edi,eax
	lea ebp,[esi+8]
	lea eax,[ebp+4]
	push eax
	call ebx
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block29

 Block21:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block22:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block24

 Block23:
	add eax,8
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	add eax,4
	push eax
	call ebx
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block28

 Block26:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block28

 Block27:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block28:
	mov dword ptr [edi+4],0

 Block29:
	lea ecx,[ebp+4]
	push ecx
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	lea edx,[ebp+4]
	push edx
	call ebx
	test ebp,ebp
	je Block32

 Block31:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block32:
	mov ebp,dword ptr [esp+0x1C]

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0
	test eax,eax
	jne Block8

 Block34:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block60

 Block35:
	mov ebx,dword ptr [esp+0x30]

 Block36:
	mov esi,eax
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x38],edi
	test edi,edi
	je Block38

 Block37:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	mov ecx,edi
	mov dword ptr [esp+0x48],1
	call eax
	mov ecx,dword ptr [edi+0x3E4]
	push ecx
	lea edx,[edi+0x3DC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block42

 Block39:
	lea esi,[edi+8]
	lea eax,[esi+4]
	push eax
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block40:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block59

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block59

 Block42:
	push esi
	lea ecx,[ebp+0x44]
	call ZList<ZRef<CMob>>::RemoveAt
	mov eax,dword ptr [edi+0x4A4]
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block56

 Block43:
	mov edi,edi

 Block44:
	lea ecx,[esp+0x20]
	push ecx
	call ZList<unsigned long>::GetNext
	mov edx,dword ptr [eax]
	add esp,4
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],edx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block46

 Block45:
	mov eax,dword ptr [esp+0x28]
	jmp Block47

 Block46:
	xor ebx,ebx
	or dword ptr [esp+0x18],1
	mov dword ptr [esp+0x30],ebx
	lea eax,[esp+0x2C]

 Block47:
	test byte ptr [esp+0x18],1
	mov ebp,dword ptr [eax+4]
	je Block53

 Block48:
	and dword ptr [esp+0x18],0xFFFFFFFE
	test ebx,ebx
	je Block53

 Block49:
	lea esi,[ebx+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block52

 Block50:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block52:
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx

 Block53:
	test ebp,ebp
	je Block55

 Block54:
	mov ecx,ebp
	call CMob::OnRevive

 Block55:
	cmp dword ptr [esp+0x20],0
	mov ebp,dword ptr [esp+0x1C]
	jne Block44

 Block56:
	lea esi,[edi+8]
	lea ecx,[esi+4]
	push ecx
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block57:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block59

 Block58:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0
	test eax,eax
	jne Block36

 Block60:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CMobPool::SetLocalMob
_SUB_EXCEPTION_HANDLER(258490)
__SUB_CLASS_THIS(00258490, __thiscall, 49471,  CMobPool, void, long, unsigned long, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_258490
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
	mov eax,dword ptr [esp+0x34]
	push eax
	call CMobPool::GetMob
	mov edi,dword ptr [esp+0x3C]
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode4
	test esi,esi
	jne Block13

 Block1:
	push eax
	call CMobTemplate::GetMobTemplate
	push eax
	call CreateMob
	mov esi,eax
	add esp,8
	test esi,esi
	je Block12

 Block2:
	lea edi,[esi+8]
	test edi,edi
	je Block12

 Block3:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x1C],edi
	test edi,edi
	je Block5

 Block4:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[ebp+0x1C]
	mov dword ptr [esp+0x28],0
	call ZList<ZRef<CMob>>::AddTail_
	mov ebx,eax
	test edi,edi
	je Block7

 Block6:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	cmp dword ptr [ebx+4],0
	je Block9

 Block8:
	push 0
	mov ecx,ebx
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block9:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[ebp+4]
	mov dword ptr [ebx+4],edi
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::Insert
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test edi,edi
	je Block11

 Block10:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CMob>::_ReleaseRaw

 Block11:
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x3C]
	push edx
	push edi
	mov ecx,esi
	call CMob::SetTemporaryStat
	mov eax,dword ptr [esp+0x34]
	push edi
	push eax
	mov ecx,esi
	call CMob::Init
	jmp Block14

 Block12:
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	jmp Block5

 Block13:
	mov ecx,dword ptr [esp+0x38]
	push ecx
	push edi
	mov ecx,esi
	call CMob::SetTemporaryStat

 Block14:
	mov edi,1
	push edi
	mov ecx,esi
	call CMob::SetActive
	mov edx,dword ptr [esi+0x174]
	cmp dword ptr [edx+0x234],edi
	jne Block16

 Block15:
	mov ecx,esi
	call CMob::SendRequestEscortPath

 Block16:
	cmp dword ptr [esp+0x30],edi
	jle Block21

 Block17:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block19

 Block18:
	add eax,4
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push 0
	push eax
	push edi
	mov ecx,esi
	call CMob::ChaseTarget

 Block21:
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
// CMobPool::SetRemoteMob
__SUB_CLASS_THIS(00256D20, __thiscall, 49472,  CMobPool, void, unsigned long) {
__asm {

 Block0:
	push ecx
	push ebx
	push edi
	mov edi,ecx
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x14]
	lea ebx,[edi+4]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block8

 Block1:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [ebp+4]
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block7

 Block2:
	push 0
	mov ecx,esi
	call CMob::SetActive
	mov edx,dword ptr [esi+0x118]
	push edx
	lea eax,[esi+0x110]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block7

 Block3:
	cmp dword ptr [edi+0x5C],esi
	jne Block6

 Block4:
	cmp dword ptr [edi+0x5C],eax
	lea esi,[edi+0x58]
	je Block6

 Block5:
	push eax
	mov ecx,esi
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block6:
	push ebp
	lea ecx,[edi+0x1C]
	call ZList<ZRef<CMob>>::RemoveAt
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveKey

 Block7:
	pop esi
	pop ebp

 Block8:
	pop edi
	pop ebx
	pop ecx
	ret 4
}
}
// CMobPool::FindHitMobInTrapezoid
__SUB_CLASS_THIS(00257930, __thiscall, 49452,  CMobPool, CMob*, long, long, long, long, long, int32_t) {
__asm {

 Block0:
	sub esp,0x18
	cmp dword ptr [esp+0x30],0
	push esi
	push edi
	mov dword ptr [esp+0xC],ecx
	mov dword ptr [esp+8],0
	je Block8

 Block1:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov esi,eax
	mov ecx,dword ptr [esi+0x13E4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx
	test al,al
	jne Block3

 Block2:
	pop edi
	xor eax,eax
	pop esi
	add esp,0x18
	ret 0x18

 Block3:
	mov edi,dword ptr [esi+0x13E4]
	test edi,edi
	je Block2

 Block4:
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZFatalSection::Lock
	mov edi,dword ptr [edi+0x24]
	test esi,esi
	je Block7

 Block5:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block7

 Block6:
	mov dword ptr [esi],0

 Block7:
	mov dword ptr [esp+8],edi

 Block8:
	mov esi,dword ptr [esp+0x28]
	xor eax,eax
	push ebx
	mov ebx,dword ptr [esp+0x30]
	cmp esi,ebx
	setg al
	mov edi,esi
	push ebp
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [esp+0x2C]
	sub edi,eax
	sub eax,esi
	mov ebp,eax
	mov edi,edi

 Block9:
	mov ecx,dword ptr [esp+0x34]
	xor eax,eax
	test ecx,ecx
	je Block11

 Block10:
	cmp esi,ebx
	setg al
	jmp Block12

 Block11:
	cmp esi,ebx
	setl al

 Block12:
	test eax,eax
	je Block24

 Block13:
	test ecx,ecx
	je Block17

 Block14:
	mov dword ptr [esp+0x20],esi
	mov eax,ebp
	sub esi,0x14
	add ebp,0x14
	sub edi,0x14
	cmp ebx,esi
	jge Block16

 Block15:
	mov dword ptr [esp+0x18],esi
	jmp Block19

 Block16:
	mov dword ptr [esp+0x18],ebx
	jmp Block19

 Block17:
	mov dword ptr [esp+0x18],esi
	add esi,0x14
	mov eax,edi
	sub ebp,0x14
	add edi,0x14
	cmp esi,ebx
	mov dword ptr [esp+0x20],esi
	jl Block19

 Block18:
	mov dword ptr [esp+0x20],ebx

 Block19:
	cdq
	idiv dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x38]
	push 0
	mov edx,ecx
	push 0
	push 0
	push 0
	sub edx,eax
	add eax,ecx
	cmp dword ptr [esp+0x50],0
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x34],eax
	je Block21

 Block20:
	mov eax,dword ptr [esp+0x20]
	push eax
	push 0
	push 1
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	jmp Block22

 Block21:
	push 0
	push 0
	push 1
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x38]
	push ecx

 Block22:
	mov ecx,dword ptr [esp+0x38]
	call CMobPool::FindHitMobInRect
	test eax,eax
	je Block9

 Block23:
	mov eax,dword ptr [esp+0x30]
	pop ebp
	pop ebx
	pop edi
	pop esi
	add esp,0x18
	ret 0x18

 Block24:
	pop ebp
	pop ebx
	pop edi
	xor eax,eax
	pop esi
	add esp,0x18
	ret 0x18
}
}
// CMobPool::CMobPool
__SUB_CLASS_THIS0(00256BD0, __thiscall, 49433,  CMobPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CMobPool>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMobPool>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CMobPool::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	int 3// TODO: 	mov eax,offset ZList<ZRef<CMob>>::`vftable'
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],eax
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobPool::GetMob
__SUB_CLASS_THIS(000413F0, __thiscall, 49459,  CMobPool, CMob*, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push esi
	lea eax,[esp+8]
	push eax
	lea edx,[esp+0x18]
	xor ebx,ebx
	push edx
	add ecx,4
	mov dword ptr [esp+0x10],ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	jmp Block3

 Block2:
	mov dword ptr [esp+0xC],ebx
	lea eax,[esp+8]
	mov ebx,1

 Block3:
	mov esi,dword ptr [eax+4]
	test bl,1
	je Block6

 Block4:
	cmp dword ptr [esp+0xC],0
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CMob>::_ReleaseRaw

 Block6:
	mov eax,esi
	pop esi
	pop ebx
	add esp,8
	ret 4
}
}
// CMobPool::FindHitUndeadMobInRect
__SUB_CLASS_THIS(002563B0, __thiscall, 49442,  CMobPool, long, const tagRECT&, CMob**, long) {
__asm {

 Block0:
	sub esp,0x24
	mov ecx,dword ptr [ecx+0x28]
	push edi
	xor edi,edi
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block14

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x38]
	push ebp
	mov ebp,dword ptr [esp+0x38]
	push esi

 Block2:
	lea eax,[esp+0x10]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ecx,dword ptr [esi+0x118]
	push ecx
	lea edx,[esi+0x110]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block12

 Block3:
	mov eax,dword ptr [esi+0x47C]
	push eax
	lea ecx,[esi+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block12

 Block4:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x148]
	push edx
	add eax,0x140
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block12

 Block5:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],0
	jne Block12

 Block6:
	mov ecx,esi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block12

 Block7:
	mov ecx,esi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block12

 Block8:
	cmp dword ptr [esi+0x310],0
	jne Block12

 Block9:
	push 1
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CMob::GetBodyRect
	lea edx,[esp+0x14]
	push edx
	call IsRectEmpty
	test eax,eax
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call IntersectRect
	test eax,eax
	je Block12

 Block11:
	mov dword ptr [ebp+edi*4],esi
	inc edi
	cmp edi,ebx
	jge Block13

 Block12:
	cmp dword ptr [esp+0x10],0
	jne Block2

 Block13:
	pop esi
	pop ebp
	pop ebx
	mov eax,edi
	pop edi
	add esp,0x24
	ret 0xC

 Block14:
	mov eax,edi
	pop edi
	add esp,0x24
	ret 0xC
}
}
// CMobPool::FindHitMobInTriangle
_SUB_EXCEPTION_HANDLER(257DC0)
__SUB_CLASS_THIS(00257DC0, __thiscall, 49451,  CMobPool, long, NakedParam<ZRef<Triangle>>, CMob**, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_257DC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x70],0
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ecx
	test ecx,ecx
	je Block30

 Block1:
	jmp Block3

 Block3:
	cmp ebx,dword ptr [esp+0x84]
	jge Block30

 Block4:
	lea eax,[esp+0x20]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov edi,dword ptr [eax+4]
	mov ecx,dword ptr [edi+0x118]
	push ecx
	lea edx,[edi+0x110]
	push edx
	mov dword ptr [esp+0x28],edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block29

 Block5:
	mov eax,dword ptr [edi+0x47C]
	push eax
	lea ecx,[edi+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block29

 Block6:
	mov edx,dword ptr [edi+0x174]
	cmp dword ptr [edx+0x208],eax
	je Block8

 Block7:
	cmp dword ptr [esp+0x8C],eax
	je Block29

 Block8:
	mov ecx,edi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block29

 Block9:
	cmp dword ptr [esp+0x88],eax
	jne Block11

 Block10:
	cmp dword ptr [edi+0x310],eax
	jne Block29

 Block11:
	push 1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CMob::GetBodyRect
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x4C],eax
	mov eax,dword ptr [esp+0x34]
	xor ebx,ebx
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x18],ebx
	xor esi,esi
	lea ebp,[esp+0x48]

 Block12:
	mov ecx,dword ptr [esp+0x7C]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	push ebp
	call in_triangle_1
	add esp,0xC
	test eax,eax
	jne Block25

 Block15:
	lea eax,[esi+1]
	xor ecx,ecx
	mov dword ptr [esp+0x24],eax
	and eax,0x80000003
	jns Block17

 Block16:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block17:
	lea edi,[esp+eax*8+0x48]
	mov edi,edi

 Block18:
	lea esi,[ecx+1]
	mov eax,esi
	cdq
	mov ebx,3
	idiv ebx
	mov eax,dword ptr [esp+0x7C]
	lea edx,[eax+edx*8]
	push edx
	lea eax,[eax+ecx*8]
	push eax
	push edi
	push ebp
	call is_crossline
	add esp,0x10
	test eax,eax
	jne Block21

 Block19:
	mov ecx,esi
	cmp ecx,ebx
	jl Block18

 Block20:
	jmp Block22

 Block21:
	inc dword ptr [esp+0x18]

 Block22:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,1
	mov edi,dword ptr [esp+0x1C]
	jge Block27

 Block23:
	mov esi,dword ptr [esp+0x24]
	add ebp,8
	cmp esi,4
	jl Block12

 Block24:
	jmp Block26

 Block25:
	inc ebx

 Block26:
	cmp ebx,1
	jl Block28

 Block27:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr [ecx+ebx*4],edi
	inc ebx
	mov dword ptr [esp+0x14],ebx
	jmp Block29

 Block28:
	mov ebx,dword ptr [esp+0x14]

 Block29:
	cmp dword ptr [esp+0x20],0
	jne Block3

 Block30:
	mov edx,dword ptr [esp+0x7C]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x8C],esp
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	lea eax,[esp+0x30]
	push eax
	call GetTeslaCoilRect
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x44],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x48],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x4C],ecx
	mov edx,dword ptr [eax+0xC]
	xor ecx,ecx
	add esp,0xC
	mov dword ptr [esp+0x44],edx
	mov dword ptr [esp+0x8C],ecx
	xor esi,esi
	mov byte ptr [esp+0x70],1
	test ebx,ebx
	jle Block42

 Block33:
	xor ebp,ebp
	mov dword ptr [esp+0x84],ebp
	mov edi,dword ptr [esp+0x80]
	mov ecx,dword ptr [edi+esi*4]
	push 1
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0x78],2
	call CMob::GetMultiBodyRect
	push 1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [edi+esi*4]
	call CMob::GetBodyRect
	push 0xFFFFFFFF
	lea ecx,[esp+0x88]
	call ZArray<tagRECT>::InsertBefore
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],ecx
	xor edi,edi

 Block34:
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block40

 Block35:
	cmp edi,dword ptr [eax-4]
	jae Block40

 Block36:
	lea ebx,[eax+ebp]
	push ebx
	call IsRectEmpty
	test eax,eax
	jne Block38

 Block37:
	lea edx,[esp+0x38]
	push edx
	push ebx
	lea eax,[esp+0x50]
	push eax
	call IntersectRect
	test eax,eax
	jne Block39

 Block38:
	inc edi
	add ebp,0x10
	jmp Block34

 Block39:
	push 0xFFFFFFFF
	lea ecx,[esp+0x90]
	call ZArray<CMob *>::InsertBefore
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [ecx+esi*4]
	mov dword ptr [eax],edx

 Block40:
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0x70],1
	call ZArray<tagRECT>::RemoveAll
	mov ebx,dword ptr [esp+0x14]
	inc esi
	cmp esi,ebx
	jl Block33

 Block41:
	mov ecx,dword ptr [esp+0x8C]
	test ecx,ecx
	jne Block43

 Block42:
	xor eax,eax
	jmp Block44

 Block43:
	mov eax,dword ptr [ecx-4]

 Block44:
	cmp eax,ebx
	je Block51

 Block45:
	mov eax,dword ptr [esp+0x80]
	mov esi,ecx
	xor edx,edx
	sub esi,eax
	lea esp,[esp]

 Block46:
	test ecx,ecx
	je Block49

 Block47:
	cmp edx,dword ptr [ecx-4]
	jae Block50

 Block48:
	mov edi,dword ptr [esi+eax]
	mov dword ptr [eax],edi
	inc edx
	add eax,4
	jmp Block46

 Block49:
	mov dword ptr [esp+0x14],0
	jmp Block51

 Block50:
	mov eax,dword ptr [ecx-4]
	mov dword ptr [esp+0x14],eax

 Block51:
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x70],0
	call ZArray<CMob *>::RemoveAll
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test eax,eax
	je Block55

 Block52:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block55

 Block53:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block55

 Block54:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 0x18
}
}
// CMobPool::FindMob
__SUB_CLASS_THIS(002564D0, __thiscall, 49455,  CMobPool, CMob*, NakedParam<tagPOINT>) {
__asm {

 Block0:
	sub esp,0x14
	mov ecx,dword ptr [ecx+0x28]
	push esi
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block7

 Block1:
	nop

 Block2:
	lea eax,[esp+4]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ecx,dword ptr [esi+0x118]
	push ecx
	lea edx,[esi+0x110]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,0xC
	test eax,eax
	je Block6

 Block3:
	mov eax,dword ptr [esi+0x47C]
	push eax
	lea ecx,[esi+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block6

 Block4:
	push 1
	lea edx,[esp+0xC]
	push edx
	mov ecx,esi
	call CMob::GetBodyRect
	lea eax,[esp+8]
	push eax
	call IsRectEmpty
	test eax,eax
	jne Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	push edx
	lea eax,[esp+0x10]
	push eax
	call PtInRect
	test eax,eax
	jne Block8

 Block6:
	cmp dword ptr [esp+4],0
	jne Block2

 Block7:
	xor eax,eax
	pop esi
	add esp,0x14
	ret 8

 Block8:
	mov eax,esi
	pop esi
	add esp,0x14
	ret 8
}
}
// CMobPool::FindNearestMob
__SUB_CLASS_THIS(00258320, __thiscall, 49454,  CMobPool, CMob*, NakedParam<tagPOINT>, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	sub esp,0x40
	push ebx
	push esi
	mov esi,ecx
	lea ecx,[eax+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x50]
	lea edx,[ecx+0x12C]
	push edx
	add eax,0xFFFFFF9C
	push eax
	add ecx,0xFFFFFED4
	push ecx
	lea eax,[esp+0x20]
	push eax
	call SetRect
	cmp dword ptr [esp+0x54],0
	je Block2

 Block1:
	push 5
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call CMobPool::FindHitDazzledMobInRect
	jmp Block3

 Block2:
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xA
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	call CMobPool::FindHitMobInRect

 Block3:
	mov ebx,eax
	test ebx,ebx
	jne Block5

 Block4:
	pop esi
	pop ebx
	add esp,0x40
	ret 0xC

 Block5:
	push ebp
	xor ebp,ebp
	xor esi,esi
	push edi
	mov edi,0x7FFFFFFF
	test ebx,ebx
	jle Block11

 Block6:
	jmp Block8

 Block8:
	mov eax,dword ptr [esp+esi*4+0x28]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x10]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x10]
	sub ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [esp+0x14]
	sub eax,dword ptr [esp+0x58]
	mov edx,ecx
	imul eax,eax
	imul edx,ecx
	add eax,edx
	cmp eax,edi
	jge Block10

 Block9:
	mov edi,eax
	mov ebp,esi

 Block10:
	inc esi
	cmp esi,ebx
	jl Block8

 Block11:
	mov eax,dword ptr [esp+ebp*4+0x28]
	pop edi
	pop ebp
	pop esi
	pop ebx
	add esp,0x40
	ret 0xC
}
}
// CMobPool::FindBodyAttackMob
_SUB_EXCEPTION_HANDLER(256DB0)
__SUB_CLASS_THIS(00256DB0, __thiscall, 49453,  CMobPool, CMob*, const tagRECT&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_256DB0
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
	mov ecx,dword ptr [ecx+0x28]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ecx
	cmp ecx,ebp
	je Block40

 Block1:
	jmp Block3

 Block3:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov ebx,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],ebx
	cmp esi,ebp
	je Block5

 Block4:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block6

 Block5:
	xor esi,esi

 Block6:
	test byte ptr [esi+0x178],2
	jne Block9

 Block7:
	cmp dword ptr [esp+0x54],ebp
	je Block9

 Block8:
	mov ecx,dword ptr [ebx+0x170]
	push ecx
	lea edx,[ebx+0x168]
	push edx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x8F7112
	jne Block39

 Block9:
	mov eax,dword ptr [ebx+0x118]
	push eax
	lea ecx,[ebx+0x110]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block39

 Block10:
	mov edx,dword ptr [ebx+0x464]
	push edx
	lea eax,[ebx+0x45C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block39

 Block11:
	mov ecx,dword ptr [ebx+0x47C]
	push ecx
	lea edx,[ebx+0x474]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block39

 Block12:
	mov eax,dword ptr [ebx+0x174]
	mov ecx,dword ptr [eax+0x1AC]
	push ecx
	add eax,0x1A4
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block39

 Block13:
	mov eax,dword ptr [ebx+0x174]
	mov edx,dword ptr [eax+0x60]
	push edx
	add eax,0x58
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block39

 Block14:
	mov eax,dword ptr [ebx+0x174]
	cmp dword ptr [eax+0x208],ebp
	jne Block39

 Block15:
	mov ecx,ebx
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block39

 Block16:
	mov ecx,ebx
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block39

 Block17:
	cmp dword ptr [ebx+0x310],ebp
	jne Block39

 Block18:
	lea eax,[ebx+0x188]
	cmp eax,ebp
	je Block20

 Block19:
	cmp dword ptr [eax+0x1C4],ebp
	jg Block39

 Block20:
	mov dword ptr [esp+0x14],ebp
	push 1
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x50],ebp
	call CMob::GetAttackBodyRect
	xor edi,edi
	xor esi,esi
	jmp Block22

 Block22:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block27

 Block23:
	cmp edi,dword ptr [eax-4]
	jae Block27

 Block24:
	add eax,esi
	push eax
	call IsRectEmpty
	test eax,eax
	jne Block26

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x50]
	lea eax,[esi+edx]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	call IntersectRect
	test eax,eax
	jne Block42

 Block26:
	inc edi
	add esi,0x10
	jmp Block22

 Block27:
	push 1
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call CMob::GetBodyRect
	lea ecx,[esp+0x20]
	push ecx
	call IsRectEmpty
	test eax,eax
	je Block29

 Block28:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	jmp Block39

 Block29:
	mov edx,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[edx+ebp]
	cdq
	sub eax,edx
	mov ecx,eax
	lea eax,[esi+ebx]
	cdq
	sub eax,edx
	sar eax,1
	lea edx,[eax+1]
	add esi,0xFFFFFFF6
	sar ecx,1
	cmp edx,esi
	jge Block31

 Block30:
	mov edx,esi

 Block31:
	lea edi,[ecx+1]
	add ebp,0xFFFFFFE7
	cmp edi,ebp
	jl Block33

 Block32:
	mov ebp,edi

 Block33:
	dec eax
	lea edi,[ebx+0x1E]
	cmp edi,eax
	jl Block35

 Block34:
	mov edi,eax

 Block35:
	lea eax,[ecx-1]
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x19
	cmp ecx,eax
	jge Block37

 Block36:
	mov eax,ecx

 Block37:
	push edx
	push ebp
	push edi
	push eax
	lea eax,[esp+0x30]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x50]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	call IntersectRect
	mov dword ptr [esp+0x48],0xFFFFFFFF
	lea ecx,[esp+0x14]
	test eax,eax
	jne Block43

 Block38:
	call ZArray<tagRECT>::RemoveAll
	xor ebp,ebp

 Block39:
	cmp dword ptr [esp+0x18],ebp
	jne Block3

 Block40:
	xor eax,eax

 Block41:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8

 Block42:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	mov eax,ebx
	jmp Block41

 Block43:
	call ZArray<tagRECT>::RemoveAll
	mov eax,dword ptr [esp+0x1C]
	jmp Block41
}
}
// CMobPool::OnMobCrcKeyChanged
_SUB_EXCEPTION_HANDLER(257230)
__SUB_CLASS_THIS(00257230, __thiscall, 49469,  CMobPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_257230
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
	mov ecx,dword ptr [esp+0x28]
	call CInPacket::Decode4
	mov dword ptr [esi+0x6C],eax
	mov esi,dword ptr [esi+0x28]
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block3

 Block1:
	mov esi,1

 Block2:
	lea eax,[esp+0x28]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov eax,dword ptr [eax+4]
	add esp,4
	cmp dword ptr [esp+0x28],0
	mov dword ptr [eax+0x4FC],esi
	jne Block2

 Block3:
	push 0xBE
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CMobPool::OnPacket
// 658E7C
static uint8_t _SUB_258E00_LOOKUP_TABLE_0[14] = {
0, 1, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 
};
__SUB_CLASS_THIS(00258E00, __thiscall, 49465,  CMobPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x11C]
	cmp eax,0xD
	ja Block7

 Block1:
	movzx eax,byte ptr [eax+_SUB_258E00_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7


 Block2:
	mov edx,dword ptr [esp+8]
	push edx
	call CMobPool::OnMobEnterField

 Block3:
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	call CMobPool::OnMobLeaveField
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	call CMobPool::OnMobChangeController
	ret 8

 Block6:
	mov eax,dword ptr [esp+8]
	push eax
	call CMobPool::OnMobCrcKeyChanged
	ret 8

 Block7:
	lea eax,[edx-0x11F]
	cmp eax,0x16
	ja Block3

 Block8:
	mov dword ptr [esp+4],edx
	jmp  CMobPool::OnMobPacket
}
}
// CMobPool::LetMobChasePuppet
__SUB_CLASS_THIS(00256670, __thiscall, 49466,  CMobPool, void, int32_t, IVecCtrlOwner*) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block19

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	jmp Block3

 Block3:
	lea eax,[esp+0x10]
	push eax
	call ZList<ZRef<CMob>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov ecx,edi
	call CMob::IsActive
	test eax,eax
	je Block17

 Block4:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CMob::GetActiveVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block6

 Block5:
	lea esi,[eax-0xC]
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	test ebp,ebp
	je Block13

 Block10:
	test esi,esi
	je Block17

 Block11:
	cmp dword ptr [esi+0x300],0
	je Block13

 Block12:
	push 1
	push ebx
	push 1
	jmp Block16

 Block13:
	test esi,esi
	je Block17

 Block14:
	cmp dword ptr [esi+0x300],ebx
	jne Block17

 Block15:
	push 0
	push 0
	push 0

 Block16:
	mov ecx,edi
	call CMob::ChaseTarget

 Block17:
	cmp dword ptr [esp+0x10],0
	jne Block3

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block19:
	pop ecx
	ret 8
}
}
// CMobPool::OnMobEnterField
_SUB_EXCEPTION_HANDLER(2589E0)
__SUB_CLASS_THIS(002589E0, __thiscall, 49469,  CMobPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2589E0
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
	mov dword ptr [esp+0x18],ebx
	mov ebp,dword ptr [esp+0x38]
	mov ecx,ebp
	call CInPacket::Decode4
	mov esi,eax
	mov ecx,ebp
	mov dword ptr [esp+0x14],esi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,ebp
	mov dword ptr [esp+0x38],eax
	call CInPacket::Decode4
	push esi
	mov ecx,ebx
	mov edi,eax
	call CMobPool::GetMob
	mov esi,eax
	test esi,esi
	je Block2

 Block1:
	lea edx,[esi+0x110]
	mov ecx,1
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [esp+0x38]
	push ecx
	push ebp
	mov ecx,esi
	mov dword ptr [esi+0x118],eax
	call CMob::SetTemporaryStat
	jmp Block13

 Block2:
	push edi
	call CMobTemplate::GetMobTemplate
	push eax
	call CreateMob
	mov esi,eax
	add esp,8
	test esi,esi
	je Block16

 Block3:
	lea edi,[esi+8]
	test edi,edi
	je Block16

 Block4:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block6

 Block5:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	lea ecx,[ebx+0x1C]
	mov dword ptr [esp+0x30],0
	call ZList<ZRef<CMob>>::AddTail_
	mov ebx,eax
	test edi,edi
	je Block8

 Block7:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	cmp dword ptr [ebx+4],0
	je Block10

 Block9:
	push 0
	mov ecx,ebx
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block10:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	add ecx,4
	mov dword ptr [ebx+4],edi
	mov dword ptr [esp+0x24],ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::Insert
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test edi,edi
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CMob>::_ReleaseRaw

 Block12:
	lea edx,[esi+0x110]
	mov ecx,1
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x118],eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push ebp
	mov ecx,esi
	call CMob::SetTemporaryStat
	mov ecx,dword ptr [esp+0x14]
	push ebp
	push ecx
	mov ecx,esi
	call CMob::Init
	mov ebx,dword ptr [esp+0x18]

 Block13:
	mov edx,dword ptr [esi+0x174]
	cmp dword ptr [edx+0x208],0
	je Block15

 Block14:
	push esi
	lea ecx,[ebx+0x58]
	call ZRef<CMob>::op_assign_ptr
	call get_update_time
	mov dword ptr [ebx+0x60],eax

 Block15:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4

 Block16:
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	jmp Block6
}
}
// CMobPool::OnMobLeaveField
_SUB_EXCEPTION_HANDLER(258B90)
__SUB_CLASS_THIS(00258B90, __thiscall, 49469,  CMobPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_258B90
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
	mov esi,dword ptr [esp+0x34]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode1
	movzx ebx,al
	xor ebp,ebp
	cmp ebx,4
	jne Block2

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	mov ebp,eax

 Block2:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x18]
	lea ecx,[edi+4]
	push edx
	mov dword ptr [esp+0x20],ecx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block19

 Block3:
	mov eax,dword ptr [esp+0x34]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block5

 Block4:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov dword ptr [esp+0x2C],0
	test ebx,ebx
	jne Block10

 Block6:
	mov edx,dword ptr [esi+0x118]
	push edx
	lea ebx,[esi+0x110]
	push ebx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block8

 Block7:
	mov edx,ebx
	xor ecx,ecx
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x118],eax

 Block8:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block13

 Block9:
	jmp Block18

 Block10:
	cmp ebx,4
	jne Block12

 Block11:
	mov dword ptr [esi+0x5B4],ebp

 Block12:
	lea edx,[esi+0x468]
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x470],eax
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[edi+0x30]
	call ZList<ZRef<CMob>>::AddTail_Position

 Block13:
	push esi
	mov ecx,edi
	call CMobPool::CancelChaseTarget
	mov ecx,dword ptr [esi+0x174]
	cmp dword ptr [ecx+0x208],0
	je Block17

 Block14:
	cmp dword ptr [edi+0x5C],esi
	jne Block17

 Block15:
	cmp dword ptr [edi+0x5C],0
	lea esi,[edi+0x58]
	je Block17

 Block16:
	push 0
	mov ecx,esi
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block17:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnMobDead
	mov edx,dword ptr [esp+0x34]
	push edx
	lea ecx,[edi+0x1C]
	call ZList<ZRef<CMob>>::RemoveAt
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x14]
	push eax
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveKey

 Block18:
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CMob>::_ReleaseRaw

 Block19:
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
// in_triangle
__SUB(00256B80, __cdecl, 138153,  int32_t, tagPOINT&, NakedParam<ZRef<Triangle>>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push ebx
	push esi
	mov esi,dword ptr [esp+0x14]
	lea eax,[esi+0x10]
	push eax
	lea ecx,[esi+8]
	push ecx
	push esi
	push edx
	call in_triangle_0
	add esp,0x10
	mov ebx,eax
	test esi,esi
	je Block5

 Block1:
	push edi
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
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,ebx
	pop edi

 Block5:
	pop esi
	pop ebx
	ret
}
}
