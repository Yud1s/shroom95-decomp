#include "regen.hpp"
// ClientSocket.ipp
#include "ClientSocket.hpp"

// CClientSocket::CClientSocket
_SUB_EXCEPTION_HANDLER(AF890)
__SUB_CLASS_THIS0(000AF890, __thiscall, 7953,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AF890
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CClientSocket>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CClientSocket>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CClientSocket::`vftable'
	mov dword ptr [eax],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esi+8],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZList<ZInetAddr>::`vftable'
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	push edi
	call dword ptr [ZImports::_htonl]
	push edi
	mov ebx,eax
	call dword ptr [ZImports::_htons]
	movzx ecx,ax
	xor eax,eax
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x34],eax
	mov word ptr [esi+0x2A],cx
	mov dword ptr [esi+0x2C],ebx
	mov edx,2
	mov word ptr [esi+0x28],dx
	int 3// TODO: 	mov eax,offset ZList<ZRef<ZSocketBuffer>>::`vftable'
	mov dword ptr [esi+0x3C],eax
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	lea eax,[esp+0x13]
	push eax
	lea ecx,[esi+0x6C]
	mov dword ptr [esi+0x64],edi
	push 0x100
	mov byte ptr [esp+0x28],4
	mov dword ptr [ecx],edi
	call ZArray<unsigned char>::_Alloc
	xor ecx,ecx
	mov dword ptr [esi+0x68],edi
	mov word ptr [esi+0x70],cx
	mov dword ptr [esi+0x78],edi
	push edi
	push offset _S_
	lea ebx,[esi+0x8C]
	push edi
	mov dword ptr [esi+0x7C],edi
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x30],5
	mov dword ptr [ebx],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov ecx,esi
	mov byte ptr [esp+0x20],6
	mov dword ptr [esi+0x90],edi
	call CClientSocket::ClearSendReceiveCtx
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CClientSocket::Connect
__SUB_CLASS_THIS(000AE720, __thiscall, 7961,  CClientSocket, void, const sockaddr_in*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov dword ptr [ebp-0x2C],ecx
	jmp Block35

 Block35:
	mov ecx,dword ptr [ebp-0x2C]
	call CClientSocket::ClearSendReceiveCtx
	mov ecx,dword ptr [ebp-0x2C]
	add ecx,8
	call ZSocketBase::CloseSocket
	push 0
	push 2
	push 1
	mov ecx,dword ptr [ebp-0x2C]
	add ecx,8
	call ZSocketBase::Socket
	mov ecx,dword ptr [ebp-0x2C]
	call CClientSocket::SetTimeout
	push 0x33
	push 0x401
	mov eax,dword ptr [ebp-0x2C]
	mov ecx,dword ptr [eax+4]
	push ecx
	mov ecx,dword ptr [ebp-0x2C]
	add ecx,8
	call ZSocketBase::op_uint
	push eax
	call WSAAsyncSelect
	cmp eax,0xFFFFFFFF
	je Block38

 Block36:
	push 0x10
	mov edx,dword ptr [ebp+8]
	push edx
	mov ecx,dword ptr [ebp-0x2C]
	add ecx,8
	call ZSocketBase::op_uint
	push eax
	call connect
	cmp eax,0xFFFFFFFF
	jne Block38

 Block37:
	call WSAGetLastError
	cmp eax,0x2733
	je Block39

 Block38:
	push 0
	mov ecx,dword ptr [ebp-0x2C]
	call CClientSocket::OnConnect

 Block39:
	jmp Block41

 Block41:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CClientSocket::Connect
__SUB_CLASS_THIS(000B0340, __thiscall, 7965,  CClientSocket, void, const CClientSocket::CONNECTCONTEXT&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,ecx
	jmp Block2

 Block2:
	lea esi,[edi+0xC]
	mov ecx,esi
	call ZList<ZInetAddr>::RemoveAll
	mov ebx,dword ptr [esp+0x10]
	push ebx
	mov ecx,esi
	call ZList<ZInetAddr>::AddTail_List
	mov eax,dword ptr [ebx+0x14]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [ebx+0x18]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi+0x18]
	lea esi,[edi+0x20]
	mov eax,offset CClientSocket::Connect_0
	mov dword ptr [esi],edx
	cmp dword ptr [eax],0x83EC8B55
	jne Block6

 Block3:
	mov eax,offset CClientSocket::Connect_0
	cmp byte ptr [eax+4],0xEC
	jne Block6

 Block4:
	mov ecx,offset CClientSocket::Connect_0
	cmp dword ptr [ecx+6],0x89575653
	ja Block6

 Block5:
	mov edx,offset CClientSocket::Connect_0
	cmp byte ptr [edx+0xA],0x4D
	je Block7

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push 8
	call CWvsApp::SetClearStackLog

 Block7:
	push esi
	call ZList<ZInetAddr>::GetNext
	add esp,4
	push eax
	mov ecx,edi
	call CClientSocket::Connect_0
	jmp Block9

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CClientSocket::Flush
_SUB_EXCEPTION_HANDLER(AF6A0)
__SUB_CLASS_THIS0(000AF6A0, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AF6A0
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
	mov eax,dword ptr [ebp+8]
	xor edi,edi
	cmp eax,edi
	je Block21

 Block1:
	or ebx,0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block2:
	cmp dword ptr [ebp+0x58],edi
	je Block21

 Block3:
	lea ebx,[ebx]

 Block4:
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x20],esi
	cmp esi,edi
	je Block6

 Block5:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ebp+8]
	push edi
	push eax
	push ecx
	push edx
	mov dword ptr [esp+0x3C],edi
	call send
	cmp eax,ebx
	je Block18

 Block7:
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jne Block9

 Block8:
	mov eax,dword ptr [ebp+0x5C]
	lea ecx,[ebp+0x50]
	push eax
	call ZList<ZRef<ZSocketBuffer>>::RemoveAt
	jmp Block14

 Block9:
	mov ebx,dword ptr [ebp+0x5C]
	lea edx,[esp+0x17]
	push edx
	sub ecx,eax
	push ecx
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	call ZSocketBuffer::Sub
	mov edi,eax
	test edi,edi
	je Block11

 Block10:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ebx,dword ptr [ebx+4]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+4],edi
	test ebx,ebx
	je Block14

 Block12:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block14:
	lea edi,[esi+4]
	or ebx,0xFFFFFFFF
	push edi
	mov dword ptr [esp+0x30],ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block15:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block16:
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	cmp dword ptr [ebp+0x58],edi
	jne Block4

 Block17:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block18:
	call WSAGetLastError
	cmp eax,0x2733
	je Block20

 Block19:
	push eax
	mov ecx,ebp
	call CClientSocket::OnError

 Block20:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],ebx
	call ZRef<ZSocketBuffer>::~ZRef<ZSocketBuffer>

 Block21:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CClientSocket::OnRead
