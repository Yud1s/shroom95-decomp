#include "regen.hpp"
// UserPool.ipp
#include "UserPool.hpp"

// CUserPool::FindPet
_SUB_EXCEPTION_HANDLER(54B840)
__SUB_CLASS_THIS(0054B840, __thiscall, 41266,  CUserPool, CUser*, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B840
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
	mov edi,ecx
	mov eax,dword ptr [edi+8]
	mov ebx,dword ptr [esp+0x3C]
	test eax,eax
	je Block5

 Block1:
	xor esi,esi

 Block2:
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [eax+0x2E44]
	cmp dword ptr [ecx+esi+4],0
	je Block5

 Block3:
	mov edx,ecx
	mov ecx,dword ptr [edx+esi+4]
	lea eax,[esp+0x1C]
	push eax
	call CPet::GetBodyRect
	mov ecx,dword ptr [ebx+4]
	mov edx,dword ptr [ebx]
	push ecx
	push edx
	lea eax,[esp+0x24]
	push eax
	call PtInRect
	test eax,eax
	jne Block19

 Block4:
	add esi,8
	cmp esi,0x18
	jl Block2

 Block5:
	mov edi,dword ptr [edi+0x30]
	mov dword ptr [esp+0x3C],edi
	test edi,edi
	je Block17

 Block6:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[ecx]

 Block7:
	lea ecx,[esp+0x3C]
	push ecx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	xor edi,edi
	add esp,4
	mov dword ptr [esp+0x18],esi
	cmp esi,edi
	je Block9

 Block8:
	lea edx,[esi+4]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x34],edi
	cmp dword ptr [eax+0x638],edi
	jne Block14

 Block10:
	nop

 Block11:
	mov eax,dword ptr [esi+0x10]
	mov eax,dword ptr [eax+0x2E44]
	mov ecx,dword ptr [eax+edi+4]
	test ecx,ecx
	je Block14

 Block12:
	lea edx,[esp+0x1C]
	push edx
	call CPet::GetBodyRect
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	call PtInRect
	test eax,eax
	jne Block20

 Block13:
	add edi,8
	cmp edi,0x18
	jl Block11

 Block14:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block15:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block16:
	cmp dword ptr [esp+0x3C],0
	mov dword ptr [esp+0x18],0
	jne Block7

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block19:
	mov eax,dword ptr [edi+8]
	jmp Block18

 Block20:
	mov ebx,dword ptr [esi+0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block21:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block22:
	mov eax,ebx
	jmp Block18
}
}
// CUserPool::FindHitUserInRectWithReason
_SUB_EXCEPTION_HANDLER(54B9C0)
__SUB_CLASS_THIS(0054B9C0, __thiscall, 41273,  CUserPool, long, const tagRECT&, CUserRemote**, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B9C0
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
	mov ecx,dword ptr [ecx+0x30]
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],ecx
	test ecx,ecx
	je Block19

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x14]

 Block4:
	cmp edi,dword ptr [esp+0x5C]
	jge Block19

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block7:
	mov eax,dword ptr [esi+0x10]
	cmp dword ptr [eax+0x3AAC],0
	mov dword ptr [esp+0x4C],0
	je Block15

 Block8:
	mov ecx,dword ptr [esp+0x60]
	test ecx,ecx
	je Block10

 Block9:
	cmp ecx,dword ptr [eax+0x3AB0]
	jne Block15

 Block10:
	push 1
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[eax+0x88]
	call CAvatar::GetBodyRect
	lea edx,[esp+0x24]
	push edx
	call IsRectEmpty
	test eax,eax
	je Block13

 Block11:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block17

 Block12:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block17

 Block13:
	mov eax,dword ptr [esp+0x54]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	call IntersectRect
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [ecx+edi*4],eax
	inc edi
	mov dword ptr [esp+0x14],edi

 Block15:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block17

 Block16:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x20],0
	jne Block3

 Block18:
	mov eax,dword ptr [esp+0x14]
	jmp Block20

 Block19:
	mov eax,edi

 Block20:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CUserPool::Update
