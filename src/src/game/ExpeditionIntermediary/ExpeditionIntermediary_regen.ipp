#include "regen.hpp"
// ExpeditionIntermediary.ipp
#include "ExpeditionIntermediary.hpp"

// ExpeditionIntermediary::OnPacketExpNoti_MasterChanged
_SUB_EXCEPTION_HANDLER(1228F0)
__SUB_CLASS_THIS(001228F0, __thiscall, 43304,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_MasterChanged>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1228F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	xor edi,edi
	cmp eax,edi
	je Block13

 Block1:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	cmp ecx,edi
	je Block3

 Block2:
	call CUIUserList::OnExpeditionChanged

 Block3:
	mov ecx,dword ptr [esi+4]
	lea edx,[esp+0x18]
	push edx
	call EXPEDITION::GetMasterName
	mov esi,eax
	lea eax,[esp+0x14]
	push 0x1653
	push eax
	mov dword ptr [esp+0x30],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xC],edi
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x28],4
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],5
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],6
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov esi,dword ptr [esp+0x10]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],edi
	je Block11

 Block10:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push edi
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],edi
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block11:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,edi
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8
}
}
// PacketExpNoti_Notice::~PacketExpNoti_Notice
__SUB_CLASS_THIS0(00121440, __thiscall, 43220,  PacketExpNoti_Notice, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// ExpeditionIntermediary::SendExpCreatePacket
_SUB_EXCEPTION_HANDLER(1216F0)
__SUB_CLASS_THIS(001216F0, __thiscall, 43296,  ExpeditionIntermediary, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1216F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block2

 Block1:
	push 0x93
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x31
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// ExpeditionIntermediary::OnPacketExpNoti_Invite
_SUB_EXCEPTION_HANDLER(122220)
__SUB_CLASS_THIS(00122220, __thiscall, 43308,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_Invite>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_122220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x50]
	xor ebx,ebx
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsInBlackList
	cmp eax,ebx
	jne Block6

 Block1:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [ecx+0x38],ebx
	je Block6

 Block2:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x50]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push 0xE
	call CWvsContext::IsFadeWndExist
	cmp eax,ebx
	je Block4

 Block3:
	lea esi,[ebx+6]
	jmp Block7

 Block4:
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x10],esp
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push 0xE
	call CWvsContext::IsFadeWndExist
	cmp eax,ebx
	je Block8

 Block5:
	mov esi,5
	jmp Block7

 Block6:
	mov esi,4

 Block7:
	push 0x93
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x33
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x50]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	push esi
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	jmp Block12

 Block8:
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov esi,eax
	jmp Block11

 Block10:
	xor esi,esi

 Block11:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	push edx
	push eax
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x5C]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov byte ptr [esp+0x4C],bl
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIFadeYesNo::CreateExpedtionInvite
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::SetNewFadeWnd
	push 0x93
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 0x33
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],3
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x50]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	push 7
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]

 Block12:
	mov byte ptr [esp+0x38],bl
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x30
	ret 0x14
}
}
// ExpeditionIntermediary::OnPacketExpNoti_Notice
_SUB_EXCEPTION_HANDLER(122770)
__SUB_CLASS_THIS(00122770, __thiscall, 43302,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_Notice>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_122770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x2C]
	sub eax,0x3C
	mov bl,1
	mov byte ptr [esp+0x24],bl
	je Block5

 Block1:
	sub eax,4
	je Block4

 Block2:
	sub eax,2
	jne Block8

 Block3:
	lea eax,[esp+0x2C]
	push 0x1652
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	jmp Block6

 Block4:
	lea eax,[esp+0x10]
	push 0x1651
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	jmp Block6

 Block5:
	lea eax,[esp+0x14]
	push 0x1650
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]

 Block6:
	add esp,0xC
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov esi,dword ptr [esp+0xC]
	je Block10

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block10:
	mov byte ptr [esp+0x24],0
	test esi,esi
	je Block12

 Block11:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x1C
	ret 8
}
}
// PacketExpNoti_Invite::PacketExpNoti_Invite
_SUB_EXCEPTION_HANDLER(121350)
__SUB_CLASS_THIS(00121350, __thiscall, 43246,  PacketExpNoti_Invite, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121350
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
	lea eax,[esi+8]
	mov dword ptr [eax],0
	lea ecx,[esi+0xC]
	push ecx
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esi+4]
	push edx
	push esi
	push eax
	mov dword ptr [esp+0x28],0
	call __op_shift_right_2
	add esp,8
	push eax
	call __op_shift_right_2
	add esp,8
	push eax
	call __op_shift_right_3
	add esp,8
	push eax
	call __op_shift_right_2
	add esp,8
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// ExpeditionIntermediary::OnPacketExpNoti_Removed
_SUB_EXCEPTION_HANDLER(121850)
__SUB_CLASS_THIS(00121850, __thiscall, 43310,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_Removed>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	xor ebx,ebx
	cmp eax,ebx
	je Block17

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov dword ptr [esi+4],ebx
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	cmp ecx,ebx
	je Block3

 Block2:
	call CUIUserList::OnExpeditionChanged

 Block3:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],ebx
	cmp eax,0x41
	jne Block5

 Block4:
	lea eax,[esp+0x24]
	push 0x164C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],1
	jmp Block9

 Block5:
	cmp eax,0x43
	jne Block7

 Block6:
	lea ecx,[esp+0x24]
	push 0x164D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],2
	jmp Block9

 Block7:
	cmp eax,0x44
	jne Block15

 Block8:
	lea edx,[esp+0x24]
	push 0x164F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],3

 Block9:
	push eax
	lea ecx,[esp+0x10]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov esi,dword ptr [esp+0xC]
	cmp esi,ebx
	je Block15

 Block12:
	cmp byte ptr [esi],bl
	je Block15

 Block13:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block15

 Block14:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block15:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp esi,ebx
	je Block17

 Block16:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// ExpeditionIntermediary::OnPacketExpNoti_ResponseInvite
