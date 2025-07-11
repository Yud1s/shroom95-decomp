#include "regen.hpp"
// SecurityClient.ipp
#include "SecurityClient.hpp"

// CSecurityClient::OnPacket
__SUB_CLASS_THIS(0061AE80, __thiscall, 16264,  CSecurityClient, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	sub eax,2
	jne Block2

 Block1:
	push edi
	mov ecx,esi
	call CSecurityClient::OnCheckClientIntegrityRequest

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CSecurityThreatDetected::~CSecurityThreatDetected
__SUB_CLASS_THIS0(0061A7C0, __thiscall, 16244,  CSecurityThreatDetected, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CSecurityException::`vftable'
	ret
}
}
// CSecurityInitFailed::~CSecurityInitFailed
__SUB_CLASS_THIS0(0061AB50, __thiscall, 16212,  CSecurityInitFailed, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CSecurityException::`vftable'
	ret
}
}
// CSecurityClient::InitModule
__SUB_CLASS_THIS0(0061A9C0, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	sub esp,0x214
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x210],eax
	push esi
	mov esi,ecx
	jmp Block2

 Block2:
	push 0x103
	lea eax,[esp+0x115]
	push 0
	push eax
	mov byte ptr [esp+0x11C],0
	call _memset
	push 0x103
	lea ecx,[esp+0x1D]
	push 0
	push ecx
	mov byte ptr [esp+0x24],0
	call _memset
	lea edx,[esp+0x128]
	push edx
	call GetModuleFolderName
	push 0x104
	lea eax,[esp+0x130]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	call __mbsnbcpy
	push 8
	lea edx,[esp+0x38]
	push offset _S_HSHIELD
	push edx
	call __mbsnbcat
	push 0x104
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esi+0x34]
	push ecx
	call __mbsnbcpy
	add esp,0x40
	push 0x4E20
	push 0x927C0
	lea edx,[esp+0x14]
	push edx
	call ZImports::___AhnHS_HSUpdateA
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esp+8],eax
	push offset _TI_SECURITY_UPDATE_FAILED
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset CSecurityUpdateFailed::`vftable'
	call _CxxThrowException

 Block4:
	push 0x104
	lea ecx,[esp+0x114]
	push ecx
	lea edx,[esp+0x14]
	push edx
	call __mbsnbcpy
	push 0x12
	lea eax,[esp+0x1C]
	push offset _S_HSHIELDEHSVCDLL
	push eax
	call __mbsnbcat
	add esp,0x18
	push 1
	push 0x2CA3DBF
	push offset _S_B7621D704ED72C48
	push 0x26DB
	push offset _AhnHS_Callback
	lea ecx,[esp+0x20]
	push ecx
	call ZImports::___AhnHS_InitializeA
	test eax,eax
	je Block6

 Block5:
	push offset _TI_SECURITY_INIT_FAILED
	lea edx,[esp+8]
	push edx
	mov dword ptr [esp+0x10],eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset CSecurityInitFailed::`vftable'
	call _CxxThrowException

 Block6:
	push 1
	lea ecx,[esi+4]
	call TSecType<int>::SetData
	jmp Block8

 Block8:
	mov ecx,dword ptr [esp+0x214]
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x214
	ret
}
}
// CSecurityClearFailed::~CSecurityClearFailed
__SUB_CLASS_THIS0(0061ADE0, __thiscall, 16228,  CSecurityClearFailed, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CSecurityException::`vftable'
	ret
}
}
// CSecurityClient::~CSecurityClient
_SUB_EXCEPTION_HANDLER(61AEB0)
__SUB_CLASS_THIS0(0061AEB0, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61AEB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSecurityClient::`vftable'
	mov dword ptr [esp+0x14],3
	call CSecurityClient::StopModule
	mov ecx,esi
	call CSecurityClient::ClearModule
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test esi,esi
	je Block6

 Block5:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	mov dword ptr [TSingleton<CSecurityClient>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSecurityClient::OnCheckClientIntegrityRequest
_SUB_EXCEPTION_HANDLER(61AC10)
__SUB_CLASS_THIS(0061AC10, __thiscall, 16264,  CSecurityClient, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61AC10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x344
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x340],eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x35C]
	push 0x192
	lea eax,[esp+0x24]
	push 0
	push eax
	call _memset
	add esp,0xC
	mov ecx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	mov word ptr [esp+0x1B8],ax
	call CInPacket::DecodeBuffer
	push 0x192
	lea eax,[esp+0x1B8]
	push 0
	push eax
	call _memset
	movzx edx,word ptr [esp+0x1BC]
	add esp,0xC
	lea ecx,[esp+0x1B4]
	push ecx
	push edx
	lea eax,[esp+0x28]
	push eax
	call ZImports::___AhnHS_MakeResponse
	test eax,eax
	je Block2

 Block1:
	push offset _TI_THREAD_DETECTED
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0x24],eax
	int 3// TODO: 	mov dword ptr [esp+0x20],offset CSecurityThreatDetected::`vftable'
	call _CxxThrowException

 Block2:
	push 0x1B
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x358],0
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x344]
	push edx
	lea ecx,[esp+0xC]
	call COutPacket::Encode2
	movzx eax,word ptr [esp+0x344]
	push eax
	lea ecx,[esp+0x1B8]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x354],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x34C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [esp+0x340]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x350
	ret 4
}
}
// CSecurityInitFailed::GetErrorMessage
_SUB_EXCEPTION_HANDLER(61B320)
__SUB_CLASS_THIS0(0061B320, __thiscall, 16214,  CSecurityInitFailed, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61B320
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x14]
	push 0x1332
	mov ebx,1
	push eax
	mov dword ptr [esp+0x50],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+4]
	push eax
	push eax
	push ecx
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x58],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	cmp esi,0x100
	ja Block14

 Block3:
	je Block10

 Block4:
	sub esi,ebx
	je Block9

 Block5:
	sub esi,ebx
	je Block8

 Block6:
	sub esi,2
	jne Block22

 Block7:
	lea edx,[esp+0x14]
	push 0x133C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],4
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block26

 Block8:
	lea eax,[esp+0x18]
	push 0x133F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],7
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block26

 Block9:
	lea ecx,[esp+0x1C]
	push 0x149C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],0xC
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block26

 Block10:
	lea edx,[esp+0x20]
	push 0x1340
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],8
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax-4]
	jmp Block13

 Block12:
	xor ecx,ecx

 Block13:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block26

 Block14:
	sub esi,0x101
	cmp esi,6
	ja Block22

 Block15:
	cmp ESI, 0