_SUB_EXCEPTION_HANDLER(54C370)
// 94CD78
static uint8_t _SUB_54C370_LOOKUP_TABLE_0[23] = {
0, 6, 6, 1, 6, 6, 6, 6, 6, 6, 6, 2, 3, 6, 6, 6, 
6, 6, 6, 6, 6, 4, 5, 
};
__SUB_CLASS_THIS0(0054C370, __thiscall, 41252,  CUserPool, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54C370
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	mov ecx,dword ptr [esi+8]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx

 Block2:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block5

 Block3:
	mov edi,edi

 Block4:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	add esp,4
	call eax
	cmp dword ptr [esp+0x14],0
	jne Block4

 Block5:
	mov eax,dword ptr [esi+0x44]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block25

 Block6:
	nop

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<CUserPool::COUPLEENTRY>::GetNext
	mov ebx,dword ptr [esp+0x20]
	mov esi,eax
	mov edx,dword ptr [esi]
	add esp,4
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x54],esi
	call CUserPool::GetUser
	mov edi,eax
	mov eax,dword ptr [esi+4]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x4C],edi
	call CUserPool::GetUser
	mov dword ptr [esp+0x20],eax
	test edi,edi
	je Block24

 Block8:
	test eax,eax
	je Block24

 Block9:
	mov esi,eax
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	xor ebx,ebx
	call edx
	add edi,4
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp]
	lea ecx,[esp+0x30]
	cdq
	mov ebp,eax
	mov eax,dword ptr [esi]
	xor ebp,edx
	sub ebp,edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea esi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [esi]
	cdq
	xor eax,edx
	sub eax,edx
	cmp ebp,0x2BC
	jge Block12

 Block10:
	cmp eax,0x1F4
	jge Block12

 Block11:
	mov ebx,1

 Block12:
	cmp ebp,0x64
	jge Block15

 Block13:
	cmp eax,0x64
	jge Block15

 Block14:
	or ebx,2

 Block15:
	mov ecx,dword ptr [esp+0x48]
	cmp dword ptr [ecx+0x5D0],0
	mov eax,dword ptr [esp+0x20]
	jne Block17

 Block16:
	cmp dword ptr [eax+0x5D0],0
	je Block18

 Block17:
	xor ebx,ebx

 Block18:
	cmp dword ptr [ecx+0x5E4],0
	jne Block20

 Block19:
	cmp dword ptr [eax+0x5E4],0
	je Block21

 Block20:
	xor ebx,ebx

 Block21:
	mov esi,dword ptr [esp+0x50]
	cmp ebx,dword ptr [esi+0x1C]
	je Block24

 Block22:
	mov edx,dword ptr [esi+0x18]
	push edx
	push eax
	push ebx
	call CUser::SetCoupleItemEffect
	test eax,eax
	je Block24

 Block23:
	mov dword ptr [esi+0x1C],ebx

 Block24:
	cmp dword ptr [esp+0x14],0
	jne Block7

 Block25:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x74]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block47

 Block26:
	mov edi,edi

 Block27:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<CUserPool::FRIENDENTRY>::GetNext
	mov edi,dword ptr [esp+0x20]
	mov esi,eax
	mov edx,dword ptr [esi]
	add esp,4
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x54],esi
	call CUserPool::GetUser
	mov ebx,eax
	mov eax,dword ptr [esi+4]
	push eax
	mov ecx,edi
	call CUserPool::GetUser
	mov dword ptr [esp+0x18],eax
	test ebx,ebx
	je Block46

 Block28:
	test eax,eax
	je Block46

 Block29:
	mov ecx,dword ptr [ebx+0x2F08]
	mov edx,eax
	cmp ecx,dword ptr [edx+0x2F00]
	jne Block46

 Block30:
	mov eax,dword ptr [ebx+0x2F0C]
	mov ecx,edx
	cmp eax,dword ptr [ecx+0x2F04]
	jne Block46

 Block31:
	mov esi,edx
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x48]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call edx
	lea edi,[ebx+4]
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp]
	lea ecx,[esp+0x38]
	cdq
	mov ebp,eax
	mov eax,dword ptr [esi]
	xor ebp,edx
	sub ebp,edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea esi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [esi]
	cdq
	xor eax,edx
	sub eax,edx
	cmp ebp,0x2BC
	jge Block33

 Block32:
	cmp eax,0x1F4
	mov esi,1
	jl Block34

 Block33:
	mov esi,dword ptr [esp+0x20]

 Block34:
	cmp ebp,0x64
	jge Block37

 Block35:
	cmp eax,0x64
	jge Block37

 Block36:
	or esi,2

 Block37:
	cmp dword ptr [ebx+0x5D0],0
	mov eax,dword ptr [esp+0x18]
	jne Block39

 Block38:
	cmp dword ptr [eax+0x5D0],0
	je Block40

 Block39:
	xor esi,esi

 Block40:
	cmp dword ptr [ebx+0x5E4],0
	jne Block42

 Block41:
	cmp dword ptr [eax+0x5E4],0
	je Block43

 Block42:
	xor esi,esi

 Block43:
	mov edi,dword ptr [esp+0x50]
	cmp esi,dword ptr [edi+0x1C]
	je Block46

 Block44:
	mov ecx,dword ptr [edi+0x18]
	push ecx
	push eax
	push esi
	mov ecx,ebx
	call CUser::SetFriendShipItemEffect
	test eax,eax
	je Block46

 Block45:
	mov dword ptr [edi+0x1C],esi

 Block46:
	cmp dword ptr [esp+0x14],0
	jne Block27

 Block47:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x88]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block67

 Block48:
	lea ecx,[ecx]

 Block49:
	lea eax,[esp+0x14]
	push eax
	call ZList<CUserPool::NEWYEARCARDENTRY>::GetNext
	mov edi,dword ptr [esp+0x20]
	mov esi,eax
	mov ecx,dword ptr [esi]
	add esp,4
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x54],esi
	call CUserPool::GetUser
	mov edx,dword ptr [esi+4]
	mov ebx,eax
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x4C],ebx
	call CUserPool::GetUser
	mov dword ptr [esp+0x20],eax
	test ebx,ebx
	je Block66

 Block50:
	test eax,eax
	je Block66

 Block51:
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	xor ebx,ebx
	call edx
	mov edi,dword ptr [esp+0x48]
	add edi,4
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp]
	lea ecx,[esp+0x30]
	cdq
	mov ebp,eax
	mov eax,dword ptr [esi]
	xor ebp,edx
	sub ebp,edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea esi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [esi]
	cdq
	xor eax,edx
	sub eax,edx
	cmp ebp,0x2BC
	jge Block54

 Block52:
	cmp eax,0x1F4
	jge Block54

 Block53:
	mov ebx,1

 Block54:
	cmp ebp,0xFA
	jge Block57

 Block55:
	cmp eax,0xFA
	jge Block57

 Block56:
	or ebx,2

 Block57:
	mov ecx,dword ptr [esp+0x48]
	cmp dword ptr [ecx+0x5D0],0
	mov eax,dword ptr [esp+0x20]
	jne Block59

 Block58:
	cmp dword ptr [eax+0x5D0],0
	je Block60

 Block59:
	xor ebx,ebx

 Block60:
	cmp dword ptr [ecx+0x5E4],0
	jne Block62

 Block61:
	cmp dword ptr [eax+0x5E4],0
	je Block63

 Block62:
	xor ebx,ebx

 Block63:
	mov esi,dword ptr [esp+0x50]
	cmp ebx,dword ptr [esi+0x10]
	je Block66

 Block64:
	mov edx,dword ptr [esi+0xC]
	push edx
	mov edx,dword ptr [esi+8]
	push edx
	push eax
	push ebx
	call CUser::SetNewYearCardEffect
	test eax,eax
	je Block66

 Block65:
	mov dword ptr [esi+0x10],ebx

 Block66:
	cmp dword ptr [esp+0x14],0
	jne Block49

 Block67:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0xB4]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block80

 Block68:
	mov edi,edi

 Block69:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<CUserPool::MARRIAGEENTRY>::GetNext
	mov ebx,dword ptr [esp+0x20]
	mov esi,eax
	mov edx,dword ptr [esi]
	add esp,4
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x54],esi
	call CUserPool::GetUser
	mov edi,eax
	mov eax,dword ptr [esi+4]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x4C],edi
	call CUserPool::GetUser
	mov dword ptr [esp+0x30],eax
	test edi,edi
	je Block79

 Block70:
	test eax,eax
	je Block79

 Block71:
	mov esi,eax
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	xor ebx,ebx
	call edx
	add edi,4
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp]
	lea ecx,[esp+0x28]
	cdq
	mov ebp,eax
	mov eax,dword ptr [esi]
	xor ebp,edx
	sub ebp,edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea esi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [esi]
	cdq
	xor eax,edx
	sub eax,edx
	cmp ebp,0x2BC
	jge Block74

 Block72:
	cmp eax,0x1F4
	jge Block74

 Block73:
	mov ebx,1

 Block74:
	cmp ebp,0x64
	jge Block77

 Block75:
	cmp eax,0x64
	jge Block77

 Block76:
	or ebx,2

 Block77:
	mov esi,dword ptr [esp+0x50]
	cmp ebx,dword ptr [esi+0xC]
	je Block79

 Block78:
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [esp+0x30]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x50]
	push ebx
	call CUser::SetWeddingRingEffect
	mov dword ptr [esi+0xC],ebx

 Block79:
	cmp dword ptr [esp+0x14],0
	jne Block69

 Block80:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0xC8]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block130

 Block81:
	lea eax,[esp+0x14]
	push eax
	call ZList<CUserPool::COUPLECHAIRENTRY>::GetNext
	mov ecx,dword ptr [eax]
	add esp,4
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],eax
	call CUserPool::GetUser
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block129

 Block82:
	mov esi,dword ptr [esp+0x30]
	mov edx,dword ptr [esi+8]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::GetCoupleChairItem
	mov dword ptr [esp+0x40],eax
	test eax,eax
	jne Block91

 Block83:
	mov eax,dword ptr [esi+8]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x90],0
	test cl,cl
	je Block86

 Block84:
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test eax,eax
	je Block129

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block129

 Block86:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::RegisterCoupleChairItem
	mov ecx,dword ptr [esi+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetCoupleChairItem
	mov esi,eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	test esi,esi
	je Block129

 Block91:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block130

 Block92:
	lea ecx,[esp+0x50]
	push ecx
	call ZList<CUserPool::COUPLECHAIRENTRY>::GetNext
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [edx+8]
	add esp,4
	mov dword ptr [esp+0x48],eax
	cmp ecx,dword ptr [eax+8]
	jne Block128

 Block93:
	mov edx,eax
	mov eax,dword ptr [edx+4]
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [esp+0x30]
	cmp dword ptr [ecx],eax
	jne Block128

 Block95:
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call CUserPool::GetUser
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block128

 Block96:
	mov esi,eax
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [esp+0x28]
	add edi,4
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebp]
	lea ecx,[esp+0x64]
	cdq
	mov ebp,eax
	mov eax,dword ptr [esi]
	xor ebp,edx
	sub ebp,edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea ebx,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [ebx]
	mov ebx,dword ptr [esp+0x40]
	cdq
	mov ecx,eax
	mov eax,dword ptr [ebx+4]
	xor ecx,edx
	sub eax,ebp
	mov ebp,dword ptr [ebx+0xC]
	sub ecx,edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,ebp
	jg Block117

 Block97:
	mov eax,dword ptr [ebx+8]
	sub eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,ebp
	jg Block117

 Block98:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	call edx
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	cmp eax,dword ptr [esi]
	mov ecx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x20]
	jge Block100

 Block99:
	mov eax,ecx
	mov edx,edi
	jmp Block101

 Block100:
	mov eax,edi
	mov edx,ecx

 Block101:
	mov esi,dword ptr [ebx+0x10]
	cmp esi,0x16
	ja Block118

 Block102:
	movzx esi,byte ptr [esi+_SUB_54C370_LOOKUP_TABLE_0]
	cmp ESI, 0
