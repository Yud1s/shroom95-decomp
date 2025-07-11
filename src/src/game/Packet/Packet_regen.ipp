#include "regen.hpp"
// Packet.ipp
#include "Packet.hpp"

// CIOBufferManipulator::Decode4
__SUB(000077C0, __cdecl, 6896,  uint32_t, unsigned long&, const unsigned char*, uint32_t) {
__asm {

 Block0:
	mov eax,4
	cmp dword ptr [esp+0xC],eax
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],0x26
	call _CxxThrowException

 Block2:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+4]
	mov dword ptr [ecx],edx
	ret
}
}
// COutPacket::EncodeStr
_SUB_EXCEPTION_HANDLER(841F0)
__SUB_CLASS_THIS(000841F0, __thiscall, 7014,  COutPacket, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_841F0
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
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	mov eax,dword ptr [esi+4]
	lea edi,[esi+4]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	mov edx,dword ptr [esi+8]
	lea ecx,[ecx+edx+2]
	cmp ecx,eax
	jbe Block10

 Block6:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block8:
	add eax,eax
	cmp ecx,eax
	ja Block8

 Block9:
	lea ecx,[esp+0x20]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block10:
	mov edx,dword ptr [edi]
	add edx,dword ptr [esi+8]
	lea eax,[esp+0x20]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CIOBufferManipulator::EncodeStr
	add dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// COutPacket::COutPacket
_SUB_EXCEPTION_HANDLER(28D020)
__SUB_CLASS_THIS0(0028D020, __thiscall, 6997,  COutPacket, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28D020
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
	mov dword ptr [esp+0xC],esi
	lea eax,[esp+0xB]
	push eax
	lea ecx,[esi+4]
	push 0x100
	mov dword ptr [ecx],0
	call ZArray<unsigned char>::_Alloc
	push 0x7FFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call COutPacket::Init_1
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CInPacket::Decode1
_SUB_EXCEPTION_HANDLER(97D0)
__SUB_CLASS_THIS0(000097D0, __thiscall, 6937,  CInPacket, unsigned char) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x18],ecx
	movzx eax,word ptr [ecx+0xC]
	mov edx,dword ptr [ecx+0x14]
	mov esi,dword ptr [ecx+8]
	sub eax,edx
	mov dword ptr [ebp-4],0
	cmp eax,1
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [ebp-0x14],0x26
	call _CxxThrowException
	mov esi,dword ptr [ebp-0x18]
	mov ecx,esi
	call CInPacket::WriteClientLog
	mov edi,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,esi
	call CInPacket::SendBackupPacket
	mov edx,dword ptr [edi]
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block2:
	mov al,byte ptr [edx+esi]
	inc edx
	mov dword ptr [ecx+0x14],edx
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
// CInPacket::DumpString
_SUB_EXCEPTION_HANDLER(28CF20)
__SUB_CLASS_THIS(0028CF20, __thiscall, 6966,  CInPacket, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28CF20
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebp+8]
	xor edx,edx
	xor edi,edi
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ecx
	cmp dx,word ptr [ebp+0xC]
	jae Block10

 Block1:
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block3

 Block2:
	cmp edi,eax
	jge Block9

 Block3:
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x1C]
	movzx ecx,byte ptr [edi+eax]
	push ecx
	lea edx,[esp+0x18]
	push offset _S_02X
	push edx
	mov dword ptr [esp+0x34],1
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x20]
	add esp,0xC
	cmp esi,ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esp+0x30]
	push eax
	push esi
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x28],bl
	cmp esi,ebx
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	movzx eax,word ptr [ebp+0xC]
	inc edi
	cmp edi,eax
	jl Block1

 Block9:
	mov eax,dword ptr [esp+0x30]

 Block10:
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
// COutPacket::Encode2
__SUB_CLASS_THIS(0002CA10, __thiscall, 7008,  COutPacket, void, uint16_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	lea edi,[esi+4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esi+8]
	add ecx,2
	cmp ecx,eax
	jbe Block7

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	add eax,eax
	cmp ecx,eax
	ja Block5

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block7:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov cx,word ptr [esp+0xC]
	mov word ptr [edx+eax],cx
	add dword ptr [esi+8],2
	pop edi
	pop esi
	ret 4
}
}
// CIOBufferManipulator::EncodeStr
__SUB(000821A0, __cdecl, 6920,  uint32_t, NakedParam<ZXString<char>>, unsigned char*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi-4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [esp+0x10]
	mov word ptr [ecx],ax
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	add ecx,2
	push esi
	push ecx
	call _memcpy
	add esp,0xC
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi-4]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	lea edi,[eax+2]
	test esi,esi
	je Block11

 Block10:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,edi
	pop edi
	pop esi
	ret
}
}
// CInPacket::Decode4
_SUB_EXCEPTION_HANDLER(9870)
__SUB_CLASS_THIS0(00009870, __thiscall, 6939,  CInPacket, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9870
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x18],ecx
	movzx eax,word ptr [ecx+0xC]
	mov edx,dword ptr [ecx+0x14]
	mov esi,dword ptr [ecx+8]
	sub eax,edx
	mov dword ptr [ebp-4],0
	cmp eax,4
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [ebp-0x14],0x26
	call _CxxThrowException
	mov esi,dword ptr [ebp-0x18]
	mov ecx,esi
	call CInPacket::WriteClientLog
	mov edi,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,esi
	call CInPacket::SendBackupPacket
	mov edx,dword ptr [edi]
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block2:
	mov eax,dword ptr [edx+esi]
	add edx,4
	mov dword ptr [ecx+0x14],edx
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
// CIOBufferManipulator::Decode1
__SUB(00007790, __cdecl, 6890,  uint32_t, unsigned char&, const unsigned char*, uint32_t) {
__asm {

 Block0:
	mov eax,1
	cmp dword ptr [esp+0xC],eax
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],0x26
	call _CxxThrowException

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dl,byte ptr [ecx]
	mov ecx,dword ptr [esp+4]
	mov byte ptr [ecx],dl
	ret
}
}
// CInPacket::~CInPacket
__SUB_CLASS_THIS0(000AE6A0, __thiscall, 6936,  CInPacket, void) {
__asm {

 Block0:
	add ecx,8
	jmp  ZArray<unsigned char>::RemoveAll
}
}
// COutPacket::Encode1
__SUB_CLASS_THIS(00015360, __thiscall, 7004,  COutPacket, void, unsigned char) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	lea edi,[esi+4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esi+8]
	inc ecx
	cmp ecx,eax
	jbe Block7

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	add eax,eax
	cmp ecx,eax
	ja Block5

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block7:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov cl,byte ptr [esp+0xC]
	mov byte ptr [edx+eax],cl
	inc dword ptr [esi+8]
	pop edi
	pop esi
	ret 4
}
}
// CInPacket::DecodeBuffer
_SUB_EXCEPTION_HANDLER(336A0)
__SUB_CLASS_THIS(000336A0, __thiscall, 6941,  CInPacket, void, void*, uint32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_336A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	movzx eax,word ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [esi+8]
	mov edi,dword ptr [ebp+0xC]
	sub eax,ecx
	add ecx,edx
	mov dword ptr [ebp-4],0
	cmp eax,edi
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [ebp-0x14],0x26
	call _CxxThrowException
	mov esi,dword ptr [ebp-0x18]
	mov ecx,esi
	call CInPacket::WriteClientLog
	mov edi,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,esi
	call CInPacket::SendBackupPacket
	mov edx,dword ptr [edi]
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block2:
	push edi
	push ecx
	mov ecx,dword ptr [ebp+8]
	push ecx
	call _memcpy
	add esp,0xC
	add dword ptr [esi+0x14],edi
	mov ecx,dword ptr [ebp-0xC]
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
// CInPacket::SendBackupPacket
__SUB_CLASS_THIS(0028CC80, __thiscall, 6973,  CInPacket, void, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push eax
	push 1
	call CWvsApp::SendBackupPacket
	ret 4
}
}
// COutPacket::COutPacket
__SUB_CLASS_THIS(005D6700, __thiscall, 6992,  COutPacket, void, const COutPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea edx,[edi+4]
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	push edx
	mov dword ptr [ecx],0
	call ZArray<unsigned char>::operator=
	mov eax,dword ptr [edi+8]
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [edi+0xC]
	pop edi
	mov dword ptr [esi+0xC],ecx
	mov eax,esi
	pop esi
	ret 4
}
}
// COutPacket::Init
__SUB_CLASS_THIS(0028CED0, __thiscall, 7019,  COutPacket, void, long, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push edi
	xor edi,edi
	mov dword ptr [esi],ecx
	mov dword ptr [esi+8],edi
	cmp eax,0x7FFFFFFF
	je Block4

 Block1:
	cmp dword ptr [esp+0x14],edi
	je Block3

 Block2:
	push ecx
	push eax
	mov ecx,esi
	call COutPacket::InitByte
	mov dword ptr [esi+0xC],edi
	pop edi
	pop esi
	ret 0xC

 Block3:
	push eax
	mov ecx,esi
	call COutPacket::Encode2

 Block4:
	mov dword ptr [esi+0xC],edi
	pop edi
	pop esi
	ret 0xC
}
}
// COutPacket::InitByte
__SUB_CLASS_THIS(0028CEA0, __thiscall, 7018,  COutPacket, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+8],0
	cmp eax,0x7FFFFFFF
	je Block2

 Block1:
	push eax
	call COutPacket::Encode1

 Block2:
	ret 8
}
}
// COutPacket::COutPacket
_SUB_EXCEPTION_HANDLER(28D090)
__SUB_CLASS_THIS(0028D090, __thiscall, 6996,  COutPacket, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28D090
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
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esi+4]
	push 0x100
	mov dword ptr [ecx],0
	call ZArray<unsigned char>::_Alloc
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call COutPacket::Init_1
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CIOBufferManipulator::Decode2
__SUB(00029360, __cdecl, 6893,  uint32_t, uint16_t&, const unsigned char*, uint32_t) {
__asm {

 Block0:
	mov eax,2
	cmp dword ptr [esp+0xC],eax
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],0x26
	call _CxxThrowException

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dx,word ptr [ecx]
	mov ecx,dword ptr [esp+4]
	mov word ptr [ecx],dx
	ret
}
}
// COutPacket::EncodeBuffer
__SUB_CLASS_THIS(00082200, __thiscall, 7015,  COutPacket, void, const void*, uint32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	lea edi,[esi+4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esi+8]
	mov ebx,dword ptr [esp+0x14]
	add ecx,ebx
	cmp ecx,eax
	jbe Block7

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	add eax,eax
	cmp ecx,eax
	ja Block5

 Block6:
	lea edx,[esp+0x14]
	push edx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block7:
	mov ecx,dword ptr [esi+8]
	mov eax,dword ptr [esp+0x10]
	add ecx,dword ptr [edi]
	push ebx
	push eax
	push ecx
	call _memcpy
	add dword ptr [esi+8],ebx
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CInPacket::Decode2
_SUB_EXCEPTION_HANDLER(2A2A0)
__SUB_CLASS_THIS0(0002A2A0, __thiscall, 6938,  CInPacket, uint16_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A2A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x18],ecx
	movzx eax,word ptr [ecx+0xC]
	mov edx,dword ptr [ecx+0x14]
	mov esi,dword ptr [ecx+8]
	sub eax,edx
	mov dword ptr [ebp-4],0
	cmp eax,2
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [ebp-0x14],0x26
	call _CxxThrowException
	mov esi,dword ptr [ebp-0x18]
	mov ecx,esi
	call CInPacket::WriteClientLog
	mov edi,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,esi
	call CInPacket::SendBackupPacket
	mov edx,dword ptr [edi]
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block2:
	movzx eax,word ptr [edx+esi]
	add edx,2
	mov dword ptr [ecx+0x14],edx
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
// CIOBufferManipulator::DecodeStr
__SUB(00082140, __cdecl, 6900,  uint32_t, ZXString<char>&, const unsigned char*, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0xC]
	cmp edx,2
	jae Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],0x26
	call _CxxThrowException

 Block2:
	mov ecx,dword ptr [esp+8]
	movzx eax,word ptr [ecx]
	push esi
	lea esi,[eax+2]
	cmp edx,esi
	jae Block4

 Block3:
	push offset ZException::THROW_INFO
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x18],0x26
	call _CxxThrowException

 Block4:
	add ecx,2
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x10]
	call ZXString<char>::Assign
	mov eax,esi
	pop esi
	ret
}
}
// CIOBufferManipulator::_De
// CInPacket::RawAppendBuffer
__SUB_CLASS_THIS(0028CD80, __thiscall, 6969,  CInPacket, void, const void*, uint32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	push edi
	lea edi,[esi+8]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	movzx ecx,word ptr [esi+0xC]
	mov ebx,dword ptr [esp+0x14]
	add ecx,ebx
	cmp ecx,eax
	jbe Block7

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block5:
	add eax,eax
	cmp ecx,eax
	ja Block5

 Block6:
	lea edx,[esp+0x14]
	push edx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block7:
	movzx ecx,word ptr [esi+0xC]
	mov eax,dword ptr [esp+0x10]
	add ecx,dword ptr [edi]
	push ebx
	push eax
	push ecx
	call _memcpy
	add word ptr [esi+0xC],bx
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// COutPacket::MakeBufferList
_SUB_EXCEPTION_HANDLER(28D100)
__SUB_CLASS_THIS(0028D100, __thiscall, 7026,  COutPacket, void, ZList<ZRef<ZSocketBuffer> >&, uint16_t, unsigned long*, int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28D100
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
	mov dword ptr [esp+0x1C],ebp
	cmp dword ptr [esp+0x44],0
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+4]
	lea edi,[eax+4]
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x14],ecx
	je Block3

 Block1:
	cmp dword ptr [ebp+0xC],0
	jne Block3

 Block2:
	push eax
	push ecx
	call CIOBufferManipulator::_En
	mov dword ptr [ebp+0xC],1

 Block3:
	cmp edi,0x5B4
	jb Block5

 Block4:
	mov edi,0x5B4

 Block5:
	lea eax,[esp+0x3C]
	push eax
	push edi
	call ZSocketBuffer::Alloc
	mov ebx,eax
	add esp,8
	mov dword ptr [esp+0x24],ebx
	test ebx,ebx
	je Block7

 Block6:
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	cmp dword ptr [ebp],0
	mov dword ptr [esp+0x30],0
	je Block9

 Block8:
	mov dword ptr [ebx+8],ebx

 Block9:
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [ebx+0x10]
	lea esi,[eax+edi]
	test ecx,ecx
	je Block11

 Block10:
	mov dx,word ptr [ecx+2]
	xor dx,word ptr [esp+0x3C]
	movzx ecx,dx
	jmp Block12

 Block11:
	movzx ecx,word ptr [esp+0x3C]

 Block12:
	mov word ptr [eax],cx
	add eax,2
	cmp dword ptr [esp+0x44],0
	je Block14

 Block13:
	movzx ecx,cx
	xor ecx,dword ptr [ebp+8]
	jmp Block15

 Block14:
	mov ecx,dword ptr [ebp+8]

 Block15:
	mov word ptr [eax],cx
	add eax,2
	sub esi,eax
	cmp dword ptr [esp+0x44],0
	je Block17

 Block16:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x48]
	push ecx
	push esi
	push edx
	push eax
	call CAESCipher::Encrypt
	add esp,0x10
	jmp Block18

 Block17:
	mov ecx,dword ptr [esp+0x14]
	push esi
	push ecx
	push eax
	call _memcpy
	add esp,0xC

 Block18:
	mov ecx,dword ptr [esp+0x38]
	add dword ptr [esp+0x14],esi
	call ZList<ZRef<ZSocketBuffer>>::AddTail_
	lea edx,[esp+0x20]
	push edx
	mov ecx,eax
	call ZRef<ZSocketBuffer>::op_assign_copy
	mov ebp,dword ptr [esp+0x18]
	sub ebp,edi
	mov dword ptr [esp+0x18],ebp
	je Block39

 Block19:
	jmp Block21

 Block20:
	mov ebp,dword ptr [esp+0x18]

 Block21:
	cmp ebp,0x5B4
	jb Block23

 Block22:
	mov ebp,0x5B4

 Block23:
	lea eax,[esp+0x3C]
	push eax
	push ebp
	call ZSocketBuffer::Alloc
	mov edi,eax
	add esp,8
	test edi,edi
	je Block25

 Block24:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block25:
	mov esi,ebx
	mov dword ptr [esp+0x24],edi
	test esi,esi
	je Block28

 Block26:
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx],0
	je Block30

 Block29:
	mov dword ptr [edi+8],edi

 Block30:
	lea eax,[edi+0x10]
	mov eax,dword ptr [eax]
	lea esi,[eax+ebp]
	sub esi,eax
	cmp dword ptr [esp+0x44],0
	je Block32

 Block31:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x48]
	push edx
	push esi
	push ecx
	push eax
	call CAESCipher::Encrypt
	add esp,0x10
	jmp Block33

 Block32:
	mov edx,dword ptr [esp+0x14]
	push esi
	push edx
	push eax
	call _memcpy
	add esp,0xC

 Block33:
	mov ecx,dword ptr [esp+0x38]
	add dword ptr [esp+0x14],esi
	call ZList<ZRef<ZSocketBuffer>>::AddTail_
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	lea eax,[edi+4]
	push eax
	call ebx
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block38

 Block34:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block35:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block37

 Block36:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block37:
	mov dword ptr [esi+4],0

 Block38:
	sub dword ptr [esp+0x18],ebp
	mov ebx,dword ptr [esp+0x24]
	mov dword ptr [esi+4],edi
	jne Block20

 Block39:
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block40:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block41:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x14
}
}
// CInPacket::DecryptData
__SUB_CLASS_THIS(0028CCA0, __thiscall, 6963,  CInPacket, int32_t, unsigned long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,ecx
	movzx ebx,word ptr [ebp+0x10]
	push edi
	mov edi,ebx
	cmp ebx,0x5B0
	jb Block2

 Block1:
	mov edi,0x5B0

 Block2:
	test ebx,ebx
	ja Block4

 Block3:
	pop edi
	pop ebp
	xor eax,eax
	pop ebx
	ret 4

 Block4:
	push esi
	mov esi,dword ptr [ebp+8]
	lea eax,[esp+0x14]
	push eax
	add esi,4
	push edi
	push esi
	push esi
	call CAESCipher::Decrypt
	add esp,0x10
	add esi,edi
	sub ebx,edi
	je Block8

 Block5:
	mov edi,ebx
	cmp ebx,0x5B4
	jb Block7

 Block6:
	mov edi,0x5B4

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	push edi
	push esi
	push esi
	call CAESCipher::Decrypt
	add esp,0x10
	add esi,edi
	sub ebx,edi
	jne Block5

 Block8:
	movzx edx,word ptr [ebp+0x10]
	mov eax,dword ptr [ebp+8]
	push edx
	add eax,4
	push eax
	call CIOBufferManipulator::_De
	pop esi
	pop edi
	pop ebp
	mov eax,1
	pop ebx
	ret 4
}
}
// COutPacket::~COutPacket
__SUB_CLASS_THIS0(0002B950, __thiscall, 6999,  COutPacket, void) {
__asm {

 Block0:
	add ecx,4
	jmp  ZArray<unsigned char>::RemoveAll
}
}
// COutPacket::Init
__SUB_CLASS_THIS(0028D000, __thiscall, 7020,  COutPacket, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push 0
	push 0
	push eax
	call COutPacket::Init_0
	ret 4
}
}
// CInPacket::AppendBuffer
__SUB_CLASS_THIS(0028D550, __thiscall, 6959,  CInPacket, long, ZRef<ZSocketBuffer>&, long*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esi+4]
	mov dword ptr [eax],ecx

 Block2:
	cmp dword ptr [esi+4],0
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+4]
	mov ebp,dword ptr [eax+0x10]
	mov edi,dword ptr [eax+0xC]
	jne Block12

 Block3:
	movzx ecx,word ptr [esi+0xC]
	mov eax,4
	sub eax,ecx
	mov ebx,edi
	cmp edi,eax
	jb Block5

 Block4:
	mov ebx,eax

 Block5:
	push ebx
	push ebp
	mov ecx,esi
	call CInPacket::RawAppendBuffer
	cmp word ptr [esi+0xC],4
	jb Block9

 Block6:
	mov ecx,esi
	mov dword ptr [esi+4],1
	call CInPacket::Decode2
	mov ecx,esi
	mov word ptr [esi+0xE],ax
	call CInPacket::Decode2
	cmp dword ptr [esp+0x1C],0
	movzx eax,ax
	je Block8

 Block7:
	movzx edx,word ptr [esi+0xE]
	xor eax,edx

 Block8:
	mov word ptr [esi+0x10],ax

 Block9:
	sub edi,ebx
	jne Block11

 Block10:
	mov ecx,dword ptr [esp+0x14]
	push edi
	call ZRef<ZSocketBuffer>::op_assign_zero
	mov eax,dword ptr [esi+4]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block11:
	add ebp,ebx

 Block12:
	movzx ecx,word ptr [esi+0xC]
	movzx eax,word ptr [esi+0x10]
	sub eax,ecx
	add eax,4
	mov ebx,edi
	cmp edi,eax
	jb Block14

 Block13:
	mov ebx,eax

 Block14:
	push ebx
	push ebp
	mov ecx,esi
	call CInPacket::RawAppendBuffer
	movzx edx,word ptr [esi+0x10]
	movzx eax,word ptr [esi+0xC]
	add edx,4
	cmp eax,edx
	jb Block16

 Block15:
	mov dword ptr [esi+4],2

 Block16:
	sub edi,ebx
	mov ebp,dword ptr [esp+0x14]
	je Block19

 Block17:
	mov ecx,dword ptr [ebp+4]
	mov eax,dword ptr [ecx+0xC]
	lea edx,[esp+0x14]
	push edx
	push edi
	sub eax,edi
	push eax
	call ZSocketBuffer::Sub
	mov edi,eax
	test edi,edi
	je Block19

 Block18:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov ebx,dword ptr [ebp+4]
	mov dword ptr [ebp+4],edi
	test ebx,ebx
	je Block22

 Block20:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block21:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block22:
	mov eax,dword ptr [esi+4]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CInPacket::operator=
