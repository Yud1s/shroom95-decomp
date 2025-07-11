#include "regen.hpp"
// Exception.ipp
#include "Exception.hpp"

// CMSException::CMSException
__SUB_CLASS_THIS(00120F70, __thiscall, 120173,  CMSException, void, HRESULT) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi],eax
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	push eax
	push 3
	call CWvsApp::SendBackupPacket

 Block2:
	mov eax,esi
	pop esi
	ret 4
}
}
// CMSException::GetMessageA
__SUB_CLASS_THIS0(001210B0, __thiscall, 120177,  CMSException, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx]
	cmp eax,0x22000001
	push esi
	mov dword ptr [esp+4],0
	jg Block10

 Block1:
	je Block9

 Block2:
	sub eax,0x21000001
	cmp eax,3
	ja Block20

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block6
cmp EAX, 2
je Block7
cmp EAX, 3
je Block8


 Block4:
	push 0x4D

 Block5:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block6:
	push 0x4E
	jmp Block5

 Block7:
	push 0x4F
	jmp Block5

 Block8:
	push 0x5B
	jmp Block5

 Block9:
	push 0x50
	jmp Block5

 Block10:
	sub eax,0x22000002
	cmp eax,8
	ja Block20

 Block11:
	cmp EAX, 0
je Block12
cmp EAX, 1
je Block13
cmp EAX, 2
je Block14
cmp EAX, 3
je Block15
cmp EAX, 4
je Block16
cmp EAX, 5
je Block17
cmp EAX, 6
je Block18
cmp EAX, 7
je Block20
cmp EAX, 8
je Block19


 Block12:
	push 0x52
	jmp Block5

 Block13:
	push 0x53
	jmp Block5

 Block14:
	push 0x54
	jmp Block5

 Block15:
	push 0x55
	jmp Block5

 Block16:
	push 0x56
	jmp Block5

 Block17:
	push 0x57
	jmp Block5

 Block18:
	push 0x58
	jmp Block5

 Block19:
	push 0x5D
	jmp Block5

 Block20:
	mov esi,dword ptr [esp+0xC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
