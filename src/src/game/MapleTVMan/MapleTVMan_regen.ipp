#include "regen.hpp"
// MapleTVMan.ipp
#include "MapleTVMan.hpp"

// CMapleTVMan::GetSenderName
__SUB_CLASS_THIS0(00271830, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x41C
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::~CMapleTVMan
_SUB_EXCEPTION_HANDLER(20F470)
__SUB_CLASS_THIS0(0020F470, __thiscall, 70633,  CMapleTVMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20F470
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
	mov eax,dword ptr [TSingleton<CMapleTVDownloader>::ms_pInstance]
	mov dword ptr [esp+0x14],0xB
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [eax+0x28],0
	mov ecx,dword ptr [TSingleton<CMapleTVDownloader>::ms_pInstance]
	call CMapleTVDownloader::Terminate
	mov ecx,dword ptr [TSingleton<CMapleTVDownloader>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov eax,dword ptr [esi+0x454]
	mov byte ptr [esp+0x14],0xA
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esi+0x450]
	mov byte ptr [esp+0x14],9
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esi+0x434]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esi+0x430]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esi+0x42C]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esi+0x428]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esi+0x424]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esi+0x420]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esi+0x41C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	int 3// TODO: 	mov eax,offset ZRefCounted::`vftable'
	mov dword ptr [esi+0x215],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [TSingleton<CMapleTVMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMapleTVMan::ConfirmTimeRemaining
_SUB_EXCEPTION_HANDLER(20F760)
__SUB_CLASS_THIS0(0020F760, __thiscall, 70636,  CMapleTVMan, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20F760
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],0
	lea eax,[esp+0xC]
	push 0xFA2
	push eax
	mov dword ptr [esp+0x24],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x44C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x28],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,7
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	jne Block6

 Block3:
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block6:
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// CMapleTVMan::CMapleTVMan
__SUB_CLASS_THIS0(0020F360, __thiscall, 70631,  CMapleTVMan, void) {
__asm {

 Block0:
	push ebx
	xor ebx,ebx
	push esi
	mov esi,ecx
	mov dword ptr [TSingleton<CMapleTVMan>::ms_pInstance],esi
	mov dword ptr [esi],ebx
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],1
	mov dword ptr [esi+0xC],ebx
	xor eax,eax
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+0x18],eax
	push 0xF0
	lea eax,[esi+0x29]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi+0x10],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x1C],bl
	mov dword ptr [esi+0x1D],ebx
	mov dword ptr [esi+0x21],ebx
	mov dword ptr [esi+0x25],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x209],eax
	mov dword ptr [esi+0x20D],eax
	mov dword ptr [esi+0x211],eax
	mov dword ptr [esi+0x219],eax
	mov dword ptr [esi+0x21D],eax
	push 0xF0
	lea ecx,[esi+0x22E]
	push ebx
	push ecx
	int 3// TODO: 	mov dword ptr [esi+0x215],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x221],bl
	mov dword ptr [esi+0x222],ebx
	mov dword ptr [esi+0x226],ebx
	mov dword ptr [esi+0x22A],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x40E],eax
	mov dword ptr [esi+0x412],eax
	mov dword ptr [esi+0x416],eax
	mov dword ptr [esi+0x41C],ebx
	mov dword ptr [esi+0x420],ebx
	mov dword ptr [esi+0x424],ebx
	mov dword ptr [esi+0x428],ebx
	mov dword ptr [esi+0x42C],ebx
	mov dword ptr [esi+0x430],ebx
	mov dword ptr [esi+0x434],ebx
	mov dword ptr [esi+0x440],ebx
	mov dword ptr [esi+0x444],ebx
	mov dword ptr [esi+0x448],ebx
	mov dword ptr [esi+0x450],ebx
	mov dword ptr [esi+0x454],ebx
	add esp,0x18
	mov dword ptr [esi+0x458],ebx
	mov byte ptr [esi+0x45C],bl
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CMapleTVMan::LoadMapleTVMedia
__SUB_CLASS_THIS0(0020F320, __thiscall, 70633,  CMapleTVMan, void) {
__asm {

 Block0:
	ret
}
}
// CMapleTVMan::OnSetMessage
_SUB_EXCEPTION_HANDLER(20F870)
__SUB_CLASS_THIS(0020F870, __thiscall, 70635,  CMapleTVMan, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20F870
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x430
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x440]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x450]
	mov ecx,edi
	mov dword ptr [esi],1
	mov dword ptr [esi+4],1
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esp+0x13],al
	call CInPacket::Decode1
	xor ebx,ebx
	push 0xF0
	mov byte ptr [esi+0x45C],al
	lea eax,[esp+0x4D]
	push ebx
	mov dword ptr [esp+0x38],ebx
	push eax
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	int 3// TODO: 	mov dword ptr [esp+0x3C],offset AvatarLook::`vftable'
	mov byte ptr [esp+0x48],bl
	mov dword ptr [esp+0x49],ebx
	mov dword ptr [esp+0x4D],ebx
	mov dword ptr [esp+0x51],ebx
	call _memset
	mov dword ptr [esp+0x235],ebx
	mov dword ptr [esp+0x239],ebx
	mov dword ptr [esp+0x23D],ebx
	push 0xF0
	lea ecx,[esp+0x261]
	push ebx
	mov dword ptr [esp+0x24C],ebx
	push ecx
	mov dword ptr [esp+0x460],ebx
	mov dword ptr [esp+0x254],ebx
	mov dword ptr [esp+0x258],ebx
	int 3// TODO: 	mov dword ptr [esp+0x250],offset AvatarLook::`vftable'
	mov byte ptr [esp+0x25C],bl
	mov dword ptr [esp+0x25D],ebx
	mov dword ptr [esp+0x261],ebx
	mov dword ptr [esp+0x265],ebx
	call _memset
	add esp,0x18
	mov dword ptr [esp+0x431],ebx
	mov dword ptr [esp+0x435],ebx
	mov dword ptr [esp+0x439],ebx
	push edi
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x44C],1
	call AvatarLook::Decode
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esi+0x10]
	call AvatarLook::operator=
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44C],2
	call CInPacket::DecodeStr
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x44C],3
	call CInPacket::DecodeStr
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44C],4
	call CInPacket::DecodeStr
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x44C],5
	mov ecx,edi
	call CInPacket::DecodeStr
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x44C],6
	call CInPacket::DecodeStr
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44C],7
	call CInPacket::DecodeStr
	mov ecx,edi
	mov byte ptr [esp+0x448],8
	call CInPacket::Decode4
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+0x41C]
	mov dword ptr [esi+0x44C],eax
	call ZXString<char>::op_assign
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esi+0x420]
	call ZXString<char>::op_assign
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+0x424]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x428]
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esi+0x42C]
	call ZXString<char>::op_assign
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0x430]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esi+0x434]
	call ZXString<char>::op_assign
	test byte ptr [esp+0x13],2
	je Block2

 Block1:
	push edi
	lea ecx,[esp+0x23C]
	mov dword ptr [esi+0xC],ebx
	call AvatarLook::Decode
	lea edx,[esp+0x238]
	push edx
	lea ecx,[esi+0x215]
	call AvatarLook::operator=
	jmp Block3

 Block2:
	mov dword ptr [esi+0xC],1

 Block3:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x448],7
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x448],6
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x448],5
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x448],4
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x448],3
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x448],2
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x448],1
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esp+0x440]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x43C
	ret 4
}
}
// CMapleTVMan::GetReceiverAvartarLook
__SUB_CLASS_THIS0(0026FDD0, __thiscall, 70637,  CMapleTVMan, AvatarLook) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x215
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	call AvatarLook::_ctor_2
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::OnSendMessageResult
_SUB_EXCEPTION_HANDLER(20F5F0)
__SUB_CLASS_THIS(0020F5F0, __thiscall, 70635,  CMapleTVMan, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20F5F0
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
	mov esi,dword ptr [esp+0x28]
	mov ecx,esi
	call CInPacket::Decode1
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	cmp al,bl
	je Block14

 Block1:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	sub eax,1
	je Block10

 Block2:
	sub eax,1
	je Block7

 Block3:
	sub eax,1
	jne Block14

 Block4:
	lea eax,[esp+0xC]
	push 0xF9F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_assign
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
	push 0xC
	lea ecx,[esp+0x2C]
	push ecx
	jmp Block13

 Block7:
	lea edx,[esp+0x10]
	push 0xFA0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push 0xC
	lea eax,[esp+0x2C]
	push eax
	jmp Block13

 Block10:
	lea ecx,[esp+0x14]
	push 0xF9E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	push 0xC
	lea edx,[esp+0x2C]
	push edx

 Block13:
	call CHATLOG_ADD
	add esp,8

 Block14:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CMapleTVMan::GetMessageStr4
__SUB_CLASS_THIS0(00271920, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x430
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::GetMessageStr5
__SUB_CLASS_THIS0(00271950, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x434
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::Init
_SUB_EXCEPTION_HANDLER(20FBC0)
__SUB_CLASS_THIS0(0020FBC0, __thiscall, 70633,  CMapleTVMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20FBC0
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
	push offset _S_
	lea ecx,[esi+0x424]
	call ZXString<char>::AssignCStr
	push offset _S_
	lea ecx,[esi+0x428]
	call ZXString<char>::AssignCStr
	push offset _S_
	lea ecx,[esi+0x42C]
	call ZXString<char>::AssignCStr
	push offset _S_
	lea ecx,[esi+0x430]
	call ZXString<char>::AssignCStr
	push offset _S_
	lea ecx,[esi+0x434]
	call ZXString<char>::AssignCStr
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	xor ebp,ebp
	push eax
	mov dword ptr [esi+0x444],ebp
	mov dword ptr [esi+0x44C],ebp
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x58],ebp
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xF8D
	mov bl,1
	push eax
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x3C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block13:
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block17:
	mov byte ptr [esp+0x54],7
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block21:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x440],edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CMapleTVMan::OnClearMessage
__SUB_CLASS_THIS(0020F2F0, __thiscall, 70635,  CMapleTVMan, void, CInPacket&) {
__asm {

 Block0:
	mov dword ptr [ecx],0
	mov dword ptr [ecx+4],1
	mov dword ptr [ecx+0x44C],0
	ret 4
}
}
// CMapleTVMan::IsLoadFlash
__SUB_CLASS_THIS0(0020F330, __thiscall, 70636,  CMapleTVMan, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x458],0
	je Block2

 Block1:
	mov dword ptr [ecx+0x458],0
	mov eax,1
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CMapleTVMan::GetSenderAvartarLook
__SUB_CLASS_THIS0(0026FDB0, __thiscall, 70637,  CMapleTVMan, AvatarLook) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x10
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	call AvatarLook::_ctor_2
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::SetFlashAbsLocation
__SUB_CLASS_THIS(0020F310, __thiscall, 70639,  CMapleTVMan, void, long, long) {
__asm {

 Block0:
	ret 8
}
}
// CMapleTVMan::GetMessageStr2
__SUB_CLASS_THIS0(002718C0, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x428
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::GetMessageStr3
__SUB_CLASS_THIS0(002718F0, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x42C
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::OnPacket
__SUB_CLASS_THIS(0020FE10, __thiscall, 70634,  CMapleTVMan, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x195
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	call CMapleTVMan::OnSendMessageResult
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CMapleTVMan::OnClearMessage
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CMapleTVMan::OnSetMessage

 Block6:
	ret 8
}
}
// CMapleTVMan::GetReceivername
__SUB_CLASS_THIS0(00271860, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x420
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMapleTVMan::GetMessageStr1
__SUB_CLASS_THIS0(00271890, __thiscall, 70638,  CMapleTVMan, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x424
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