__SUB_CLASS_THIS(0023EA10, __thiscall, 6976,  CInPacket, CInPacket&, const CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	mov dword ptr [esi],eax
	mov ecx,dword ptr [edi+4]
	lea edx,[edi+8]
	mov dword ptr [esi+4],ecx
	push edx
	lea ecx,[esi+8]
	call ZArray<unsigned char>::operator=
	mov ax,word ptr [edi+0xC]
	mov word ptr [esi+0xC],ax
	mov cx,word ptr [edi+0xE]
	mov word ptr [esi+0xE],cx
	mov dx,word ptr [edi+0x10]
	mov word ptr [esi+0x10],dx
	mov eax,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],eax
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// CIOBufferManipulator::_En
// CInPacket::DecodeStr
_SUB_EXCEPTION_HANDLER(84140)
__SUB_CLASS_THIS0(00084140, __thiscall, 6940,  CInPacket, ZXString<char>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84140
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp-0x14],0
	mov edi,dword ptr [ebp+8]
	mov eax,1
	mov dword ptr [ebp-4],eax
	mov dword ptr [edi],0
	movzx edx,word ptr [esi+0xC]
	mov ecx,dword ptr [esi+8]
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [esi+0x14]
	sub edx,eax
	push edx
	add eax,ecx
	push eax
	push edi
	call CIOBufferManipulator::DecodeStr
	add esp,0xC
	add dword ptr [esi+0x14],eax
	mov eax,edi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CInPacket::CInPacket
