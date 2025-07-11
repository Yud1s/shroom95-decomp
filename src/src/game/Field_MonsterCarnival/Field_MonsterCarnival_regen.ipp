#include "regen.hpp"
// Field_MonsterCarnival.ipp
#include "Field_MonsterCarnival.hpp"

// CField_MonsterCarnival::OnShowMemberOutMsg
_SUB_EXCEPTION_HANDLER(15AD80)
__SUB_CLASS_THIS(0015AD80, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15AD80
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	call CInPacket::Decode1
	xor ecx,ecx
	cmp al,6
	sete cl
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	jne Block2

 Block1:
	lea edx,[esp+0x20]
	push 0x1017
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],ebp
	lea ebx,[ebp+1]
	jmp Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x1018
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],1
	mov ebx,2

 Block3:
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x40],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x34],3
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov byte ptr [esp+0x34],4
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0x34],6
	cmp edi,ebp
	je Block11

 Block10:
	lea edx,[esp+0x24]
	push 0x102A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x3C]
	push ecx
	mov byte ptr [esp+0x38],7
	push esi
	jmp Block12

 Block11:
	lea eax,[esp+0x24]
	push 0x1029
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x18]
	push esi
	mov byte ptr [esp+0x38],8
	push ecx

 Block12:
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x20]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov byte ptr [esp+0x34],6
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov edi,dword ptr [esp+0x14]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block16

 Block15:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::ChatLogAdd

 Block16:
	mov byte ptr [esp+0x34],5
	cmp edi,ebp
	je Block18

 Block17:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],4
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp esi,ebp
	je Block22

 Block21:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField_MonsterCarnival::OnPacket
__SUB_CLASS_THIS(0015BBA0, __thiscall, 143362,  CField_MonsterCarnival, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x15A]
	cmp eax,7
	ja Block10

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
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


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnEnter
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnPersonalCP
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnTeamCP
	ret 8

 Block5:
	mov dword ptr [esp+4],1
	add ecx,0xFFFFFFF8
	jmp  CField_MonsterCarnival::OnRequestResult

 Block6:
	mov dword ptr [esp+4],0
	add ecx,0xFFFFFFF8
	jmp  CField_MonsterCarnival::OnRequestResult

 Block7:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnProcessForDeath
	ret 8

 Block8:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnShowMemberOutMsg
	ret 8

 Block9:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnival::OnShowGameResult
	ret 8

 Block10:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket
}
}
// CField_MonsterCarnivalRevive::OnShowGameResult
_SUB_EXCEPTION_HANDLER(15B110)
__SUB_CLASS_THIS(0015B110, __thiscall, 143446,  CField_MonsterCarnivalRevive, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15B110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x30]
	call CInPacket::Decode1
	xor esi,esi
	movzx eax,al
	xor ebx,ebx
	mov dword ptr [esp+0x30],esi
	add eax,0xFFFFFFF8
	mov dword ptr [esp+0x28],ebx
	cmp eax,3
	ja Block12

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	lea eax,[esp+0xC]
	push 0x1020
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x14]
	jmp Block6

 Block3:
	lea edx,[esp+0x10]
	push 0x1021
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	jmp Block6

 Block4:
	lea ecx,[esp+0x14]
	push 0x1022
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	jmp Block6

 Block5:
	lea eax,[esp+0x18]
	push 0x1023
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x30],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]

 Block6:
	add esp,8
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [esp+0x30]
	cmp esi,ebx
	je Block12

 Block9:
	cmp byte ptr [esi],bl
	je Block12

 Block10:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block12

 Block11:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block12:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block14

 Block13:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CField_MonsterCarnival::CreateUIWindow