je Block19
cmp ESI, 1
je Block20
cmp ESI, 2
je Block16
cmp ESI, 3
je Block18
cmp ESI, 4
je Block21
cmp ESI, 5
je Block22
cmp ESI, 6
je Block17


 Block16:
	lea eax,[esp+0x24]
	push 0x133B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x24]
	jmp Block26

 Block17:
	lea ecx,[esp+0x28]
	push 0x133D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],5
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x28]
	jmp Block26

 Block18:
	lea edx,[esp+0x2C]
	push 0x133E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],6
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x2C]
	jmp Block26

 Block19:
	lea eax,[esp+0x30]
	push 0x1341
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],9
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x30]
	jmp Block26

 Block20:
	lea ecx,[esp+0x34]
	push 0x1342
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],0xA
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x34]
	jmp Block26

 Block21:
	lea edx,[esp+0x38]
	push 0x1343
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],0xB
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x38]
	jmp Block26

 Block22:
	lea eax,[esp+0x3C]
	push 0x149C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],0xD
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax-4]
	jmp Block25

 Block24:
	xor ecx,ecx

 Block25:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x50]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]

 Block26:
	mov dword ptr [esp+0x10],ebx
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,esi
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x40
	ret 4
}
}
// _AhnHS_Callback
__SUB(0061A820, __stdcall, 16292,  int32_t, long, long, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [TSingleton<CSecurityClient>::ms_pInstance]
	cmp eax,0x10001
	jne Block3

 Block1:
	test esi,esi
	je Block5

 Block2:
	call dword ptr [ZImports::_GetTickCount]
	mov dword ptr [esi+0x30],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esp+0xC]
	push eax
	lea ecx,[esi+0x20]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x2C],ecx

 Block5:
	xor eax,eax
	pop esi
	ret 0xC
}
}
// CSecurityClearFailed::CSecurityClearFailed
__SUB_CLASS_THIS(0061ADF0, __thiscall, 16225,  CSecurityClearFailed, void, const CSecurityClearFailed&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityException::`vftable'
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityClearFailed::`vftable'
	ret 4
}
}
// CSecurityClient::ClearModule
__SUB_CLASS_THIS0(0061AD70, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	jmp Block2

 Block2:
	lea esi,[ecx+4]
	mov ecx,esi
	call TSecType<int>::GetData
	test eax,eax
	je Block7

 Block3:
	call ZImports::___AhnHS_Uninitialize
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esp+8],eax
	push offset _TI_SECURITY_CLEAR_FAILED
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset CSecurityClearFailed::`vftable'
	call _CxxThrowException

 Block5:
	push 0
	mov ecx,esi
	call TSecType<int>::SetData
	jmp Block7

 Block7:
	pop esi
	add esp,8
	ret
}
}
// CSecurityThreatDetected::CSecurityThreatDetected
__SUB_CLASS_THIS(0061A7F0, __thiscall, 16241,  CSecurityThreatDetected, void, const CSecurityThreatDetected&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityException::`vftable'
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityThreatDetected::`vftable'
	ret 4
}
}
// CSecurityUpdateFailed::GetErrorMessage
_SUB_EXCEPTION_HANDLER(61AF80)
// A1B298
static uint8_t _SUB_61AF80_LOOKUP_TABLE_0[129] = {
0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
4, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
5, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
6, 
};
__SUB_CLASS_THIS0(0061AF80, __thiscall, 16182,  CSecurityUpdateFailed, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61AF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x14]
	push 0x1333
	mov ebx,1
	push eax
	mov dword ptr [esp+0x44],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+4]
	push eax
	push eax
	push ecx
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	lea eax,[esi-0x30000010]
	cmp eax,0x80
	ja Block11

 Block3:
	movzx edx,byte ptr [eax+_SUB_61AF80_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block4
cmp EDX, 1
je Block5
cmp EDX, 2
je Block6
cmp EDX, 3
je Block7
cmp EDX, 4
je Block8
cmp EDX, 5
je Block9
cmp EDX, 6
je Block10
cmp EDX, 7
je Block11


 Block4:
	lea eax,[esp+0x14]
	push 0x1334
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],3
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block15

 Block5:
	lea ecx,[esp+0x18]
	push 0x1335
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],4
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block15

 Block6:
	lea edx,[esp+0x1C]
	push 0x1336
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],5
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block15

 Block7:
	lea eax,[esp+0x20]
	push 0x1337
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],6
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block15

 Block8:
	lea ecx,[esp+0x24]
	push 0x1338
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block15

 Block9:
	lea edx,[esp+0x28]
	push 0x1339
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],8
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block15

 Block10:
	lea eax,[esp+0x2C]
	push 0x133A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],9
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block15

 Block11:
	lea ecx,[esp+0x30]
	push 0x149C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0xA
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax-4]
	jmp Block14

 Block13:
	xor ecx,ecx

 Block14:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]

 Block15:
	mov byte ptr [esp+0x3C],bl
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,esi
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret 4
}
}
// CSecurityInitFailed::CSecurityInitFailed
__SUB_CLASS_THIS(0061AB60, __thiscall, 16209,  CSecurityInitFailed, void, const CSecurityInitFailed&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityException::`vftable'
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityInitFailed::`vftable'
	ret 4
}
}
// CSecurityClient::StopModule
__SUB_CLASS_THIS0(0061AE10, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	jmp Block2

 Block2:
	lea esi,[ecx+0x10]
	mov ecx,esi
	call TSecType<int>::GetData
	test eax,eax
	je Block7

 Block3:
	call ZImports::___AhnHS_StopService
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esp+8],eax
	push offset _TI_SECURITY_CLEAR_FAILED
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset CSecurityClearFailed::`vftable'
	call _CxxThrowException

 Block5:
	push 0
	mov ecx,esi
	call TSecType<int>::SetData
	jmp Block7

 Block7:
	pop esi
	add esp,8
	ret
}
}
// CSecurityUpdateFailed::~CSecurityUpdateFailed
__SUB_CLASS_THIS0(0061AB40, __thiscall, 16180,  CSecurityUpdateFailed, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CSecurityException::`vftable'
	ret
}
}
// CSecurityUpdateFailed::CSecurityUpdateFailed
__SUB_CLASS_THIS(0061AB80, __thiscall, 16177,  CSecurityUpdateFailed, void, const CSecurityUpdateFailed&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityException::`vftable'
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityUpdateFailed::`vftable'
	ret 4
}
}
// CSecurityClient::CSecurityClient
_SUB_EXCEPTION_HANDLER(61A870)
__SUB_CLASS_THIS0(0061A870, __thiscall, 16261,  CSecurityClient, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61A870
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	lea esi,[edi+4]
	xor ebp,ebp
	cmp esi,ebp
	je Block2

 Block1:
	lea eax,[esi-4]
	mov dword ptr [TSingleton<CSecurityClient>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSecurityClient>::ms_pInstance],ebp

 Block3:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],ebp
	int 3// TODO: 	mov dword ptr [edi],offset CSecurityClient::`vftable'
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea ebx,[esi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [esi],eax
	call _rand
	movzx edx,byte ptr [esi]
	mov ecx,dword ptr [esi+8]
	add eax,ebx
	mov dword ptr [esi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [esi+4]
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,esi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],1
	lea esi,[edi+0x10]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea ebx,[esi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [esi],eax
	call _rand
	mov edx,dword ptr [esi+8]
	add eax,ebx
	mov dword ptr [esi+4],eax
	movzx eax,byte ptr [esi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [esi+4]
	mov ecx,dword ptr [esi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,esi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],2
	mov dword ptr [edi+0x1C],ebp
	lea esi,[edi+0x20]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea ebx,[esi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [esi],eax
	call _rand
	movzx ecx,byte ptr [esi]
	add eax,ebx
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [esi+4]
	mov edx,dword ptr [esi+8]
	push ebp
	mov ecx,esi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	mov dword ptr [edi+0x2C],ebp
	mov dword ptr [edi+0x138],ebp
	mov eax,edi
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
// CSecurityException::CSecurityException
__SUB_CLASS_THIS(0061A7D0, __thiscall, 16160,  CSecurityException, void, const CSecurityException&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	int 3// TODO: 	mov dword ptr [eax],offset CSecurityException::`vftable'
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	ret 4
}
}
// CSecurityThreatDetected::GetErrorMessage
_SUB_EXCEPTION_HANDLER(61B720)
__SUB_CLASS_THIS0(0061B720, __thiscall, 16246,  CSecurityThreatDetected, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61B720
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x14]
	push 0x1331
	mov ebx,1
	push eax
	mov dword ptr [esp+0x7C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+4]
	push eax
	push eax
	push ecx
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x84],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+4]
	cmp eax,0x10501
	ja Block25

 Block3:
	je Block21

 Block4:
	cmp eax,0x10301
	ja Block13

 Block5:
	je Block12

 Block6:
	sub eax,0x10101
	je Block11

 Block7:
	sub eax,ebx
	je Block10

 Block8:
	sub eax,2
	jne Block46

 Block9:
	lea edx,[esp+0x14]
	push 0x137B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],5
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x14]
	jmp Block52

 Block10:
	lea eax,[esp+0x18]
	push 0x137A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],4
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x18]
	jmp Block52

 Block11:
	lea ecx,[esp+0x1C]
	push 0x1379
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],3
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x1C]
	jmp Block52

 Block12:
	lea edx,[esp+0x20]
	push 0x137C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],6
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block52

 Block13:
	sub eax,0x10302
	cmp eax,9
	ja Block46

 Block14:
	cmp EAX, 0