_SUB_EXCEPTION_HANDLER(B03F0)
__SUB_CLASS_THIS0(000B03F0, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B03F0
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
	mov eax,dword ptr [ebx+8]
	test eax,eax
	je Block18

 Block1:
	or ebp,0xFFFFFFFF
	cmp eax,ebp
	je Block18

 Block2:
	cmp dword ptr [ebx+0x14],0
	jne Block18

 Block3:
	lea eax,[esp+0x17]
	push eax
	push 0x5B4
	call ZSocketBuffer::Alloc
	mov esi,eax
	add esp,8
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block5

 Block4:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ebx+8]
	push 0
	push eax
	push ecx
	push edx
	mov dword ptr [esp+0x40],0
	call recv
	test eax,eax
	je Block17

 Block6:
	cmp eax,ebp
	je Block15

 Block7:
	lea edx,[esp+0x17]
	push edx
	push eax
	push 0
	mov ecx,esi
	call ZSocketBuffer::Sub
	mov edi,eax
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block9

 Block8:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	lea ecx,[ebx+0x3C]
	mov byte ptr [esp+0x30],1
	call ZList<ZRef<ZSocketBuffer>>::AddTail_
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call ZRef<ZSocketBuffer>::op_assign_copy
	mov byte ptr [esp+0x30],0
	test edi,edi
	je Block13

 Block10:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block11:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block12:
	mov dword ptr [esp+0x24],0
	or ebp,0xFFFFFFFF

 Block13:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block3

 Block14:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block3

 Block15:
	call WSAGetLastError
	cmp eax,0x2733
	je Block17

 Block16:
	push eax
	mov ecx,ebx
	call CClientSocket::OnError
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],ebp
	call ZRef<ZSocketBuffer>::~ZRef<ZSocketBuffer>
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block17:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],ebp
	call ZRef<ZSocketBuffer>::~ZRef<ZSocketBuffer>
	mov ecx,ebx
	call CClientSocket::ManipulatePacket

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CClientSocket::GetHandle
__SUB_CLASS_THIS0(001D1BA0, __thiscall, 7969,  CClientSocket, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	ret
}
}
// CClientSocket::WasGuestIDLogin
__SUB_CLASS_THIS0(000ACBD0, __thiscall, 7984,  CClientSocket, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x90]
	ret
}
}
// CClientSocket::SetGuestIDLoginInfo
_SUB_EXCEPTION_HANDLER(1D48F0)
__SUB_CLASS_THIS(001D48F0, __thiscall, 7982,  CClientSocket, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D48F0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0
	test ecx,ecx
	je Block2

 Block1:
	cmp byte ptr [ecx],0
	jne Block5

 Block2:
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esi+0x8C],0

 Block4:
	mov dword ptr [esi+0x90],0
	jmp Block6

 Block5:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+0x8C]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x90],1

 Block6:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test ecx,ecx
	je Block8

 Block7:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CPatchException::CPatchException