je Block103
cmp ESI, 1
je Block104
cmp ESI, 2
je Block106
cmp ESI, 3
je Block109
cmp ESI, 4
je Block112
cmp ESI, 5
je Block114
cmp ESI, 6
je Block118


 Block103:
	or dword ptr [esp+0x18],3
	jmp Block118

 Block104:
	mov eax,dword ptr [eax+0x640]
	mov edx,dword ptr [edx+0x640]
	xor edx,eax
	test dl,1
	jne Block118

 Block105:
	or dword ptr [esp+0x18],3
	jmp Block118

 Block106:
	test byte ptr [eax+0x640],1
	je Block118

 Block107:
	test byte ptr [edx+0x640],1
	je Block118

 Block108:
	or dword ptr [esp+0x18],3
	jmp Block118

 Block109:
	test byte ptr [eax+0x640],1
	je Block118

 Block110:
	test byte ptr [edx+0x640],1
	jne Block118

 Block111:
	or dword ptr [esp+0x18],3
	jmp Block118

 Block112:
	test byte ptr [eax+0x640],1
	jne Block118

 Block113:
	jmp Block107

 Block114:
	test byte ptr [eax+0x640],1
	jne Block118

 Block115:
	test byte ptr [edx+0x640],1
	jne Block118

 Block116:
	or dword ptr [esp+0x18],3
	jmp Block118

 Block117:
	mov edi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x28]

 Block118:
	cmp dword ptr [ecx+0x5D0],0
	jne Block120

 Block119:
	cmp dword ptr [edi+0x5D0],0
	je Block121

 Block120:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	jmp Block122

 Block121:
	mov ebx,dword ptr [esp+0x18]

 Block122:
	cmp dword ptr [ecx+0x5E4],0
	jne Block124

 Block123:
	cmp dword ptr [edi+0x5E4],0
	je Block125

 Block124:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx

 Block125:
	mov esi,dword ptr [esp+0x30]
	cmp ebx,dword ptr [esi+0xC]
	je Block128

 Block126:
	mov eax,dword ptr [esi+8]
	push eax
	push edi
	push ebx
	call CUser::SetCoupleChairEffect
	test eax,eax
	je Block128

 Block127:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebx
	mov edx,dword ptr [esi]
	mov dword ptr [esi+0xC],ebx
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+4],ecx
	mov dword ptr [eax+4],edx

 Block128:
	cmp dword ptr [esp+0x50],0
	jne Block92

 Block129:
	cmp dword ptr [esp+0x14],0
	jne Block81

 Block130:
	mov edi,dword ptr [esp+0x1C]
	xor ebp,ebp
	cmp dword ptr [edi+0x5C],ebp
	je Block157

 Block131:
	call timeGetTime
	mov ebx,eax
	mov eax,dword ptr [edi+0x50]
	cmp eax,ebp
	je Block136

 Block132:
	mov ecx,ebx
	sub ecx,eax
	test ecx,ecx
	jle Block136

 Block133:
	lea eax,[ebx+0x64]
	mov dword ptr [edi+0x4C],eax
	cmp eax,ebp
	jne Block135

 Block134:
	mov dword ptr [edi+0x4C],1

 Block135:
	mov dword ptr [edi+0x50],ebp

 Block136:
	mov eax,dword ptr [edi+0x4C]
	cmp eax,ebp
	je Block157

 Block137:
	mov edx,ebx
	sub edx,eax
	jns Block151

 Block138:
	cmp dword ptr [edi+0x5C],ebp
	je Block151

 Block139:
	mov eax,dword ptr [edi+0x60]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esi
	cmp esi,ebp
	je Block141

 Block140:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block141:
	mov dword ptr [esp+0x90],1
	cmp esi,ebp
	je Block148

 Block142:
	mov dword ptr [esp+0x4C],ebp
	mov ecx,dword ptr [esi+0x19E8]
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x54]
	mov dword ptr [esp+0x54],ecx
	push eax
	lea ecx,[edi+0xC]
	mov byte ptr [esp+0x98],2
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::GetAt
	mov ebx,dword ptr [esp+0x4C]
	test eax,eax
	je Block144

 Block143:
	mov dword ptr [ebx+0x18],ebp

 Block144:
	mov ecx,esi
	call CUserRemote::LoadCompletely
	mov byte ptr [esp+0x90],1
	cmp ebx,ebp
	je Block148

 Block145:
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block147

 Block146:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block147:
	mov dword ptr [esp+0x4C],0
	xor ebp,ebp

 Block148:
	mov eax,dword ptr [edi+0x60]
	lea ecx,[edi+0x54]
	push eax
	call ZList<ZRef<CUserRemote>>::RemoveAt
	call timeGetTime
	mov ebx,eax
	mov dword ptr [esp+0x90],0xFFFFFFFF
	cmp esi,ebp
	je Block150

 Block149:
	push ebp
	lea ecx,[esp+0x44]
	call ZRef<CUserRemote>::_ReleaseRaw
	mov dword ptr [esp+0x44],ebp

 Block150:
	mov ecx,ebx
	sub ecx,dword ptr [edi+0x4C]
	js Block138

 Block151:
	mov edx,ebx
	sub edx,dword ptr [edi+0x4C]
	js Block154

 Block152:
	cmp dword ptr [edi+0x5C],ebp
	je Block154

 Block153:
	add ebx,0x3E8

 Block154:
	mov dword ptr [edi+0x50],ebx
	cmp ebx,ebp
	jne Block156

 Block155:
	mov dword ptr [edi+0x50],1

 Block156:
	mov dword ptr [edi+0x4C],ebp

 Block157:
	mov ecx,dword ptr [esp+0x88]
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
// CUserPool::OnCoupleRecordAdd
__SUB_CLASS_THIS(0054D600, __thiscall, 41277,  CUserPool, void, const _LARGE_INTEGER&, CUser*, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	push ebp
	mov ebp,ecx
	mov ecx,ebx
	or ecx,eax
	mov dword ptr [esp+0xC],eax
	je Block16

 Block1:
	mov ecx,dword ptr [esp+0x18]
	push esi
	mov esi,dword ptr [ebp+8]
	push edi
	mov edi,ecx
	cmp ebx,dword ptr [esi+0x2E80]
	jne Block3

 Block2:
	cmp eax,dword ptr [esi+0x2E84]
	je Block11

 Block3:
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block15

 Block4:
	jmp Block6

 Block6:
	lea edx,[esp+0x1C]
	push edx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0x10]
	add esp,4
	cmp ebx,dword ptr [esi+0x2E80]
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esi+0x2E84]
	je Block10

 Block8:
	cmp dword ptr [esp+0x1C],0
	jne Block6

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0xC

 Block10:
	mov ecx,edi

 Block11:
	test esi,esi
	je Block15

 Block12:
	mov edx,dword ptr [ecx+0x19E8]
	cmp edx,dword ptr [esi+0x19E8]
	jbe Block14

 Block13:
	mov edi,esi
	mov esi,ecx

 Block14:
	lea ecx,[ebp+0x38]
	call ZList<CUserPool::COUPLEENTRY>::AddTail_
	mov ecx,dword ptr [edi+0x19E8]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0x19E8]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [edi+0x2E78]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [edi+0x2E7C]
	mov dword ptr [eax+0xC],edx
	mov ecx,dword ptr [esi+0x2E78]
	mov dword ptr [eax+0x10],ecx
	mov edx,dword ptr [esi+0x2E7C]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax+0x14],edx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],0

 Block15:
	pop edi
	pop esi

 Block16:
	pop ebp
	pop ebx
	add esp,8
	ret 0xC
}
}
// CUserPool::DoHealNearHealingRobot
_SUB_EXCEPTION_HANDLER(54BB20)
__SUB_CLASS_THIS0(0054BB20, __thiscall, 41252,  CUserPool, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54BB20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esi+8]
	push 1
	lea eax,[esp+0x48]
	push eax
	lea ecx,[edi+0x88]
	mov dword ptr [esp+0x28],edi
	call CAvatar::GetBodyRect
	lea ecx,[esp+0x44]
	push ecx
	call IsRectEmpty
	test eax,eax
	jne Block51

 Block1:
	push 0x217C063
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CUser::GetSummoned
	mov ecx,dword ptr [esp+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x60],ebx
	cmp ecx,ebx
	je Block4

 Block2:
	cmp dword ptr [ecx+0x168],ebx
	jne Block4

 Block3:
	mov eax,dword ptr [edi+0x19E8]
	lea edx,[esp+0x44]
	push edx
	push eax
	call CSummoned::TryDoingHealingRobot
	mov ecx,dword ptr [esp+0x28]

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block49

 Block5:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x40],esi
	cmp esi,ebx
	je Block7

 Block6:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x10]
	cmp eax,ebx
	je Block17

 Block8:
	add eax,8
	cmp eax,ebx
	je Block17

 Block9:
	lea ebp,[eax-8]
	mov dword ptr [esp+0x30],ebp
	cmp ebp,ebx
	je Block11

 Block10:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	push 0x217C063
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x68],2
	call CUser::GetSummoned
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0x60],3
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block23

 Block14:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block15:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,8
	jmp Block19

 Block17:
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	jmp Block11

 Block18:
	xor eax,eax

 Block19:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block22

 Block20:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block22

 Block21:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block22:
	mov dword ptr [esp+0x28],ebx

 Block23:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x60],2
	cmp ecx,ebx
	je Block32

 Block24:
	add ecx,0xC
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block25:
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block27

 Block26:
	add eax,8
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block31

 Block29:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block31

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block31:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x38],ebx

 Block32:
	cmp eax,ebx
	jne Block37

 Block33:
	mov byte ptr [esp+0x60],1
	cmp ebp,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CUser>::_ReleaseRaw
	mov dword ptr [esp+0x30],ebx

 Block35:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block36:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block47

 Block37:
	cmp dword ptr [eax+0x168],ebx
	je Block42

 Block38:
	mov byte ptr [esp+0x60],1
	cmp ebp,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CUser>::_ReleaseRaw
	mov dword ptr [esp+0x30],ebx

 Block40:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block41:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block47

 Block42:
	mov eax,dword ptr [ebp+0x19E8]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call CWvsContext::IsPartyMemberID
	test eax,eax
	jne Block45

 Block43:
	push ebx
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x64],1
	call ZRef<CUser>::_ReleaseRaw
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],ebx
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block44:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block47

 Block45:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0x19E8]
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x44]
	push edx
	push eax
	call CSummoned::TryDoingHealingRobot
	push ebx
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x64],1
	call ZRef<CUser>::_ReleaseRaw
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],ebx
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block46:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block47:
	mov dword ptr [esp+0x40],ebx
	cmp dword ptr [esp+0x18],ebx
	jne Block5

 Block48:
	mov ecx,dword ptr [esp+0x28]

 Block49:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp ecx,ebx
	je Block51

 Block50:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CSummoned>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [esp+0x58]
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
// CUserPool::~CUserPool
_SUB_EXCEPTION_HANDLER(54B130)
__SUB_CLASS_THIS0(0054B130, __thiscall, 41252,  CUserPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B130
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUserPool::`vftable'
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x18],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUserPool::COUPLECHAIRENTRY>::`vftable'
	call ZList<CUserPool::COUPLECHAIRENTRY>::RemoveAll
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x18],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUserPool::MARRIAGEENTRY>::`vftable'
	call ZList<CUserPool::MARRIAGEENTRY>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x18],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZList<unsigned long>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::RemoveAll
	lea ecx,[esi+0x7C]
	mov byte ptr [esp+0x18],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUserPool::NEWYEARCARDENTRY>::`vftable'
	call ZList<CUserPool::NEWYEARCARDENTRY>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x18],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUserPool::FRIENDENTRY>::`vftable'
	call ZList<CUserPool::FRIENDENTRY>::RemoveAll
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x18],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CUserRemote>>::`vftable'
	call ZList<ZRef<CUserRemote>>::RemoveAll
	lea ecx,[esi+0x38]
	mov byte ptr [esp+0x18],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUserPool::COUPLEENTRY>::`vftable'
	call ZList<CUserPool::COUPLEENTRY>::RemoveAll
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x18],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<USERREMOTE_ENTRY>>::`vftable'
	call ZList<ZRef<USERREMOTE_ENTRY>>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::RemoveAll
	xor ebx,ebx
	add esi,4
	mov byte ptr [esp+0x18],bl
	cmp dword ptr [esi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,esi
	call ZRef<CUserLocal>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block2:
	mov dword ptr [TSingleton<CUserPool>::ms_pInstance],ebx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CUserPool::OnCoupleChairRecordRemove
__SUB_CLASS_THIS(0054D220, __thiscall, 41281,  CUserPool, void, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xC8]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block17

 Block1:
	push edi
	mov edi,dword ptr [esp+0x14]
	push esi
	mov edi,edi

 Block2:
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CUserPool::COUPLECHAIRENTRY>::GetNext
	mov esi,eax
	add esp,4
	cmp dword ptr [esi],edi
	je Block5

 Block3:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block4:
	pop esi
	pop edi
	pop ebp
	add esp,8
	ret 4

 Block5:
	cmp dword ptr [esi+0xC],0
	je Block16

 Block6:
	cmp dword ptr [esi+4],0
	je Block16

 Block7:
	mov ecx,dword ptr [esi]
	push ebx
	push ecx
	mov ecx,ebp
	call CUserPool::GetUser
	mov edx,dword ptr [esi+4]
	push edx
	mov ecx,ebp
	mov ebx,eax
	call CUserPool::GetUser
	mov edi,eax
	test ebx,ebx
	je Block9

 Block8:
	push 0
	push edi
	push 0
	mov ecx,ebx
	call CUser::SetCoupleChairEffect

 Block9:
	pop ebx
	test edi,edi
	je Block16

 Block10:
	push 0
	push 0
	push 0
	mov ecx,edi
	call CUser::SetCoupleChairEffect
	mov eax,dword ptr [ebp+0xC8]
	xor edi,edi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block16

 Block11:
	mov esi,dword ptr [esi+4]

 Block12:
	lea eax,[esp+0x18]
	push eax
	call ZList<CUserPool::COUPLECHAIRENTRY>::GetNext
	add esp,4
	cmp dword ptr [eax],esi
	je Block15

 Block13:
	cmp dword ptr [esp+0x18],edi
	jne Block12

 Block14:
	jmp Block16

 Block15:
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+0xC],edi

 Block16:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	lea ecx,[ebp+0xBC]
	call ZList<CUserPool::COUPLECHAIRENTRY>::RemoveAt
	pop esi
	pop edi

 Block17:
	pop ebp
	add esp,8
	ret 4
}
}
// CUserPool::FindRemoteUser
_SUB_EXCEPTION_HANDLER(54B550)
__SUB_CLASS_THIS(0054B550, __thiscall, 41264,  CUserPool, CUserRemote*, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B550
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
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block8

 Block1:
	mov ebx,dword ptr [esp+0x40]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+0x10]
	push 1
	lea edx,[esp+0x24]
	push edx
	lea ecx,[eax+0x88]
	mov dword ptr [esp+0x40],0
	call CAvatar::GetBodyRect
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push edx
	call PtInRect
	lea edi,[esi+4]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	push edi
	test eax,eax
	jne Block10

 Block5:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],0
	jne Block2

 Block8:
	xor eax,eax

 Block9:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block10:
	mov ebx,dword ptr [esi+0x10]
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block11:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebx
	jmp Block9
}
}
// CUserPool::GetRemoteUser
_SUB_EXCEPTION_HANDLER(54B250)
__SUB_CLASS_THIS(0054B250, __thiscall, 41259,  CUserPool, CUserRemote*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B250
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
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xC
	mov dword ptr [esp+0x28],edi
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::GetAt
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	jne Block5

 Block1:
	cmp esi,edi
	je Block4

 Block2:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block5:
	mov ebx,dword ptr [esi+0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUserPool::OnUserEnterField
_SUB_EXCEPTION_HANDLER(54DB40)
__SUB_CLASS_THIS(0054DB40, __thiscall, 41285,  CUserPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54DB40
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
	mov ecx,dword ptr [esp+0x38]
	call CInPacket::Decode4
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,eax
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],esi
	cmp ebp,dword ptr [esi+0x20B4]
	je Block14

 Block1:
	xor edi,edi
	push edi
	lea eax,[esp+0x18]
	lea ecx,[ebx+0xC]
	push eax
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::GetAt
	test eax,eax
	jne Block14

 Block2:
	cmp dword ptr [esi+0x3854],edi
	jne Block14

 Block3:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset USERREMOTE_ENTRY::`vftable'
	mov dword ptr [eax+0x10],edi
	mov esi,eax
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	mov dword ptr [esp+0x24],esi
	cmp esi,edi
	je Block8

 Block7:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push 0x4EF0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x34],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x30],1
	cmp eax,edi
	je Block10

 Block9:
	push ebp
	mov ecx,eax
	call CUserRemote::_ctor_0
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	lea edi,[esi+0xC]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x34],0
	call ZRef<CUserRemote>::op_assign_ptr
	lea ecx,[ebx+0x24]
	call ZList<ZRef<USERREMOTE_ENTRY>>::AddTail_
	mov ebp,eax
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call ZRef<USERREMOTE_ENTRY>::op_assign_copy
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[ebx+0xC]
	mov dword ptr [esi+0x14],ebp
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::Insert
	push edi
	lea ecx,[ebx+0x54]
	call ZList<ZRef<CUserRemote>>::Insert
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	push 1
	mov dword ptr [esi+0x18],eax
	mov edi,dword ptr [esi+0x10]
	push edx
	call CWvsContext::IsPartyMemberID
	mov ebx,dword ptr [esp+0x3C]
	push eax
	push ebx
	mov ecx,edi
	call CUserRemote::Init
	call get_field
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [eax]
	push ebx
	push ecx
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	mov ecx,dword ptr [esi+0x10]
	call CUserRemote::RedrawGuildNameTag
	mov ecx,dword ptr [TSingleton<CUIPartyHP>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block12:
	mov esi,ecx
	call CWnd::Destroy
	mov ecx,esi
	call CUIPartyHP::Create

 Block13:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<USERREMOTE_ENTRY>::~ZRef<USERREMOTE_ENTRY>

 Block14:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUserPool::OnUserLeaveField
_SUB_EXCEPTION_HANDLER(54D4C0)
__SUB_CLASS_THIS(0054D4C0, __thiscall, 41285,  CUserPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54D4C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x2C]
	call CInPacket::Decode4
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0x2C]
	lea ebp,[esi+0xC]
	push eax
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::GetPos
	mov ebx,eax
	xor eax,eax
	cmp ebx,eax
	je Block7

 Block1:
	mov dword ptr [esp+0x18],eax
	lea ecx,[ebx+0xC]
	push ecx
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],eax
	call ZRef<USERREMOTE_ENTRY>::op_assign_copy
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [edi+0x10]
	add eax,0x2E78
	push eax
	mov ecx,esi
	call CUserPool::OnCoupleRecordRemove
	mov eax,dword ptr [edi+0x10]
	add eax,0x2F00
	push eax
	mov ecx,esi
	call CUserPool::OnFriendRecordRemove
	mov eax,dword ptr [edi+0x10]
	mov eax,dword ptr [eax+0x19E8]
	push eax
	mov ecx,esi
	call CUserPool::OnMarriageRecordRemove
	mov eax,dword ptr [edi+0x10]
	mov eax,dword ptr [eax+0x19E8]
	push eax
	mov ecx,esi
	call CUserPool::OnNewYearCardRecordRemoveAll
	mov edx,dword ptr [esp+0x2C]
	push edx
	mov ecx,esi
	call CUserPool::OnCoupleChairRecordRemove
	mov eax,dword ptr [edi+0x14]
	push eax
	lea ecx,[esi+0x24]
	call ZList<ZRef<USERREMOTE_ENTRY>>::RemoveAt
	add ebx,8
	push ebx
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::RemoveKey
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block3

 Block2:
	push eax
	lea ecx,[esi+0x54]
	call ZList<ZRef<CUserRemote>>::RemoveAt

 Block3:
	mov ecx,dword ptr [TSingleton<CUIPartyHP>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block4:
	mov esi,ecx
	call CWnd::Destroy
	mov ecx,esi
	call CUIPartyHP::Create

 Block5:
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUserPool::FindRemoteUserByName
_SUB_EXCEPTION_HANDLER(54B650)
__SUB_CLASS_THIS(0054B650, __thiscall, 41265,  CUserPool, CUserRemote*, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B650
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
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block8

 Block1:
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+0x10]
	mov eax,dword ptr [eax+0x19EC]
	push eax
	push ebx
	mov dword ptr [esp+0x30],0
	call lstrcmpiA
	lea edi,[esi+4]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	push edi
	test eax,eax
	je Block10

 Block5:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],0
	jne Block2

 Block8:
	xor eax,eax

 Block9:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4

 Block10:
	mov ebx,dword ptr [esi+0x10]
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block11:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block12:
	mov eax,ebx
	jmp Block9
}
}
// CUserPool::OnUserLocalPacket
__SUB_CLASS_THIS(00548AA0, __thiscall, 41275,  CUserPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+8]
	test ecx,ecx
	je Block2

 Block1:
	jmp  CUserLocal::OnPacket

 Block2:
	ret 8
}
}
// CUserPool::OnNewYearCardRecordAdd
__SUB_CLASS_THIS(0054DE60, __thiscall, 41283,  CUserPool, void, CUser*, unsigned long) {
__asm {

 Block0:
	sub esp,0xC
	push ebp
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],ecx
	test ebp,ebp
	je Block12

 Block1:
	mov eax,dword ptr [ebp+0x19E8]
	push esi
	lea esi,[ecx+0x90]
	push 0
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::Insert
	lea ecx,[eax+0xC]
	call ZList<unsigned long>::AddTail_
	mov edx,dword ptr [esp+0x1C]
	mov ecx,esi
	mov dword ptr [eax],edx
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::GetHeadPosition
	mov dword ptr [esp+8],eax
	test eax,eax
	je Block11

 Block2:
	push ebx
	push edi

 Block3:
	lea ebx,[eax+0xC]
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::GetNext
	mov edi,dword ptr [eax]
	cmp edi,dword ptr [ebp+0x19E8]
	je Block8

 Block4:
	mov ebx,dword ptr [ebx+0xC]
	mov dword ptr [esp+0x20],ebx
	test ebx,ebx
	je Block8

 Block5:
	lea esp,[esp]

 Block6:
	lea ecx,[esp+0x20]
	push ecx
	call ZList<unsigned long>::GetNext
	mov ebx,dword ptr [esp+0x28]
	add esp,4
	cmp ebx,dword ptr [eax]
	je Block10

 Block7:
	cmp dword ptr [esp+0x20],0
	jne Block6

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block3

 Block9:
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret 8

 Block10:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x7C
	call ZList<CUserPool::NEWYEARCARDENTRY>::AddTail_
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [eax+4],edi
	pop edi
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax],edx
	mov dword ptr [eax+0x10],0
	mov dword ptr [eax+0xC],0x419CE0
	pop ebx

 Block11:
	pop esi

 Block12:
	pop ebp
	add esp,0xC
	ret 8
}
}
// CUserPool::OnNewYearCardRecordRemove
__SUB_CLASS_THIS(0054DCE0, __thiscall, 41281,  CUserPool, void, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,ecx
	push esi
	lea ebx,[ebp+0x90]
	push edi
	mov ecx,ebx
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::GetHeadPosition
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block9

 Block1:
	mov edi,edi

 Block2:
	lea edi,[eax+0xC]
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::GetNext
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block8

 Block3:
	lea esp,[esp]

 Block4:
	lea ecx,[esp+0x14]
	push ecx
	mov esi,eax
	call ZList<unsigned long>::GetNext
	mov edx,dword ptr [esp+0x20]
	add esp,4
	cmp edx,dword ptr [eax]
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block4

 Block6:
	jmp Block8

 Block7:
	push esi
	mov ecx,edi
	call ZList<unsigned long>::RemoveAt

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block2

 Block9:
	mov eax,dword ptr [ebp+0x88]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block18

 Block10:
	nop

 Block11:
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x10]
	push eax
	call ZList<CUserPool::NEWYEARCARDENTRY>::GetNext
	mov ecx,dword ptr [esp+0x20]
	mov esi,eax
	add esp,4
	cmp dword ptr [esi+8],ecx
	jne Block17

 Block12:
	mov edx,dword ptr [esi]
	push edx
	mov ecx,ebp
	call CUserPool::GetUser
	mov edi,eax
	mov eax,dword ptr [esi+4]
	push eax
	mov ecx,ebp
	call CUserPool::GetUser
	mov ebx,eax
	test edi,edi
	je Block14

 Block13:
	mov ecx,dword ptr [esi+8]
	push 0x419CE0
	push ecx
	push ebx
	push 0
	mov ecx,edi
	call CUser::SetNewYearCardEffect

 Block14:
	test ebx,ebx
	je Block16

 Block15:
	mov edx,dword ptr [esi+8]
	push 0x419CE0
	push edx
	push edi
	push 0
	mov ecx,ebx
	call CUser::SetNewYearCardEffect

 Block16:
	mov eax,dword ptr [esp+0x14]
	push eax
	lea ecx,[ebp+0x7C]
	call ZList<CUserPool::NEWYEARCARDENTRY>::RemoveAt

 Block17:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block11

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CUserPool::OnMarriageRecordAdd
__SUB_CLASS_THIS(0054D800, __thiscall, 41280,  CUserPool, void, unsigned long, CUser*, long) {
__asm {

 Block0:
	push ecx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push edi
	mov edi,ecx
	test ebp,ebp
	je Block11

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x14]
	push esi
	mov esi,dword ptr [edi+8]
	mov dword ptr [esp+0x10],ebp
	cmp ebx,dword ptr [esi+0x2EB4]
	je Block6

 Block2:
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block10

 Block3:
	lea eax,[esp+0x1C]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov esi,dword ptr [ecx+0x10]
	add esp,4
	cmp ebx,dword ptr [esi+0x2EB4]
	je Block6

 Block4:
	cmp dword ptr [esp+0x1C],0
	jne Block3

 Block5:
	pop esi
	pop ebx
	pop edi
	pop ebp
	pop ecx
	ret 0xC

 Block6:
	test esi,esi
	je Block10

 Block7:
	mov edx,dword ptr [ebp+0x19E8]
	cmp edx,dword ptr [esi+0x19E8]
	jbe Block9

 Block8:
	mov dword ptr [esp+0x10],esi
	mov esi,ebp

 Block9:
	lea ecx,[edi+0xA8]
	call ZList<CUserPool::MARRIAGEENTRY>::AddTail_
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+0x19E8]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esi+0x19E8]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],0

 Block10:
	pop esi
	pop ebx

 Block11:
	pop edi
	pop ebp
	pop ecx
	ret 0xC
}
}
// CUserPool::OnMarriageRecordRemove
__SUB_CLASS_THIS(0054D0D0, __thiscall, 41281,  CUserPool, void, unsigned long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov ebx,ecx
	test ebp,ebp
	je Block10

 Block1:
	mov eax,dword ptr [ebx+0xB4]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block10

 Block2:
	push esi
	push edi
	lea ecx,[ecx]

 Block3:
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0x18]
	push eax
	call ZList<CUserPool::MARRIAGEENTRY>::GetNext
	mov esi,eax
	mov eax,dword ptr [esi]
	add esp,4
	cmp eax,ebp
	je Block5

 Block4:
	cmp dword ptr [esi+4],ebp
	jne Block7

 Block5:
	push eax
	mov ecx,ebx
	call CUserPool::GetUser
	mov ecx,dword ptr [esi+4]
	push ecx
	mov ecx,ebx
	mov edi,eax
	call CUserPool::GetUser
	test edi,edi
	je Block7

 Block6:
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	jne Block3

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block9:
	push 0
	push eax
	push 0
	mov ecx,edi
	call CUser::SetWeddingRingEffect
	mov edx,dword ptr [esp+0x10]
	push edx
	lea ecx,[ebx+0xA8]
	call ZList<CUserPool::MARRIAGEENTRY>::RemoveAt
	pop edi
	pop esi

 Block10:
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CUserPool::CUserPool
_SUB_EXCEPTION_HANDLER(54AFE0)
__SUB_CLASS_THIS0(0054AFE0, __thiscall, 41250,  CUserPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54AFE0
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
	lea eax,[esi+4]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset IGObj::`vftable'
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CUserPool>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUserPool>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUserPool::`vftable'
	mov dword ptr [esp+0x18],edi
	mov dword ptr [eax+4],edi
	lea ecx,[esi+0xC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x24],offset ZList<ZRef<USERREMOTE_ENTRY>>::`vftable'
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esi+0x34],edi
	int 3// TODO: 	mov dword ptr [esi+0x38],offset ZList<CUserPool::COUPLEENTRY>::`vftable'
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x48],edi
	int 3// TODO: 	mov dword ptr [esi+0x54],offset ZList<ZRef<CUserRemote>>::`vftable'
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	int 3// TODO: 	mov dword ptr [esi+0x68],offset ZList<CUserPool::FRIENDENTRY>::`vftable'
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	int 3// TODO: 	mov dword ptr [esi+0x7C],offset ZList<CUserPool::NEWYEARCARDENTRY>::`vftable'
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x8C],edi
	lea ecx,[esi+0x90]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZList<unsigned long>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0xA8],offset ZList<CUserPool::MARRIAGEENTRY>::`vftable'
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	int 3// TODO: 	mov dword ptr [esi+0xBC],offset ZList<CUserPool::COUPLECHAIRENTRY>::`vftable'
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov byte ptr [esp+0x18],0xA
	mov dword ptr [esi+0x50],edi
	call timeGetTime
	add eax,0x4E20
	mov dword ptr [esi+0x4C],eax
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
// CUserPool::OnUserCommonPacket
__SUB_CLASS_THIS(0054CDB0, __thiscall, 41275,  CUserPool, void, long, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	mov ebp,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	mov ecx,ebp
	call CUserPool::GetUser
	mov ebx,dword ptr [esp+0x14]
	mov esi,eax
	cmp ebx,0xB6
	jne Block4

 Block1:
	test esi,esi
	jne Block3

 Block2:
	mov esi,dword ptr [ebp+8]
	jmp Block4

 Block3:
	mov ebx,0xB5

 Block4:
	test esi,esi
	je Block27

 Block5:
	lea eax,[ebx-0xB5]
	cmp eax,0x10
	ja Block23

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11
cmp EAX, 5
je Block12
cmp EAX, 6
je Block13
cmp EAX, 7
je Block15
cmp EAX, 8
je Block14
cmp EAX, 9
je Block16
cmp EAX, 10
je Block17
cmp EAX, 11
je Block18
cmp EAX, 12
je Block19
cmp EAX, 13
je Block20
cmp EAX, 14
je Block21
cmp EAX, 15
je Block23
cmp EAX, 16
je Block22


 Block7:
	push 0
	push edi
	mov ecx,esi
	call CUser::OnChat
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block8:
	push 1
	push edi
	mov ecx,esi
	call CUser::OnChat
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block9:
	push edi
	mov ecx,esi
	call CUser::OnADBoard
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block10:
	push edi
	mov ecx,esi
	call CUser::OnMiniRoomBalloon
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block11:
	push edi
	mov ecx,esi
	call CUser::SetConsumeItemEffect_1
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block12:
	push edi
	mov ecx,esi
	call CUser::ShowItemUpgradeEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block13:
	push edi
	mov ecx,esi
	call CUser::ShowItemHyperUpgradeEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block14:
	push edi
	mov ecx,esi
	call CUser::ShowItemReleaseEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block15:
	push edi
	mov ecx,esi
	call CUser::ShowItemOptionUpgradeEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block16:
	push edi
	mov ecx,esi
	call CUser::ShowItemUnreleaseEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block17:
	push edi
	mov ecx,esi
	call CUser::OnHitByUser
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block18:
	push edi
	mov ecx,esi
	call CUser::OnTeslaTriangle
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block19:
	push edi
	mov ecx,esi
	call CUser::OnFollowCharacter
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block20:
	push edi
	mov ecx,esi
	call CUser::OnShowPQReward
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block21:
	push edi
	mov ecx,esi
	call CUser::OnSetPhase
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block22:
	push edi
	mov ecx,esi
	call CUser::ShowRecoverUpgradeCountEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block23:
	lea eax,[ebx-0xC6]
	cmp eax,7
	ja Block25

 Block24:
	push edi
	push ebx
	mov ecx,esi
	call CUser::OnPetPacket

 Block25:
	lea ecx,[ebx-0xCE]
	cmp ecx,2
	ja Block27

 Block26:
	push edi
	push ebx
	mov ecx,esi
	call CUser::OnDragonPacket

 Block27:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CUserPool::OnFriendRecordRemove
__SUB_CLASS_THIS(0054D020, __thiscall, 41278,  CUserPool, void, const _LARGE_INTEGER&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	push edi
	mov edi,ecx
	mov ecx,ebx
	or ecx,eax
	mov dword ptr [esp+0xC],eax
	je Block11

 Block1:
	mov eax,dword ptr [edi+0x74]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block11

 Block2:
	push ebp
	push esi
	jmp Block4

 Block4:
	lea edx,[esp+0x1C]
	push edx
	mov ebp,eax
	call ZList<CUserPool::FRIENDENTRY>::GetNext
	mov esi,eax
	mov eax,dword ptr [esi+8]
	add esp,4
	cmp eax,ebx
	jne Block6

 Block5:
	mov ecx,dword ptr [esi+0xC]
	cmp ecx,dword ptr [esp+0x14]
	je Block10

 Block6:
	mov edx,dword ptr [esi+0x10]
	cmp edx,ebx
	jne Block8

 Block7:
	mov eax,dword ptr [esi+0x14]
	cmp eax,dword ptr [esp+0x14]
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block4

 Block9:
	pop esi
	pop ebp
	pop edi
	pop ebx
	add esp,8
	ret 4

 Block10:
	mov ecx,dword ptr [esi]
	push ecx
	mov ecx,edi
	call CUserPool::GetUser
	mov edx,dword ptr [esi+4]
	push edx
	mov ecx,edi
	mov ebx,eax
	call CUserPool::GetUser
	mov ecx,dword ptr [esi+0x18]
	push ecx
	push eax
	push 0
	mov ecx,ebx
	call CUser::SetFriendShipItemEffect
	push ebp
	lea ecx,[edi+0x68]
	call ZList<CUserPool::FRIENDENTRY>::RemoveAt
	pop esi
	pop ebp

 Block11:
	pop edi
	pop ebx
	add esp,8
	ret 4
}
}
// CUserPool::OnCoupleChairRecordAdd
__SUB_CLASS_THIS(0054D8B0, __thiscall, 41284,  CUserPool, void, unsigned long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CUserPool::OnCoupleChairRecordRemove
	lea ecx,[esi+0xBC]
	call ZList<CUserPool::COUPLECHAIRENTRY>::AddTail_
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [eax],edi
	xor ecx,ecx
	pop edi
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],ecx
	pop esi
	ret 8
}
}
// CUserPool::CreateLocalUser
_SUB_EXCEPTION_HANDLER(54C220)
__SUB_CLASS_THIS(0054C220, __thiscall, 41256,  CUserPool, void, NakedParam<ZRef<CharacterData>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54C220
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
	mov edi,ecx
	mov ecx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebp

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetCharacterData
	push 0x4880
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx]
	push ecx
	mov ecx,eax
	call CUserLocal::_ctor_0
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block18

 Block6:
	add eax,8
	je Block18

 Block7:
	lea esi,[eax-8]
	test esi,esi
	je Block9

 Block8:
	lea edx,[esi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [edi+8]
	mov dword ptr [edi+8],esi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block11

 Block10:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUserLocal>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+8]
	call CUserLocal::Init
	mov ecx,dword ptr [TSingleton<CDamageMeter>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block12:
	call CDamageMeter::LoadDamageInfo

 Block13:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block17

 Block14:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push edi
	call ebp
	test esi,esi
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 8

 Block18:
	xor esi,esi
	jmp Block9
}
}
// CUserPool::GetUser
__SUB_CLASS_THIS(0054C350, __thiscall, 41274,  CUserPool, CUser*, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax+0x19E8],edx
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CUserPool::GetRemoteUser

 Block3:
	ret 4
}
}
// CUserPool::OnFriendRecordAdd
__SUB_CLASS_THIS(0054D700, __thiscall, 41277,  CUserPool, void, const _LARGE_INTEGER&, CUser*, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	push ebp
	mov ebp,ecx
	mov ecx,ebx
	or ecx,eax
	mov dword ptr [esp+0xC],eax
	je Block16

 Block1:
	mov ecx,dword ptr [esp+0x18]
	push esi
	mov esi,dword ptr [ebp+8]
	push edi
	mov edi,ecx
	cmp ebx,dword ptr [esi+0x2F08]
	jne Block3

 Block2:
	cmp eax,dword ptr [esi+0x2F0C]
	je Block11

 Block3:
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block15

 Block4:
	jmp Block6

 Block6:
	lea edx,[esp+0x1C]
	push edx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0x10]
	add esp,4
	cmp ebx,dword ptr [esi+0x2F08]
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esi+0x2F0C]
	je Block10

 Block8:
	cmp dword ptr [esp+0x1C],0
	jne Block6

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0xC

 Block10:
	mov ecx,edi

 Block11:
	test esi,esi
	je Block15

 Block12:
	mov edx,dword ptr [ecx+0x19E8]
	cmp edx,dword ptr [esi+0x19E8]
	jbe Block14

 Block13:
	mov edi,esi
	mov esi,ecx

 Block14:
	lea ecx,[ebp+0x68]
	call ZList<CUserPool::FRIENDENTRY>::AddTail_
	mov ecx,dword ptr [edi+0x19E8]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0x19E8]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [edi+0x2F00]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [edi+0x2F04]
	mov dword ptr [eax+0xC],edx
	mov ecx,dword ptr [esi+0x2F00]
	mov dword ptr [eax+0x10],ecx
	mov edx,dword ptr [esi+0x2F04]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax+0x14],edx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],0

 Block15:
	pop edi
	pop esi

 Block16:
	pop ebp
	pop ebx
	add esp,8
	ret 0xC
}
}
// CUserPool::OnUserRemotePacket
// 94B53C
static uint8_t _SUB_54B390_LOOKUP_TABLE_0[20] = {
0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 2, 8, 3, 
4, 5, 6, 7, 
};
__SUB_CLASS_THIS(0054B390, __thiscall, 41275,  CUserPool, void, long, CInPacket&) {
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
	call CUserPool::GetRemoteUser
	mov esi,eax
	test esi,esi
	je Block25

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3854],0
	jne Block25

 Block2:
	cmp dword ptr [esi+0x638],0
	push ebx
	mov ebx,dword ptr [esp+0x10]
	jne Block15

 Block3:
	lea eax,[ebx-0xD3]
	cmp eax,0x13
	ja Block15

 Block4:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block5