je Block15
cmp EAX, 1
je Block16
cmp EAX, 2
je Block46
cmp EAX, 3
je Block46
cmp EAX, 4
je Block17
cmp EAX, 5
je Block18
cmp EAX, 6
je Block19
cmp EAX, 7
je Block46
cmp EAX, 8
je Block46
cmp EAX, 9
je Block20


 Block15:
	lea eax,[esp+0x24]
	push 0x137D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],7
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x24]
	jmp Block52

 Block16:
	lea ecx,[esp+0x28]
	push 0x1A2F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],8
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x28]
	jmp Block52

 Block17:
	lea edx,[esp+0x2C]
	push 0x137E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],9
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x2C]
	jmp Block52

 Block18:
	lea eax,[esp+0x30]
	push 0x137F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0xA
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x30]
	jmp Block52

 Block19:
	lea ecx,[esp+0x34]
	push 0x1380
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0xB
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x34]
	jmp Block52

 Block20:
	lea edx,[esp+0x38]
	push 0x1381
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0xC
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x38]
	jmp Block52

 Block21:
	lea eax,[esp+0x3C]
	push 0x1382
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],0xD
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax-4]
	jmp Block24

 Block23:
	xor ecx,ecx

 Block24:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block52

 Block25:
	cmp eax,0x10701
	ja Block35

 Block26:
	je Block31

 Block27:
	cmp eax,0x10503
	je Block30

 Block28:
	cmp eax,0x10601
	jne Block46

 Block29:
	lea ecx,[esp+0x40]
	push 0x1385
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0xF
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x40]
	jmp Block52

 Block30:
	lea edx,[esp+0x44]
	push 0x1384
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0xE
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block52

 Block31:
	lea eax,[esp+0x48]
	push 0x1386
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],0x10
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax-4]
	jmp Block34

 Block33:
	xor ecx,ecx

 Block34:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block52

 Block35:
	cmp eax,0x10801
	ja Block44

 Block36:
	je Block43

 Block37:
	sub eax,0x10702
	cmp eax,3
	ja Block46

 Block38:
	cmp EAX, 0
