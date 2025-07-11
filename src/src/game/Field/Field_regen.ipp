#include "regen.hpp"
// Field.ipp
#include "Field.hpp"

// CField::SendChatMsgWhisper
_SUB_EXCEPTION_HANDLER(13D3B0)
__SUB_CLASS_THIS(0013D3B0, __thiscall, 24975,  CField, void, const ZXString<char>&, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13D3B0
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
	mov dword ptr [esp+0x1C],ecx
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0x20CC]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea edi,[eax+4]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp edi,ebx
	je Block7

 Block4:
	mov eax,edi
	lea edx,[eax+1]

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block5

 Block6:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push ebx
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
	mov eax,dword ptr [esp+0x58]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x50],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block13

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx+0x2A4],ebx
	je Block15

 Block9:
	lea edx,[esp+0x54]
	push 0x95
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x4C],1
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block11

 Block10:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block11:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp esi,ebx
	je Block98

 Block14:
	add esi,0xFFFFFFF4
	push esi
	jmp Block97

 Block15:
	lea ecx,[ebp+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block17

 Block16:
	mov eax,dword ptr [ebp+0x209C]
	cmp eax,ebx
	je Block80

 Block17:
	mov eax,dword ptr [esp+0x54]
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block80

 Block18:
	cmp byte ptr [eax],bl
	je Block80

 Block19:
	test byte ptr [_D__S6__2],1
	jne Block21

 Block20:
	or dword ptr [_D__S6__2],1
	push 0xB12820
	mov dword ptr [_D_AMACRONOTICE],ebx
	call _atexit
	add esp,4

 Block21:
	test byte ptr [_D__S6__2],2
	jne Block23

 Block22:
	or dword ptr [_D__S6__2],2
	push 0x64
	push 0x1F
	mov ecx,offset _D_MMACRONOTICE
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::_ctor_ii
	// TODO: 	push offset `dynamic atexit destructor for '`TSimpleSingleton<CDayOfWeek>::GetInstance'::`2'::singleton''+992
	call _atexit
	add esp,4

 Block23:
	mov eax,dword ptr [_D_AMACRONOTICE]
	cmp eax,ebx
	je Block25

 Block24:
	cmp dword ptr [eax-4],ebx
	jne Block39

 Block25:
	lea ecx,[esp+0x18]
	push 0xC72
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],2
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea edx,[esp+0x18]
	push 0xC73
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea eax,[esp+0x18]
	push 0xC74
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],4
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea ecx,[esp+0x18]
	push 0x1A65
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],5
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea edx,[esp+0x18]
	push 0xC75
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea eax,[esp+0x18]
	push 0xC76
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea ecx,[esp+0x18]
	push 0xC77
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,offset _D_AMACRONOTICE
	mov byte ptr [esp+0x54],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	cmp dword ptr [_D_MMACRONOTICE+12],ebx
	jne Block68

 Block40:
	push 0xFFFFFFFF
	push offset _S_1__1
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea edx,[esp+0x20]
	push 0xC72
	push edx
	mov byte ptr [esp+0x54],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0xA
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],9
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	push 0xFFFFFFFF
	push offset _S_2__1
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x20]
	push 0xC73
	push ecx
	mov byte ptr [esp+0x54],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0xC
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0xB
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	push 0xFFFFFFFF
	push offset _S_3
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x20]
	push 0xC74
	push eax
	mov byte ptr [esp+0x54],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0xE
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0xD
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	push 0xFFFFFFFF
	push offset _S_4
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea edx,[esp+0x20]
	push 0x1A65
	push edx
	mov byte ptr [esp+0x54],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0x10
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0xF
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	push 0xFFFFFFFF
	push offset _S_5
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x20]
	push 0xC75
	push ecx
	mov byte ptr [esp+0x54],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0x12
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0x11
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	push 0xFFFFFFFF
	push offset _S_6
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x20]
	push 0xC76
	push eax
	mov byte ptr [esp+0x54],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0x14
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0x13
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	push 0xFFFFFFFF
	push offset _S_7
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea edx,[esp+0x20]
	push 0xC77
	push edx
	mov byte ptr [esp+0x54],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0x16
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0x15
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov dword ptr [esp+0x18],ebx
	mov edx,dword ptr [esp+0x54]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	mov ecx,offset _D_MMACRONOTICE
	mov byte ptr [esp+0x54],0x17
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::GetAt
	test eax,eax
	je Block74

 Block69:
	lea ecx,[esp+0x18]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block74

 Block70:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov esi,dword ptr [esp+0x18]
	cmp ecx,ebx
	je Block72

 Block71:
	push esi
	call CUIStatusBar::StartChat

 Block72:
	mov byte ptr [esp+0x4C],bl
	cmp esi,ebx
	je Block95

 Block73:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block95

 Block74:
	mov ecx,offset _D_AMACRONOTICE
	xor esi,esi
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block78

 Block75:
	mov edi,dword ptr [_D_AMACRONOTICE]
	mov ebp,dword ptr [esp+0x54]

 Block76:
	push edi
	mov ecx,ebp
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block83

 Block77:
	mov ecx,offset _D_AMACRONOTICE
	inc esi
	add edi,4
	call ZArray<ZXString<char>>::GetCount
	cmp esi,eax
	jb Block76

 Block78:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	push 0x8D
	lea ecx,[esp+0x38]
	call COutPacket::_ctor_1
	mov esi,dword ptr [esp+0x54]
	mov eax,dword ptr [esi]
	mov byte ptr [esp+0x4C],0x19
	cmp eax,ebx
	je Block85

 Block81:
	cmp byte ptr [eax],bl
	je Block85

 Block82:
	xor eax,eax
	jmp Block86

 Block83:
	push 0x8D
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 0x86
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],0x18
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0x58]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push ebp
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x2A4],1
	call timeGetTime
	push ebp
	lea ecx,[esi+0x2A8]
	mov dword ptr [esi+0x2AC],eax
	call ZXString<char>::op_assign
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x4C],0x17
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block95

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block95

 Block85:
	mov eax,1

 Block86:
	cmp eax,ebx
	sete dl
	inc dl
	or dl,4
	movzx eax,dl
	push eax
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x58]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block89

 Block87:
	cmp byte ptr [eax],bl
	je Block89

 Block88:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push esi
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr

 Block89:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CClientSocket::SendPacket
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [edi+0x2A4],1
	call timeGetTime
	mov dword ptr [edi+0x2AC],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [ecx+0x20],ebx
	jne Block94

 Block90:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block94

 Block91:
	cmp byte ptr [eax],bl
	je Block94

 Block92:
	lea edx,[esp+0x54]
	push 0xACA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 9
	push eax
	mov byte ptr [esp+0x54],0x1A
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x5C]
	add esp,8
	mov byte ptr [esp+0x4C],0x19
	cmp eax,ebx
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	push esi
	lea ecx,[edi+0x2A8]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x4C],bl
	call ZArray<unsigned char>::RemoveAll

 Block95:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block98

 Block96:
	add eax,0xFFFFFFF4
	push eax

 Block97:
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CField_GuildBoss::OnPacket
__SUB_CLASS_THIS(00151650, __thiscall, 143706,  CField_GuildBoss, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x158
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
	call CField_GuildBoss::OnPulleyStateChange
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_GuildBoss::OnHealerMove
	ret 8
}
}
// CField::OnFieldObstacleAllReset
__SUB_CLASS_THIS(0012C830, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block2

 Block1:
	lea eax,[esp+4]
	push 0
	push eax
	call ZList<ZRef<CMapLoadable::OBSTACLE>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx+0x2C]
	add esp,4
	push edx
	mov ecx,esi
	call CMapLoadable::SetObjectState
	cmp dword ptr [esp+4],0
	jne Block1

 Block2:
	pop esi
	pop ecx
	ret 4
}
}
// CField::BlowWeather
_SUB_EXCEPTION_HANDLER(145980)
__SUB_CLASS_THIS(00145980, __thiscall, 25050,  CField, void, long, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_145980
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	push 0x30D40
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [esp+0x20],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	call CField::BlowWeather_0
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CField::GetTownPortalPos
__SUB_CLASS_THIS(0012B720, __thiscall, 25008,  CField, tagPOINT*, tagPOINT*, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1B4]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]
	mov edx,dword ptr [esp+0xC]
	cmp edx,eax
	jb Block6

 Block2:
	push edi
	mov edi,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	mov eax,dword ptr [edi+4]
	test eax,eax
	jne Block4

 Block3:
	xor esi,esi
	jmp Block5

 Block4:
	mov esi,dword ptr [eax-4]

 Block5:
	call _rand
	cdq
	idiv esi
	mov eax,dword ptr [edi+4]
	pop edi
	pop esi
	mov ecx,dword ptr [eax+edx*8+4]
	mov edx,dword ptr [ecx+0xC]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x10]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 8

 Block6:
	mov ecx,dword ptr [ecx+0x1B4]
	mov esi,dword ptr [ecx+edx*8]
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [ecx+edx*8+4]
	mov dword ptr [eax],esi
	mov dword ptr [eax+4],edx
	pop esi
	ret 8
}
}
// CField::OnChaosZakumTimer
_SUB_EXCEPTION_HANDLER(131020)
__SUB_CLASS_THIS(00131020, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_131020
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x30]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,ebp
	jl Block20

 Block1:
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x28],ebp
	cmp edi,ebp
	je Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x107F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x28],1
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x18]
	push 0x107E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x28],ebx

 Block4:
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x28],1
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x28],ebp
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp esi,ebp
	jne Block12

 Block11:
	lea edx,[esp+0x1C]
	push 0x1080
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,4
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	jmp Block13

 Block12:
	mov eax,dword ptr [esp+0x30]
	push esi
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call ZXString<char>::Format
	add esp,0xC

 Block13:
	mov dword ptr [esp+0x28],ebp
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block18

 Block17:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push ebp
	push 0xFFFFFFFF
	mov dword ptr [eax+4],ebp
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push edx
	call CUIStatusBar::ChatLogAdd

 Block18:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
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
	ret 4
}
}
// CField::OnStalkResult
_SUB_EXCEPTION_HANDLER(139910)
__SUB_CLASS_THIS(00139910, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_139910
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
	mov esi,dword ptr [esp+0x24]
	mov ecx,esi
	call CInPacket::Decode4
	test eax,eax
	jle Block8

 Block1:
	mov dword ptr [esp+0x10],eax
	jmp Block3

 Block3:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jne Block6

 Block4:
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode4
	push eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	push ebx
	call CUIMiniMap::InsertStalkee
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block7

 Block6:
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	push ebx
	call CUIMiniMap::RemoveStalkee

 Block7:
	sub dword ptr [esp+0x10],1
	jne Block3

 Block8:
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
// CField::OnPacket
// 5472AC
static uint8_t _SUB_146D50_LOOKUP_TABLE_0[235] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
16, 36, 36, 17, 18, 19, 20, 21, 36, 22, 36, 36, 23, 24, 25, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 26, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 
36, 36, 36, 36, 27, 28, 29, 30, 36, 36, 36, 36, 36, 31, 36, 36, 
32, 33, 34, 36, 36, 36, 36, 36, 36, 36, 35, 
};
__SUB_CLASS_THIS(00146D50, __thiscall, 24966,  INetMsgHandler, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1B0
	jg Block40

 Block1:
	je Block39

 Block2:
	lea edx,[eax-0x93]
	cmp edx,0xEA
	ja Block40

 Block3:
	movzx edx,byte ptr [edx+_SUB_146D50_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block4
cmp EDX, 1
je Block5
cmp EDX, 2
je Block6
cmp EDX, 3
je Block7
cmp EDX, 4
je Block9
cmp EDX, 5
je Block8
cmp EDX, 6
je Block10
cmp EDX, 7
je Block14
cmp EDX, 8
je Block11
cmp EDX, 9
je Block12
cmp EDX, 10
je Block13
cmp EDX, 11
je Block15
cmp EDX, 12
je Block16
cmp EDX, 13
je Block17
cmp EDX, 14
je Block18
cmp EDX, 15
je Block19
cmp EDX, 16
je Block20
cmp EDX, 17
je Block21
cmp EDX, 18
je Block22
cmp EDX, 19
je Block35
cmp EDX, 20
je Block23
cmp EDX, 21
je Block24
cmp EDX, 22
je Block34
cmp EDX, 23
je Block36
cmp EDX, 24
je Block37
cmp EDX, 25
je Block38
cmp EDX, 26
je Block68
cmp EDX, 27
je Block27
cmp EDX, 28
je Block26
cmp EDX, 29
je Block28
cmp EDX, 30
je Block25
cmp EDX, 31
je Block30
cmp EDX, 32
je Block31
cmp EDX, 33
je Block32
cmp EDX, 34
je Block33
cmp EDX, 35
je Block29
cmp EDX, 36
je Block40


 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnTransferFieldReqIgnored
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnTransferChannelReqIgnored
	ret 8

 Block6:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnFieldSpecificData
	ret 8

 Block7:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnGroupMessage
	ret 8

 Block8:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnCoupleMessage
	ret 8

 Block9:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnWhisper
	ret 8

 Block10:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnSummonItemInavailable
	ret 8

 Block11:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnFieldObstacleOnOff
	ret 8

 Block12:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnFieldObstacleOnOffStatus
	ret 8

 Block13:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnFieldObstacleAllReset
	ret 8

 Block14:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnFieldEffect
	ret 8

 Block15:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnBlowWeather
	ret 8

 Block16:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnPlayJukeBox
	ret 8

 Block17:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnAdminResult
	ret 8

 Block18:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnQuiz
	ret 8

 Block19:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnDesc
	ret 8

 Block20:
	mov eax,dword ptr [ecx-8]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x2C]
	add ecx,0xFFFFFFF8
	push edx
	call eax
	ret 8

 Block21:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnSetQuestClear
	ret 8

 Block22:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnSetQuestTime
	ret 8

 Block23:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnSetObjectState
	ret 8

 Block24:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnDestroyClock
	ret 8

 Block25:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnZakumTimer
	ret 8

 Block26:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnChaosZakumTimer
	ret 8

 Block27:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnHontaleTimer
	ret 8

 Block28:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnHontailTimer
	ret 8

 Block29:
	mov ecx,dword ptr [esp+8]
	push ecx
	call CParcelDlg::OnPacket
	add esp,4
	ret 8

 Block30:
	mov edx,dword ptr [esp+8]
	push edx
	call CTrunkDlg::OnPacket
	add esp,4
	ret 8

 Block31:
	mov eax,dword ptr [esp+8]
	push eax
	call CRPSGameDlg::OnPacket
	add esp,4
	ret 8

 Block32:
	mov ecx,dword ptr [esp+8]
	push ecx
	call CUIMessenger::OnPacket
	add esp,4
	ret 8

 Block33:
	mov edx,dword ptr [esp+8]
	push edx
	call CMiniRoomBaseDlg::OnPacketBase
	add esp,4
	ret 8

 Block34:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnStalkResult
	ret 8

 Block35:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnWarnMessage
	ret 8

 Block36:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	push eax
	call CQuickslotKeyMappedMan::OnInit
	ret 8

 Block37:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField::OnFootHoldInfo
	ret 8

 Block38:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField::OnRequestFootHoldInfo
	ret 8

 Block39:
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnLogoutGift
	ret 8

 Block40:
	lea edx,[eax-0xB3]
	cmp edx,0x62
	ja Block42

 Block41:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CUserPool::OnPacket

 Block42:
	lea edx,[eax-0x116]
	cmp edx,5
	ja Block44

 Block43:
	mov ecx,dword ptr [TSingleton<CSummonedPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CSummonedPool::OnPacket

 Block44:
	lea edx,[eax-0x11C]
	cmp edx,0x1A
	ja Block46

 Block45:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CMobPool::OnPacket

 Block46:
	lea edx,[eax-0x137]
	cmp edx,7
	ja Block48

 Block47:
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CNpcPool::OnPacket

 Block48:
	lea edx,[eax-0x13F]
	cmp edx,2
	ja Block50

 Block49:
	mov ecx,dword ptr [TSingleton<CEmployeePool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CEmployeePool::OnPacket

 Block50:
	lea edx,[eax-0x142]
	cmp edx,2
	ja Block52

 Block51:
	mov ecx,dword ptr [TSingleton<CDropPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CDropPool::OnPacket

 Block52:
	lea edx,[eax-0x145]
	cmp edx,2
	ja Block54

 Block53:
	mov ecx,dword ptr [TSingleton<CMessageBoxPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CMessageBoxPool::OnPacket

 Block54:
	lea edx,[eax-0x148]
	cmp edx,1
	ja Block56

 Block55:
	mov ecx,dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CAffectedAreaPool::OnPacket

 Block56:
	lea edx,[eax-0x14A]
	cmp edx,1
	ja Block58

 Block57:
	mov ecx,dword ptr [TSingleton<CTownPortalPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CTownPortalPool::OnPacket

 Block58:
	lea edx,[eax-0x14C]
	cmp edx,1
	ja Block60

 Block59:
	mov ecx,dword ptr [TSingleton<COpenGatePool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  COpenGatePool::OnPacket

 Block60:
	lea edx,[eax-0x14E]
	cmp edx,3
	ja Block62

 Block61:
	mov ecx,dword ptr [TSingleton<CReactorPool>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CReactorPool::OnPacket

 Block62:
	lea edx,[eax-0x16B]
	test edx,edx
	ja Block64

 Block63:
	mov ecx,dword ptr [TSingleton<CScriptMan>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CScriptMan::OnPacket

 Block64:
	lea edx,[eax-0x18E]
	cmp edx,2
	ja Block66

 Block65:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CFuncKeyMappedMan::OnPacket

 Block66:
	lea edx,[eax-0x16C]
	cmp edx,1
	ja Block69

 Block67:
	mov ecx,dword ptr [esp+8]
	push ecx
	push eax
	call CShopDlg::OnPacket
	add esp,8

 Block68:
	ret 8

 Block69:
	lea edx,[eax-0x171]
	cmp edx,1
	ja Block71

 Block70:
	mov ecx,dword ptr [esp+8]
	push ecx
	push eax
	call CStoreBankDlg::OnPacket
	add esp,8
	ret 8

 Block71:
	lea edx,[eax-0x8D]
	cmp edx,2
	ja Block73

 Block72:
	mov dword ptr [esp+4],eax
	jmp  CStage::OnPacket

 Block73:
	lea edx,[eax-0x90]
	cmp edx,2
	ja Block75

 Block74:
	mov dword ptr [esp+4],eax
	jmp  CMapLoadable::OnPacket

 Block75:
	lea edx,[eax-0x194]
	cmp edx,5
	ja Block77

 Block76:
	mov ecx,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CMapleTVMan::OnPacket

 Block77:
	lea edx,[eax-0x16E]
	cmp edx,1
	ja Block79

 Block78:
	mov ecx,dword ptr [esp+8]
	push ecx
	push eax
	call CAdminShopDlg::OnPacket
	add esp,8
	ret 8

 Block79:
	lea edx,[eax-0x1A8]
	cmp edx,3
	ja Block81

 Block80:
	mov dword ptr [esp+4],eax
	add ecx,0xFFFFFFF8
	jmp  CField::OnItemUpgrade

 Block81:
	lea edx,[eax-0x1A4]
	cmp edx,3
	ja Block83

 Block82:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CBattleRecordMan::OnPacket

 Block83:
	lea edx,[eax-0x19D]
	cmp edx,3
	ja Block85

 Block84:
	mov dword ptr [esp+4],eax
	add ecx,0xFFFFFFF8
	jmp  CField::OnCharacterSale

 Block85:
	lea edx,[eax-0x1AC]
	cmp edx,3
	ja Block68

 Block86:
	mov dword ptr [esp+4],eax
	add ecx,0xFFFFFFF8
	jmp  CField::OnVega
}
}
// CField::RestoreUserInfo
_SUB_EXCEPTION_HANDLER(13FA30)
__SUB_CLASS_THIS0(0013FA30, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13FA30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x190
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x30],edi
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push offset _S_USER
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [ebp-4],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x10C]
	or ebx,0xFFFFFFFF
	push eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],esi
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
	cmp word ptr [ebp-0x10C],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x104]
	xor ecx,ecx
	mov word ptr [ebp-0x10C],cx
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[ebp-0x10C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [ebp+0x58]
	cmp edi,esi
	sete al
	test al,al
	je Block12

 Block10:
	mov dword ptr [ebp-4],ebx
	cmp edi,esi
	je Block154

 Block11:
	jmp Block153

 Block12:
	mov dword ptr [ebp+0x5C],esi
	cmp edi,esi
	je Block1

 Block13:
	mov bl,0x11

 Block14:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x64]
	push eax
	push edi
	mov dword ptr [ebp+0x64],esi
	call ecx
	cmp eax,esi
	jge Block16

 Block15:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov edx,dword ptr [ebp+0x5C]
	cmp edx,dword ptr [ebp+0x64]
	jae Block152

 Block17:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x19C]
	push ecx
	mov byte ptr [ebp-4],4
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	je Block20

 Block18:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x50]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x50]
	mov esi,ecx
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	jge Block20

 Block19:
	cmp eax,0x80004002
	jne Block4

 Block20:
	cmp word ptr [ebp-0x19C],8
	mov byte ptr [ebp-4],7
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x194]
	xor edx,edx
	mov word ptr [ebp-0x19C],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp-0x19C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	test esi,esi
	sete al
	test al,al
	je Block27

 Block25:
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block151

 Block26:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	inc dword ptr [ebp+0x5C]
	xor esi,esi
	jmp Block14

 Block27:
	xor edi,edi
	int 3// TODO: 	mov dword ptr [ebp+0x34],offset ZList<ZRef<Field::UserCond>>::`vftable'
	mov dword ptr [ebp+0x3C],edi
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x44],edi
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_COND__1
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],9
	cmp esi,edi
	je Block1

 Block28:
	lea eax,[ebp]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block29:
	cmp eax,0x80004002
	jne Block4

 Block30:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xC
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edi,dword ptr [ebp+0x64]
	lea eax,[ebp+0x34]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block36

 Block35:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block36:
	call Field::UserCond::Parse
	add esp,8
	test eax,eax
	jne Block40

 Block37:
	mov byte ptr [ebp-4],8
	test edi,edi
	je Block39

 Block38:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block39:
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],7
	int 3// TODO: 	mov dword ptr [ebp+0x34],offset ZList<ZRef<Field::UserCond>>::`vftable'
	call ZList<ZRef<Field::UserCond>>::RemoveAll
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	inc dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp+0x58]
	xor esi,esi
	jmp Block14

 Block40:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_LOOK
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x16C]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,esi
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block41:
	cmp eax,0x80004002
	jne Block4

 Block42:
	cmp word ptr [ebp-0x16C],8
	mov byte ptr [ebp-4],0x10
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x164]
	xor edx,edx
	mov word ptr [ebp-0x16C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x16C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov edi,dword ptr [ebp+0x60]
	test edi,edi
	je Block146

 Block47:
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x4C],0
	call ZRef<CField::UserLook>::_Alloc
	mov esi,dword ptr [ebp+0x4C]
	lea ecx,[esi+0xC]
	mov byte ptr [ebp-4],bl
	call ZList<ZRef<Field::UserCond>>::RemoveAll
	lea ecx,[ebp+0x34]
	push ecx
	lea ecx,[esi+0xC]
	call ZList<ZRef<Field::UserCond>>::AddTail_List
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_HAIR
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x12
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [esi+0x39],eax
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],bl
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_CAP__1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xEC]
	mov byte ptr [ebp-4],0x14
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	mov dword ptr [esi+0x3D],eax
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],bl
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [ebp-0xEC],ax
	mov eax,dword ptr [ebp-0xE4]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[ebp-0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_FACEACC
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x16
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov dword ptr [esi+0x41],eax
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_EYEACC
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x14C]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	mov dword ptr [esi+0x45],eax
	cmp word ptr [ebp-0x14C],8
	mov byte ptr [ebp-4],bl
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [ebp-0x14C],ax
	mov eax,dword ptr [ebp-0x144]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[ebp-0x14C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_EARACC
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x49],eax
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],bl
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_CLOTHES__1
	call _xbstr_t::_ctor_0
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x4D],eax
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],bl
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_PANTS
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x51],eax
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],bl
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_SHOES__1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x18C]
	mov byte ptr [ebp-4],0x20
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	mov dword ptr [esi+0x55],eax
	cmp word ptr [ebp-0x18C],8
	mov byte ptr [ebp-4],bl
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp-0x18C],ax
	mov eax,dword ptr [ebp-0x184]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp-0x18C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_GLOVES
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x22
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	mov dword ptr [esi+0x59],eax
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],bl
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_CAPE
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x12C]
	mov byte ptr [ebp-4],0x24
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x25
	call get_int32
	add esp,8
	mov dword ptr [esi+0x5D],eax
	cmp word ptr [ebp-0x12C],8
	mov byte ptr [ebp-4],bl
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [ebp-0x12C],ax
	mov eax,dword ptr [ebp-0x124]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[ebp-0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_SHIELD
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xCC]
	mov byte ptr [ebp-4],0x26
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	mov dword ptr [esi+0x61],eax
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],bl
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_WEAPON__1
	call _xbstr_t::_ctor_0
	lea edx,[ebp+0x10]
	mov byte ptr [ebp-4],0x28
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	mov dword ptr [esi+0x65],eax
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],bl
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_RING1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x2A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x69],eax
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],bl
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_RING2
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x6D],eax
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],bl
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_RING3
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],0x2E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x75],eax
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],bl
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_RING4
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x30
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x31
	call get_int32
	add esp,8
	mov dword ptr [esi+0x79],eax
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],bl
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_PENDANT
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x32
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x33
	call get_int32
	add esp,8
	mov dword ptr [esi+0x7D],eax
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],bl
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_MEDAL
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x34
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x35
	call get_int32
	add esp,8
	mov dword ptr [esi+0xFD],eax
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],bl
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_BELT
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xDC]
	mov byte ptr [ebp-4],0x36
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x37
	call get_int32
	add esp,8
	mov dword ptr [esi+0x101],eax
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],bl
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0xDC],ax
	mov eax,dword ptr [ebp-0xD4]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0xDC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_SHOULDER
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xFC]
	mov byte ptr [ebp-4],0x38
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x39
	call get_int32
	add esp,8
	mov dword ptr [esi+0x105],eax
	cmp word ptr [ebp-0xFC],8
	mov byte ptr [ebp-4],bl
	jne Block126

 Block124:
	xor eax,eax
	mov word ptr [ebp-0xFC],ax
	mov eax,dword ptr [ebp-0xF4]
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea ecx,[ebp-0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_PETWEAR
	mov dword ptr [esi+0x125],0xFFFFFFFF
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x11C]
	mov byte ptr [ebp-4],0x3A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x71],eax
	cmp word ptr [ebp-0x11C],8
	mov byte ptr [ebp-4],bl
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp-0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_SADDLE
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x13C]
	mov byte ptr [ebp-4],0x3C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x85],eax
	cmp word ptr [ebp-0x13C],8
	mov byte ptr [ebp-4],bl
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp-0x13C],ax
	mov eax,dword ptr [ebp-0x134]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp-0x13C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_TAMINGMOB__3
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x15C]
	mov byte ptr [ebp-4],0x3E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x81],eax
	cmp word ptr [ebp-0x15C],8
	mov byte ptr [ebp-4],bl
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[ebp-0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_MOBEQUIP
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x17C]
	mov byte ptr [ebp-4],0x40
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x41
	call get_int32
	add esp,8
	mov dword ptr [esi+0x89],eax
	cmp word ptr [ebp-0x17C],8
	mov byte ptr [ebp-4],bl
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [ebp-0x17C],ax
	mov eax,dword ptr [ebp-0x174]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[ebp-0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov ecx,dword ptr [ebp+0x30]
	add ecx,0xD14
	call ZList<ZRef<CField::UserLook>>::AddTail_
	lea edx,[ebp+0x48]
	push edx
	mov ecx,eax
	call ZRef<CField::UserLook>::op_assign_copy
	lea eax,[esi+4]
	push eax
	mov byte ptr [ebp-4],0x10
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block145

 Block144:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block145:
	mov esi,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x4C],0

 Block146:
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block148

 Block147:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block148:
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],8
	je Block150

 Block149:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block150:
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],7
	int 3// TODO: 	mov dword ptr [ebp+0x34],offset ZList<ZRef<Field::UserCond>>::`vftable'
	call ZList<ZRef<Field::UserCond>>::RemoveAll
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],3
	call edx
	mov edi,dword ptr [ebp+0x58]

 Block151:
	inc dword ptr [ebp+0x5C]
	xor esi,esi
	jmp Block14

 Block152:
	mov dword ptr [ebp-4],0xFFFFFFFF

 Block153:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block154:
	lea esp,[ebp-0x1AC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret
}
}
// CField::OnFearEffect
__SUB_CLASS_THIS0(0013A450, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::InitFearEffect
	mov dword ptr [esi+0xD98],1
	pop esi
	ret
}
}
// CField::UserLook::UserLook
__SUB_CLASS_THIS0(0012D160, __thiscall, 25437,  CField::UserLook, void) {
__asm {

 Block0:
	push ebx
	xor eax,eax
	push esi
	mov esi,ecx
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CField::UserLook::`vftable'
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZList<ZRef<Field::UserCond>>::`vftable'
	mov dword ptr [esi+0x14],ebx
	mov dword ptr [esi+0x18],ebx
	mov dword ptr [esi+0x1C],ebx
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x28],eax
	push 0xF0
	lea eax,[esi+0x39]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi+0x20],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x2C],bl
	mov dword ptr [esi+0x2D],ebx
	mov dword ptr [esi+0x31],ebx
	mov dword ptr [esi+0x35],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x219],eax
	mov dword ptr [esi+0x21D],eax
	add esp,0xC
	mov dword ptr [esi+0x221],eax
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CField::IsKindOf
__SUB_CLASS_THIS(0013CB00, __thiscall, 25054,  CField, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CField::ms_RTTI_CField
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
// CField::OnSetObjectState
_SUB_EXCEPTION_HANDLER(139890)
__SUB_CLASS_THIS(00139890, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_139890
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
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x14],0
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CMapLoadable::SetObjectState
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CField::SendChatMsg
_SUB_EXCEPTION_HANDLER(134000)
__SUB_CLASS_THIS(00134000, __thiscall, 24973,  CField, void, const ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block1:
	cmp byte ptr [eax],0
	je Block8

 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block7

 Block3:
	lea eax,[esp+0x2C]
	push 0x125
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x24],0
	je Block5

 Block4:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block5:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 8

 Block7:
	push 0x36
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x24],1
	call get_update_time
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [esp+0x30]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 8
}
}
// CField::Init
_SUB_EXCEPTION_HANDLER(13ACA0)
__SUB_CLASS_THIS(0013ACA0, __thiscall, 24960,  CField, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13ACA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x5C]
	push edi
	call CMapLoadable::Init
	mov ebx,dword ptr [edi+4]
	mov dword ptr [esp+0x38],ebx
	test ebx,ebx
	je Block2

 Block1:
	lea eax,[ebx-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,dword ptr [ebx+0xE9]
	push ecx
	lea edx,[ebx+0xE1]
	push edx
	mov dword ptr [esp+0x5C],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	lea ebp,[esi+0x16C]
	push eax
	mov ecx,ebp
	call TSecType<unsigned long>::SetData
	mov al,byte ptr [edi+8]
	mov ecx,ebp
	mov byte ptr [esi+0x168],al
	call TSecType<unsigned long>::GetData
	push eax
	lea ecx,[esp+0x20]
	push ecx
	call CField::GetFieldProp
	add esp,8
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],1
	mov dword ptr [esp+0x5C],eax
	cmp eax,ecx
	je Block7

 Block3:
	mov dword ptr [esi+0x2C],ecx
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x5C]

 Block5:
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esi+0x30]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x5C],ecx
	cmp ecx,eax
	je Block12

 Block8:
	mov dword ptr [esi+0x30],eax
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x5C]

 Block10:
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block12:
	mov ecx,ebp
	mov dword ptr [esi+0x34],1
	call TSecType<unsigned long>::GetData
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x10]
	mov ecx,esi
	call eax
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0x2BF20
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push ebp
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,esi
	call CStage::FadeIn
	lea eax,[esp+0x3C]
	push eax
	call GetLocalTime
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [edi+0x10]
	sub eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x30]
	sbb ecx,edx
	mov dword ptr [esi+0x2B0],eax
	mov dword ptr [esi+0x2B4],ecx
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block20

 Block17:
	add eax,0xFFFFFFF0
	mov dword ptr [esp+0x5C],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x5C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block20

 Block19:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block20:
	mov ecx,edi
	call CWvsContext::OnEnterField
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ebx
	add ebx,0xFFFFFFF0
	mov dword ptr [esp+0x64],esp
	lea ecx,[ebx+4]
	push ecx
	mov dword ptr [esp+0x68],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	call CUserPool::CreateLocalUser
	mov ecx,edi
	mov dword ptr [_D_S_BCHASE],0
	call CWvsContext::ValidateStat
	mov edx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	push eax
	mov ecx,esi
	call CField::ApplyUserLook
	test ebp,ebp
	jne Block22

 Block21:
	mov ecx,edi
	call CWvsContext::OnPostEnterGame

 Block22:
	mov eax,dword ptr [edi+0x3F34]
	test eax,eax
	je Block29

 Block23:
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,ebx
	mov dword ptr [ebx],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	push 0
	push 4
	mov ecx,edi
	call CWvsContext::IsFadeWndExist
	test eax,eax
	jne Block28

 Block24:
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block26

 Block25:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov ebx,eax
	jmp Block27

 Block26:
	xor ebx,ebx

 Block27:
	mov ecx,ebx
	mov byte ptr [esp+0x54],1
	call CUIFadeYesNo::CreateNewMemo
	push ebx
	mov ecx,edi
	call CWvsContext::SetNewFadeWnd

 Block28:
	mov ebx,dword ptr [esp+0x5C]

 Block29:
	mov ecx,esi
	call CField::UpdateQuestLayer
	mov ecx,esi
	call CField::InitFearEffect
	call Util::FTGetNow
	mov dword ptr [esp+0x24],eax
	push offset _D_S_FTXMASSTART
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x30],edx
	call CompareFileTime
	test eax,eax
	jle Block32

 Block30:
	push offset _D_S_FTXMASEND
	lea ecx,[esp+0x28]
	push ecx
	call CompareFileTime
	test eax,eax
	jge Block32

 Block31:
	mov edi,1
	jmp Block33

 Block32:
	xor edi,edi

 Block33:
	push 0
	push 4
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],0
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_XMAS]
	push 4
	lea ecx,[esp+0x60]
	mov dword ptr [eax],edx
	call ZXString<char>::ReleaseBuffer
	push edi
	lea eax,[esp+0x60]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],3
	call CMapLoadable::SetMapObjectVisible
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],1
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block37

 Block36:
	call CUserLocal::ResetNLCPQ

 Block37:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block42:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block44

 Block43:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block44:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CField::SendJoinPartyMsg
_SUB_EXCEPTION_HANDLER(134310)
__SUB_CLASS_THIS(00134310, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134310
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
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	xor ebp,ebp
	cmp dword ptr [ecx+4],ebp
	je Block11

 Block6:
	lea edx,[esp+0x40]
	push 0x158D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],ebp
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block8

 Block7:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ebp
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebp
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block8:
	mov eax,dword ptr [esp+0x40]

 Block9:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block27

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block27

 Block11:
	mov eax,dword ptr [edi+0x3D]
	push eax
	lea ecx,[edi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block13

 Block12:
	cmp ecx,0x7D1
	jne Block15

 Block13:
	mov eax,dword ptr [edi+0x35]
	push eax
	add edi,0x33
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	jae Block15

 Block14:
	lea ecx,[esp+0x40]
	push 0x14D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x40],1
	call CHATLOG_ADD
	add esp,8
	jmp Block8

 Block15:
	mov eax,dword ptr [ebx+0x20CC]
	cmp eax,ebp
	je Block17

 Block16:
	add eax,4
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov esi,dword ptr [esp+0x40]
	push eax
	mov ecx,esi
	call ZXString<char>::Compare
	test eax,eax
	jne Block20

 Block19:
	lea edx,[esp+0x40]
	push 0x151
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x40],2
	call CHATLOG_ADD
	add esp,8
	jmp Block8

 Block20:
	mov eax,dword ptr [ebx+0x3604]
	cmp eax,ebp
	je Block26

 Block21:
	mov ecx,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],ecx
	je Block23

 Block22:
	lea eax,[esp+0x40]
	push 0x150
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x40],3
	call CHATLOG_ADD
	add esp,8
	jmp Block8

 Block23:
	cmp eax,ebp
	je Block26

 Block24:
	mov ecx,ebx
	call CWvsContext::GetPartyMemberNumber
	cmp eax,6
	jl Block26

 Block25:
	lea ecx,[esp+0x14]
	push 0x155
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x40],4
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	jmp Block9

 Block26:
	push 0x91
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],5
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push esi
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block27:
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
// CField::SendInviteGuildMsg
_SUB_EXCEPTION_HANDLER(1348E0)
__SUB_CLASS_THIS(001348E0, __thiscall, 24979,  CField, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1348E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [esi+0x20CC]
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	lea ecx,[esp+0x38]
	call ZXString<char>::Compare
	test eax,eax
	jne Block9

 Block4:
	lea eax,[esp+0xC]
	push 0x170
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],1

 Block5:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block7

 Block6:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block7:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block20

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block9:
	mov eax,dword ptr [esi+0x37C8]
	cmp eax,ebx
	jne Block11

 Block10:
	lea ecx,[esp+0xC]
	push 0x16B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],2
	jmp Block5

 Block11:
	mov eax,dword ptr [esi+0x20B4]
	mov edx,dword ptr [esi+0x37D4]
	cmp dword ptr [edx],eax
	je Block14

 Block12:
	push eax
	mov ecx,esi
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	je Block14

 Block13:
	lea eax,[esp+0xC]
	push 0x16F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x34],3
	call CHATLOG_ADD
	add esp,8
	jmp Block7

 Block14:
	mov eax,dword ptr [esi+0x37D4]
	cmp eax,ebx
	jne Block16

 Block15:
	xor eax,eax
	jmp Block17

 Block16:
	mov eax,dword ptr [eax-4]

 Block17:
	cmp eax,dword ptr [esi+0x37DC]
	jl Block19

 Block18:
	lea ecx,[esp+0xC]
	push 0x175
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x34],4
	call CHATLOG_ADD
	add esp,8
	jmp Block7

 Block19:
	push 0x95
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],5
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x38]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],bl
	call ZArray<unsigned char>::RemoveAll

 Block20:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField::SendAcceptFriendMsg
_SUB_EXCEPTION_HANDLER(12F290)
__SUB_CLASS_THIS(0012F290, __thiscall, 24967,  CField, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F290
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x3C],eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x58]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov word ptr [esp+0x40],ax
	mov byte ptr [esp+0x42],al
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call CWvsContext::GetFriendByID
	cmp dword ptr [esp+0x1C],0
	je Block3

 Block1:
	cmp byte ptr [esp+0x2D],1
	je Block3

 Block2:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x17F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block4

 Block3:
	push 0x99
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x54],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [esp+0x3C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x4C
	ret 4
}
}
// CField::OnWhisper
_SUB_EXCEPTION_HANDLER(1448A0)
// 5458F4
static uint8_t _SUB_1448A0_LOOKUP_TABLE_0[138] = {
0, 1, 5, 5, 5, 5, 5, 5, 5, 2, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 1, 5, 5, 5, 5, 5, 5, 5, 4, 
};
__SUB_CLASS_THIS(001448A0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1448A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,dword ptr [esp+0xC4]
	mov ecx,esi
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode1
	movzx ebx,al
	lea eax,[ebx-9]
	cmp eax,0x89
	ja Block144

 Block1:
	movzx ecx,byte ptr [eax+_SUB_1448A0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block37
cmp ECX, 1
je Block25
cmp ECX, 2
je Block2
cmp ECX, 3
je Block131
cmp ECX, 4
je Block22
cmp ECX, 5
je Block144


 Block2:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [esp+0xBC],ebp
	call CInPacket::Decode1
	mov ecx,esi
	movsx edi,al
	call CInPacket::Decode1
	movzx eax,al
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x34],eax
	call CInPacket::DecodeStr
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xCC],1
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0x24],ebp
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov bl,2
	mov byte ptr [esp+0xBC],bl
	cmp edi,dword ptr [edx+0x2060]
	jne Block4

 Block3:
	lea eax,[esp+0x6C]
	push 0x72E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xCC],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x7C]
	add esp,0x10
	jmp Block5

 Block4:
	lea ecx,[esp+0xA4]
	push 0x72F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,dword ptr [eax]
	push edx
	push edi
	mov byte ptr [esp+0xC4],4
	call CWvsContext::GetChannelName
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x30]
	push esi
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB8]
	add esp,0x14

 Block5:
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [esp+0x30],ebp
	jne Block11

 Block8:
	mov edx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [edx+0x20],ebp
	je Block10

 Block9:
	push ecx
	lea eax,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsInBlackList
	cmp eax,ebp
	je Block11

 Block10:
	push 0x8D
	lea ecx,[esp+0x3C]
	call COutPacket::_ctor_1
	push 0x22
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xC0],6
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	push ecx
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x3C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xBC],bl
	call ZArray<unsigned char>::RemoveAll
	jmp Block15

 Block11:
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x1C]
	push ecx
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xC8],5
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::GetSwindleWarning
	add esp,8
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	cmp esi,ebp
	je Block13

 Block12:
	lea edx,[esp+0x1C]
	push 8
	push edx
	call CHATLOG_ADD
	add esp,8

 Block13:
	lea eax,[esp+0x24]
	push 1
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block17

 Block16:
	push ecx
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::AddWhisperCandidate

 Block17:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xBC],1
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xBC],0
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jmp Block142

 Block22:
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ebx,7
	mov ecx,esi
	mov dword ptr [esp+0xBC],ebx
	call CInPacket::Decode1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xCC],8
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push 0x2710
	push 1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x4E2019
	mov ecx,edi
	call CField::BlowWeather_0
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x30]
	jmp Block141

 Block25:
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0xBC],9
	call CInPacket::Decode1
	xor ebp,ebp
	movzx esi,al
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [edi+0x2A8]
	mov bl,0xA
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebp
	je Block30

 Block26:
	cmp byte ptr [eax],0
	je Block30

 Block27:
	lea ecx,[esp+0xA8]
	push 0x730
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0x2A8]
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xCC],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB8]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea eax,[esp+0x14]
	push 1
	push eax
	call CHATLOG_ADD
	add esp,8

 Block30:
	cmp esi,ebp
	jne Block34

 Block31:
	lea ecx,[esp+0x24]
	call ZXString<char>::MakeLower
	lea ecx,[esp+0x54]
	push 0x9A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC8],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esp+0x14]
	push 0xC
	push ecx
	call CHATLOG_ADD
	add esp,8

 Block34:
	mov dword ptr [edi+0x2A4],ebp
	call timeGetTime
	mov dword ptr [edi+0x2AC],eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],9
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jmp Block142

 Block37:
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0xBC],0xD
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode4
	mov edi,eax
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0xB0],eax
	mov byte ptr [esp+0xBC],0x10
	test bl,1
	je Block89

 Block38:
	cmp ebp,2
	jne Block45

 Block39:
	lea eax,[esp+0x84]
	push 0x9C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xC8],0x11
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x90]
	add esp,0xC
	mov byte ptr [esp+0xBC],0x10

 Block40:
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFF4
	push eax

 Block42:
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov eax,1

 Block44:
	neg eax
	sbb eax,eax
	and eax,5
	add eax,7
	push eax
	lea eax,[esp+0x24]
	push eax
	call CHATLOG_ADD
	add esp,8
	jmp Block126

 Block45:
	cmp ebp,3
	jne Block53

 Block46:
	mov ecx,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	push edi
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::CreateFromCharStr
	mov bl,0x12
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xBC],bl
	call ZXString<char>::IsEmpty
	mov esi,dword ptr [esp+0x2C]
	test eax,eax
	je Block48

 Block47:
	lea eax,[esp+0x5C]
	push 0x9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xC8],0x13
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0xC
	jmp Block49

 Block48:
	lea eax,[esp+0x9C]
	push 0x9B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xCC],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xAC]
	add esp,0x10

 Block49:
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov byte ptr [esp+0xBC],0x10
	test esi,esi
	je Block43

 Block52:
	add esi,0xFFFFFFF4
	push esi
	jmp Block42

 Block53:
	cmp ebp,4
	jne Block55

 Block54:
	lea eax,[esp+0x64]
	push 0x9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xC8],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x70]
	add esp,0xC
	mov byte ptr [esp+0xBC],0x10
	jmp Block40

 Block55:
	cmp ebp,1
	jne Block88

 Block56:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode4
	mov dword ptr [esp+0x34],eax
	mov eax,0x431BDE83
	mul edi
	mov eax,edx
	shr eax,0x12
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,9
	jne Block59

 Block57:
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::IsUnderCover
	test eax,eax
	jne Block59

 Block58:
	lea edx,[esp+0x8C]
	push 0x9E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xC8],0x16
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x98]
	add esp,0xC
	mov byte ptr [esp+0xBC],0x10
	jmp Block40

 Block59:
	lea eax,[esp+0x38]
	push edi
	push eax
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [esp+0x3C],0
	mov byte ptr [esp+0xBC],0x17
	sete al
	test al,al
	je Block61

 Block60:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xBC],0x10
	call CField::PROPERTY::~PROPERTY
	jmp Block43

 Block61:
	lea ecx,[esp+0x4C]
	push 0x6EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xC8],0x18
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xBC],0x1A
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	lea eax,[esp+0xAC]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push edi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0xC8],0x1B
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0xAC]
	mov bl,0x1D
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block67

 Block66:
	cmp byte ptr [eax],0
	jne Block68

 Block67:
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	jmp Block70

 Block68:
	lea eax,[esp+0x74]
	push 0x72D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xCC],0x1E
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x84]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea ecx,[esp+0x94]
	push 0x9D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xCC],0x1F
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA4]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::IsUnderCover
	test eax,eax
	je Block77

 Block73:
	lea ecx,[esp+0x7C]
	push 0x731
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x48],0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0xC8],0x21
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xBC],0x20
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	cmp dword ptr [_D_S_BCHASE],0
	je Block81

 Block78:
	lea eax,[esp+0x24]
	push edi
	push eax
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [esp+0x28],0
	mov byte ptr [esp+0xBC],0x22
	sete al
	test al,al
	sete al
	test al,al
	je Block80

 Block79:
	mov ecx,dword ptr [esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push ebp
	push 0
	push 0
	push edi
	call CField::SendTransferFieldRequest

 Block80:
	lea ecx,[esp+0x24]
	call CField::PROPERTY::~PROPERTY

 Block81:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xBC],0x1A
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xBC],0x17
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xBC],0x10
	call CField::PROPERTY::~PROPERTY
	test esi,esi
	je Block43

 Block86:
	cmp byte ptr [esi],0
	je Block43

 Block87:
	xor eax,eax
	jmp Block44

 Block88:
	lea edx,[esp+0x50]
	push 0x9A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xC8],0x23
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov byte ptr [esp+0xBC],0x10
	jmp Block40

 Block89:
	test bl,0x40
	je Block126

 Block90:
	cmp ebp,2
	jne Block95

 Block91:
	lea ecx,[esp+0x60]
	push 0x1A2D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea edx,[esp+0x58]
	push 0x2D7
	mov bl,0x24
	push edx
	mov byte ptr [esp+0xC4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xCC],0x25
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xBC],0x10
	test eax,eax
	je Block124

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block124

 Block95:
	cmp ebp,3
	jne Block101

 Block96:
	mov ecx,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	push edi
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::CreateFromCharStr
	mov bl,0x26
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xBC],bl
	call ZXString<char>::IsEmpty
	mov esi,dword ptr [esp+0x2C]
	test eax,eax
	jne Block99

 Block97:
	lea ecx,[esp+0x68]
	push 0x2D7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xCC],0x27
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	mov byte ptr [esp+0xBC],0x10
	test esi,esi
	je Block124

 Block100:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block124

 Block101:
	cmp ebp,4
	je Block124

 Block102:
	cmp ebp,1
	jne Block124

 Block103:
	mov eax,0x431BDE83
	mul edi
	mov eax,edx
	shr eax,0x12
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,9
	jne Block109

 Block104:
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::IsUnderCover
	test eax,eax
	jne Block109

 Block105:
	lea edx,[esp+0x78]
	push 0x18E0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea eax,[esp+0x70]
	push 0x2D7
	mov bl,0x28
	push eax
	mov byte ptr [esp+0xC4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xCC],0x29
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x80]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xBC],0x10
	test eax,eax
	je Block124

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block124

 Block109:
	lea ecx,[esp+0x38]
	push edi
	push ecx
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [esp+0x3C],0
	mov byte ptr [esp+0xBC],0x2A
	sete al
	test al,al
	jne Block123

 Block110:
	lea edx,[esp+0x80]
	push 0x6EB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0xC8],0x2B
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0xBC],0x2D
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	lea ecx,[esp+0x88]
	push 0x6EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xC8],0x2E
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x88]
	mov bl,0x30
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	lea ecx,[esp+0x2C]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block116

 Block115:
	lea eax,[esp+0x1C]
	push eax
	jmp Block117

 Block116:
	lea ecx,[esp+0x2C]
	push ecx

 Block117:
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	lea edx,[esp+0x90]
	push 0x2D7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xCC],0x31
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA0]
	add esp,0x10
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xBC],0x2D
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block121:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xBC],0x2A
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block123:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xBC],0x10
	call CField::PROPERTY::~PROPERTY

 Block124:
	mov eax,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	test eax,eax
	je Block126

 Block125:
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[eax+0xB08]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	push 0
	call CWnd::InvalidateRect

 Block126:
	mov esi,dword ptr [esp+0x30]
	xor edi,edi
	mov dword ptr [esi+0x2A4],edi
	call timeGetTime
	mov dword ptr [esi+0x2AC],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [_D_S_BCHASE],edi
	mov byte ptr [esp+0xBC],0xE
	cmp eax,edi
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],0xD
	cmp eax,edi
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	jmp Block142

 Block131:
	mov dword ptr [esp+0x24],0
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0xC0],0x32
	call CInPacket::DecodeStr
	mov bl,0x33
	mov ecx,esi
	mov byte ptr [esp+0xBC],bl
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block135

 Block132:
	lea ecx,[esp+0x1C]
	call ZXString<char>::MakeLower
	lea eax,[esp+0x98]
	push 0x9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xC8],0x34
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA4]
	add esp,0xC
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	push 0xC
	lea eax,[esp+0x28]
	push eax
	jmp Block138

 Block135:
	lea ecx,[esp+0xA0]
	push 0x9F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xC8],0x35
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xAC]
	add esp,0xC
	mov byte ptr [esp+0xBC],bl
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	push 1
	lea ecx,[esp+0x28]
	push ecx

 Block138:
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0xBC],0x32
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov eax,dword ptr [esp+0x24]

 Block141:
	test eax,eax

 Block142:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	je Block144

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block144:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 4
}
}
// CField::OnBlowWeather
_SUB_EXCEPTION_HANDLER(1468F0)
__SUB_CLASS_THIS(001468F0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1468F0
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
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esi+0x2B8],eax
	call CInPacket::Decode4
	mov ebp,eax
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x20],0
	test ebp,ebp
	je Block4

 Block1:
	cmp dword ptr [esi+0x2B8],0
	jne Block4

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block5

 Block4:
	push offset _S_
	lea ecx,[esp+0x2C]
	call ZXString<char>::AssignCStr

 Block5:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ebp
	mov ecx,esi
	call CField::BlowWeather_2
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
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
// CField::BlowWeather
_SUB_EXCEPTION_HANDLER(13DD50)
__SUB_CLASS_THIS(0013DD50, __thiscall, 25048,  CField, void, long, NakedParam<ZXString<char>>, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13DD50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov edi,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x78]
	xor ebp,ebp
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esi+0x2A0],eax
	cmp edi,ebp
	jne Block7

 Block1:
	mov eax,dword ptr [esi+0x24]
	cmp eax,ebp
	je Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebp
	push eax
	call CSoundMan::StopSE

 Block3:
	mov ecx,esi
	call CMapLoadable::RestoreBGM
	mov ecx,esi
	call CMapLoadable::TransientLayer_Clear
	cmp dword ptr [esi+0x2B8],ebp
	jne Block6

 Block4:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	cmp ecx,ebp
	je Block6

 Block5:
	push 0x1388
	push ebp
	push ebp
	call CUIStatusBar::FloatNotice

 Block6:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esi+0x29C],ebp
	cmp eax,ebp
	jmp Block98

 Block7:
	call get_update_time
	push edi
	lea ecx,[esp+0x7C]
	mov dword ptr [esi+0x29C],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x78]
	cmp esi,ebp
	sete al
	mov byte ptr [esp+0x68],1
	test al,al
	je Block11

 Block8:
	mov byte ptr [esp+0x68],0
	cmp esi,ebp
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block10:
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebp
	jmp Block98

 Block11:
	push edi
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block15

 Block12:
	mov byte ptr [esp+0x68],al
	cmp esi,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebp
	jmp Block98

 Block15:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x618
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],2
	cmp ecx,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x74],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],3
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x30],di
	jne Block23

 Block18:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block20:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block21:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x733
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],4
	cmp ecx,ebp
	jne Block24

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	jmp Block21

 Block24:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x74],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],5
	call get_int32
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x30],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block28:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0xEED
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],6
	cmp ecx,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x74],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],7
	call get_int32
	add esp,8
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x30],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block34:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x67A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],8
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x74],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],9
	call get_int32
	add esp,8
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x30],di
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block40:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x734
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x6C],0xA
	cmp ecx,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x70],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x68],0xB
	cmp word ptr [eax],di
	jne Block44

 Block43:
	mov eax,dword ptr [eax+8]
	jmp Block45

 Block44:
	mov eax,offset _S___3

 Block45:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],ebp
	call ZXString16::Assign
	mov byte ptr [esp+0x68],0xD
	cmp word ptr [esp+0x30],di
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block49:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x735
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x6C],0xE
	cmp ecx,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],0xD
	call IWzProperty::Getitem
	mov byte ptr [esp+0x68],0xF
	cmp word ptr [eax],di
	jne Block53

 Block52:
	mov eax,dword ptr [eax+8]
	jmp Block54

 Block53:
	mov eax,offset _S___3

 Block54:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString16::Assign
	mov bl,0x11
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x40],di
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block58:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x736
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],0x12
	cmp ecx,ebp
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],0x13
	call get_int32
	add esp,8
	mov ebp,eax
	neg ebp
	sbb ebp,ebp
	mov edi,8
	neg ebp
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],di
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x50]
	push ecx
	call esi

 Block64:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1AD0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x70],0x14
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],0x15
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],di
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block72

 Block71:
	cmp word ptr [eax],0
	jne Block74

 Block72:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0xD
	test ecx,ecx
	je Block93

 Block73:
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block91

 Block74:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block78

 Block75:
	cmp word ptr [edi],0
	je Block78

 Block76:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	test ebp,ebp
	je Block85

 Block77:
	push 1
	push 0x3E8
	push 0x3E8
	push esi
	push edi
	call CSoundMan::PlayBGM

 Block78:
	mov esi,dword ptr [esp+0x18]

 Block79:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	test ecx,ecx
	je Block83

 Block80:
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block83

 Block81:
	cmp dword ptr [eax-4],0
	jle Block83

 Block82:
	mov edx,dword ptr [esp+0x1C]
	push 0x4E20
	push edx
	push eax
	call CUIStatusBar::FloatNotice

 Block83:
	mov eax,dword ptr [esp+0x20]
	cmp eax,3
	jne Block86

 Block84:
	push ecx
	lea eax,[esp+0x74]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call ZXString16::_ctor_copy
	mov ecx,esi
	call CMapLoadable::TransientLayer_FireCracker
	jmp Block89

 Block85:
	push esi
	push 0x64
	push edi
	call CSoundMan::PlaySE
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esi+0x24],eax
	jmp Block79

 Block86:
	cmp eax,4
	jne Block88

 Block87:
	push ecx
	lea eax,[esp+0x74]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call ZXString16::_ctor_copy
	mov ecx,esi
	call CMapLoadable::TransientLayer_NewYear
	jmp Block89

 Block88:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x7C]
	push eax
	mov ecx,esi
	call CMapLoadable::TransientLayer_Weather

 Block89:
	mov byte ptr [esp+0x68],0xD
	test edi,edi
	je Block92

 Block90:
	add edi,0xFFFFFFF4
	push edi

 Block91:
	call ZXString16::_Release
	add esp,4

 Block92:
	mov eax,dword ptr [esp+0x70]

 Block93:
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov eax,dword ptr [esp+0x74]
	test eax,eax

 Block98:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0x10
}
}
// CField::BlowWeather
_SUB_EXCEPTION_HANDLER(146870)
__SUB_CLASS_THIS(00146870, __thiscall, 25051,  CField, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_146870
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
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [esp+0x20],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	push ecx
	mov ecx,esi
	call CField::BlowWeather_1
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CSnowMan::DrawHPTag
_SUB_EXCEPTION_HANDLER(160600)
__SUB_CLASS_THIS0(00160600, __thiscall, 143055,  CSnowMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_160600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [ebp+0x24]
	mov dword ptr [esp+0x90],0
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov edi,8
	mov byte ptr [esp+0x90],2
	cmp word ptr [esp+0x18],di
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFF000000
	push 0xA
	push 0x34
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFFFFFFFF
	push edi
	push 0x32
	push 1
	push 1
	push esi
	call eax
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 6
	push 0x30
	push 2
	push 2
	push esi
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	jle Block16

 Block15:
	imul eax,0x2E
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	jmp Block17

 Block16:
	mov eax,0x2E

 Block17:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFF0000
	push 4
	push eax
	push 3
	push 3
	push esi
	call edx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	jle Block21

 Block20:
	imul eax,0x2E
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	jmp Block22

 Block21:
	mov eax,0x2E

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFA00300
	push 1
	push eax
	push 6
	push 3
	push esi
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [esp+0x90],al
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov byte ptr [esp+0x90],2
	cmp word ptr [esp+0x28],di
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x68]
	push edx
	call edi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],4
	call edi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x94],5
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x94],6
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x94],7
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [esp+0x90],8
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x68]
	push eax
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	lea edx,[esp+0x90]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x78],bp
	jne Block51

 Block45:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x90],7
	cmp word ptr [esp+0x28],bp
	jne Block52

 Block49:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block53

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block51:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x78]
	push ecx
	call edi
	jmp Block48

 Block52:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block53:
	mov byte ptr [esp+0x90],6
	cmp word ptr [esp+0x38],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x38]
	push edx
	call edi

 Block57:
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x48],bp
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block61:
	mov byte ptr [esp+0x90],4
	cmp word ptr [esp+0x58],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x58]
	push eax
	call edi

 Block65:
	mov byte ptr [esp+0x90],2
	cmp word ptr [esp+0x68],bp
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x68]
	push edx
	call edi

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x84
	ret
}
}
// CField::SendWithdrawGuildMsg
_SUB_EXCEPTION_HANDLER(134AD0)
__SUB_CLASS_THIS0(00134AD0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134AD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [esi+0x37C8]
	test eax,eax
	jne Block6

 Block1:
	lea eax,[esp+0xC]
	push 0x16B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],0

 Block2:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block4

 Block3:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block17

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block6:
	mov eax,dword ptr [esi+0x20B4]
	mov ecx,dword ptr [esi+0x37D4]
	cmp dword ptr [ecx],eax
	jne Block8

 Block7:
	lea edx,[esp+0xC]
	push 0x16C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],1
	jmp Block2

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x164
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block17

 Block9:
	push 0x95
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],2
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x20B4]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov esi,dword ptr [esi+0x20CC]
	test esi,esi
	je Block11

 Block10:
	lea ecx,[esi+4]
	jmp Block12

 Block11:
	xor ecx,ecx

 Block12:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block16

 Block13:
	mov eax,ecx
	lea esi,[eax+1]
	nop

 Block14:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block14

 Block15:
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

 Block16:
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block17:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CField::RestoreTownPortal
__SUB_CLASS_THIS(0012E9C0, __thiscall, 25007,  CField, void, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	add ecx,0x1B4
	call ZArray<tagPOINT>::InsertBefore
	mov ecx,dword ptr [esp+4]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esp+8]
	mov dword ptr [eax+4],edx
	ret 8
}
}
// CField::OnRequestFootHoldInfo
_SUB_EXCEPTION_HANDLER(12DDD0)
__SUB_CLASS_THIS(0012DDD0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12DDD0
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
	push 0x10E
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	mov esi,dword ptr [esi+0x278]
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block86

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<DYNAMIC_OBJ_INFO>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block4:
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [esi+0x20]
	mov byte ptr [esp+0x38],1
	test eax,eax
	jne Block6

 Block5:
	xor edx,edx
	jmp Block7

 Block6:
	mov edx,dword ptr [eax-4]

 Block7:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	cmp ecx,edx
	jbe Block12

 Block8:
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block10:
	add eax,eax
	cmp ecx,eax
	ja Block10

 Block11:
	lea edx,[esp+0x13]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block12:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+ecx],edi
	mov eax,dword ptr [esp+0x28]
	add eax,4
	mov dword ptr [esp+0x28],eax
	mov ecx,dword ptr [esi+0x2C]
	test ecx,ecx
	je Block47

 Block13:
	mov ebx,dword ptr [ecx+0x14]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	jne Block15

 Block14:
	xor edi,edi
	jmp Block16

 Block15:
	mov edi,dword ptr [ecx-4]

 Block16:
	lea edx,[eax+4]
	cmp edx,edi
	jbe Block22

 Block17:
	test ecx,ecx
	jne Block19

 Block18:
	xor eax,eax
	jmp Block20

 Block19:
	mov eax,dword ptr [ecx-4]
	lea esp,[esp]

 Block20:
	add eax,eax
	cmp edx,eax
	ja Block20

 Block21:
	lea edx,[esp+0x13]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]

 Block22:
	mov dword ptr [ecx+eax],ebx
	add dword ptr [esp+0x28],4
	mov eax,dword ptr [esi+0x2C]
	mov edi,dword ptr [eax+0x18]
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block24

 Block23:
	xor edx,edx
	jmp Block25

 Block24:
	mov edx,dword ptr [eax-4]

 Block25:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	cmp ecx,edx
	jbe Block30

 Block26:
	test eax,eax
	je Block28

 Block27:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block28:
	add eax,eax
	cmp ecx,eax
	ja Block28

 Block29:
	lea ecx,[esp+0x13]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block30:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x28],4
	mov eax,dword ptr [esi+0x2C]
	mov bl,byte ptr [eax+0x1C]
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block32

 Block31:
	xor edx,edx
	jmp Block33

 Block32:
	mov edx,dword ptr [eax-4]

 Block33:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block38

 Block34:
	test eax,eax
	je Block36

 Block35:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block36:
	add eax,eax
	cmp ecx,eax
	ja Block36

 Block37:
	lea ecx,[esp+0x13]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block38:
	mov edx,dword ptr [esp+0x28]
	mov byte ptr [eax+edx],bl
	mov edi,1
	add dword ptr [esp+0x28],edi
	mov eax,dword ptr [esi+0x2C]
	mov bl,byte ptr [eax+0x20]
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block40

 Block39:
	xor edx,edx
	jmp Block41

 Block40:
	mov edx,dword ptr [eax-4]

 Block41:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block46

 Block42:
	test eax,eax
	je Block44

 Block43:
	mov eax,dword ptr [eax-4]

 Block44:
	add eax,eax
	cmp ecx,eax
	ja Block44

 Block45:
	lea ecx,[esp+0x13]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block46:
	mov edx,dword ptr [esp+0x28]
	mov byte ptr [eax+edx],bl
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	jmp Block82

 Block47:
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	jne Block49

 Block48:
	xor edi,edi
	jmp Block50

 Block49:
	mov edi,dword ptr [ecx-4]

 Block50:
	lea edx,[eax+4]
	cmp edx,edi
	jbe Block56

 Block51:
	test ecx,ecx
	jne Block53

 Block52:
	xor eax,eax
	jmp Block54

 Block53:
	mov eax,dword ptr [ecx-4]
	mov edi,edi

 Block54:
	add eax,eax
	cmp edx,eax
	ja Block54

 Block55:
	lea ecx,[esp+0x13]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]

 Block56:
	mov dword ptr [ecx+eax],0
	mov eax,dword ptr [esp+0x24]
	mov edi,4
	add dword ptr [esp+0x28],edi
	test eax,eax
	jne Block58

 Block57:
	xor edx,edx
	jmp Block59

 Block58:
	mov edx,dword ptr [eax-4]

 Block59:
	mov ecx,dword ptr [esp+0x28]
	add ecx,edi
	cmp ecx,edx
	jbe Block64

 Block60:
	test eax,eax
	je Block62

 Block61:
	mov eax,dword ptr [eax-4]
	nop

 Block62:
	add eax,eax
	cmp ecx,eax
	ja Block62

 Block63:
	lea edx,[esp+0x13]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block64:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+ecx],0
	mov eax,dword ptr [esp+0x24]
	add dword ptr [esp+0x28],edi
	test eax,eax
	jne Block66

 Block65:
	xor edx,edx
	jmp Block67

 Block66:
	mov edx,dword ptr [eax-4]

 Block67:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block72

 Block68:
	test eax,eax
	je Block70

 Block69:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block70:
	add eax,eax
	cmp ecx,eax
	ja Block70

 Block71:
	lea edx,[esp+0x13]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block72:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [eax+ecx],0
	mov eax,dword ptr [esp+0x24]
	mov edi,1
	add dword ptr [esp+0x28],edi
	test eax,eax
	jne Block74

 Block73:
	xor edx,edx
	jmp Block75

 Block74:
	mov edx,dword ptr [eax-4]

 Block75:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block81

 Block76:
	test eax,eax
	je Block79

 Block77:
	mov eax,dword ptr [eax-4]
	jmp Block79

 Block79:
	add eax,eax
	cmp ecx,eax
	ja Block79

 Block80:
	lea edx,[esp+0x13]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block81:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [eax+ecx],0

 Block82:
	add dword ptr [esp+0x28],edi
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x3C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block83:
	push edi
	call ebx
	test esi,esi
	je Block85

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block85:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],0
	jne Block2

 Block86:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CField::UserLook::ForceLook
__SUB_CLASS_THIS(0012A2F0, __thiscall, 25432,  CField::UserLook, void, CUser*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	push esi
	add ecx,0x39
	push ecx
	lea esi,[eax+0x88]
	push 1
	mov ecx,esi
	call CAvatar::ForcingAppearance
	push 1
	mov ecx,esi
	call CAvatar::NotifyAvatarModified
	pop esi

 Block2:
	ret 4
}
}
// CField::GetFieldProp
_SUB_EXCEPTION_HANDLER(132220)
__SUB(00132220, __cdecl, 24948,  CField::PROPERTY, unsigned long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_132220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor edi,edi
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+0x58],edi
	mov dword ptr [ebp+0x5C],edi
	mov esi,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],edi
	cmp esi,0x3B9AC9FF
	jne Block2

 Block1:
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],edi
	jmp Block158

 Block2:
	mov dword ptr [ebp+0x60],edi
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	push 0x9EC
	lea ecx,[ebp+0x78]
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	mov eax,0x55E63B89
	mul esi
	push esi
	shr edx,0x19
	push edx
	push ecx
	lea edx,[ebp+0x60]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [ebp+0x78]
	add esp,0x10
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x40]
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
	mov eax,dword ptr [ebp+0x60]
	push edi
	push edi
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push ecx
	mov dword ptr [ebp+0x78],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ebx,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x50],bx
	jne Block23

 Block17:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x40],bx
	jne Block24

 Block21:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block25

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block23:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x50]
	push eax
	call esi
	jmp Block20

 Block24:
	lea edx,[ebp-0x40]
	push edx
	call esi

 Block25:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp]
	push ecx
	call esi

 Block29:
	push edi
	push edi
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x78],esp
	push 0x3D5
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xC
	cmp ecx,edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[ebp-0x70]
	push eax
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x70],bx
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp-0x70]
	push edx
	call esi

 Block38:
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x78],esp
	push 0x3D6
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x10
	cmp ecx,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	cmp word ptr [eax],bx
	jne Block42

 Block41:
	mov eax,dword ptr [eax+8]
	jmp Block43

 Block42:
	mov eax,offset _S_0

 Block43:
	push eax
	call __wtoi
	add esp,4
	cmp word ptr [ebp+0x30],8
	mov esi,eax
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp esi,edi
	je Block131

 Block48:
	call StringPool::GetInstance
	push 0x9EC
	lea edx,[ebp+0x78]
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	jmp Block51

 Block50:
	xor ecx,ecx

 Block51:
	mov eax,0x55E63B89
	mul esi
	push esi
	shr edx,0x19
	push edx
	push ecx
	lea eax,[ebp+0x60]
	push eax
	call ZXString16::Format
	mov ecx,dword ptr [ebp+0x78]
	add esp,0x10
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	je Block53

 Block52:
	call _xbstr_t::Data_t::Release

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x20]
	push ecx
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],0x12
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	push edi
	push edi
	lea edx,[ebp-0x20]
	push edx
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp-0x30]
	push eax
	push ecx
	mov dword ptr [ebp+0x78],esp
	mov ecx,esp
	mov bl,0x13
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],edi
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x60],si
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x30],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x20],si
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x1A
	cmp ecx,edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[ebp+0x10]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1B
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x1D
	cmp eax,edi
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov esi,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x24],edi

 Block79:
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,edi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x24]
	push edx
	lea edx,[ebp+0x14]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	cmp eax,edi
	jne Block124

 Block82:
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+0x78]
	push edx
	call DetachBSTR
	add esp,8
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x28],esp
	cmp eax,edi
	je Block84

 Block83:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block84:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	push 0x3D5
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	jmp Block87

 Block86:
	xor ecx,ecx

 Block87:
	mov eax,dword ptr [ebp+0x78]
	cmp eax,edi
	je Block89

 Block88:
	mov eax,dword ptr [eax]
	jmp Block90

 Block89:
	xor eax,eax

 Block90:
	push ecx
	push eax
	call __wcsicmp
	mov ecx,dword ptr [ebp+0x40]
	add esp,8
	test eax,eax
	sete bl
	cmp ecx,edi
	je Block92

 Block91:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x40],edi

 Block92:
	test bl,bl
	je Block94

 Block93:
	cmp word ptr [ebp+0x44],8
	jmp Block113

 Block94:
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x28],esp
	cmp eax,edi
	je Block96

 Block95:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block96:
	mov byte ptr [ebp-4],0x21
	cmp esi,edi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[ebp-0x80]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	cmp word ptr [eax],di
	setne bl
	cmp word ptr [ebp-0x80],8
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	test bl,bl
	je Block104

 Block103:
	cmp word ptr [ebp+0x44],8
	jmp Block113

 Block104:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov edx,dword ptr [ebp+0x78]
	lea eax,[ebp+0x30]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x28],esp
	cmp eax,edi
	je Block108

 Block107:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block108:
	mov byte ptr [ebp-4],0x23
	mov ecx,esi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Add
	mov ebx,8
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x30],bx
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	cmp word ptr [ebp+0x44],bx

 Block113:
	mov byte ptr [ebp-4],0x1E
	jne Block116

 Block114:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	cmp eax,edi
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x1D
	cmp ecx,edi
	je Block119

 Block118:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x78],edi

 Block119:
	cmp word ptr [ebp+0x14],8
	jne Block122

 Block120:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	cmp eax,edi
	je Block79

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block122:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block79

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x1A
	cmp eax,edi
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x19
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,edi
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xF
	call eax

 Block131:
	mov esi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x64]
	cmp esi,eax
	je Block136

 Block132:
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block134:
	cmp esi,edi
	je Block136

 Block135:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block136:
	mov ebx,dword ptr [ebp+0x58]
	mov eax,dword ptr [ebp+0x68]
	cmp ebx,eax
	je Block141

 Block137:
	mov esi,ebx
	mov ebx,eax
	mov dword ptr [ebp+0x58],ebx
	cmp eax,edi
	je Block139

 Block138:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block139:
	cmp esi,edi
	je Block141

 Block140:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block141:
	mov esi,dword ptr [ebp+0x74]
	mov dword ptr [esi],ebx
	cmp ebx,edi
	je Block143

 Block142:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block143:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [esi+4],eax
	cmp eax,edi
	je Block145

 Block144:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block145:
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [ebp+0x68],edi
	je Block147

 Block146:
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	mov byte ptr [ebp-4],2
	cmp dword ptr [ebp+0x64],edi
	je Block149

 Block148:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block151:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp dword ptr [ebp+0x5C],edi
	je Block153

 Block152:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block153:
	cmp ebx,edi
	je Block155

 Block154:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block155:
	mov eax,esi
	jmp Block158

 Block158:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret
}
}
// CField::OnFieldSetVariable
_SUB_EXCEPTION_HANDLER(13CB60)
__SUB_CLASS_THIS(0013CB60, __thiscall, 24972,  CField, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13CB60
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CField_Tournament::CField_Tournament
_SUB_EXCEPTION_HANDLER(13E700)
__SUB_CLASS_THIS0(0013E700, __thiscall, 53789,  CField_Tournament, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13E700
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
	call CField::_ctor_default
	push offset CField_Tournament::AvatarInfo::~AvatarInfo
	push offset CField_Tournament::AvatarInfo::_ctor_default
	xor eax,eax
	push 0x20
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esi+0xDA0],eax
	push 0x108
	lea eax,[esi+0xDA4]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_Tournament::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Tournament::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Tournament::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Tournament::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField::OnFieldObstacleOnOff
_SUB_EXCEPTION_HANDLER(135A80)
__SUB_CLASS_THIS(00135A80, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135A80
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
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x14],0
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CMapLoadable::SetObjectState
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CField::OnJoystickButton
__SUB_CLASS_THIS(0012A880, __thiscall, 24965,  CField, void, uint32_t, unsigned long) {
__asm {

 Block0:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block2:
	jmp  CUserLocal::OnJoystickButton

 Block3:
	ret 8
}
}
// CSnowBall::Move
_SUB_EXCEPTION_HANDLER(160080)
__SUB_CLASS_THIS(00160080, __thiscall, 143073,  CSnowBall, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_160080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [CSnowBall::ms_nDeltaX]
	mov edi,dword ptr [esp+0x50]
	imul eax,edi
	push 0
	push eax
	lea ecx,[esi+0x20]
	push ecx
	call OffsetRect
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	call ebp
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x4C],0
	call ebp
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi+0x30]
	mov byte ptr [esp+0x48],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [CSnowBall::ms_nDeltaX]
	imul eax,edi
	lea edx,[esp+0x14]
	push edx
	push 0
	push eax
	call IWzVector2D::RelOffset
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x48],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x48],0xFFFFFFFF
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
	test edi,edi
	je Block23

 Block15:
	lea edx,[esp+0x30]
	push edx
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x48],2
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[edi*4]
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x50],eax
	fild dword ptr [esp+0x50]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x48],0xFFFFFFFF
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 4

 Block22:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 4
}
}
// CField::RestoreForbiddenSkill
_SUB_EXCEPTION_HANDLER(132FB0)
__SUB_CLASS_THIS0(00132FB0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_132FB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_NOSKILL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x38],0
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x34],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],3
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,esi
	lea edi,[esi+0xD28]
	call edx
	push eax
	mov ecx,edi
	call Field::SkillInfo::SetFieldType
	mov esi,dword ptr [esp+0xC]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block11:
	mov ecx,edi
	call Field::SkillInfo::Parse
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CSnowBall::SetPos
__SUB_CLASS_THIS(001603A0, __thiscall, 143075,  CSnowBall, void, long, long, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,dword ptr [ecx+0xC]
	cmp dword ptr [CField_SnowBall::ms_rgBall],edx
	jg Block6

 Block1:
	cmp edx,dword ptr [CField_SnowBall::ms_rgBall+4]
	jg Block6

 Block2:
	cmp dword ptr [ecx+0x34],0
	je Block6

 Block3:
	cmp dword ptr [esp+0xC],0
	je Block5

 Block4:
	mov dword ptr [ecx+0xC],edx
	mov edx,dword ptr [esp+8]
	push eax
	mov dword ptr [ecx+0x10],0
	mov dword ptr [ecx+0x14],edx
	mov dword ptr [ecx+0x18],0
	call CSnowBall::Move
	ret 0xC

 Block5:
	mov edx,dword ptr [esp+8]
	lea eax,[eax+eax*2]
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x14],edx

 Block6:
	ret 0xC
}
}
// CField::PROPERTY::PROPERTY
__SUB_CLASS_THIS(0012A670, __thiscall, 25072,  CField::PROPERTY, void, const CField::PROPERTY&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// CField::RestoreWeatherMsg
_SUB_EXCEPTION_HANDLER(13CF80)
__SUB_CLASS_THIS0(0013CF80, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13CF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	lea ecx,[esi+0x258]
	mov dword ptr [ebp+0x40],ecx
	call ZList<CField::WEATHERMSGINFO>::RemoveAll
	call get_update_time
	xor edi,edi
	push edi
	push edi
	push ecx
	mov dword ptr [esi+0x298],eax
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x111D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x10]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
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
	mov ebx,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x10],bx
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp+0x64]
	cmp esi,edi
	sete al
	test al,al
	je Block12

 Block10:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block48

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block48

 Block12:
	mov dword ptr [ebp+0x60],edi

 Block13:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp esi,edi
	je Block1

 Block14:
	lea edx,[ebp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	cmp eax,edi
	je Block17

 Block15:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	jge Block17

 Block16:
	cmp eax,0x80004002
	jne Block4

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x30],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	cmp esi,edi
	sete al
	test al,al
	jne Block45

 Block22:
	mov dword ptr [ebp+0x54],edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x111E
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	cmp esi,edi
	je Block1

 Block23:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x50],eax
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x1C],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x963
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x20]
	mov byte ptr [ebp-4],0xB
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	imul eax,0x3E8
	add esp,8
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x20],bx
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0xCB4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp],bx
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1AC3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x10
	cmp word ptr [eax],bx
	jne Block37

 Block36:
	mov eax,dword ptr [eax+8]
	jmp Block38

 Block37:
	mov eax,offset _S___3

 Block38:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x54]
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [ebp+0x40]
	call ZList<CField::WEATHERMSGINFO>::AddTail_
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],ecx
	lea ecx,[ebp+0x54]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	push ecx
	lea ecx,[eax+0xC]
	mov dword ptr [eax+8],edx
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	inc dword ptr [ebp+0x60]
	mov esi,dword ptr [ebp+0x64]
	jmp Block13

 Block45:
	mov byte ptr [ebp-4],3
	cmp esi,edi
	je Block47

 Block46:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block47:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block48:
	lea esp,[ebp-0x3C]
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
	ret
}
}
// CField_Tournament::OnTournament
_SUB_EXCEPTION_HANDLER(1631A0)
__SUB_CLASS_THIS(001631A0, __thiscall, 53796,  CField_Tournament, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1631A0
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
	mov edi,dword ptr [esp+0x28]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	xor ebx,ebx
	cmp eax,ebx
	jne Block7

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[eax+0x2038]
	mov esi,eax
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block3

 Block2:
	cmp dword ptr [esi+0x209C],ebx
	je Block7

 Block3:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	jne Block5

 Block4:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x3A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block5:
	cmp eax,1
	jne Block17

 Block6:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x3A3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block7:
	mov ecx,edi
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x10
	ja Block17

 Block8:
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	cmp esi,1
	jne Block10

 Block9:
	lea edx,[esp+0x10]
	push 0x3A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	jmp Block13

 Block10:
	cmp esi,2
	jne Block12

 Block11:
	lea eax,[esp+0x10]
	push 0x3A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_assign
	jmp Block13

 Block12:
	lea ecx,[esp+0x10]
	push 0x3A5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::Format
	add esp,0xC

 Block13:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
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
// CField::OffFearEffect
_SUB_EXCEPTION_HANDLER(12B810)
__SUB_CLASS_THIS0(0012B810, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12B810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xD98],0
	je Block14

 Block1:
	cmp dword ptr [esi+0xD78],0
	je Block4

 Block2:
	mov eax,dword ptr [esi+0xD78]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esi+0xD78],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0xD70],0
	je Block13

 Block5:
	mov eax,3
	mov word ptr [esp+0xC],ax
	mov dword ptr [esp+0x14],0xFFFFFFFE
	mov ecx,dword ptr [esi+0xD70]
	mov dword ptr [esp+0x24],0
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0xC]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov dword ptr [esi+0xD98],0

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CField::OnClock
_SUB_EXCEPTION_HANDLER(131510)
// 5318D0
static uint8_t _SUB_131510_LOOKUP_TABLE_0[101] = {
0, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 4, 
};
__SUB_CLASS_THIS(00131510, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_131510
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
	mov edi,dword ptr [esp+0x8C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	xor ebp,ebp
	cmp eax,3
	je Block2

 Block1:
	mov dword ptr [esi+0x2C0],ebp

 Block2:
	cmp eax,0x64
	ja Block34

 Block3:
	movzx eax,byte ptr [eax+_SUB_131510_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block16
cmp EAX, 4
je Block25
cmp EAX, 5
je Block34


 Block4:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,edi
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,ebp
	je Block6

 Block5:
	cdq
	xor eax,edx
	sub eax,edx
	push eax
	mov ecx,ebx
	call CWvsContext::SetEventTimer
	cmp esi,ebp
	jg Block34

 Block6:
	mov ecx,ebx
	call CWvsContext::OnEventTimer
	jmp Block34

 Block7:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebp,al
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x208]
	movzx eax,al
	push eax
	push ebp
	push ebx
	call CClock::SetClock
	jmp Block34

 Block8:
	lea ecx,[esp+0x1C]
	call CClock::INITPARAM::_ctor_default
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x30]
	lea eax,[esp+0x8C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x90],ebp
	call edx
	mov ecx,dword ptr [esi+0x208]
	cmp ecx,ebp
	je Block10

 Block9:
	call CWnd::Destroy

 Block10:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	cmp edi,ebp
	jl Block15

 Block11:
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x84],1
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,eax
	call CClock::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	lea ecx,[esi+0x204]
	mov byte ptr [esp+0x88],0
	call ZRef<CClock>::op_assign_ptr
	mov edx,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esi+0x208]
	push 1
	push 1
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x20]
	push 1
	push 0xC00616FC
	push 0x3A
	push 0x102
	push edx
	push eax
	call CWnd::CreateWnd
	mov ecx,dword ptr [esi+0x208]
	push edi
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0x208]
	call CClock::Start

 Block15:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call CClock::INITPARAM::~INITPARAM
	jmp Block34

 Block16:
	mov ecx,dword ptr [esi+0x208]
	cmp ecx,ebp
	je Block19

 Block17:
	cmp dword ptr [esi+0x2C0],1
	jne Block19

 Block18:
	call CWnd::Destroy
	mov dword ptr [esi+0x2C0],ebp

 Block19:
	cmp dword ptr [esi+0x208],ebp
	jne Block34

 Block20:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block34

 Block21:
	lea ecx,[esp+0x4C]
	call CClock::INITPARAM::_ctor_default
	mov ebx,2
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x54],0xFF000040
	mov dword ptr [esp+0x58],0xFFFFFF20
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x8C],eax
	mov byte ptr [esp+0x84],3
	cmp eax,ebp
	je Block23

 Block22:
	mov ecx,eax
	call CClock::_ctor_default
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	push eax
	lea ecx,[esi+0x204]
	mov byte ptr [esp+0x88],bl
	call ZRef<CClock>::op_assign_ptr
	mov ecx,dword ptr [esi+0x208]
	push ebp
	push 1
	lea edx,[esp+0x54]
	push edx
	push 1
	push 0xC00616FC
	push 0x53
	push 0xC2
	push 0x1E
	push 0x12F
	call CWnd::CreateWnd
	mov ebx,dword ptr [esi+0x208]
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	mov ecx,ebx
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0x208]
	call CClock::Start
	lea ecx,[esp+0x4C]
	mov dword ptr [esi+0x2C0],1
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call CClock::INITPARAM::~INITPARAM
	jmp Block34

 Block25:
	mov ecx,dword ptr [esi+0x208]
	cmp ecx,ebp
	je Block27

 Block26:
	call CWnd::Destroy

 Block27:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	je Block34

 Block28:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebp,al
	call CInPacket::Decode4
	mov dword ptr [esp+0x8C],eax
	mov edi,0x187
	mov ebx,0x53
	test ebp,ebp
	jne Block30

 Block29:
	mov edi,0x117
	lea ebx,[ebp+0x58]

 Block30:
	push 0xFC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x84],4
	test eax,eax
	je Block32

 Block31:
	push ebp
	mov ecx,eax
	call CTimerboard_CakePieEvent::_ctor_0
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push eax
	lea ecx,[esi+0x204]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ZRef<CClock>::op_assign_ptr
	mov ecx,dword ptr [esi+0x208]
	push 0
	push 1
	push 0
	push 1
	push 0xC00616FC
	mov eax,0x320
	sub eax,edi
	push ebx
	cdq
	push edi
	sub eax,edx
	push 0x19
	sar eax,1
	push eax
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esi+0x208]
	push eax
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0x208]
	call CClock::Start

 Block34:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 4
}
}
// CSnowBall::Win
_SUB_EXCEPTION_HANDLER(160270)
__SUB_CLASS_THIS0(00160270, __thiscall, 143074,  CSnowBall, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_160270
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x38],0
	call esi
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [edi+0x34]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x10]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],si
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0xC]
	push edx
	call edi

 Block10:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block14:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret
}
}
// DYNAMIC_OBJ_INFO::~DYNAMIC_OBJ_INFO
_SUB_EXCEPTION_HANDLER(12E310)
__SUB_CLASS_THIS0(0012E310, __thiscall, 24863,  DYNAMIC_OBJ_INFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12E310
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
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
	mov dword ptr [edi+0x2C],0

 Block5:
	mov eax,dword ptr [edi+0x24]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,edi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [edi],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CField::ShowMobHPTag
_SUB_EXCEPTION_HANDLER(135BA0)
__SUB_CLASS_THIS(00135BA0, __thiscall, 25014,  CField, void, unsigned long, long, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	xor edi,edi
	cmp dword ptr [ebp+0x78],edi
	jg Block4

 Block1:
	mov eax,dword ptr [esi+0x224]
	cmp eax,edi
	je Block3

 Block2:
	mov dword ptr [esi+0x224],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	lea ecx,[esi+0x2C4]
	call CUIToolTip::ClearToolTip
	jmp Block393

 Block4:
	mov eax,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	mov dword ptr [ebp+0x48],edi
	cmp eax,edi
	je Block7

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp byte ptr [ecx+0x41C4],0
	jne Block7

 Block6:
	mov edx,dword ptr [eax+0x24]
	mov dword ptr [ebp+0x48],edx

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x11C]
	push eax
	call esi
	lea ecx,[ebp-0x11C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[ebp-0x5C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x5C]
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
	push edi
	push edi
	lea ecx,[ebp-0x11C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCF9
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea ecx,[ebp-0x14C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	cmp word ptr [ebp-0x14C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x144]
	xor edx,edx
	mov word ptr [ebp-0x14C],dx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[ebp-0x14C]
	push eax
	call ebx

 Block20:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],6
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp-0x5C]
	push edx
	call ebx

 Block24:
	cmp word ptr [ebp-0x11C],8
	mov byte ptr [ebp-4],7
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[ebp-0x11C]
	push ecx
	call ebx

 Block28:
	lea edx,[ebp-0x2C]
	push edx
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea ecx,[ebp-0xCC]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp-0xCC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	push edi
	push edi
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0xCC]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCFA
	mov bl,9
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[ebp-0x19C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x19C],bx
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x194]
	xor ecx,ecx
	mov word ptr [ebp-0x19C],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp-0x19C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0xCC],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x2C],bx
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea ecx,[ebp-0x7C]
	push ecx
	call esi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[ebp-0xDC]
	push eax
	mov byte ptr [ebp-4],0x10
	call esi
	lea ecx,[ebp-0xDC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	push edi
	push edi
	lea edx,[ebp-0x7C]
	push edx
	lea eax,[ebp-0xDC]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCFB
	mov bl,0x11
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	cmp dword ptr [_D_G_RM],edi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[ebp-0x17C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+8]
	mov dword ptr [ebp+8],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ebx,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x17C],bx
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [ebp-0x17C],ax
	mov eax,dword ptr [ebp-0x174]
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[ebp-0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0xDC],bx
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x7C],bx
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	lea eax,[ebp-0x9C]
	push eax
	call esi
	lea ecx,[ebp-0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea edx,[ebp-0xFC]
	push edx
	mov byte ptr [ebp-4],0x18
	call esi
	lea eax,[ebp-0xFC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	push edi
	push edi
	lea ecx,[ebp-0x9C]
	push ecx
	lea edx,[ebp-0xFC]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCFC
	mov bl,0x19
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1A
	cmp dword ptr [_D_G_RM],edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea ecx,[ebp-0x1BC]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov ebx,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x1BC],bx
	jne Block82

 Block80:
	mov eax,dword ptr [ebp-0x1B4]
	xor edx,edx
	mov word ptr [ebp-0x1BC],dx
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp-0x1BC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xFC],bx
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0xF4]
	xor ecx,ecx
	mov word ptr [ebp-0xFC],cx
	cmp eax,edi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[ebp-0xFC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x9C],bx
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	cmp eax,edi
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea ecx,[ebp+0x4C]
	mov bl,0x20
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov esi,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x21
	cmp esi,edi
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x2C]
	push ecx
	push esi
	mov dword ptr [ebp+0x2C],edi
	call edx
	cmp eax,edi
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,edi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp+0x2C]
	lea edx,[ebp+0x4C]
	push edx
	push 0xC006153B
	push eax
	mov eax,dword ptr [ebp+0x48]
	mov edx,0x320
	sub edx,eax
	push edx
	push edi
	add eax,0xFFFFFE70
	push eax
	lea eax,[ebp+0x5C]
	push eax
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x40]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x224]
	cmp esi,eax
	je Block106

 Block102:
	mov edx,ecx
	mov dword ptr [edx+0x224],eax
	cmp eax,edi
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block104:
	cmp esi,edi
	je Block106

 Block105:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block106:
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block108:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block111

 Block109:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1F
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 1
	lea edx,[ebp+0x5C]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x22
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	cmp eax,edi
	je Block118

 Block117:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block118:
	mov ecx,dword ptr [ebp+0x40]
	mov esi,dword ptr [ecx+0x224]
	mov byte ptr [ebp-4],0x23
	cmp esi,edi
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block122

 Block121:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block122:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,edi
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x1F
	cmp eax,edi
	je Block128

 Block127:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block128:
	mov ebx,dword ptr [ebp+0x40]
	mov esi,dword ptr [ebx+0x224]
	cmp esi,edi
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,edi
	jge Block132

 Block131:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block132:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],edi
	mov ecx,dword ptr [ebx+0x224]
	mov byte ptr [ebp-4],0x24
	cmp ecx,edi
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x28]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x26
	jne Block137

 Block135:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov dword ptr [ebp+0x2C],edi
	lea eax,[ebp+0x5C]
	push 0xCFD
	push eax
	mov byte ptr [ebp-4],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],0x28
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x27
	cmp eax,edi
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x13C]
	push eax
	call esi
	lea ecx,[ebp-0x13C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	lea edx,[ebp-0xBC]
	push edx
	mov byte ptr [ebp-4],0x29
	call esi
	lea eax,[ebp-0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	mov edi,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x2A
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x13C]
	push ecx
	lea edx,[ebp-0xBC]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x2B
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea eax,[ebp-0x15C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block149

 Block147:
	cmp eax,0x80004002
	je Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	mov esi,8
	mov byte ptr [ebp-4],0x2E
	cmp word ptr [ebp-0x15C],si
	jne Block152

 Block150:
	mov eax,dword ptr [ebp-0x154]
	xor ecx,ecx
	mov word ptr [ebp-0x15C],cx
	cmp eax,edi
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[ebp-0x15C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp-0xBC],si
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	cmp eax,edi
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0x13C],si
	jne Block160

 Block158:
	mov eax,dword ptr [ebp-0x134]
	xor edx,edx
	mov word ptr [ebp-0x13C],dx
	cmp eax,edi
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea eax,[ebp-0x13C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov ebx,dword ptr [ebp+0x24]
	cmp ebx,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block169

 Block162:
	cmp ebx,edi
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x3C]
	push edx
	push ebx
	mov dword ptr [ebp+0x3C],edi
	call eax
	cmp eax,edi
	jge Block166

 Block165:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block166:
	mov ecx,dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x40]
	mov dword ptr [esi+0x228],ecx
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x3C]
	push eax
	push ebx
	mov dword ptr [ebp+0x3C],edi
	call ecx
	cmp eax,edi
	jge Block168

 Block167:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block168:
	mov eax,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x3C]
	push eax
	mov dword ptr [esi+0x22C],edx
	call CMobTemplate::GetMobTemplate
	add esp,4
	add eax,0x30
	push eax
	lea ecx,[esi+0xD0C]
	call ZXString<char>::op_assign

 Block169:
	mov dword ptr [ebp+0x3C],edi
	mov dword ptr [ebp+0xC],edi
	lea ecx,[ebp+0x5C]
	push 0xCFE
	push ecx
	mov byte ptr [ebp-4],0x32
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x3C]
	push edx
	mov byte ptr [ebp-4],0x33
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x32
	cmp eax,edi
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block171:
	lea eax,[ebp+0x5C]
	push 0xCFF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp+0xC]
	push ecx
	mov byte ptr [ebp-4],0x34
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x32
	cmp eax,edi
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block173:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xEC]
	push edx
	call esi
	lea eax,[ebp-0xEC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	lea ecx,[ebp-0x10C]
	push ecx
	mov byte ptr [ebp-4],0x35
	call esi
	lea edx,[ebp-0x10C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	mov edx,dword ptr [ebp+0x3C]
	push edi
	push edi
	lea eax,[ebp-0xEC]
	push eax
	lea ecx,[ebp-0x10C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	mov bl,0x36
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x37
	cmp dword ptr [_D_G_RM],edi
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	lea eax,[ebp-0x16C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x38
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block182

 Block180:
	cmp eax,0x80004002
	je Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	mov ebx,8
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x16C],bx
	jne Block189

 Block183:
	mov eax,dword ptr [ebp-0x164]
	xor ecx,ecx
	mov word ptr [ebp-0x16C],cx
	cmp eax,edi
	je Block185

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block185:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block186:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x10C],bx
	jne Block190

 Block187:
	xor eax,eax
	mov word ptr [ebp-0x10C],ax
	mov eax,dword ptr [ebp-0x104]
	cmp eax,edi
	je Block191

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block189:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x16C]
	push edx
	call esi
	jmp Block186

 Block190:
	lea ecx,[ebp-0x10C]
	push ecx
	call esi

 Block191:
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp-0xEC],bx
	jne Block194

 Block192:
	mov eax,dword ptr [ebp-0xE4]
	xor edx,edx
	mov word ptr [ebp-0xEC],dx
	cmp eax,edi
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea eax,[ebp-0xEC]
	push eax
	call esi

 Block195:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push ecx
	call ebx
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea eax,[ebp-0x12C]
	push eax
	mov byte ptr [ebp-4],0x3D
	call ebx
	lea ecx,[ebp-0x12C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	push edi
	push edi
	lea edx,[ebp-0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	lea eax,[ebp-0x12C]
	push eax
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	mov bl,0x3E
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x3F
	cmp dword ptr [_D_G_RM],edi
	jne Block201

 Block200:
	push 0x80004003
	call _com_issue_error

 Block201:
	lea eax,[ebp-0x18C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x40
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x14]
	mov dword ptr [ebp+0x14],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block204

 Block202:
	cmp eax,0x80004002
	je Block204

 Block203:
	push eax
	call _com_issue_error

 Block204:
	mov ebx,8
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp-0x18C],bx
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x184]
	xor ecx,ecx
	mov word ptr [ebp-0x18C],cx
	cmp eax,edi
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp-0x18C]
	push edx
	call esi

 Block208:
	mov byte ptr [ebp-4],0x43
	cmp word ptr [ebp-0x12C],bx
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [ebp-0x12C],ax
	mov eax,dword ptr [ebp-0x124]
	cmp eax,edi
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[ebp-0x12C]
	push ecx
	call esi

 Block212:
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x3C],bx
	jne Block215

 Block213:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,edi
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea eax,[ebp-0x3C]
	push eax
	call esi

 Block216:
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+4],edi
	lea ecx,[ebp+0x5C]
	push 0xCFE
	push ecx
	mov byte ptr [ebp-4],0x46
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x18]
	push edx
	mov byte ptr [ebp-4],0x47
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x46
	cmp eax,edi
	je Block218

 Block217:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block218:
	lea eax,[ebp+0x5C]
	push 0xCFF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0x48
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x46
	cmp eax,edi
	je Block220

 Block219:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block220:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x6C]
	push edx
	call esi
	lea eax,[ebp-0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block222

 Block221:
	push eax
	call _com_issue_error

 Block222:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x49
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block224

 Block223:
	push eax
	call _com_issue_error

 Block224:
	mov edx,dword ptr [ebp+0x18]
	push edi
	push edi
	lea eax,[ebp-0x6C]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	mov bl,0x4A
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x4B
	cmp dword ptr [_D_G_RM],edi
	jne Block226

 Block225:
	push 0x80004003
	call _com_issue_error

 Block226:
	lea eax,[ebp-0x1AC]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x4C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block229

 Block227:
	cmp eax,0x80004002
	je Block229

 Block228:
	push eax
	call _com_issue_error

 Block229:
	mov ebx,8
	mov byte ptr [ebp-4],0x4E
	cmp word ptr [ebp-0x1AC],bx
	jne Block236

 Block230:
	mov eax,dword ptr [ebp-0x1A4]
	xor ecx,ecx
	mov word ptr [ebp-0x1AC],cx
	cmp eax,edi
	je Block232

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block232:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block233:
	mov byte ptr [ebp-4],0x4F
	cmp word ptr [ebp-0x4C],bx
	jne Block237

 Block234:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block238

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block236:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x1AC]
	push edx
	call esi
	jmp Block233

 Block237:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block238:
	mov byte ptr [ebp-4],0x50
	cmp word ptr [ebp-0x6C],bx
	jne Block241

 Block239:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	cmp eax,edi
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea eax,[ebp-0x6C]
	push eax
	call esi

 Block242:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xAC]
	push ecx
	call ebx
	lea edx,[ebp-0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block244

 Block243:
	push eax
	call _com_issue_error

 Block244:
	lea eax,[ebp-0x8C]
	push eax
	mov byte ptr [ebp-4],0x51
	call ebx
	lea ecx,[ebp-0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block246

 Block245:
	push eax
	call _com_issue_error

 Block246:
	push edi
	push edi
	lea edx,[ebp-0xAC]
	push edx
	mov edx,dword ptr [ebp+4]
	lea eax,[ebp-0x8C]
	push eax
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	mov bl,0x52
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x53
	cmp dword ptr [_D_G_RM],edi
	jne Block248

 Block247:
	push 0x80004003
	call _com_issue_error

 Block248:
	lea eax,[ebp-0x1CC]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x54
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block251

 Block249:
	cmp eax,0x80004002
	je Block251

 Block250:
	push eax
	call _com_issue_error

 Block251:
	mov ebx,8
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp-0x1CC],bx
	jne Block254

 Block252:
	mov eax,dword ptr [ebp-0x1C4]
	xor ecx,ecx
	mov word ptr [ebp-0x1CC],cx
	cmp eax,edi
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea edx,[ebp-0x1CC]
	push edx
	call esi

 Block255:
	mov byte ptr [ebp-4],0x57
	cmp word ptr [ebp-0x8C],bx
	jne Block258

 Block256:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	cmp eax,edi
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea ecx,[ebp-0x8C]
	push ecx
	call esi

 Block259:
	mov byte ptr [ebp-4],0x58
	cmp word ptr [ebp-0xAC],bx
	jne Block262

 Block260:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	cmp eax,edi
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea eax,[ebp-0xAC]
	push eax
	call esi

 Block263:
	mov edi,dword ptr [ebp+0x34]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x30]
	push edx
	push edi
	mov dword ptr [ebp+0x30],0
	call eax
	test eax,eax
	jge Block265

 Block264:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block265:
	fild dword ptr [ebp+0x78]
	mov eax,0x319
	sub eax,dword ptr [ebp+0x30]
	fidiv dword ptr [ebp+0x7C]
	sub eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x40],eax
	fimul dword ptr [ebp+0x40]
	call __ftol2_sse
	mov ecx,3
	mov dword ptr [ebp+0x30],eax
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],0xFF
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x59
	test esi,esi
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	lea edx,[ebp+0x4C]
	push edx
	push edi
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	mov ebx,8
	mov byte ptr [ebp-4],0x58
	cmp word ptr [ebp+0x4C],bx
	jne Block270

 Block268:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block271

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block271

 Block270:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block271:
	mov edx,3
	mov word ptr [ebp+0x4C],dx
	mov dword ptr [ebp+0x54],0xFF
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x4C]
	push eax
	push ecx
	push 6
	push 5
	mov ecx,esi
	mov byte ptr [ebp-4],0x5A
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x58
	cmp word ptr [ebp+0x4C],bx
	jne Block274

 Block272:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block275

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block275

 Block274:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block275:
	mov ecx,3
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],0xFF
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x48]
	push eax
	push edi
	mov byte ptr [ebp-4],0x5B
	mov dword ptr [ebp+0x48],0
	call ecx
	test eax,eax
	jge Block277

 Block276:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block277:
	mov ebx,dword ptr [ebp+0x38]
	mov eax,dword ptr [ebp+0x48]
	lea edx,[ebp+0x4C]
	push edx
	push ebx
	push 0
	push eax
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block280

 Block278:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	cmp dword ptr [ebp+0x40],0
	mov dword ptr [ebp+0x48],0
	jle Block297

 Block282:
	jmp Block284

 Block284:
	mov eax,3
	mov word ptr [ebp+0x4C],ax
	mov dword ptr [ebp+0x54],0xFF
	mov edi,dword ptr [ebp+0x34]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x44]
	push edx
	push edi
	mov byte ptr [ebp-4],0x5C
	mov dword ptr [ebp+0x44],0
	call eax
	test eax,eax
	jge Block286

 Block285:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block286:
	mov edi,dword ptr [ebp+0x44]
	test ebx,ebx
	je Block12

 Block287:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block289

 Block288:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block289:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+8]
	push eax
	mov eax,dword ptr [ecx+0x80]
	add edx,edi
	add edx,dword ptr [ebp+0x48]
	push 0
	push edx
	push esi
	call eax
	test eax,eax
	jge Block291

 Block290:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block291:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block294

 Block292:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block295

 Block293:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block295

 Block294:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block295:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x48],eax
	jl Block284

 Block296:
	mov edi,dword ptr [ebp+0x34]

 Block297:
	mov eax,3
	mov word ptr [ebp+0x4C],ax
	mov dword ptr [ebp+0x54],0xFF
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x5C]
	push edx
	push edi
	mov byte ptr [ebp-4],0x5D
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block299

 Block298:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block299:
	mov edi,dword ptr [ebp+0x5C]
	test ebx,ebx
	jne Block301

 Block300:
	push 0x80004003
	call _com_issue_error

 Block301:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x44]
	push edx
	push ebx
	mov dword ptr [ebp+0x44],0
	call eax
	test eax,eax
	jge Block303

 Block302:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block303:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ebp+0x10]
	push eax
	mov eax,dword ptr [ecx+0x80]
	add edx,edi
	add edx,dword ptr [ebp+0x48]
	push 0
	push edx
	push esi
	call eax
	test eax,eax
	jge Block305

 Block304:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block305:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block308

 Block306:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block309:
	mov eax,3
	mov word ptr [ebp+0x4C],ax
	mov dword ptr [ebp+0x54],0xFF
	mov ebx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x5C]
	push edx
	xor edi,edi
	push ebx
	mov byte ptr [ebp-4],0x5E
	mov dword ptr [ebp+0x5C],edi
	call eax
	cmp eax,edi
	jge Block311

 Block310:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block311:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x5C]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push 4
	add edx,3
	push edx
	push esi
	call eax
	cmp eax,edi
	jge Block313

 Block312:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block313:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block316

 Block314:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block317

 Block315:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block317

 Block316:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block317:
	cmp dword ptr [ebp+0x30],edi
	mov dword ptr [ebp+0x48],edi
	jle Block333

 Block318:
	jmp Block320

 Block320:
	mov eax,3
	mov word ptr [ebp+0x4C],ax
	mov dword ptr [ebp+0x54],0xFF
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov byte ptr [ebp-4],0x5F
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block322

 Block321:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block322:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x44]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x44],0
	call eax
	test eax,eax
	jge Block324

 Block323:
	mov ecx,dword ptr [ebp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block324:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ebp+0x14]
	push eax
	add ecx,edi
	add ecx,dword ptr [ebp+0x48]
	push 4
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block326

 Block325:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block326:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block329

 Block327:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block330:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0x48],eax
	jl Block320

 Block331:
	test eax,eax
	jne Block341

 Block332:
	xor edi,edi

 Block333:
	mov edx,3
	mov word ptr [ebp+0x4C],dx
	mov dword ptr [ebp+0x54],0xFF
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov byte ptr [ebp-4],0x60
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block335

 Block334:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block335:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x20]
	mov edx,dword ptr [ebp+0x5C]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push 4
	add edx,3
	push edx
	push esi
	call eax
	cmp eax,edi
	jge Block337

 Block336:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block337:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block340

 Block338:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov eax,dword ptr [ebp+0x48]
	cmp eax,dword ptr [ebp+0x40]
	jge Block356

 Block342:
	jmp Block345

 Block345:
	mov ecx,3
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],0xFF
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x5C]
	push eax
	push ebx
	mov byte ptr [ebp-4],0x61
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block347

 Block346:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block347:
	mov eax,dword ptr [ebp+0x38]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	mov edi,dword ptr [ebp+0x5C]
	lea ecx,[ebp+0x44]
	push ecx
	push eax
	mov dword ptr [ebp+0x44],0
	call edx
	test eax,eax
	jge Block349

 Block348:
	mov ecx,dword ptr [ebp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block349:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ebp]
	push eax
	add ecx,edi
	add ecx,dword ptr [ebp+0x48]
	push 4
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block351

 Block350:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block351:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block354

 Block352:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block355:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x48],eax
	jl Block345

 Block356:
	mov edx,3
	mov word ptr [ebp+0x4C],dx
	mov dword ptr [ebp+0x54],0xFF
	mov eax,dword ptr [ebp+0x40]
	cmp dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x62
	lea eax,[ebp+0x1C]
	je Block358

 Block357:
	lea eax,[ebp+0x20]

 Block358:
	mov edi,dword ptr [ebp+0x34]
	mov ecx,dword ptr [edi]
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x5C]
	push edx
	push edi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block360

 Block359:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block360:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x44]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x44],0
	call eax
	test eax,eax
	jge Block362

 Block361:
	mov ecx,dword ptr [ebp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block362:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edx+0x80]
	push ebx
	add eax,edi
	add eax,dword ptr [ebp+0x48]
	push 4
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block364

 Block363:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block364:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x58
	jne Block367

 Block365:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block368

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block367:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block368:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x50
	test eax,eax
	je Block370

 Block369:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block370:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x46
	test eax,eax
	je Block372

 Block371:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block372:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block374

 Block373:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block374:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block376

 Block375:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block376:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x3C
	test eax,eax
	je Block378

 Block377:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block378:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x32
	test eax,eax
	je Block380

 Block379:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block380:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block382

 Block381:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block382:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block384

 Block383:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block384:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block386

 Block385:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block386:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block388

 Block387:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block388:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x1F
	call ecx
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block390

 Block389:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block390:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block392

 Block391:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block392:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block393:
	lea esp,[ebp-0x1DC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CField::OnAdminResult
_SUB_EXCEPTION_HANDLER(13BC20)
// 53C66C
static uint8_t _SUB_13BC20_LOOKUP_TABLE_0[69] = {
0, 1, 2, 14, 14, 14, 14, 3, 14, 14, 14, 14, 14, 14, 4, 14, 
14, 5, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
14, 14, 14, 14, 6, 7, 8, 9, 14, 14, 14, 14, 14, 14, 14, 10, 
10, 10, 10, 10, 10, 10, 11, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
14, 14, 14, 12, 13, 
};
__SUB_CLASS_THIS(0013BC20, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13BC20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0xA0]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	add eax,0xFFFFFFFC
	cmp eax,0x44
	ja Block89

 Block1:
	movzx eax,byte ptr [eax+_SUB_13BC20_LOOKUP_TABLE_0]
	xor ebx,ebx
	or ebp,0xFFFFFFFF
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block9
cmp EAX, 2
je Block15
cmp EAX, 3
je Block22
cmp EAX, 4
je Block40
cmp EAX, 5
je Block41
cmp EAX, 6
je Block20
cmp EAX, 7
je Block21
cmp EAX, 8
je Block62
cmp EAX, 9
je Block67
cmp EAX, 10
je Block73
cmp EAX, 11
je Block74
cmp EAX, 12
je Block77
cmp EAX, 13
je Block80
cmp EAX, 14
je Block89


 Block2:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,esi
	mov dword ptr [esp+0x98],ebx
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	jl Block4

 Block3:
	lea ecx,[esp+0x28]
	push 0xA4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA0],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	jmp Block5

 Block4:
	lea eax,[esp+0x2C]
	push 0xA5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA0],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]

 Block5:
	mov byte ptr [esp+0xA0],bl

 Block6:
	add esp,8
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x14]
	push 9
	push edx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	jmp Block85

 Block9:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,esi
	mov dword ptr [esp+0x98],3
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	jl Block11

 Block10:
	lea eax,[esp+0x30]
	push 0xA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA0],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	jmp Block12

 Block11:
	lea edx,[esp+0x34]
	push 0xA8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xA0],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]

 Block12:
	add esp,8
	mov byte ptr [esp+0x98],3
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea ecx,[esp+0x14]
	push 9
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	jmp Block85

 Block15:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,esi
	mov dword ptr [esp+0x98],6
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	jle Block17

 Block16:
	lea edx,[esp+0x38]
	push 0xAA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xA0],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],6
	jmp Block6

 Block17:
	jge Block19

 Block18:
	lea ecx,[esp+0x3C]
	push 0xAB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA0],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xA0],6
	jmp Block6

 Block19:
	lea eax,[esp+0x40]
	push 0xA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA0],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xA0],6
	jmp Block6

 Block20:
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	call CUIMiniMap::ReloadMiniMap
	jmp Block89

 Block21:
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	push 0
	call CUIMiniMap::SetShowMiniMap
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	call CUIMiniMap::ToggleMap
	jmp Block89

 Block22:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	push offset _S_
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x9C],0xA
	call ZXString<char>::Compare
	test eax,eax
	jne Block26

 Block23:
	lea ecx,[esp+0x44]
	push 0xAC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0xA0],0xB
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x4C]
	xor ebx,ebx
	add esp,8
	mov byte ptr [esp+0x98],0xA
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x14]
	jmp Block86

 Block26:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x9C],0xC
	call CInPacket::DecodeStr
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x5C]
	push offset _S___34
	push edx
	mov byte ptr [esp+0xA4],0xD
	call __op_add_char_char
	add esp,0xC
	push offset _S___5
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xE
	call ZXString<char>::op_add_0
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xF
	call ZXString<char>::op_add_1
	push offset _S___47
	lea edx,[esp+0x50]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x10
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x4C]
	mov bl,0x11
	push edx
	mov ecx,eax
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::op_add_1
	push 0xC
	push eax
	mov byte ptr [esp+0xA0],0x12
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xA0],bl
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x98],0x10
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x98],0xF
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x98],0xE
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x98],0xD
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],0xC
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0xA
	cmp eax,ebx
	je Block25

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x18]
	add esp,4
	jmp Block86

 Block40:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [edi+0x3AC4],eax
	jmp Block89

 Block41:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	cmp eax,ebx
	je Block53

 Block42:
	call CInPacket::Decode1
	cmp al,0xFD
	jbe Block44

 Block43:
	lea ecx,[esp+0x5C]
	push 0xB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0xA0],0x13
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x64]
	add esp,8
	jmp Block60

 Block44:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x98],0x14
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx edx,al
	push edx
	mov byte ptr [esp+0x9C],0x16
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	push 1
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x9C],esp
	push edx
	call ZXString<char>::_ctor_copy
	call separate_channelName
	add esp,0x10
	lea eax,[esp+0x60]
	push 0xB0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push 0xC
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xA8],0x18
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov byte ptr [esp+0x98],0x17
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x98],0x16
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0x15
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0x14
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov eax,dword ptr [esp+0x18]
	jmp Block60

 Block53:
	call CInPacket::Decode4
	mov edi,eax
	lea eax,[esp+0x6C]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push edi
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov dword ptr [esp+0xA4],0x19
	call CItemInfo::GetMapString
	mov edi,eax
	lea edx,[esp+0x64]
	push 0xB0
	push edx
	mov byte ptr [esp+0xA0],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push 0xC
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xA8],0x1C
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x2C]
	add esp,8
	mov byte ptr [esp+0x98],0x1B
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x98],0x1A
	cmp eax,ebx
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x98],0x19
	cmp eax,ebx
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,dword ptr [esp+0x6C]

 Block60:
	mov dword ptr [esp+0x98],ebp
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x98],0x1D
	cmp eax,ebx
	jne Block65

 Block63:
	lea eax,[esp+0x70]
	push 0xAD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xA0],0x1E
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x78]
	add esp,8
	mov byte ptr [esp+0x98],0x1D
	cmp eax,ebx
	je Block66

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x98],ebp
	jmp Block87

 Block65:
	lea edx,[esp+0x18]
	push 9
	push edx
	call CHATLOG_ADD
	add esp,8

 Block66:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x98],ebp
	jmp Block87

 Block67:
	mov ecx,esi
	call CInPacket::Decode1
	xor ebx,ebx
	movzx eax,al
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x98],0x1F
	cmp eax,ebx
	jne Block69

 Block68:
	lea eax,[esp+0x74]
	push 0xBDF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA0],0x20
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x7C]
	jmp Block70

 Block69:
	lea edx,[esp+0x78]
	push 0xBE0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xA0],0x21
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x80]

 Block70:
	add esp,8
	mov byte ptr [esp+0x98],0x1F
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	lea ecx,[esp+0x14]
	push 9
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	jmp Block85

 Block73:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea edx,[esp+0x7C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x9C],0x22
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x9C],0x23
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x98],0x22
	jmp Block81

 Block74:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea ecx,[esp+0x80]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x9C],0x24
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x9C],0x25
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x98],0x24
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push 0xC
	lea edx,[esp+0x1C]
	push edx
	jmp Block84

 Block77:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x84]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x9C],0x26
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x9C],0x27
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x98],0x26
	cmp eax,ebx
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	push 0xC
	lea ecx,[esp+0x1C]
	push ecx
	jmp Block84

 Block80:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea edx,[esp+0x88]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x9C],0x28
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x9C],0x29
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x98],0x28

 Block81:
	cmp eax,ebx
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	push 0xB
	lea eax,[esp+0x1C]
	push eax

 Block84:
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]

 Block85:
	add esp,8

 Block86:
	mov dword ptr [esp+0x98],0xFFFFFFFF

 Block87:
	cmp eax,ebx
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4
}
}
// CField::OnQuiz
_SUB_EXCEPTION_HANDLER(137A90)
__SUB_CLASS_THIS(00137A90, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_137A90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ebp+0x70]
	xor edi,edi
	mov ecx,esi
	mov dword ptr [ebp+0x54],edi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [ebp+0x50],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x60],ecx
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [ebp+0x4C],eax
	cmp eax,edi
	je Block50

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push edx
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[ebp+0x10]
	push ecx
	mov dword ptr [ebp-4],edi
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push edi
	push edi
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x737
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x2C],si
	jne Block13

 Block11:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x10],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp],si
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ebx,dword ptr [ebp+0x44]
	cmp ebx,edi
	sete al
	test al,al
	je Block25

 Block23:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ebx,edi
	je Block50

 Block24:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::SetProblem
	jmp Block72

 Block25:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp ebx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x1C],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edi,dword ptr [ebp+0x48]
	test edi,edi
	sete al
	test al,al
	je Block37

 Block35:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block71

 Block36:
	jmp Block70

 Block37:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x4C]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xC
	test edi,edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[ebp+0x34]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x34],si
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov esi,dword ptr [ebp+0x4C]
	test esi,esi
	sete al
	test al,al
	je Block51

 Block47:
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block49

 Block48:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block49:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],7
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	xor edi,edi

 Block50:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::SetProblem
	jmp Block72

 Block51:
	mov dword ptr [ebp+0x5C],0
	cmp dword ptr [ebp+0x50],0
	mov byte ptr [ebp-4],0x10
	je Block55

 Block52:
	push offset _S___3
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x8D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x11
	test esi,esi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_string
	add esp,8
	push eax
	lea ecx,[ebp+0x60]
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x60]
	push edx
	lea ecx,[ebp+0x5C]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x60]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x1E
	call CWvsContext::SetEventTimer
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnEventTimer
	jmp Block67

 Block55:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x617
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	lea ecx,[ebp+0x34]
	mov edi,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	push offset _S___3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x8D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x34]
	mov byte ptr [ebp-4],0x15
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_string
	add esp,8
	push eax
	lea ecx,[ebp+0x60]
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x60]
	push ecx
	lea ecx,[ebp+0x5C]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x60]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x5C]
	call _xbstr_t::length
	test eax,eax
	jbe Block59

 Block58:
	push offset _S___46
	lea edx,[ebp+0x50]
	push edx
	lea ecx,[ebp+0x5C]
	call Ztl_bstr_t::op_add_1
	push eax
	lea ecx,[ebp+0x60]
	call Ztl_bstr_t::_ctor_4
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x60]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x50]
	call _xbstr_t::~_xbstr_t

 Block59:
	push offset _S___29
	lea ecx,[ebp+0x60]
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block61

 Block60:
	lea ecx,[ebp+0x58]
	push 0x8D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	mov byte ptr [ebp-4],0x18
	mov ebx,1
	jmp Block62

 Block61:
	lea edx,[ebp+0x2C]
	push 0x8D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	mov dword ptr [ebp-4],0x19
	mov ebx,2

 Block62:
	lea eax,[ebp+0x20]
	push 0x3A2
	push eax
	mov dword ptr [ebp+0x54],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x1A
	call Ztl_bstr_t::op_add_0
	push edi
	lea edx,[ebp+0x30]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call _xbstr_t::operator+
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call _xbstr_t::operator+
	push eax
	lea ecx,[ebp+0x54]
	call Ztl_bstr_t::_ctor_4
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x5C]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x54]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x28]
	call _xbstr_t::~_xbstr_t
	lea ecx,[ebp+0x30]
	call _xbstr_t::~_xbstr_t
	lea ecx,[ebp+0x24]
	call _xbstr_t::~_xbstr_t
	lea ecx,[ebp+0x20]
	call Ztl_bstr_t::~Ztl_bstr_t
	test bl,2
	je Block64

 Block63:
	lea ecx,[ebp+0x2C]
	and ebx,0xFFFFFFFD
	call Ztl_bstr_t::~Ztl_bstr_t

 Block64:
	mov dword ptr [ebp-4],0x17
	test bl,1
	je Block66

 Block65:
	lea ecx,[ebp+0x58]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block66:
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x10
	call _xbstr_t::~_xbstr_t
	mov edi,dword ptr [ebp+0x48]
	mov ebx,dword ptr [ebp+0x44]

 Block67:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov dword ptr [ebp+0x50],ecx
	lea ecx,[ebp+0x5C]
	call _xbstr_t::op_char_str
	mov ecx,dword ptr [ebp+0x50]
	push eax
	call CUIStatusBar::SetProblem
	mov ecx,dword ptr [ebp+0x5C]
	test ecx,ecx
	je Block69

 Block68:
	call _xbstr_t::Data_t::Release

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xB
	call eax
	mov byte ptr [ebp-4],7

 Block70:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block71:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block72:
	lea esp,[ebp-0x3C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CField::RestoreSeat
_SUB_EXCEPTION_HANDLER(133820)
__SUB_CLASS_THIS0(00133820, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_133820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x6F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x3C]
	or esi,0xFFFFFFFF
	push edx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],edi
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
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebx,dword ptr [ebp-0x28]
	cmp ebx,edi
	sete al
	test al,al
	je Block12

 Block10:
	mov dword ptr [ebp-4],esi
	cmp ebx,edi
	je Block31

 Block11:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block31

 Block12:
	cmp ebx,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x1C]
	push edx
	push ebx
	mov dword ptr [ebp-0x1C],edi
	call eax
	cmp eax,edi
	jge Block16

 Block15:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [ebp-0x18]
	mov esi,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x1D]
	push edx
	add ecx,0x1B0
	push esi
	mov dword ptr [ebp-0x18],ecx
	call ZArray<tagPOINT>::_Alloc
	test esi,esi
	jle Block30

 Block17:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],4
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x24],esi
	test eax,eax
	je Block20

 Block18:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x2C]
	push edx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x2C]
	mov esi,ecx
	mov dword ptr [ebp-0x24],esi
	test eax,eax
	jge Block20

 Block19:
	cmp eax,0x80004002
	jne Block4

 Block20:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],7
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	test esi,esi
	je Block1

 Block25:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [edx+edi*8],eax
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block29

 Block28:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [edx+edi*8+4],eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],3
	call edx
	inc edi
	cmp edi,dword ptr [ebp-0x1C]
	jl Block17

 Block30:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block31:
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CField::SendInviteTradingRoomMsg
_SUB_EXCEPTION_HANDLER(12E9E0)
__SUB_CLASS_THIS(0012E9E0, __thiscall, 24973,  CField, void, const ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12E9E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [esp+0x2C],0
	jne Block13

 Block1:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp dword ptr [eax+0x5D0],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	jne Block12

 Block2:
	cmp dword ptr [eax+0x5E4],0
	jne Block12

 Block3:
	call CWvsContext::CannotUseCommunityFunction
	test eax,eax
	je Block7

 Block4:
	lea eax,[esp+0x2C]
	push 0x96
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],0

 Block5:
	push 0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x34]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block13

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8

 Block7:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block9

 Block8:
	lea ecx,[esp+0x2C]
	push 0x98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],1
	jmp Block5

 Block9:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::FindRemoteUserByName
	mov esi,eax
	test esi,esi
	jne Block11

 Block10:
	lea eax,[esp+0x2C]
	push 0x17B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],2
	jmp Block5

 Block11:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],5
	call COutPacket::Encode1
	push 3
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	push 0
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::Init_1
	push 2
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov esi,dword ptr [esi+0x19E8]
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8

 Block12:
	call CWvsContext::AddChatMorphedMsg

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// CField_Tournament::~CField_Tournament
_SUB_EXCEPTION_HANDLER(13E7A0)
__SUB_CLASS_THIS0(0013E7A0, __thiscall, 53791,  CField_Tournament, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13E7A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_Tournament::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Tournament::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Tournament::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Tournament::`vftable'{for `ZRefCounted'}
	push offset CField_Tournament::AvatarInfo::~AvatarInfo
	push 0x20
	push 0x108
	lea eax,[esi+0xDA4]
	push eax
	mov dword ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
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
// CField::OnPlayJukeBox
_SUB_EXCEPTION_HANDLER(137940)
__SUB_CLASS_THIS(00137940, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_137940
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
	mov edi,ecx
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,ebp
	call CInPacket::Decode4
	mov esi,eax
	push esi
	mov dword ptr [edi+0x18],esi
	call get_consume_cash_item_type
	add esp,4
	cmp eax,0x14
	jne Block11

 Block1:
	test esi,esi
	jl Block10

 Block2:
	lea eax,[esp+0x10]
	push 0x1AC3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x18]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x30],0
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block8

 Block7:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [esp+0x3C]
	push 9
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ChatLogAdd

 Block8:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,edi
	call CMapLoadable::PrepareNextBGM

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 4
}
}
// CField::OnSessionValue
_SUB_EXCEPTION_HANDLER(13CBD0)
__SUB_CLASS_THIS(0013CBD0, __thiscall, 24972,  CField, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13CBD0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CField::SendSetGuildMarkMsg
_SUB_EXCEPTION_HANDLER(12D8C0)
__SUB_CLASS_THIS(0012D8C0, __thiscall, 24984,  CField, void, uint16_t, unsigned char, uint16_t, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x95
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0xF
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode2
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+8]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[esp+8]
	call COutPacket::Encode2
	mov eax,dword ptr [esp+0x30]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode1
	lea ecx,[esp+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 0x10
}
}
// CField::SendChatMsgSlash
_SUB_EXCEPTION_HANDLER(1408E0)
__SUB_CLASS_THIS(001408E0, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1408E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x10],ecx
	xor esi,esi
	mov dword ptr [ebp+0x24],esi
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[edi+0x2038]
	mov dword ptr [ebp+0x14],edi
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block2

 Block1:
	mov eax,dword ptr [edi+0x209C]
	mov dword ptr [ebp+0x1C],esi
	cmp eax,esi
	je Block3

 Block2:
	mov dword ptr [ebp+0x1C],1

 Block3:
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x54],esi
	mov dword ptr [ebp+0x50],esi
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x3C]
	push 0x704
	push ecx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],esi
	mov esi,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x60],esp
	push esi
	mov byte ptr [ebp-4],3
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	test ebx,ebx
	je Block88

 Block6:
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	mov edi,eax
	xor esi,esi
	add esp,4
	mov dword ptr [ebp+0x18],edi
	cmp edi,esi
	jne Block9

 Block7:
	push esi
	push esi
	lea ecx,[ebp+0x5C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push offset _S_0__1
	mov ecx,eax
	call ZXString<char>::Compare
	test eax,eax
	je Block41

 Block8:
	mov dword ptr [ebp+0x18],0x3B9AC9FF
	jmp Block10

 Block9:
	cmp edi,0x3B9AC9FF
	jne Block41

 Block10:
	push ecx
	mov ecx,esp
	lea eax,[ebp+0x5C]
	mov dword ptr [ebp+0x60],esp
	push eax
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::FindMapByName
	mov edi,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],4
	cmp edi,esi
	je Block17

 Block11:
	cmp dword ptr [ebp-0x18],esi
	jne Block13

 Block12:
	lea edx,[ebp+0x3C]
	push 0x11C4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [ebp-4],5
	call CHATLOG_ADD
	add esp,8
	jmp Block15

 Block13:
	lea eax,[ebp+0x3C]
	push 0x11C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp+0x20],esi
	mov ecx,dword ptr [ebp-0x18]
	mov eax,dword ptr [eax]
	push 0xC
	push ecx
	push eax
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],7
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x20]
	add esp,8
	mov byte ptr [ebp-4],6
	cmp eax,esi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],4
	cmp eax,esi
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,1
	mov dword ptr [ebp+0x20],eax
	cmp edi,esi
	je Block19

 Block18:
	mov dword ptr [ebp+0x14],eax
	cmp dword ptr [ebp-0x18],eax
	ja Block20

 Block19:
	mov dword ptr [ebp+0x14],esi

 Block20:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp+0x3C],eax
	cmp eax,esi
	je Block40

 Block21:
	lea eax,[ebp+0x3C]
	push eax
	call ZList<ZPair<unsigned long, ZXString<char>>>::GetNext
	mov ecx,dword ptr [eax]
	add esp,4
	add eax,4
	mov dword ptr [ebp+8],ecx
	push eax
	lea ecx,[ebp+0xC]
	mov dword ptr [ebp+0xC],esi
	call ZXString<char>::op_assign
	mov edi,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],8
	cmp dword ptr [ebp+0x14],esi
	je Block28

 Block22:
	lea edx,[ebp+0x60]
	push 0x11C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp+0x24],esi
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ebp+0x20]
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::Format
	add esp,0x14
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block24

 Block23:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block24:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],9
	cmp eax,esi
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],8
	cmp eax,esi
	je Block33

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block33

 Block28:
	mov esi,dword ptr [ebp+8]
	lea ecx,[ebp+0x48]
	push esi
	push ecx
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [eax+4],0
	mov byte ptr [ebp-4],8
	sete al
	test al,al
	mov eax,dword ptr [ebp+0x4C]
	sete bl
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	test bl,bl
	jne Block37

 Block33:
	xor esi,esi
	mov byte ptr [ebp-4],4
	cmp edi,esi
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block35:
	inc dword ptr [ebp+0x20]
	cmp dword ptr [ebp+0x3C],esi
	jne Block21

 Block36:
	jmp Block40

 Block37:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp+0x18],esi
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	xor esi,esi

 Block40:
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],2
	int 3// TODO: 	mov dword ptr [ebp-0x20],offset ZList<ZPair<unsigned long, ZXString<char>>>::`vftable'
	call ZList<ZPair<unsigned long, ZXString<char>>>::RemoveAll
	mov edi,dword ptr [ebp+0x18]

 Block41:
	lea eax,[ebp+8]
	push edi
	push eax
	call CField::GetFieldProp
	add esp,8
	lea ecx,[ebp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x3D]
	push edx
	add eax,0x39
	mov ebx,1
	push eax
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp+0x24],ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov edi,dword ptr [ebp+8]
	mov eax,0x51EB851F
	add esp,8
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,9
	je Block46

 Block42:
	cmp edi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block46

 Block43:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1407
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp-4],0xE
	cmp edi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea edx,[ebp+0x2C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ebx,3
	push eax
	mov dword ptr [ebp-4],0xF
	mov dword ptr [ebp+0x24],ebx
	call get_int32
	add esp,8
	mov byte ptr [ebp+0x2B],1
	test eax,eax
	jne Block47

 Block46:
	mov byte ptr [ebp+0x2B],0

 Block47:
	mov dword ptr [ebp-4],0xD
	test bl,2
	je Block52

 Block48:
	and ebx,0xFFFFFFFD
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [ebp+0x24],ebx
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	cmp eax,esi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [ebp-4],0xC
	test bl,1
	je Block57

 Block53:
	mov esi,dword ptr [ebp+0x4C]
	test esi,esi
	je Block57

 Block54:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block55:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block57

 Block56:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block57:
	cmp byte ptr [ebp+0x2B],0
	je Block68

 Block58:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	test edi,edi
	je Block62

 Block61:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block62:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block579

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block579

 Block68:
	mov ecx,dword ptr [ebp+0xC]
	test ecx,ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block84

 Block69:
	cmp dword ptr [ebp+0x1C],0
	je Block82

 Block70:
	mov dword ptr [ebp+0x3C],0
	lea edx,[ebp+0x1C]
	push 0x6EC
	push edx
	mov byte ptr [ebp-4],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+0x18]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea eax,[ebp+0x60]
	mov bl,0x11
	push eax
	mov byte ptr [ebp-4],bl
	call CItemInfo::GetMapString
	push eax
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	lea ecx,[ebp+0x60]
	push 0x11C5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	xor ebx,ebx
	mov dword ptr [ebp+0x1C],ebx
	mov esi,dword ptr [ebp+0x3C]
	mov eax,dword ptr [eax]
	push esi
	push edi
	push eax
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],0x14
	call ZXString<char>::Format
	add esp,0x10
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block76

 Block75:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block76:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x13
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x10
	cmp eax,ebx
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	mov byte ptr [ebp-4],0xC
	cmp esi,ebx
	je Block83

 Block81:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block83

 Block82:
	mov edi,dword ptr [ebp+0x18]

 Block83:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	push 0
	push 0
	push 0
	push edi
	call CField::SendTransferFieldRequest
	mov ecx,dword ptr [ebp+0xC]
	mov edi,dword ptr [ebp+8]

 Block84:
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block86

 Block85:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block86:
	test edi,edi
	je Block62

 Block87:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block62

 Block88:
	lea ecx,[ebp+0x60]
	push 0x147F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	test ebx,ebx
	je Block93

 Block91:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x31
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x16
	call COutPacket::Encode1
	lea edx,[ebp+0x2C]
	push edx

 Block92:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block62

 Block93:
	lea eax,[ebp+0x60]
	push 0xF9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	test ebx,ebx
	je Block97

 Block96:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x3A
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x18
	call COutPacket::Encode1
	lea ecx,[ebp+0x2C]
	push ecx
	jmp Block92

 Block97:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x725
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x19
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	test ebx,ebx
	je Block102

 Block100:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	mov bl,al
	call _atoi
	movzx edx,bl
	add esp,4
	cmp edx,eax
	jle Block62

 Block101:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x1E
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1A
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea ecx,[ebp+0x2C]
	push ecx
	jmp Block92

 Block102:
	mov ecx,edi
	call CWvsContext::IsAdminAccount
	test eax,eax
	jne Block106

 Block103:
	mov ecx,edi
	call CWvsContext::IsSubGMAccount
	test eax,eax
	jne Block106

 Block104:
	mov ecx,edi
	call CWvsContext::IsTesterAccount
	test eax,eax
	je Block288

 Block105:
	mov edi,dword ptr [ebp+0x14]

 Block106:
	mov ecx,edi
	call CWvsContext::GetAdminLevel
	cmp eax,4
	jg Block142

 Block107:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x70F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x1B
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	test edi,edi
	je Block113

 Block110:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x12
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1C
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	test eax,eax
	setne dl
	movzx eax,dl
	push eax

 Block111:
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea ecx,[ebp+0x2C]
	push ecx

 Block112:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block113:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x7D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x1D
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	test edi,edi
	je Block117

 Block116:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x47
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1E
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x58],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x2C]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x2C]
	push eax
	jmp Block112

 Block117:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::GetAdminLevel
	cmp eax,4
	jne Block142

 Block118:
	lea ecx,[ebp+0x54]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x72C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x1F
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block120:
	test edi,edi
	je Block142

 Block121:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[ebp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov byte ptr [ebp-4],0x20
	call CUIStatusBar::GetChatLog
	mov edi,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x21
	test edi,edi
	jne Block123

 Block122:
	xor eax,eax
	jmp Block124

 Block123:
	mov eax,dword ptr [edi-4]

 Block124:
	lea ecx,[ebp+0x18]
	lea ebx,[eax-3]
	call ZArray<ZXString<char>>::GetCount
	cmp ebx,eax
	jae Block134

 Block125:
	jmp Block128

 Block127:
	mov edi,dword ptr [ebp+0x18]

 Block128:
	push offset _S___4
	lea edx,[ebp+0x60]
	lea ecx,[edi+ebx*4]
	push edx
	call ZXString<char>::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax-4]
	jmp Block131

 Block130:
	xor ecx,ecx

 Block131:
	push ecx
	push eax
	lea ecx,[ebp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block133:
	lea ecx,[ebp+0x18]
	inc ebx
	call ZArray<ZXString<char>>::GetCount
	cmp ebx,eax
	jb Block127

 Block134:
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block147

 Block135:
	cmp byte ptr [eax],0
	je Block147

 Block136:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block147

 Block137:
	cmp eax,0xC
	jg Block147

 Block138:
	mov eax,dword ptr [ebp+0x54]
	push eax
	call _atoi
	mov edi,eax
	dec edi
	add esp,4
	cmp edi,5
	ja Block140

 Block139:
	push 0x7E
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	mov byte ptr [ebp-4],0x23
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	push edi
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	lea eax,[ebp+0x20]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x21
	call ZArray<unsigned char>::RemoveAll

 Block140:
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],0x20
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block142

 Block141:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block142:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::GetAdminLevel
	cmp eax,3
	jg Block219

 Block143:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x70D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	xor ebx,ebx
	push esi
	mov byte ptr [ebp-4],0x24
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	cmp edi,ebx
	je Block151

 Block146:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	mov ecx,dword ptr [ebp+0x10]
	add esp,4
	dec eax
	push eax
	call CField::SendTransferChannelRequest
	jmp Block322

 Block147:
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],0x20
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x20]

 Block148:
	test eax,eax

 Block149:
	mov byte ptr [ebp-4],2
	je Block322

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block322

 Block151:
	lea edx,[ebp+0x60]
	push 0xC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x25
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block153

 Block152:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block153:
	cmp edi,ebx
	je Block155

 Block154:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x13
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x26
	call COutPacket::Encode1
	push ebx
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea eax,[ebp+0x2C]
	push eax
	jmp Block112

 Block155:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0xC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block157:
	cmp edi,ebx
	je Block162

 Block158:
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	neg eax
	sbb eax,eax
	neg eax
	cmp eax,1
	jne Block160

 Block159:
	mov dword ptr [_D_S_BAUTOULIST],eax
	jmp Block162

 Block160:
	cmp eax,ebx
	jne Block162

 Block161:
	mov dword ptr [_D_S_BAUTOULIST],ebx

 Block162:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x709
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x28
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block164:
	cmp edi,ebx
	je Block166

 Block165:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp+0x3C]
	mov dword ptr [_D_S_BCHASE],1
	call ZXString<char>::CreateFromCharStr
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x29
	call CField::SendChatMsgWhisper
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,ebx
	jmp Block149

 Block166:
	lea edx,[ebp+0x54]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x729
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x2A
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block168

 Block167:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block168:
	cmp edi,ebx
	je Block172

 Block169:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x2B
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x2B
	call COutPacket::Encode1
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x54]

 Block170:
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea ecx,[ebp+0x40]
	push ecx

 Block171:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block172:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x70E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x2C
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block174

 Block173:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block174:
	cmp edi,ebx
	je Block176

 Block175:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x2D
	call COutPacket::Encode1
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x2C]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x2C]
	push eax
	jmp Block112

 Block176:
	lea ecx,[ebp+0x50]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x70A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x2E
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd3
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x14
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block178

 Block177:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block178:
	cmp edi,ebx
	je Block206

 Block179:
	mov edx,dword ptr [ebp+0x54]
	push edx
	call _atoi
	add esp,4
	push offset _D_VTMISSING
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp+0x14],eax
	mov dword ptr [ebp+0x18],ebx
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xB42
	mov bl,0x30
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x31
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x32
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x36
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x20]
	test edi,edi
	je Block190

 Block182:
	mov ebx,1

 Block183:
	mov ecx,edi
	call IWzProperty::Getcount
	cmp ebx,eax
	ja Block190

 Block184:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push eax
	push ebx
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x37
	mov byte ptr [ebp-4],0x36
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x38
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x3A
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x50]
	call ZXString<char>::MakeUpper
	push 0xFFFFFFFF
	push offset _S___3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x618
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x3B
	test edi,edi
	je Block44

 Block185:
	lea eax,[ebp]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3C
	call get_string
	add esp,8
	push eax
	lea ecx,[ebp+0x3C]
	call ZXString<char>::CreateFromCStr
	lea ecx,[ebp+0x3C]
	push ecx
	lea ecx,[ebp+0x50]
	call ZXString<char>::op_eq_0
	mov dword ptr [ebp+0x1C],eax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block187

 Block186:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block187:
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x1C],0
	mov byte ptr [ebp-4],0x36
	push edi
	jne Block189

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	call eax
	mov edi,dword ptr [ebp+0x20]
	inc ebx
	jmp Block183

 Block189:
	mov dword ptr [ebp+0x18],ebx
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	call edx
	mov edi,dword ptr [ebp+0x20]

 Block190:
	cmp dword ptr [ebp+0x14],0
	je Block204

 Block191:
	cmp dword ptr [ebp+0x18],0
	je Block204

 Block192:
	push 0xD4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [ebp+0x58],ebx
	mov byte ptr [ebp-4],0x3D
	test ebx,ebx
	je Block200

 Block193:
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp+0x14]
	dec eax
	push eax
	push ecx
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,ebx
	call CUIBlockUser::_ctor_0
	test eax,eax
	je Block200

 Block194:
	add eax,8
	je Block200

 Block195:
	lea ebx,[eax-8]
	mov dword ptr [ebp+0xC],ebx
	test ebx,ebx
	je Block197

 Block196:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block197:
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3E
	call CDialog::DoModal
	cmp eax,1
	je Block201

 Block198:
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0x36
	call ZRef<CUIBlockUser>::~ZRef<CUIBlockUser>
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block322

 Block199:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block322

 Block200:
	xor ebx,ebx
	mov dword ptr [ebp+0xC],ebx
	jmp Block197

 Block201:
	mov dword ptr [ebp+0x1C],0
	lea eax,[ebp+0x1C]
	push eax
	lea ecx,[ebp+0x18]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3F
	call CUIBlockUser::GetResult
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x40
	call COutPacket::Encode1
	push ecx
	lea eax,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [ebp+0x18]
	push ecx
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x14]
	push edx
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	push ecx
	lea eax,[ebp+0x1C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x3F
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x3E
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0x36
	call ZRef<CUIBlockUser>::~ZRef<CUIBlockUser>

 Block204:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block322

 Block205:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block322

 Block206:
	lea ecx,[ebp+0x60]
	push 0x708
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x41
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block208

 Block207:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block208:
	cmp edi,ebx
	je Block210

 Block209:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x13
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x42
	call COutPacket::Encode1
	push 0xF
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea edx,[ebp+0x2C]
	push edx
	jmp Block112

 Block210:
	lea eax,[ebp+0x60]
	push 0x707
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x43
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block212

 Block211:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block212:
	cmp edi,ebx
	je Block219

 Block213:
	xor edi,edi
	mov dword ptr [ebp+0x1C],edi
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov byte ptr [ebp-4],0x44
	call CUIStatusBar::GetChatLog
	mov bl,0x45
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],bl
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block218

 Block214:
	mov edi,edi

 Block215:
	mov edx,dword ptr [ebp+0x20]
	push offset _S___4
	lea eax,[ebp+0x60]
	lea ecx,[edx+edi*4]
	push eax
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x46
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block217:
	lea ecx,[ebp+0x20]
	inc edi
	call ZArray<ZXString<char>>::GetCount
	cmp edi,eax
	jb Block215

 Block218:
	mov ecx,dword ptr [ebp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	call CWvsApp::SetClipboardText
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x44
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x1C]
	jmp Block148

 Block219:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::GetAdminLevel
	cmp eax,2
	jg Block288

 Block220:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x712
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x47
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block222

 Block221:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block222:
	test ebx,ebx
	je Block224

 Block223:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x48
	call COutPacket::Encode1
	push 1
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x58],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x40]
	push eax
	jmp Block171

 Block224:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x3C]
	push 0x714
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	mov ebx,4
	push esi
	mov byte ptr [ebp-4],0x49
	mov dword ptr [ebp+0x24],ebx
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	test eax,eax
	jne Block226

 Block225:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0xFD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov dword ptr [ebp-4],0x4A
	mov dword ptr [ebp+0x24],0xC
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov ebx,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp+0x2B],0
	test eax,eax
	je Block227

 Block226:
	mov byte ptr [ebp+0x2B],1

 Block227:
	mov dword ptr [ebp-4],0x49
	test bl,8
	je Block230

 Block228:
	mov eax,dword ptr [ebp+0x60]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x24],ebx
	test eax,eax
	je Block230

 Block229:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block230:
	mov dword ptr [ebp-4],2
	test bl,4
	je Block233

 Block231:
	mov eax,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFFB
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	cmp byte ptr [ebp+0x2B],0
	je Block236

 Block234:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x4B
	call COutPacket::Encode1
	push 1

 Block235:
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x40]
	push eax
	jmp Block171

 Block236:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x710
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x4C
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block238

 Block237:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block238:
	test edi,edi
	je Block240

 Block239:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x4D
	call COutPacket::Encode1
	push 1
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	lea eax,[ebp+0x5C]
	jmp Block170

 Block240:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x711
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x4E
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block242

 Block241:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block242:
	test edi,edi
	je Block244

 Block243:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x4F
	call COutPacket::Encode1
	push 0
	jmp Block235

 Block244:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x713
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x50
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block246

 Block245:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block246:
	test edi,edi
	je Block248

 Block247:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x51
	call COutPacket::Encode1
	push 0
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	lea eax,[ebp+0x5C]
	jmp Block170

 Block248:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x3C]
	push 0x715
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	or ebx,0x10
	push esi
	mov byte ptr [ebp-4],0x52
	mov dword ptr [ebp+0x24],ebx
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	test eax,eax
	jne Block250

 Block249:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0xFE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	or ebx,0x20
	push esi
	mov dword ptr [ebp-4],0x53
	mov dword ptr [ebp+0x24],ebx
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	mov byte ptr [ebp+0x2B],0
	test eax,eax
	je Block251

 Block250:
	mov byte ptr [ebp+0x2B],1

 Block251:
	mov dword ptr [ebp-4],0x52
	test bl,0x20
	je Block254

 Block252:
	mov eax,dword ptr [ebp+0x60]
	and ebx,0xFFFFFFDF
	mov dword ptr [ebp+0x24],ebx
	test eax,eax
	je Block254

 Block253:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block254:
	mov dword ptr [ebp-4],2
	test bl,0x10
	je Block257

 Block255:
	mov eax,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFEF
	mov dword ptr [ebp+0x24],ebx
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block257:
	cmp byte ptr [ebp+0x2B],0
	je Block259

 Block258:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x54
	call COutPacket::Encode1
	push 0
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	lea eax,[ebp+0x5C]
	jmp Block170

 Block259:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0xB2D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x55
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block261

 Block260:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block261:
	test ebx,ebx
	je Block263

 Block262:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x56
	call COutPacket::Encode1
	push 4
	jmp Block235

 Block263:
	lea ecx,[ebp+0x60]
	push 0xB34
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x57
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block265

 Block264:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block265:
	test ebx,ebx
	je Block268

 Block266:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],0x58
	push 0

 Block267:
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push 4
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xFFFFFFFF
	push offset _S___3
	call ZXString<char>::CreateFromCStr
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea edx,[ebp+0x40]
	push edx
	jmp Block171

 Block268:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0xB2E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x59
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block270

 Block269:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block270:
	test ebx,ebx
	je Block272

 Block271:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x5A
	call COutPacket::Encode1
	push 4
	jmp Block235

 Block272:
	lea ecx,[ebp+0x60]
	push 0xB35
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x5B
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block274

 Block273:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block274:
	test ebx,ebx
	je Block276

 Block275:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],0x5C
	push 1
	jmp Block267

 Block276:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0xB2F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x5D
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block278

 Block277:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block278:
	test ebx,ebx
	je Block280

 Block279:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x5E
	call COutPacket::Encode1
	push 4
	jmp Block235

 Block280:
	lea ecx,[ebp+0x60]
	push 0xB36
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x5F
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block282:
	test ebx,ebx
	je Block284

 Block283:
	push 0x8B
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],0x60
	push 2
	jmp Block267

 Block284:
	lea eax,[ebp+0x60]
	push 0xB37
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block286

 Block285:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block286:
	test edi,edi
	je Block288

 Block287:
	push 0x9E
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],0x62
	push 0
	jmp Block111

 Block288:
	mov ebx,dword ptr [ebp+0x14]
	mov ecx,ebx
	call CWvsContext::CanUseCommonCommand
	test eax,eax
	je Block323

 Block289:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x716
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x63
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block291

 Block290:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block291:
	test edi,edi
	je Block293

 Block292:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x64
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea edx,[ebp+0x2C]
	push edx
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block293:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x717
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x65
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block295

 Block294:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block295:
	test edi,edi
	je Block297

 Block296:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x66
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea eax,[ebp+0x2C]
	push eax
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block297:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x718
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x67
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block299

 Block298:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block299:
	test edi,edi
	je Block301

 Block300:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x68
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea ecx,[ebp+0x2C]
	push ecx
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block301:
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x71C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x69
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd3
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x14
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block303

 Block302:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block303:
	test edi,edi
	je Block306

 Block304:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x6A
	call COutPacket::Encode1
	push 0xC
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	lea eax,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	push ecx
	lea edx,[ebp+0x54]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x50]

 Block305:
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea ecx,[ebp+0x40]
	push ecx
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block306:
	lea edx,[ebp+0x54]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x71D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x6B
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block308

 Block307:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block308:
	test edi,edi
	je Block310

 Block309:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x6C
	call COutPacket::Encode1
	push 0xD
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x54]
	jmp Block305

 Block310:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x70F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x6D
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block312

 Block311:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block312:
	test edi,edi
	je Block314

 Block313:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x12
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x6E
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	test eax,eax
	setne dl
	movzx eax,dl
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea ecx,[ebp+0x2C]
	push ecx
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block314:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x725
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x6F
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block316

 Block315:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block316:
	test edi,edi
	je Block318

 Block317:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x1E
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x70
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea edx,[ebp+0x2C]
	push edx
	call SendPacket
	add esp,4
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block322

 Block318:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x71B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x71
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block320

 Block319:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block320:
	test edi,edi
	je Block323

 Block321:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edx
	call CUserLocal::MoveToPortal

 Block322:
	push 0x98
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x72
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x2C]
	call COutPacket::EncodeStr
	lea eax,[ebp+0x2C]
	push eax
	jmp Block92

 Block323:
	cmp dword ptr [ebx+0x20B0],0
	jne Block325

 Block324:
	mov eax,dword ptr [ebx+0x209C]
	test eax,eax
	je Block405

 Block325:
	lea ecx,[ebp+0x54]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x720
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x73
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block327

 Block326:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block327:
	test edi,edi
	je Block329

 Block328:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x17
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x74
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp+0x54]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	lea eax,[ebp+0x40]
	push eax
	call SendPacket
	lea ecx,[ebp+0x44]
	jmp Block404

 Block329:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x722
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x75
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block331

 Block330:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block331:
	test edi,edi
	je Block333

 Block332:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x19
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x76
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode2
	jmp Block402

 Block333:
	lea edx,[ebp+0x54]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x723
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x77
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block335

 Block334:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block335:
	test edi,edi
	je Block337

 Block336:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x1C
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x78
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp+0x54]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	lea ecx,[ebp+0x40]
	push ecx
	call SendPacket
	lea ecx,[ebp+0x44]
	jmp Block404

 Block337:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x724
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x79
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block339

 Block338:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block339:
	test edi,edi
	je Block341

 Block340:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x1D
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x7A
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea edx,[ebp+0x2C]
	push edx
	jmp Block403

 Block341:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x167F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x7B
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block343

 Block342:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block343:
	test edi,edi
	je Block345

 Block344:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x1F
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x7C
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea eax,[ebp+0x2C]
	push eax
	jmp Block403

 Block345:
	lea ecx,[ebp+0x60]
	push 0x1677
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x7D
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block347

 Block346:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block347:
	test edi,edi
	je Block349

 Block348:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x20
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x7E
	call COutPacket::Encode1
	lea edx,[ebp+0x2C]
	push edx
	jmp Block403

 Block349:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x1678
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x7F
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block351

 Block350:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block351:
	test edi,edi
	je Block353

 Block352:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x21
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x80
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea eax,[ebp+0x2C]
	push eax
	jmp Block403

 Block353:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x1679
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x81
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block355

 Block354:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block355:
	test edi,edi
	je Block357

 Block356:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x22
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x82
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	jmp Block401

 Block357:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x167A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x83
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block359

 Block358:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block359:
	test edi,edi
	je Block361

 Block360:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x23
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x84
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea edx,[ebp+0x2C]
	push edx
	jmp Block403

 Block361:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x167B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x85
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block363

 Block362:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block363:
	test edi,edi
	je Block365

 Block364:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x24
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x86
	call COutPacket::Encode1
	mov edx,dword ptr [ebp+0x5C]
	push edx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea eax,[ebp+0x2C]
	push eax
	jmp Block403

 Block365:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x167C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x87
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block367

 Block366:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block367:
	test edi,edi
	je Block369

 Block368:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x25
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x88
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	jmp Block401

 Block369:
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x60]
	push 0x167D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x89
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block371

 Block370:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block371:
	test edi,edi
	je Block373

 Block372:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x26
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x8A
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4
	lea edx,[ebp+0x2C]
	push edx
	jmp Block403

 Block373:
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x167E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x8B
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block375

 Block374:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block375:
	test edi,edi
	je Block377

 Block376:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x27
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x8C
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp+0x54]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	lea edx,[ebp+0x40]
	push edx
	call SendPacket
	lea ecx,[ebp+0x44]
	jmp Block404

 Block377:
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x1676
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x8D
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block379

 Block378:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block379:
	test edi,edi
	je Block381

 Block380:
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x1B
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x8E
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp+0x54]
	push ecx
	call _atoi
	add esp,4
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	lea edx,[ebp+0x40]
	push edx
	call SendPacket
	lea ecx,[ebp+0x44]
	jmp Block404

 Block381:
	lea eax,[ebp+0x60]
	push 0x187F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x8F
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block383

 Block382:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block383:
	test edi,edi
	je Block387

 Block384:
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x3C
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x90
	call COutPacket::Encode1
	xor ecx,ecx
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],ecx
	setne cl
	mov edi,ecx
	push edi
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	test edi,edi
	je Block386

 Block385:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::SetChatPassiveSkillDataInfo

 Block386:
	lea edx,[ebp+0x2C]
	push edx
	jmp Block403

 Block387:
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x187D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x91
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd2
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block389

 Block388:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block389:
	test edi,edi
	je Block392

 Block390:
	mov eax,dword ptr [ebp+0x54]
	push eax
	call _atoi
	add esp,4
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	mov edi,eax
	je Block405

 Block391:
	push edi
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::SetPassiveSkillDataForced
	push 0x97
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	push 0x3D
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x92
	call COutPacket::Encode1
	push ecx
	lea eax,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	push edi
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	lea ecx,[ebp+0x40]
	push ecx
	call SendPacket
	lea ecx,[ebp+0x44]
	jmp Block404

 Block392:
	lea edx,[ebp+0x60]
	push 0x187E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x93
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block394

 Block393:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block394:
	test edi,edi
	je Block397

 Block395:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block405

 Block396:
	push 1
	call CUserLocal::UpdatePassiveSkillData
	push 0x97
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	push 0x3E
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x94
	call COutPacket::Encode1
	lea eax,[ebp+0x2C]
	push eax
	jmp Block403

 Block397:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x187C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x95
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block399

 Block398:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block399:
	test edi,edi
	je Block405

 Block400:
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call _atoi
	add esp,4
	push 0x97
	lea ecx,[ebp+0x2C]
	mov edi,eax
	call COutPacket::_ctor_1
	push 0x3F
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x96
	call COutPacket::Encode1
	push edi

 Block401:
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode4

 Block402:
	lea ecx,[ebp+0x2C]
	push ecx

 Block403:
	call SendPacket
	lea ecx,[ebp+0x30]

 Block404:
	add esp,4
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll

 Block405:
	lea edx,[ebp+0x3C]
	push 0x93D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x24],0x40
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0x97
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	add esp,8
	test eax,eax
	jne Block408

 Block406:
	lea eax,[ebp+0x60]
	push 0x14CE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x24],0x80
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov dword ptr [ebp-4],0x98
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	add esp,8
	test eax,eax
	jne Block408

 Block407:
	xor bl,bl
	jmp Block409

 Block408:
	mov bl,1

 Block409:
	test byte ptr [ebp+0x24],0x80
	mov dword ptr [ebp-4],0x97
	je Block412

 Block410:
	mov eax,dword ptr [ebp+0x60]
	and dword ptr [ebp+0x24],0xFFFFFF7F
	test eax,eax
	je Block412

 Block411:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block412:
	test byte ptr [ebp+0x24],0x40
	mov dword ptr [ebp-4],2
	je Block415

 Block413:
	mov eax,dword ptr [ebp+0x3C]
	and dword ptr [ebp+0x24],0xFFFFFFBF
	test eax,eax
	je Block415

 Block414:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block415:
	test bl,bl
	je Block455

 Block416:
	lea ecx,[ebp+0x60]
	push 0x3AE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x99
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block418

 Block417:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block418:
	lea edx,[ebp+0x60]
	push 0x3AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9A
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block420

 Block419:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block420:
	lea eax,[ebp+0x60]
	push 0x3B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9B
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block422

 Block421:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block422:
	lea ecx,[ebp+0x60]
	push 0x3B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9C
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block424

 Block423:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block424:
	lea edx,[ebp+0x60]
	push 0x3B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9D
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block426

 Block425:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block426:
	lea eax,[ebp+0x60]
	push 0x3B3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9E
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block428

 Block427:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block428:
	lea ecx,[ebp+0x60]
	push 0x3B4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0x9F
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block430

 Block429:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block430:
	lea edx,[ebp+0x60]
	push 0x3B5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA0
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block432

 Block431:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block432:
	lea eax,[ebp+0x60]
	push 0x3B6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA1
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block434

 Block433:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block434:
	lea ecx,[ebp+0x60]
	push 0x3B7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA2
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block436

 Block435:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block436:
	lea edx,[ebp+0x60]
	push 0x3B8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA3
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block438

 Block437:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block438:
	lea eax,[ebp+0x60]
	push 0x3B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA4
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block440

 Block439:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block440:
	lea ecx,[ebp+0x60]
	push 0x3BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA5
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block442

 Block441:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block442:
	lea edx,[ebp+0x60]
	push 0x3BC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA6
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block444

 Block443:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block444:
	lea eax,[ebp+0x60]
	push 0x3BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA7
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block446

 Block445:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block446:
	lea ecx,[ebp+0x60]
	push 0x3BE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA8
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block448

 Block447:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block448:
	lea edx,[ebp+0x60]
	push 0x3BF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xA9
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block450

 Block449:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block450:
	lea eax,[ebp+0x60]
	push 0x3C0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 8
	push eax
	mov byte ptr [ebp-4],0xAA
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block452

 Block451:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block452:
	lea ecx,[ebp+0x60]
	push 0x14D8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],0xAB
	push 8

 Block453:
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block62

 Block454:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block62

 Block455:
	lea edx,[ebp+0x60]
	push 0x1302
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xAC
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block457

 Block456:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block457:
	test edi,edi
	je Block469

 Block458:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [ebp+0x3C],eax
	test eax,eax
	je Block469

 Block459:
	mov dword ptr [ebp+0x1C],0
	mov edi,dword ptr [ebp+0x1C]
	lea ecx,[ecx]

 Block460:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax+0x2E44]
	mov ebx,dword ptr [edi+ecx+4]
	test ebx,ebx
	je Block469

 Block461:
	mov ecx,ebx
	call CPet::GetUpgradePetSkill
	test al,al
	jns Block468

 Block462:
	lea edx,[ebp+0x60]
	push edx
	mov ecx,ebx
	call CPet::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block464

 Block463:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp+0x20],eax
	jmp Block465

 Block464:
	mov dword ptr [ebp+0x20],0

 Block465:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block467

 Block466:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block467:
	mov edi,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x10]
	add edi,4
	lea ecx,[ebp+0x48]
	push ecx
	mov ecx,edi
	call edx
	mov dword ptr [ebp+0x18],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp+8]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ecx]
	mov edi,dword ptr [ebp+0x20]
	push eax
	push edx
	lea ecx,[edi+0xC]
	call IWzShape2D::Move
	push 4
	mov ecx,edi
	call CVecCtrl::SetMovePathAttribute
	push 1
	mov ecx,ebx
	call CPet::ShowEffect_0
	mov edi,dword ptr [ebp+0x1C]

 Block468:
	add edi,8
	cmp edi,0x18
	mov dword ptr [ebp+0x1C],edi
	jl Block460

 Block469:
	lea eax,[ebp+0x60]
	push 0x7B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xAD
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block471

 Block470:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block471:
	test edi,edi
	je Block473

 Block472:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTargetFromCandidate
	jmp Block62

 Block473:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x7B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xAE
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block475

 Block474:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block475:
	test edi,edi
	je Block486

 Block476:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	test eax,eax
	je Block478

 Block477:
	add eax,4
	jmp Block479

 Block478:
	xor eax,eax

 Block479:
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block481

 Block480:
	lea eax,[ebp+0x60]
	push 0x320
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],0xAF
	push 0xC
	jmp Block453

 Block481:
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block62

 Block482:
	cmp byte ptr [eax],0
	je Block62

 Block483:
	lea ecx,[ebp+0x5C]
	push 0
	push ecx
	call is_valid_character_name
	add esp,8
	test eax,eax
	je Block485

 Block484:
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::AddWhisperCandidate
	push 0
	push ecx
	lea eax,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	jmp Block62

 Block485:
	lea ecx,[ebp+0x60]
	push 0x31F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],0xB0
	push 0xC
	jmp Block453

 Block486:
	lea edx,[ebp+0x60]
	push 0x7C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block488

 Block487:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block488:
	test edi,edi
	je Block490

 Block489:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 2
	call CUIStatusBar::SetChatTarget
	jmp Block62

 Block490:
	lea eax,[ebp+0x60]
	push 0x1638
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block492

 Block491:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block492:
	test edi,edi
	je Block494

 Block493:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 3
	call CUIStatusBar::SetChatTarget
	jmp Block62

 Block494:
	lea ecx,[ebp+0x60]
	push 0x7F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block496

 Block495:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block496:
	test edi,edi
	je Block498

 Block497:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 4
	call CUIStatusBar::SetChatTarget
	jmp Block62

 Block498:
	lea edx,[ebp+0x60]
	push 0x7E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB4
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	add esp,8
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block500

 Block499:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block500:
	test edi,edi
	je Block502

 Block501:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CUIStatusBar::SetChatTarget
	jmp Block578

 Block502:
	lea eax,[ebp+0x60]
	push 0x80
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB5
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block504

 Block503:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 5
	call CUIStatusBar::SetChatTarget
	jmp Block578

 Block504:
	lea ecx,[ebp+0x60]
	push 0x82
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB6
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block506

 Block505:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 8
	call CUIStatusBar::SetChatTarget
	jmp Block578

 Block506:
	lea edx,[ebp+0x60]
	push 0x81
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB7
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block508

 Block507:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 6
	call CUIStatusBar::SetChatTarget
	jmp Block578

 Block508:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x83
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xB8
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block510

 Block509:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp+0x3C]
	mov dword ptr [_D_S_BCHASE],0
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],0xB9
	call CField::SendChatMsgWhisper
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	jmp Block578

 Block510:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x3C]
	push 0x84
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x24],0x100
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xBA
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	mov edi,0x200
	test eax,eax
	jne Block513

 Block511:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x147D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x24],edi
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov dword ptr [ebp-4],0xBB
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	test eax,eax
	jne Block513

 Block512:
	xor bl,bl
	jmp Block514

 Block513:
	mov bl,1

 Block514:
	mov dword ptr [ebp-4],0xBA
	test dword ptr [ebp+0x24],edi
	je Block516

 Block515:
	and dword ptr [ebp+0x24],0xFFFFFDFF
	lea ecx,[ebp+0x60]
	call ZXString<char>::~ZXString<char>

 Block516:
	test dword ptr [ebp+0x24],0x100
	mov dword ptr [ebp-4],2
	je Block518

 Block517:
	lea ecx,[ebp+0x3C]
	call ZXString<char>::~ZXString<char>

 Block518:
	test bl,bl
	je Block520

 Block519:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendInviteTradingRoomMsg
	jmp Block578

 Block520:
	lea eax,[ebp+0x60]
	push 0x87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xBC
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block522

 Block521:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::ShowPartyInfo
	jmp Block578

 Block522:
	lea ecx,[ebp+0x60]
	push 0x88
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xBD
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block524

 Block523:
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendCreateNewPartyMsg
	jmp Block578

 Block524:
	lea edx,[ebp+0x60]
	push 0x89
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xBE
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block526

 Block525:
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendWithdrawPartyMsg
	jmp Block578

 Block526:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x8A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xBF
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block528

 Block527:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendJoinPartyMsg
	jmp Block578

 Block528:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x8B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC0
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block530

 Block529:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendKickPartyMsg
	jmp Block578

 Block530:
	lea eax,[ebp+0x60]
	push 0x8C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC1
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block532

 Block531:
	mov ecx,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	push 0x15
	call CWvsContext::UI_Toggle
	jmp Block578

 Block532:
	lea ecx,[ebp+0x60]
	push 0x1639
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC2
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block534

 Block533:
	lea edx,[ebp+0x60]
	push 0x1641
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [ebp-4],0xC3
	call CHATLOG_ADD
	add esp,8
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	jmp Block578

 Block534:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x1639
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC4
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block536

 Block535:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendCreateExpeditionMsg
	jmp Block578

 Block536:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x163B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC5
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block538

 Block537:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendInviteExpeditionMsg
	jmp Block578

 Block538:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x163C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC6
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block540

 Block539:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x5C]
	push edx
	call CField::SendKickExpeditionMsg
	jmp Block578

 Block540:
	lea eax,[ebp+0x60]
	push 0x163A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC7
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block542

 Block541:
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendWithdrawExpeditionMsg
	jmp Block578

 Block542:
	lea ecx,[ebp+0x60]
	push 0x8D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC8
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block544

 Block543:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::ShowGuildInfo
	jmp Block578

 Block544:
	lea edx,[ebp+0x60]
	push 0x8E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xC9
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block546

 Block545:
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendWithdrawGuildMsg
	jmp Block578

 Block546:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x8F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xCA
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block548

 Block547:
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendInviteGuildMsg
	jmp Block578

 Block548:
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x60]
	push 0x90
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xCB
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block550

 Block549:
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp+0x10]
	call CField::SendKickGuildMsg
	jmp Block578

 Block550:
	lea eax,[ebp+0x60]
	push 0xC0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xCC
	call ZXString<char>::_ctor_copy
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block554

 Block551:
	mov esi,dword ptr [ebp+0x10]
	test esi,esi
	je Block578

 Block552:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block578

 Block553:
	push 0x102
	lea ecx,[ebp+0x2C]
	call COutPacket::_ctor_1
	cmp dword ptr [esi+0xDA0],0
	mov byte ptr [ebp-4],0xCD
	sete cl
	movzx edx,cl
	push edx
	lea ecx,[ebp+0x2C]
	call COutPacket::Encode1
	lea eax,[ebp+0x2C]
	push eax
	call SendPacket
	lea ecx,[ebp+0x30]
	jmp Block577

 Block554:
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x60]
	push 0x94
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	mov byte ptr [ebp-4],0xCE
	call ZXString<char>::_ctor_copy
	call slashcmd_check_with_subcmd
	add esp,0xC
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block563

 Block555:
	push 1
	lea eax,[ebp+0x3C]
	push eax
	push 1
	push 0x400
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x3C],0
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[ebp+0x5C]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block557

 Block556:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x11D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block578

 Block557:
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor edi,edi

 Block558:
	mov edx,dword ptr [ebx+0x2E44]
	mov ecx,dword ptr [edi+edx+4]
	test ecx,ecx
	je Block563

 Block559:
	cmp dword ptr [ebp+0x3C],0
	je Block561

 Block560:
	call CPet::CursedChatCommand
	jmp Block562

 Block561:
	lea eax,[ebp+0x5C]
	push eax
	call CPet::ChatCommand

 Block562:
	add edi,8
	cmp edi,0x18
	jl Block558

 Block563:
	mov ecx,esi
	call ZXString<char>::GetLength
	cmp eax,1
	jle Block575

 Block564:
	mov dword ptr [ebp+0x1C],8
	mov ebx,0x4EBC40

 Block565:
	push ebx
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xFFFFFFFF
	push 1
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xCF
	call ZXString<char>::Mid
	call slashcmd_check
	add esp,8
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::~ZXString<char>
	test edi,edi
	jne Block568

 Block566:
	inc dword ptr [ebp+0x1C]
	inc ebx
	cmp ebx,offset CCtrlSelector::Draw
	jl Block565

 Block567:
	jmp Block575

 Block568:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp+0x48]
	push eax
	mov dword ptr [ebp+0x18],ecx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x60],edi
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 5
	mov ecx,edi
	call CharacterData::GetItemSlotCount
	xor edi,edi
	mov dword ptr [ebp+0x20],eax
	test eax,eax
	jle Block575

 Block569:
	lea esp,[esp]

 Block570:
	push edi
	push 5
	lea ecx,[ebp+8]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	call CharacterData::GetItem
	mov edx,dword ptr [eax+4]
	lea ecx,[ebp+8]
	mov dword ptr [ebp+0x3C],edx
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	cmp dword ptr [ebp+0x3C],0
	je Block572

 Block571:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,0xC
	call TSecType<long>::GetData
	cmp eax,ebx
	je Block574

 Block572:
	inc edi
	cmp edi,dword ptr [ebp+0x20]
	jl Block570

 Block573:
	jmp Block575

 Block574:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp+0x18]
	push 0xFFFFFFFF
	push 0
	push eax
	call CWvsContext::SendEmotionChange

 Block575:
	mov ecx,dword ptr [ebp+0x14]
	call CWvsContext::IsAdminAccount
	test eax,eax
	je Block578

 Block576:
	push 0x36
	lea ecx,[ebp+0x40]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],0xD0
	call get_update_time
	push eax
	lea ecx,[ebp+0x40]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push esi
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x40]
	call COutPacket::EncodeStr
	push 0
	lea ecx,[ebp+0x40]
	call COutPacket::Encode1
	lea ecx,[ebp+0x40]
	push ecx
	call SendPacket
	lea ecx,[ebp+0x44]

 Block577:
	add esp,4
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll

 Block578:
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],1
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZXString<char>::~ZXString<char>

 Block579:
	lea esp,[ebp-0x40]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CField::AddBlackList
_SUB_EXCEPTION_HANDLER(139710)
__SUB_CLASS_THIS(00139710, __thiscall, 24985,  CField, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_139710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x90
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	push 0x1F
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
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
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
	ret 4
}
}
// CField::OnFieldSpecificData
__SUB_CLASS_THIS(0012A7E0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	push edx
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edx
	call eax
	ret 4
}
}
// CField::GetRTTI
__SUB_CLASS_THIS0(0013CAF0, __thiscall, 25053,  CField, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CField::ms_RTTI_CField
	ret
}
}
// CField::OnItemUpgrade
__SUB_CLASS_THIS(0012A430, __thiscall, 25045,  CField, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x23C],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0x23C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x3C]
	jmp eax

 Block2:
	ret 8
}
}
// CField::RestoreToolTip
_SUB_EXCEPTION_HANDLER(133EE0)
__SUB_CLASS_THIS0(00133EE0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_133EE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0xEAB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x30],0
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x2C],1
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esi+0x16C]
	mov byte ptr [esp+0x28],2
	call TSecType<unsigned long>::GetData
	push eax
	lea ecx,[esi+0x148]
	mov byte ptr [esp+0x2C],1
	call CToolTipHelper::LoadToolTip_1
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret

 Block8:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CField::OnMakeTimerParam
_SUB_EXCEPTION_HANDLER(12F7F0)
__SUB_CLASS_THIS(0012F7F0, __thiscall, 25044,  CField, void, CClock::INITPARAM&, long&, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F7F0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x1C]
	lea eax,[esp+0x1C]
	push 0xB68
	push eax
	mov dword ptr [esi+4],0xFF000040
	mov dword ptr [esi+8],0xFFFFFF20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+8]
	push 0xB0B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [edx],0xFFFFFF7F
	add esp,4
	mov dword ptr [eax],0x1E
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC

 Block4:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ecx],0xFFFFFF7F
	mov dword ptr [edx],0x1E
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CHealer::~CHealer
__SUB_CLASS_THIS0(0012B1F0, __thiscall, 143725,  CHealer, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	pop esi
	ret
}
}
// CField::OnHontaleTimer
_SUB_EXCEPTION_HANDLER(1311D0)
__SUB_CLASS_THIS(001311D0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1311D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	movzx esi,al
	mov eax,edi
	xor ebx,ebx
	sub eax,ebx
	je Block13

 Block1:
	sub eax,1
	je Block8

 Block2:
	sub eax,1
	jne Block20

 Block3:
	lea eax,[esp+0x18]
	push 0x16EF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],4
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x3C],5
	call ZXString<char>::Format
	add esp,0xC
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block5

 Block4:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block5:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],4
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x18]
	jmp Block18

 Block8:
	lea edx,[esp+0x1C]
	push 0x16F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],2
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::Format
	add esp,0xC
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block10

 Block9:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block10:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x1C]
	jmp Block18

 Block13:
	lea ecx,[esp+0x20]
	push 0x16F1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Format
	add esp,0xC
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block15

 Block14:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block15:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x20]

 Block18:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField::SendSetGradeNameMsg
_SUB_EXCEPTION_HANDLER(134FE0)
__SUB_CLASS_THIS(00134FE0, __thiscall, 24983,  CField, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134FE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x95
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],4
	call COutPacket::_ctor_1
	push 0xD
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],5
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
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+8],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x38]
	mov dword ptr [esp+8],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],4
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 0x14
}
}
// CField_LimitedView::Init
_SUB_EXCEPTION_HANDLER(1554A0)
__SUB_CLASS_THIS(001554A0, __thiscall, 143624,  CField_LimitedView, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1554A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x58],edi
	mov eax,dword ptr [esp+0xBC]
	push eax
	call CField::Init
	mov eax,dword ptr [edi+0xDA4]
	add edi,0xDA4
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	mov dword ptr [esp+0xC0],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x18]
	mov ebx,1
	push eax
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB4],2
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x300
	push 0x400
	call IWzCanvas::Create
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB4],bl
	mov ebx,8
	cmp word ptr [esp+0x18],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block14:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x48],bx
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block18:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFF000000
	push 0x300
	push 0x400
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	lea ecx,[esp+0x18]
	push ecx
	call ebp
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov ebx,3
	mov eax,ebx
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],4
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0xDA0]
	cmp esi,eax
	je Block31

 Block27:
	mov edx,ecx
	mov dword ptr [edx+0xDA0],eax
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	test esi,esi
	je Block31

 Block30:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block31:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xB4],bl
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	jne Block43

 Block38:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block40:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block41:
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x18]
	push ecx
	call esi
	jmp Block41

 Block44:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0xB8],5
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xB8],6
	call ebp
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea edx,[esp+0x18]
	mov bl,7
	push edx
	mov byte ptr [esp+0xB8],bl
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0xB8],8
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esp+0x58]
	mov ecx,dword ptr [ecx+0xDA0]
	mov eax,dword ptr [edi]
	mov byte ptr [esp+0xB4],9
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x2C]
	push edx
	lea edx,[esp+0x84]
	push edx
	lea edx,[esp+0x24]
	push edx
	lea edx,[esp+0x58]
	push edx
	push eax
	lea eax,[esp+0xA4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x8C],di
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x8C]
	push edx
	call esi

 Block58:
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x48],di
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block62:
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x18],di
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block66:
	mov byte ptr [esp+0xB4],6
	cmp word ptr [esp+0x7C],di
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x7C]
	push edx
	call esi

 Block70:
	mov byte ptr [esp+0xB4],5
	cmp word ptr [esp+0x28],di
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block74:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x38]
	push eax
	call esi

 Block78:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ebx,0xA
	mov ecx,0xD
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block82:
	mov edi,dword ptr [esp+0x58]
	mov esi,dword ptr [edi+0xDA0]
	mov byte ptr [esp+0xB4],0xB
	test esi,esi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB4],bl
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xB4],esi
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea edx,[esp+0x38]
	mov ebx,0xC
	push edx
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov ecx,dword ptr [edi+0xDA0]
	mov byte ptr [esp+0xB4],0xD
	test ecx,ecx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0xFFFFFE2C
	push 0xFFFFFE00
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],bl
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0xB4],esi
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov esi,dword ptr [edi+0xDA0]
	test esi,esi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC006153A
	push esi
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov esi,dword ptr [edi+0xDA0]
	test esi,esi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block114

 Block113:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block114:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xDA8]
	push esi
	push eax
	mov dword ptr [esp+0xC0],0xE
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea eax,[esp+0x38]
	mov ebx,0xF
	push eax
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xB4],0x10
	test ecx,ecx
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x13C
	push 0x13C
	call IWzCanvas::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],bl
	jne Block125

 Block123:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov esi,dword ptr [esi]
	test esi,esi
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFF000000
	push 0x13C
	push 0x13C
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block134:
	lea ecx,[esp+0x6C]
	push ecx
	call ebp
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	lea eax,[esp+0x5C]
	push eax
	mov dword ptr [esp+0xB8],0x11
	call ebp
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	push 0
	push 0
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x68]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE6E
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x13
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	lea edx,[esp+0xB0]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x14
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDAC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block143

 Block141:
	cmp eax,0x80004002
	je Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x9C],si
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov byte ptr [esp+0xB4],0x11
	cmp word ptr [esp+0x5C],si
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x6C],si
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov ecx,edi
	call CField_LimitedView::DrawViewrange
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CField_LimitedView::CField_LimitedView
__SUB_CLASS_THIS0(0013EAF0, __thiscall, 143621,  CField_LimitedView, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_LimitedView::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_LimitedView::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_LimitedView::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_LimitedView::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB8],eax
	mov dword ptr [esi+0xDBC],eax
	mov dword ptr [esi+0xDC0],eax
	int 3// TODO: 	mov dword ptr [esi+0xDB0],offset ZList<tagPOINT>::`vftable'
	mov dword ptr [esi+0xDC4],eax
	mov eax,esi
	pop esi
	ret
}
}
// CSnowMan::Init
_SUB_EXCEPTION_HANDLER(160C10)
__SUB_CLASS_THIS(00160C10, __thiscall, 143054,  CSnowMan, void, long, long, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_160C10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x64]
	mov ebp,dword ptr [esp+0x68]
	push ebp
	lea ecx,[esi+0x1E]
	push ecx
	lea edx,[ebp-0x64]
	lea eax,[esi-0x1E]
	push edx
	push eax
	mov dword ptr [esp+0x20],eax
	lea eax,[edi+0x10]
	push eax
	call SetRect
	push 0
	push 0xFF
	push 0xC0015F90
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x74],esp
	mov dword ptr [eax],0
	push ebp
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	push 0
	push ecx
	lea edx,[esp+0x88]
	mov dword ptr [esp+0x80],0
	mov dword ptr [eax],0
	push edx
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x20]
	add esp,0x28
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [edi+0x20],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x60],1
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 2
	push 0xA
	push 0x34
	push 0
	push 0
	lea edx,[esp+0x80]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x24]
	cmp esi,eax
	je Block18

 Block14:
	mov dword ptr [edi+0x24],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	test esi,esi
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block18:
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov esi,8
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x14],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov esi,dword ptr [edi+0x24]
	test esi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x60],3
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [edi+0x24]
	mov byte ptr [esp+0x5C],4
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x38]
	push eax
	push ebp
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x5C],3
	cmp word ptr [esp+0x34],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ecx,edi
	call CSnowMan::DrawHPTag
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 0xC
}
}
// CField::Close
__SUB_CLASS_THIS0(0012D6A0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add ecx,0x190
	call ZList<CAnimationDisplayer::FOOTHOLDINFO>::RemoveAll
	lea ecx,[esi+0x26C]
	call ZList<ZRef<DYNAMIC_OBJ_INFO>>::RemoveAll
	lea ecx,[esi+0x280]
	call ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esi+0x208]
	test ecx,ecx
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push eax
	call CSoundMan::StopSE

 Block4:
	mov ecx,esi
	pop esi
	jmp  CMapLoadable::Close
}
}
// CField::LoadMap
_SUB_EXCEPTION_HANDLER(1469F0)
__SUB_CLASS_THIS(001469F0, __thiscall, 24967,  CField, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1469F0
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
	mov esi,ecx
	call CMapLoadable::LoadMap
	mov ecx,esi
	call CField::RestoreOption
	mov edi,dword ptr [esp+0x40]
	push edi
	mov ecx,esi
	call CField::RestoreHelpMsg
	mov ecx,esi
	call CField::RestorePeculiarInfo
	mov ecx,esi
	call CField::RestoreSeat
	mov ecx,esi
	call CField::RestoreClock
	mov ecx,esi
	call CField::RestoreToolTip
	mov ecx,esi
	call CField::RestoreWeatherMsg
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x3850]
	xor ebp,ebp
	cmp eax,ebp
	jne Block2

 Block1:
	mov ecx,esi
	call CMapLoadable::PlayBGMFromMapInfo

 Block2:
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp eax,ebp
	je Block4

 Block3:
	mov eax,dword ptr [eax+0xA0]
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	mov dword ptr [ecx+0xB08],eax

 Block4:
	mov eax,dword ptr [esi+0x30]
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov eax,dword ptr [esi+0x2C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	call CUIMiniMap::LoadMiniMap
	lea eax,[esp+0x40]
	push eax
	push ebp
	lea ecx,[esi+0x1B4]
	call ZArray<tagPOINT>::_Alloc
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x5EE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x44],ebp
	cmp ecx,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x28]
	or ebx,0xFFFFFFFF
	push edx
	mov dword ptr [esp+0x48],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x40],1
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	push esi
	call CPortalList::RestorePortal
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x38],ebx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp edi,0x10B0EB30
	je Block19

 Block18:
	cmp edi,0x10B0EB31
	jne Block29

 Block19:
	sub edi,0x10B0EB31
	neg edi
	sbb edi,edi
	and edi,0xFFFFFF9C
	add edi,0x864764
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x40],ebx

 Block20:
	cmp ebx,1
	je Block27

 Block21:
	cmp ebx,2
	je Block27

 Block22:
	mov edx,dword ptr [esp+0x14]
	add ebx,edx
	push ebx
	call CMobTemplate::GetMobTemplate
	add esp,4
	mov dword ptr [esp+0x18],eax
	xor edi,edi

 Block23:
	lea eax,[edi-0xD]
	cmp eax,8
	ja Block25

 Block24:
	mov ecx,dword ptr [esp+0x18]
	push eax
	call CMobTemplate::GetAttackInfo

 Block25:
	int 3// TODO: 	mov dword ptr [esp+0x1C],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	push edi
	push ebx
	mov dword ptr [esp+0x44],2
	call CActionMan::LoadMobAction
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x1C],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	inc edi
	cmp edi,0x2B
	jl Block23

 Block26:
	mov ebx,dword ptr [esp+0x40]

 Block27:
	inc ebx
	cmp ebx,0xA
	mov dword ptr [esp+0x40],ebx
	jle Block20

 Block28:
	or ebx,0xFFFFFFFF

 Block29:
	cmp dword ptr [_D_S_BAUTOULIST],1
	jne Block32

 Block30:
	lea ecx,[esp+0x40]
	push 0xC1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x3C],3
	call CField::SendChatMsgSlash
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],ebx
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov edx,dword ptr [esi+0x3C]
	mov ecx,dword ptr [edx+0xC4]
	mov dword ptr [esi+0xD68],ecx
	mov eax,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	mov eax,dword ptr [eax+0x40]
	push ebp
	push ebp
	xor eax,ecx
	push ebp
	push eax
	lea ecx,[esi+0x18C]
	push 4
	push ecx
	mov dword ptr [esi+0xD68],eax
	call CCrc32::GetCrc32
	push ebp
	push ebp
	push ebp
	push eax
	lea edx,[esi+0x190]
	push 4
	push edx
	mov dword ptr [esi+0xD68],eax
	call CCrc32::GetCrc32
	push ebp
	push ebp
	push ebp
	push eax
	mov dword ptr [esi+0xD68],eax
	lea eax,[esi+0x194]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x48
	push ebp
	push ebp
	push ebp
	push eax
	lea ecx,[esi+0x19C]
	push 4
	push ecx
	mov dword ptr [esi+0xD68],eax
	call CCrc32::GetCrc32
	push ebp
	push ebp
	push ebp
	push eax
	lea edx,[esi+0x24C]
	push 4
	push edx
	mov dword ptr [esi+0xD68],eax
	call CCrc32::GetCrc32
	add esp,0x30
	mov ecx,esi
	mov dword ptr [esi+0xD68],eax
	call CField::LoadDynamicObject
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
// CField::SendSetMemberGradeMsg
_SUB_EXCEPTION_HANDLER(12D820)
__SUB_CLASS_THIS(0012D820, __thiscall, 24981,  CField, void, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x95
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0xE
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+8]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+4]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 8
}
}
// CField::OnSummonItemInavailable
__SUB_CLASS_THIS(0012F7B0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	call CInPacket::Decode1
	test al,al
	jne Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x121
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block2:
	ret 4
}
}
// Field::SkillInfo::IsSkill
__SUB_CLASS_THIS(001657E0, __thiscall, 16510,  Field::SkillInfo, int32_t, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x28]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	mov dword ptr [esp+4],ecx
	cmp eax,0xE
	je Block18

 Block1:
	cmp eax,0x12
	je Block18

 Block2:
	cmp ebx,0x3F1
	je Block17

 Block3:
	cmp ebx,0x989A71
	je Block17

 Block4:
	cmp ebx,0x13130F1
	je Block17

 Block5:
	cmp ebx,0x1315801
	je Block17

 Block6:
	cmp ebx,0x1C9C771
	je Block17

 Block7:
	cmp ebx,0x3F2
	je Block17

 Block8:
	cmp ebx,0x989A72
	je Block17

 Block9:
	cmp ebx,0x13130F2
	je Block17

 Block10:
	cmp ebx,0x1315802
	je Block17

 Block11:
	cmp ebx,0x1C9C772
	je Block17

 Block12:
	cmp ebx,0x3F3
	je Block17

 Block13:
	cmp ebx,0x989A73
	je Block17

 Block14:
	cmp ebx,0x13130F3
	je Block17

 Block15:
	cmp ebx,0x1315803
	je Block17

 Block16:
	cmp ebx,0x1C9C773
	jne Block18

 Block17:
	mov eax,1
	pop ebx
	pop ecx
	ret 4

 Block18:
	cmp eax,0x17
	je Block24

 Block19:
	cmp ebx,0x3FC
	je Block17

 Block20:
	cmp ebx,0x989A7C
	je Block17

 Block21:
	cmp ebx,0x13130FC
	je Block17

 Block22:
	cmp ebx,0x131580C
	je Block17

 Block23:
	cmp ebx,0x1C9C77C
	je Block17

 Block24:
	mov eax,dword ptr [ecx+0xC]
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block55

 Block25:
	push ebx
	call get_skill_class
	mov edi,eax
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esp,4
	add esi,edx
	lea esp,[esp]

 Block26:
	lea eax,[esp+0x18]
	push eax
	call ZList<long>::GetNext
	mov ecx,dword ptr [eax]
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,4
	cmp eax,0x16
	je Block28

 Block27:
	cmp esi,0x7D1
	jne Block42

 Block28:
	lea eax,[ecx-1]
	cmp eax,3
	ja Block53

 Block29:
	cmp EAX, 0
je Block30
cmp EAX, 1
je Block33
cmp EAX, 2
je Block36
cmp EAX, 3
je Block39


 Block30:
	cmp edi,1
	jl Block53

 Block31:
	cmp edi,2
	jg Block53

 Block32:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret 4

 Block33:
	cmp edi,3
	jl Block53

 Block34:
	cmp edi,6
	jle Block32

 Block35:
	jmp Block53

 Block36:
	cmp edi,7
	jl Block53

 Block37:
	cmp edi,8
	jle Block32

 Block38:
	jmp Block53

 Block39:
	cmp edi,9
	jl Block53

 Block40:
	cmp edi,0xA
	jle Block32

 Block41:
	jmp Block53

 Block42:
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B
	jne Block51

 Block43:
	mov eax,esi
	cdq
	mov ebp,0x1AE
	idiv ebp
	lea eax,[ecx-1]
	cmp eax,3
	ja Block53

 Block44:
	cmp EAX, 0
je Block45
cmp EAX, 1
je Block46
cmp EAX, 2
je Block49
cmp EAX, 3
je Block50


 Block45:
	test edx,edx
	jmp Block52

 Block46:
	cmp edx,1
	jl Block53

 Block47:
	cmp edx,2
	jle Block32

 Block48:
	jmp Block53

 Block49:
	cmp edx,3
	jmp Block52

 Block50:
	cmp edx,4
	jmp Block52

 Block51:
	cmp ecx,edi

 Block52:
	je Block32

 Block53:
	cmp dword ptr [esp+0x18],0
	jne Block26

 Block54:
	mov ecx,dword ptr [esp+0x10]

 Block55:
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block58

 Block56:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<long>::GetNext
	add esp,4
	cmp dword ptr [eax],ebx
	je Block32

 Block57:
	cmp dword ptr [esp+0x18],0
	jne Block56

 Block58:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 4
}
}
// CField::IsFearEffectOn
__SUB_CLASS_THIS0(0012A420, __thiscall, 24969,  CField, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD98]
	ret
}
}
// CField::RestoreSwinArea
_SUB_EXCEPTION_HANDLER(1330E0)
__SUB_CLASS_THIS0(001330E0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1330E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x4C],esi
	mov ebx,dword ptr [esi+0x2C]
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebx
	cmp ebx,ebp
	je Block2

 Block1:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block2:
	fld1
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x68D
	push edx
	mov dword ptr [esp+0xD8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD0],1
	cmp ebx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xD4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD0],2
	call get_double
	fstp qword ptr [esp+4]
	add esp,4
	lea ecx,[esi+0x210]
	call _ZtlSecureTearHelper<double>::call
	mov edi,8
	mov dword ptr [esi+0x220],eax
	mov byte ptr [esp+0xC4],0
	cmp word ptr [esp+0x24],di
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	fld1
	sub esp,0xC
	mov eax,esp
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x20],esp
	push 0x1ACC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xD4],3
	mov ecx,ebx
	mov byte ptr [esp+0xD4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD0],4
	call get_double
	fstp qword ptr [esi+0x180]
	add esp,0xC
	mov byte ptr [esp+0xC4],0
	cmp word ptr [esp+0x24],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_SWIMAREA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x30]
	mov byte ptr [esp+0xD0],5
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x98]
	push edx
	mov byte ptr [esp+0xD4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov byte ptr [esp+0xC4],8
	cmp word ptr [esp+0x8C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block80

 Block22:
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x50]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xC8],9
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xC4],0xB
	cmp eax,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xC4],0xC
	mov dword ptr [esp+0x54],ebp
	jmp Block33

 Block32:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x18]

 Block33:
	mov edi,dword ptr [esp+0x38]
	xor ebp,ebp
	cmp edi,ebp
	je Block3

 Block34:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block75

 Block35:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [esp+0x20]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block37

 Block36:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0xD4],0xE
	mov ecx,esi
	mov byte ptr [esp+0xD4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp eax,ebp
	je Block40

 Block38:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x58]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	jge Block40

 Block39:
	cmp eax,0x80004002
	jne Block16

 Block40:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xC4],0x11
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x937
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC8],0x12
	cmp esi,ebp
	je Block3

 Block45:
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x11
	call IWzProperty::Getitem
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x939
	push eax
	mov byte ptr [esp+0xD0],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],0x14
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x13
	call IWzProperty::Getitem
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x938
	push edx
	mov byte ptr [esp+0xD0],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x80]
	mov byte ptr [esp+0xC8],0x16
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x93A
	push ecx
	mov byte ptr [esp+0xD0],0x17
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x70]
	mov byte ptr [esp+0xC8],0x18
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x17
	call IWzProperty::Getitem
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xC4],0x19
	call _xvariant_t::op_long
	lea ecx,[esp+0x5C]
	mov edi,eax
	call _xvariant_t::op_long
	lea ecx,[esp+0x7C]
	mov ebp,eax
	call _xvariant_t::op_long
	lea ecx,[esp+0x6C]
	mov ebx,eax
	call _xvariant_t::op_long
	mov ecx,dword ptr [esp+0x4C]
	push 0xFFFFFFFF
	add ecx,0xD10
	mov dword ptr [esp+0xBC],eax
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],ecx
	mov byte ptr [esp+0xC4],0x17
	mov ebx,8
	cmp word ptr [esp+0x6C],bx
	jne Block52

 Block46:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block48:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block49:
	mov byte ptr [esp+0xC4],0x15
	cmp word ptr [esp+0x7C],bx
	jne Block53

 Block50:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block54

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block52:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x6C]
	push eax
	call edi
	jmp Block49

 Block53:
	lea edx,[esp+0x7C]
	push edx
	call edi

 Block54:
	mov byte ptr [esp+0xC4],0x13
	cmp word ptr [esp+0x5C],bx
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block58:
	mov byte ptr [esp+0xC4],0x11
	cmp word ptr [esp+0x24],bx
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block62:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xC8],0xD
	call edx
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0xC4],0xC
	test esi,esi
	je Block70

 Block63:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block64:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block66:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block68

 Block67:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	mov dword ptr [esp+0x20],0

 Block70:
	cmp word ptr [esp+0x3C],bx
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block32

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block73:
	lea edx,[esp+0x3C]
	push edx
	call edi
	test eax,eax
	jl Block16

 Block74:
	jmp Block32

 Block75:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xC4],0xB
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xC8],8
	call eax

 Block80:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	call CWvsPhysicalSpace2D::SetFieldAttr
	mov byte ptr [esp+0xC4],0
	cmp esi,ebp
	je Block82

 Block81:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block82:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [esp+0xC8],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret
}
}
// CHealer::Move
_SUB_EXCEPTION_HANDLER(151250)
__SUB_CLASS_THIS(00151250, __thiscall, 143718,  CHealer, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x38],0
	call esi
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [edi+0xC]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x40]
	lea eax,[esp+0x10]
	push eax
	push edx
	push 0
	call IWzVector2D::RelOffset
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],si
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0xC]
	push ecx
	call edi

 Block10:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4

 Block13:
	lea eax,[esp+0x1C]
	push eax
	call edi

 Block14:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4
}
}
// CField_WeddingPhoto::CField_WeddingPhoto
__SUB_CLASS_THIS0(0013EEB0, __thiscall, 142870,  CField_WeddingPhoto, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_WeddingPhoto::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_WeddingPhoto::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_WeddingPhoto::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_WeddingPhoto::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField::IsUnableToWithdrawParty
// 52A3C0
static uint8_t _SUB_12A390_LOOKUP_TABLE_0[23] = {
0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 
0, 1, 1, 1, 1, 1, 0, 
};
__SUB_CLASS_THIS0(0012A390, __thiscall, 24969,  CField, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	add eax,0xFFFFFFF6
	cmp eax,0x16
	ja Block3

 Block1:
	movzx eax,byte ptr [eax+_SUB_12A390_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3


 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CField::OnTransferFieldReqIgnored
_SUB_EXCEPTION_HANDLER(12F3B0)
__SUB_CLASS_THIS(0012F3B0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F3B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esi+0x20B8],0
	call get_update_time
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x20BC],eax
	call CInPacket::Decode1
	movzx eax,al
	dec eax
	cmp eax,7
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
cmp EAX, 4
je Block6
cmp EAX, 5
je Block8
cmp EAX, 6
je Block9
cmp EAX, 7
je Block7


 Block2:
	lea eax,[esp+0x2C]
	push 0x181
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x34]
	jmp Block10

 Block3:
	lea ecx,[esp+8]
	push 0xBD3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],1
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x10]
	jmp Block10

 Block4:
	lea edx,[esp+0xC]
	push 0x1A83
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],2
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x14]
	jmp Block10

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xBD4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4

 Block6:
	lea ecx,[esp+0x10]
	push 0x1A83
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],3
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x18]
	jmp Block10

 Block7:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0xBEF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4

 Block8:
	lea eax,[esp+0x14]
	push 0x155B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],4
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	jmp Block10

 Block9:
	lea ecx,[esp+0x18]
	push 0x168B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x2C],5
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]

 Block10:
	add esp,8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CField::UpdateQuestLayer
_SUB_EXCEPTION_HANDLER(131940)
__SUB_CLASS_THIS0(00131940, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_131940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ecx
	cmp eax,ebx
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call ebp
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x38],ebx

 Block5:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0xD0
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::GetHeadPosition
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block24

 Block6:
	mov dword ptr [esp+0x30],ebx
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xD0
	mov dword ptr [esp+0x4C],ebx
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::GetNext
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x48],1
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	add ecx,0x124
	mov dword ptr [esp+0x2C],ebx
	call ZMap<ZXString<char>, unsigned short, ZXString<char>>::GetAt
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x24]
	cmp ax,bx
	jne Block13

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block12:
	lea esi,[eax-0x10]
	jmp Block19

 Block13:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	movzx eax,ax
	add ecx,0x6F5
	mov dword ptr [esp+0x28],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	mov esi,dword ptr [esp+0x30]
	neg eax
	sbb eax,eax
	neg eax
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax+4],esi
	cmp esi,ebx
	je Block15

 Block14:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block15:
	call CMapLoadable::SetLayerListVisible
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp esi,ebx
	je Block23

 Block18:
	add esi,0xFFFFFFF0

 Block19:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push edi
	call ebp
	cmp esi,ebx
	je Block22

 Block21:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block22:
	mov dword ptr [esp+0x30],ebx

 Block23:
	cmp dword ptr [esp+0x28],ebx
	jne Block6

 Block24:
	mov eax,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+0xB0]
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	jne Block27

 Block25:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block26:
	xor ebx,ebx

 Block27:
	lea ecx,[esp+0x24]
	push ecx
	mov edi,1
	call ZList<CMapLoadable::VISIBLE_BY_QUEST>::GetNext
	add esp,4
	mov ebp,eax
	lea esp,[esp]

 Block28:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block44

 Block29:
	cmp ebx,dword ptr [eax-4]
	jae Block44

 Block30:
	mov edx,eax
	movzx ecx,word ptr [edx+ebx*8]
	lea eax,[edx+ebx*8]
	mov eax,dword ptr [eax+4]
	sub eax,0
	mov dword ptr [esp+0x28],ecx
	je Block35

 Block31:
	sub eax,1
	je Block34

 Block32:
	sub eax,1
	jne Block40

 Block33:
	mov ecx,dword ptr [esp+0x18]
	push eax
	lea eax,[esp+0x2C]
	push eax
	add ecx,0x5B5
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	jmp Block39

 Block34:
	movzx ecx,cx
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x28]
	push edx
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	neg eax
	sbb eax,eax
	neg eax
	jmp Block39

 Block35:
	mov esi,dword ptr [esp+0x18]
	movzx eax,cx
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0x6F5]
	mov dword ptr [esp+0x24],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block38

 Block36:
	push eax
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esi+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	jne Block38

 Block37:
	mov eax,1
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	and edi,eax

 Block40:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block46

 Block41:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x11C]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	inc ebx
	jmp Block28

 Block44:
	cmp dword ptr [esp+0x24],0
	jne Block26

 Block45:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block46:
	push 0x80004003
	call _com_issue_error
}
}
// CField::OnSetFocus
__SUB_CLASS_THIS(0013CAC0, __thiscall, 24962,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// GETCRC32Svr_long_
__SUB(0012A550, __cdecl, 144183,  unsigned long, const long&, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	push 0
	push 0
	push 0
	push eax
	push 4
	push ecx
	call CCrc32::GetCrc32
	add esp,0x18
	ret
}
}
// CField_Tournament::OnTournamentUEW
_SUB_EXCEPTION_HANDLER(163620)
// 563770
static uint8_t _SUB_163620_LOOKUP_TABLE_0[15] = {
0, 3, 1, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 
};
__SUB_CLASS_THIS(00163620, __thiscall, 53796,  CField_Tournament, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_163620
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
	mov ecx,dword ptr [esp+0x2C]
	call CInPacket::Decode1
	xor ebx,ebx
	movzx esi,al
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esi-2]
	mov dword ptr [esp+0x24],ebx
	cmp eax,0xE
	ja Block7

 Block1:
	movzx eax,byte ptr [eax+_SUB_163620_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block3
cmp EAX, 2
je Block2
cmp EAX, 3
je Block7


 Block2:
	lea ecx,[esp+0xC]
	push 0x9F6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	jmp Block5

 Block3:
	lea eax,[esp+0x10]
	push 0x9F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x28],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block5

 Block4:
	lea ecx,[esp+0x14]
	push 0x9F8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x28],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CField::SendKickPartyMsg
_SUB_EXCEPTION_HANDLER(130140)
__SUB_CLASS_THIS(00130140, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130140
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [esi+0x3604]
	test eax,eax
	je Block11

 Block1:
	mov eax,dword ptr [esi+0x20B4]
	cmp dword ptr [esi+0x36B6],eax
	jne Block11

 Block2:
	call CField::IsUnableToKickParty
	test eax,eax
	je Block4

 Block3:
	lea eax,[esp+0x34]
	push 0x13D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x34],1
	call CHATLOG_ADD
	add esp,8
	jmp Block13

 Block4:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [ecx+4],0
	je Block6

 Block5:
	lea edx,[esp+0x34]
	push 0x158F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x34],2
	call CHATLOG_ADD
	add esp,8
	jmp Block13

 Block6:
	mov edi,dword ptr [esp+0x34]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CWvsContext::GetPartyMemberByName
	mov esi,eax
	test esi,esi
	jne Block10

 Block7:
	mov dword ptr [esp+0x34],eax
	lea eax,[esp+0xC]
	push 0x152
	push eax
	mov dword ptr [esp+0x34],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x2C],3
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea eax,[esp+0x34]
	push 0xC
	push eax
	call CHATLOG_ADD
	add esp,8
	jmp Block13

 Block10:
	push 0x91
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],5
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 4

 Block11:
	lea edx,[esp+0x34]
	push 0x150
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x2C],0
	je Block13

 Block12:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block13:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 4
}
}
// CField_GuildBoss::Init
_SUB_EXCEPTION_HANDLER(151900)
__SUB_CLASS_THIS(00151900, __thiscall, 143705,  CField_GuildBoss, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [esp+0x60]
	push eax
	call CField::Init
	xor edi,edi
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_HEALER
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [esp+0x64],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x60],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],edi
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
	mov esi,8
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x20],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],4
	cmp ebx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x64],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],5
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x30],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_YMIN
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x60],6
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x64],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],7
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov esi,eax
	mov dword ptr [ebp+0xDA0],esi
	mov byte ptr [esp+0x58],3
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_HEALER
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x34]
	mov byte ptr [esp+0x5C],8
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x60],3
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x58],9
	jne Block21

 Block20:
	mov eax,dword ptr [eax+8]
	jmp Block22

 Block21:
	mov eax,offset _S___3

 Block22:
	push eax
	push esi
	push edi
	lea ecx,[ebp+0xDA8]
	call CHealer::Init
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],3
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_PULLEY
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [esp+0x64],0xA
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x68],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov edi,8
	mov bl,0xD
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],0xE
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0xF
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],di
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x3E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],0x10
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x11
	call get_int32
	add esp,8
	cmp word ptr [esp+0x40],8
	mov edi,eax
	mov byte ptr [esp+0x58],bl
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_PULLEY
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],0x12
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x58],0x13
	jne Block47

 Block46:
	mov eax,dword ptr [eax+8]
	jmp Block48

 Block47:
	mov eax,offset _S___3

 Block48:
	push eax
	push edi
	mov edi,dword ptr [esp+0x20]
	push ebp
	lea ecx,[edi+0xDBC]
	call CPulley::Init
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x58],bl
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [edi+0xDA4],0
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x5C],3
	call eax
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 4
}
}
// CField::IsUnableToKickParty
// 52A370
static uint8_t _SUB_12A340_LOOKUP_TABLE_0[23] = {
0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 
0, 1, 1, 1, 1, 1, 0, 
};
__SUB_CLASS_THIS0(0012A340, __thiscall, 24969,  CField, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	add eax,0xFFFFFFF6
	cmp eax,0x16
	ja Block3

 Block1:
	movzx eax,byte ptr [eax+_SUB_12A340_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3


 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CField_GuildBoss::OnPulleyStateChange
__SUB_CLASS_THIS(00151540, __thiscall, 143708,  CField_GuildBoss, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xDA4],eax
	pop esi
	ret 4
}
}
// CField::BasicActionAttack
__SUB_CLASS_THIS0(0013CAD0, __thiscall, 24969,  CField, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CField::GetFieldType
__SUB_CLASS_THIS0(0013CAE0, __thiscall, 24970,  CField, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CField::GetCorrectTime
__SUB_CLASS_THIS0(0012A290, __thiscall, 25018,  CField, _SYSTEMTIME) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	push esi
	mov edi,ecx
	call GetLocalTime
	lea eax,[esp+8]
	push eax
	push esi
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov eax,dword ptr [edi+0x2B0]
	add eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [edi+0x2B4]
	adc ecx,edx
	mov dword ptr [esp+0xC],ecx
	push esi
	lea ecx,[esp+0xC]
	push ecx
	mov dword ptr [esp+0x10],eax
	call dword ptr [ZImports::_FileTimeToSystemTime]
	pop edi
	mov eax,esi
	pop esi
	add esp,8
	ret 4
}
}
// CField::InputGuildName
_SUB_EXCEPTION_HANDLER(1347D0)
__SUB_CLASS_THIS0(001347D0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1347D0
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
	lea edi,[ecx+0x2BC]
	push edi
	call ask_guildname
	mov esi,eax
	add esp,4
	test esi,esi
	je Block7

 Block1:
	mov edi,edi

 Block2:
	push 1
	push edi
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block5

 Block3:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x348
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	push edi
	call ask_guildname
	mov esi,eax
	add esp,0x18
	test esi,esi
	jne Block2

 Block4:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret

 Block5:
	test esi,esi
	je Block7

 Block6:
	push 0x95
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CField::SendCreateExpeditionMsg
_SUB_EXCEPTION_HANDLER(130580)
__SUB_CLASS_THIS(00130580, __thiscall, 24976,  CField, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130580
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
	mov esi,dword ptr [esp+0x38]
	mov eax,dword ptr [esi]
	xor edi,edi
	cmp eax,edi
	je Block26

 Block1:
	cmp byte ptr [eax],0
	je Block26

 Block2:
	mov ebp,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp ebp,edi
	je Block26

 Block3:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3604],edi
	je Block6

 Block4:
	lea ecx,[esp+0x38]
	push 0x1648
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x38],edi
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x40]
	add esp,8
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,edi
	je Block26

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block26

 Block6:
	cmp dword ptr [ebp+4],edi
	je Block11

 Block7:
	lea edx,[esp+0x18]
	push 0x1649
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,1
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x38],edi
	mov eax,dword ptr [eax]
	push 0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x3C],2
	call ZXString<char>::Format
	add esp,8
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x40]
	add esp,8
	mov byte ptr [esp+0x30],bl
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,edi
	je Block26

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block26

 Block11:
	push offset _S___2
	mov ecx,esi
	call ZXString<char>::op_add_assign_t_1
	lea ecx,[esp+0x38]
	push 0x1A3A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x34],3
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push esi
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CPartyQuestInfoManager::GetByName
	mov ebx,4
	mov dword ptr [esp+0x30],ebx
	cmp dword ptr [esp+0x24],edi
	jne Block17

 Block14:
	lea eax,[esp+0x18]
	push 0x1A66
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],edi
	mov eax,dword ptr [eax]
	push 0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x3C],6
	call ZXString<char>::Format
	add esp,8
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x40]
	add esp,8
	mov byte ptr [esp+0x30],5
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x18]
	jmp Block23

 Block17:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterLevel
	mov ecx,dword ptr [esp+0x24]
	cmp eax,dword ptr [ecx+0xC]
	jl Block20

 Block18:
	cmp dword ptr [ecx+0x10],eax
	jl Block20

 Block19:
	mov edx,dword ptr [ecx]
	push edx
	mov ecx,ebp
	call ExpeditionIntermediary::SendExpCreatePacket
	jmp Block25

 Block20:
	lea eax,[esp+0x1C]
	push 0x1640
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [eax+0x10]
	push 0xC
	push edx
	mov edx,dword ptr [eax+0xC]
	mov eax,dword ptr [eax+4]
	push edx
	push eax
	push ecx
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x48],8
	call ZXString<char>::Format
	add esp,0x14
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x30],7
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]

 Block23:
	mov byte ptr [esp+0x30],bl
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>

 Block26:
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
// CField::OnFieldEffect
_SUB_EXCEPTION_HANDLER(13B790)
__SUB_CLASS_THIS(0013B790, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13B790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp-0x20],edi
	mov esi,dword ptr [ebp+8]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,7
	ja Block28

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block26
cmp EAX, 2
je Block7
cmp EAX, 3
je Block9
cmp EAX, 4
je Block12
cmp EAX, 5
je Block16
cmp EAX, 6
je Block22
cmp EAX, 7
je Block27


 Block2:
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	mov esi,eax
	xor eax,eax
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],eax
	lea eax,[ebp-0x24]
	push 0x663
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov byte ptr [ebp-4],1
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp-0x14]
	push esi
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],0
	mov byte ptr [ebp-4],2
	push 0
	mov byte ptr [ebp-4],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::Effect_General
	push esi
	push ebx
	call get_sound_volume_by_pos
	push eax
	push edi
	call play_summon_sound
	add esp,0x10

 Block5:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block28

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block28

 Block7:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [ebp-0x1C]
	push 0xFFFFFFFF
	push ecx
	mov ecx,edi
	mov dword ptr [ebp-4],3
	call CMapLoadable::SetObjectState
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block28

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block9:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],4
	mov dword ptr [ebp-0x14],0
	call ZXString16::AssignCharStr
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push ecx
	mov ecx,esp
	lea eax,[ebp-0x14]
	mov dword ptr [ebp-0x20],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,edi
	call CField::ShowScreenEffect
	jmp Block5

 Block12:
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],7
	mov dword ptr [ebp-0x18],0
	call ZXString16::AssignCharStr
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov esi,dword ptr [ebp-0x18]
	push 0x64
	push esi
	call play_field_sound
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block28

 Block15:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4
	jmp Block28

 Block16:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [ebp-0x1C],eax
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [ebp-0x28],edx
	call CInPacket::Decode1
	movzx eax,al
	lea ecx,[ebx-0x866E86]
	mov dword ptr [ebp-0x18],eax
	cmp ecx,4
	ja Block21

 Block17:
	mov dword ptr [ebp-0x1C],0
	mov esi,0x866E86
	lea esp,[esp]

 Block18:
	push esi
	call CMobTemplate::GetMobTemplate
	mov edx,dword ptr [eax+0x84]
	push edx
	add eax,0x7C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add dword ptr [ebp-0x1C],eax
	inc esi
	add esp,0xC
	cmp esi,0x866E8A
	jle Block18

 Block19:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov esi,0x866E8A
	mov edi,ecx
	cmp ebx,esi
	jae Block21

 Block20:
	push esi
	call CMobTemplate::GetMobTemplate
	mov edx,dword ptr [eax+0x84]
	push edx
	add eax,0x7C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec esi
	add esp,0xC
	add edi,eax
	cmp esi,ebx
	ja Block20

 Block21:
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ebp-0x18]
	mov eax,dword ptr [ebp-0x28]
	push ecx
	mov ecx,dword ptr [ebp-0x20]
	push edi
	push edx
	push eax
	push ebx
	call CField::ShowMobHPTag
	jmp Block28

 Block22:
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	lea edx,[ebp-0x14]
	push 0x62B
	mov ebx,0xA
	push edx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [ebp-0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0xB
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x18]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push ecx
	call ZStrUtil::_Conv_0
	add esp,0xC
	push eax
	lea ecx,[ebp-0x14]
	call ZXString16::op_add_assign_t_0
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	push 0x258
	push 1
	push edx
	call CSoundMan::PlayBGM
	lea eax,[ebp-0x14]
	push eax
	lea ecx,[edi+0x28]
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block28

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block26:
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	fld qword ptr [__real_403e000000000000]
	push 0
	push 0
	push eax
	push edi
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble
	jmp Block28

 Block27:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov esi,eax
	call CWndMan::GetOrgWindow
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	push ebx
	push edi
	call CAnimationDisplayer::Effect_RewardRullet

 Block28:
	lea esp,[ebp-0x40]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CField_Tournament::AvatarInfo::AvatarInfo
__SUB_CLASS_THIS0(0012E8F0, __thiscall, 53809,  CField_Tournament::AvatarInfo, void) {
__asm {

 Block0:
	mov eax,ecx
	mov dword ptr [eax+0x104],0
	ret
}
}
// CField::ApplyUserLook
_SUB_EXCEPTION_HANDLER(12DA50)
__SUB_CLASS_THIS(0012DA50, __thiscall, 25058,  CField, void, CUser*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12DA50
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
	mov edi,dword ptr [esp+0x30]
	xor ebp,ebp
	cmp edi,ebp
	je Block14

 Block1:
	mov eax,dword ptr [ecx+0xD20]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block14

 Block2:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[ecx]

 Block3:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CField::UserLook>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block5

 Block4:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block5:
	mov dword ptr [esp+0x28],ebp
	cmp esi,ebp
	je Block7

 Block6:
	push edi
	mov ecx,esi
	call CField::UserLook::IsCondTrue
	test eax,eax
	jne Block13

 Block7:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebp
	je Block11

 Block8:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block9:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [esp+0x1C],ebp

 Block11:
	cmp dword ptr [esp+0x14],ebp
	jne Block3

 Block12:
	jmp Block14

 Block13:
	push edi
	mov ecx,esi
	call CField::UserLook::ForceLook
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CField::UserLook>::~ZRef<CField::UserLook>

 Block14:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CField::OnGroupMessage
_SUB_EXCEPTION_HANDLER(135490)
__SUB_CLASS_THIS(00135490, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135490
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x40],eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x64]
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebp,al
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	xor edi,edi
	cmp dword ptr [eax+0x24],edi
	jne Block2

 Block1:
	cmp ebp,edi
	je Block44

 Block2:
	cmp dword ptr [eax+0x44],edi
	jne Block4

 Block3:
	cmp ebp,2
	je Block44

 Block4:
	cmp dword ptr [eax+0x4C],edi
	jne Block6

 Block5:
	cmp ebp,3
	je Block44

 Block6:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x5C],edi
	cmp ebp,edi
	je Block10

 Block7:
	cmp ebp,2
	je Block10

 Block8:
	cmp ebp,3
	je Block10

 Block9:
	cmp ebp,6
	jne Block11

 Block10:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x24],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsInBlackList
	cmp eax,edi
	jne Block42

 Block11:
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	push 1
	push edi
	push 1
	push 0x400
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x6C],1
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer
	push 1
	push 0x400
	lea ecx,[esp+0x18]
	call ZXString<char>::GetBuffer
	mov esi,eax
	cmp byte ptr [esi],0
	je Block21

 Block12:
	mov edi,dword ptr [ZImports::_IsDBCSLeadByte]
	lea ecx,[ecx]

 Block13:
	movzx ecx,byte ptr [esi]
	push ecx
	call edi
	test eax,eax
	je Block15

 Block14:
	mov byte ptr [esi+1],0x20
	mov byte ptr [esi],0x20
	add esi,2
	jmp Block19

 Block15:
	mov al,byte ptr [esi]
	cmp al,0x20
	jl Block17

 Block16:
	cmp al,0x7E
	jle Block18

 Block17:
	mov byte ptr [esi],0x20

 Block18:
	inc esi

 Block19:
	cmp byte ptr [esi],0
	jne Block13

 Block20:
	xor edi,edi

 Block21:
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer
	push edi
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov dword ptr [esp+0x14],edi
	lea edx,[esp+0x20]
	push 0x72D
	push edx
	mov byte ptr [esp+0x64],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x6C],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x5C],2
	cmp eax,edi
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	xor eax,eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	push edi
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x54],eax
	mov word ptr [esp+0x58],ax
	mov byte ptr [esp+0x5A],al
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetFriendByName
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 1
	push edx
	call CConfig::IsBlockedFriend
	test eax,eax
	jne Block38

 Block24:
	cmp ebp,6
	ja Block33

 Block25:
	cmp EBP, 0
je Block27
cmp EBP, 1
je Block26
cmp EBP, 2
je Block28
cmp EBP, 3
je Block29
cmp EBP, 4
je Block33
cmp EBP, 5
je Block33
cmp EBP, 6
je Block30


 Block26:
	push 2
	lea eax,[esp+0x18]
	push eax
	jmp Block32

 Block27:
	push 3
	jmp Block31

 Block28:
	push 4
	lea edx,[esp+0x18]
	push edx
	jmp Block32

 Block29:
	push 5
	lea eax,[esp+0x18]
	push eax
	jmp Block32

 Block30:
	push 0x1A

 Block31:
	lea ecx,[esp+0x18]
	push ecx

 Block32:
	call CHATLOG_ADD
	add esp,8

 Block33:
	mov dword ptr [esp+0x1C],edi
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x400
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x68],4
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::GetSwindleWarning
	add esp,8
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	cmp esi,edi
	je Block36

 Block34:
	cmp ebp,1
	jne Block36

 Block35:
	lea eax,[esp+0x1C]
	push 8
	push eax
	call CHATLOG_ADD
	add esp,8

 Block36:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],2
	cmp eax,edi
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],1
	cmp eax,edi
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x5C],0
	cmp eax,edi
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,edi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	mov ecx,dword ptr [esp+0x40]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x50
	ret 4
}
}
// CField_Tournament::OnTournamentSetPrize
_SUB_EXCEPTION_HANDLER(1633A0)
__SUB_CLASS_THIS(001633A0, __thiscall, 53796,  CField_Tournament, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1633A0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x34]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	jne Block13

 Block1:
	cmp edi,ebp
	je Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x3A8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x18]
	push 0x3A9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],1
	mov ebx,2

 Block4:
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x38],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x2C],3
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov byte ptr [esp+0x2C],4
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[eax+0x2038]
	mov esi,eax
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block12

 Block11:
	cmp dword ptr [esi+0x209C],ebp
	je Block21

 Block12:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea edx,[esp+0x48]
	mov dword ptr [esp+0x34],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block21

 Block13:
	lea eax,[esp+0x34]
	push 0x3AA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],5
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov bl,7
	mov ecx,esi
	mov byte ptr [esp+0x2C],bl
	call CInPacket::Decode4
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov edi,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode4
	push eax
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov esi,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x34]
	push esi
	push edi
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea edx,[esp+0x48]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14
	mov byte ptr [esp+0x2C],6
	cmp esi,ebp
	je Block19

 Block18:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov byte ptr [esp+0x2C],5
	cmp edi,ebp
	je Block21

 Block20:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
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
// Field::SkillInfo::SetFieldType
__SUB_CLASS_THIS(00165380, __thiscall, 16509,  Field::SkillInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x28],eax
	ret 4
}
}
// CField_LimitedView::DrawViewrange
_SUB_EXCEPTION_HANDLER(154CA0)
__SUB_CLASS_THIS0(00154CA0, __thiscall, 143623,  CField_LimitedView, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_154CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov esi,dword ptr [eax+8]
	xor edi,edi
	mov dword ptr [esp+0x3C],esi
	cmp esi,edi
	je Block108

 Block1:
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],edi
	mov ecx,dword ptr [ebp+0xDA0]
	mov dword ptr [esp+0x7C],edi
	cmp ecx,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x7C],2
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov eax,dword ptr [ebp+0xDBC]
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block18

 Block8:
	lea eax,[esp+0x18]
	push eax
	call ZList<tagPOINT>::GetNext
	mov esi,dword ptr [eax]
	mov edi,dword ptr [eax+4]
	add esp,4
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block41

 Block9:
	mov ecx,dword ptr [ebp+0xDA8]
	mov byte ptr [esp+0x7C],3
	test ebx,ebx
	je Block2

 Block10:
	mov ebp,dword ptr [esp+0x44]
	mov edx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x64]
	push edi
	push esi
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push ebx
	call eax
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block12:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x7C],2
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	cmp dword ptr [esp+0x18],0
	mov ebp,dword ptr [esp+0x14]
	jne Block8

 Block17:
	mov esi,dword ptr [esp+0x3C]
	xor edi,edi

 Block18:
	lea ecx,[ebp+0xDB0]
	call ZList<tagPOINT>::RemoveAll
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x7C],4
	cmp ecx,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::Getcenter
	mov esi,dword ptr [ebp+0xDAC]
	mov byte ptr [esp+0x7C],5
	cmp esi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],edi
	call edx
	cmp eax,edi
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov esi,dword ptr [ebp+0xDAC]
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],edi
	call edx
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov ebx,dword ptr [esp+0x28]
	cmp ebx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block32:
	mov edi,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x18]
	test edi,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x30]
	push ecx
	push edi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	sub esi,dword ptr [esp+0x30]
	mov eax,dword ptr [ebx]
	sub esi,dword ptr [esp+0x20]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x30]
	push ecx
	add esi,0x200
	push ebx
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	mov esi,dword ptr [esp+0x30]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block40:
	sub esi,dword ptr [esp+0x18]
	lea eax,[esp+0x64]
	sub esi,dword ptr [esp+0x24]
	push eax
	add esi,0x1D4
	mov dword ptr [esp+0x4C],esi
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov edi,dword ptr [ebp+0xDAC]
	xor esi,esi
	mov byte ptr [esp+0x7C],6
	cmp edi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x30]
	push eax
	push edi
	mov dword ptr [esp+0x38],esi
	call ecx
	cmp eax,esi
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	mov edi,dword ptr [ebp+0xDAC]
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x3C],edx
	cmp edi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],esi
	call edx
	cmp eax,esi
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block50:
	mov edi,dword ptr [ebp+0xDAC]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x40],eax
	cmp edi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],esi
	call eax
	cmp eax,esi
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block54:
	mov esi,dword ptr [esp+0x14]
	mov edi,dword ptr [esi+0xDAC]
	mov ebp,dword ptr [esp+0x34]
	test edi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x38]
	push edx
	push edi
	mov dword ptr [esp+0x40],0
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [esi+0xDAC]
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x44]
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push 0
	push 0
	push ebp
	push edx
	push 0xFFFFFFFE
	push eax
	mov eax,dword ptr [esp+0x6C]
	push eax
	push edi
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x7C],5
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea ecx,[esi+0xDB0]
	call ZList<tagPOINT>::AddTail_
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],ecx
	cmp dword ptr [esi+0xDC4],0
	je Block105

 Block65:
	mov edx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [edx+0x30]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block105

 Block66:
	jmp Block68

 Block68:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x10]
	add esp,4
	test ecx,ecx
	je Block104

 Block69:
	cmp dword ptr [ecx+0x638],0
	jne Block104

 Block70:
	lea edx,[esp+0x40]
	push edx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	xor ebp,ebp
	cmp ebx,eax
	je Block75

 Block71:
	mov esi,ebx
	mov ebx,eax
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block73:
	cmp esi,ebp
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block75:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	cmp ebx,ebp
	je Block2

 Block78:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x38]
	push edx
	push ebx
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block80

 Block79:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block80:
	mov edi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	mov esi,dword ptr [esp+0x38]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],ebp
	call eax
	cmp eax,ebp
	jge Block82

 Block81:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block82:
	sub esi,dword ptr [esp+0x34]
	mov ecx,dword ptr [ebx]
	sub esi,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x38]
	push edx
	add esi,0x200
	push ebx
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block84

 Block83:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block84:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x28]
	mov esi,dword ptr [esp+0x38]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],ebp
	call eax
	cmp eax,ebp
	jge Block86

 Block85:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	sub esi,dword ptr [esp+0x34]
	lea ecx,[esp+0x64]
	sub esi,dword ptr [esp+0x24]
	push ecx
	add esi,0x1D4
	mov dword ptr [esp+0x4C],esi
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block41

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0xDAC]
	mov byte ptr [esp+0x7C],7
	cmp edi,ebp
	je Block2

 Block88:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x38]
	push edx
	push edi
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block90

 Block89:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block90:
	mov ebp,dword ptr [esp+0x14]
	mov edi,dword ptr [ebp+0xDAC]
	mov ebx,dword ptr [esp+0x38]
	test edi,edi
	je Block2

 Block91:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],0
	call eax
	test eax,eax
	jge Block93

 Block92:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block93:
	mov edi,dword ptr [ebp+0xDAC]
	mov esi,dword ptr [esp+0x34]
	test edi,edi
	je Block2

 Block94:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x30]
	push edx
	push edi
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block96

 Block95:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block96:
	mov ecx,dword ptr [esp+0x14]
	mov edi,dword ptr [ecx+0xDAC]
	mov ebp,dword ptr [esp+0x30]
	test edi,edi
	je Block2

 Block97:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x3C]
	push eax
	push edi
	mov dword ptr [esp+0x44],0
	call ecx
	test eax,eax
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block99:
	mov ecx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0xDAC]
	lea edx,[esp+0x64]
	push edx
	push ebx
	mov ebx,dword ptr [esp+0x4C]
	push esi
	mov esi,dword ptr [esp+0x54]
	push 0
	push 0
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push 0xFFFFFFFE
	push eax
	push esi
	push ebx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x7C],5
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	lea ecx,[edi+0xDB0]
	call ZList<tagPOINT>::AddTail_
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],esi

 Block104:
	cmp dword ptr [esp+0x18],0
	jne Block68

 Block105:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x80],4
	call edx
	mov byte ptr [esp+0x7C],2
	test ebx,ebx
	je Block107

 Block106:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block107:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call eax

 Block108:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret
}
}
// CField_GuildBoss::CField_GuildBoss
__SUB_CLASS_THIS0(0013E980, __thiscall, 143702,  CField_GuildBoss, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_GuildBoss::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_GuildBoss::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_GuildBoss::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_GuildBoss::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	int 3// TODO: 	mov dword ptr [esi+0xDA8],offset CHealer::`vftable'
	mov dword ptr [esi+0xDB4],eax
	mov dword ptr [esi+0xDB8],eax
	mov dword ptr [esi+0xDC0],eax
	mov dword ptr [esi+0xDC4],eax
	int 3// TODO: 	mov dword ptr [esi+0xDBC],offset CPulley::`vftable'
	mov dword ptr [esi+0xDDC],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField::SendKickGuildMsg
_SUB_EXCEPTION_HANDLER(134CB0)
__SUB_CLASS_THIS(00134CB0, __thiscall, 24979,  CField, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	cmp dword ptr [esi+0x37C8],ebx
	jne Block3

 Block1:
	lea eax,[esp+0x10]
	push 0x16B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x30],1
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block22

 Block2:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd
	jmp Block22

 Block3:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CWvsContext::GetGuildMemberIDByName
	mov edi,eax
	cmp edi,ebx
	jne Block10

 Block4:
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0x14]
	push 0x171
	push eax
	mov byte ptr [esp+0x38],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov esi,dword ptr [esp+0x10]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block8

 Block7:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block8:
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block25

 Block9:
	add esi,0xFFFFFFF4
	push esi
	jmp Block24

 Block10:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [eax+0x19E8]
	push eax
	mov ecx,esi
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	jne Block16

 Block11:
	push edi
	mov ecx,esi
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	jne Block16

 Block12:
	mov dword ptr [esp+0x10],ebx
	lea ecx,[esp+0x14]
	push 0x172
	push ecx
	mov byte ptr [esp+0x38],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x38],5
	call ZXString<char>::Format
	mov byte ptr [esp+0x38],4

 Block13:
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea eax,[esp+0x10]
	push 0xC
	push eax
	call CHATLOG_ADD
	add esp,8
	jmp Block22

 Block16:
	push edi
	mov ecx,esi
	call CWvsContext::GetGuildMemberGrade
	mov dword ptr [esp+0x10],ebx
	cmp eax,1
	jne Block18

 Block17:
	lea ecx,[esp+0x14]
	push 0x173
	push ecx
	mov byte ptr [esp+0x38],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x38],7
	call ZXString<char>::Format
	mov byte ptr [esp+0x38],6
	jmp Block13

 Block18:
	lea ecx,[esp+0x14]
	push 0x163
	push ecx
	mov byte ptr [esp+0x38],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x3C],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x30],8
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block22

 Block21:
	push 0x95
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],0xA
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],8
	call ZArray<unsigned char>::RemoveAll

 Block22:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFF4
	push eax

 Block24:
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField::OnSetQuestTime
__SUB_CLASS_THIS(0012B790, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x14
	push ebx
	push esi
	mov esi,dword ptr [ebp+8]
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebx,al
	test ebx,ebx
	jle Block3

 Block1:
	lea ecx,[ecx]

 Block2:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	push 8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	push 8
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edx
	push edi
	call CQuestMan::SetQuestTime
	sub ebx,1
	jne Block2

 Block3:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// _ZtlSecureFuse_double_
__SUB(0012A210, __cdecl, 144181,  double, const double*, uint32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[edi+8]
	lea ebx,[esp+0x10]
	sub edi,ecx
	mov esi,0xBAADF00D
	sub ebx,ecx
	mov dword ptr [esp+0x1C],2

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edi+ecx]
	mov ebp,edx
	rol ebp,5
	xor ebp,eax
	xor eax,esi
	ror eax,5
	mov dword ptr [ebx+ecx],ebp
	add eax,edx
	add ecx,4
	sub dword ptr [esp+0x1C],1
	mov esi,eax
	jne Block1

 Block2:
	cmp esi,dword ptr [esp+0x20]
	pop edi
	pop esi
	pop ebp
	pop ebx
	je Block4

 Block3:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],5
	call _CxxThrowException

 Block4:
	fld qword ptr [esp]
	add esp,8
	ret
}
}
// CField_LimitedView::Update
__SUB_CLASS_THIS0(00155F80, __thiscall, 143623,  CField_LimitedView, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::Update
	mov ecx,esi
	pop esi
	jmp  CField_LimitedView::DrawViewrange
}
}
// CField::OnDestroyClock
__SUB_CLASS_THIS(0012A7C0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x208]
	test ecx,ecx
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	ret 4
}
}
// CField::IsSkillForbiden
__SUB_CLASS_THIS(0012A320, __thiscall, 25057,  CField, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	add ecx,0xD28
	call Field::SkillInfo::IsSkill
	neg eax
	sbb eax,eax
	neg eax
	ret 4
}
}
// CSnowBall::CSnowBall
__SUB_CLASS_THIS0(0012E830, __thiscall, 143084,  CSnowBall, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CSnowBall::`vftable'
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+0x30],ecx
	mov dword ptr [eax+0x34],ecx
	ret
}
}
// CField::OnVega
__SUB_CLASS_THIS(0012A400, __thiscall, 25045,  CField, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x248],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0x248]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x3C]
	jmp eax

 Block2:
	ret 8
}
}
// CField::GetFieldKey
__SUB_CLASS_THIS0(0012A1E0, __thiscall, 24994,  CField, unsigned char) {
__asm {

 Block0:
	mov al,byte ptr [ecx+0x168]
	ret
}
}
// CField::DrawFearEffect
_SUB_EXCEPTION_HANDLER(13A470)
__SUB_CLASS_THIS0(0013A470, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13A470
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
	mov edi,ecx
	xor ebp,ebp
	cmp dword ptr [edi+0xD98],ebp
	je Block32

 Block1:
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov esi,dword ptr [eax+8]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block32

 Block2:
	cmp dword ptr [edi+0xD94],ebp
	jne Block8

 Block3:
	mov ecx,dword ptr [edi+0xD74]
	cmp ecx,ebp
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	push 0xFF000000
	push 0x300
	push 0x400
	push ebp
	push ebp
	call IWzCanvas::DrawRectangle
	mov ecx,dword ptr [edi+0xD78]
	cmp ecx,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	push 0xFF000000
	push 0x13C
	push 0x13C
	push ebp
	push ebp
	call IWzCanvas::DrawRectangle
	mov dword ptr [edi+0xD94],1

 Block8:
	cmp dword ptr [edi+0xD70],ebp
	lea ecx,[edi+0xD70]
	sete al
	test al,al
	sete al
	test al,al
	je Block32

 Block9:
	cmp dword ptr [edi+0xD78],ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block32

 Block10:
	cmp dword ptr [edi+0xD7C],ebp
	lea ebx,[edi+0xD7C]
	sete al
	test al,al
	sete al
	test al,al
	je Block32

 Block11:
	mov edx,3
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],ebp
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x68],ebp
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x60],2
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi+0xD8C]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block22

 Block12:
	jmp Block14

 Block14:
	lea eax,[esp+0x14]
	push eax
	call ZList<tagPOINT>::GetNext
	mov ebp,dword ptr [eax]
	mov esi,dword ptr [eax+4]
	add esp,4
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block15:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi+0xD78]
	mov byte ptr [esp+0x60],3
	test ecx,ecx
	je Block4

 Block16:
	lea edx,[esp+0x20]
	push edx
	push eax
	push esi
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x60],2
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp dword ptr [esp+0x14],0
	jne Block14

 Block21:
	mov esi,dword ptr [esp+0x1C]

 Block22:
	lea ecx,[edi+0xD80]
	mov dword ptr [esp+0x34],ecx
	call ZList<tagPOINT>::RemoveAll
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],4
	test ecx,ecx
	jne Block25

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2D::Getcenter
	mov ecx,ebx
	mov byte ptr [esp+0x60],5
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcx
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcy
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],eax
	test edi,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,ebp
	call IWzShape2D::Getx
	mov esi,0x200
	sub esi,dword ptr [esp+0x20]
	mov ecx,edi
	sub esi,eax
	call IWzShape2D::Getx
	add eax,esi
	mov ecx,ebp
	mov dword ptr [esp+0x20],eax
	call IWzShape2D::Gety
	mov esi,0x1D4
	sub esi,dword ptr [esp+0x30]
	mov ecx,edi
	sub esi,eax
	call IWzShape2D::Gety
	add eax,esi
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x28],eax
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x60],6
	mov dword ptr [esp+0x30],ecx
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x48]
	push edx
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push 0xFFFFFFFE
	push eax
	push ecx
	push edx
	mov ecx,esi
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x60],5
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x34]
	lea eax,[esp+0x20]
	push eax
	call ZList<tagPOINT>::AddTail_Position
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x64],4
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x64],2
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// CField::PROPERTY::~PROPERTY
__SUB_CLASS_THIS0(0012A640, __thiscall, 25075,  CField::PROPERTY, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	pop esi
	ret
}
}
// CHealer::Init
_SUB_EXCEPTION_HANDLER(151690)
__SUB_CLASS_THIS(00151690, __thiscall, 143717,  CHealer, void, long, long, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151690
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
	mov ebx,ecx
	lea eax,[esp+0x10]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebx+0xC]
	push esi
	push eax
	mov dword ptr [esp+0x28],0
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [esi]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x40]
	push edx
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	push 0
	push 0xFF
	push 0xC0015F90
	push ecx
	mov dword ptr [esp+0x38],esp
	mov eax,esp
	push 0
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x48]
	push 0
	push ecx
	lea edx,[esp+0x4C]
	push edx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x10]
	add esp,0x28
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [ebx+0x10],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CField_GuildBoss::OnHealerMove
__SUB_CLASS_THIS(00151510, __thiscall, 143708,  CField_GuildBoss, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	call CInPacket::Decode2
	movsx edi,ax
	mov eax,edi
	sub eax,dword ptr [esi+0xDA0]
	lea ecx,[esi+0xDA8]
	push eax
	call CHealer::Move
	mov dword ptr [esi+0xDA0],edi
	pop edi
	pop esi
	ret 4
}
}
// CField::FieldFactory
_SUB_EXCEPTION_HANDLER(13F220)
// 53F9B8
static uint8_t _SUB_13F220_LOOKUP_TABLE_0[82] = {
0, 1, 2, 3, 31, 31, 31, 4, 5, 6, 7, 31, 8, 9, 10, 11, 
12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 31, 25, 26, 
31, 27, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 28, 29, 31, 31, 31, 
31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 30, 
};
__SUB(0013F220, __cdecl, 24950,  ZRef<CField>, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13F220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov eax,dword ptr [ebp+0xC]
	xor edi,edi
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x14],edi
	push ecx
	mov dword ptr [ebp-0x14],edi
	mov dword ptr [ebp-4],edi
	call CField::GetFieldProp
	add esp,8
	mov bl,1
	push edi
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x6EA
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x30],8
	mov esi,eax
	mov byte ptr [ebp-4],bl
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [ebp-0x20]
	cmp eax,edi
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block13

 Block13:
	cmp esi,0x3E9
	jg Block81

 Block14:
	je Block79

 Block15:
	lea eax,[esi-1]
	cmp eax,0x51
	ja Block81

 Block16:
	movzx eax,byte ptr [eax+_SUB_13F220_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block17
cmp EAX, 1
je Block19
cmp EAX, 2
je Block21
cmp EAX, 3
je Block23
cmp EAX, 4
je Block25
cmp EAX, 5
je Block27
cmp EAX, 6
je Block29
cmp EAX, 7
je Block31
cmp EAX, 8
je Block33
cmp EAX, 9
je Block35
cmp EAX, 10
je Block43
cmp EAX, 11
je Block45
cmp EAX, 12
je Block47
cmp EAX, 13
je Block49
cmp EAX, 14
je Block51
cmp EAX, 15
je Block53
cmp EAX, 16
je Block55
cmp EAX, 17
je Block57
cmp EAX, 18
je Block59
cmp EAX, 19
je Block61
cmp EAX, 20
je Block63
cmp EAX, 21
je Block65
cmp EAX, 22
je Block67
cmp EAX, 23
je Block69
cmp EAX, 24
je Block71
cmp EAX, 25
je Block73
cmp EAX, 26
je Block75
cmp EAX, 27
je Block77
cmp EAX, 28
je Block37
cmp EAX, 29
je Block39
cmp EAX, 30
je Block41
cmp EAX, 31
je Block81


 Block17:
	push 0xE88
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],5
	cmp eax,edi
	je Block86

 Block18:
	mov ecx,eax
	call CField_SnowBall::_ctor_default
	jmp Block83

 Block19:
	push 0xDF0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],6
	cmp eax,edi
	je Block86

 Block20:
	mov ecx,eax
	call CField_ContiMove::_ctor_default
	jmp Block83

 Block21:
	push 0x2EA8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],7
	cmp eax,edi
	je Block86

 Block22:
	mov ecx,eax
	call CField_Tournament::_ctor_default
	jmp Block83

 Block23:
	push 0x1190
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],8
	cmp eax,edi
	je Block86

 Block24:
	mov ecx,eax
	call CField_Coconut::_ctor_default
	jmp Block83

 Block25:
	push 0xDE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],9
	cmp eax,edi
	je Block86

 Block26:
	mov ecx,eax
	call CField_GuildBoss::_ctor_default
	jmp Block83

 Block27:
	push 0xDC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xA
	cmp eax,edi
	je Block86

 Block28:
	mov ecx,eax
	call CField_LimitedView::_ctor_default
	jmp Block83

 Block29:
	push 0xDB8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xB
	cmp eax,edi
	je Block86

 Block30:
	mov ecx,eax
	call CField_MonsterCarnival::_ctor_default
	jmp Block83

 Block31:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xC
	cmp eax,edi
	je Block86

 Block32:
	mov ecx,eax
	call CField_MonsterCarnivalRevive::_ctor_default
	jmp Block83

 Block33:
	push 0xDB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xD
	cmp eax,edi
	je Block86

 Block34:
	mov ecx,eax
	call CField_AriantArena::_ctor_default
	jmp Block83

 Block35:
	push 0xE08
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xE
	cmp eax,edi
	je Block86

 Block36:
	mov ecx,eax
	call CField_Dojang::_ctor_default
	jmp Block83

 Block37:
	push 0xDC0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0xF
	cmp eax,edi
	je Block86

 Block38:
	mov ecx,eax
	call CField_Wedding::_ctor_default
	jmp Block83

 Block39:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x10
	cmp eax,edi
	je Block86

 Block40:
	mov ecx,eax
	call CField_WeddingPhoto::_ctor_default
	jmp Block83

 Block41:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x12
	cmp eax,edi
	je Block86

 Block42:
	mov ecx,eax
	call CField_Tutorial::_ctor_default
	jmp Block83

 Block43:
	push 0xDC0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x13
	cmp eax,edi
	je Block86

 Block44:
	mov ecx,eax
	call CField_MonsterCarnivalS2_Game::_ctor_default
	jmp Block83

 Block45:
	push 0xDA8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x14
	cmp eax,edi
	je Block86

 Block46:
	mov ecx,eax
	call CField_MonsterCarnivalWaitingRoom::_ctor_default
	jmp Block83

 Block47:
	push 0xDD8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x15
	cmp eax,edi
	je Block86

 Block48:
	mov ecx,eax
	call CField_CookieHouse::_ctor_default
	jmp Block83

 Block49:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x16
	cmp eax,edi
	je Block86

 Block50:
	mov ecx,eax
	call CField_Balrog::_ctor_default
	jmp Block83

 Block51:
	push 0xDB8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x17
	cmp eax,edi
	je Block86

 Block52:
	mov ecx,eax
	call CField_Battlefield::_ctor_default
	jmp Block83

 Block53:
	push 0xDA8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x18
	cmp eax,edi
	je Block86

 Block54:
	mov ecx,eax
	call CField_SpaceGAGA::_ctor_default
	jmp Block83

 Block55:
	push 0xDA8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x19
	cmp eax,edi
	je Block86

 Block56:
	mov ecx,eax
	call CField_Witchtower::_ctor_default
	jmp Block83

 Block57:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1A
	cmp eax,edi
	je Block86

 Block58:
	mov ecx,eax
	call CField_AranTutorial::_ctor_default
	jmp Block83

 Block59:
	push 0xE20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1B
	cmp eax,edi
	je Block86

 Block60:
	mov ecx,eax
	call CField_Massacre::_ctor_default
	jmp Block83

 Block61:
	push 0xDB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1C
	cmp eax,edi
	je Block86

 Block62:
	mov ecx,eax
	call CField_MassacreResult::_ctor_default
	jmp Block83

 Block63:
	push 0xDD0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1D
	cmp eax,edi
	je Block86

 Block64:
	mov ecx,eax
	call CField_PartyRaid::_ctor_default
	jmp Block83

 Block65:
	push 0xDD0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1E
	cmp eax,edi
	je Block86

 Block66:
	mov ecx,eax
	call CField_PartyRaidBoss::_ctor_default
	jmp Block83

 Block67:
	push 0xDC0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x1F
	cmp eax,edi
	je Block86

 Block68:
	mov ecx,eax
	call CField_PartyRaidResult::_ctor_default
	jmp Block83

 Block69:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x20
	cmp eax,edi
	je Block86

 Block70:
	mov ecx,eax
	call CField_NoDragon::_ctor_default
	jmp Block83

 Block71:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x21
	cmp eax,edi
	je Block86

 Block72:
	mov ecx,eax
	call CField_DynamicFoothold::_ctor_default
	jmp Block83

 Block73:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x22
	cmp eax,edi
	je Block86

 Block74:
	mov ecx,eax
	call CField_EscortResult::_ctor_default
	jmp Block83

 Block75:
	push 0xDE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x23
	cmp eax,edi
	je Block86

 Block76:
	mov ecx,eax
	call CField_HuntingAdballoon::_ctor_default
	jmp Block83

 Block77:
	push 0xDB8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x24
	cmp eax,edi
	je Block86

 Block78:
	mov ecx,eax
	call CField_KillCount::_ctor_default
	jmp Block83

 Block79:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x11
	cmp eax,edi
	je Block86

 Block80:
	mov ecx,eax
	call CField_ShowaBath::_ctor_default
	jmp Block83

 Block81:
	push 0xDA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-4],0x25
	cmp eax,edi
	je Block86

 Block82:
	mov ecx,eax
	call CField::_ctor_default

 Block83:
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xC
	cmp eax,edi
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	jmp Block87

 Block86:
	xor eax,eax

 Block87:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi+4],eax
	cmp eax,edi
	je Block89

 Block88:
	add eax,0x10
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block89:
	mov eax,esi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CField::OnPartyValue
_SUB_EXCEPTION_HANDLER(13CC40)
__SUB_CLASS_THIS(0013CC40, __thiscall, 24972,  CField, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13CC40
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CField::SendIncMaxMemberNumMsg
_SUB_EXCEPTION_HANDLER(12EFA0)
__SUB_CLASS_THIS(0012EFA0, __thiscall, 24980,  CField, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12EFA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	call CBattleRecordMan::SetForcedOffCalc

 Block2:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [esi+0x20B8],0
	jne Block15

 Block3:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block15

 Block4:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0x1F4
	jl Block15

 Block5:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	je Block15

 Block6:
	lea ecx,[esi+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block10

 Block7:
	mov eax,dword ptr [esi+0x209C]
	test eax,eax
	jne Block10

 Block8:
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp dword ptr [edx+0x63C],eax
	jle Block10

 Block9:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x116
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block10:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block14

 Block11:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block14

 Block12:
	test byte ptr [edi+0x178],0x10
	je Block14

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x122
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block14:
	push 0x2A
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0x20BC],eax
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block15:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CField::~CField
_SUB_EXCEPTION_HANDLER(13CCB0)
__SUB_CLASS_THIS0(0013CCB0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13CCB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CField::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xD80]
	mov dword ptr [esp+0x18],0x1B
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<tagPOINT>::`vftable'
	call ZList<tagPOINT>::RemoveAll
	mov eax,dword ptr [esi+0xD7C]
	mov byte ptr [esp+0x18],0x1A
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xD78]
	mov byte ptr [esp+0x18],0x19
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xD74]
	mov byte ptr [esp+0x18],0x18
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xD70]
	mov byte ptr [esp+0x18],0x17
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xD54]
	mov byte ptr [esp+0x18],0x16
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xD28]
	mov byte ptr [esp+0x18],0x15
	call Field::SkillInfo::~SkillInfo
	lea ecx,[esi+0xD14]
	mov byte ptr [esp+0x18],0x14
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CField::UserLook>>::`vftable'
	call ZList<ZRef<CField::UserLook>>::RemoveAll
	lea ecx,[esi+0xD10]
	mov byte ptr [esp+0x18],0x13
	call ZArray<tagRECT>::RemoveAll
	mov eax,dword ptr [esi+0xD0C]
	mov byte ptr [esp+0x18],0x12
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea ecx,[esi+0x2C4]
	mov byte ptr [esp+0x18],0x11
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x2BC]
	mov byte ptr [esp+0x18],0x10
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0x2A8]
	mov byte ptr [esp+0x18],0xF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea ecx,[esi+0x280]
	mov byte ptr [esp+0x18],0xE
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x26C]
	mov byte ptr [esp+0x18],0xD
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<DYNAMIC_OBJ_INFO>>::`vftable'
	call ZList<ZRef<DYNAMIC_OBJ_INFO>>::RemoveAll
	lea ecx,[esi+0x258]
	mov byte ptr [esp+0x18],0xC
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CField::WEATHERMSGINFO>::`vftable'
	call ZList<CField::WEATHERMSGINFO>::RemoveAll
	lea ecx,[esi+0x254]
	mov byte ptr [esp+0x18],0xB
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x240]
	mov byte ptr [esp+0x18],0xA
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x224]
	mov byte ptr [esp+0x18],9
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	cmp dword ptr [esi+0x208],0
	lea edi,[esi+0x204]
	mov byte ptr [esp+0x18],8
	je Block20

 Block19:
	push 0
	mov ecx,edi
	call ZRef<CClock>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block20:
	lea ecx,[esi+0x200]
	mov byte ptr [esp+0x18],7
	call ZArray<ZRef<CClock>>::RemoveAll
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 0x12
	push 4
	lea eax,[esi+0x1B8]
	push eax
	mov byte ptr [esp+0x28],6
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x1B4]
	mov byte ptr [esp+0x18],5
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[esi+0x1B0]
	mov byte ptr [esp+0x18],4
	call ZArray<tagPOINT>::RemoveAll
	mov eax,dword ptr [esi+0x1AC]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	lea ecx,[esi+0x1A8]
	mov byte ptr [esp+0x18],2
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x174]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block24

 Block23:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block24:
	lea ecx,[esi+0x148]
	mov byte ptr [esp+0x18],0
	call CToolTipHelper::~CToolTipHelper
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CMapLoadable::~CMapLoadable
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CField::GetMapSpecificEffectUOL
__SUB_CLASS_THIS0(004EAFC0, __thiscall, 25000,  CField, ZXString16) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x1AC
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString16::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CField::OnTownPortalChanged
_SUB_EXCEPTION_HANDLER(1381F0)
__SUB_CLASS_THIS(001381F0, __thiscall, 25006,  CField, void, int32_t, const PARTYDATA&, const PARTYDATA::TOWNPORTAL&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1381F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x190
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1A4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [edi+0x1B4]
	test eax,eax
	je Block49

 Block1:
	cmp dword ptr [eax-4],0
	je Block49

 Block2:
	cmp dword ptr [esp+0x1B4],0
	jne Block50

 Block3:
	mov eax,dword ptr [esp+0x1BC]
	mov esi,dword ptr [eax]
	lea ecx,[edi+0x16C]
	call TSecType<unsigned long>::GetData
	xor ecx,ecx
	cmp esi,eax
	sete cl
	mov eax,ecx
	test eax,eax
	jne Block25

 Block4:
	cmp dword ptr [edi+0x1B8],ecx
	lea eax,[edi+0x1B8]
	sete al
	test al,al
	sete al
	test al,al
	je Block41

 Block5:
	cmp dword ptr [esp+0x1C0],ecx
	je Block19

 Block6:
	lea eax,[edi+0x1B8]
	xor ebp,ebp
	mov dword ptr [esp+0x14],eax
	or ebx,0xFFFFFFFF

 Block7:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block9:
	xor ecx,ecx
	cmp esi,ecx
	sete al
	mov dword ptr [esp+0x1AC],ecx
	test al,al
	je Block12

 Block10:
	mov dword ptr [esp+0x1AC],ebx
	cmp esi,ecx
	je Block18

 Block11:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block18

 Block12:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],ecx
	mov byte ptr [esp+0x1AC],1
	cmp esi,ecx
	je Block39

 Block13:
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],0xFFFFFFFE
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1B4],4
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x1AC],3
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xC4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0x1B0],5
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],0
	mov ecx,eax
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],ebx
	mov edx,eax
	mov word ptr [esp+0x80],dx
	mov dword ptr [esp+0x88],0x3E8
	mov edi,dword ptr [esp+0x24]
	lea eax,[esp+0xC0]
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	push edi
	lea edx,[esp+0xE8]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1C8],9
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0xD0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x80]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC0]
	mov byte ptr [esp+0x1AC],3
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xA4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0x1B0],0xA
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0xA0]
	push eax
	lea ecx,[esp+0x94]
	push ecx
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x1B8],0xB
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x90]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0x1AC],3
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x40],esp
	push esi
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0x1AC],0
	test edi,edi
	je Block17

 Block16:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x1B0],ebx
	call ecx
	mov edi,dword ptr [esp+0x18]

 Block18:
	mov eax,dword ptr [esp+0x14]
	inc ebp
	add eax,4
	cmp ebp,3
	mov dword ptr [esp+0x14],eax
	jl Block7

 Block19:
	mov eax,dword ptr [edi+0x1B8]
	test eax,eax
	je Block21

 Block20:
	mov dword ptr [edi+0x1B8],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	mov eax,dword ptr [edi+0x1BC]
	test eax,eax
	je Block23

 Block22:
	mov dword ptr [edi+0x1BC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [edi+0x1C0]
	test eax,eax
	je Block41

 Block24:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x1C0],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block41

 Block25:
	cmp dword ptr [edi+0x1B8],0
	lea ebx,[edi+0x1B8]
	sete al
	test al,al
	je Block41

 Block26:
	push 0
	lea ecx,[esp+0xE4]
	push ecx
	mov ecx,edi
	call CField::GetTownPortalPos
	mov edi,dword ptr [eax]
	mov ebp,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push 1
	push 0x7FFFFFFF
	lea edx,[esp+0x24]
	push edx
	lea eax,[ebp-5]
	push eax
	push edi
	mov dword ptr [esp+0x30],0
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	mov esi,eax
	test esi,esi
	jne Block28

 Block27:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push ebp
	push edi
	call CWvsPhysicalSpace2D::GetFootholdClosest
	mov esi,eax
	mov dword ptr [esp+0x1C],ebp

 Block28:
	mov eax,dword ptr [esi+0x2C]
	imul eax,0x7530
	push 0
	push 0xFF
	sub eax,0x3FFFB1DF
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C8],0xC
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],0
	lea edx,[esp+0x30]
	push 0xAC1
	push edx
	mov byte ptr [esp+0x1D0],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C8],0xE
	push 0
	push eax
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x1D4],0xF
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esp+0x14]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x1AC],ebp
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esi+0x2C]
	imul eax,0x7530
	push 0
	push 0xFF
	sub eax,0x3FFFB1E0
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x2C]
	push eax
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C8],0x10
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],0
	lea ecx,[esp+0x30]
	push 0xAC2
	push ecx
	mov byte ptr [esp+0x1D0],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C8],0x12
	push 0
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x1D4],0x13
	call CAnimationDisplayer::LoadLayer_1
	mov esi,dword ptr [esp+0x40]
	add esp,0x28
	push eax
	lea ecx,[esi+0x1BC]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1AC],ebp
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esi+0x1C0]
	test eax,eax
	je Block38

 Block37:
	mov dword ptr [esi+0x1C0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x1B0],0x14
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x1AC],0x15
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x54]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x1AC],ebp
	call Ztl_variant_t::~Ztl_variant_t

 Block41:
	mov esi,dword ptr [esp+0x18]
	add esi,0x1C8
	mov edi,5
	xor ebx,ebx

 Block42:
	mov eax,dword ptr [esi-4]
	cmp eax,ebx
	je Block44

 Block43:
	mov dword ptr [esi-4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block46

 Block45:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block48

 Block47:
	mov dword ptr [esi+4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	add esi,0xC
	sub edi,1
	jne Block42

 Block49:
	mov ecx,dword ptr [esp+0x1A4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x19C
	ret 0x10

 Block50:
	add edi,0x16C
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0xF0],edi
	mov ebp,ecx
	jmp Block54

 Block53:
	mov ebp,dword ptr [esp+0x18]

 Block54:
	mov eax,dword ptr [esp+0x1B8]
	mov ebx,dword ptr [esp+0x28]
	cmp dword ptr [eax+ebx*4],0
	mov edi,1
	je Block56

 Block55:
	cmp dword ptr [eax+ebx*4+0xB2],0x3B9AC9FF
	jne Block57

 Block56:
	xor edi,edi

 Block57:
	lea ecx,[ebx+ebx*4]
	mov esi,dword ptr [eax+ecx*4+0xCA]
	mov ecx,dword ptr [esp+0xF0]
	call TSecType<unsigned long>::GetData
	cmp esi,eax
	jne Block59

 Block58:
	test edi,edi
	jne Block122

 Block59:
	lea edx,[ebx+ebx*2]
	lea ebp,[ebp+edx*4]
	cmp dword ptr [ebp+0x1B8],0
	lea ecx,[ebp+0x1B8]
	sete al
	test al,al
	sete al
	mov dword ptr [esp+0x1C],ebp
	test al,al
	je Block215

 Block60:
	xor ebx,ebx
	cmp dword ptr [esp+0x1C0],ebx
	je Block115

 Block61:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ecx

 Block62:
	mov esi,dword ptr [ecx]
	mov edi,8
	mov dword ptr [esp+0x4C],esi
	cmp esi,ebx
	je Block64

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block64:
	mov edx,3
	mov dword ptr [esp+0x1AC],0x16
	mov word ptr [esp+0x10C],dx
	mov dword ptr [esp+0x114],ebx
	mov byte ptr [esp+0x1AC],0x17
	cmp esi,ebx
	je Block39

 Block65:
	lea eax,[esp+0x10C]
	push eax
	lea ecx,[esp+0x104]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0x1AC],0x19
	cmp word ptr [esp+0x10C],di
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x114]
	xor edx,edx
	mov word ptr [esp+0x10C],dx
	cmp eax,ebx
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov ecx,3
	mov word ptr [esp+0x17C],cx
	mov dword ptr [esp+0x184],0xFFFFFFFE
	lea edx,[esp+0x17C]
	push edx
	lea eax,[esp+0xFC]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x1B4],0x1A
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0xF8]
	cmp eax,ebx
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov byte ptr [esp+0x1AC],0x19
	cmp word ptr [esp+0x17C],di
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x17C],ax
	mov eax,dword ptr [esp+0x184]
	cmp eax,ebx
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	lea edx,[esp+0x11C]
	push edx
	call ebp
	lea eax,[esp+0x11C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block76:
	lea ecx,[esp+0x18C]
	push ecx
	mov byte ptr [esp+0x1B0],0x1B
	call ebp
	lea edx,[esp+0x18C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block77:
	mov eax,3
	mov word ptr [esp+0x14C],ax
	mov dword ptr [esp+0x154],ebx
	mov ecx,eax
	mov word ptr [esp+0x16C],cx
	mov dword ptr [esp+0x174],0xFFFFFFFF
	mov edx,eax
	mov word ptr [esp+0x12C],dx
	mov dword ptr [esp+0x134],0x3E8
	mov edi,dword ptr [esp+0x100]
	lea eax,[esp+0x11C]
	push eax
	lea ecx,[esp+0x190]
	push ecx
	lea edx,[esp+0x154]
	push edx
	lea eax,[esp+0x178]
	push eax
	lea ecx,[esp+0x13C]
	push ecx
	push edi
	lea edx,[esp+0x68]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1C8],0x1F
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x50],8
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp word ptr [esp+0x12C],8
	mov byte ptr [esp+0x1AC],0x1E
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x134]
	xor edx,edx
	mov word ptr [esp+0x12C],dx
	cmp eax,ebx
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[esp+0x12C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	cmp word ptr [esp+0x16C],8
	mov byte ptr [esp+0x1AC],0x1D
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x174]
	xor ecx,ecx
	mov word ptr [esp+0x16C],cx
	cmp eax,ebx
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x16C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0x14C],8
	mov byte ptr [esp+0x1AC],0x1C
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x14C],ax
	mov eax,dword ptr [esp+0x154]
	cmp eax,ebx
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x14C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	cmp word ptr [esp+0x18C],8
	mov byte ptr [esp+0x1AC],0x1B
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x194]
	xor edx,edx
	mov word ptr [esp+0x18C],dx
	cmp eax,ebx
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[esp+0x18C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	cmp word ptr [esp+0x11C],8
	mov byte ptr [esp+0x1AC],0x19
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x124]
	xor ecx,ecx
	mov word ptr [esp+0x11C],cx
	cmp eax,ebx
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x11C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	lea eax,[esp+0x15C]
	push eax
	call ebp
	lea ecx,[esp+0x15C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block102:
	lea edx,[esp+0x13C]
	push edx
	mov byte ptr [esp+0x1B0],0x20
	call ebp
	lea eax,[esp+0x13C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block103:
	lea ecx,[esp+0x15C]
	push ecx
	lea edx,[esp+0x140]
	push edx
	push ebx
	mov ecx,esi
	mov byte ptr [esp+0x1B8],0x21
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x13C],8
	mov byte ptr [esp+0x1AC],0x20
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [esp+0x13C],ax
	mov eax,dword ptr [esp+0x144]
	cmp eax,ebx
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[esp+0x13C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	cmp word ptr [esp+0x15C],8
	mov byte ptr [esp+0x1AC],0x19
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x164]
	xor edx,edx
	mov word ptr [esp+0x15C],dx
	cmp eax,ebx
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea eax,[esp+0x15C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block111:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push ebx
	push ecx
	mov dword ptr [eax],ebx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x3C],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0x1AC],0x16
	cmp edi,ebx
	je Block113

 Block112:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block113:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x1B0],0xFFFFFFFF
	call eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x20]
	inc eax
	add ecx,4
	cmp eax,3
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],ecx
	jl Block62

 Block114:
	mov ebp,dword ptr [esp+0x1C]

 Block115:
	mov eax,dword ptr [ebp+0x1B8]
	cmp eax,ebx
	je Block117

 Block116:
	mov dword ptr [ebp+0x1B8],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x18]
	lea eax,[eax+eax*2+0x6F]
	lea ecx,[ecx+eax*4]
	mov eax,dword ptr [ecx]
	cmp eax,ebx
	je Block119

 Block118:
	mov dword ptr [ecx],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block119:
	mov eax,dword ptr [ebp+0x1C0]
	cmp eax,ebx
	je Block215

 Block120:
	mov dword ptr [ebp+0x1C0],0
	test eax,eax
	je Block215

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block215

 Block122:
	lea eax,[ebx+ebx*2]
	cmp dword ptr [ebp+eax*4+0x1B8],0
	lea ebp,[ebp+eax*4]
	sete al
	mov dword ptr [esp+0x1C],ebp
	test al,al
	je Block215

 Block123:
	mov edi,dword ptr [esp+0x28]
	push edi
	lea ecx,[esp+0x1A0]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CField::GetTownPortalPos
	mov edx,dword ptr [eax+4]
	mov ebp,dword ptr [eax]
	xor ebx,ebx
	mov dword ptr [esp+0xE4],edx
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esp+0x108]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x1B4],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov byte ptr [esp+0x1B8],0x23
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x114]
	add esp,0xC
	mov byte ptr [esp+0x1AC],0x22
	cmp eax,ebx
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block125:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD0]
	push edx
	call esi
	lea eax,[esp+0xD0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block126:
	imul edi,0xD
	mov edx,dword ptr [esp+0x1B8]
	lea ecx,[esp+0xD0]
	push ecx
	push ecx
	lea edi,[edi+edx+0x18]
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x1B8],0x24
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x104]
	push ebx
	push eax
	mov byte ptr [esp+0x1BC],0x25
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1B4],0x26
	cmp ecx,ebx
	je Block39

 Block127:
	mov byte ptr [esp+0x1B4],0x27
	call IWzFont::CalcTextWidth
	add eax,0xA
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0xFC]
	mov byte ptr [esp+0x1AC],0x24
	cmp eax,ebx
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block129:
	cmp word ptr [esp+0xD0],8
	mov byte ptr [esp+0x1AC],0x22
	jne Block132

 Block130:
	xor eax,eax
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0xD8]
	cmp eax,ebx
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea ecx,[esp+0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	lea edx,[esp+0x90]
	push edx
	call esi
	lea eax,[esp+0x90]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block134:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x1B0],0x28
	call esi
	lea edx,[esp+0xA0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block135:
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1AC],0x29
	cmp ecx,ebx
	je Block39

 Block136:
	lea eax,[esp+0x90]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0xA4]
	push edx
	push 0x14
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x1AC],0x28
	cmp word ptr [esp+0xA0],si
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,ebx
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [esp+0x1AC],0x22
	cmp word ptr [esp+0x90],si
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebx
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block39

 Block145:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0x80000000
	push 0x14
	push ecx
	push ebx
	push ebx
	push eax
	mov esi,eax
	call edx
	cmp eax,ebx
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xB0]
	push eax
	call esi
	lea ecx,[esp+0xB0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block148:
	lea edx,[esp+0xC0]
	push edx
	mov byte ptr [esp+0x1B0],0x2A
	call esi
	lea eax,[esp+0xC0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block149:
	lea ecx,[esp+0xB0]
	push ecx
	lea edx,[esp+0xC4]
	push edx
	lea eax,[esp+0xF0]
	push ebx
	push eax
	mov byte ptr [esp+0x1BC],0x2B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x1C0],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x1BC],0x2D
	cmp ecx,ebx
	je Block39

 Block150:
	push 4
	push 5
	mov byte ptr [esp+0x1C4],0x2C
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xE8]
	mov byte ptr [esp+0x1AC],0x2B
	cmp eax,ebx
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	mov esi,8
	mov byte ptr [esp+0x1AC],0x2A
	cmp word ptr [esp+0xC0],si
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	cmp eax,ebx
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[esp+0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [esp+0x1AC],0x22
	cmp word ptr [esp+0xB0],si
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0xB8]
	xor edx,edx
	mov word ptr [esp+0xB0],dx
	cmp eax,ebx
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[esp+0xB0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov edi,dword ptr [esp+0xE4]
	push 1
	push 0x7FFFFFFF
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	lea edx,[edi-5]
	push edx
	push ebp
	mov dword ptr [esp+0x38],ebx
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	mov esi,eax
	cmp esi,ebx
	jne Block162

 Block161:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edi
	push ebp
	call CWvsPhysicalSpace2D::GetFootholdClosest
	mov esi,eax
	mov dword ptr [esp+0x24],edi

 Block162:
	mov eax,dword ptr [esi+0x2C]
	imul eax,0x7530
	push ebx
	push 0xFF
	sub eax,0x3FFFB1DF
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],ebx
	lea ecx,[esp+0x120]
	push 0xAC1
	push ecx
	mov byte ptr [esp+0x1D0],0x2F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C8],0x30
	push ebx
	push eax
	lea edx,[esp+0x118]
	push edx
	mov byte ptr [esp+0x1D4],0x31
	call CAnimationDisplayer::LoadLayer_1
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ecx+0x1B8]
	add esp,0x28
	cmp edi,eax
	je Block167

 Block163:
	mov edx,ecx
	mov dword ptr [edx+0x1B8],eax
	cmp eax,ebx
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block165:
	cmp edi,ebx
	je Block167

 Block166:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block167:
	mov eax,dword ptr [esp+0xF4]
	cmp eax,ebx
	je Block169

 Block168:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block169:
	mov eax,dword ptr [esp+0x104]
	mov byte ptr [esp+0x1AC],0x22
	cmp eax,ebx
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block171:
	mov eax,dword ptr [esi+0x2C]
	imul eax,0x7530
	push ebx
	push 0xFF
	sub eax,0x3FFFB1E0
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [esp+0x34]
	push ecx
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],ebx
	lea edx,[esp+0x50]
	push 0xAC2
	push edx
	mov byte ptr [esp+0x1D0],0x33
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C8],0x34
	push ebx
	push eax
	lea eax,[esp+0x110]
	push eax
	mov byte ptr [esp+0x1D4],0x35
	call CAnimationDisplayer::LoadLayer_1
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	lea ecx,[ecx+ecx*2+0x6F]
	mov esi,dword ptr [edx+ecx*4]
	lea ecx,[edx+ecx*4]
	add esp,0x28
	cmp esi,eax
	je Block176

 Block172:
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block174:
	cmp esi,ebx
	je Block176

 Block175:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block176:
	mov eax,dword ptr [esp+0xEC]
	cmp eax,ebx
	je Block178

 Block177:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block178:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x1AC],0x22
	cmp eax,ebx
	je Block180

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block180:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block181:
	mov eax,0xD
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1AC],0x36
	mov dword ptr [esp+0x68],eax
	cmp eax,ebx
	je Block183

 Block182:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block183:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x1AC],0x37
	cmp ecx,ebx
	je Block39

 Block184:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x64]
	push edx
	mov edx,dword ptr [esp+0xEC]
	push 0xC0041F78
	push 0x14
	push eax
	add edx,0xFFFFFF78
	push edx
	cdq
	sub eax,edx
	sar eax,1
	sub ebp,eax
	push ebp
	lea eax,[esp+0x54]
	push eax
	call IWzGr2D::CreateLayer
	mov ebp,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x1C0]
	cmp esi,eax
	je Block189

 Block185:
	mov dword ptr [ebp+0x1C0],eax
	cmp eax,ebx
	je Block187

 Block186:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block187:
	cmp esi,ebx
	je Block189

 Block188:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block189:
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block191:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x1AC],0x36
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,ebx
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x1AC],0x22
	jne Block198

 Block196:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block199:
	mov esi,dword ptr [ebp+0x1C0]
	cmp esi,ebx
	je Block39

 Block200:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block202

 Block201:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block202:
	lea ecx,[esp+0x70]
	push ecx
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block203:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0x1B0],0x38
	call edi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block217

 Block204:
	mov ecx,dword ptr [ebp+0x1B8]
	mov byte ptr [esp+0x1AC],0x39
	cmp ecx,ebx
	je Block39

 Block205:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x84]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x1AC],0x38
	cmp word ptr [esp+0x80],si
	jne Block208

 Block206:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,ebx
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov byte ptr [esp+0x1AC],0x22
	cmp word ptr [esp+0x70],si
	jne Block212

 Block210:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x1AC],0xFFFFFFFF
	cmp eax,ebx
	je Block215

 Block214:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block215:
	mov eax,dword ptr [esp+0x28]
	inc eax
	cmp eax,6
	mov dword ptr [esp+0x28],eax
	jl Block53

 Block216:
	jmp Block49

 Block217:
	push eax
	call _com_issue_error
}
}
// CField::DecodeFieldSpecificData
__SUB_CLASS_THIS(0013CB50, __thiscall, 24968,  CField, void, CUser*, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call CField::ApplyUserLook
	ret 8
}
}
// CField::SendDeleteFriendMsg
_SUB_EXCEPTION_HANDLER(12F170)
__SUB_CLASS_THIS(0012F170, __thiscall, 24967,  CField, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x3C],eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x58]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov word ptr [esp+0x40],ax
	mov byte ptr [esp+0x42],al
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call CWvsContext::GetFriendByID
	cmp dword ptr [esp+0x1C],0
	jne Block2

 Block1:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x17E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block3

 Block2:
	push 0x99
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x54],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [esp+0x3C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x4C
	ret 4
}
}
// CField::OnTransferChannelReqIgnored
_SUB_EXCEPTION_HANDLER(12F5F0)
__SUB_CLASS_THIS(0012F5F0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F5F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esi+0x20B8],0
	call get_update_time
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x20BC],eax
	call CInPacket::Decode1
	movzx eax,al
	dec eax
	cmp eax,4
	ja Block11

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8


 Block2:
	lea eax,[esp+0x28]
	push 0xD30
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x30]
	jmp Block9

 Block3:
	lea ecx,[esp+8]
	push 0xD31
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],1
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x10]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [edx+0x40CC],0
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4

 Block6:
	lea eax,[esp+0xC]
	push 0x1299
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],2
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x14]
	jmp Block9

 Block7:
	lea ecx,[esp+0x10]
	push 0x12DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],3
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x18]
	jmp Block9

 Block8:
	lea edx,[esp+0x14]
	push 0x12DC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],4
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]

 Block9:
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C

 Block12:
	ret 4
}
}
// CField::OnMouseButton
__SUB_CLASS_THIS(0012A750, __thiscall, 24963,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block2:
	jmp  CUserLocal::OnMouseButton

 Block3:
	ret 0x10
}
}
// CField::SendKickExpeditionMsg
_SUB_EXCEPTION_HANDLER(130850)
__SUB_CLASS_THIS(00130850, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130850
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
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi]
	xor ebx,ebx
	cmp eax,ebx
	je Block19

 Block1:
	cmp byte ptr [eax],bl
	je Block19

 Block2:
	call CField::IsUnableToKickParty
	test eax,eax
	je Block6

 Block3:
	lea eax,[esp+0x14]
	push 0x13D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block5

 Block4:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block5:
	mov eax,dword ptr [esp+0x14]
	jmp Block17

 Block6:
	mov ebp,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp ebp,ebx
	je Block19

 Block7:
	mov esi,dword ptr [ebp+4]
	cmp esi,ebx
	je Block14

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x20B4]
	mov ecx,esi
	mov dword ptr [esp+0x14],edx
	call EXPEDITION::GetMasterID
	cmp eax,dword ptr [esp+0x14]
	jne Block14

 Block9:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	call ZXString<char>::_ctor_copy
	mov ecx,esi
	call EXPEDITION::GetCharacterID
	cmp eax,ebx
	jne Block13

 Block10:
	lea eax,[esp+0x18]
	push 0x1645
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],3
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push 0xC
	push ecx
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	mov byte ptr [esp+0x28],3
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x18]
	jmp Block17

 Block13:
	push eax
	mov ecx,ebp
	call ExpeditionIntermediary::SendExpKickPacket
	jmp Block19

 Block14:
	lea eax,[esp+0x1C]
	push 0x1646
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push 0xC
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	add esp,8
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x1C]

 Block17:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CField_AranTutorial::GetFieldType
__SUB_CLASS_THIS0(0013F1C0, __thiscall, 144064,  CField_AranTutorial, long) {
__asm {

 Block0:
	mov eax,0x16
	ret
}
}
// CField_Tournament::AvatarInfo::~AvatarInfo
__SUB_CLASS_THIS0(0012E900, __thiscall, 53811,  CField_Tournament::AvatarInfo, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x104]
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
// CField::OnSetQuestClear
__SUB_CLASS_THIS(0012C870, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	add ecx,0x154
	call ZArray<MODQUESTTIME>::RemoveAll
	ret 4
}
}
// CField::OnZakumTimer
_SUB_EXCEPTION_HANDLER(130CC0)
__SUB_CLASS_THIS(00130CC0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130CC0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x30]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,ebp
	jl Block20

 Block1:
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x28],ebp
	cmp edi,ebp
	je Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x107F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x28],1
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x18]
	push 0x107E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x28],ebx

 Block4:
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x28],1
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x28],ebp
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp esi,ebp
	jne Block12

 Block11:
	lea edx,[esp+0x1C]
	push 0x1080
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,4
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	jmp Block13

 Block12:
	mov eax,dword ptr [esp+0x30]
	push esi
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call ZXString<char>::Format
	add esp,0xC

 Block13:
	mov dword ptr [esp+0x28],ebp
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block18

 Block17:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push ebp
	push 0xFFFFFFFF
	mov dword ptr [eax+4],ebp
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push edx
	call CUIStatusBar::ChatLogAdd

 Block18:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
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
	ret 4
}
}
// CField::OnFootHoldInfo
_SUB_EXCEPTION_HANDLER(13A810)
__SUB_CLASS_THIS(0013A810, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13A810
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x3C]
	mov ecx,edi
	call CInPacket::Decode4
	xor esi,esi
	cmp eax,esi
	jle Block28

 Block1:
	mov dword ptr [esp+0x20],eax
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x34],esi
	call CInPacket::Decode4
	mov ebp,eax
	mov dword ptr [esp+0x28],esi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea ecx,[ebx+0x280]
	mov byte ptr [esp+0x3C],1
	call ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::GetAt
	mov esi,dword ptr [esp+0x28]
	test eax,eax
	je Block20

 Block4:
	mov ecx,esi
	call ZList<long>::RemoveAll
	mov ecx,edi
	call CInPacket::Decode4
	test eax,eax
	jle Block8

 Block5:
	mov dword ptr [esp+0x18],eax

 Block6:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call ZList<long>::AddTail_
	sub dword ptr [esp+0x18],1
	mov dword ptr [eax],ebx
	jne Block6

 Block7:
	mov ebx,dword ptr [esp+0x14]

 Block8:
	mov dword ptr [esi+0x20],ebp
	mov eax,dword ptr [esp+0x3C]
	push ebp
	push eax
	mov ecx,ebx
	call CMapLoadable::FootHoldStateChange
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block12

 Block9:
	jmp Block11

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<long>::GetNext
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebx+0x3C]
	add esp,4
	push ebp
	push eax
	call CWvsPhysicalSpace2D::FootHoldStateChange
	cmp dword ptr [esp+0x18],0
	jne Block11

 Block12:
	cmp ebp,2
	jne Block20

 Block13:
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx],eax
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+4],eax
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+8],eax
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0xC],eax
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebx+0x10],eax
	mov ebp,dword ptr [esi+0x2C]
	mov edx,dword ptr [ebp+0x18]
	mov ebx,dword ptr [ebp+0x14]
	mov ecx,edi
	mov dword ptr [esp+0x18],edx
	call CInPacket::Decode4
	mov dword ptr [ebp+0x14],eax
	mov ebp,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [ebp+0x18],eax
	mov ebp,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [ebp+0x1C],eax
	mov ebp,dword ptr [esi+0x2C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x20],ecx
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [eax+0x24],1
	mov eax,dword ptr [esi+0x2C]
	cmp ebx,dword ptr [eax+0x14]
	jne Block15

 Block14:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [eax+0x18]
	je Block19

 Block15:
	mov edx,dword ptr [eax+0x18]
	mov eax,dword ptr [eax+0x14]
	mov ecx,dword ptr [esi+0x24]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CMapLoadable::FootHoldMove
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block19

 Block16:
	jmp Block18

 Block18:
	lea ecx,[esp+0x1C]
	push ecx
	call ZList<long>::GetNext
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0x2C]
	mov ebp,dword ptr [eax+0x18]
	sub ebp,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+0x3C]
	add esp,4
	push ebp
	sub eax,ebx
	push eax
	push edx
	call CWvsPhysicalSpace2D::FootHoldMove
	cmp dword ptr [esp+0x1C],0
	jne Block18

 Block19:
	mov ebx,dword ptr [esp+0x14]

 Block20:
	mov byte ptr [esp+0x34],0
	test esi,esi
	je Block25

 Block21:
	add esi,0xFFFFFFF0
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block24

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block24:
	mov dword ptr [esp+0x28],0

 Block25:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	sub dword ptr [esp+0x20],1
	jne Block2

 Block28:
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
// CField::ShowScreenEffect
_SUB_EXCEPTION_HANDLER(1376D0)
__SUB_CLASS_THIS(001376D0, __thiscall, 25046,  CField, void, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1376D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x14]
	push 0x9ED
	push eax
	mov byte ptr [esp+0x4C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0xC
	test ecx,ecx
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],0
	push 0xFFFFFFD8
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 4
	push eax
	mov byte ptr [esp+0x68],3
	call CWndMan::GetOrgWindow
	mov esi,dword ptr [esp+0x2C]
	push 0
	lea ecx,[esp+0x2C]
	push esi
	push ecx
	mov byte ptr [esp+0x6C],1
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	sete al
	test al,al
	sete al
	mov byte ptr [esp+0x44],4
	test al,al
	je Block23

 Block6:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x48],5
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov byte ptr [esp+0x44],6
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x44],5
	cmp word ptr [esp+0x1C],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block16:
	mov byte ptr [esp+0x44],4
	cmp word ptr [esp+0x2C],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block20:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [esp+0x10]

 Block23:
	mov byte ptr [esp+0x44],1
	test ecx,ecx
	je Block25

 Block24:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block25:
	mov byte ptr [esp+0x44],0
	test esi,esi
	je Block27

 Block26:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret 4
}
}
// CField::CanUseSpecialArts
__SUB_CLASS_THIS0(0013CB30, __thiscall, 24969,  CField, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CField::RestoreHelpMsg
_SUB_EXCEPTION_HANDLER(12FF40)
__SUB_CLASS_THIS(0012FF40, __thiscall, 24967,  CField, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12FF40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x30],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx

 Block1:
	lea eax,[esp+0x2C]
	push 0x6F3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x48],1
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x3C],3
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x44]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetMapString
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebx
	je Block23

 Block6:
	cmp byte ptr [edi],bl
	je Block23

 Block7:
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],6
	xor esi,esi
	call ZXString<char>::GetLength
	dec eax
	test eax,eax
	jle Block16

 Block8:
	jmp Block10

 Block9:
	mov edi,dword ptr [esp+0x18]

 Block10:
	mov al,byte ptr [esi+edi]
	cmp al,0x5C
	jne Block13

 Block11:
	cmp byte ptr [esi+edi+1],0x6E
	jne Block13

 Block12:
	push 2
	push offset _S___4
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	inc esi
	jmp Block14

 Block13:
	push 1
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],al
	call ZXString<char>::_Cat

 Block14:
	lea ecx,[esp+0x18]
	inc esi
	call ZXString<char>::GetLength
	dec eax
	cmp esi,eax
	jl Block9

 Block15:
	mov ebp,dword ptr [esp+0x1C]

 Block16:
	mov ecx,dword ptr [esp+0x30]
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	add ecx,0x1A8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x3C],5
	cmp ebp,ebx
	je Block18

 Block17:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	inc dword ptr [esp+0x24]
	jmp Block1

 Block23:
	mov byte ptr [esp+0x3C],4
	cmp edi,ebx
	je Block25

 Block24:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp esi,ebx
	je Block27

 Block26:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CField::UpdateDynamicObject
_SUB_EXCEPTION_HANDLER(12DB40)
__SUB_CLASS_THIS0(0012DB40, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12DB40
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
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	call get_update_time
	mov edi,eax
	mov eax,dword ptr [esi+0x278]
	xor ebp,ebp
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block51

 Block1:
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x1C]

 Block4:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<DYNAMIC_OBJ_INFO>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebp
	je Block6

 Block5:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block6:
	cmp dword ptr [esi+0x20],2
	mov dword ptr [esp+0x38],ebp
	je Block9

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block8:
	push edi
	call ebx
	jmp Block48

 Block9:
	mov ecx,dword ptr [esi+0x2C]
	cmp dword ptr [ecx+0x24],ebp
	je Block7

 Block10:
	mov eax,edi
	sub eax,dword ptr [ecx+0x28]
	cmp eax,dword ptr [ecx]
	jl Block7

 Block11:
	cmp dword ptr [ecx+0x28],ebp
	jne Block13

 Block12:
	xor eax,eax

 Block13:
	mov dword ptr [ecx+0x28],edi
	mov ecx,dword ptr [esi+0x2C]
	cmp dword ptr [ecx],ebp
	mov ebx,dword ptr [ecx+0x18]
	mov edi,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x24],ebx
	jle Block15

 Block14:
	cdq
	idiv dword ptr [ecx]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov edx,dword ptr [ecx+4]
	cmp edx,dword ptr [ecx+8]
	jge Block22

 Block17:
	cmp dword ptr [ecx+0x1C],ebp
	je Block20

 Block18:
	sub dword ptr [ecx+0x14],eax
	mov ecx,dword ptr [esi+0x2C]
	mov edx,dword ptr [ecx+0x14]
	cmp edx,dword ptr [ecx+4]
	jge Block29

 Block19:
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ecx+0x14],edx
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [ecx+0x1C],ebp
	jmp Block29

 Block20:
	add dword ptr [ecx+0x14],eax
	mov ecx,dword ptr [esi+0x2C]
	mov edx,dword ptr [ecx+0x14]
	cmp edx,dword ptr [ecx+8]
	jle Block29

 Block21:
	mov edx,dword ptr [ecx+8]
	jmp Block28

 Block22:
	jle Block29

 Block23:
	cmp dword ptr [ecx+0x1C],ebp
	je Block26

 Block24:
	sub dword ptr [ecx+0x14],eax
	mov ecx,dword ptr [esi+0x2C]
	mov edx,dword ptr [ecx+0x14]
	cmp edx,dword ptr [ecx+8]
	jge Block29

 Block25:
	mov edx,dword ptr [ecx+8]
	mov dword ptr [ecx+0x14],edx
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [ecx+0x1C],ebp
	jmp Block29

 Block26:
	add dword ptr [ecx+0x14],eax
	mov ecx,dword ptr [esi+0x2C]
	mov edx,dword ptr [ecx+0x14]
	cmp edx,dword ptr [ecx+4]
	jle Block29

 Block27:
	mov edx,dword ptr [ecx+4]

 Block28:
	mov dword ptr [ecx+0x14],edx
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [ecx+0x1C],1

 Block29:
	mov ecx,dword ptr [esi+0x2C]
	mov edx,dword ptr [ecx+0xC]
	cmp edx,dword ptr [ecx+0x10]
	jle Block35

 Block30:
	cmp dword ptr [ecx+0x20],ebp
	je Block33

 Block31:
	add dword ptr [ecx+0x18],eax
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [eax+0x18]
	cmp ecx,dword ptr [eax+0xC]
	jle Block42

 Block32:
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [eax+0x18],edx
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [eax+0x20],ebp
	jmp Block42

 Block33:
	sub dword ptr [ecx+0x18],eax
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [eax+0x18]
	cmp ecx,dword ptr [eax+0x10]
	jge Block42

 Block34:
	mov edx,dword ptr [eax+0x10]
	jmp Block41

 Block35:
	jge Block42

 Block36:
	cmp dword ptr [ecx+0x20],ebp
	je Block39

 Block37:
	add dword ptr [ecx+0x18],eax
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [eax+0x18]
	cmp ecx,dword ptr [eax+0x10]
	jle Block42

 Block38:
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [eax+0x18],edx
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [eax+0x20],ebp
	jmp Block42

 Block39:
	sub dword ptr [ecx+0x18],eax
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [eax+0x18]
	cmp ecx,dword ptr [eax+0xC]
	jge Block42

 Block40:
	mov edx,dword ptr [eax+0xC]

 Block41:
	mov dword ptr [eax+0x18],edx
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [eax+0x20],1

 Block42:
	mov eax,dword ptr [esi+0x2C]
	cmp edi,dword ptr [eax+0x14]
	jne Block44

 Block43:
	cmp ebx,dword ptr [eax+0x18]
	je Block46

 Block44:
	mov edx,dword ptr [eax+0x18]
	mov eax,dword ptr [eax+0x14]
	mov ecx,dword ptr [esi+0x24]
	mov ebx,dword ptr [esp+0x20]
	push edx
	push eax
	push ecx
	mov ecx,ebx
	call CMapLoadable::FootHoldMove
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block46

 Block45:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<long>::GetNext
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0x2C]
	mov ebp,dword ptr [eax+0x18]
	sub ebp,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+0x14]
	mov ecx,dword ptr [ebx+0x3C]
	add esp,4
	push ebp
	sub eax,edi
	push eax
	push edx
	call CWvsPhysicalSpace2D::FootHoldMove
	xor ebp,ebp
	cmp dword ptr [esp+0x14],ebp
	jne Block45

 Block46:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block47:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	cmp esi,ebp
	je Block50

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block50:
	mov dword ptr [esp+0x2C],ebp
	cmp dword ptr [esp+0x18],ebp
	jne Block3

 Block51:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CField::SendCreateGuildAgreeMsg
_SUB_EXCEPTION_HANDLER(12D780)
__SUB_CLASS_THIS(0012D780, __thiscall, 24977,  CField, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x95
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x20
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov esi,dword ptr [esi+0x20B4]
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
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
// CField::SendTransferFieldRequest
_SUB_EXCEPTION_HANDLER(1345C0)
__SUB_CLASS_THIS(001345C0, __thiscall, 24987,  CField, int32_t, unsigned long, const char*, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1345C0
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
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebp+0x20B8],0
	jne Block2

 Block1:
	call get_update_time
	sub eax,dword ptr [ebp+0x20BC]
	cmp eax,0x1F4
	jge Block3

 Block2:
	xor eax,eax
	jmp Block21

 Block3:
	push 0x29
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	mov eax,dword ptr [_D_G_PSTAGE+4]
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block9

 Block4:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block9

 Block5:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block8

 Block7:
	xor esi,esi

 Block8:
	movzx eax,byte ptr [esi+0x168]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x3C]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ebx,dword ptr [esp+0x40]
	mov edx,ebx
	test ebx,ebx
	jne Block12

 Block11:
	mov edx,offset _S_

 Block12:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [edi],0
	test edx,edx
	je Block16

 Block13:
	mov eax,edx
	lea esi,[eax+1]

 Block14:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block14

 Block15:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
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

 Block16:
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	test ebx,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x14]
	push eax
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x14]
	push eax
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode2

 Block18:
	push 0
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x44]
	push ecx
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	movzx edx,byte ptr [_D_S_BCHASE]
	push edx
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	cmp dword ptr [_D_S_BCHASE],0
	je Block20

 Block19:
	mov eax,dword ptr [esp+0x48]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	lea ecx,[esp+0x20]
	call COutPacket::Encode4

 Block20:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [ebp+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x20]
	mov dword ptr [ebp+0x20BC],eax
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1

 Block21:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x14
}
}
// Field::SkillInfo::~SkillInfo
_SUB_EXCEPTION_HANDLER(12C760)
__SUB_CLASS_THIS0(0012C760, __thiscall, 16512,  Field::SkillInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12C760
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esi],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField::SendLocationWhisper
_SUB_EXCEPTION_HANDLER(134150)
__SUB_CLASS_THIS(00134150, __thiscall, 24973,  CField, void, const ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_134150
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
	mov edi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax+4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp ecx,ebx
	je Block7

 Block4:
	mov eax,ecx
	lea esi,[eax+1]

 Block5:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block5

 Block6:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
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
	mov ebp,dword ptr [esp+0x38]
	push ebp
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block14

 Block8:
	cmp dword ptr [edi+0x2A4],ebx
	je Block13

 Block9:
	lea eax,[esp+0x38]
	push 0x95
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x30],1
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block11

 Block10:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block11:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block14

 Block13:
	push 0x8D
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esp+0x3C]
	neg ecx
	sbb cl,cl
	and cl,0x3F
	inc cl
	or cl,4
	movzx edx,cl
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push ebp
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [edi+0x2A4],1
	call timeGetTime
	lea ecx,[esp+0x1C]
	mov dword ptr [edi+0x2AC],eax
	mov byte ptr [esp+0x30],bl
	call ZArray<unsigned char>::RemoveAll

 Block14:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebx
	je Block16

 Block15:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block16:
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
// CField::UserLook::~UserLook
_SUB_EXCEPTION_HANDLER(12D1D0)
__SUB_CLASS_THIS0(0012D1D0, __thiscall, 25439,  CField::UserLook, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D1D0
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
	lea ecx,[esi+0xC]
	int 3// TODO: 	mov dword ptr [esi+0x20],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<Field::UserCond>>::`vftable'
	call ZList<ZRef<Field::UserCond>>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField::GetCrc
__SUB_CLASS_THIS0(005033A0, __thiscall, 25060,  CField, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD68]
	ret
}
}
// CField::OnKey
__SUB_CLASS_THIS(0012A6B0, __thiscall, 24961,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ProcessBasicUIKey
	test eax,eax
	jne Block8

 Block1:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],eax
	jne Block8

 Block2:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],eax
	je Block8

 Block3:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	call eax
	test eax,eax
	je Block7

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x40D0],0x2710
	jl Block7

 Block5:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0xC]
	push eax
	call CUserLocal::PreprocessOnKey
	test eax,eax
	jne Block8

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edx
	call CUserLocal::OnKey
	pop esi
	ret 8

 Block7:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::OnKey

 Block8:
	pop esi
	ret 8
}
}
// CField_WeddingPhoto::GetFieldType
__SUB_CLASS_THIS0(0013EEE0, __thiscall, 142873,  CField_WeddingPhoto, long) {
__asm {

 Block0:
	mov eax,0x3D
	ret
}
}
// CField::SendWithdrawExpeditionMsg
_SUB_EXCEPTION_HANDLER(130B60)
__SUB_CLASS_THIS0(00130B60, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130B60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	xor ebx,ebx
	cmp esi,ebx
	je Block12

 Block1:
	cmp dword ptr [esi+4],ebx
	jne Block8

 Block2:
	lea eax,[esp+0x10]
	push 0x1647
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0xC],ebx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x28],1
	call ZXString<char>::Format
	add esp,8
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block4

 Block3:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret

 Block8:
	call CField::IsUnableToWithdrawParty
	test eax,eax
	je Block11

 Block9:
	lea edx,[esp+0x14]
	push 0x13D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x28],2
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret

 Block11:
	mov ecx,esi
	call ExpeditionIntermediary::SendWithdrawPacket

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CField::UserLook::IsCondTrue
_SUB_EXCEPTION_HANDLER(12D970)
__SUB_CLASS_THIS(0012D970, __thiscall, 25431,  CField::UserLook, int32_t, CUser*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D970
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
	xor ebp,ebp
	cmp dword ptr [esp+0x30],ebp
	je Block15

 Block1:
	mov eax,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block12

 Block2:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<Field::UserCond>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block5

 Block4:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block5:
	mov dword ptr [esp+0x28],ebp
	cmp esi,ebp
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [edx+4]
	push eax
	mov ecx,esi
	call edx
	test eax,eax
	je Block14

 Block7:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebp
	je Block11

 Block8:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block9:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	mov dword ptr [esp+0x1C],ebp

 Block11:
	cmp dword ptr [esp+0x14],ebp
	jne Block3

 Block12:
	mov eax,1

 Block13:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4

 Block14:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>

 Block15:
	xor eax,eax
	jmp Block13
}
}
// CField::TryEnterTownPortal
_SUB_EXCEPTION_HANDLER(12F970)
__SUB_CLASS_THIS(0012F970, __thiscall, 25007,  CField, void, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12F970
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x1B4]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block10

 Block1:
	cmp dword ptr [eax-4],0
	je Block10

 Block2:
	cmp dword ptr [esi+0x3604],0
	jne Block11

 Block3:
	test eax,eax
	je Block11

 Block4:
	cmp dword ptr [eax-4],0
	jbe Block11

 Block5:
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	lea edx,[ecx+0x32]
	push edx
	lea edx,[eax+0x14]
	push edx
	add ecx,0xFFFFFFCE
	push ecx
	add eax,0xFFFFFFEC
	push eax
	lea eax,[esp+0x48]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	push ecx
	push edx
	lea eax,[esp+0x40]
	push eax
	call PtInRect
	test eax,eax
	je Block10

 Block6:
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	call CWvsContext::GetMyTownPortal
	mov edi,dword ptr [esp+0x58]
	lea ecx,[ebx+0x16C]
	call TSecType<unsigned long>::GetData
	cmp edi,eax
	jne Block10

 Block7:
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block10

 Block8:
	cmp eax,0x3B9AC9FF
	je Block10

 Block9:
	push 1
	mov ecx,esi
	call CWvsContext::SetExclRequestSent
	push 0x9C
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov esi,dword ptr [esi+0x20B4]
	push esi
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x78],0
	call COutPacket::Encode4
	push 1
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block10:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 8

 Block11:
	lea eax,[esi+0x3608]
	xor edi,edi
	mov dword ptr [esp+0x14],eax

 Block12:
	mov eax,dword ptr [ebx+0x1B4]
	test eax,eax
	je Block10

 Block13:
	cmp edi,dword ptr [eax-4]
	jae Block10

 Block14:
	mov ecx,eax
	lea eax,[ecx+edi*8]
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	lea edx,[ecx+0x32]
	push edx
	lea edx,[eax+0x14]
	push edx
	add ecx,0xFFFFFFCE
	push ecx
	add eax,0xFFFFFFEC
	push eax
	lea eax,[esp+0x58]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	push ecx
	push edx
	lea eax,[esp+0x50]
	push eax
	call PtInRect
	test eax,eax
	je Block20

 Block15:
	lea ecx,[esp+0x58]
	push ecx
	push edi
	mov ecx,esi
	call CWvsContext::GetPartyTownPortal
	test eax,eax
	je Block20

 Block16:
	mov ebp,dword ptr [esp+0x58]
	lea ecx,[ebx+0x16C]
	call TSecType<unsigned long>::GetData
	cmp ebp,eax
	jne Block20

 Block17:
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block20

 Block18:
	cmp eax,0x3B9AC9FF
	je Block20

 Block19:
	mov ebp,1
	mov dword ptr [esi+0x20B8],ebp
	call get_update_time
	push 0x9C
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x20BC],eax
	call COutPacket::_ctor_1
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x78],ebp
	call COutPacket::Encode4
	push ebp
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block20:
	inc edi
	add dword ptr [esp+0x14],4
	jmp Block12
}
}
// CField::OnMouseMove
_SUB_EXCEPTION_HANDLER(12B3D0)
__SUB_CLASS_THIS(0012B3D0, __thiscall, 24964,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12B3D0
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
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x220],ebx
	lea ebp,[edi+0x220]
	sete al
	test al,al
	sete al
	test al,al
	je Block32

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebx
	lea eax,[esp+0x20]
	push eax
	call CWndMan::GetOrgWindow
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x28],ebx
	cmp esi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebx
	lea eax,[esp+0x18]
	push eax
	call CWndMan::GetOrgWindow
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x28],1
	cmp esi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ebp]
	cmp esi,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov eax,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x18]
	sub eax,ebx
	add eax,3
	cmp eax,dword ptr [esp+0x30]
	jg Block30

 Block18:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov ecx,dword ptr [edi+0x224]
	mov edx,dword ptr [esp+0x18]
	sub ecx,ebx
	lea eax,[ecx+edx+5]
	cmp eax,dword ptr [esp+0x30]
	jl Block30

 Block23:
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	call IWzShape2D::Gety
	mov esi,dword ptr [esp+0x1C]
	mov ecx,5
	sub ecx,esi
	add eax,ecx
	cmp eax,dword ptr [esp+0x34]
	jg Block30

 Block26:
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	call IWzShape2D::Gety
	mov edx,dword ptr [edi+0x228]
	sub edx,esi
	lea eax,[eax+edx+5]
	cmp eax,dword ptr [esp+0x34]
	jl Block30

 Block29:
	mov eax,dword ptr [edi+0xD08]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	mov edx,dword ptr [edi+0x224]
	sub edx,ebx
	lea eax,[eax+edx+0xA]
	push eax
	lea ecx,[edi+0x2C0]
	call CUIToolTip::SetToolTip_String
	jmp Block31

 Block30:
	lea ecx,[edi+0x2C0]
	call CUIToolTip::ClearToolTip

 Block31:
	xor ebx,ebx

 Block32:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp ecx,ebx
	je Block34

 Block33:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	push edx
	push eax
	call CUserLocal::OnMouseMove
	jmp Block35

 Block34:
	mov eax,1

 Block35:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CField::OnFieldObstacleOnOffStatus
_SUB_EXCEPTION_HANDLER(135B00)
__SUB_CLASS_THIS(00135B00, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135B00
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
	mov esi,dword ptr [esp+0x20]
	mov ecx,esi
	call CInPacket::Decode4
	test eax,eax
	jle Block5

 Block1:
	mov dword ptr [esp+0xC],eax

 Block2:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov ecx,edi
	call CMapLoadable::SetObjectState
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	sub dword ptr [esp+0xC],1
	jne Block2

 Block5:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CField::SendWithdrawPartyMsg
_SUB_EXCEPTION_HANDLER(12EDB0)
__SUB_CLASS_THIS0(0012EDB0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12EDB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x3604]
	test eax,eax
	jne Block5

 Block1:
	lea ecx,[esp+8]
	push 0x14E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x28],0
	je Block3

 Block2:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block3:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block13

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x24
	ret

 Block5:
	mov edx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [edx+4],0
	je Block9

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x158E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block13

 Block7:
	cmp dword ptr [edi+0x234],0
	je Block9

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x16E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block13

 Block9:
	mov ecx,edi
	call CField::IsUnableToWithdrawParty
	test eax,eax
	je Block12

 Block10:
	lea edx,[esp+0xC]
	push 0x13D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x30],1
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x14]
	add esp,8
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x24
	ret

 Block12:
	push 0x91
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],2
	call COutPacket::Encode1
	push 0
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block13:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x24
	ret
}
}
// CField::OnOpenGate
__SUB_CLASS_THIS0(0012A280, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	ret
}
}
// CField::RestoreClock
_SUB_EXCEPTION_HANDLER(133AB0)
__SUB_CLASS_THIS0(00133AB0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_133AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor ebp,ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x6FC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x8C],ebp
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x90],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x88],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,8
	mov bl,3
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x28],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block36

 Block10:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x88],4
	cmp esi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],5
	call get_int32
	add esp,8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x3E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x8C],6
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],7
	call get_int32
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],di
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x700
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x88],8
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],9
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x701
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x40]
	mov byte ptr [esp+0x88],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0xB
	call get_int32
	add esp,8
	cmp word ptr [esp+0x38],8
	mov edi,eax
	mov byte ptr [esp+0x80],bl
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	cmp dword ptr [esp+0x20],0
	je Block39

 Block29:
	cmp dword ptr [esp+0x1C],0
	je Block39

 Block30:
	test ebp,ebp
	je Block39

 Block31:
	test edi,edi
	je Block39

 Block32:
	lea ecx,[esp+0x48]
	call CClock::INITPARAM::_ctor_default
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x84],0xC
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esp+0x78],1
	mov dword ptr [esp+0x54],0xFFFFE500
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x80],0xD
	test eax,eax
	je Block34

 Block33:
	mov ecx,eax
	call CClock::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov ecx,dword ptr [esp+0x18]
	push eax
	add ecx,0x204
	mov byte ptr [esp+0x84],0xC
	call ZRef<CClock>::op_assign_ptr
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x208]
	mov eax,dword ptr [esp+0x1C]
	push 0
	push 1
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 0xC0041EE2
	push edi
	push ebp
	push eax
	push edx
	call CWnd::CreateWnd
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x80],bl
	call CClock::INITPARAM::~INITPARAM

 Block36:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test esi,esi
	je Block38

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block38:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CField::RestorePhaseBG
_SUB_EXCEPTION_HANDLER(132DD0)
__SUB_CLASS_THIS0(00132DD0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_132DD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x24C]
	xor edi,edi
	cmp eax,edi
	jle Block22

 Block1:
	lea ebx,[eax+1]
	lea eax,[ebp-0x11]
	push eax
	lea ecx,[esi+0x254]
	push ebx
	mov dword ptr [ebp-0x1C],ebx
	mov dword ptr [ebp-0x20],ecx
	call ZArray<long>::_Alloc
	push edi
	push edi
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push offset _S_PHASEBG
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x40]
	or esi,0xFFFFFFFF
	push edx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block6

 Block4:
	cmp eax,0x80004002
	je Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],3
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov edi,dword ptr [ebp-0x18]
	test edi,edi
	sete al
	test al,al
	je Block13

 Block11:
	mov dword ptr [ebp-4],esi
	test edi,edi
	je Block22

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block22

 Block13:
	xor esi,esi
	test ebx,ebx
	jle Block20

 Block14:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	test edi,edi
	je Block2

 Block15:
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edx]
	push eax
	mov byte ptr [ebp-4],5
	lea ebx,[ecx+esi*4]
	call get_int32
	add esp,8
	mov dword ptr [ebx],eax
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],3
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	inc esi
	cmp esi,dword ptr [ebp-0x1C]
	jl Block14

 Block20:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block22

 Block21:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block22:
	lea esp,[ebp-0x54]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CField::OnDesc
_SUB_EXCEPTION_HANDLER(1313D0)
__SUB_CLASS_THIS(001313D0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1313D0
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
	mov edi,ecx
	mov ecx,dword ptr [esp+0x28]
	call CInPacket::Decode1
	movzx ebx,al
	mov eax,dword ptr [edi+0x1A8]
	test eax,eax
	je Block11

 Block1:
	cmp dword ptr [eax-4],0
	je Block11

 Block2:
	test eax,eax
	je Block11

 Block3:
	cmp ebx,dword ptr [eax-4]
	jae Block11

 Block4:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block12

 Block5:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block12

 Block6:
	add eax,8
	je Block12

 Block7:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block9

 Block8:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [edi+0x1A8]
	push 0
	push 0
	push ecx
	lea eax,[ecx+ebx*4]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [esp+0x30],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x897B50
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block12:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block9
}
}
// CField::OnWarnMessage
_SUB_EXCEPTION_HANDLER(138160)
__SUB_CLASS_THIS(00138160, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_138160
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	call CInPacket::DecodeStr
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [esp+0x28],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret 4
}
}
// CField::RestoreOption
_SUB_EXCEPTION_HANDLER(13B070)
__SUB_CLASS_THIS0(0013B070, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13B070
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
	mov esi,ecx
	mov edi,dword ptr [esi+0x2C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],edi
	cmp edi,ebx
	je Block2

 Block1:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block2:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x6EF
	push edx
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x50],1
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],2
	call get_int32
	mov ebp,8
	add esp,8
	mov dword ptr [esi+0x178],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xAB2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],3
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],4
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x18C],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD0C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x28]
	mov byte ptr [esp+0x50],5
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],6
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x190],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_FLY
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	mov byte ptr [esp+0x50],7
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],8
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x194],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_NEEDSKILLFORFLY
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	mov byte ptr [esp+0x50],9
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xA
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x198],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0xAD2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x28]
	mov byte ptr [esp+0x50],0xB
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xC
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x19C],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xBC4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],0xD
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xE
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x1A0],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x3B9AC9FF
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_FORCEDRETURN
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],0xF
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x10
	call get_int32
	xor edx,edx
	add esp,8
	cmp eax,0x3B9AC9FF
	setne dl
	mov byte ptr [esp+0x48],bl
	mov dword ptr [esi+0x1A4],edx
	cmp word ptr [esp+0x20],bp
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x24]
	mov byte ptr [esp+0x4C],0x11
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x48],0x12
	cmp word ptr [eax],bp
	jne Block38

 Block37:
	mov eax,dword ptr [eax+8]
	jmp Block39

 Block38:
	mov eax,offset _S___3

 Block39:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::Assign
	mov byte ptr [esp+0x48],0x14
	cmp word ptr [esp+0x20],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block47

 Block44:
	cmp word ptr [eax],bx
	je Block47

 Block45:
	lea eax,[esp+0x18]
	push 0xD0F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esi+0x1AC]
	push edx
	mov byte ptr [esp+0x54],0x15
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x48],0x14
	cmp eax,ebx
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_EXPEDITIONONLY
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x50],0x16
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x17
	call get_int32
	add esp,8
	mov dword ptr [esi+0x234],eax
	mov byte ptr [esp+0x48],0x14
	cmp word ptr [esp+0x30],bp
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_CONSUMEITEMCOOLT
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x50],0x18
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x19
	call get_int32
	add esp,8
	mov dword ptr [esi+0x238],eax
	mov byte ptr [esp+0x48],0x14
	cmp word ptr [esp+0x30],bp
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x17DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x54],0x1A
	mov ecx,edi
	mov byte ptr [esp+0x54],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24C],eax
	mov byte ptr [esp+0x48],0x14
	cmp word ptr [esp+0x30],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebx
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 0x80
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x17DC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0x50],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x1D
	call get_int32
	add esp,8
	cmp eax,ebx
	jge Block61

 Block60:
	xor eax,eax
	jmp Block63

 Block61:
	cmp eax,0xFF
	jl Block63

 Block62:
	mov eax,0xFF

 Block63:
	mov dword ptr [esi+0x250],eax
	mov byte ptr [esp+0x48],0x14
	cmp word ptr [esp+0x30],bp
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,esi
	call CField::RestorePhaseBG
	mov ecx,esi
	call CField::RestoreAllowedItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block69:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret
}
}
// CSnowBall::Update
__SUB_CLASS_THIS0(00160400, __thiscall, 143074,  CSnowBall, void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x14]
	mov eax,dword ptr [eax*4+CSnowBall::ms_anDelay]
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [ecx+0x10]
	xor ebx,ebx
	push edi
	test esi,esi
	je Block2

 Block1:
	setge bl
	lea ebx,[ebx+ebx-1]

 Block2:
	test eax,eax
	jne Block8

 Block3:
	test ebx,ebx
	je Block14

 Block4:
	mov edx,dword ptr [ecx+0xC]
	lea eax,[edx+ebx]
	cmp dword ptr [CField_SnowBall::ms_rgBall],eax
	jg Block14

 Block5:
	cmp eax,dword ptr [CField_SnowBall::ms_rgBall+4]
	jg Block14

 Block6:
	add dword ptr [ecx+0x18],0x1E
	mov edi,dword ptr [ecx+0x18]
	cmp edi,dword ptr [CSnowBall::ms_anDelay+28]
	jl Block15

 Block7:
	mov dword ptr [ecx+0xC],eax
	lea eax,[ebx+ebx*2]
	sub esi,eax
	xor eax,eax
	test esi,esi
	setle al
	push ebx
	dec eax
	and eax,esi
	mov dword ptr [ecx+0x10],eax
	sub edi,dword ptr [CSnowBall::ms_anDelay+28]
	mov dword ptr [ecx+0x18],edi
	call CSnowBall::Move
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block8:
	mov ebp,1
	test eax,eax
	jge Block10

 Block9:
	or ebp,0xFFFFFFFF
	neg eax

 Block10:
	mov edx,dword ptr [ecx+0xC]
	add edx,ebp
	cmp dword ptr [CField_SnowBall::ms_rgBall],edx
	mov dword ptr [esp+0x10],edx
	jg Block14

 Block11:
	cmp edx,dword ptr [CField_SnowBall::ms_rgBall+4]
	jg Block14

 Block12:
	mov edi,ebp
	imul edi,ebx
	add dword ptr [ecx+0x18],0x1E
	mov edx,3
	sub edx,edi
	mov edi,dword ptr [ecx+0x18]
	imul edx,eax
	mov eax,0x55555556
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp edi,eax
	jl Block15

 Block13:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [ecx+0xC],edx
	sub esi,ebx
	xor edx,edx
	test esi,esi
	setle dl
	sub edi,eax
	push ebp
	mov dword ptr [ecx+0x18],edi
	dec edx
	and edx,esi
	mov dword ptr [ecx+0x10],edx
	call CSnowBall::Move
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block14:
	mov dword ptr [ecx+0x18],0

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CField::InitFearEffect
_SUB_EXCEPTION_HANDLER(1399F0)
__SUB_CLASS_THIS0(001399F0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1399F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x58],edi
	call CField::OffFearEffect
	mov eax,dword ptr [edi+0xD74]
	add edi,0xD74
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	mov dword ptr [esp+0xC0],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0xB8],1
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB4],2
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x300
	push 0x400
	call IWzCanvas::Create
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0xB4],1
	cmp word ptr [esp+0x18],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block14:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x48],bx
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block18:
	lea edx,[esp+0x18]
	push edx
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ebx,3
	mov ecx,ebx
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],4
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0xD70]
	cmp esi,eax
	je Block27

 Block23:
	mov edx,ecx
	mov dword ptr [edx+0xD70],eax
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	test esi,esi
	je Block27

 Block26:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block27:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xB4],bl
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	jne Block39

 Block34:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block37:
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x18]
	push ecx
	call esi
	jmp Block37

 Block40:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0xB8],5
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xB8],6
	call ebp
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x18]
	mov bl,7
	push edx
	mov byte ptr [esp+0xB8],bl
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0xB8],8
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esp+0x58]
	mov ecx,dword ptr [ecx+0xD70]
	mov eax,dword ptr [edi]
	mov byte ptr [esp+0xB4],9
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x2C]
	push edx
	lea edx,[esp+0x84]
	push edx
	lea edx,[esp+0x24]
	push edx
	lea edx,[esp+0x58]
	push edx
	push eax
	lea eax,[esp+0xA4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x8C],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x8C]
	push edx
	call esi

 Block54:
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x48],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block58:
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x18],di
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block62:
	mov byte ptr [esp+0xB4],6
	cmp word ptr [esp+0x7C],di
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x7C]
	push edx
	call esi

 Block66:
	mov byte ptr [esp+0xB4],5
	cmp word ptr [esp+0x28],di
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block70:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x38]
	push eax
	call esi

 Block74:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ebx,0xA
	mov ecx,0xD
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block78:
	mov edi,dword ptr [esp+0x58]
	mov esi,dword ptr [edi+0xD70]
	mov byte ptr [esp+0xB4],0xB
	test esi,esi
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block82:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB4],bl
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xB4],esi
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea edx,[esp+0x38]
	mov ebx,0xC
	push edx
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [edi+0xD70]
	mov byte ptr [esp+0xB4],0xD
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0xFFFFFE2C
	push 0xFFFFFE00
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],bl
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0xB4],esi
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov esi,dword ptr [edi+0xD70]
	test esi,esi
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC006153A
	push esi
	call eax
	test eax,eax
	jge Block106

 Block105:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block106:
	mov esi,dword ptr [edi+0xD70]
	test esi,esi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xD78]
	push esi
	push eax
	mov dword ptr [esp+0xC0],0xE
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block112:
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	lea eax,[esp+0x38]
	mov ebx,0xF
	push eax
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xB4],0x10
	test ecx,ecx
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x13C
	push 0x13C
	call IWzCanvas::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],bl
	jne Block125

 Block119:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block121:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block122:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	jne Block126

 Block123:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block127

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block125:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x38]
	push edx
	call esi
	jmp Block122

 Block126:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block127:
	lea edx,[esp+0x6C]
	push edx
	call ebp
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	lea ecx,[esp+0x5C]
	push ecx
	mov dword ptr [esp+0xB8],0x11
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	push 0
	push 0
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE6F
	mov bl,0x12
	push edx
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x13
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	lea eax,[esp+0xB0]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x14
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xD7C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block136

 Block134:
	cmp eax,0x80004002
	je Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	mov byte ptr [esp+0xB4],bl
	mov ebx,8
	cmp word ptr [esp+0x9C],bx
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0x9C]
	push edx
	call esi

 Block140:
	mov byte ptr [esp+0xB4],0x11
	cmp word ptr [esp+0x5C],bx
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[esp+0x5C]
	push ecx
	call esi

 Block144:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp word ptr [esp+0x6C],bx
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[esp+0x6C]
	push eax
	call esi

 Block148:
	mov dword ptr [edi+0xD94],0
	mov dword ptr [edi+0xD98],1
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret
}
}
// CField_AranTutorial::CField_AranTutorial
__SUB_CLASS_THIS0(0013F190, __thiscall, 144061,  CField_AranTutorial, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_AranTutorial::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_AranTutorial::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_AranTutorial::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_AranTutorial::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField::OnCoupleMessage
_SUB_EXCEPTION_HANDLER(1357F0)
__SUB_CLASS_THIS(001357F0, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1357F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x38]
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode1
	movsx eax,al
	sub eax,4
	je Block11

 Block1:
	sub eax,1
	jne Block23

 Block2:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call CInPacket::Decode1
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	push 1
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x40],1
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x3C]
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0x10],ebx
	lea edx,[esp+0x18]
	push 0x72D
	push edx
	mov byte ptr [esp+0x38],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esp+0x10]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block6

 Block5:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	push 0xFFFFFFFF
	push 6
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block6:
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x14]
	jmp Block21

 Block11:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	xor ebx,ebx
	cmp eax,ebx
	jne Block13

 Block12:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax+4],ebx
	lea ecx,[esp+0x24]
	push 0xA1
	push ecx
	mov dword ptr [esp+0x40],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x38],5
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov byte ptr [esp+0x44],6
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push eax
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x1C]
	jmp Block21

 Block13:
	lea edx,[esp+0x10]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x30],7
	mov dword ptr [esp+0x38],ebx
	lea eax,[esp+0x20]
	push 0x72D
	push eax
	mov byte ptr [esp+0x38],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x20CC]
	mov byte ptr [esp+0x30],9
	cmp ecx,ebx
	je Block15

 Block14:
	add ecx,4
	jmp Block16

 Block15:
	xor ecx,ecx

 Block16:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[esp+0x44]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x30],8
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea ecx,[esp+0x38]
	push 6
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x40]
	add esp,8
	mov byte ptr [esp+0x30],7
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x10]

 Block21:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CField_Tournament::OnPacket
__SUB_CLASS_THIS(00163780, __thiscall, 53792,  CField_Tournament, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x176]
	cmp eax,4
	ja Block7

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block3


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Tournament::OnTournament

 Block3:
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_Tournament::OnTournamentMatchTable
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Tournament::OnTournamentSetPrize
	ret 8

 Block6:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_Tournament::OnTournamentUEW
	ret 8

 Block7:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket
}
}
// CField::OnHontailTimer
_SUB_EXCEPTION_HANDLER(130E70)
__SUB_CLASS_THIS(00130E70, __thiscall, 25042,  CField, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130E70
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x30]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,ebp
	jl Block20

 Block1:
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x28],ebp
	cmp edi,ebp
	je Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x1082
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x28],1
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x18]
	push 0x1081
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x28],ebx

 Block4:
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x28],1
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x28],ebp
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp esi,ebp
	jne Block12

 Block11:
	lea edx,[esp+0x1C]
	push 0x1083
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,4
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	jmp Block13

 Block12:
	mov eax,dword ptr [esp+0x30]
	push esi
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call ZXString<char>::Format
	add esp,0xC

 Block13:
	mov dword ptr [esp+0x28],ebp
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block18

 Block17:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push ebp
	push 0xFFFFFFFF
	mov dword ptr [eax+4],ebp
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push edx
	call CUIStatusBar::ChatLogAdd

 Block18:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
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
	ret 4
}
}
// CSnowMan::Hit
_SUB_EXCEPTION_HANDLER(160F50)
__SUB_CLASS_THIS0(00160F50, __thiscall, 143055,  CSnowMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_160F50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [ebp+0x20]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0x10]
	push ecx
	push esi
	mov dword ptr [esp+0x18],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [esp+0x10],0
	jne Block19

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x40],0
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [esp+0x3C],1
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0x10
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x14],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block15:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block19:
	mov ecx,ebp
	call CSnowMan::DrawHPTag
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret
}
}
// CField::SendChangePartyBossMsg
_SUB_EXCEPTION_HANDLER(130370)
__SUB_CLASS_THIS(00130370, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130370
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
	test dword ptr [ecx+0x178],0x800
	jne Block15

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [esi+0x3604]
	test eax,eax
	je Block10

 Block2:
	mov eax,dword ptr [esi+0x20B4]
	cmp dword ptr [esi+0x36B6],eax
	jne Block10

 Block3:
	mov edi,dword ptr [esp+0x30]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CWvsContext::GetPartyMemberByName
	mov esi,eax
	test esi,esi
	jne Block7

 Block4:
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0xC]
	push 0x152
	push eax
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x30]
	push 0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	jmp Block13

 Block7:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [ecx+4],0
	je Block9

 Block8:
	lea edx,[esp+0x30]
	push 0x1590
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x30],3
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	jmp Block13

 Block9:
	push 0x91
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],4
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block10:
	lea ecx,[esp+0xC]
	push 0x150
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x28],0
	je Block12

 Block11:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block12:
	mov eax,dword ptr [esp+0xC]

 Block13:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CField::IsTown
__SUB_CLASS_THIS0(0023A040, __thiscall, 25010,  CField, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x190]
	ret
}
}
// CField::CField
_SUB_EXCEPTION_HANDLER(13C800)
__SUB_CLASS_THIS0(0013C800, __thiscall, 24957,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13C800
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
	mov dword ptr [esp+0x14],esi
	call CMapLoadable::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x148],offset CToolTipHelper::`vftable'
	xor edi,edi
	lea ecx,[esi+0x150]
	mov dword ptr [esi+0x14C],edi
	push 0x64
	mov dword ptr [esp+0x24],edi
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, CToolTipHelper::TTH_INFO, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, CToolTipHelper::TTH_INFO, long>::_CalcAutoGrow
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],1
	lea ebx,[esi+0x16C]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebx+8],eax
	lea ebp,[ebx-0x3FF8]
	call _rand
	add eax,ebp
	mov dword ptr [ebx],eax
	call _rand
	mov cl,byte ptr [ebx]
	add eax,ebp
	mov dword ptr [ebx+4],eax
	mov eax,dword ptr [ebx+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [ebx+4]
	mov edx,dword ptr [ebx+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,ebx
	call TSecType<unsigned long>::SetData
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1AC],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B4],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 0x12
	push 4
	lea ecx,[esi+0x1B8]
	push ecx
	mov byte ptr [esp+0x34],6
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x224],edi
	mov dword ptr [esi+0x228],edi
	mov dword ptr [esi+0x22C],edi
	mov dword ptr [esi+0x23C],edi
	mov dword ptr [esi+0x240],edi
	mov dword ptr [esi+0x244],edi
	mov dword ptr [esi+0x248],edi
	mov dword ptr [esi+0x254],edi
	int 3// TODO: 	mov dword ptr [esi+0x258],offset ZList<CField::WEATHERMSGINFO>::`vftable'
	mov dword ptr [esi+0x260],edi
	mov dword ptr [esi+0x264],edi
	mov dword ptr [esi+0x268],edi
	int 3// TODO: 	mov dword ptr [esi+0x26C],offset ZList<ZRef<DYNAMIC_OBJ_INFO>>::`vftable'
	mov dword ptr [esi+0x274],edi
	mov dword ptr [esi+0x278],edi
	mov dword ptr [esi+0x27C],edi
	lea ecx,[esi+0x280]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::_CalcAutoGrow
	mov dword ptr [esi+0x298],edi
	mov dword ptr [esi+0x29C],edi
	mov dword ptr [esi+0x2A0],edi
	mov dword ptr [esi+0x2A4],edi
	mov dword ptr [esi+0x2A8],edi
	mov dword ptr [esi+0x2B8],edi
	mov dword ptr [esi+0x2BC],edi
	lea ecx,[esi+0x2C4]
	mov byte ptr [esp+0x20],0x11
	mov dword ptr [esi+0x2C0],edi
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xD0C],edi
	mov dword ptr [esi+0xD10],edi
	int 3// TODO: 	mov dword ptr [esi+0xD14],offset ZList<ZRef<CField::UserLook>>::`vftable'
	mov dword ptr [esi+0xD1C],edi
	mov dword ptr [esi+0xD20],edi
	mov dword ptr [esi+0xD24],edi
	mov dword ptr [esi+0xD30],edi
	mov dword ptr [esi+0xD34],edi
	mov dword ptr [esi+0xD38],edi
	int 3// TODO: 	mov eax,offset ZList<long>::`vftable'
	mov dword ptr [esi+0xD28],eax
	mov dword ptr [esi+0xD3C],eax
	mov dword ptr [esi+0xD44],edi
	mov dword ptr [esi+0xD48],edi
	mov dword ptr [esi+0xD4C],edi
	mov dword ptr [esi+0xD50],edi
	mov dword ptr [esi+0xD54],eax
	mov dword ptr [esi+0xD5C],edi
	mov dword ptr [esi+0xD60],edi
	mov dword ptr [esi+0xD64],edi
	mov dword ptr [esi+0xD68],edi
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esi+0xD6C],eax
	mov dword ptr [esi+0xD70],edi
	mov dword ptr [esi+0xD74],edi
	mov dword ptr [esi+0xD78],edi
	mov dword ptr [esi+0xD7C],edi
	int 3// TODO: 	mov dword ptr [esi+0xD80],offset ZList<tagPOINT>::`vftable'
	mov dword ptr [esi+0xD88],edi
	mov dword ptr [esi+0xD8C],edi
	mov dword ptr [esi+0xD90],edi
	mov eax,esi
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
// CField_GuildBoss::~CField_GuildBoss
_SUB_EXCEPTION_HANDLER(13EA00)
__SUB_CLASS_THIS0(0013EA00, __thiscall, 143704,  CField_GuildBoss, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13EA00
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
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	int 3// TODO: 	mov dword ptr [esi],offset CField_GuildBoss::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_GuildBoss::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_GuildBoss::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_GuildBoss::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],0
	lea edi,[esi+0xDBC]
	mov dword ptr [esp+0x10],edi
	mov eax,dword ptr [edi+0x20]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [edi],offset ZRefCounted::`vftable'
	lea edi,[esi+0xDA8]
	mov dword ptr [esp+0x10],edi
	mov eax,dword ptr [edi+0x10]
	mov byte ptr [esp+0x1C],4
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [edi+0xC]
	mov byte ptr [esp+0x1C],3
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	int 3// TODO: 	mov dword ptr [edi],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CSnowBall::Init
_SUB_EXCEPTION_HANDLER(161630)
__SUB_CLASS_THIS(00161630, __thiscall, 143072,  CSnowBall, void, long, long, const ZXString<char>&, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_161630
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x2C]
	xor ebx,ebx
	push eax
	lea ecx,[esi+0x1C]
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],8
	call ZXString<char>::op_assign
	mov edi,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x24]
	sub edi,0x51
	lea ecx,[edi+0x55]
	push ecx
	lea edx,[ebp+0x50]
	push edx
	lea eax,[edi-0x50]
	push eax
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[esi+0x20]
	push edx
	mov dword ptr [esi+0x18],ebx
	call SetRect
	lea eax,[esp+0x2C]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x1C],ebx
	push 0
	lea ebx,[esi+0x30]
	push ebx
	push eax
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [ebx]
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x40]
	push edi
	push ebp
	push eax
	call edx
	test eax,eax
	jge Block6

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block6:
	push 0
	push 0xFF
	push 0xC0015F90
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0
	mov dword ptr [eax],0
	mov ebx,dword ptr [ebx]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block8

 Block7:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x4C]
	push 0
	push ecx
	lea edx,[esp+0x4C]
	push edx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x34]
	add esp,0x28
	cmp edi,eax
	je Block13

 Block9:
	mov dword ptr [esi+0x34],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	test edi,edi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// Field::SkillInfo::Parse
_SUB_EXCEPTION_HANDLER(165EC0)
__SUB_CLASS_THIS(00165EC0, __thiscall, 16511,  Field::SkillInfo, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_165EC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x20],ecx
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [ebp-4],ebx
	test cl,cl
	je Block4

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	jmp Block58

 Block4:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push offset _S_CLASS__1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],4
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov edi,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x14],ebx
	cmp edi,ebx
	je Block17

 Block14:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x14],eax

 Block17:
	xor esi,esi
	cmp dword ptr [ebp-0x14],ebx
	jle Block27

 Block18:
	lea ebx,[ebx]

 Block19:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp edi,ebx
	je Block5

 Block20:
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x30],8
	mov ebx,eax
	mov byte ptr [ebp-4],4
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	cmp esi,0xFFFFFFFF
	je Block26

 Block25:
	mov ecx,dword ptr [ebp-0x20]
	call ZList<long>::AddTail_
	mov dword ptr [eax],ebx

 Block26:
	inc esi
	xor ebx,ebx
	cmp esi,dword ptr [ebp-0x14]
	jl Block19

 Block27:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push offset _S_SKILL__1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	cmp eax,ebx
	je Block33

 Block30:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0xA
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	cmp eax,ebx
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov dword ptr [ebp-0x14],ebx
	cmp esi,ebx
	je Block41

 Block38:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block40

 Block39:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x14],ecx

 Block41:
	cmp dword ptr [ebp-0x14],0
	jle Block51

 Block42:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block5

 Block43:
	lea edx,[ebp-0x50]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x50],8
	mov edi,eax
	mov byte ptr [ebp-4],0xA
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	test edi,edi
	je Block49

 Block48:
	mov ecx,dword ptr [ebp-0x20]
	add ecx,0x14
	call ZList<long>::AddTail_
	mov dword ptr [eax],edi

 Block49:
	inc ebx
	cmp ebx,dword ptr [ebp-0x14]
	jl Block42

 Block50:
	mov edi,dword ptr [ebp-0x1C]

 Block51:
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block53

 Block52:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block53:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block55

 Block54:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block55:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov eax,1

 Block58:
	lea esp,[ebp-0x64]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CField::Update
_SUB_EXCEPTION_HANDLER(146580)
__SUB_CLASS_THIS0(00146580, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_146580
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CMapLoadable::Update
	mov ecx,esi
	call CField::UpdateDynamicObject
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::Update
	mov ecx,dword ptr [TSingleton<CCakePieEvent>::ms_pInstance]
	call CCakePieEvent::Update
	mov eax,dword ptr [esi+0x2A4]
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	sub eax,dword ptr [esi+0x2AC]
	cmp eax,0xBB8
	jbe Block3

 Block2:
	mov dword ptr [esi+0x2A4],0
	call timeGetTime
	mov dword ptr [esi+0x2AC],eax

 Block3:
	call get_update_time
	mov edi,dword ptr [esi+0x264]
	mov ecx,eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [eax+0x40BC]
	mov ebp,ecx
	sub ebp,dword ptr [esi+0x298]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x14],edi
	test edi,edi
	je Block14

 Block4:
	or ebx,0xFFFFFFFF

 Block5:
	lea eax,[esp+0x14]
	push eax
	call ZList<CField::WEATHERMSGINFO>::GetNext
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [eax+8]
	add esp,4
	add eax,0xC
	mov dword ptr [esp+0x34],ecx
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x3C],0
	call ZXString<char>::op_assign
	cmp dword ptr [esp+0x34],1
	mov dword ptr [esp+0x44],0
	jne Block7

 Block6:
	cmp dword ptr [esp+0x1C],0
	jne Block9

 Block7:
	cmp ebp,dword ptr [esp+0x2C]
	jl Block10

 Block8:
	push 1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	push eax
	mov ecx,esi
	call CField::BlowWeather_1

 Block9:
	push edi
	lea ecx,[esi+0x258]
	call ZList<CField::WEATHERMSGINFO>::RemoveAt

 Block10:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x44],ebx
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	jne Block5

 Block13:
	mov ecx,dword ptr [esp+0x18]

 Block14:
	cmp dword ptr [esi+0x2A0],0
	je Block18

 Block15:
	mov eax,dword ptr [esi+0x29C]
	test eax,eax
	je Block18

 Block16:
	sub ecx,eax
	cmp ecx,0x55F0
	jle Block18

 Block17:
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x28],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	push 0
	mov ecx,esi
	call CField::BlowWeather_1

 Block18:
	push 0
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block20

 Block19:
	lea edi,[ecx+4]
	jmp Block21

 Block20:
	xor edi,edi

 Block21:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x24]
	push edx
	push eax
	call CWndMan::GetHandlerFromPoint
	cmp eax,edi
	jne Block35

 Block22:
	push 1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CNpcPool::FindNpc_0
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov edi,eax
	lea eax,[esp+0x24]
	push eax
	call CUserPool::FindBalloon
	mov edx,dword ptr [ebx+0x9C4]
	mov ecx,edx
	cmp ecx,3
	ja Block33

 Block23:
	cmp ECX, 0
je Block28
cmp ECX, 1
je Block24
cmp ECX, 2
je Block26
cmp ECX, 3
je Block26


 Block24:
	test edi,edi
	jne Block33

 Block25:
	xor ecx,ecx
	jmp Block33

 Block26:
	test eax,eax
	jne Block33

 Block27:
	xor ecx,ecx
	jmp Block33

 Block28:
	test edi,edi
	je Block30

 Block29:
	mov ecx,1

 Block30:
	test eax,eax
	je Block33

 Block31:
	mov eax,dword ptr [eax+0x2DF4]
	cmp eax,2
	mov ecx,2
	jle Block33

 Block32:
	mov ecx,3

 Block33:
	cmp ecx,edx
	je Block35

 Block34:
	push ecx
	mov ecx,ebx
	call CInputSystem::SetCursorState

 Block35:
	mov ecx,esi
	call CMapLoadable::ProcessReflection
	mov ecx,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	test ecx,ecx
	je Block37

 Block36:
	call CPortalList::UpdateHiddenPortal

 Block37:
	mov edi,dword ptr [esp+0x18]
	mov ecx,edi
	sub ecx,dword ptr [esi+0xD6C]
	cmp ecx,0x1388
	jle Block39

 Block38:
	mov ecx,esi
	call CField::UpdateQuestLayer
	mov dword ptr [esi+0xD6C],edi

 Block39:
	mov ecx,esi
	call CField::DrawFearEffect
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CField::INITPARAM::~INITPARAM
__SUB_CLASS_THIS0(00319BA0, __thiscall, 25088,  CField::INITPARAM, void) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block5

 Block1:
	push esi
	push edi
	lea esi,[eax-0x10]
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
	pop edi
	mov dword ptr [ebx+4],0
	pop esi

 Block5:
	pop ebx
	ret
}
}
// CField::WEATHERMSGINFO::~WEATHERMSGINFO
__SUB_CLASS_THIS0(0012D700, __thiscall, 25243,  CField::WEATHERMSGINFO, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
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
// CField::RestorePeculiarInfo
__SUB_CLASS_THIS0(00146560, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::RestoreSwinArea
	mov ecx,esi
	call CField::RestoreUserInfo
	mov ecx,esi
	pop esi
	jmp  CField::RestoreForbiddenSkill
}
}
// CField::SendCreateNewPartyMsg
_SUB_EXCEPTION_HANDLER(12EBC0)
__SUB_CLASS_THIS0(0012EBC0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12EBC0
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
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x18],0

 Block5:
	xor esi,esi
	cmp dword ptr [edi+0x3604],esi
	je Block10

 Block6:
	lea ecx,[esp+0x14]
	push 0x14C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],esi
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block8

 Block7:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,esi
	je Block16

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block10:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	lea eax,[ebx+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block12

 Block11:
	cmp ecx,0x7D1
	jne Block15

 Block12:
	mov eax,dword ptr [ebx+0x35]
	push eax
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	jae Block15

 Block13:
	lea ecx,[esp+0x1C]
	push 0x14D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x40],1
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,esi
	je Block16

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block15:
	push 0x91
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],2
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block16:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CField::SendInviteExpeditionMsg
_SUB_EXCEPTION_HANDLER(130A30)
__SUB_CLASS_THIS(00130A30, __thiscall, 24974,  CField, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_130A30
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
	mov ebp,dword ptr [esp+0x28]
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block10

 Block1:
	cmp byte ptr [eax],0
	je Block10

 Block2:
	mov esi,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	test esi,esi
	je Block10

 Block3:
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block6

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,dword ptr [eax+0x20B4]
	call EXPEDITION::GetMasterID
	cmp eax,edi
	jne Block6

 Block5:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ebp
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call ExpeditionIntermediary::SendExpInvitePacket
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 4

 Block6:
	lea ecx,[esp+0x10]
	push 0x1646
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x28],0
	mov eax,dword ptr [eax]
	push 0xC
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::Format
	add esp,8
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x30]
	add esp,8
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
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
// CSnowMan::CSnowMan
__SUB_CLASS_THIS0(0012B110, __thiscall, 143062,  CSnowMan, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CSnowMan::`vftable'
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	ret
}
}
// CField::DeleteBlackList
_SUB_EXCEPTION_HANDLER(1397D0)
__SUB_CLASS_THIS(001397D0, __thiscall, 24985,  CField, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1397D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x90
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	push 0x20
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
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
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
	ret 4
}
}
// CField::FindSeatByPosition
__SUB_CLASS_THIS(0012B6A0, __thiscall, 24998,  CField, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	sub esp,0x10
	mov eax,dword ptr [esp+0x14]
	push esi
	push edi
	mov edi,ecx
	lea ecx,[eax-0xA]
	mov dword ptr [esp+8],ecx
	mov ecx,dword ptr [esp+0x20]
	lea edx,[ecx-0x1E]
	add eax,0xA
	add ecx,0x1E
	mov dword ptr [esp+0xC],edx
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx
	xor esi,esi
	lea ecx,[ecx]

 Block1:
	mov eax,dword ptr [edi+0x1B0]
	test eax,eax
	je Block6

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block6

 Block3:
	mov ecx,dword ptr [eax+esi*8+4]
	mov edx,dword ptr [eax+esi*8]
	lea eax,[eax+esi*8]
	push ecx
	push edx
	lea eax,[esp+0x10]
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc esi
	jmp Block1

 Block5:
	pop edi
	mov eax,esi
	pop esi
	add esp,0x10
	ret 8

 Block6:
	pop edi
	or eax,0xFFFFFFFF
	pop esi
	add esp,0x10
	ret 8
}
}
// CField::RestoreAllowedItem
_SUB_EXCEPTION_HANDLER(132AB0)
__SUB_CLASS_THIS0(00132AB0, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_132AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_ALLOWEDITEM
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x74],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x4C]
	or esi,0xFFFFFFFF
	push eax
	mov dword ptr [esp+0x78],esi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x70],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],3
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,ebx
	sete al
	cmp al,bl
	je Block12

 Block10:
	mov dword ptr [esp+0x68],esi
	cmp ebp,ebx
	je Block49

 Block11:
	jmp Block48

 Block12:
	cmp ebp,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],4
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x68],7
	mov dword ptr [esp+0x24],ebx

 Block22:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block1

 Block23:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block43

 Block24:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x1C]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block26

 Block25:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x70],9
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x74],8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],0xA
	call get_int32
	add esp,8
	cmp word ptr [esp+0x50],8
	mov edi,eax
	mov byte ptr [esp+0x68],8
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0xD54
	call ZList<long>::AddTail_
	mov dword ptr [eax],edi
	mov byte ptr [esp+0x68],7
	cmp esi,ebx
	je Block38

 Block31:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block32:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block34:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block36

 Block35:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block36:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block37:
	mov dword ptr [esp+0x1C],ebx

 Block38:
	cmp word ptr [esp+0x30],8
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block22

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block41:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block22

 Block42:
	jmp Block4

 Block43:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],6
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x6C],3
	call edx
	mov dword ptr [esp+0x68],0xFFFFFFFF

 Block48:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block49:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
// _com_util__ZtlConvertBSTRToString
__SUB(0012C670, __stdcall, 144186,  char*, wchar_t*) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [esp+8]
	test edi,edi
	jne Block2

 Block1:
	xor eax,eax
	pop edi
	ret 4

 Block2:
	push esi
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov eax,esi
	pop esi
	pop edi
	ret 4
}
}
// CField::OnCharacterSale
__SUB_CLASS_THIS(0012A3E0, __thiscall, 25045,  CField, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x244],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0x244]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x3C]
	jmp eax

 Block2:
	ret 8
}
}
// _ZtlSecureTear_double_
__SUB(0012B370, __fastcall, 144185,  uint32_t, double, double*) {
__asm {

 Block0:
	push ebx
	push ebp
	lea eax,[esp+0xC]
	push esi
	lea ebp,[ecx+8]
	mov ebx,ecx
	mov ecx,eax
	push edi
	xor esi,esi
	sub ebx,eax
	mov edi,0xBAADF00D
	sub ebp,ecx
	lea ebx,[ebx]

 Block1:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov ecx,dword ptr [esp+esi*4+0x14]
	lea edx,[ebx+esi*4]
	mov dword ptr [esp+edx+0x14],eax
	xor ecx,eax
	xor eax,edi
	ror ecx,5
	lea edx,[ebp+esi*4]
	ror eax,5
	add eax,ecx
	inc esi
	mov dword ptr [esp+edx+0x14],ecx
	mov edi,eax
	cmp esi,2
	jb Block1

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CField::SendSetGuildNoticeMsg
_SUB_EXCEPTION_HANDLER(135180)
__SUB_CLASS_THIS(00135180, __thiscall, 24985,  CField, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x95
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	push 0x10
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
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
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
	ret 4
}
}
// CField_Tournament::OnTournamentMatchTable
_SUB_EXCEPTION_HANDLER(1630D0)
__SUB_CLASS_THIS(001630D0, __thiscall, 53796,  CField_Tournament, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1630D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x430
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,dword ptr [esp+0x20]
	push esi
	push ecx
	mov ecx,eax
	call CMatchTableDlg::_ctor_0
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0xC],esi
	test esi,esi
	je Block5

 Block4:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov dword ptr [esp+0x18],1
	call CDialog::DoModal
	test esi,esi
	je Block7

 Block6:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CMatchTableDlg>::_ReleaseRaw
	xor esi,esi
	mov dword ptr [esp+0xC],esi

 Block7:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CMatchTableDlg>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4

 Block10:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	jmp Block5
}
}
// CField_GuildBoss::BasicActionAttack
_SUB_EXCEPTION_HANDLER(1517D0)
__SUB_CLASS_THIS0(001517D0, __thiscall, 143707,  CField_GuildBoss, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1517D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	je Block4

 Block1:
	mov dword ptr [esp+0xC],0
	or edi,0xFFFFFFFF
	push edi
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x30],0
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esi+0xDCC]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xDD0]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esi+0xDD4]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+0xDD8]
	mov dword ptr [eax+0xC],edx
	mov ecx,dword ptr [TSingleton<CReactorPool>::ms_pInstance]
	call CReactorPool::FindHitReactor
	lea ecx,[esp+0xC]
	test eax,eax
	jne Block8

 Block2:
	push 1
	lea eax,[esp+0x14]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::TryDoingNormalAttack
	test eax,eax
	jge Block5

 Block3:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x2C],edi
	call ZArray<tagRECT>::RemoveAll

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block5:
	lea ecx,[esi+0xDBC]
	call CPulley::Hit
	cmp dword ptr [esi+0xDA4],0
	jne Block7

 Block6:
	push 0x103
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],1
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0
	call ZArray<unsigned char>::RemoveAll

 Block7:
	lea ecx,[esp+0xC]

 Block8:
	mov dword ptr [esp+0x2C],edi
	call ZArray<tagRECT>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CField::LoadDynamicObject
_SUB_EXCEPTION_HANDLER(145A10)
__SUB_CLASS_THIS0(00145A10, __thiscall, 24959,  CField, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_145A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x50],ecx
	xor ebx,ebx
	mov dword ptr [ebp+0x48],ebx

 Block1:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x48]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	je Block120

 Block2:
	lea edx,[ebp-0x7C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x44],edi
	cmp eax,ebx
	je Block5

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x2C]
	cmp eax,ebx
	mov edi,ecx
	mov dword ptr [ebp+0x44],edi
	jge Block5

 Block4:
	cmp eax,0x80004002
	jne Block121

 Block5:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x603
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp edi,ebx
	je Block120

 Block10:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	cmp eax,ebx
	je Block13

 Block11:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	jge Block13

 Block12:
	cmp eax,0x80004002
	jne Block121

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],7
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp esi,ebx
	je Block120

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x4C]
	push edx
	push esi
	mov dword ptr [ebp+0x4C],ebx
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	cmp dword ptr [ebp+0x4C],ebx
	mov dword ptr [ebp+0x3C],ebx
	jle Block118

 Block21:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xBC]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x38],edi
	test eax,eax
	je Block24

 Block22:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x28]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x28]
	mov edi,ecx
	mov dword ptr [ebp+0x38],edi
	test eax,eax
	jge Block24

 Block23:
	cmp eax,0x80004002
	jne Block121

 Block24:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0xB
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x168A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block120

 Block29:
	lea edx,[ebp-0x3C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	test eax,eax
	sete byte ptr [ebp+0x5B]
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xB
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	cmp byte ptr [ebp+0x5B],0
	je Block35

 Block34:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],7
	call eax
	jmp Block116

 Block35:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<DYNAMIC_OBJ_INFO>>::call
	lea esi,[eax+0x10]
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x24],esi
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x671
	push ecx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x9C]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x10
	jne Block37

 Block36:
	mov eax,dword ptr [eax+8]
	jmp Block38

 Block37:
	mov eax,offset _S___3

 Block38:
	lea ebx,[esi+0x24]
	mov dword ptr [ebp+0x68],eax
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	jne Block41

 Block39:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebx],0
	jmp Block42

 Block41:
	mov eax,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	mov ecx,dword ptr [ebp+0x54]
	mov ebx,eax
	push 0
	dec ebx
	push ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call WideCharToMultiByte
	mov ecx,dword ptr [ebp+0x54]
	push ebx
	call ZXString<char>::ReleaseBuffer

 Block42:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0xE
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ecx,esi
	call ZList<long>::RemoveAll
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1765
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call _xvariant_t::op_long
	cmp word ptr [ebp-0x5C],8
	mov ebx,eax
	mov dword ptr [ebp+0x5C],ebx
	mov byte ptr [ebp-4],0xE
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov dword ptr [ebp+0x68],0
	test ebx,ebx
	jle Block61

 Block51:
	lea ebx,[ebx]

 Block52:
	mov dword ptr [ebp+0x60],0
	lea edx,[ebp+0x34]
	push 0x1766
	push edx
	mov byte ptr [ebp-4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x14
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xDC]
	mov byte ptr [ebp-4],0x15
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call _xvariant_t::op_long
	cmp word ptr [ebp-0xDC],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x14
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0xD4]
	xor ecx,ecx
	mov word ptr [ebp-0xDC],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp-0xDC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block58:
	mov ecx,esi
	call ZList<long>::AddTail_
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [ebp+0x68]
	inc eax
	cmp eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x68],eax
	jl Block52

 Block61:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ADB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call _xvariant_t::op_long
	mov ebx,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x10],bx
	jne Block64

 Block62:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x7A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp]
	mov byte ptr [ebp-4],0x19
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call _xvariant_t::op_long
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp],bx
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x963
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x1B
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call _xvariant_t::op_long
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x2C],bx
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esi+0x20],eax
	test eax,eax
	jne Block76

 Block74:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx]
	mov ebx,dword ptr [ebp+0x50]
	push 0
	push eax
	mov ecx,ebx
	call CMapLoadable::FootHoldStateChange
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block76

 Block75:
	lea edx,[ebp+0x60]
	push edx
	call ZList<long>::GetNext
	mov edx,dword ptr [esi+0x20]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebx+0x3C]
	add esp,4
	push edx
	push eax
	call CWvsPhysicalSpace2D::FootHoldStateChange
	cmp dword ptr [ebp+0x60],0
	jne Block75

 Block76:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x1D
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call _xvariant_t::op_long
	cmp word ptr [ebp-0x4C],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xE
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	test ebx,ebx
	je Block107

 Block81:
	mov ebx,dword ptr [esi+0x2C]
	test ebx,ebx
	je Block86

 Block82:
	add ebx,0xFFFFFFF0
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block83:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block85

 Block84:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block85:
	mov dword ptr [esi+0x2C],0

 Block86:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MOVING_OBJ_INFO>>::call
	mov ecx,esp
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x64],esp
	add eax,0x10
	push 0x67A
	push ecx
	mov dword ptr [esi+0x2C],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call _xvariant_t::op_long
	mov dword ptr [ebx],eax
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xE
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x937
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],0x21
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call _xvariant_t::op_long
	mov dword ptr [ebx+4],eax
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0xE
	jne Block93

 Block91:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x938
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],0x23
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call _xvariant_t::op_long
	mov dword ptr [ebx+8],eax
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0xE
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp-0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x939
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xCC]
	mov byte ptr [ebp-4],0x25
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call _xvariant_t::op_long
	mov dword ptr [ebx+0xC],eax
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0xE
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x93A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xEC]
	mov byte ptr [ebp-4],0x27
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ebx,dword ptr [esi+0x2C]
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call _xvariant_t::op_long
	mov dword ptr [ebx+0x10],eax
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],0xE
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0xE4]
	xor ecx,ecx
	mov word ptr [ebp-0xEC],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp-0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [eax+0x14],ecx
	mov eax,dword ptr [esi+0x2C]
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [eax+0x18],edx

 Block107:
	mov ecx,dword ptr [ebp+0x50]
	add ecx,0x26C
	call ZList<ZRef<DYNAMIC_OBJ_INFO>>::AddTail_
	mov dword ptr [ebp+0x60],eax
	lea ebx,[esi-0x10]
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block112

 Block108:
	add eax,0xFFFFFFF0
	mov dword ptr [ebp+0x68],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block111

 Block109:
	mov eax,dword ptr [ebp+0x68]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [ebp+0x68],0
	je Block111

 Block110:
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block111:
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+4],0

 Block112:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x20]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	add ecx,0x280
	mov dword ptr [edx+4],esi
	call ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>>::Insert
	lea esi,[ebx+4]
	push esi
	mov byte ptr [ebp-4],0xB
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block115

 Block113:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block115

 Block114:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block115:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp+0x24],0
	mov byte ptr [ebp-4],7
	call edx
	mov esi,dword ptr [ebp+0x40]
	mov ebx,dword ptr [ebp+0x3C]

 Block116:
	inc ebx
	cmp ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x3C],ebx
	jl Block21

 Block117:
	mov edi,dword ptr [ebp+0x44]
	xor ebx,ebx

 Block118:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],3
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,8
	mov dword ptr [ebp+0x48],eax
	jl Block1

 Block119:
	lea esp,[ebp-0xFC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	push eax
	call _com_issue_error
}
}
// CField::SendSetFriendMsg
_SUB_EXCEPTION_HANDLER(135240)
__SUB_CLASS_THIS(00135240, __thiscall, 24989,  CField, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135240
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x3C],eax
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	lea eax,[esp+0x5C]
	push ebx
	push eax
	mov dword ptr [esp+0x5C],1
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block3

 Block1:
	cmp dword ptr [esp+0x64],ebx
	je Block15

 Block2:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xAA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block15

 Block3:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor eax,eax
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],eax
	mov word ptr [esp+0x4C],ax
	mov byte ptr [esp+0x4E],al
	mov ecx,esp
	lea eax,[esp+0x64]
	mov dword ptr [esp+0x14],esp
	mov dword ptr [esp+0x28],ebx
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CWvsContext::GetFriendByName
	cmp dword ptr [esp+0x20],ebx
	je Block8

 Block4:
	cmp byte ptr [esp+0x31],1
	je Block8

 Block5:
	mov ecx,dword ptr [esp+0x60]
	push ecx
	lea edx,[esp+0x3A]
	push edx
	call dword ptr [ZImports::_lstrcmpA]
	test eax,eax
	jne Block8

 Block6:
	cmp dword ptr [esp+0x64],ebx
	je Block15

 Block7:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x17C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block15

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20CC]
	cmp eax,ebx
	je Block10

 Block9:
	add eax,4
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push eax
	lea ecx,[esp+0x60]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block14

 Block12:
	cmp dword ptr [esp+0x64],ebx
	je Block15

 Block13:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x17D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block15

 Block14:
	push 0x99
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x58],2
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x60]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x64]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x54],1
	call ZArray<unsigned char>::RemoveAll

 Block15:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	mov ecx,dword ptr [esp+0x3C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x4C
	ret 0xC
}
}
// CField::IsEventMap
__SUB_CLASS_THIS(0012F900, __thiscall, 24999,  CField, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x16C]
	push edi
	mov ecx,esi
	call TSecType<unsigned long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<unsigned long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	mul edi
	mov eax,edx
	shr eax,0x12
	xor edx,edx
	mov esi,0x64
	div esi
	xor eax,eax
	cmp edx,9
	sete al
	cmp dword ptr [esp+0xC],0
	mov esi,eax
	je Block4

 Block1:
	mov eax,0xD1B71759
	mul ecx
	mov eax,edx
	shr eax,0xD
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,5
	jne Block3

 Block2:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block3:
	mov eax,esi

 Block4:
	pop edi
	pop esi
	ret 4
}
}