cmp EAX, 2
je Block5
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block15
cmp EAX, 12
je Block15
cmp EAX, 13
je Block13
cmp EAX, 14
je Block15
cmp EAX, 15
je Block15
cmp EAX, 16
je Block15
cmp EAX, 17
je Block15
cmp EAX, 18
je Block15
cmp EAX, 19
je Block14


 Block5:
	push edi
	push ebx
	mov ecx,esi
	call CUserRemote::OnAttack
	jmp Block15

 Block6:
	push edi
	mov ecx,esi
	call CUserRemote::OnSkillPrepare
	jmp Block15

 Block7:
	push edi
	mov ecx,esi
	call CUserRemote::OnMovingShootAttackPrepare
	jmp Block15

 Block8:
	push edi
	mov ecx,esi
	call CUserRemote::OnSkillCancel
	jmp Block15

 Block9:
	push edi
	mov ecx,esi
	call CUserRemote::OnHit
	jmp Block15

 Block10:
	push edi
	mov ecx,esi
	call CUser::OnEmotion
	jmp Block15

 Block11:
	push edi
	mov ecx,esi
	call CUserRemote::OnSetActiveEffectItem
	jmp Block15

 Block12:
	push edi
	mov ecx,esi
	call CUserRemote::OnShowUpgradeTombEffect
	jmp Block15

 Block13:
	push edi
	mov ecx,esi
	call CUser::OnEffect
	jmp Block15

 Block14:
	push edi
	mov ecx,esi
	call CUserRemote::OnThrowGrenade

 Block15:
	lea eax,[ebx-0xD2]
	pop ebx
	cmp eax,0x13
	ja Block25

 Block16:
	movzx ecx,byte ptr [eax+_SUB_54B390_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block17
cmp ECX, 1
je Block18
cmp ECX, 2
je Block19
cmp ECX, 3
je Block20
cmp ECX, 4
je Block21
cmp ECX, 5
je Block24
cmp ECX, 6
je Block22
cmp ECX, 7
je Block23
cmp ECX, 8
je Block25


 Block17:
	push edi
	mov ecx,esi
	call CUserRemote::OnMove
	pop edi
	pop esi
	ret 8

 Block18:
	push edi
	mov ecx,esi
	call CUserRemote::OnSetActivePortableChair
	pop edi
	pop esi
	ret 8

 Block19:
	push edi
	mov ecx,esi
	call CUserRemote::OnAvatarModified
	pop edi
	pop esi
	ret 8

 Block20:
	push edi
	mov ecx,esi
	call CUserRemote::OnSetTemporaryStat
	pop edi
	pop esi
	ret 8

 Block21:
	push edi
	mov ecx,esi
	call CUserRemote::OnResetTemporaryStat
	pop edi
	pop esi
	ret 8

 Block22:
	push edi
	mov ecx,esi
	call CUserRemote::OnGuildNameChanged
	pop edi
	pop esi
	ret 8

 Block23:
	push edi
	mov ecx,esi
	call CUserRemote::OnGuildMarkChanged
	pop edi
	pop esi
	ret 8

 Block24:
	push edi
	mov ecx,esi
	call CUserRemote::OnReceiveHP

 Block25:
	pop edi
	pop esi
	ret 8
}
}
// USERREMOTE_ENTRY::~USERREMOTE_ENTRY
_SUB_EXCEPTION_HANDLER(54B320)
__SUB_CLASS_THIS0(0054B320, __thiscall, 43881,  USERREMOTE_ENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B320
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
	call ZRef<CUserRemote>::_ReleaseRaw
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
// CUserPool::OnCoupleRecordRemove
__SUB_CLASS_THIS(0054CF70, __thiscall, 41278,  CUserPool, void, const _LARGE_INTEGER&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push ebx
	mov ebx,dword ptr [eax+4]
	push ebp
	push edi
	mov edi,dword ptr [eax]
	mov eax,edi
	or eax,ebx
	mov ebp,ecx
	je Block13

 Block1:
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block13

 Block2:
	push esi

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x14],eax
	call ZList<CUserPool::COUPLEENTRY>::GetNext
	mov esi,eax
	mov edx,dword ptr [esi+8]
	add esp,4
	cmp edx,edi
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebx
	je Block9

 Block5:
	mov ecx,dword ptr [esi+0x10]
	cmp ecx,edi
	jne Block7

 Block6:
	mov edx,dword ptr [esi+0x14]
	cmp edx,ebx
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	jne Block3

 Block8:
	pop esi
	pop edi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block9:
	mov eax,dword ptr [esi]
	push eax
	mov ecx,ebp
	call CUserPool::GetUser
	mov ecx,dword ptr [esi+4]
	push ecx
	mov ecx,ebp
	mov edi,eax
	call CUserPool::GetUser
	test edi,edi
	je Block12

 Block10:
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [esi+0x18]
	push edx
	push eax
	push 0
	mov ecx,edi
	call CUser::SetCoupleItemEffect

 Block12:
	mov eax,dword ptr [esp+0x10]
	push eax
	lea ecx,[ebp+0x38]
	call ZList<CUserPool::COUPLEENTRY>::RemoveAt
	pop esi

 Block13:
	pop edi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CUserPool::OnNewYearCardRecordRemoveAll
__SUB_CLASS_THIS(0054D160, __thiscall, 41281,  CUserPool, void, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push ebp
	mov ebp,ecx
	lea eax,[esp+0x10]
	push eax
	lea ecx,[ebp+0x90]
	call ZMap<unsigned long, ZList<unsigned long>, unsigned long>::RemoveKey
	mov eax,dword ptr [ebp+0x88]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block12

 Block1:
	push ebx
	push esi
	push edi
	jmp Block3

 Block3:
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x18],eax
	call ZList<CUserPool::NEWYEARCARDENTRY>::GetNext
	mov ecx,dword ptr [esp+0x20]
	mov esi,eax
	mov eax,dword ptr [esi]
	add esp,4
	cmp eax,ecx
	je Block5

 Block4:
	cmp dword ptr [esi+4],ecx
	jne Block10

 Block5:
	push eax
	mov ecx,ebp
	call CUserPool::GetUser
	mov edx,dword ptr [esi+4]
	push edx
	mov ecx,ebp
	mov edi,eax
	call CUserPool::GetUser
	mov ebx,eax
	test edi,edi
	je Block7

 Block6:
	mov eax,dword ptr [esi+8]
	push 0x419CE0
	push eax
	push ebx
	push 0
	mov ecx,edi
	call CUser::SetNewYearCardEffect

 Block7:
	test ebx,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [esi+8]
	push 0x419CE0
	push ecx
	push edi
	push 0
	mov ecx,ebx
	call CUser::SetNewYearCardEffect

 Block9:
	mov edx,dword ptr [esp+0x14]
	push edx
	lea ecx,[ebp+0x7C]
	call ZList<CUserPool::NEWYEARCARDENTRY>::RemoveAt

 Block10:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block3

 Block11:
	pop edi
	pop esi
	pop ebx

 Block12:
	pop ebp
	add esp,8
	ret 4
}
}
// CUserPool::FindBalloon
_SUB_EXCEPTION_HANDLER(54B730)
__SUB_CLASS_THIS(0054B730, __thiscall, 41264,  CUserPool, CUserRemote*, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54B730
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
	mov ecx,dword ptr [ecx+0x30]
	xor ebx,ebx
	mov dword ptr [esp+0x14],ecx
	cmp ecx,ebx
	je Block9

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,edi

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block4

 Block3:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x38],ebx
	cmp dword ptr [eax+0x2DF4],ebx
	je Block6

 Block5:
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[eax+0x14]
	call CChatBalloon::GetMiniRoomBalloonRect
	mov eax,dword ptr [esp+0x40]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	call PtInRect
	test eax,eax
	jne Block11

 Block6:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block11:
	mov ebx,dword ptr [esi+0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block12:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov eax,ebx
	jmp Block10
}
}
// CUserPool::OnPacket
__SUB_CLASS_THIS(0054DDF0, __thiscall, 41275,  CUserPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,eax
	sub edx,0xB3
	je Block9

 Block1:
	sub edx,1
	je Block8

 Block2:
	lea edx,[eax-0xB5]
	cmp edx,0x1C
	ja Block4

 Block3:
	mov dword ptr [esp+4],eax
	jmp  CUserPool::OnUserCommonPacket

 Block4:
	lea edx,[eax-0xD2]
	cmp edx,0x14
	ja Block6

 Block5:
	mov dword ptr [esp+4],eax
	jmp  CUserPool::OnUserRemotePacket

 Block6:
	lea edx,[eax-0xE7]
	cmp edx,0x2D
	ja Block10

 Block7:
	mov dword ptr [esp+4],eax
	jmp  CUserPool::OnUserLocalPacket

 Block8:
	mov eax,dword ptr [esp+8]
	push eax
	call CUserPool::OnUserLeaveField
	ret 8

 Block9:
	mov edx,dword ptr [esp+8]
	push edx
	call CUserPool::OnUserEnterField

 Block10:
	ret 8
}
}
