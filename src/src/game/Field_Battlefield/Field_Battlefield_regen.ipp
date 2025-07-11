#include "regen.hpp"
// Field_Battlefield.ipp
#include "Field_Battlefield.hpp"

// CField_Battlefield::Init
__SUB_CLASS_THIS(00149960, __thiscall, 82721,  CField_Battlefield, void, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CField::Init
	mov ecx,esi
	call CField_Battlefield::DrawScore
	pop esi
	ret 4
}
}
// CField_Battlefield::CField_Battlefield
_SUB_EXCEPTION_HANDLER(149BD0)
__SUB_CLASS_THIS0(00149BD0, __thiscall, 82718,  CField_Battlefield, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_149BD0
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
	mov dword ptr [esp+0x18],esi
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_Battlefield::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Battlefield::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Battlefield::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Battlefield::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esi+0xDAC],eax
	lea edi,[esi+0xDB0]
	mov dword ptr [edi],eax
	lea ebp,[esi+0xDB4]
	mov dword ptr [ebp],eax
	lea eax,[esp+0x14]
	push 0x146A
	mov bl,3
	push eax
	mov byte ptr [esp+0x2C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x2C],4
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x146B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x2C],5
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x146C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x2C],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x14]
	push 0x146D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov byte ptr [esp+0x2C],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x14]
	push 0x146E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov byte ptr [esp+0x2C],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea edx,[esp+0x14]
	push 0x146F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov byte ptr [esp+0x2C],9
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CField_Battlefield::GetFieldType
__SUB_CLASS_THIS0(00149E00, __thiscall, 82722,  CField_Battlefield, long) {
__asm {

 Block0:
	mov eax,0x13
	ret
}
}
// CField_Battlefield::DecodeFieldSpecificData
__SUB_CLASS_THIS(00149980, __thiscall, 82723,  CField_Battlefield, void, CUser*, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,esi
	call CField_Battlefield::SetUserTeam
	pop esi
	ret 8
}
}
// CField_Battlefield::OnClock
_SUB_EXCEPTION_HANDLER(149AD0)
__SUB_CLASS_THIS(00149AD0, __thiscall, 82726,  CField_Battlefield, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_149AD0
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
	movzx eax,al
	cmp eax,2
	jne Block7

 Block1:
	mov ecx,dword ptr [esi+0x208]
	test ecx,ecx
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	push 0xF4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CScoreboard_Battlefield::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0xDA8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CScoreboard_Battlefield>::op_assign_ptr
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x204]
	call ZRef<CClock>::op_assign_ptr
	mov ecx,dword ptr [esi+0xDAC]
	push 1
	push 1
	push 0
	push 1
	push 0xC00616FC
	push 0x49
	push 0x102
	push 0x1E
	push 0xFFFFFF95
	call CWnd::CreateWnd
	mov edi,dword ptr [esi+0xDAC]
	mov ecx,ebx
	call CInPacket::Decode4
	push eax
	mov ecx,edi
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0xDAC]
	call CClock::Start
	mov ecx,esi
	call CField_Battlefield::DrawScore

 Block7:
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
// CField_Battlefield::SetUserTeam
__SUB_CLASS_THIS(00149870, __thiscall, 82727,  CField_Battlefield, void, CUser*, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ebx,ecx
	test esi,esi
	je Block6

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	push edi
	mov ecx,esi
	call edx
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block2:
	test edi,edi
	je Block4

 Block3:
	cmp edi,2
	jne Block5

 Block4:
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	push 0
	call CUIMiniMap::SetShowMiniMap
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	call CUIMiniMap::ToggleMap

 Block5:
	push esi
	mov ecx,ebx
	mov dword ptr [esi+0x3A80],edi
	call CField::ApplyUserLook
	pop edi

 Block6:
	pop esi
	pop ebx
	ret 8
}
}
// CField_Battlefield::OnTeamChanged
__SUB_CLASS_THIS(001499E0, __thiscall, 82726,  CField_Battlefield, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov esi,eax
	test esi,esi
	je Block2

 Block1:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx eax,al
	push eax
	push esi
	mov ecx,edi
	call CField_Battlefield::SetUserTeam

 Block2:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CField_Battlefield::OnPacket
__SUB_CLASS_THIS(00149A20, __thiscall, 82724,  CField_Battlefield, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x164
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_Battlefield::OnTeamChanged
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Battlefield::OnScoreUpdate
	ret 8
}
}
// CField_Battlefield::~CField_Battlefield
_SUB_EXCEPTION_HANDLER(149E20)
__SUB_CLASS_THIS0(00149E20, __thiscall, 82720,  CField_Battlefield, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_149E20
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_Battlefield::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Battlefield::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Battlefield::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Battlefield::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xDB4]
	mov dword ptr [esp+0x18],2
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0xDB0]
	mov byte ptr [esp+0x18],1
	call ZArray<ZXString<char>>::RemoveAll
	cmp dword ptr [esi+0xDAC],0
	lea edi,[esi+0xDA8]
	mov byte ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CScoreboard_Battlefield>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CField_Battlefield::GetTeamMessageText
_SUB_EXCEPTION_HANDLER(149EF0)
__SUB_CLASS_THIS(00149EF0, __thiscall, 82725,  CField_Battlefield, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_149EF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	xor esi,esi
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0xC],esi
	mov eax,dword ptr [esp+0x28]
	sub eax,esi
	mov dword ptr [esp+0x1C],1
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block6

 Block3:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block4:
	lea eax,[esi+eax*4]
	mov esi,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x10],1
	mov byte ptr [esp+0x1C],0
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8

 Block5:
	add ecx,0xDB4
	jmp Block7

 Block6:
	add ecx,0xDB0

 Block7:
	push ecx
	lea ecx,[esp+0x10]
	call ZArray<ZXString<char>>::operator=
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	je Block3

 Block8:
	mov edi,dword ptr [esi-4]
	test edi,edi
	je Block3

 Block9:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	mov eax,edx
	jmp Block4
}
}
// CField_Battlefield::DrawScore
__SUB_CLASS_THIS0(001498D0, __thiscall, 82720,  CField_Battlefield, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDAC]
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [ecx+0xDA0]
	mov ecx,dword ptr [ecx+0xDA4]
	mov dword ptr [eax+0xEC],ecx
	mov dword ptr [eax+0xF0],edx

 Block2:
	ret
}
}
// CField_Battlefield::OnScoreUpdate
__SUB_CLASS_THIS(001499A0, __thiscall, 82726,  CField_Battlefield, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esi+0xDA0],ebx
	mov dword ptr [esi+0xDA4],eax
	call CField_Battlefield::DrawScore
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
