#include "regen.hpp"
// NpcPool.ipp
#include "NpcPool.hpp"

// CNpcPool::OnPacket
// 679828
static uint8_t _SUB_279770_LOOKUP_TABLE_0[230] = {
0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 2, 3, 4, 
};
__SUB_CLASS_THIS(00279770, __thiscall, 50347,  CNpcPool, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x54]
	mov esi,ecx
	cmp eax,0xE5
	ja Block7

 Block1:
	movzx eax,byte ptr [eax+_SUB_279770_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block6
cmp EAX, 2
je Block2
cmp EAX, 3
je Block3
cmp EAX, 4
je Block4
cmp EAX, 5
je Block7


 Block2:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call CNpcPool::OnNpcEnterField
	pop edi
	pop esi
	ret 8

 Block3:
	mov edx,dword ptr [esp+0x10]
	push edx
	call CNpcPool::OnNpcLeaveField
	pop edi
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esp+0x10]
	push eax
	call CNpcPool::OnNpcChangeController
	pop edi
	pop esi
	ret 8

 Block5:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call CNpcPool::OnNpcImitateData
	pop edi
	pop esi
	ret 8

 Block6:
	mov edx,dword ptr [esp+0x10]
	push edx
	call CNpcPool::OnUpdateLimitedDisableInfo
	pop edi
	pop esi
	ret 8

 Block7:
	lea eax,[edi-0x13A]
	push ebx
	mov ebx,dword ptr [esp+0x14]
	cmp eax,2
	ja Block9

 Block8:
	push ebx
	push edi
	call CNpcPool::OnNpcPacket

 Block9:
	lea ecx,[edi-0x13D]
	test ecx,ecx
	ja Block11

 Block10:
	push ebx
	push edi
	mov ecx,esi
	call CNpcPool::OnNpcTemplatePacket

 Block11:
	pop ebx
	pop edi
	pop esi
	ret 8
}
}
// CNpcPool::FindNpcByTemplateID
__SUB_CLASS_THIS(00278BD0, __thiscall, 50351,  CNpcPool, CNpc*, unsigned long) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x28]
	push esi
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block5

 Block1:
	mov esi,dword ptr [esp+0xC]

 Block2:
	lea eax,[esp+4]
	push eax
	call ZList<CNpcPool::NPCENTRY>::GetNext
	mov eax,dword ptr [eax+0x10]
	add esp,4
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax+0xA8]
	cmp dword ptr [ecx],esi
	je Block6

 Block4:
	cmp dword ptr [esp+4],0
	jne Block2

 Block5:
	xor eax,eax

 Block6:
	pop esi
	pop ecx
	ret 4
}
}
// CNpcPool::FindNpc
__SUB_CLASS_THIS(00278900, __thiscall, 50344,  CNpcPool, CNpc*, const tagPOINT&, long) {
__asm {

 Block0:
	sub esp,0x50
	fild dword ptr [esp+0x58]
	push esi
	fld qword ptr [_D_DBSQR2]
	push edi
	xor edi,edi
	fdivr st,st(1)
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+8],edi
	call __ftol2_sse
	fmul qword ptr [__real_3fda7efa00000000]
	mov dword ptr [esp+0x18],eax
	call __ftol2_sse
	mov esi,dword ptr [esi+0x28]
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block18

 Block1:
	push ebx
	push ebp
	lea ebx,[ebx]

 Block2:
	lea eax,[esp+0x1C]
	push eax
	call ZList<CNpcPool::NPCENTRY>::GetNext
	mov esi,eax
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx+0xA8]
	mov eax,dword ptr [edx]
	push eax
	mov dword ptr [esp+0x2C],esi
	call CNpcTemplate::GetNpcTemplate
	add esp,8
	test eax,eax
	je Block16

 Block3:
	cmp dword ptr [eax+0x48],0
	jne Block16

 Block4:
	cmp dword ptr [eax+0xE4],0
	je Block6

 Block5:
	mov eax,dword ptr [esi+0x10]
	cmp dword ptr [eax+0x8C],0
	je Block16

 Block6:
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block10

 Block7:
	cmp dword ptr [ecx+0x138],0
	je Block16

 Block8:
	test ecx,ecx
	je Block10

 Block9:
	cmp dword ptr [ecx+0x150],0
	jne Block16

 Block10:
	call CNpc::GetDCRange
	mov ebp,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [eax]
	mov edi,dword ptr [eax+4]
	mov ebx,dword ptr [eax+8]
	mov eax,dword ptr [esp+0x68]
	lea edx,[ecx+ebp]
	push edx
	lea edx,[ebx+eax]
	push edx
	mov edx,edi
	sub edx,ecx
	push edx
	mov ecx,esi
	sub ecx,eax
	push ecx
	lea edx,[esp+0x40]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x68]
	lea ecx,[eax+ebp]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[ebx+ecx]
	push edx
	mov edx,edi
	sub edx,eax
	push edx
	mov eax,esi
	sub eax,ecx
	push eax
	lea ecx,[esp+0x50]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x20]
	add ebp,eax
	push ebp
	add ebx,eax
	push ebx
	sub edi,eax
	push edi
	sub esi,eax
	push esi
	lea edx,[esp+0x60]
	push edx
	call SetRect
	mov esi,dword ptr [esp+0x64]
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x38]
	push edx
	call PtInRect
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x48]
	push edx
	call PtInRect
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x58]
	push edx
	call PtInRect
	test eax,eax
	je Block16

 Block13:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov ecx,dword ptr [esi]
	sub ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [esi+4]
	sub eax,dword ptr [esp+0x2C]
	mov edx,ecx
	imul eax,eax
	imul edx,ecx
	add eax,edx
	cmp dword ptr [esp+0x10],0
	je Block15

 Block14:
	cmp eax,dword ptr [esp+0x18]
	jge Block16

 Block15:
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esp+0x10],eax

 Block16:
	cmp dword ptr [esp+0x1C],0
	jne Block2

 Block17:
	mov eax,dword ptr [esp+0x10]
	pop ebp
	pop ebx
	pop edi
	pop esi
	add esp,0x50
	ret 8

 Block18:
	mov eax,edi
	pop edi
	pop esi
	add esp,0x50
	ret 8
}
}
// CNpcPool::NPCENTRY::~NPCENTRY
_SUB_EXCEPTION_HANDLER(278FB0)
__SUB_CLASS_THIS0(00278FB0, __thiscall, 50426,  CNpcPool::NPCENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_278FB0
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
	mov edi,ecx
	mov dword ptr [esp+0xC],edi
	cmp dword ptr [edi+0x10],0
	lea esi,[edi+0xC]
	mov dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,esi
	call ZRef<CNpc>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block2:
	int 3// TODO: 	mov dword ptr [edi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CNpcPool::OnNpcChangeController
__SUB_CLASS_THIS(00279730, __thiscall, 50348,  CNpcPool, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode4
	mov ecx,edi
	test ebx,ebx
	jne Block2

 Block1:
	push eax
	call CNpcPool::SetRemoteNpc
	pop edi
	pop esi
	pop ebx
	ret 4

 Block2:
	push esi
	push eax
	call CNpcPool::SetLocalNpc
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CNpcPool::OnUpdateLimitedDisableInfo
__SUB_CLASS_THIS(00279210, __thiscall, 50348,  CNpcPool, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	add esi,0x38
	mov ecx,esi
	movzx ebx,al
	call ZMap<unsigned long, int, unsigned long>::RemoveAll
	test ebx,ebx
	jle Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x10],eax
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call ZMap<unsigned long, int, unsigned long>::Insert
	sub ebx,1
	jne Block1

 Block2:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CNpcPool::SetLocalNpc
__SUB_CLASS_THIS(00279440, __thiscall, 50349,  CNpcPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebp
	push edi
	mov edi,ecx
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0xC]
	lea ebp,[edi+4]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x10],eax
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block4

 Block1:
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block4

 Block2:
	mov al,byte ptr [ecx+0x18]
	test al,2
	jne Block5

 Block3:
	or al,2
	mov byte ptr [ecx+0x18],al
	mov ecx,dword ptr [ecx+0x10]
	push 1
	call CNpc::SetActive
	pop edi
	pop ebp
	add esp,8
	ret 8

 Block4:
	push ebx
	push esi
	lea ecx,[edi+0x1C]
	call ZList<CNpcPool::NPCENTRY>::AddTail_
	mov ebx,dword ptr [esp+0x20]
	mov ecx,ebx
	mov esi,eax
	call CInPacket::Decode4
	push 0
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	push eax
	call CreateNpc
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call ZRef<CNpc>::op_assign_ptr
	lea eax,[esi+0x14]
	mov byte ptr [esi+0x18],2
	mov ecx,dword ptr [edi+0x2C]
	push eax
	lea edx,[esp+0x20]
	mov dword ptr [eax],ecx
	push edx
	mov ecx,ebp
	call ZMap<unsigned long, __POSITION *, unsigned long>::Insert
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x10]
	push ebx
	push eax
	call CNpc::Init
	mov ecx,dword ptr [esi+0x10]
	push 1
	call CNpc::SetActive
	pop esi
	pop ebx

 Block5:
	pop edi
	pop ebp
	add esp,8
	ret 8
}
}
// CNpcPool::SetRemoteNpc
__SUB_CLASS_THIS(002791A0, __thiscall, 50350,  CNpcPool, void, unsigned long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	push edi
	mov edi,ecx
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0xC]
	lea ebx,[edi+4]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x10],eax
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block5

 Block2:
	mov al,byte ptr [esi+0x18]
	test al,2
	je Block5

 Block3:
	mov ecx,dword ptr [esi+0x10]
	and al,0xFD
	push 0
	mov byte ptr [esi+0x18],al
	call CNpc::SetActive
	cmp byte ptr [esi+0x18],0
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0x14]
	push eax
	lea ecx,[edi+0x1C]
	call ZList<CNpcPool::NPCENTRY>::RemoveAt
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveKey

 Block5:
	pop esi

 Block6:
	pop edi
	pop ebx
	add esp,8
	ret 4
}
}
// CNpcPool::IsNpcEnabled
__SUB_CLASS_THIS(00278C10, __thiscall, 50359,  CNpcPool, int32_t, unsigned long) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	add ecx,0x38
	call ZMap<unsigned long, int, unsigned long>::GetAt
	neg eax
	sbb eax,eax
	inc eax
	ret 4
}
}
// CNpcPool::GetNpc
__SUB_CLASS_THIS(00279020, __thiscall, 50351,  CNpcPool, CNpc*, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	xor ebx,ebx
	mov dword ptr [esp+4],ebx
	mov eax,dword ptr [esp+0x10]
	push esi
	lea edx,[esp+8]
	mov dword ptr [esp+0x14],eax
	push edx
	lea eax,[esp+0x18]
	push eax
	add ecx,4
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block3

 Block2:
	add eax,0xC
	jmp Block4

 Block3:
	mov dword ptr [esp+0xC],ebx
	lea eax,[esp+8]
	mov ebx,1

 Block4:
	mov esi,dword ptr [eax+4]
	test bl,1
	je Block7

 Block5:
	cmp dword ptr [esp+0xC],0
	je Block7

 Block6:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CNpc>::_ReleaseRaw

 Block7:
	mov eax,esi
	pop esi
	pop ebx
	add esp,8
	ret 4
}
}
// CNpcPool::Update
__SUB_CLASS_THIS0(00278AF0, __thiscall, 50342,  CNpcPool, void) {
__asm {

 Block0:
	sub esp,0x28
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x30]
	inc eax
	cdq
	mov ecx,0x21
	idiv ecx
	push edi
	mov dword ptr [esp+0x10],0
	mov dword ptr [esi+0x30],edx
	test edx,edx
	jne Block7

 Block1:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block4

 Block2:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,edi
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	lea edx,[esp+0x28]
	push edx
	call CField::GetCorrectTime
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [eax+4]
	mov ebp,dword ptr [eax+8]
	mov ebx,dword ptr [eax+0xC]
	mov eax,edi
	shr eax,0x10
	mov dword ptr [esp+0x18],ecx
	cmp ax,word ptr [esi+0x34]
	je Block8

 Block6:
	mov dword ptr [esp+0x10],1
	mov word ptr [esi+0x34],ax
	jmp Block8

 Block7:
	mov ebx,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x1C]

 Block8:
	mov esi,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block12

 Block9:
	lea edx,[esp+0x14]
	push edx
	call ZList<CNpcPool::NPCENTRY>::GetNext
	mov esi,eax
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	add esp,4
	call edx
	cmp dword ptr [esp+0x10],0
	je Block11

 Block10:
	mov ecx,dword ptr [esp+0x18]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ebp
	mov dword ptr [eax+0xC],ebx
	call CNpc::UpdateScript

 Block11:
	cmp dword ptr [esp+0x14],0
	jne Block9

 Block12:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CNpcPool::OnNpcPacket
