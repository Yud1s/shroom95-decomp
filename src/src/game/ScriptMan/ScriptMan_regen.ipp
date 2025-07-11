#include "regen.hpp"
// ScriptMan.ipp
#include "ScriptMan.hpp"

// CScriptMan::OnScriptMessage
__SUB_CLASS_THIS(002DE0F0, __thiscall, 52474,  CScriptMan, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push edi
	mov edi,ecx
	cmp dword ptr [edi+4],0
	je Block2

 Block1:
	push 0x21000003
	lea ecx,[esp+0x10]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0xC]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+8]
	push ecx
	mov dword ptr [esp+0xC],eax
	call _CxxThrowException

 Block2:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	mov dword ptr [edi+4],1
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [esp+0x10],edx
	call CInPacket::Decode1
	mov byte ptr [esp+0x18],al
	mov eax,dword ptr [esp+0x10]
	cmp eax,0xF
	ja Block19

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block8
cmp EAX, 4
je Block10
cmp EAX, 5
je Block11
cmp EAX, 6
je Block16
cmp EAX, 7
je Block17
cmp EAX, 8
je Block12
cmp EAX, 9
je Block13
cmp EAX, 10
je Block14
cmp EAX, 11
je Block15
cmp EAX, 12
je Block19
cmp EAX, 13
je Block7
cmp EAX, 14
je Block9
cmp EAX, 15
je Block18


 Block4:
	mov eax,dword ptr [esp+0x18]
	push eax
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnSay
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block5:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnSayImage
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block6:
	mov edx,dword ptr [esp+0x18]
	push 0
	push 0
	push edx
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskYesNo
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block7:
	mov eax,dword ptr [esp+0x18]
	push 1
	push 0
	push eax
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskYesNo
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block8:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskText
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block9:
	mov edx,dword ptr [esp+0x18]
	push edx
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskBoxText
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block10:
	mov eax,dword ptr [esp+0x18]
	push eax
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskNumber
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block11:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskMenu
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block12:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskAvatar
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block13:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskMembershopAvatar
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block14:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskPet
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block15:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskPetAll
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block16:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskQuiz
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block17:
	push esi
	push ebp
	push ebx
	mov ecx,edi
	call CScriptMan::OnAskSpeedQuiz
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4

 Block18:
	push esi
	mov ecx,edi
	call CScriptMan::OnAskSlideMenu

 Block19:
	pop esi
	pop ebp
	pop ebx
	mov dword ptr [edi+4],0
	pop edi
	pop ecx
	ret 4
}
}
// CScriptMan::OnPacket
__SUB_CLASS_THIS(002DE360, __thiscall, 52473,  CScriptMan, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x16B
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	push eax
	call CScriptMan::OnScriptMessage

 Block2:
	ret 8
}
}
// CScriptMan::OnAskMembershopAvatar
_SUB_EXCEPTION_HANDLER(2DD340)
__SUB_CLASS_THIS(002DD340, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DD340
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov ebp,dword ptr [esp+0x50]
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	xor eax,eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x50],eax
	mov ecx,ebp
	mov byte ptr [esp+0x40],1
	call CInPacket::Decode1
	movzx esi,al
	test esi,esi
	jle Block3

 Block1:
	mov ecx,ebp
	call CInPacket::Decode4
	push 0xFFFFFFFF
	lea ecx,[esp+0x54]
	mov edi,eax
	call ZArray<long>::InsertBefore
	dec esi
	mov dword ptr [eax],edi
	test esi,esi
	jg Block1

 Block2:
	mov edi,dword ptr [esp+0x14]

 Block3:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block18

 Block7:
	add eax,8
	je Block18

 Block8:
	lea esi,[eax-8]
	test esi,esi
	je Block10

 Block9:
	lea ecx,[esi+0xC]
	push ecx
	call ebp

 Block10:
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [edi+0xC],esi
	test eax,eax
	je Block14

 Block11:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	lea eax,[esi+4]
	push eax
	call ebp
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov edi,dword ptr [edi+0xC]
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block16

 Block15:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block16:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x50],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	push eax
	push 5
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push ecx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	lea edx,[esp+0x58]
	push edx
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_AVATAR
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	push 0x41
	lea ecx,[esp+0x2C]
	mov esi,eax
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40],4
	test eax,eax
	jne Block19

 Block17:
	xor edx,edx
	jmp Block20

 Block18:
	xor esi,esi
	jmp Block10

 Block19:
	mov edx,dword ptr [eax-4]

 Block20:
	mov ecx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edx
	jbe Block25

 Block21:
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [eax-4]

 Block23:
	add eax,eax
	cmp ecx,eax
	ja Block23

 Block24:
	lea ecx,[esp+0x50]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block25:
	mov edx,dword ptr [esp+0x30]
	mov byte ptr [eax+edx],9
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	mov ebx,1
	add eax,ebx
	mov dword ptr [esp+0x30],eax
	cmp esi,ebx
	jne Block46

 Block26:
	test ecx,ecx
	jne Block28

 Block27:
	xor esi,esi
	jmp Block29

 Block28:
	mov esi,dword ptr [ecx-4]

 Block29:
	lea edx,[eax+1]
	cmp edx,esi
	jbe Block36

 Block30:
	test ecx,ecx
	jne Block32

 Block31:
	xor eax,eax
	jmp Block34

 Block32:
	mov eax,dword ptr [ecx-4]
	jmp Block34

 Block34:
	add eax,eax
	cmp edx,eax
	ja Block34

 Block35:
	lea ecx,[esp+0x50]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]

 Block36:
	mov byte ptr [ecx+eax],bl
	add dword ptr [esp+0x30],ebx
	mov eax,dword ptr [esp+0x2C]
	mov ebx,dword ptr [edi+0x128]
	test eax,eax
	jne Block38

 Block37:
	xor edx,edx
	jmp Block39

 Block38:
	mov edx,dword ptr [eax-4]

 Block39:
	mov ecx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edx
	jbe Block45

 Block40:
	test eax,eax
	je Block43

 Block41:
	mov eax,dword ptr [eax-4]
	jmp Block43

 Block43:
	add eax,eax
	cmp ecx,eax
	ja Block43

 Block44:
	lea edx,[esp+0x50]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block45:
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [eax+ecx],bl
	inc dword ptr [esp+0x30]
	jmp Block56

 Block46:
	test ecx,ecx
	jne Block48

 Block47:
	xor esi,esi
	jmp Block49

 Block48:
	mov esi,dword ptr [ecx-4]

 Block49:
	lea edx,[eax+1]
	cmp edx,esi
	jbe Block55

 Block50:
	test ecx,ecx
	jne Block52

 Block51:
	xor eax,eax
	jmp Block53

 Block52:
	mov eax,dword ptr [ecx-4]

 Block53:
	add eax,eax
	cmp edx,eax
	ja Block53

 Block54:
	lea edx,[esp+0x50]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]

 Block55:
	mov byte ptr [ecx+eax],0
	add dword ptr [esp+0x30],ebx

 Block56:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block65

 Block57:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block58:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block60

 Block59:
	add eax,8
	jmp Block61

 Block60:
	xor eax,eax

 Block61:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block64

 Block62:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block64

 Block63:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block64:
	mov dword ptr [esi+0xC],0

 Block65:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],3
	call ZArray<unsigned char>::RemoveAll
	mov byte ptr [esp+0x40],1
	test edi,edi
	je Block69

 Block66:
	lea esi,[edi+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block67:
	lea edx,[esi+4]
	push edx
	call ebp
	test esi,esi
	je Block69

 Block68:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block69:
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x40],0
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0xC
}
}
// CScriptMan::OnAskSlideMenu
_SUB_EXCEPTION_HANDLER(2DBE50)
__SUB_CLASS_THIS(002DBE50, __thiscall, 52474,  CScriptMan, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DBE50
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
	mov ebp,ecx
	mov esi,dword ptr [esp+0x34]
	mov ecx,esi
	call CInPacket::Decode4
	test eax,eax
	jne Block11

 Block1:
	push 0x104
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block3

 Block2:
	push esi
	mov ecx,eax
	call CSlideMenuDlgEX::_ctor_0
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	or edi,0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [esp+0x30],edi
	call ZRef<CSlideMenuDlgEX>::op_assign_ptr
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block6

 Block5:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x2C],1
	call CDialog::DoModal
	mov ebx,eax
	cmp ebx,3
	jne Block9

 Block7:
	mov dword ptr [esp+0x2C],edi
	test esi,esi
	je Block31

 Block8:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CSlideMenuDlgEX>::_ReleaseRaw
	jmp Block31

 Block9:
	mov ecx,esi
	call CSlideMenuDlgEX::GetSelectResult
	mov edi,eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block22

 Block10:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CSlideMenuDlgEX>::_ReleaseRaw
	jmp Block22

 Block11:
	cmp eax,1
	jne Block21

 Block12:
	push 0xE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],2
	test eax,eax
	je Block14

 Block13:
	push esi
	mov ecx,eax
	call CSlideMenuDlg::_ctor_0
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	or edi,0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [esp+0x30],edi
	call ZRef<CSlideMenuDlg>::op_assign_ptr
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block17

 Block16:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,esi
	mov dword ptr [esp+0x2C],3
	call CDialog::DoModal
	mov ebx,eax
	cmp ebx,3
	jne Block20

 Block18:
	mov dword ptr [esp+0x2C],edi
	test esi,esi
	je Block31

 Block19:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CSlideMenuDlg>::_ReleaseRaw
	jmp Block31

 Block20:
	mov edi,dword ptr [esi+0x9C]
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CSlideMenuDlg>::_ReleaseRaw
	jmp Block22

 Block21:
	mov ebx,dword ptr [esp+0x34]
	mov edi,dword ptr [esp+0x34]

 Block22:
	test edi,edi
	jl Block27

 Block23:
	push 0x41
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0xF
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],4
	call COutPacket::Encode1
	lea ecx,[esp+0x14]
	cmp ebx,1
	jne Block25

 Block24:
	push ebx
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	jmp Block26

 Block25:
	push 0
	call COutPacket::Encode1

 Block26:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block27:
	cmp dword ptr [ebp+0x14],0
	lea esi,[ebp+0x10]
	je Block29

 Block28:
	push 0
	mov ecx,esi
	call ZRef<CSlideMenuDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block29:
	cmp dword ptr [ebp+0x1C],0
	lea esi,[ebp+0x18]
	je Block31

 Block30:
	push 0
	mov ecx,esi
	call ZRef<CSlideMenuDlgEX>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block31:
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
// CScriptMan::Init
__SUB_CLASS_THIS0(002DBD10, __thiscall, 52471,  CScriptMan, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC]
	xor ebx,ebx
	push edi
	mov dword ptr [esi+4],ebx
	cmp ecx,ebx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	cmp dword ptr [esi+0xC],ebx
	lea edi,[esi+8]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov ecx,dword ptr [esi+0x14]
	cmp ecx,ebx
	je Block6

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	cmp dword ptr [esi+0x14],ebx
	lea edi,[esi+0x10]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CSlideMenuDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,dword ptr [esi+0x1C]
	cmp ecx,ebx
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	add esi,0x18
	cmp dword ptr [esi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,esi
	call ZRef<CSlideMenuDlgEX>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CScriptMan::OnAskText
_SUB_EXCEPTION_HANDLER(2DC790)
__SUB_CLASS_THIS(002DC790, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC790
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x54]
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	lea ecx,[esp+0x54]
	push ecx
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0x48],ebx
	call CInPacket::DecodeStr
	mov ecx,esi
	mov byte ptr [esp+0x44],1
	call CInPacket::Decode2
	movsx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x1C],edx
	call CInPacket::Decode2
	cwde
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x1C],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	lea ebp,[edi+8]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block7:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block9:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x54],3
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x5C]
	push ecx
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	movzx eax,byte ptr [esp+0x58]
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	mov eax,1

 Block15:
	mov edx,dword ptr [esp+0x18]
	push ebx
	push ebx
	mov dword ptr [esi+0xC38],eax
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x5C]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov edi,eax
	cmp edi,3
	je Block22

 Block16:
	push 0x41
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],4
	call COutPacket::Encode1
	lea ecx,[esp+0x2C]
	cmp edi,1
	jne Block18

 Block17:
	push edi
	call COutPacket::Encode1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	jmp Block19

 Block18:
	push ebx
	call COutPacket::Encode1

 Block19:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [ebp+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,ebp
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block21:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],3
	call ZArray<unsigned char>::RemoveAll

 Block22:
	push ebx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x48],1
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0x10
}
}
// CScriptMan::OnSay
_SUB_EXCEPTION_HANDLER(2DC110)
__SUB_CLASS_THIS(002DC110, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC110
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
	mov edi,ecx
	test byte ptr [esp+0x54],4
	mov esi,dword ptr [esp+0x50]
	je Block2

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [esp+0x4C],eax

 Block2:
	lea eax,[esp+0x50]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0x40],ebx
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0x18],ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],edx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40],1
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add edi,8
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block9

 Block8:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block9:
	mov eax,dword ptr [edi+4]
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block11:
	mov esi,dword ptr [edi+4]
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block13

 Block12:
	lea ecx,[esi+0xC]
	push ecx
	call ebp

 Block13:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x5C]
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x50],2
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	push eax
	push ebx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	movzx eax,byte ptr [esp+0x54]
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block16

 Block14:
	xor eax,eax
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	mov eax,1

 Block17:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esi+0xC38],eax
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov esi,eax
	cmp esi,3
	je Block24

 Block18:
	push 0x41
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push ebx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],3
	call COutPacket::Encode1
	cmp esi,0x2001
	jne Block20

 Block19:
	mov esi,1
	jmp Block21

 Block20:
	sub esi,0x2000
	neg esi
	sbb esi,esi

 Block21:
	push esi
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [edi+4],ebx
	je Block23

 Block22:
	push ebx
	mov ecx,edi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block23:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],2
	call ZArray<unsigned char>::RemoveAll

 Block24:
	push ebx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x44],bl
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x10
}
}
// CScriptMan::OnAskMenu
_SUB_EXCEPTION_HANDLER(2DCE00)
__SUB_CLASS_THIS(002DCE00, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DCE00
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
	mov esi,ecx
	mov ecx,dword ptr [esp+0x44]
	lea eax,[esp+0x44]
	push eax
	call CInPacket::DecodeStr
	xor ebx,ebx
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x38],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	lea ebp,[esi+8]
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block7:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block9:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	movzx eax,byte ptr [esp+0x48]
	mov byte ptr [esp+0x34],2
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	mov eax,1

 Block15:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esi+0xC38],eax
	mov ecx,esp
	lea eax,[esp+0x50]
	mov dword ptr [esp+0x54],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	push 4
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov edi,eax
	cmp edi,3
	je Block27

 Block16:
	mov esi,dword ptr [esi+0x110]
	push 0x41
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call COutPacket::Encode1
	cmp edi,1
	je Block19

 Block17:
	cmp edi,0x2001
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	jmp Block20

 Block19:
	push 1
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x20]
	call COutPacket::Encode4

 Block20:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	cmp edi,1
	je Block22

 Block21:
	cmp edi,0x2001
	jne Block24

 Block22:
	cmp esi,0xFFFFFFFE
	jne Block24

 Block23:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	call CWvsContext::SendMigrateToShopRequest

 Block24:
	cmp dword ptr [ebp+4],ebx
	je Block26

 Block25:
	push ebx
	mov ecx,ebp
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block26:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],2
	call ZArray<unsigned char>::RemoveAll

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],bl
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x10
}
}
// CScriptMan::OnSayImage
_SUB_EXCEPTION_HANDLER(2DC310)
__SUB_CLASS_THIS(002DC310, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC310
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
	mov dword ptr [esp+0x18],ecx
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x40],0
	test eax,eax
	je Block17

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block17

 Block2:
	add eax,8
	je Block17

 Block3:
	lea ebp,[eax-8]
	mov dword ptr [esp+0x24],ebp
	test ebp,ebp
	je Block5

 Block4:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push 0
	push 9
	mov ecx,ebp
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edi,dword ptr [esp+0x50]
	mov ecx,edi
	call CInPacket::Decode1
	movzx esi,al
	test esi,esi
	jle Block14

 Block6:
	mov dword ptr [esp+0x14],esi
	mov bl,2
	jmp Block8

 Block8:
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block11

 Block9:
	cmp byte ptr [eax],0
	je Block11

 Block10:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x54]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call CUtilDlgEx::AddImageList
	mov eax,dword ptr [esp+0x50]

 Block11:
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	sub dword ptr [esp+0x14],1
	jne Block8

 Block14:
	xor eax,eax
	cmp esi,1
	setg al
	mov ecx,ebp
	push eax
	push 0
	call CUtilDlgEx::SetUtilDlgEx_IMAGE
	mov ecx,ebp
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebp
	call CDialog::DoModal
	mov ebx,eax
	cmp ebx,3
	je Block35

 Block15:
	push 0x41
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40],3
	test eax,eax
	jne Block18

 Block16:
	xor edx,edx
	jmp Block19

 Block17:
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	jmp Block5

 Block18:
	mov edx,dword ptr [eax-4]

 Block19:
	mov ecx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edx
	jbe Block24

 Block20:
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	add eax,eax
	cmp ecx,eax
	ja Block22

 Block23:
	lea ecx,[esp+0x50]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block24:
	mov edx,dword ptr [esp+0x30]
	mov esi,1
	sub ebx,esi
	mov byte ptr [eax+edx],1
	add dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0x2C]
	neg ebx
	sbb bl,bl
	and bl,0xFE
	inc bl
	test eax,eax
	jne Block26

 Block25:
	xor edx,edx
	jmp Block27

 Block26:
	mov edx,dword ptr [eax-4]

 Block27:
	mov ecx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edx
	jbe Block32

 Block28:
	test eax,eax
	je Block30

 Block29:
	mov eax,dword ptr [eax-4]

 Block30:
	add eax,eax
	cmp ecx,eax
	ja Block30

 Block31:
	lea ecx,[esp+0x50]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block32:
	mov edx,dword ptr [esp+0x30]
	mov byte ptr [eax+edx],bl
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x30],esi
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x18]
	add esi,8
	cmp dword ptr [esi+4],0
	je Block34

 Block33:
	push 0
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block34:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],1
	call ZArray<unsigned char>::RemoveAll

 Block35:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test ebp,ebp
	je Block37

 Block36:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x10
}
}
// CScriptMan::OnAskPet
_SUB_EXCEPTION_HANDLER(2DD6E0)
__SUB_CLASS_THIS(002DD6E0, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DD6E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov ebp,dword ptr [esp+0x6C]
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	mov ecx,ebp
	mov dword ptr [esp+0x5C],0
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0x1C],ecx
	push 0x41
	lea ecx,[esp+0x48]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x60],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	test eax,eax
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
	mov dword ptr [esp+0x30],0

 Block5:
	mov dword ptr [esp+0x6C],0
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],2
	test eax,eax
	jle Block63

 Block6:
	mov dword ptr [esp+0x18],eax

 Block7:
	push 8
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x34]
	push ecx
	push edx
	push 5
	mov ecx,ebx
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block26

 Block8:
	push eax
	push 5
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block12:
	mov dword ptr [esp+0x28],0

 Block13:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	je Block15

 Block14:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	push 0xFFFFFFFF
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x60],3
	call ZArray<ZRef<GW_ItemSlotPet>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block17

 Block16:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block21

 Block20:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block21:
	mov dword ptr [edi+4],0

 Block22:
	mov dword ptr [edi+4],esi
	mov byte ptr [esp+0x5C],2
	test esi,esi
	je Block26

 Block23:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block25:
	mov dword ptr [esp+0x40],0

 Block26:
	mov esi,1
	sub dword ptr [esp+0x18],esi
	jne Block7

 Block27:
	cmp dword ptr [esp+0x1C],0
	jle Block63

 Block28:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block54

 Block29:
	cmp byte ptr [eax],0
	je Block54

 Block30:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x5C],4
	test eax,eax
	je Block32

 Block31:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0x5C],2
	test eax,eax
	je Block44

 Block34:
	add eax,8
	je Block44

 Block35:
	lea esi,[eax-8]
	test esi,esi
	je Block37

 Block36:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [edi+0xC],esi
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block39

 Block38:
	push 0
	lea ecx,[esp+0x40]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block39:
	mov esi,dword ptr [edi+0xC]
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block41

 Block40:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x6C],5
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x74]
	push eax
	push 6
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_Pet
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,3
	jne Block45

 Block42:
	mov byte ptr [esp+0x5C],2
	test esi,esi
	je Block81

 Block43:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block81

 Block44:
	xor esi,esi
	jmp Block37

 Block45:
	cmp eax,1
	jne Block51

 Block46:
	mov eax,dword ptr [esi+0x160]
	mov edx,dword ptr [esp+0x6C]
	mov edi,dword ptr [edx+eax*8+4]
	mov dword ptr [esp+0x40],edi
	test edi,edi
	je Block48

 Block47:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	push 1
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x60],6
	call COutPacket::Encode1
	push 8
	lea ecx,[edi+0x18]
	push ecx
	lea ecx,[esp+0x4C]
	call COutPacket::EncodeBuffer
	mov byte ptr [esp+0x5C],5
	test edi,edi
	je Block52

 Block49:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block52

 Block50:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	jmp Block52

 Block51:
	push 0
	lea ecx,[esp+0x48]
	call COutPacket::Encode1

 Block52:
	mov byte ptr [esp+0x5C],2
	test esi,esi
	je Block72

 Block53:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block72

 Block54:
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	jne Block56

 Block55:
	xor edx,edx
	jmp Block57

 Block56:
	mov edx,dword ptr [eax-4]

 Block57:
	mov ecx,dword ptr [esp+0x4C]
	inc ecx
	cmp ecx,edx
	jbe Block62

 Block58:
	test eax,eax
	je Block60

 Block59:
	mov eax,dword ptr [eax-4]

 Block60:
	add eax,eax
	cmp ecx,eax
	ja Block60

 Block61:
	lea ecx,[esp+0x6C]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x54]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x48]

 Block62:
	mov edx,dword ptr [esp+0x4C]
	mov byte ptr [eax+edx],1
	mov eax,dword ptr [esp+0x6C]
	add dword ptr [esp+0x4C],esi
	push 8
	push eax
	lea ecx,[esp+0x4C]
	call COutPacket::EncodeBuffer
	jmp Block72

 Block63:
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	jne Block65

 Block64:
	xor edx,edx
	jmp Block66

 Block65:
	mov edx,dword ptr [eax-4]

 Block66:
	mov ecx,dword ptr [esp+0x4C]
	inc ecx
	cmp ecx,edx
	jbe Block71

 Block67:
	test eax,eax
	je Block69

 Block68:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block69:
	add eax,eax
	cmp ecx,eax
	ja Block69

 Block70:
	lea ecx,[esp+0x6C]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x54]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x48]

 Block71:
	mov edx,dword ptr [esp+0x4C]
	mov byte ptr [eax+edx],2
	inc dword ptr [esp+0x4C]

 Block72:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x44]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x20]
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block81

 Block73:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block80

 Block74:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block76

 Block75:
	add eax,8
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block80

 Block78:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block80

 Block79:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block80:
	mov dword ptr [esi+0xC],0

 Block81:
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x5C],1
	call ZArray<ZRef<GW_ItemSlotPet>>::RemoveAll
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x5C],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0xC
}
}
// CScriptMan::OnAskAvatar
_SUB_EXCEPTION_HANDLER(2DCFF0)
__SUB_CLASS_THIS(002DCFF0, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DCFF0
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
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x54]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x1C],eax
	call CInPacket::DecodeStr
	xor edi,edi
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x54],edi
	mov ecx,ebp
	mov byte ptr [esp+0x44],1
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,edi
	jle Block4

 Block1:
	nop

 Block2:
	mov ecx,ebp
	call CInPacket::Decode4
	push 0xFFFFFFFF
	lea ecx,[esp+0x58]
	mov edi,eax
	call ZArray<long>::InsertBefore
	dec esi
	mov dword ptr [eax],edi
	test esi,esi
	jg Block2

 Block3:
	xor edi,edi

 Block4:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x44],2
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	lea ebp,[ebx+8]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x44],1
	mov dword ptr [esp+0x1C],ebp
	cmp eax,edi
	je Block20

 Block8:
	add eax,8
	cmp eax,edi
	je Block20

 Block9:
	lea esi,[eax-8]
	cmp esi,edi
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block11:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	cmp eax,edi
	je Block15

 Block12:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	lea ecx,[esi+4]
	push ecx
	call ebx
	cmp esi,edi
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov ebp,dword ptr [ebp+4]
	mov dword ptr [esp+0x28],ebp
	cmp ebp,edi
	je Block17

 Block16:
	lea ecx,[ebp+0xC]
	push ecx
	call ebx

 Block17:
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov byte ptr [esp+0x54],3
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	push eax
	push 5
	mov ecx,ebp
	call CUtilDlgEx::SetUtilDlgEx_1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::GetCharacterData
	lea edx,[esp+0x5C]
	push edx
	mov ecx,ebp
	call CUtilDlgEx::SetUtilDlgEx_AVATAR
	mov ecx,ebp
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebp
	call CDialog::DoModal
	mov esi,eax
	cmp esi,3
	je Block61

 Block18:
	push 0x41
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x44],4
	cmp eax,edi
	jne Block21

 Block19:
	xor edx,edx
	jmp Block22

 Block20:
	xor esi,esi
	jmp Block11

 Block21:
	mov edx,dword ptr [eax-4]

 Block22:
	mov ecx,dword ptr [esp+0x34]
	inc ecx
	cmp ecx,edx
	jbe Block28

 Block23:
	cmp eax,edi
	jne Block25

 Block24:
	xor eax,eax
	jmp Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	add eax,eax
	cmp ecx,eax
	ja Block26

 Block27:
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block28:
	mov edx,dword ptr [esp+0x34]
	mov byte ptr [eax+edx],8
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	mov ebx,1
	add eax,ebx
	mov dword ptr [esp+0x34],eax
	cmp esi,ebx
	jne Block48

 Block29:
	cmp ecx,edi
	jne Block31

 Block30:
	xor esi,esi
	jmp Block32

 Block31:
	mov esi,dword ptr [ecx-4]

 Block32:
	lea edx,[eax+1]
	cmp edx,esi
	jbe Block38

 Block33:
	cmp ecx,edi
	jne Block35

 Block34:
	xor eax,eax
	jmp Block36

 Block35:
	mov eax,dword ptr [ecx-4]
	lea ebx,[ebx]

 Block36:
	add eax,eax
	cmp edx,eax
	ja Block36

 Block37:
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]

 Block38:
	mov byte ptr [ecx+eax],bl
	add dword ptr [esp+0x34],ebx
	mov eax,dword ptr [esp+0x30]
	mov ebx,dword ptr [ebp+0x128]
	cmp eax,edi
	jne Block40

 Block39:
	xor edx,edx
	jmp Block41

 Block40:
	mov edx,dword ptr [eax-4]

 Block41:
	mov ecx,dword ptr [esp+0x34]
	inc ecx
	cmp ecx,edx
	jbe Block47

 Block42:
	cmp eax,edi
	jne Block44

 Block43:
	xor eax,eax
	jmp Block45

 Block44:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block45:
	add eax,eax
	cmp ecx,eax
	ja Block45

 Block46:
	lea edx,[esp+0x54]
	push edx
	push edi
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block47:
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [eax+ecx],bl
	inc dword ptr [esp+0x34]
	jmp Block58

 Block48:
	cmp ecx,edi
	jne Block50

 Block49:
	xor esi,esi
	jmp Block51

 Block50:
	mov esi,dword ptr [ecx-4]

 Block51:
	lea edx,[eax+1]
	cmp edx,esi
	jbe Block57

 Block52:
	cmp ecx,edi
	jne Block54

 Block53:
	xor eax,eax
	jmp Block55

 Block54:
	mov eax,dword ptr [ecx-4]

 Block55:
	add eax,eax
	cmp edx,eax
	ja Block55

 Block56:
	lea edx,[esp+0x54]
	push edx
	push edi
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]

 Block57:
	mov byte ptr [ecx+eax],0
	add dword ptr [esp+0x34],ebx

 Block58:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x1C]
	cmp dword ptr [esi+4],edi
	je Block60

 Block59:
	push edi
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],edi

 Block60:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],3
	call ZArray<unsigned char>::RemoveAll

 Block61:
	mov byte ptr [esp+0x44],1
	cmp ebp,edi
	je Block63

 Block62:
	push edi
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block63:
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x44],0
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,edi
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0xC
}
}
// CScriptMan::OnAskPetAll
_SUB_EXCEPTION_HANDLER(2DDBE0)
__SUB_CLASS_THIS(002DDBE0, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DDBE0
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
	mov dword ptr [esp+0x20],ecx
	mov ebp,dword ptr [esp+0x70]
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	mov ecx,ebp
	mov dword ptr [esp+0x60],0
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0x1C],ecx
	mov ecx,ebp
	call CInPacket::Decode1
	movzx edx,al
	push 0x41
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x28],edx
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x64],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
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
	mov dword ptr [esp+0x34],0

 Block5:
	mov dword ptr [esp+0x70],0
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],2
	test eax,eax
	jle Block28

 Block6:
	mov dword ptr [esp+0x18],eax

 Block7:
	push 8
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	mov ecx,ebp
	call CInPacket::Decode1
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x38]
	push edx
	push eax
	push 5
	mov ecx,ebx
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block26

 Block8:
	push eax
	push 5
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x2C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov dword ptr [esp+0x2C],0

 Block13:
	mov dword ptr [esp+0x44],esi
	test esi,esi
	je Block15

 Block14:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	push 0xFFFFFFFF
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x64],3
	call ZArray<ZRef<GW_ItemSlotPet>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block17

 Block16:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block21

 Block20:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block21:
	mov dword ptr [edi+4],0

 Block22:
	mov dword ptr [edi+4],esi
	mov byte ptr [esp+0x60],2
	test esi,esi
	je Block26

 Block23:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov dword ptr [esp+0x44],0

 Block26:
	sub dword ptr [esp+0x18],1
	jne Block7

 Block27:
	mov eax,dword ptr [esp+0x1C]

 Block28:
	xor ecx,ecx
	cmp dword ptr [esp+0x24],ecx
	sete cl
	cmp eax,ecx
	jle Block64

 Block29:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block55

 Block30:
	cmp byte ptr [eax],0
	je Block55

 Block31:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x60],4
	test eax,eax
	je Block33

 Block32:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block45

 Block35:
	add eax,8
	je Block45

 Block36:
	lea esi,[eax-8]
	test esi,esi
	je Block38

 Block37:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [edi+0xC],esi
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x44]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block40:
	mov esi,dword ptr [edi+0xC]
	mov dword ptr [esp+0x3C],esi
	test esi,esi
	je Block42

 Block41:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x70],5
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x78]
	push eax
	push 6
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_Pet
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,3
	jne Block46

 Block43:
	mov byte ptr [esp+0x60],2
	test esi,esi
	je Block82

 Block44:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block82

 Block45:
	xor esi,esi
	jmp Block38

 Block46:
	cmp eax,1
	jne Block52

 Block47:
	mov eax,dword ptr [esi+0x160]
	mov edx,dword ptr [esp+0x70]
	mov edi,dword ptr [edx+eax*8+4]
	mov dword ptr [esp+0x44],edi
	test edi,edi
	je Block49

 Block48:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	push 1
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x64],6
	call COutPacket::Encode1
	push 8
	lea ecx,[edi+0x18]
	push ecx
	lea ecx,[esp+0x50]
	call COutPacket::EncodeBuffer
	mov byte ptr [esp+0x60],5
	test edi,edi
	je Block53

 Block50:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block53

 Block51:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	jmp Block53

 Block52:
	push 0
	lea ecx,[esp+0x4C]
	call COutPacket::Encode1

 Block53:
	mov byte ptr [esp+0x60],2
	test esi,esi
	je Block73

 Block54:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block73

 Block55:
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	jne Block57

 Block56:
	xor edx,edx
	jmp Block58

 Block57:
	mov edx,dword ptr [eax-4]

 Block58:
	mov ecx,dword ptr [esp+0x50]
	inc ecx
	cmp ecx,edx
	jbe Block63

 Block59:
	test eax,eax
	je Block61

 Block60:
	mov eax,dword ptr [eax-4]

 Block61:
	add eax,eax
	cmp ecx,eax
	ja Block61

 Block62:
	lea ecx,[esp+0x70]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x58]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x4C]

 Block63:
	mov edx,dword ptr [esp+0x50]
	mov byte ptr [eax+edx],1
	mov eax,dword ptr [esp+0x70]
	inc dword ptr [esp+0x50]
	push 8
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::EncodeBuffer
	jmp Block73

 Block64:
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	jne Block66

 Block65:
	xor edx,edx
	jmp Block67

 Block66:
	mov edx,dword ptr [eax-4]

 Block67:
	mov ecx,dword ptr [esp+0x50]
	inc ecx
	cmp ecx,edx
	jbe Block72

 Block68:
	test eax,eax
	je Block70

 Block69:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block70:
	add eax,eax
	cmp ecx,eax
	ja Block70

 Block71:
	lea ecx,[esp+0x70]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x58]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x4C]

 Block72:
	mov edx,dword ptr [esp+0x50]
	mov byte ptr [eax+edx],2
	inc dword ptr [esp+0x50]

 Block73:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x48]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x20]
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block82

 Block74:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block81

 Block75:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block77

 Block76:
	add eax,8
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block81

 Block79:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block81

 Block80:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block81:
	mov dword ptr [esi+0xC],0

 Block82:
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x60],1
	call ZArray<ZRef<GW_ItemSlotPet>>::RemoveAll
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x60],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0xC
}
}
// CScriptMan::~CScriptMan
_SUB_EXCEPTION_HANDLER(2DBC70)
__SUB_CLASS_THIS0(002DBC70, __thiscall, 52471,  CScriptMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DBC70
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
	int 3// TODO: 	mov dword ptr [esi],offset CScriptMan::`vftable'
	lea edi,[esi+0x18]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CSlideMenuDlgEX>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x10]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CSlideMenuDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	add esi,8
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [esi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block6:
	mov dword ptr [TSingleton<CScriptMan>::ms_pInstance],ebx
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
// CScriptMan::OnAskQuiz
__SUB_CLASS_THIS(002DBAF0, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::OnInitialQuiz
	ret 0xC
}
}
// CScriptMan::CScriptMan
__SUB_CLASS_THIS0(002DBC30, __thiscall, 52469,  CScriptMan, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+4]
	xor edx,edx
	cmp ecx,edx
	je Block2

 Block1:
	push esi
	lea esi,[ecx-4]
	mov dword ptr [TSingleton<CScriptMan>::ms_pInstance],esi
	int 3// TODO: 	mov dword ptr [eax],offset CScriptMan::`vftable'
	mov dword ptr [ecx],edx
	mov dword ptr [eax+0xC],edx
	mov dword ptr [eax+0x14],edx
	pop esi
	mov dword ptr [eax+0x1C],edx
	ret

 Block2:
	mov dword ptr [TSingleton<CScriptMan>::ms_pInstance],edx
	int 3// TODO: 	mov dword ptr [eax],offset CScriptMan::`vftable'
	mov dword ptr [ecx],edx
	mov dword ptr [eax+0xC],edx
	mov dword ptr [eax+0x14],edx
	mov dword ptr [eax+0x1C],edx
	ret
}
}
// CScriptMan::OnAskBoxText
_SUB_EXCEPTION_HANDLER(2DC9C0)
__SUB_CLASS_THIS(002DC9C0, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC9C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x50]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x44],0
	call CInPacket::DecodeStr
	mov ecx,esi
	mov byte ptr [esp+0x40],1
	call CInPacket::Decode2
	movsx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x18],edx
	call CInPacket::Decode2
	cwde
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	lea ebp,[edi+8]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block13

 Block4:
	add eax,8
	je Block13

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block7:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block9:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x28],esp
	push eax
	mov byte ptr [esp+0x50],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x58]
	push ecx
	push 8
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	movzx eax,byte ptr [esp+0x54]
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	mov eax,1

 Block15:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esi+0xC38],eax
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x50]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_MLSTR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov edi,eax
	cmp edi,3
	je Block22

 Block16:
	push 0x41
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push 0xE
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],4
	call COutPacket::Encode1
	lea ecx,[esp+0x28]
	cmp edi,1
	jne Block18

 Block17:
	push edi
	call COutPacket::Encode1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x58],esp
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	lea ecx,[esp+0x2C]
	call COutPacket::EncodeStr
	jmp Block19

 Block18:
	push 0
	call COutPacket::Encode1

 Block19:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [ebp+4],0
	je Block21

 Block20:
	push 0
	mov ecx,ebp
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block21:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],3
	call ZArray<unsigned char>::RemoveAll

 Block22:
	push 0
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x44],1
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x34
	ret 0x10
}
}
// CScriptMan::OnAskYesNo
_SUB_EXCEPTION_HANDLER(2DC5A0)
__SUB_CLASS_THIS(002DC5A0, __thiscall, 52478,  CScriptMan, void, long, long, CInPacket&, unsigned char, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC5A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x40]
	lea eax,[esp+0x40]
	push eax
	call CInPacket::DecodeStr
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x34],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x30],0
	lea ebp,[esi+8]
	test eax,eax
	je Block13

 Block4:
	add eax,8
	je Block13

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block7:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block9:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	mov edi,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x48]
	push edi
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x58],esp
	push edx
	mov byte ptr [esp+0x40],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	push eax
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	movzx eax,byte ptr [esp+0x44]
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	mov eax,1

 Block15:
	mov ecx,esi
	mov dword ptr [esi+0xC38],eax
	call CUtilDlgEx::SetUtilDlgEx_YESNO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov esi,eax
	cmp esi,3
	je Block22

 Block16:
	push 0x41
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov ecx,edi
	neg ecx
	sbb cl,cl
	and cl,0xB
	add cl,2
	movzx edx,cl
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	call COutPacket::Encode1
	cmp esi,6
	jne Block18

 Block17:
	mov esi,1
	jmp Block19

 Block18:
	sub esi,7
	neg esi
	sbb esi,esi

 Block19:
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [ebp+4],0
	je Block21

 Block20:
	push 0
	mov ecx,ebp
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block21:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],2
	call ZArray<unsigned char>::RemoveAll

 Block22:
	push 0
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x34],0
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret 0x18
}
}
// CScriptMan::OnAskNumber
_SUB_EXCEPTION_HANDLER(2DCC00)
__SUB_CLASS_THIS(002DCC00, __thiscall, 52476,  CScriptMan, void, long, long, CInPacket&, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DCC00
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x54]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0x44],ebx
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode4
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	lea ebp,[edi+8]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block7:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block9:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x60]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x54],2
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x5C]
	push ecx
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	movzx eax,byte ptr [esp+0x58]
	mov dword ptr [esi+0xC34],eax
	test al,6
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	mov eax,1

 Block15:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0xA
	push ebx
	mov dword ptr [esi+0xC38],eax
	mov eax,dword ptr [esp+0x24]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov edi,eax
	cmp edi,3
	je Block22

 Block16:
	push 0x41
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],3
	call COutPacket::Encode1
	lea ecx,[esp+0x2C]
	cmp edi,1
	jne Block18

 Block17:
	push edi
	call COutPacket::Encode1
	mov esi,dword ptr [esi+0xF4]
	push esi
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	jmp Block19

 Block18:
	push ebx
	call COutPacket::Encode1

 Block19:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	cmp dword ptr [ebp+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,ebp
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block21:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],2
	call ZArray<unsigned char>::RemoveAll

 Block22:
	push ebx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x48],bl
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0x10
}
}
// CScriptMan::OnAskSpeedQuiz
__SUB_CLASS_THIS(002DBB10, __thiscall, 52480,  CScriptMan, void, long, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::OnInitialSpeedQuiz
	ret 0xC
}
}
