#include "regen.hpp"
// SummonedPool.ipp
#include "SummonedPool.hpp"

// CSummonedPool::~CSummonedPool
_SUB_EXCEPTION_HANDLER(35A2B0)
__SUB_CLASS_THIS0(0035A2B0, __thiscall, 72102,  CSummonedPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35A2B0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+4],ecx
	int 3// TODO: 	mov dword ptr [ecx],offset CSummonedPool::`vftable'
	add ecx,4
	mov dword ptr [esp+0x10],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CSummonedPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CSummonedPool::OnAttack
__SUB_CLASS_THIS(00359860, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,eax
	call CUser::OnSummonedAttack

 Block2:
	ret 8
}
}
// CSummonedPool::Update
_SUB_EXCEPTION_HANDLER(35A310)
__SUB_CLASS_THIS(0035A310, __thiscall, 72103,  CSummonedPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35A310
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
	lea esi,[ecx+4]
	mov ecx,esi
	mov dword ptr [esp+0x1C],esi
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::GetHeadPosition
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block22

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0x1C]

 Block5:
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x40],ebx
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::GetNext
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	cmp eax,ebx
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block7:
	lea esi,[eax-0x10]
	jmp Block17

 Block8:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block16

 Block9:
	lea ebx,[ebx]

 Block10:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<CSummoned>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebx
	je Block12

 Block11:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	mov byte ptr [esp+0x38],1
	call edx
	add esi,8
	lea eax,[esi+4]
	push eax
	mov byte ptr [esp+0x3C],bl
	call ebp
	test eax,eax
	jne Block15

 Block13:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esp+0x14],ebx
	jne Block10

 Block16:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	lea esi,[edi-0x10]

 Block17:
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block20

 Block18:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov dword ptr [esp+0x24],ebx

 Block21:
	cmp dword ptr [esp+0x18],ebx
	jne Block4

 Block22:
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
// CSummonedPool::OnRemoved
_SUB_EXCEPTION_HANDLER(35A470)
__SUB_CLASS_THIS(0035A470, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35A470
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
	mov esi,ecx
	mov edi,dword ptr [ebp+0xC]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [ebp+8]
	push eax
	call CUserPool::GetUser
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x10]
	push edi
	push ecx
	mov ecx,eax
	call CUser::OnSummonedRemoved
	mov dword ptr [esp+0x14],eax

 Block2:
	mov dword ptr [esp+0x28],ebx
	lea edx,[esp+0x24]
	push edx
	lea eax,[ebp+8]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esp+0x40],ebx
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::GetAt
	test eax,eax
	je Block11

 Block3:
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block4:
	lea edx,[esp+0x18]
	push edx
	mov edi,eax
	call ZList<ZRef<CSummoned>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block6

 Block5:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],1
	cmp dword ptr [esi+0xB4],ecx
	jne Block10

 Block7:
	cmp dword ptr [esp+0x14],ebx
	jne Block9

 Block8:
	mov edx,dword ptr [ebp+0xC]
	push edx
	mov ecx,esi
	call CSummoned::OnRemoved

 Block9:
	mov ecx,dword ptr [esp+0x28]
	push edi
	call ZList<ZRef<CSummoned>>::RemoveAt

 Block10:
	push ebx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],bl
	call ZRef<CSummoned>::_ReleaseRaw
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],ebx
	cmp eax,ebx
	jne Block4

 Block11:
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,ebx
	je Block15

 Block12:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block15

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x30]
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
// CSummonedPool::CSummonedPool
__SUB_CLASS_THIS0(0035A270, __thiscall, 72100,  CSummonedPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+4]
	xor eax,eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-4]
	mov dword ptr [TSingleton<CSummonedPool>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSummonedPool>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CSummonedPool::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],eax
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::_CalcAutoGrow
	mov eax,esi
	pop esi
	ret
}
}
// CSummonedPool::OnSkill
__SUB_CLASS_THIS(00359890, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,eax
	call CUser::OnSummonedSkill

 Block2:
	ret 8
}
}
// CSummonedPool::OnPacket
__SUB_CLASS_THIS(0035AC70, __thiscall, 72104,  CSummonedPool, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0xC]
	add ecx,0xFFFFFEEA
	cmp ecx,5
	ja Block8

 Block1:
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block3
cmp ECX, 2
je Block4
cmp ECX, 3
je Block5
cmp ECX, 4
je Block6
cmp ECX, 5
je Block7


 Block2:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnCreated
	pop edi
	pop esi
	ret 8

 Block3:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnRemoved
	pop edi
	pop esi
	ret 8

 Block4:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnMove
	pop edi
	pop esi
	ret 8

 Block5:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnAttack
	pop edi
	pop esi
	ret 8

 Block6:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnSkill
	pop edi
	pop esi
	ret 8

 Block7:
	push edi
	push eax
	mov ecx,esi
	call CSummonedPool::OnHit

 Block8:
	pop edi
	pop esi
	ret 8
}
}
// CSummonedPool::OnCreated
_SUB_EXCEPTION_HANDLER(35A9A0)
__SUB_CLASS_THIS(0035A9A0, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35A9A0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov edi,dword ptr [esp+0x4C]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esp+0x1C],al
	call CInPacket::Decode1
	movzx ecx,al
	xor esi,esi
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x34],esi
	lea edx,[esp+0x30]
	add ebp,4
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x48],1
	mov dword ptr [esp+0x1C],ebp
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::GetAt
	test eax,eax
	je Block12

 Block1:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block12

 Block2:
	lea esp,[esp]

 Block3:
	lea edx,[esp+0x4C]
	push edx
	call ZList<ZRef<CSummoned>>::GetNext
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	test esi,esi
	je Block9

 Block6:
	add esi,8
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	lea ecx,[esi+4]
	push ecx
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
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x2C],esi
	cmp dword ptr [esi+0xB4],ebx
	je Block28

 Block10:
	cmp dword ptr [esp+0x4C],0
	jne Block3

 Block11:
	mov ebp,dword ptr [esp+0x14]

 Block12:
	push 0x1F0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x50]
	push ecx
	push ebx
	push edx
	mov ecx,eax
	call CSummoned::_ctor_0
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],1
	call ZRef<CSummoned>::op_assign_ptr
	mov esi,dword ptr [esp+0x2C]
	push edi
	mov ecx,esi
	call CSummoned::Init_1
	test eax,eax
	jne Block18

 Block16:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x40],al
	call ZRef<ZList<ZRef<CSummoned>>>::~ZRef<ZList<ZRef<CSummoned>>>
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test esi,esi
	je Block34

 Block17:
	jmp Block33

 Block18:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov edi,eax
	test edi,edi
	je Block23

 Block19:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block21

 Block20:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,edi
	call CUser::AddSummonedList
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,edi
	call eax
	test eax,eax
	je Block23

 Block22:
	sub esp,8
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push edx
	call ZRef<CSummoned>::_ctor_copy
	mov ecx,edi
	call CUserLocal::OnSummonedCreated

 Block23:
	cmp dword ptr [esi+0xC0],0x217C05A
	je Block25

 Block24:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x40],0
	call ZRef<ZList<ZRef<CSummoned>>>::~ZRef<ZList<ZRef<CSummoned>>>
	jmp Block32

 Block25:
	mov dword ptr [esp+0x24],0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x48],3
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::GetAt
	test eax,eax
	jne Block27

 Block26:
	lea ecx,[esp+0x20]
	call ZRef<ZList<ZRef<CSummoned>>>::_Alloc
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<ZList<ZRef<CSummoned>>>, unsigned long>::Insert

 Block27:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	call ZList<ZRef<CSummoned>>::Insert
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x40],1
	call ZRef<ZList<ZRef<CSummoned>>>::~ZRef<ZList<ZRef<CSummoned>>>

 Block28:
	mov esi,dword ptr [esp+0x34]
	mov byte ptr [esp+0x40],0
	test esi,esi
	je Block32

 Block29:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block32:
	mov dword ptr [esp+0x40],0xFFFFFFFF

 Block33:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CSummoned>::_ReleaseRaw

 Block34:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 8
}
}
// CSummonedPool::OnMove
__SUB_CLASS_THIS(00359830, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,eax
	call CUser::OnSummonedMove

 Block2:
	ret 8
}
}
// CSummonedPool::OnHit
__SUB_CLASS_THIS(003598C0, __thiscall, 72105,  CSummonedPool, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,eax
	call CUser::OnSummonedHit

 Block2:
	ret 8
}
}