je Block39
cmp EAX, 1
je Block40
cmp EAX, 2
je Block41
cmp EAX, 3
je Block42


 Block39:
	lea ecx,[esp+0x4C]
	push 0x1387
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x11
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x4C]
	jmp Block52

 Block40:
	lea edx,[esp+0x50]
	push 0x1388
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x12
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x50]
	jmp Block52

 Block41:
	lea eax,[esp+0x54]
	push 0x1389
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x13
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x54]
	jmp Block52

 Block42:
	lea ecx,[esp+0x58]
	push 0x138A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x14
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x58]
	jmp Block52

 Block43:
	lea edx,[esp+0x5C]
	push 0x138B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x15
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	jmp Block52

 Block44:
	cmp eax,0x10901
	je Block51

 Block45:
	cmp eax,0x10A01
	je Block50

 Block46:
	lea eax,[esp+0x60]
	push 0x149C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],0x18
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax-4]
	jmp Block49

 Block48:
	xor ecx,ecx

 Block49:
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	jmp Block52

 Block50:
	lea ecx,[esp+0x64]
	push 0x138D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x17
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x64]
	jmp Block52

 Block51:
	lea edx,[esp+0x68]
	push 0x138C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x78],0x16
	call ZXString<char>::op_add_assign_other_0
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x68]

 Block52:
	mov byte ptr [esp+0x74],bl
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,esi
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x6C
	ret 4
}
}
// CSecurityClient::Update
__SUB_CLASS_THIS0(0061A730, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1C]
	sub esp,8
	cmp eax,0x10501
	jg Block11

 Block1:
	je Block17

 Block2:
	cmp eax,0x10303
	jg Block7

 Block3:
	cmp eax,0x10301
	jge Block17

 Block4:
	mov ecx,eax
	sub ecx,0x10102
	je Block17

 Block5:
	sub ecx,2
	je Block17

 Block6:
	add esp,8
	ret

 Block7:
	cmp eax,0x10306
	jl Block10

 Block8:
	cmp eax,0x10308

 Block9:
	jle Block17

 Block10:
	add esp,8
	ret

 Block11:
	cmp eax,0x10801
	jg Block16

 Block12:
	je Block17

 Block13:
	cmp eax,0x10601
	je Block17

 Block14:
	cmp eax,0x10700
	jle Block10

 Block15:
	cmp eax,0x10705
	jmp Block9

 Block16:
	cmp eax,0x10A01
	jne Block10

 Block17:
	mov dword ptr [esp+4],eax
	push offset _TI_THREAD_DETECTED
	lea eax,[esp+4]
	push eax
	int 3// TODO: 	mov dword ptr [esp+8],offset CSecurityThreatDetected::`vftable'
	call _CxxThrowException
	int 3
}
}
// CSecurityClearFailed::GetErrorMessage
__SUB_CLASS_THIS0(0061B700, __thiscall, 16230,  CSecurityClearFailed, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp],0
	mov dword ptr [eax],0
	pop ecx
	ret 4
}
}
// CSecurityClient::StartModule
__SUB_CLASS_THIS0(0061ABA0, __thiscall, 16263,  CSecurityClient, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	jmp Block2

 Block2:
	call ZImports::___AhnHS_StartService
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esp+8],eax
	push offset _TI_SECURITY_INIT_FAILED
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset CSecurityInitFailed::`vftable'
	call _CxxThrowException

 Block4:
	call ZImports::___AhnHS_CheckHackShieldRunningStatus
	call dword ptr [ZImports::_GetTickCount]
	push 1
	lea ecx,[esi+0x10]
	mov dword ptr [esi+0x30],eax
	call TSecType<int>::SetData
	jmp Block6

 Block6:
	pop esi
	add esp,8
	ret
}
}