__SUB_CLASS_THIS(00120FA0, __thiscall, 118328,  CPatchException, void, long) {
__asm {

 Block0:
	sub esp,0x108
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x104],eax
	push esi
	push edi
	push 0x20000000
	mov esi,ecx
	call CMSException::_ctor_0
	push 0x504
	lea edi,[esi+4]
	push 0
	push edi
	call _memset
	add esp,0xC
	lea eax,[esp+8]
	push eax
	push 0x104
	call GetCurrentDirectoryA
	push offset _S___41
	lea ecx,[esp+0xC]
	push ecx
	call lstrcatA
	mov ax,word ptr [esp+0x114]
	mov edx,0x5F
	mov word ptr [edi],dx
	mov word ptr [esi+6],ax
	call GetCommandLineA
	lea edx,[esi+0x308]

 Block1:
	mov cl,byte ptr [eax]
	mov byte ptr [edx],cl
	inc eax
	inc edx
	test cl,cl
	jne Block1

 Block2:
	lea eax,[esp+8]
	lea edx,[esi+0x408]
	mov ecx,eax
	sub edx,ecx
	lea ecx,[ecx]

 Block3:
	mov cl,byte ptr [eax]
	mov byte ptr [edx+eax],cl
	inc eax
	test cl,cl
	jne Block3

 Block4:
	mov ecx,dword ptr [esp+0x10C]
	pop edi
	mov eax,esi
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x108
	ret 4
}
}
// CClientSocket::SetTimeout
__SUB_CLASS_THIS0(000ACBA0, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	add eax,0x1388
	mov dword ptr [esi+0x38],eax
	pop esi
	ret
}
}
// CClientSocket::GetGuestIDRegistrationURL
__SUB_CLASS_THIS0(005C7DD0, __thiscall, 7983,  CClientSocket, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x8C]
	mov dword ptr [esp],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	mov edx,offset _S_HTTPMAPLESTORYNE__1
	jmp Block4

 Block3:
	mov edx,eax

 Block4:
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [edi],0
	test edx,edx
	je Block8

 Block5:
	mov eax,edx
	push esi
	lea esi,[eax+1]

 Block6:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block6

 Block7:
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
	pop esi

 Block8:
	mov eax,edi
	pop edi
	pop ecx
	ret 4
}
}
// CClientSocket::CONNECTCONTEXT::~CONNECTCONTEXT
__SUB_CLASS_THIS0(000AE710, __thiscall, 8006,  CClientSocket::CONNECTCONTEXT, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZInetAddr>::`vftable'
	jmp  ZList<ZInetAddr>::RemoveAll
}
}
// CClientSocket::ManipulatePacket
_SUB_EXCEPTION_HANDLER(B0220)
__SUB_CLASS_THIS0(000B0220, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B0220
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
	cmp dword ptr [esi+0x44],0
	je Block13

 Block1:
	lea ebp,[esi+0x64]

 Block2:
	mov edi,dword ptr [esi+0x48]
	push 1
	lea eax,[esp+0x18]
	push eax
	push edi
	mov ecx,ebp
	call CInPacket::AppendBuffer
	cmp dword ptr [edi+4],0
	mov ebx,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x48]
	lea ecx,[esi+0x3C]
	push eax
	call ZList<ZRef<ZSocketBuffer>>::RemoveAt

 Block4:
	test ebx,ebx
	jle Block8

 Block5:
	cmp dword ptr [esp+0x14],0
	jg Block8

 Block6:
	mov cx,word ptr [esi+0x8A]
	xor cx,word ptr [esi+0x72]
	mov edx,0xFFA0
	cmp cx,dx
	jne Block12

 Block7:
	movzx eax,word ptr [esi+0x74]
	cmp eax,0x10000
	jg Block12

 Block8:
	cmp ebx,2
	jne Block10

 Block9:
	push ebp
	lea ecx,[esp+0x1C]
	call CInPacket::_ctor_0
	mov ecx,dword ptr [esi+0x88]
	lea edi,[esi+0x88]
	push ecx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],0
	call CInPacket::DecryptData
	push 0
	push 4
	push edi
	call CIGCipher::innoHash
	add esp,0xC
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	mov dword ptr [edi],eax
	call CClientSocket::ProcessPacket
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block10:
	cmp dword ptr [esi+0x44],0
	jne Block2

 Block11:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block12:
	push 0
	mov ecx,esi
	call CClientSocket::OnError

 Block13:
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
// CClientSocket::SendPacket
// CClientSocket::GetRawSock
__SUB_CLASS_THIS0(000ACBC0, __thiscall, 7980,  CClientSocket, ZSocketBase*) {
__asm {

 Block0:
	lea eax,[ecx+8]
	ret
}
}
// CClientSocket::OnConnect
_SUB_EXCEPTION_HANDLER(AEF10)
__SUB_CLASS_THIS(000AEF10, __thiscall, 7967,  CClientSocket, int32_t, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AEF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp+0x24],esi
	jmp Block2

 Block2:
	mov eax,dword ptr [esi+0x14]
	xor ebx,ebx
	cmp eax,ebx
	je Block84

 Block3:
	cmp dword ptr [ebp+0x7C],ebx
	jne Block14

 Block4:
	cmp dword ptr [esi+0x20],ebx
	lea edi,[esi+0x20]
	jne Block8

 Block5:
	call CClientSocket::Close
	lea ecx,[ebp+0x28]
	cmp dword ptr [esi+0x24],ebx
	je Block7

 Block6:
	push 0x22000001
	call CMSException::_ctor_0
	mov eax,dword ptr [ebp+0x28]
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x28]
	push ecx
	mov dword ptr [ebp-0x28],eax
	call _CxxThrowException

 Block7:
	push 0x21000001
	call CMSException::_ctor_0
	mov edx,dword ptr [ebp+0x28]
	push offset CDisconnectException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block8:
	mov eax,offset CClientSocket::Connect_0
	cmp dword ptr [eax],0x83EC8B55
	jne Block12

 Block9:
	mov ecx,offset CClientSocket::Connect_0
	cmp byte ptr [ecx+4],0xEC
	jne Block12

 Block10:
	mov edx,offset CClientSocket::Connect_0
	cmp dword ptr [edx+6],0x89575653
	ja Block12

 Block11:
	mov eax,offset CClientSocket::Connect_0
	cmp byte ptr [eax+0xA],0x4D
	je Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push 0x10
	call CWvsApp::SetClearStackLog

 Block13:
	push edi
	call ZList<ZInetAddr>::GetNext
	add esp,4
	push eax
	mov ecx,esi
	call CClientSocket::Connect_0
	jmp Block84

 Block14:
	jmp Block16

 Block16:
	lea ecx,[ebp+0x37]
	push ecx
	push 0x5B4
	call ZSocketBuffer::Alloc
	mov esi,eax
	add esp,8
	mov dword ptr [ebp+8],esi
	cmp esi,ebx
	je Block18

 Block17:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov edi,dword ptr [esi+0x10]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x30],ebx
	mov dword ptr [ebp+0x2C],ebx
	mov dword ptr [ebp+0x28],0x28

 Block19:
	mov esi,edi

 Block20:
	mov ebx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ebx+8]
	add ebx,8
	cmp dword ptr [ebp+0x2C],0
	push 0
	jne Block22

 Block21:
	mov ecx,edi
	sub ecx,esi
	add ecx,2
	push ecx
	jmp Block23

 Block22:
	movzx edx,word ptr [ebp+0x30]
	sub edx,esi
	add edx,edi
	push edx

 Block23:
	push esi
	push eax
	call recv
	cmp eax,0xFFFFFFFF
	jne Block27

 Block24:
	call WSAGetLastError
	cmp eax,0x2733
	jne Block26

 Block25:
	push 0x1F4
	call Sleep
	sub dword ptr [ebp+0x28],1
	jns Block20

 Block26:
	xor eax,eax

 Block27:
	add esi,eax
	test eax,eax
	je Block35

 Block28:
	mov eax,esi
	sub eax,edi
	cmp dword ptr [ebp+0x2C],0
	jne Block32

 Block29:
	cmp eax,2
	jne Block20

 Block30:
	movzx ecx,word ptr [edi]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+0xC]
	mov dword ptr [ebp+0x30],ecx
	movzx ecx,cx
	cmp ecx,eax
	ja Block35

 Block31:
	mov dword ptr [ebp+0x2C],1
	jmp Block19

 Block32:
	movzx edx,word ptr [ebp+0x30]
	cmp eax,edx
	jne Block20

 Block33:
	mov dword ptr [ebp+0x2C],0
	push eax
	lea eax,[ebp+0x30]
	push edi
	push eax
	mov byte ptr [ebp-4],2
	call CIOBufferManipulator::Decode2
	add edi,eax
	add esp,0xC
	mov ecx,esi
	sub ecx,edi
	push ecx
	lea edx,[ebp+0x2C]
	push edi
	push edx
	call CIOBufferManipulator::DecodeStr
	add edi,eax
	mov eax,dword ptr [ebp+0x2C]
	add esp,0xC
	push eax
	call _atoi
	mov edx,esi
	sub edx,edi
	push edx
	movzx ecx,ax
	lea eax,[ebp+0x28]
	push edi
	push eax
	mov dword ptr [ebp+0x20],ecx
	call CIOBufferManipulator::Decode4
	add edi,eax
	add esp,0x10
	mov ecx,esi
	sub ecx,edi
	push ecx
	lea edx,[ebp+0x1C]
	push edi
	push edx
	call CIOBufferManipulator::Decode4
	add edi,eax
	add esp,0xC
	mov eax,esi
	sub eax,edi
	push eax
	lea ecx,[ebp+0x37]
	push edi
	push ecx
	call CIOBufferManipulator::Decode1
	add edi,eax
	add esp,0xC
	cmp edi,esi
	jae Block36

 Block34:
	push 0
	push 0
	call _CxxThrowException

 Block35:
	mov ecx,dword ptr [ebp+0x24]
	push 0
	call CClientSocket::OnConnect
	jmp Block83

 Block36:
	mov eax,dword ptr [ebp+0x24]
	mov edx,dword ptr [ebp+0x28]
	mov ecx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0x84],edx
	mov dword ptr [eax+0x88],ecx
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [edx+0x38]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ebp-4],1
	cmp eax,1
	jne Block38

 Block37:
	jmp Block40

 Block38:
	cmp eax,2
	jne Block78

 Block39:
	xor eax,eax

 Block40:
	cmp byte ptr [ebp+0x37],8
	mov dword ptr [ecx+0x202C],eax
	je Block42

 Block41:
	push 0x22000007
	lea ecx,[ebp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [ebp+0x1C]
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x20]
	push ecx
	mov dword ptr [ebp-0x20],eax
	call _CxxThrowException

 Block42:
	mov ax,word ptr [ebp+0x30]
	cmp ax,0x5F
	jbe Block44

 Block43:
	movzx edx,ax
	push edx
	lea ecx,[ebp-0xF40]
	call CPatchException::_ctor_0
	mov esi,eax
	push offset CPatchException::THROW_INFO
	lea eax,[ebp-0x530]
	mov ecx,0x142
	lea edi,[ebp-0x530]
	push eax
	rep movsd
	call _CxxThrowException

 Block44:
	jne Block49

 Block45:
	mov eax,dword ptr [ebp+0x20]
	cmp ax,1
	jbe Block47

 Block46:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov dword ptr [ecx+0x54],0x5F
	push 0x5F
	lea ecx,[ebp-0xF40]
	call CPatchException::_ctor_0
	push offset CPatchException::THROW_INFO
	lea edx,[ebp-0xA38]
	mov esi,eax
	mov ecx,0x142
	lea edi,[ebp-0xA38]
	push edx
	rep movsd
	call _CxxThrowException

 Block47:
	jae Block51

 Block48:
	push 0x22000007
	lea ecx,[ebp+0x20]
	call CMSException::_ctor_0
	mov eax,dword ptr [ebp+0x20]
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x14]
	push ecx
	mov dword ptr [ebp-0x14],eax
	call _CxxThrowException

 Block49:
	cmp ax,0x5F
	jae Block51

 Block50:
	push 0x22000007
	lea ecx,[ebp+0x20]
	call CMSException::_ctor_0
	mov edx,dword ptr [ebp+0x20]
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x18]
	push eax
	mov dword ptr [ebp-0x18],edx
	call _CxxThrowException

 Block51:
	mov esi,dword ptr [ebp+0x24]
	mov ecx,esi
	call CClientSocket::ClearSendReceiveCtx
	lea ecx,[esi+0xC]
	call ZList<ZInetAddr>::RemoveAll
	push 0x10
	lea ecx,[esi+0x28]
	push ecx
	xor edi,edi
	mov ecx,ebx
	mov dword ptr [esi+0x20],edi
	call ZSocketBase::GetPeerName
	cmp dword ptr [esi+0x24],edi
	je Block71

 Block52:
	mov dword ptr [ebp+0x30],edi
	mov byte ptr [ebp-4],5
	call CWvsApp::GetExceptionFileName
	lea ecx,[ebp+0x38]
	mov ebx,eax
	call ZFileStream::_ctor_default
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],6
	call ZFileStream::Close
	cmp eax,edi
	jne Block54

 Block53:
	call GetLastError
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x24]
	push edx
	mov dword ptr [ebp-0x24],eax
	call _CxxThrowException

 Block54:
	push edi
	push 0x80
	push 3
	push edi
	push 1
	push 0x80000000
	push ebx
	call CreateFileA
	mov dword ptr [ebp+0x48],eax
	cmp eax,0xFFFFFFFF
	jne Block56

 Block55:
	call GetLastError
	mov dword ptr [ebp],eax
	push offset ZException::THROW_INFO
	lea eax,[ebp]
	push eax
	call _CxxThrowException

 Block56:
	or dword ptr [ebp+0x6C],1
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x44],edi
	call ZFileStream::GetLength
	mov esi,eax
	cmp esi,edi
	je Block59

 Block57:
	cmp esi,0x2000
	jae Block59

 Block58:
	lea ecx,[ebp+0x37]
	push ecx
	push esi
	lea ecx,[ebp+0x30]
	call ZArray<unsigned char>::_Alloc
	push esi
	push eax
	lea ecx,[ebp+0x38]
	call ZFileStream::Read
	mov edi,dword ptr [ebp+0x30]

 Block59:
	lea ecx,[ebp+0x38]
	call ZFileStream::Close
	push ebx
	call DeleteFileA
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],5
	call ZFileStream::~ZFileStream
	mov dword ptr [ebp-4],4
	jmp Block62

 Block62:
	lea ecx,[ebp+0x30]
	call ZArray<unsigned char>::IsEmpty
	test eax,eax
	jne Block70

 Block63:
	push 0x1A
	lea ecx,[ebp+0xC]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],8
	test edi,edi
	jne Block65

 Block64:
	xor eax,eax
	jmp Block66

 Block65:
	mov eax,dword ptr [edi-4]

 Block66:
	push eax
	lea ecx,[ebp+0xC]
	call COutPacket::Encode2
	test edi,edi
	jne Block68

 Block67:
	xor eax,eax
	jmp Block69

 Block68:
	mov eax,dword ptr [edi-4]

 Block69:
	push eax
	push edi
	lea ecx,[ebp+0xC]
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[ebp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],4
	call ZArray<unsigned char>::RemoveAll

 Block70:
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],1
	call ZArray<unsigned char>::RemoveAll
	jmp Block75

 Block71:
	lea ecx,[ebp+0x4C]
	call CSystemInfo::_ctor_default
	mov bl,9
	lea ecx,[ebp+0x4C]
	mov byte ptr [ebp-4],bl
	call CSystemInfo::Init
	push 0x14
	lea ecx,[ebp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	push eax
	lea ecx,[ebp+0xC]
	mov byte ptr [ebp-4],0xA
	call COutPacket::Encode4
	push 0x10
	lea ecx,[ebp+0x4C]
	call CSystemInfo::GetMachineId
	push eax
	lea ecx,[ebp+0xC]
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::IsUserGM
	lea ecx,[ebp+0xC]
	test eax,eax
	je Block73

 Block72:
	push 1
	jmp Block74

 Block73:
	push edi

 Block74:
	call COutPacket::Encode1
	push edi
	lea ecx,[ebp+0xC]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x20A8
	push 8
	push ecx
	lea ecx,[ebp+0xC]
	call COutPacket::EncodeBuffer
	lea edx,[ebp+0xC]
	push edx
	mov ecx,esi
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],bl
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[ebp+0x4C]
	mov byte ptr [ebp-4],1
	call CSystemInfo::~CSystemInfo

 Block75:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	lea ecx,[ebp+4]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<ZSocketBuffer>::~ZRef<ZSocketBuffer>
	mov eax,1
	jmp Block85

 Block78:
	cmp dword ptr [ebp+0x2C],0
	mov byte ptr [ebp-4],0
	je Block83

 Block79:
	mov eax,dword ptr [ebp+0x2C]
	jmp Block82

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	lea ecx,[ebp+4]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<ZSocketBuffer>::~ZRef<ZSocketBuffer>

 Block84:
	xor eax,eax

 Block85:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CClientSocket::ConnectLogin
_SUB_EXCEPTION_HANDLER(B0590)
__SUB_CLASS_THIS0(000B0590, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B0590
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
	mov dword ptr [esp+0x20],ecx
	jmp Block2

 Block2:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+4]
	xor ebx,ebx
	int 3// TODO: 	mov edx,offset ZList<ZInetAddr>::`vftable'
	mov dword ptr [ecx+4],eax
	mov dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x48],ebx
	cmp eax,1
	jne Block21

 Block3:
	push 2
	lea edx,[esp+0x20]
	push edx
	call CWvsApp::GetCmdLine
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push 3
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x60],1
	call CWvsApp::GetCmdLine
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],2
	cmp eax,ebx
	je Block8

 Block4:
	cmp byte ptr [eax],bl
	je Block8

 Block5:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	je Block8

 Block6:
	cmp byte ptr [ecx],bl
	je Block8

 Block7:
	push ecx
	mov esi,eax
	call _atoi
	add esp,4
	push eax
	push esi
	lea ecx,[esp+0x2C]
	call ZInetAddr::_ctor_1
	push eax
	lea ecx,[esp+0x38]
	call ZList<ZInetAddr>::AddTail_Position
	jmp Block18

 Block8:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [_D_G_NLOGINNO]
	xor esi,esi
	cmp eax,ebx
	mov byte ptr [esp+0x58],3
	jle Block12

 Block9:
	lea esp,[esp]

 Block10:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [_D_G_NLOGINNO]
	inc esi
	cmp esi,eax
	jl Block10

 Block11:
	mov ebp,dword ptr [esp+0x14]

 Block12:
	xor edi,edi
	cmp eax,ebx
	jle Block17

 Block13:
	cmp ebp,ebx
	jne Block15

 Block14:
	xor esi,esi
	jmp Block16

 Block15:
	mov esi,dword ptr [ebp-4]

 Block16:
	call _rand
	xor edx,edx
	div esi
	mov esi,dword ptr [ebp+edx*4]
	lea ecx,[esp+0x14]
	lea eax,[ebp+edx*4]
	push eax
	call ZArray<long>::RemoveAt
	shl esi,4
	lea ecx,[esp+0x34]
	add esi,offset _D_G_ALOGINADDR
	call ZList<ZInetAddr>::AddTail_
	mov edx,dword ptr [esi+4]
	movzx esi,word ptr [esi+2]
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov ecx,2
	inc edi
	mov word ptr [eax],cx
	mov word ptr [eax+2],si
	mov dword ptr [eax+4],edx
	cmp edi,dword ptr [_D_G_NLOGINNO]
	jl Block13

 Block17:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x58],2
	call ZArray<long>::RemoveAll

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],1
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x1C]
	jmp Block39

 Block21:
	cmp eax,2
	jne Block44

 Block22:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	call CWvsApp::GetCmdLine
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push 1
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x60],4
	call CWvsApp::GetCmdLine
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],5
	cmp eax,ebx
	je Block27

 Block23:
	cmp byte ptr [eax],bl
	je Block27

 Block24:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block27

 Block25:
	cmp byte ptr [ecx],bl
	je Block27

 Block26:
	push ecx
	mov esi,eax
	call _atoi
	add esp,4
	push eax
	push esi
	lea ecx,[esp+0x2C]
	call ZInetAddr::_ctor_1
	push eax
	lea ecx,[esp+0x38]
	call ZList<ZInetAddr>::AddTail_Position
	jmp Block36

 Block27:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [_D_G_NLOGINNO]
	xor esi,esi
	cmp eax,ebx
	mov byte ptr [esp+0x58],6
	jle Block30

 Block28:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [_D_G_NLOGINNO]
	inc esi
	cmp esi,eax
	jl Block28

 Block29:
	mov ebp,dword ptr [esp+0x14]

 Block30:
	xor edi,edi
	cmp eax,ebx
	jle Block35

 Block31:
	cmp ebp,ebx
	jne Block33

 Block32:
	xor esi,esi
	jmp Block34

 Block33:
	mov esi,dword ptr [ebp-4]

 Block34:
	call _rand
	xor edx,edx
	div esi
	mov esi,dword ptr [ebp+edx*4]
	lea ecx,[esp+0x14]
	lea eax,[ebp+edx*4]
	push eax
	call ZArray<long>::RemoveAt
	shl esi,4
	lea ecx,[esp+0x34]
	add esi,offset _D_G_ALOGINADDR
	call ZList<ZInetAddr>::AddTail_
	mov edx,dword ptr [esi+4]
	movzx esi,word ptr [esi+2]
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov ecx,2
	inc edi
	mov word ptr [eax],cx
	mov word ptr [eax+2],si
	mov dword ptr [eax+4],edx
	cmp edi,dword ptr [_D_G_NLOGINNO]
	jl Block31

 Block35:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x58],5
	call ZArray<long>::RemoveAll

 Block36:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],4
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x18]

 Block39:
	mov byte ptr [esp+0x58],bl
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x34]
	push edx
	call CClientSocket::Connect_1
	jmp Block43

 Block43:
	int 3// TODO: 	mov dword ptr [esp+0x34],offset ZList<ZInetAddr>::`vftable'
	jmp Block45

 Block44:
	mov dword ptr [esp+0x34],edx

 Block45:
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZList<ZInetAddr>::RemoveAll
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CClientSocket::OnMigrateCommand
_SUB_EXCEPTION_HANDLER(ADD50)
__SUB_CLASS_THIS(000ADD50, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ADD50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x18],eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x3C]
	mov ecx,ebx
	call CInPacket::Decode1
	test al,al
	je Block10

 Block1:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block4

 Block2:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CInterStage::ms_RTTI_CInterStage
	call edx
	test eax,eax
	je Block4

 Block3:
	cmp dword ptr [_D_G_PSTAGE+4],0
	jne Block8

 Block4:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0
	push eax
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call set_stage
	add esp,8

 Block8:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode2
	push 0
	movzx ebx,ax
	call dword ptr [ZImports::_htonl]
	push ebx
	call dword ptr [ZImports::_htons]
	movzx ecx,ax
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x1A],cx
	mov dword ptr [esp+0x1C],eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov eax,2
	push ecx
	mov ecx,esi
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x20],edi
	call CWvsContext::IssueConnect

 Block9:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [esp+0x18]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x28
	ret 4

 Block10:
	cmp dword ptr [esi+0x90],0
	je Block12

 Block11:
	push 0
	call PostQuitMessage
	jmp Block9

 Block12:
	push 0x21000002
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x14]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x18],edx
	call _CxxThrowException
	int 3
}
}
// CClientSocket::ProcessPacket
_SUB_EXCEPTION_HANDLER(B00F0)
__SUB_CLASS_THIS(000B00F0, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B00F0
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
	mov ebx,ecx
	mov ebp,dword ptr [_D_G_PSTAGE+4]
	mov dword ptr [esp+0x18],ebp
	test ebp,ebp
	je Block2

 Block1:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov esi,dword ptr [esp+0x2C]
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode2
	movzx edi,ax
	lea eax,[edi-0x10]
	cmp eax,7
	ja Block11

 Block3:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block4
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8
cmp EAX, 5
je Block11
cmp EAX, 6
je Block11
cmp EAX, 7
je Block10


 Block4:
	push esi
	mov ecx,ebx
	call CClientSocket::OnAliveReq
	jmp Block15

 Block5:
	push esi
	mov ecx,ebx
	call CClientSocket::OnMigrateCommand
	jmp Block15

 Block6:
	push esi
	mov ecx,ebx
	call CClientSocket::OnAuthenCodeChanged
	jmp Block15

 Block7:
	push esi
	mov ecx,ebx
	call CClientSocket::OnAuthenMessage
	jmp Block15

 Block8:
	mov ecx,dword ptr [TSingleton<CSecurityClient>::ms_pInstance]
	test ecx,ecx
	je Block15

 Block9:
	push esi
	call CSecurityClient::OnPacket
	jmp Block15

 Block10:
	push esi
	mov ecx,ebx
	call CClientSocket::OnCheckCrcResult
	jmp Block15

 Block11:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push esi
	call CWvsApp::SetBackupPacket
	lea ecx,[edi-0x1C]
	cmp ecx,0x70
	ja Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	call CWvsContext::OnPacket
	jmp Block15

 Block13:
	test ebp,ebp
	je Block15

 Block14:
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx]
	lea ecx,[ebp+8]
	push esi
	push edi
	call eax

 Block15:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test ebp,ebp
	je Block17

 Block16:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CStage>::_ReleaseRaw

 Block17:
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
// CClientSocket::OnCheckCrcResult
__SUB_CLASS_THIS(000ADF10, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	test al,al
	jne Block2

 Block1:
	push 0x2200000A
	lea ecx,[esp+0xC]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+8]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+4]
	push ecx
	mov dword ptr [esp+8],eax
	call _CxxThrowException

 Block2:
	pop ecx
	ret 4
}
}
// CClientSocket::OnClose
__SUB_CLASS_THIS0(000AF620, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	call CClientSocket::Close
	cmp dword ptr [esi+0x90],0
	je Block2

 Block1:
	push 0
	call PostQuitMessage
	pop esi
	add esp,8
	ret

 Block2:
	cmp dword ptr [esi+0x24],0
	je Block4

 Block3:
	push 0x22000002
	lea ecx,[esp+8]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+4]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0xC]
	push ecx
	mov dword ptr [esp+0x10],eax
	call _CxxThrowException

 Block4:
	push 0x21000002
	lea ecx,[esp+0xC]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+8]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],edx
	call _CxxThrowException
	int 3
}
}
// CClientSocket::Close
__SUB_CLASS_THIS0(000AE990, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CClientSocket::ClearSendReceiveCtx
	mov eax,dword ptr [esi+8]
	cmp eax,0xFFFFFFFF
	je Block2

 Block1:
	push eax
	call dword ptr [ZImports::_closesocket]
	mov dword ptr [esi+8],0xFFFFFFFF

 Block2:
	pop esi
	ret
}
}
// CClientSocket::OnAliveReq
_SUB_EXCEPTION_HANDLER(AFC90)
__SUB_CLASS_THIS(000AFC90, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AFC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x2C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x58],ecx
	push 0x19
	lea ecx,[ebp-0x54]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-0x5C],eax
	mov eax,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-0x60],eax
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x60]
	push ecx
	mov ecx,dword ptr [ebp-0x58]
	call CClientSocket::SendPacket
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x54]
	call COutPacket::~COutPacket
	jmp Block15

 Block15:
	lea ecx,[ebp-0x3C]
	call ZInetAddr::~ZInetAddr
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x2C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CClientSocket::OnAuthenMessage
__SUB_CLASS_THIS(000ADEB0, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode1
	mov bl,al
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x2064],0
	je Block4

 Block1:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	call eax
	test eax,eax
	jne Block4

 Block3:
	movzx ecx,bl
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::ShowPremiumArgument

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CClientSocket::~CClientSocket
_SUB_EXCEPTION_HANDLER(AEE40)
__SUB_CLASS_THIS0(000AEE40, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AEE40
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
	int 3// TODO: 	mov dword ptr [esi],offset CClientSocket::`vftable'
	mov dword ptr [esp+0x14],6
	call CClientSocket::Close
	mov eax,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x6C]
	mov byte ptr [esp+0x14],4
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ZSocketBuffer>>::`vftable'
	call ZList<ZRef<ZSocketBuffer>>::RemoveAll
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ZSocketBuffer>>::`vftable'
	call ZList<ZRef<ZSocketBuffer>>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZInetAddr>::`vftable'
	call ZList<ZInetAddr>::RemoveAll
	mov eax,dword ptr [esi+8]
	cmp eax,0xFFFFFFFF
	je Block4

 Block3:
	push eax
	call dword ptr [ZImports::_closesocket]
	mov dword ptr [esi+8],0xFFFFFFFF

 Block4:
	mov dword ptr [TSingleton<CClientSocket>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPatchException::~CPatchException
__SUB_CLASS_THIS0(000ACFE0, __thiscall, 118329,  CPatchException, void) {
__asm {

 Block0:
	ret
}
}
// CClientSocket::OnError
__SUB_CLASS_THIS(000AF590, __thiscall, 7968,  CClientSocket, void, int32_t) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	call CClientSocket::Close
	cmp dword ptr [esi+0x14],0
	je Block2

 Block1:
	push 0
	mov ecx,esi
	call CClientSocket::OnConnect
	pop esi
	add esp,8
	ret 4

 Block2:
	cmp dword ptr [esi+0x90],0
	je Block4

 Block3:
	pop esi
	add esp,8
	mov dword ptr [esp+4],0
	jmp dword ptr [PostQuitMessage]

 Block4:
	cmp dword ptr [esi+0x24],0
	je Block6

 Block5:
	push 0x22000002
	lea ecx,[esp+8]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+4]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0xC]
	push ecx
	mov dword ptr [esp+0x10],eax
	call _CxxThrowException

 Block6:
	push 0x21000002
	lea ecx,[esp+0xC]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+8]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],edx
	call _CxxThrowException
	int 3
}
}
// CClientSocket::ClearSendReceiveCtx
__SUB_CLASS_THIS0(000AE1A0, __thiscall, 7955,  CClientSocket, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor ecx,ecx
	xor eax,eax
	mov word ptr [esi+0x70],cx
	lea ecx,[esi+0x3C]
	mov dword ptr [esi+0x68],eax
	mov dword ptr [esi+0x78],eax
	call ZList<ZRef<ZSocketBuffer>>::RemoveAll
	lea ecx,[esi+0x50]
	pop esi
	jmp  ZList<ZRef<ZSocketBuffer>>::RemoveAll
}
}
// CClientSocket::OnAuthenCodeChanged
_SUB_EXCEPTION_HANDLER(AFE50)
__SUB_CLASS_THIS(000AFE50, __thiscall, 7981,  CClientSocket, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AFE50
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
	mov esi,dword ptr [esp+0xCC]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov bl,al
	call CInPacket::Decode4
	movzx esi,bl
	shr esi,1
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	and esi,1
	cmp esi,dword ptr [eax+0x2064]
	je Block11

 Block1:
	mov dword ptr [eax+0x2064],esi
	mov ebp,dword ptr [_D_G_PSTAGE+4]
	test ebp,ebp
	je Block5

 Block2:
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x48]
	lea edi,[ebp+4]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,edi
	call edx
	test eax,eax
	je Block5

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,edi
	call edx
	test eax,eax
	je Block5

 Block4:
	mov ecx,ebp
	call CCashShop::OnStatusExit

 Block5:
	xor edi,edi
	cmp esi,edi
	je Block11

 Block6:
	push edi
	push offset _S_
	push edi
	push edi
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0xC4],edi
	call dword ptr [ZImports::_GetVersion]
	cmp eax,0x80000000
	jb Block9

 Block7:
	lea eax,[esp+0x18]
	push 0x185
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC8],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC4],0
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea ecx,[esp+0x20]
	call CUINoticePremium::_ctor_default
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xC4],2
	call CDialog::DoModal
	mov ecx,dword ptr [esp+0x1C]
	push edi
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ShowPremiumArgument
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xC4],0
	call CUINoticePremium::~CUINoticePremium
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC4],0xFFFFFFFF
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	test bl,4
	je Block13

 Block12:
	push 0x21000004
	lea ecx,[esp+0x20]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x1C]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x20],edx
	call _CxxThrowException

 Block13:
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret 4
}
}
// CClientSocket::IsTimeout
__SUB_CLASS_THIS0(005C0900, __thiscall, 7977,  CClientSocket, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	sub eax,dword ptr [esi+0x38]
	xor ecx,ecx
	test eax,eax
	setg cl
	pop esi
	mov eax,ecx
	ret
}
}