_SUB_EXCEPTION_HANDLER(122440)
__SUB_CLASS_THIS(00122440, __thiscall, 43312,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_ResponseInvite>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_122440
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
	mov esi,dword ptr [esp+0x3C]
	lea eax,[esp+0x40]
	xor ebx,ebx
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],2
	cmp esi,ebx
	jne Block2

 Block1:
	lea ecx,[esp+0x20]
	push 0x1592
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],3
	jmp Block16

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	lea eax,[esp+0x20]
	push 0x1644
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	jmp Block18

 Block4:
	cmp esi,2
	jne Block6

 Block5:
	lea ecx,[esp+0x20]
	push 0x158C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],6
	jmp Block16

 Block6:
	cmp esi,7
	jne Block8

 Block7:
	lea eax,[esp+0x20]
	push 0x163E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x3C],9
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],8
	jmp Block16

 Block8:
	cmp esi,3
	jne Block10

 Block9:
	lea edx,[esp+0x20]
	push 0x163F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x3C],0xB
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],0xA
	jmp Block16

 Block10:
	cmp esi,4
	jne Block12

 Block11:
	lea ecx,[esp+0x20]
	push 0x1642
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x3C],0xD
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],0xC
	jmp Block16

 Block12:
	cmp esi,5
	jne Block14

 Block13:
	lea eax,[esp+0x20]
	push 0xACF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x3C],0xF
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],0xE
	jmp Block16

 Block14:
	cmp esi,6
	jne Block23

 Block15:
	lea edx,[esp+0x20]
	push 0x1643
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x3C],0x11
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x30],0x10

 Block16:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebx
	je Block23

 Block21:
	cmp byte ptr [edi],bl
	je Block23

 Block22:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block23:
	mov byte ptr [esp+0x30],1
	cmp edi,ebx
	je Block25

 Block24:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov byte ptr [esp+0x30],bl
	cmp ebp,ebx
	je Block27

 Block26:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC
}
}
// ExpeditionIntermediary::SendExpChangeBossPacket
_SUB_EXCEPTION_HANDLER(121530)
__SUB_CLASS_THIS(00121530, __thiscall, 43299,  ExpeditionIntermediary, void, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	je Block2

 Block1:
	push 0x93
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x37
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// RearrangePartyMember
__SUB(00121B60, __cdecl, 144204,  void, PARTYMEMBER&) {
__asm {

 Block0:
	mov ecx,dword ptr [esi+0xAE]
	sub esp,0x18
	xor eax,eax
	jmp Block2

 Block2:
	cmp ecx,dword ptr [esi+eax*4]
	je Block5

 Block3:
	inc eax
	cmp eax,6
	jl Block2

 Block4:
	jmp Block7

 Block5:
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [esi+eax*4]
	mov ecx,dword ptr [esi]
	mov dword ptr [esi],edx
	mov dword ptr [esi+eax*4],ecx
	mov edx,dword ptr [esi+eax*4+0x66]
	mov ecx,dword ptr [esi+0x66]
	mov dword ptr [esi+0x66],edx
	mov dword ptr [esi+eax*4+0x66],ecx
	mov edx,dword ptr [esi+eax*4+0x7E]
	mov ecx,dword ptr [esi+0x7E]
	mov dword ptr [esi+0x7E],edx
	mov dword ptr [esi+eax*4+0x7E],ecx
	mov edx,dword ptr [esi+eax*4+0x96]
	mov ecx,dword ptr [esi+0x96]
	mov dword ptr [esi+0x96],edx
	mov dword ptr [esi+eax*4+0x96],ecx
	imul eax,0xD
	lea eax,[eax+esi+0x18]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call __swap
	add esp,8

 Block7:
	push ebx
	mov ecx,esi
	call PARTYMEMBER::GetMemberCount
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	jle Block25

 Block8:
	push ebp
	push edi
	lea edi,[esi+0x25]
	lea ecx,[esi+0x6A]
	lea ebp,[esi+0x18]
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x10],ebp

 Block9:
	cmp dword ptr [esi+ebx*4],0
	je Block13

 Block10:
	mov edx,ebp
	lea eax,[edx+1]
	mov dword ptr [esp+0xC],eax

 Block11:
	mov al,byte ptr [edx]
	inc edx
	test al,al
	jne Block11

 Block12:
	sub edx,dword ptr [esp+0xC]
	jne Block23

 Block13:
	cmp ebx,5
	mov edx,ebx
	jge Block20

 Block14:
	mov ebp,5
	sub ebp,ebx
	lea edx,[ebx+ebp]
	mov dword ptr [esp+0xC],edi
	mov dword ptr [esp+0x1C],edx
	jmp Block16

 Block16:
	mov eax,dword ptr [ecx-0x66]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [ecx-0x6A],eax
	mov edi,0xFFFFFFF3
	nop

 Block17:
	mov al,byte ptr [edx]
	mov byte ptr [edi+edx],al
	inc edx
	test al,al
	jne Block17

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ecx+0x18]
	add dword ptr [esp+0xC],0xD
	mov dword ptr [ecx-4],edx
	mov edx,dword ptr [ecx+0x30]
	mov dword ptr [ecx+0x14],eax
	mov dword ptr [ecx+0x2C],edx
	add ecx,4
	sub ebp,1
	jne Block16

 Block19:
	mov ebp,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]

 Block20:
	mov eax,edx
	imul eax,0xD
	mov dword ptr [esi+edx*4],0
	mov byte ptr [eax+esi+0x18],0
	xor eax,eax
	cmp ebx,eax
	mov dword ptr [esi+edx*4+0x66],eax
	mov dword ptr [esi+edx*4+0x7E],eax
	mov dword ptr [esi+edx*4+0x96],eax
	jle Block23

 Block21:
	cmp dword ptr [esi+ebx*4],eax
	jne Block23

 Block22:
	dec ebx
	sub ebp,0xD
	sub edi,0xD
	sub ecx,4

 Block23:
	inc ebx
	add ebp,0xD
	add edi,0xD
	add ecx,4
	cmp ebx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x10],ebp
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],ecx
	jl Block9

 Block24:
	pop edi
	pop ebp

 Block25:
	pop ebx
	add esp,0x18
	ret
}
}
// swap
_SUB_EXCEPTION_HANDLER(121A30)
__SUB(00121A30, __cdecl, 144202,  void, char*, char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121A30
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
	mov edi,dword ptr [esp+0x28]
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	cmp edi,eax
	je Block4

 Block1:
	mov eax,edi
	lea edx,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block2

 Block3:
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
	xor eax,eax

 Block4:
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x28],eax
	cmp ebp,eax
	je Block9

 Block5:
	mov eax,ebp
	lea edx,[eax+1]
	jmp Block7

 Block7:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block7

 Block8:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push 0
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer

 Block9:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x28],1
	call __swap_zxstring_char
	mov ebx,dword ptr [esp+0x1C]
	mov edx,edi
	add esp,8
	mov eax,ebx
	sub edx,ebx
	lea ecx,[ecx]

 Block10:
	mov cl,byte ptr [eax]
	mov byte ptr [edx+eax],cl
	inc eax
	test cl,cl
	jne Block10

 Block11:
	mov esi,dword ptr [esp+0x28]
	mov edx,ebp
	mov eax,esi
	sub edx,esi

 Block12:
	mov cl,byte ptr [eax]
	mov byte ptr [edx+eax],cl
	inc eax
	test cl,cl
	jne Block12

 Block13:
	mov byte ptr [esp+0x20],cl
	test esi,esi
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block17

 Block16:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// ExpeditionIntermediary::SendExpRelocatePartyPacket