_SUB_EXCEPTION_HANDLER(15A510)
__SUB_CLASS_THIS0(0015A510, __thiscall, 143358,  CField_MonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15A510
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
	cmp dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],0
	jne Block2

 Block1:
	call TSingleton<CUIMonsterCarnival>::CreateInstance

 Block2:
	xor edi,edi
	xor ebx,ebx
	or ebp,0xFFFFFFFF
	mov edi,edi

 Block3:
	mov eax,dword ptr [esi+0xDA0]
	test eax,eax
	je Block6

 Block4:
	cmp edi,dword ptr [eax-4]
	jae Block6

 Block5:
	push ecx
	add eax,ebx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xDA0]
	mov ecx,dword ptr [eax+ebx+8]
	add eax,ebx
	push ecx
	push ecx
	mov ecx,esp
	add eax,4
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [esp+0x34],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	inc edi
	push edi
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push 0
	call CUIMonsterCarnival::SetUIData
	add ebx,0x10
	jmp Block3

 Block6:
	xor edi,edi
	xor ebx,ebx
	mov edi,edi

 Block7:
	mov eax,dword ptr [esi+0xDA4]
	test eax,eax
	je Block10

 Block8:
	cmp edi,dword ptr [eax-4]
	jae Block10

 Block9:
	push ecx
	add eax,ebx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+0xDA4]
	mov ecx,dword ptr [ebx+edx+8]
	lea eax,[ebx+edx]
	push ecx
	push ecx
	mov ecx,esp
	add eax,4
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [esp+0x34],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	inc edi
	push edi
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push 1
	call CUIMonsterCarnival::SetUIData
	add ebx,0x10
	jmp Block7

 Block10:
	xor edi,edi
	xor ebx,ebx
	nop

 Block11:
	mov eax,dword ptr [esi+0xDA8]
	test eax,eax
	je Block14

 Block12:
	cmp edi,dword ptr [eax-4]
	jae Block14

 Block13:
	push ecx
	add eax,ebx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+0xDA8]
	mov ecx,dword ptr [edx+ebx+8]
	lea eax,[edx+ebx]
	push ecx
	push ecx
	mov ecx,esp
	add eax,4
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [esp+0x34],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	inc edi
	push edi
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push 2
	call CUIMonsterCarnival::SetUIData
	add ebx,0x10
	jmp Block11

 Block14:
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	call CUIMonsterCarnival::ResetUI
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
// CField_MonsterCarnival::DecodeFieldSpecificData
__SUB_CLASS_THIS(0015A280, __thiscall, 143361,  CField_MonsterCarnival, void, CUser*, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+4]
	movsx eax,al
	mov dword ptr [ecx+0x2DF0],eax
	ret 8
}
}
// CField_MonsterCarnival::GetFieldType
__SUB_CLASS_THIS0(0013ECC0, __thiscall, 143360,  CField_MonsterCarnival, long) {
__asm {

 Block0:
	mov eax,0xA
	ret
}
}
// CField_MonsterCarnival::OnProcessForDeath
_SUB_EXCEPTION_HANDLER(15AB90)
__SUB_CLASS_THIS(0015AB90, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15AB90
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x34],ebp
	call CInPacket::Decode1
	movzx esi,al
	cmp edi,ebp
	jne Block2

 Block1:
	lea ecx,[esp+0x20]
	push 0x1017
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x34],1
	lea ebx,[ebp+1]
	jmp Block3

 Block2:
	lea edx,[esp+0x1C]
	push 0x1018
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x34],ebx

 Block3:
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x40],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x34],4
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov byte ptr [esp+0x34],5
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov dword ptr [esp+0x14],ebp
	cmp esi,ebp
	mov bl,6
	mov byte ptr [esp+0x34],bl
	lea eax,[esp+0x24]
	jle Block11

 Block10:
	push 0x1019
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push esi
	mov esi,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],7
	jmp Block12

 Block11:
	push 0x101A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],8
	push esi

 Block12:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x14
	mov byte ptr [esp+0x34],bl
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov edi,dword ptr [esp+0x14]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block16

 Block15:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	push 0xFFFFFFFF
	push 7
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::ChatLogAdd

 Block16:
	mov byte ptr [esp+0x34],5
	cmp edi,ebp
	je Block18

 Block17:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov byte ptr [esp+0x34],0
	cmp esi,ebp
	je Block20

 Block19:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebp
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField_MonsterCarnival::~CField_MonsterCarnival
_SUB_EXCEPTION_HANDLER(15BCB0)
__SUB_CLASS_THIS0(0015BCB0, __thiscall, 143358,  CField_MonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15BCB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnival::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnival::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnival::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnival::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	mov dword ptr [esp+0x18],3
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block4:
	call CUserLocal::RedrawGuildNameTag

 Block5:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,eax
	mov dword ptr [eax+0x20B8],0
	call get_update_time
	lea ecx,[esi+0xDA8]
	mov dword ptr [edi+0x20BC],eax
	mov byte ptr [esp+0x18],2
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::RemoveAll
	lea ecx,[esi+0xDA4]
	mov byte ptr [esp+0x18],1
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::RemoveAll
	lea ecx,[esi+0xDA0]
	mov byte ptr [esp+0x18],0
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::RemoveAll
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
// CField_MonsterCarnival::OnShowGameResult
_SUB_EXCEPTION_HANDLER(15AF80)
__SUB_CLASS_THIS(0015AF80, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15AF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x30]
	call CInPacket::Decode1
	xor esi,esi
	movzx eax,al
	xor ebx,ebx
	mov dword ptr [esp+0x30],esi
	add eax,0xFFFFFFF8
	mov dword ptr [esp+0x28],ebx
	cmp eax,3
	ja Block12

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	lea eax,[esp+0xC]
	push 0x1020
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x14]
	jmp Block6

 Block3:
	lea edx,[esp+0x10]
	push 0x1021
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	jmp Block6

 Block4:
	lea ecx,[esp+0x14]
	push 0x1022
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	jmp Block6

 Block5:
	lea eax,[esp+0x18]
	push 0x1023
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x30],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]

 Block6:
	add esp,8
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [esp+0x30]
	cmp esi,ebx
	je Block12

 Block9:
	cmp byte ptr [esi],bl
	je Block12

 Block10:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block12

 Block11:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block12:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block14

 Block13:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CField_MonsterCarnival::MCITEM_INFO::~MCITEM_INFO