__SUB_CLASS_THIS(00279260, __thiscall, 50347,  CNpcPool, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	mov ecx,esi
	call CNpcPool::GetNpc
	mov ecx,eax
	test ecx,ecx
	je Block7

 Block1:
	mov eax,dword ptr [esp+0xC]
	sub eax,0x13A
	je Block6

 Block2:
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block7

 Block4:
	push edi
	call CNpc::OnSetSpecialAction
	pop edi
	pop esi
	ret 8

 Block5:
	push edi
	call CNpc::OnUpdateLimitedInfo
	pop edi
	pop esi
	ret 8

 Block6:
	push edi
	call CNpc::OnMove

 Block7:
	pop edi
	pop esi
	ret 8
}
}
// CNpcPool::OnNpcTemplatePacket
__SUB_CLASS_THIS(00278610, __thiscall, 50347,  CNpcPool, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x13D
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	push eax
	call CNpcTemplate::OnSetNpcScript
	pop ecx

 Block2:
	ret 8
}
}
// CNpcPool::OnNpcLeaveField
__SUB_CLASS_THIS(002792C0, __thiscall, 50348,  CNpcPool, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push edi
	call CInPacket::Decode4
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x18]
	lea edi,[esi+4]
	push ecx
	mov ecx,edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block4

 Block2:
	and byte ptr [eax+0x18],0xFE
	jne Block4

 Block3:
	mov edx,dword ptr [eax+0x14]
	push edx
	lea ecx,[esi+0x1C]
	call ZList<CNpcPool::NPCENTRY>::RemoveAt
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveKey

 Block4:
	pop edi
	pop esi
	add esp,8
	ret 4
}
}
// CNpcPool::CNpcPool
__SUB_CLASS_THIS0(00279090, __thiscall, 50340,  CNpcPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset IGObj::`vftable'
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CNpcPool>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CNpcPool>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CNpcPool::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x1C],offset ZList<CNpcPool::NPCENTRY>::`vftable'
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	lea ecx,[esi+0x38]
	mov dword ptr [esi+0x30],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, int, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, int, unsigned long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CNpcPool::OnNpcImitateData
_SUB_EXCEPTION_HANDLER(279500)
__SUB_CLASS_THIS(00279500, __thiscall, 50348,  CNpcPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_279500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x218
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x22C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov ebp,dword ptr [esp+0x23C]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	xor ebx,ebx
	cmp eax,ebx
	jle Block11

 Block1:
	mov dword ptr [esp+0x14],eax

 Block2:
	mov ecx,ebp
	call CInPacket::Decode4
	mov edi,eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	xor eax,eax
	push 0xF0
	lea ecx,[esp+0x41]
	push ebx
	mov dword ptr [esp+0x2C],eax
	push ecx
	mov dword ptr [esp+0x240],ebx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	int 3// TODO: 	mov dword ptr [esp+0x30],offset AvatarLook::`vftable'
	mov byte ptr [esp+0x3C],bl
	mov dword ptr [esp+0x3D],ebx
	mov dword ptr [esp+0x41],ebx
	mov dword ptr [esp+0x45],ebx
	call _memset
	xor eax,eax
	add esp,0xC
	mov dword ptr [esp+0x21D],eax
	mov dword ptr [esp+0x221],eax
	mov dword ptr [esp+0x225],eax
	push ebp
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x238],1
	call AvatarLook::Decode
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x28]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block8

 Block3:
	lea ecx,[ecx]

 Block4:
	lea eax,[esp+0x18]
	push eax
	call ZList<CNpcPool::NPCENTRY>::GetNext
	mov esi,dword ptr [eax+0x10]
	add esp,4
	cmp esi,ebx
	je Block7

 Block5:
	mov ecx,dword ptr [esi+0xA8]
	cmp dword ptr [ecx],edi
	jne Block7

 Block6:
	push edi
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CNpc::SetImitatedLook

 Block7:
	cmp dword ptr [esp+0x18],ebx
	jne Block4

 Block8:
	mov eax,dword ptr [esp+0x1C]
	int 3// TODO: 	mov dword ptr [esp+0x24],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x234],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	sub dword ptr [esp+0x14],1
	jne Block2

 Block11:
	mov ecx,dword ptr [esp+0x22C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x224
	ret 4
}
}
// CNpcPool::FindNpc
__SUB_CLASS_THIS(002787F0, __thiscall, 50345,  CNpcPool, CNpc*, const tagPOINT&) {
__asm {

 Block0:
	sub esp,0x24
	mov ecx,dword ptr [ecx+0x28]
	push esi
	push edi
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block11

 Block1:
	mov edi,dword ptr [esp+0x30]
	jmp Block3

 Block3:
	lea eax,[esp+8]
	push eax
	call ZList<CNpcPool::NPCENTRY>::GetNext
	mov esi,eax
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx+0xA8]
	mov eax,dword ptr [edx]
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,8
	test eax,eax
	je Block6

 Block4:
	cmp dword ptr [eax+0xE4],0
	je Block6

 Block5:
	mov eax,dword ptr [esi+0x10]
	cmp dword ptr [eax+0x8C],0
	je Block10

 Block6:
	mov ecx,dword ptr [esi+0x10]
	cmp dword ptr [ecx+0x138],0
	je Block10

 Block7:
	cmp dword ptr [ecx+0x150],0
	jne Block10

 Block8:
	call CNpc::GetDCRange
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xC],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x10],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x14],ecx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x18],edx
	mov ecx,dword ptr [esi+0x10]
	call CNpc::GetQuestDCRange
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x1C],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x20],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x24],ecx
	mov edx,dword ptr [eax+0xC]
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [edi]
	push eax
	mov dword ptr [esp+0x2C],edx
	push ecx
	lea edx,[esp+0x14]
	push edx
	call PtInRect
	test eax,eax
	jne Block12

 Block9:
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	call PtInRect
	test eax,eax
	jne Block12

 Block10:
	cmp dword ptr [esp+8],0
	jne Block3

 Block11:
	pop edi
	xor eax,eax
	pop esi
	add esp,0x24
	ret 4

 Block12:
	mov eax,dword ptr [esi+0x10]
	pop edi
	pop esi
	add esp,0x24
	ret 4
}
}
// CNpcPool::OnNpcEnterField
__SUB_CLASS_THIS(00279680, __thiscall, 50348,  CNpcPool, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebp,eax
	lea eax,[esp+0xC]
	push eax
	lea edx,[esp+0x20]
	lea ecx,[edi+4]
	push edx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x1C],ecx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block3

 Block2:
	or byte ptr [eax+0x18],1
	pop edi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block3:
	push esi
	lea ecx,[edi+0x1C]
	call ZList<CNpcPool::NPCENTRY>::AddTail_
	mov ecx,ebx
	mov esi,eax
	call CInPacket::Decode4
	push 0
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	push eax
	call CreateNpc
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call ZRef<CNpc>::op_assign_ptr
	lea eax,[esi+0x14]
	mov byte ptr [esi+0x18],1
	mov ecx,dword ptr [edi+0x2C]
	push eax
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x1C]
	push edx
	call ZMap<unsigned long, __POSITION *, unsigned long>::Insert
	mov ecx,dword ptr [esi+0x10]
	push ebx
	push ebp
	call CNpc::Init
	pop esi
	pop edi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CNpcPool::~CNpcPool
_SUB_EXCEPTION_HANDLER(279110)
__SUB_CLASS_THIS0(00279110, __thiscall, 50342,  CNpcPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_279110
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
	int 3// TODO: 	mov dword ptr [esi],offset CNpcPool::`vftable'
	lea ecx,[esi+0x38]
	mov dword ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, int, unsigned long>::`vftable'
	call ZMap<unsigned long, int, unsigned long>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcPool::NPCENTRY>::`vftable'
	call ZList<CNpcPool::NPCENTRY>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CNpcPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