_SUB_EXCEPTION_HANDLER(1215C0)
__SUB_CLASS_THIS(001215C0, __thiscall, 43300,  ExpeditionIntermediary, void, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1215C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block2

 Block1:
	push 0x93
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x38
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// swap_ZXString_char__
_SUB_EXCEPTION_HANDLER(1219A0)
__SUB(001219A0, __cdecl, 144201,  void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1219A0
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
	mov esi,dword ptr [esp+0x20]
	push esi
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov edi,dword ptr [esp+0x24]
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// PacketExpNoti_ResponseInvite::~PacketExpNoti_ResponseInvite
__SUB_CLASS_THIS0(00121480, __thiscall, 43266,  PacketExpNoti_ResponseInvite, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// ExpeditionIntermediary::OnPacketExpNoti_Get
_SUB_EXCEPTION_HANDLER(121FB0)
__SUB_CLASS_THIS(00121FB0, __thiscall, 43295,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_Get>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121FB0
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
	mov eax,dword ptr [ebp+4]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov dword ptr [ebp+4],ebx

 Block2:
	push 0x384
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+4],eax
	mov edi,eax
	mov ecx,0xE1
	lea esi,[esp+0x34]
	rep movsd
	mov ecx,dword ptr [ebp+4]
	xor edi,edi
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block6

 Block3:
	lea ecx,[ecx]

 Block4:
	mov eax,dword ptr [ebp+4]
	lea esi,[ebx+eax+8]
	call RearrangePartyMember
	mov ecx,dword ptr [ebp+4]
	inc edi
	add ebx,0xB2
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block4

 Block5:
	xor ebx,ebx

 Block6:
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	cmp ecx,ebx
	je Block8

 Block7:
	call CUIUserList::OnExpeditionChanged

 Block8:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0x30]
	sub eax,0x3B
	mov dword ptr [esp+0x28],ebx
	je Block11

 Block9:
	sub eax,2
	jne Block18

 Block10:
	lea ecx,[esp+0x30]
	push 0x164A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	jmp Block12

 Block11:
	lea eax,[esp+0x18]
	push 0x164E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]

 Block12:
	add esp,8
	mov byte ptr [esp+0x28],0
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	je Block18

 Block15:
	cmp byte ptr [esi],0
	je Block18

 Block16:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block18

 Block17:
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

 Block18:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block20

 Block19:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x388
}
}
// ExpeditionIntermediary::SendExpInvitePacket
_SUB_EXCEPTION_HANDLER(121DC0)
__SUB_CLASS_THIS(00121DC0, __thiscall, 43297,  ExpeditionIntermediary, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121DC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ecx+4]
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	cmp esi,ebx
	je Block12

 Block1:
	mov ecx,esi
	call EXPEDITION::GetMemberCount
	mov ecx,esi
	mov edi,eax
	call EXPEDITION::GetMemberLimit
	cmp edi,eax
	jl Block7

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x24]
	push 0x1657
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebx
	mov edi,dword ptr [eax]
	mov ecx,esi
	mov byte ptr [esp+0x44],2
	call EXPEDITION::GetMemberLimit
	push eax
	lea ecx,[esp+0x24]
	push edi
	push ecx
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov byte ptr [esp+0x48],1

 Block3:
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block12

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block12

 Block7:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call EXPEDITION::IsMember
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x24]
	push 0x1732
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov byte ptr [esp+0x48],3
	jmp Block3

 Block9:
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block14

 Block10:
	cmp byte ptr [eax],bl
	je Block13

 Block11:
	push 0x93
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0x32
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],5
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],bl
	call ZArray<unsigned char>::RemoveAll

 Block12:
	mov eax,dword ptr [esp+0x3C]

 Block13:
	cmp eax,ebx

 Block14:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4
}
}
// PacketExpNoti_Invite::~PacketExpNoti_Invite
__SUB_CLASS_THIS0(00121460, __thiscall, 43250,  PacketExpNoti_Invite, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// ExpeditionIntermediary::AmIMaster
__SUB_CLASS_THIS0(00121240, __thiscall, 43293,  ExpeditionIntermediary, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+4]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	mov esi,dword ptr [eax+0x20B4]
	call EXPEDITION::GetMasterID
	cmp eax,esi
	pop esi
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// PacketExpNoti_MasterChanged::PacketExpNoti_MasterChanged
__SUB_CLASS_THIS(001211A0, __thiscall, 43228,  PacketExpNoti_MasterChanged, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push esi
	push eax
	call __op_shift_right_2
	add esp,8
	mov eax,esi
	pop esi
	ret 4
}
}
// ExpeditionIntermediary::SendWithdrawPacket
_SUB_EXCEPTION_HANDLER(121780)
__SUB_CLASS_THIS0(00121780, __thiscall, 43288,  ExpeditionIntermediary, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block3

 Block2:
	xor esi,esi

 Block3:
	cmp dword ptr [esi+0x234],0
	je Block5

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x16E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block6

 Block5:
	push 0x93
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x34
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// ExpeditionIntermediary::SendExpChangeMasterPacket
_SUB_EXCEPTION_HANDLER(1214A0)
__SUB_CLASS_THIS(001214A0, __thiscall, 43298,  ExpeditionIntermediary, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1214A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block2

 Block1:
	push 0x93
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x36
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// PacketExpNoti_ResponseInvite::PacketExpNoti_ResponseInvite
_SUB_EXCEPTION_HANDLER(1213D0)
__SUB_CLASS_THIS(001213D0, __thiscall, 43262,  PacketExpNoti_ResponseInvite, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1213D0
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
	lea eax,[esi+4]
	mov dword ptr [eax],0
	push eax
	mov eax,dword ptr [esp+0x20]
	push esi
	push eax
	mov dword ptr [esp+0x20],0
	call __op_shift_right_2
	add esp,8
	push eax
	call __op_shift_right_3
	add esp,8
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// ExpeditionIntermediary::~ExpeditionIntermediary
__SUB_CLASS_THIS0(00121270, __thiscall, 43288,  ExpeditionIntermediary, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	int 3// TODO: 	mov dword ptr [esi],offset ExpeditionIntermediary::`vftable'
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov dword ptr [esi+4],0

 Block2:
	mov dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance],0
	pop esi
	ret
}
}
// ExpeditionIntermediary::OnPacket
_SUB_EXCEPTION_HANDLER(122A30)
// 522C04
static uint8_t _SUB_122A30_LOOKUP_TABLE_0[17] = {
0, 1, 0, 2, 0, 3, 8, 2, 1, 2, 1, 1, 4, 5, 8, 6, 
7, 
};
__SUB_CLASS_THIS(00122A30, __thiscall, 43289,  ExpeditionIntermediary, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_122A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x448
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x45C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x46C]
	lea eax,[ebp-0x39]
	cmp eax,0x10
	ja Block11

 Block1:
	movzx eax,byte ptr [eax+_SUB_122A30_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block8
cmp EAX, 2
je Block3
cmp EAX, 3
je Block9
cmp EAX, 4
je Block4
cmp EAX, 5
je Block5
cmp EAX, 6
je Block6
cmp EAX, 7
je Block7
cmp EAX, 8
je Block11


 Block2:
	mov edx,dword ptr [esp+0x470]
	lea ecx,[esp+0xD8]
	push ecx
	push edx
	call __op_shift_right_1
	sub esp,0x37C
	mov edi,esp
	mov ecx,0xE1
	lea esi,[esp+0x45C]
	rep movsd
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_Get
	jmp Block11

 Block3:
	mov eax,dword ptr [esp+0x470]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	call PacketExpNoti_Notice::_ctor_0
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_Notice
	jmp Block11

 Block4:
	mov ecx,dword ptr [esp+0x470]
	push ecx
	lea ecx,[esp+0x18]
	call PacketExpNoti_MasterChanged::_ctor_0
	mov edx,dword ptr [eax]
	push edx
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_MasterChanged
	jmp Block11

 Block5:
	mov eax,dword ptr [esp+0x470]
	push eax
	lea ecx,[esp+0x20]
	call PacketExpNoti_Modified::_ctor_0
	sub esp,0xBC
	mov edi,esp
	mov esi,eax
	mov ecx,0x2F
	rep movsd
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_Modified
	jmp Block11

 Block6:
	mov edx,dword ptr [esp+0x470]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call PacketExpNoti_Invite::_ctor_0
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_Invite
	jmp Block11

 Block7:
	mov eax,dword ptr [esp+0x470]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	call PacketExpNoti_ResponseInvite::_ctor_0
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_ResponseInvite
	jmp Block11

 Block8:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	push ebp
	mov ecx,ebx
	call ExpeditionIntermediary::OnPacketExpNoti_Removed
	jmp Block11

 Block9:
	lea edx,[esp+0x18]
	push 0x164A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x46C],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x464],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x45C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x454
	ret 8
}
}
// ExpeditionIntermediary::SendResponseInvitePacket
_SUB_EXCEPTION_HANDLER(121CF0)
__SUB_CLASS_THIS(00121CF0, __thiscall, 43313,  ExpeditionIntermediary, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121CF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x93
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	push 0x33
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [esp+0x2C]
	neg ecx
	sbb ecx,ecx
	add ecx,9
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 8
}
}
// ExpeditionIntermediary::ExpeditionIntermediary
__SUB_CLASS_THIS0(00121200, __thiscall, 43286,  ExpeditionIntermediary, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+4]
	test ecx,ecx
	je Block2

 Block1:
	lea edx,[ecx-4]
	mov dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance],edx
	int 3// TODO: 	mov dword ptr [eax],offset ExpeditionIntermediary::`vftable'
	mov dword ptr [ecx],0
	ret

 Block2:
	mov dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance],0
	int 3// TODO: 	mov dword ptr [eax],offset ExpeditionIntermediary::`vftable'
	mov dword ptr [ecx],0
	ret
}
}
// ExpeditionIntermediary::OnPacketExpNoti_Modified
__SUB_CLASS_THIS(00122140, __thiscall, 43306,  ExpeditionIntermediary, void, long, NakedParam<PacketExpNoti_Modified>) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block14

 Block1:
	mov ecx,dword ptr [esp+0xC]
	push esi
	mov dword ptr [eax+4],ecx
	push edi
	lea ecx,[esp+0x1C]
	call PARTYMEMBER::GetMemberCount
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx+4]
	imul edx,0xB2
	lea edi,[edx+eax+8]
	jmp Block8

 Block3:
	mov eax,dword ptr [esp+0x18]
	cmp eax,4
	jge Block7

 Block4:
	imul eax,0xB2
	jmp Block6

 Block6:
	mov ecx,dword ptr [ebx+4]
	add ecx,eax
	lea esi,[ecx+0xBA]
	lea edi,[ecx+8]
	mov ecx,0x2C
	rep movsd
	add eax,0xB2
	cmp eax,0x2C8
	movsw
	jl Block6

 Block7:
	mov edi,dword ptr [ebx+4]
	add edi,0x2D0

 Block8:
	mov ecx,0x2C
	lea esi,[esp+0x1C]
	rep movsd
	movsw
	mov ecx,dword ptr [ebx+4]
	xor edi,edi
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block12

 Block9:
	push ebp
	xor ebp,ebp
	lea ebx,[ebx]

 Block10:
	mov edx,dword ptr [ebx+4]
	lea esi,[edx+ebp+8]
	call RearrangePartyMember
	mov ecx,dword ptr [ebx+4]
	inc edi
	add ebp,0xB2
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block10

 Block11:
	pop ebp

 Block12:
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	pop edi
	pop esi
	test ecx,ecx
	je Block14

 Block13:
	call CUIUserList::OnExpeditionChanged

 Block14:
	pop ebx
	ret 0xC0
}
}
// PacketExpNoti_Notice::PacketExpNoti_Notice
_SUB_EXCEPTION_HANDLER(1212F0)
__SUB_CLASS_THIS(001212F0, __thiscall, 43216,  PacketExpNoti_Notice, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1212F0
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
	mov dword ptr [esi],0
	mov eax,dword ptr [esp+0x1C]
	push esi
	push eax
	mov dword ptr [esp+0x1C],0
	call __op_shift_right_3
	add esp,8
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// PacketExpNoti_Modified::PacketExpNoti_Modified
__SUB_CLASS_THIS(001211C0, __thiscall, 43235,  PacketExpNoti_Modified, void, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	lea eax,[esi+8]
	push eax
	lea ecx,[esi+4]
	push ecx
	push esi
	push edx
	call __op_shift_right_2
	add esp,8
	push eax
	call __op_shift_right_2
	add esp,8
	push eax
	call __op_shift_right_0
	add esp,8
	mov eax,esi
	pop esi
	ret 4
}
}
// ExpeditionIntermediary::SendExpKickPacket
_SUB_EXCEPTION_HANDLER(121660)
__SUB_CLASS_THIS(00121660, __thiscall, 43298,  ExpeditionIntermediary, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_121660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block2

 Block1:
	push 0x93
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x35
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