_SUB_EXCEPTION_HANDLER(28CDF0)
__SUB_CLASS_THIS(0028CDF0, __thiscall, 6933,  CInPacket, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28CDF0
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
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	lea ecx,[edi+8]
	mov dword ptr [ecx],0
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [esi]
	mov dword ptr [edi],eax
	mov dword ptr [edi+4],2
	movzx eax,word ptr [esi+0xC]
	mov ebx,dword ptr [esi+8]
	lea edx,[esp+0x24]
	push edx
	push eax
	mov dword ptr [esp+0x24],0
	call ZArray<unsigned char>::_Alloc
	movzx ecx,word ptr [esi+0xC]
	push ecx
	push ebx
	push eax
	call _memcpy
	mov dx,word ptr [esi+0xC]
	mov word ptr [edi+0xC],dx
	mov ax,word ptr [esi+0xE]
	mov word ptr [edi+0xE],ax
	mov cx,word ptr [esi+0x10]
	mov word ptr [edi+0x10],cx
	mov edx,dword ptr [esi+0x14]
	add esp,0xC
	xor eax,eax
	mov dword ptr [edi+0x14],edx
	mov word ptr [esi+0xC],ax
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+4],0
	mov eax,edi
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
// CInPacket::BackupBuffer
__SUB_CLASS_THIS(005C1FF0, __thiscall, 6972,  CInPacket, uint32_t, ZArray<unsigned char>&, uint32_t) {
__asm {

 Block0:
	movzx eax,word ptr [ecx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	cmp esi,eax
	jbe Block2

 Block1:
	mov esi,eax

 Block2:
	mov eax,dword ptr [ecx+8]
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [ecx]
	push esi
	push eax
	push edx
	call _memcpy
	add esp,0xC
	mov eax,esi
	pop esi
	ret 8
}
}
// COutPacket::Encode4
__SUB_CLASS_THIS(000153B0, __thiscall, 7011,  COutPacket, void, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	lea edi,[esi+4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esi+8]
	add ecx,4
	cmp ecx,eax
	jbe Block7

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	add eax,eax
	cmp ecx,eax
	ja Block5

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block7:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edx+eax],ecx
	add dword ptr [esi+8],4
	pop edi
	pop esi
	ret 4
}
}