_SUB_EXCEPTION_HANDLER(12E4A0)
__SUB_CLASS_THIS0(0012E4A0, __thiscall, 143379,  CField_MonsterCarnival::MCITEM_INFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12E4A0
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
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_MonsterCarnivalRevive::CField_MonsterCarnivalRevive
__SUB_CLASS_THIS0(0013ED00, __thiscall, 143440,  CField_MonsterCarnivalRevive, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnivalRevive::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnivalRevive::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnivalRevive::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnivalRevive::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_MonsterCarnival::CField_MonsterCarnival
__SUB_CLASS_THIS0(0013EC70, __thiscall, 143356,  CField_MonsterCarnival, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnival::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnival::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnival::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnival::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_MonsterCarnival::Init
_SUB_EXCEPTION_HANDLER(15B2A0)
__SUB_CLASS_THIS(0015B2A0, __thiscall, 143359,  CField_MonsterCarnival, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15B2A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CField::Init
	xor edi,edi
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MONSTERCARNIVAL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x2C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],4
	call esi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push edi
	push edi
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x8E6
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ebx,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x4C],bx
	jne Block25

 Block19:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp],bx
	jne Block26

 Block23:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block27

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block25:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x4C]
	push edx
	call esi
	jmp Block22

 Block26:
	lea ecx,[ebp]
	push ecx
	call esi

 Block27:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x1C],bx
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block31:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MOB__1
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xC
	cmp ebx,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xF
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0x3C]
	push eax
	call esi

 Block40:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],edi
	call eax
	cmp eax,edi
	jge Block44

 Block43:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	cmp dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x5C],edi
	jle Block70

 Block45:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0x10
	push edx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	test eax,eax
	je Block48

 Block46:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	test eax,eax
	jge Block48

 Block47:
	cmp eax,0x80004002
	jne Block4

 Block48:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0x13
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov ecx,dword ptr [ebp+0x40]
	push 0xFFFFFFFF
	add ecx,0xDA0
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::InsertBefore
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ID
	mov edi,eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x14
	test esi,esi
	je Block1

 Block53:
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x30],bx
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ecx,dword ptr [edi]
	push ecx
	call CMobTemplate::GetMobTemplate
	add esp,4
	test eax,eax
	jne Block59

 Block58:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xF
	call eax
	jmp Block68

 Block59:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [edi]
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block61

 Block60:
	mov eax,ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block61:
	lea eax,[ebp+0x58]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[edi+4]
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SPENDCP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x10],bx
	jne Block66

 Block64:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push 0
	push offset _S_
	push 0
	add edi,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xF
	call edx

 Block68:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],eax
	jl Block45

 Block69:
	mov ebx,dword ptr [ebp+0x54]
	xor edi,edi

 Block70:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SKILL__2
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0x19
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,edi
	je Block74

 Block71:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x58]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x1C
	jne Block77

 Block75:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	cmp esi,edi
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],edi
	call eax
	cmp eax,edi
	jge Block82

 Block81:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block82:
	cmp dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x5C],edi
	jle Block91

 Block83:
	mov esi,edi

 Block84:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1D
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x1C
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetMCSkill
	mov edi,eax
	test edi,edi
	je Block90

 Block89:
	mov ecx,dword ptr [ebp+0x40]
	push 0xFFFFFFFF
	add ecx,0xDA4
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::InsertBefore
	mov esi,eax
	push edi
	lea ecx,[esi+4]
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+8]
	add edi,4
	mov dword ptr [esi+8],ecx
	push edi
	lea ecx,[esi+0xC]
	call ZXString<char>::op_assign
	mov esi,dword ptr [ebp+0x5C]

 Block90:
	inc esi
	cmp esi,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],esi
	jl Block84

 Block91:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_GUARDIAN
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	cmp eax,esi
	je Block95

 Block92:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x58]
	cmp eax,esi
	mov edi,ecx
	mov dword ptr [ebp+0x64],edi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x22
	jne Block98

 Block96:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,esi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block99:
	cmp edi,esi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x60]
	push edx
	push edi
	mov dword ptr [ebp+0x60],esi
	call eax
	cmp eax,esi
	jge Block103

 Block102:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block103:
	cmp dword ptr [ebp+0x60],esi
	mov dword ptr [ebp+0x5C],esi
	jle Block112

 Block104:
	lea ecx,[ecx]

 Block105:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0x23
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x20],8
	mov dword ptr [ebp+0x44],eax
	mov byte ptr [ebp-4],0x22
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov edx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	call CSkillInfo::GetMCGuardian
	mov ebx,eax
	test ebx,ebx
	je Block111

 Block110:
	mov ecx,dword ptr [ebp+0x40]
	push 0xFFFFFFFF
	add ecx,0xDA8
	call ZArray<CField_MonsterCarnival::MCITEM_INFO>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [ebp+0x44]
	push ebx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebx+8]
	add ebx,4
	mov dword ptr [esi+8],ecx
	push ebx
	lea ecx,[esi+0xC]
	call ZXString<char>::op_assign

 Block111:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],eax
	jl Block105

 Block112:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x1C
	call eax
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xF
	call edx
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CField_MonsterCarnival::OnRequestResult
_SUB_EXCEPTION_HANDLER(15A890)
__SUB_CLASS_THIS(0015A890, __thiscall, 143364,  CField_MonsterCarnival, void, int32_t, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15A890
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
	xor ebp,ebp
	cmp dword ptr [esp+0x38],ebp
	je Block15

 Block1:
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	movzx ebx,al
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x30],ebp
	cmp dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],ebp
	je Block13

 Block2:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x40],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push ebx
	push edi
	call CUIMonsterCarnival::RequestResult
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edi+0x20CC]
	cmp eax,ebp
	je Block4

 Block3:
	lea ecx,[eax+4]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	xor esi,esi
	mov dword ptr [esp+0x3C],esi
	cmp ecx,ebp
	je Block9

 Block6:
	mov eax,ecx
	lea esi,[eax+1]
	lea ecx,[ecx]

 Block7:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block7

 Block8:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebp
	push esi
	lea ecx,[esp+0x4C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x40]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x3C]

 Block9:
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block11

 Block10:
	mov dword ptr [edi+0x20B8],ebp
	call get_update_time
	mov dword ptr [edi+0x20BC],eax

 Block11:
	mov byte ptr [esp+0x30],0
	cmp esi,ebp
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block31

 Block14:
	add eax,0xFFFFFFF4
	push eax
	jmp Block30

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	call CInPacket::Decode1
	xor esi,esi
	movzx eax,al
	mov dword ptr [esp+0x3C],esi
	dec eax
	mov ebx,2
	mov dword ptr [esp+0x30],ebx
	cmp eax,4
	ja Block28

 Block16:
	cmp EAX, 0
je Block17
cmp EAX, 1
je Block18
cmp EAX, 2
je Block19
cmp EAX, 3
je Block20
cmp EAX, 4
je Block21


 Block17:
	lea ecx,[esp+0x14]
	push 0x101B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	jmp Block22

 Block18:
	lea eax,[esp+0x18]
	push 0x101C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	jmp Block22

 Block19:
	lea edx,[esp+0x1C]
	push 0x101D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x38],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	jmp Block22

 Block20:
	lea ecx,[esp+0x20]
	push 0x101E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x38],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	jmp Block22

 Block21:
	lea eax,[esp+0x24]
	push 0x101F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x38],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]

 Block22:
	add esp,8
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov esi,dword ptr [esp+0x3C]
	cmp esi,ebp
	je Block28

 Block25:
	cmp byte ptr [esi],0
	je Block28

 Block26:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block28

 Block27:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push ebp
	push 0xFFFFFFFF
	push 7
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block28:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,eax
	mov dword ptr [eax+0x20B8],ebp
	call get_update_time
	mov dword ptr [edi+0x20BC],eax
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebp
	je Block31

 Block29:
	add esi,0xFFFFFFF4
	push esi

 Block30:
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CField_MonsterCarnivalRevive::OnPacket
__SUB_CLASS_THIS(0015BC70, __thiscall, 143445,  CField_MonsterCarnivalRevive, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x15A
	je Block4

 Block1:
	sub eax,7
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnivalRevive::OnShowGameResult
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_MonsterCarnivalRevive::OnEnter
	ret 8
}
}
// CField_MonsterCarnivalRevive::DecodeFieldSpecificData
__SUB_CLASS_THIS(0015A310, __thiscall, 143444,  CField_MonsterCarnivalRevive, void, CUser*, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+4]
	movsx eax,al
	mov dword ptr [ecx+0x2DF0],eax
	ret 8
}
}
// CField_MonsterCarnivalRevive::GetFieldType
__SUB_CLASS_THIS0(0013ED30, __thiscall, 143443,  CField_MonsterCarnivalRevive, long) {
__asm {

 Block0:
	mov eax,0xB
	ret
}
}
// CField_MonsterCarnivalRevive::OnEnter
__SUB_CLASS_THIS(0015A330, __thiscall, 143446,  CField_MonsterCarnivalRevive, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	movzx eax,al
	test ecx,ecx
	je Block2

 Block1:
	mov dword ptr [ecx+0x2DF0],eax
	call CUserLocal::RedrawGuildNameTag

 Block2:
	ret 4
}
}
// CField_MonsterCarnival::OnEnter
_SUB_EXCEPTION_HANDLER(15A6C0)
__SUB_CLASS_THIS(0015A6C0, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15A6C0
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
	mov ebp,ecx
	mov dword ptr [esp+0x24],ebp
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebx,ax
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,esi
	mov dword ptr [esp+0x38],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esp+0x14],ecx
	mov ecx,esi
	call CInPacket::Decode2
	movzx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x18],edx
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esp+0x1C],ecx
	mov ecx,ebp
	call CField_MonsterCarnival::CreateUIWindow
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push edi
	call CUIMonsterCarnival::SetTeam
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block12

 Block1:
	cmp dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],0
	je Block12

 Block2:
	mov dword ptr [ecx+0x2DF0],edi
	call CUserLocal::RedrawGuildNameTag
	mov edx,dword ptr [esp+0x38]
	mov ebp,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	push edx
	push ebx
	mov ecx,ebp
	call CUIMonsterCarnival::SetPersonalCP
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]
	push eax
	push ecx
	push edi
	mov ecx,ebp
	call CUIMonsterCarnival::SetTeamCP
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	xor ebx,ebx
	cmp edi,ebx
	sete cl
	push edx
	push eax
	push ecx
	mov ecx,ebp
	call CUIMonsterCarnival::SetTeamCP
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	lea esp,[esp]

 Block3:
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [ebx+0xDA0]
	test eax,eax
	je Block12

 Block4:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [eax-4]
	jae Block12

 Block5:
	mov ecx,esi
	call CInPacket::Decode1
	movzx edi,al
	mov eax,dword ptr [ebx+0xDA0]
	add eax,dword ptr [esp+0x18]
	xor ebx,ebx
	add eax,4
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebx
	call ZXString<char>::op_assign
	cmp edi,ebx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],ebx
	jle Block9

 Block6:
	cmp eax,ebx
	je Block9

 Block7:
	cmp byte ptr [eax],bl
	je Block9

 Block8:
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,ebp
	call CUIMonsterCarnival::InsertSpelledData
	mov eax,dword ptr [esp+0x38]

 Block9:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],0x10
	jmp Block3

 Block12:
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
// CField_MonsterCarnivalRevive::~CField_MonsterCarnivalRevive
_SUB_EXCEPTION_HANDLER(15A200)
__SUB_CLASS_THIS0(0015A200, __thiscall, 143442,  CField_MonsterCarnivalRevive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15A200
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnivalRevive::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnivalRevive::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnivalRevive::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnivalRevive::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x14],0
	test ecx,ecx
	je Block2

 Block1:
	call CUserLocal::RedrawGuildNameTag

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_MonsterCarnival::OnPersonalCP
__SUB_CLASS_THIS(0015A2A0, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov ecx,esi
	call CInPacket::Decode2
	mov ecx,esi
	movzx edi,ax
	call CInPacket::Decode2
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	movzx eax,ax
	test ecx,ecx
	je Block2

 Block1:
	push eax
	push edi
	call CUIMonsterCarnival::SetPersonalCP

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CField_MonsterCarnival::OnTeamCP
__SUB_CLASS_THIS(0015A2D0, __thiscall, 143363,  CField_MonsterCarnival, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebx,ax
	call CInPacket::Decode2
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	movzx eax,ax
	test ecx,ecx
	je Block2

 Block1:
	push eax
	push ebx
	push edi
	call CUIMonsterCarnival::SetTeamCP

 Block2:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}

// CField_MonsterCarnivalWaitingRoom::GetFieldType
__SUB_CLASS_THIS0(0013EF70, __thiscall, 143463,  CField_MonsterCarnivalWaitingRoom, long) {
__asm {

 Block0:
	mov eax,0x10
	ret
}
}
// CField_MonsterCarnivalS2_Game::Init
_SUB_EXCEPTION_HANDLER(15BF10)
__SUB_CLASS_THIS(0015BF10, __thiscall, 143479,  CField_MonsterCarnivalS2_Game, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15BF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x40]
	push eax
	call CField_MonsterCarnival::Init
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push offset _S_MONSTERCARNIVAL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [esp+0x44],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x40],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x40]
	test esi,esi
	je Block14

 Block10:
	push 0
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_MAPTYPE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	mov byte ptr [esp+0x40],4
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x44],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],5
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov dword ptr [edi+0xDB8],eax
	mov byte ptr [esp+0x38],3
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block16:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 4
}
}
// CField_MonsterCarnivalWaitingRoom::Init
_SUB_EXCEPTION_HANDLER(15BDA0)
__SUB_CLASS_THIS(0015BDA0, __thiscall, 143462,  CField_MonsterCarnivalWaitingRoom, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15BDA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x40]
	push eax
	call CField::Init
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push offset _S_MONSTERCARNIVAL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [esp+0x44],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x40],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x40]
	test esi,esi
	je Block14

 Block10:
	push 0
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_MAPTYPE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	mov byte ptr [esp+0x40],4
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x44],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],5
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov dword ptr [edi+0xDA0],eax
	mov byte ptr [esp+0x38],3
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block16:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 4
}
}
// CField_MonsterCarnivalS2_Game::GetFieldType
__SUB_CLASS_THIS0(0013F020, __thiscall, 143480,  CField_MonsterCarnivalS2_Game, long) {
__asm {

 Block0:
	mov eax,0xF
	ret
}
}
// CField_MonsterCarnivalS2_Game::CField_MonsterCarnivalS2_Game
__SUB_CLASS_THIS0(0013EFD0, __thiscall, 143476,  CField_MonsterCarnivalS2_Game, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnivalS2_Game::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnivalS2_Game::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnivalS2_Game::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnivalS2_Game::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_MonsterCarnivalWaitingRoom::CField_MonsterCarnivalWaitingRoom
__SUB_CLASS_THIS0(0013EF40, __thiscall, 143459,  CField_MonsterCarnivalWaitingRoom, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_MonsterCarnivalWaitingRoom::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MonsterCarnivalWaitingRoom::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MonsterCarnivalWaitingRoom::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MonsterCarnivalWaitingRoom::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
