#include "regen.hpp"
// Config.ipp
#include "Config.hpp"

// CConfig::SetUIWndPos
__SUB_CLASS_THIS(000B20D0, __thiscall, 12336,  CConfig, void, int32_t, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+eax*4+0x10C],edx
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [ecx+eax*4+0x1B8],edx
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [ecx+eax*4+0x3BC],edx
	ret 0x10
}
}
// CConfig::LoadQuestAlarm
_SUB_EXCEPTION_HANDLER(B48F0)
__SUB_CLASS_THIS0(000B48F0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B48F0
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
	xor esi,esi
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0x9DE
	push eax
	mov dword ptr [esp+0x30],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push esi
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x3C],1
	call CConfig::GetOpt_Int
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x1C],edi
	mov byte ptr [esp+0x28],bl
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	cmp edi,esi
	jl Block9

 Block3:
	lea ecx,[ebp+0xFC]
	call ZArray<long>::RemoveAll
	test edi,edi
	jle Block7

 Block4:
	lea ecx,[esp+0x18]
	push 0x9DD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ebx,dword ptr [esp+0x14]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push ebx
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_Int
	push 0xFFFFFFFF
	lea ecx,[ebp+0xFC]
	mov edi,eax
	call ZArray<long>::InsertBefore
	inc esi
	cmp esi,dword ptr [esp+0x1C]
	mov dword ptr [eax],edi
	jl Block4

 Block7:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block9

 Block8:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CConfig::SetDialogVisible
__SUB_CLASS_THIS(000B2160, __thiscall, 12367,  CConfig, void, unsigned long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jae Block2

 Block1:
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+eax*4+0x62C],edx

 Block2:
	ret 8
}
}
// CConfig::SaveCharacter
_SUB_EXCEPTION_HANDLER(B5B00)
__SUB_CLASS_THIS0(000B5B00, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B5B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x134
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x130],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x148]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x108],ebx
	je Block72

 Block1:
	lea eax,[esp+0x1C]
	push 0x9DF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x15C],ebx
	call CConfig::GetOpt_BOOL
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x1C]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x150],edi
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[esp+0x1C]
	push 0x9E0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x15C],1
	call CConfig::GetOpt_BOOL
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x150],edi
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,esi
	call CConfig::GetShowPartyHP
	xor edi,edi
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [esi+0x108]
	push edi
	push edi
	push edi
	push edi
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x54]
	push eax
	push edi
	mov ebp,0x104
	push ecx
	mov dword ptr [esp+0x170],2
	mov dword ptr [esp+0x40],ebp
	call RegEnumValueA
	test eax,eax
	jne Block13

 Block6:
	nop

 Block7:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x40]
	mov byte ptr [esp+edx+0x40],0
	mov dword ptr [esp+0x18],0
	lea edx,[eax+1]

 Block8:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block8

 Block9:
	sub eax,edx
	mov edi,eax
	push edi
	lea eax,[esp+0x44]
	push eax
	push 0
	push edi
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x18]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x158],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x150],2
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esi+0x108]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x54]
	push eax
	inc ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x40],ebp
	call RegEnumValueA
	test eax,eax
	je Block7

 Block12:
	mov edi,dword ptr [esp+0x1C]

 Block13:
	xor ebx,ebx

 Block14:
	test edi,edi
	je Block17

 Block15:
	cmp ebx,dword ptr [edi-4]
	jae Block17

 Block16:
	mov edx,dword ptr [edi+ebx*4]
	mov eax,dword ptr [esi+0x108]
	push edx
	push eax
	call RegDeleteValueA
	inc ebx
	jmp Block14

 Block17:
	mov dword ptr [esp+0x18],0
	mov bl,4
	mov byte ptr [esp+0x150],bl
	xor edi,edi

 Block18:
	lea ecx,[esp+0x3C]
	push 0x9C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x15C],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esi+edi*4+0x10C]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	lea edx,[esp+0x34]
	push 0x9C4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x15C],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esi+edi*4+0x1B8]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	lea eax,[esp+0x2C]
	push 0x19A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x15C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edx,dword ptr [esi+edi*4+0x264]
	mov eax,dword ptr [esp+0x18]
	push edx
	push eax
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	lea ecx,[esp+0x38]
	push 0x19A7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x15C],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0xC
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esi+edi*4+0x310]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	lea edx,[esp+0x14]
	push 0x9C5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x15C],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [esi+edi*4+0x3BC]
	mov ebp,dword ptr [esp+0x18]
	push ecx
	push ebp
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	cmp edi,6
	jne Block30

 Block29:
	push edi
	lea edx,[esp+0x1C]
	push offset _S_UIBIND
	push edx
	call ZXString<char>::Format
	mov ebp,dword ptr [esp+0x24]
	add esp,0xC
	lea eax,[esi+0x468]
	push eax
	push ebp
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Binary

 Block30:
	inc edi
	cmp edi,0x2B
	jl Block18

 Block31:
	lea ecx,[esp+0x14]
	push 0x9CB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x20]
	mov eax,dword ptr [eax]
	push edx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xA
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea eax,[esp+0x14]
	push 0x9CC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xB
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea edx,[esp+0x14]
	push 0x9CD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x28]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xC
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea edx,[esp+0x14]
	push 0x9CE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xD
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	lea edx,[esp+0x14]
	push 0x9CF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xE
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov edx,dword ptr [esi+0x34]
	push edx
	push offset _S_GOPARTYSEARCH
	push 2
	mov ecx,esi
	call CConfig::SetOpt_BOOL
	lea eax,[esp+0x14]
	push 0x9D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x38]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0xF
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	lea edx,[esp+0x14]
	push 0x9D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x10
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea edx,[esp+0x14]
	push 0x9D1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x40]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x11
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	lea edx,[esp+0x14]
	push 0x9D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x44]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x12
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov edx,dword ptr [esi+0x48]
	push edx
	push offset _S_GOALLIANCEINVITE
	push 2
	mov ecx,esi
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esi+0x4C]
	push eax
	push offset _S_GOALLIANCETALK
	push 2
	mov ecx,esi
	call CConfig::SetOpt_BOOL
	lea ecx,[esp+0x14]
	push 0x9D6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x13
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	lea eax,[esp+0x14]
	push 0x9D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x14
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	lea edx,[esp+0x14]
	push 0xB7E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x60]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x15
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	lea edx,[esp+0x14]
	push 0xB79
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x5C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x16
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	lea edx,[esp+0x14]
	push 0x13FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x64]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x17
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea edx,[esp+0x14]
	push 0x175F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x68]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x18
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov ecx,esi
	call CConfig::SaveBlockFriend
	mov ecx,esi
	call CConfig::SaveBlackList
	mov ecx,esi
	call CConfig::SaveFriendGroup
	mov ecx,esi
	call CConfig::SaveQuestAlarm
	lea edx,[esp+0x14]
	push 0x9DF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x19
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	lea edx,[esp+0x28]
	push 0x9E0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x1A
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov edx,dword ptr [esp+0x24]
	push edx
	mov ecx,esi
	call CConfig::SetShowPartyHP
	cmp dword ptr [esi+0x62C],0
	jne Block67

 Block66:
	push 0
	lea eax,[esp+0x1C]
	push offset _S_DIALOGVISIBLED
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [esi+0x62C]
	mov ebp,dword ptr [esp+0x24]
	add esp,0xC
	push ecx
	push ebp
	push 2
	mov ecx,esi
	call CConfig::SetOpt_BOOL

 Block67:
	lea edx,[esp+0x24]
	push 0xB7A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x5F
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x15C],0x1B
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov dword ptr [esi+0x630],0x5F
	mov byte ptr [esp+0x150],2
	test ebp,ebp
	je Block71

 Block70:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block71:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll

 Block72:
	mov ecx,dword ptr [esp+0x148]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x130]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x140
	ret
}
}
// CConfig::LoadFriendGroup
_SUB_EXCEPTION_HANDLER(B69E0)
__SUB_CLASS_THIS0(000B69E0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B69E0
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
	mov esi,ecx
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x1C]
	push 0x9E2
	push eax
	mov dword ptr [esp+0x34],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x40],1
	call CConfig::GetOpt_Int
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	xor ebp,ebp
	cmp dword ptr [esp+0x18],ebx
	jle Block9

 Block3:
	nop

 Block4:
	lea ecx,[esp+0x1C]
	push 0x9E3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edi,dword ptr [esp+0x14]
	push offset _S_
	push edi
	push 2
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CConfig::GetOpt_String
	push ebx
	push eax
	lea ecx,[esi+0xDC]
	mov byte ptr [esp+0x34],3
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::Insert
	mov byte ptr [eax+0xC],1
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	inc ebp
	cmp ebp,dword ptr [esp+0x18]
	jl Block4

 Block9:
	lea ecx,[esp+0x20]
	push 0x9E1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x38],4
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0xF4],eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebx
	je Block13

 Block12:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block13:
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
// CConfig::SaveBlockFriend
_SUB_EXCEPTION_HANDLER(B45E0)
__SUB_CLASS_THIS0(000B45E0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B45E0
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
	xor ebp,ebp
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x18]
	push 0x9D7
	push eax
	mov dword ptr [esp+0x2C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x24],1
	cmp ecx,ebx
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [ecx-4]

 Block3:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor edi,edi
	jmp Block7

 Block7:
	mov eax,dword ptr [esi+0xD4]
	cmp eax,ebx
	je Block12

 Block8:
	cmp edi,dword ptr [eax-4]
	jae Block12

 Block9:
	lea ecx,[esp+0x18]
	push 0x9D8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esi+0xD4]
	mov ecx,dword ptr [eax+edi*4]
	mov ebp,dword ptr [esp+0x14]
	push ecx
	push ebp
	push 2
	mov ecx,esi
	call CConfig::SetOpt_Int
	inc edi
	jmp Block7

 Block12:
	lea edx,[esp+0x18]
	push 0x9D9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x24],3
	cmp ecx,ebx
	jne Block14

 Block13:
	xor ecx,ecx
	jmp Block15

 Block14:
	mov ecx,dword ptr [ecx-4]

 Block15:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	xor edi,edi

 Block18:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,ebx
	je Block23

 Block19:
	cmp edi,dword ptr [eax-4]
	jae Block23

 Block20:
	lea eax,[esp+0x18]
	push 0x9DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x30],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov edx,dword ptr [esi+0xD8]
	mov eax,dword ptr [edx+edi*4]
	mov ebp,dword ptr [esp+0x14]
	push eax
	push ebp
	push 2
	mov ecx,esi
	call CConfig::SetOpt_Int
	inc edi
	jmp Block18

 Block23:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp ebp,ebx
	je Block25

 Block24:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block25:
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
// CConfig::GetShowPartyHP
_SUB_EXCEPTION_HANDLER(B3110)
__SUB_CLASS_THIS0(000B3110, __thiscall, 12354,  CConfig, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3110
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
	lea eax,[esp+8]
	push 0x1163
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::GetOpt_BOOL
	mov esi,eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CConfig::DeleteQuestAlarm
__SUB_CLASS_THIS(000B4F30, __thiscall, 12363,  CConfig, void, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xFC]
	lea ecx,[esi+0xFC]
	lea eax,[eax+edx*4]
	push eax
	call ZArray<long>::RemoveAt
	mov ecx,esi
	call CConfig::SaveQuestAlarm
	pop esi
	ret 4
}
}
// CConfig::GetQueatAlarmOpened
_SUB_EXCEPTION_HANDLER(B3650)
__SUB_CLASS_THIS0(000B3650, __thiscall, 12354,  CConfig, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3650
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
	lea eax,[esp+8]
	push 0x9E0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::GetOpt_BOOL
	mov esi,eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CConfig::ApplyJoyPad
__SUB_CLASS_THIS(000B2080, __thiscall, 12352,  CConfig, void, CONFIG_JOYPAD*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	je Block2

 Block1:
	push edi
	lea edi,[ecx+0xA4]
	mov ecx,0xC
	rep movsd
	pop edi

 Block2:
	pop esi
	ret 4
}
}
// CConfig::SetQuestAlarmOpened
_SUB_EXCEPTION_HANDLER(B36E0)
__SUB_CLASS_THIS(000B36E0, __thiscall, 12355,  CConfig, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B36E0
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
	lea eax,[esp+8]
	push 0x9E0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+8]
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
	ret 4
}
}
// CConfig::SetInventoryExpanded
_SUB_EXCEPTION_HANDLER(B3800)
__SUB_CLASS_THIS(000B3800, __thiscall, 12355,  CConfig, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3800
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
	lea eax,[esp+8]
	push 0x11A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+8]
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
	ret 4
}
}
// CConfig::SetUIWndPosLarge
__SUB_CLASS_THIS(000B21B0, __thiscall, 12340,  CConfig, void, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+eax*4+0x264],edx
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [ecx+eax*4+0x310],edx
	ret 0xC
}
}
// CConfig::SaveSessionInfo_ChannelID
_SUB_EXCEPTION_HANDLER(B34A0)
__SUB_CLASS_THIS(000B34A0, __thiscall, 12363,  CConfig, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B34A0
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
	lea eax,[esp+8]
	push 0x9B4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+8]
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
	ret 4
}
}
// CConfig::GetSessionCharacterName
_SUB_EXCEPTION_HANDLER(55C640)
__SUB_CLASS_THIS0(0055C640, __thiscall, 12365,  CConfig, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55C640
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
	lea eax,[esp+0x10]
	push 0x9B2
	push eax
	mov dword ptr [esp+0x14],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x24]
	push offset _S_
	push eax
	push 0
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x2C],1
	call CConfig::GetOpt_String
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,edi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CConfig::SetOpt_String
__SUB_CLASS_THIS(000B2560, __thiscall, 12374,  CConfig, void, int32_t, const char*, const char*) {
__asm {

 Block0:
	sub esp,0x104
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x100],eax
	mov eax,dword ptr [esp+0x108]
	push esi
	push edi
	mov edi,dword ptr [esp+0x114]
	push eax
	call CConfig::GetOptKey
	mov edx,dword ptr [esp+0x118]
	test edx,edx
	jne Block2

 Block1:
	mov edx,offset _S_

 Block2:
	lea esi,[esp+8]
	mov edi,edi

 Block3:
	mov cl,byte ptr [edx]
	mov byte ptr [esi],cl
	inc edx
	inc esi
	test cl,cl
	jne Block3

 Block4:
	lea ecx,[esp+8]
	lea esi,[ecx+1]

 Block5:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block5

 Block6:
	sub ecx,esi
	inc ecx
	push ecx
	lea ecx,[esp+0xC]
	push ecx
	push 1
	push 0
	push edi
	push eax
	call RegSetValueExA
	mov ecx,dword ptr [esp+0x108]
	pop edi
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret 0xC
}
}
// CConfig::GetOpt_Int
__SUB_CLASS_THIS(000B25F0, __thiscall, 12376,  CConfig, int32_t, int32_t, const char*, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push eax
	call CConfig::GetOptKey
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+4]
	push edx
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x14]
	push ecx
	push 0
	push edx
	push eax
	mov dword ptr [esp+0x20],4
	call RegQueryValueExA
	test eax,eax
	jne Block5

 Block1:
	cmp dword ptr [esp+0xC],4
	jne Block5

 Block2:
	cmp dword ptr [esp+8],4
	jne Block5

 Block3:
	mov eax,dword ptr [esp]
	cmp eax,dword ptr [esp+0x14]
	jl Block5

 Block4:
	cmp eax,dword ptr [esp+0x18]
	jle Block6

 Block5:
	mov eax,dword ptr [esp+0x10]

 Block6:
	pop ecx
	ret 0x14
}
}
// CConfig::SetOpt_Int
__SUB_CLASS_THIS(000B2650, __thiscall, 12371,  CConfig, void, int32_t, const char*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	push 4
	lea edx,[esp+0x10]
	push edx
	mov edx,dword ptr [esp+0xC]
	push 4
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x14]
	push 0
	push eax
	push edx
	call CConfig::GetOptKey
	push eax
	call RegSetValueExA
	ret 0xC
}
}
// CConfig::SetShowPartyHP
_SUB_EXCEPTION_HANDLER(B31A0)
__SUB_CLASS_THIS(000B31A0, __thiscall, 12355,  CConfig, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B31A0
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
	lea eax,[esp+8]
	push 0x1163
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+8]
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
	ret 4
}
}
// CConfig::SetOpt_Binary
__SUB_CLASS_THIS(000B2830, __thiscall, 12378,  CConfig, void, int32_t, const char*, ZArray<unsigned char>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [eax]
	test edx,edx
	je Block4

 Block1:
	push esi
	mov esi,dword ptr [edx-4]
	test esi,esi
	je Block3

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CConfig::GetOptKey
	mov ecx,dword ptr [esp+0xC]
	push esi
	push edx
	push 3
	push 0
	push ecx
	push eax
	call RegSetValueExA

 Block3:
	pop esi

 Block4:
	ret 0xC
}
}
// CConfig::SetShowOnlineOnly
__SUB_CLASS_THIS(000B2050, __thiscall, 12355,  CConfig, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xF4],eax
	ret 4
}
}
// CConfig::SaveSessionInfo
_SUB_EXCEPTION_HANDLER(B3350)
__SUB_CLASS_THIS0(000B3350, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3350
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
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test edi,edi
	je Block11

 Block1:
	lea eax,[esp+0xC]
	push 0x9B2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x20CC]
	mov dword ptr [esp+0x1C],0
	test ecx,ecx
	je Block3

 Block2:
	add ecx,4
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	call CConfig::SetOpt_String
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0xC]
	push 0x9B3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x205C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x28],1
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x10]
	push 0x9B4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x2060]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x28],2
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,edi
	call CWvsContext::GetCurFieldID
	push eax
	push offset _S_SIFIELDID
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int

 Block11:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CConfig::SetUIWndPos
__SUB_CLASS_THIS(000B2FE0, __thiscall, 12334,  CConfig, void, int32_t, int32_t, int32_t, int32_t, ZArray<unsigned char>&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],6
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	mov eax,dword ptr [esp+0xC]
	push edx
	push eax
	push 6
	call CConfig::SetUIWndPos_0
	mov edx,dword ptr [esp+0x14]
	push edx
	add ecx,0x468
	call ZArray<unsigned char>::operator=

 Block2:
	ret 0x14
}
}
// CConfig::SaveSessionInfo_FieldID
__SUB_CLASS_THIS(000B2680, __thiscall, 12363,  CConfig, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	push offset _S_SIFIELDID
	push 0
	call CConfig::SetOpt_Int
	ret 4
}
}
// CConfig::GetQuestGuideOption
_SUB_EXCEPTION_HANDLER(B3890)
__SUB_CLASS_THIS(000B3890, __thiscall, 12383,  CConfig, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3890
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
	mov ecx,dword ptr [esp+0x20]
	sub ecx,0
	mov eax,0x3E7
	je Block5

 Block1:
	sub ecx,1
	je Block4

 Block2:
	sub ecx,1
	jne Block9

 Block3:
	lea eax,[esp+0x20]
	push 0x1A0B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0x3E7
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x2C],2
	call CConfig::GetOpt_Int
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	jmp Block6

 Block4:
	lea ecx,[esp+8]
	push 0x1A0A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0x3E7
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x2C],1
	call CConfig::GetOpt_Int
	mov esi,eax
	mov eax,dword ptr [esp+8]
	jmp Block6

 Block5:
	lea edx,[esp+0xC]
	push 0x1A09
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0x3E7
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x2C],0
	call CConfig::GetOpt_Int
	mov esi,eax
	mov eax,dword ptr [esp+0xC]

 Block6:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,esi

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CConfig::ResetFriendGroupFolded
__SUB_CLASS_THIS0(000B2CB0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	add ecx,0xDC
	jmp  ZMap<ZXString<char>, unsigned char, ZXString<char>>::RemoveAll
}
}
// CConfig::LoadBlackList
_SUB_EXCEPTION_HANDLER(B6540)
__SUB_CLASS_THIS0(000B6540, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B6540
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
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x20]
	push 0x9DB
	mov ebx,1
	push eax
	mov byte ptr [esp+0x3C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push ebp
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x48],2
	call CConfig::GetOpt_Int
	mov edi,eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],edi
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test edi,edi
	jge Block5

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block23

 Block4:
	add eax,0xFFFFFFF4
	push eax
	jmp Block22

 Block5:
	cmp edi,0x1A
	jle Block7

 Block6:
	mov dword ptr [esp+0x18],0x1A

 Block7:
	lea ecx,[esi+0xF8]
	call ZArray<ZXString<char>>::RemoveAll
	xor edi,edi
	cmp dword ptr [esp+0x18],edi
	jle Block18

 Block8:
	lea ecx,[esp+0x20]
	push 0x9DC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ebp,dword ptr [esp+0x1C]
	push 0
	push ebp
	push 2
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CConfig::GetOpt_String
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block17

 Block13:
	cmp byte ptr [eax],0
	je Block17

 Block14:
	lea ecx,[esp+0x14]
	push ebx
	push ecx
	call is_valid_character_name
	add esp,8
	test eax,eax
	je Block17

 Block15:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CConfig::IsInBlackList
	test eax,eax
	jne Block17

 Block16:
	lea eax,[esp+0x14]
	push eax
	push 0xFFFFFFFF
	lea ecx,[esi+0xF8]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block17:
	add edi,ebx
	cmp edi,dword ptr [esp+0x18]
	jl Block8

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test ebp,ebp
	je Block23

 Block21:
	add ebp,0xFFFFFFF4
	push ebp

 Block22:
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CConfig::LoadGlobal
_SUB_EXCEPTION_HANDLER(B51B0)
__SUB_CLASS_THIS0(000B51B0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B51B0
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
	mov esi,ecx
	cmp dword ptr [esi+0x100],0
	je Block47

 Block1:
	lea eax,[esp+0x14]
	push 0x9B5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],0
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x14]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[esp+0x18]
	push 0x9B6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push offset _S_
	push eax
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x38],1
	call CConfig::GetOpt_String
	push eax
	lea ecx,[esi+8]
	mov byte ptr [esp+0x2C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	lea eax,[esp+0x14]
	push 0x9B7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push offset _S_
	push eax
	push 0
	lea ecx,[esp+0x24]
	push ecx
	mov ebx,3
	mov ecx,esi
	mov dword ptr [esp+0x38],ebx
	call CConfig::GetOpt_String
	push eax
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	lea edx,[esp+0x18]
	push 0x9B8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],5
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea eax,[esp+0x18]
	push 0x9B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],6
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea ecx,[esp+0x18]
	push 0x9BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push 0
	push ebx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],7
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x6C],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x18]
	push 0x9BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x13
	push 0
	push 0xF
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],8
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x70],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea eax,[esp+0x18]
	push 0x9BC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],9
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0x74],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x18]
	push 0x9BD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x13
	push 0
	push 0xF
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0xA
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x78],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea edx,[esp+0x18]
	push 0x9BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],0xB
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0x7C],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea eax,[esp+0x18]
	push 0x9BF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 2
	push 0
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0xC
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x80],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x18]
	push 0x9C0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x13
	push 0
	push 0xA
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0xD
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x84],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea edx,[esp+0x18]
	push 0xB97
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x13
	push 0
	push 0xA
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0xE
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x88],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea eax,[esp+0x18]
	push 0xB98
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x13
	push 0
	push 0xA
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0xF
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x8C],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esp+0x18]
	push 0xB23
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],0x10
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0x90],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea edx,[esp+0x18]
	push 0x9C1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push 0
	push ebx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0x11
	call CConfig::GetOpt_Int
	mov dword ptr [esi+0x94],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea eax,[esp+0x18]
	push 0x1946
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x3C],0x12
	call CConfig::GetOpt_Int
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov ecx,edi
	shr ecx,1
	lea edx,[esp+0x18]
	and ecx,1
	push 0x19E4
	and edi,1
	push edx
	mov dword ptr [esi+0x98],ecx
	mov dword ptr [esi+0x9C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x34],0x13
	call CConfig::GetOpt_BOOL
	mov dword ptr [esi+0xA0],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],0x14
	xor edi,edi
	lea ebp,[esi+0xA4]

 Block42:
	lea eax,[esp+0x1C]
	push 0x180D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x34],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x28],0x14
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov ebx,dword ptr [esp+0x14]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push ebx
	push 0
	mov ecx,esi
	call CConfig::GetOpt_Int
	mov dword ptr [ebp],eax
	inc edi
	add ebp,4
	cmp edi,0xC
	jl Block42

 Block45:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block47

 Block46:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CConfig::GetOptKey
__SUB_CLASS_THIS(000B2100, __thiscall, 12379,  CConfig, HKEY__*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	xor eax,eax
	ret 4

 Block4:
	mov eax,dword ptr [ecx+0x108]
	ret 4

 Block5:
	mov eax,dword ptr [ecx+0x104]
	ret 4

 Block6:
	mov eax,dword ptr [ecx+0x100]
	ret 4
}
}
// CConfig::~CConfig
_SUB_EXCEPTION_HANDLER(B6880)
__SUB_CLASS_THIS0(000B6880, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B6880
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	int 3// TODO: 	mov dword ptr [esi],offset CConfig::`vftable'
	mov dword ptr [esp+0x18],8
	call CConfig::SaveGlobal
	mov ecx,esi
	call CConfig::SaveCharacter
	mov eax,dword ptr [esi+0x100]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	push eax
	call RegCloseKey
	mov dword ptr [esi+0x100],ebx

 Block2:
	mov eax,dword ptr [esi+0x104]
	cmp eax,ebx
	je Block4

 Block3:
	push eax
	call RegCloseKey
	mov dword ptr [esi+0x104],ebx

 Block4:
	mov eax,dword ptr [esi+0x108]
	cmp eax,ebx
	je Block6

 Block5:
	push eax
	call RegCloseKey
	mov dword ptr [esi+0x108],ebx

 Block6:
	lea ecx,[esi+0x468]
	mov byte ptr [esp+0x18],7
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xFC]
	mov byte ptr [esp+0x18],6
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x18],5
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0xDC]
	mov byte ptr [esp+0x18],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, unsigned char, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::RemoveAll
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x18],3
	call ZArray<unsigned long>::RemoveAll
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x18],2
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x18],1
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [esi+8]
	mov byte ptr [esp+0x18],bl
	cmp esi,ebx
	je Block10

 Block9:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [TSingleton<CConfig>::ms_pInstance],ebx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CConfig::GetDialogVisible
__SUB_CLASS_THIS(000B2140, __thiscall, 12366,  CConfig, int32_t, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jb Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	mov eax,dword ptr [ecx+eax*4+0x62C]
	ret 4
}
}
// CConfig::SetQuestGuideOption
_SUB_EXCEPTION_HANDLER(B39D0)
__SUB_CLASS_THIS(000B39D0, __thiscall, 12362,  CConfig, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B39D0
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
	mov eax,dword ptr [esp+0x20]
	sub eax,0
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block8

 Block3:
	lea eax,[esp+0x20]
	push 0x1A0B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],2
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x20]
	jmp Block6

 Block4:
	lea edx,[esp+8]
	push 0x1A0A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+8]
	jmp Block6

 Block5:
	lea edx,[esp+0xC]
	push 0x1A09
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0xC]

 Block6:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 8
}
}
// CConfig::SetFriendGroupFolded
_SUB_EXCEPTION_HANDLER(B6B80)
__SUB_CLASS_THIS(000B6B80, __thiscall, 12361,  CConfig, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B6B80
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	add ecx,0xDC
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0xC],0
	je Block2

 Block1:
	push 0
	lea eax,[esp+0x18]
	push eax
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::Insert
	mov byte ptr [eax+0xC],1
	jmp Block3

 Block2:
	lea edx,[esp+0x14]
	push edx
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::RemoveKey

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CConfig::GetLastConnectedVersion
__SUB_CLASS_THIS0(000B26A0, __thiscall, 12341,  CConfig, long) {
__asm {

 Block0:
	push 0x7FFFFFFF
	push 0x80000000
	push 0xFFFFFFFF
	push offset _S_SIFIELDID
	push 0
	call CConfig::GetOpt_Int
	ret
}
}
// CConfig::GetOpt_String
_SUB_EXCEPTION_HANDLER(B4F80)
__SUB_CLASS_THIS(000B4F80, __thiscall, 12373,  CConfig, ZXString<char>*, ZXString<char>*, int32_t, const char*, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4F80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x118
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x114],eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x128]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x144]
	mov edx,dword ptr [esp+0x13C]
	mov esi,dword ptr [esp+0x138]
	mov edi,dword ptr [esp+0x140]
	push edx
	mov dword ptr [esp+0x134],0
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],0
	call CConfig::GetOptKey
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov ebp,eax
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push 0
	push edi
	push ebp
	mov dword ptr [esp+0x148],0
	mov dword ptr [esp+0x34],1
	mov dword ptr [esp+0x28],0x100
	call RegQueryValueExA
	test eax,eax
	jne Block4

 Block1:
	cmp dword ptr [esp+0x14],1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x10]
	cmp byte ptr [esp+eax+0x23],0
	jne Block4

 Block3:
	lea ecx,[esp+0x24]
	push ecx
	jmp Block5

 Block4:
	mov edx,dword ptr [esp+0x18]
	push edx

 Block5:
	mov ecx,esi
	call ZXString<char>::AssignCStr
	mov eax,esi
	mov ecx,dword ptr [esp+0x128]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	mov ecx,dword ptr [esp+0x114]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x124
	ret 0x10
}
}
// CConfig::LoadBlockFriend
_SUB_EXCEPTION_HANDLER(B43C0)
__SUB_CLASS_THIS0(000B43C0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B43C0
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
	mov edi,ecx
	xor ebp,ebp
	xor esi,esi
	mov dword ptr [esp+0x18],ebp
	lea eax,[esp+0x20]
	push 0x9D7
	push eax
	mov dword ptr [esp+0x34],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push esi
	push eax
	push 2
	mov ecx,edi
	mov byte ptr [esp+0x40],1
	call CConfig::GetOpt_Int
	mov ebx,eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	mov byte ptr [esp+0x2C],0
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x17]
	push edx
	push 1
	lea ecx,[edi+0xD4]
	push ebx
	call ZArray<unsigned long>::_Realloc
	test ebx,ebx
	jle Block6

 Block3:
	lea eax,[esp+0x20]
	push 0x9D8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ebp,dword ptr [esp+0x18]
	mov edx,dword ptr [edi+0xD4]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push ebp
	push 2
	mov ecx,edi
	lea ebx,[edx+esi*4]
	call CConfig::GetOpt_Int
	inc esi
	cmp esi,dword ptr [esp+0x1C]
	mov dword ptr [ebx],eax
	jl Block3

 Block6:
	lea eax,[esp+0x20]
	push 0x9D9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push eax
	push 2
	mov ecx,edi
	mov byte ptr [esp+0x40],3
	call CConfig::GetOpt_Int
	mov ebx,eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x17]
	push edx
	push 1
	lea ecx,[edi+0xD8]
	push ebx
	call ZArray<unsigned long>::_Realloc
	xor esi,esi
	test ebx,ebx
	jle Block12

 Block9:
	lea eax,[esp+0x20]
	push 0x9DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ebp,dword ptr [esp+0x18]
	mov edx,dword ptr [edi+0xD8]
	push 0x7FFFFFFF
	push 0x80000000
	push 0
	push ebp
	push 2
	mov ecx,edi
	lea ebx,[edx+esi*4]
	call CConfig::GetOpt_Int
	inc esi
	cmp esi,dword ptr [esp+0x1C]
	mov dword ptr [ebx],eax
	jl Block9

 Block12:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block14

 Block13:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block14:
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
// CConfig::GetInventoryExpanded
_SUB_EXCEPTION_HANDLER(B3770)
__SUB_CLASS_THIS0(000B3770, __thiscall, 12354,  CConfig, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3770
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
	lea eax,[esp+8]
	push 0x11A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::GetOpt_BOOL
	mov esi,eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CConfig::AddBlackList
_SUB_EXCEPTION_HANDLER(B4DA0)
__SUB_CLASS_THIS(000B4DA0, __thiscall, 12353,  CConfig, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4DA0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xF8]
	lea ecx,[esi+0xF8]
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0x1A
	jge Block3

 Block2:
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov ecx,esi
	call CConfig::SaveBlackList

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CConfig::DeleteBlackList
_SUB_EXCEPTION_HANDLER(B4E30)
__SUB_CLASS_THIS(000B4E30, __thiscall, 12353,  CConfig, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4E30
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
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [ecx+0xF8]
	lea ebp,[ecx+0xF8]
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	cmp eax,esi
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]

 Block3:
	cmp edi,esi
	jle Block10

 Block4:
	mov ebx,eax
	lea esp,[esp]

 Block5:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block8

 Block6:
	inc esi
	add ebx,4
	cmp esi,edi
	jl Block5

 Block7:
	jmp Block10

 Block8:
	cmp esi,edi
	jge Block10

 Block9:
	mov ecx,dword ptr [ebp]
	lea edx,[ecx+esi*4]
	push edx
	mov ecx,ebp
	call ZArray<ZXString<char>>::RemoveAt

 Block10:
	mov ecx,dword ptr [esp+0x14]
	call CConfig::SaveBlackList
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CConfig::ApplySysOpt
__SUB_CLASS_THIS(000B2300, __thiscall, 12348,  CConfig, void, CONFIG_SYSOPT*, int32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov ebx,ecx
	test esi,esi
	je Block2

 Block1:
	lea edi,[ebx+0x6C]
	mov ecx,0xE
	rep movsd

 Block2:
	mov eax,dword ptr [ebx+0x94]
	cmp eax,1
	je Block5

 Block3:
	cmp eax,3
	je Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,1

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x4098],eax
	mov eax,dword ptr [ebx+0x94]
	cmp eax,2
	je Block9

 Block7:
	cmp eax,3
	je Block9

 Block8:
	xor eax,eax
	jmp Block10

 Block9:
	mov eax,1

 Block10:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [edx+0x409C],eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block13

 Block12:
	xor esi,esi

 Block13:
	cmp dword ptr [esp+0x14],0
	je Block22

 Block14:
	cmp dword ptr [ebx+0x98],0
	push 1
	setne al
	movzx ecx,al
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetScreenResolution
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [eax]
	xor ecx,ecx
	cmp dword ptr [ebx+0x9C],ecx
	mov edi,eax
	sete cl
	push ecx
	push eax
	mov eax,dword ptr [edx+0x4C]
	call eax
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	test esi,esi
	je Block20

 Block19:
	mov ecx,esi
	call CMapLoadable::SetFieldMagLevel

 Block20:
	mov eax,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [ebx+0xA0]
	mov ecx,eax
	mov dword ptr [eax+0xB08],edx
	call CUIMiniMap::ToggleMap

 Block22:
	test esi,esi
	je Block24

 Block23:
	mov eax,dword ptr [ebx+0x90]
	mov dword ptr [esi+0x12C],eax

 Block24:
	cmp dword ptr [ebx+0x74],0
	je Block26

 Block25:
	xor esi,esi
	jmp Block27

 Block26:
	mov ecx,dword ptr [ebx+0x70]
	inc ecx
	imul ecx,0x64
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov esi,edx
	shr esi,0x1F
	add esi,edx

 Block27:
	cmp dword ptr [ebx+0x7C],0
	je Block29

 Block28:
	xor edi,edi
	jmp Block30

 Block29:
	mov ecx,dword ptr [ebx+0x78]
	inc ecx
	imul ecx,0x64
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov edi,edx
	shr edi,0x1F
	add edi,edx

 Block30:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	test ecx,ecx
	je Block37

 Block31:
	mov eax,dword ptr [TSingleton<CRadioManager>::ms_pInstance]
	test eax,eax
	je Block35

 Block32:
	cmp dword ptr [eax+8],0
	je Block35

 Block33:
	push esi
	mov ecx,eax
	call CRadioManager::SetVolume
	mov ecx,dword ptr [TSingleton<CRadioManager>::ms_pInstance]
	cmp dword ptr [ecx+0xC],0
	je Block36

 Block34:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]

 Block35:
	push 0
	push esi
	call CSoundMan::SetBGMVolume

 Block36:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push edi
	call CSoundMan::SetSEVolume

 Block37:
	mov eax,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [ebx+0x84]
	mov dword ptr [eax+0x970],edx

 Block39:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CConfig::GetQuestAlarmAutoRegister
_SUB_EXCEPTION_HANDLER(B3530)
__SUB_CLASS_THIS0(000B3530, __thiscall, 12354,  CConfig, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3530
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
	lea eax,[esp+8]
	push 0x9DF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::GetOpt_BOOL
	mov esi,eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CConfig::SaveQuestAlarm
_SUB_EXCEPTION_HANDLER(B4A30)
__SUB_CLASS_THIS0(000B4A30, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4A30
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xFC]
	xor esi,esi
	cmp eax,esi
	jne Block2

 Block1:
	xor ebp,ebp
	jmp Block3

 Block2:
	mov ebp,dword ptr [eax-4]

 Block3:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp ebp,esi
	mov dword ptr [esp+0x24],esi
	jle Block8

 Block4:
	lea ebx,[ebx]

 Block5:
	lea eax,[esp+0x18]
	push 0x9DD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov edx,dword ptr [edi+0xFC]
	mov eax,dword ptr [edx+esi*4]
	mov ebx,dword ptr [esp+0x14]
	push eax
	push ebx
	push 2
	mov ecx,edi
	call CConfig::SetOpt_Int
	inc esi
	cmp esi,ebp
	jl Block5

 Block8:
	lea ecx,[esp+0x18]
	push 0x9DE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	push 2
	mov ecx,edi
	mov byte ptr [esp+0x30],2
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test ebx,ebx
	je Block12

 Block11:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block12:
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
// CConfig::SaveBlackList
_SUB_EXCEPTION_HANDLER(B47D0)
__SUB_CLASS_THIS0(000B47D0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B47D0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xF8]
	xor esi,esi
	cmp eax,esi
	jne Block2

 Block1:
	xor ebp,ebp
	jmp Block3

 Block2:
	mov ebp,dword ptr [eax-4]

 Block3:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp ebp,esi
	mov dword ptr [esp+0x24],esi
	jle Block8

 Block4:
	lea ebx,[ebx]

 Block5:
	lea eax,[esp+0x18]
	push 0x9DC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov edx,dword ptr [edi+0xF8]
	mov eax,dword ptr [edx+esi*4]
	mov ebx,dword ptr [esp+0x14]
	push eax
	push ebx
	push 2
	mov ecx,edi
	call CConfig::SetOpt_String
	inc esi
	cmp esi,ebp
	jl Block5

 Block8:
	lea eax,[esp+0x18]
	push 0x9DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	push 2
	mov ecx,edi
	mov byte ptr [esp+0x30],2
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test ebx,ebx
	je Block12

 Block11:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block12:
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
// CConfig::SaveFriendGroup
_SUB_EXCEPTION_HANDLER(B4B50)
__SUB_CLASS_THIS0(000B4B50, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4B50
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
	mov esi,ecx
	xor ebp,ebp
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x1C]
	push 0x9E2
	push eax
	mov dword ptr [esp+0x34],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x38],1
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0xDC]
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::GetHeadPosition
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block9

 Block3:
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0xDC]
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::GetNext
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	push 0x9E3
	push edx
	mov byte ptr [esp+0x34],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x2C],2
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ebp,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]
	push ebp
	push ecx
	push 2
	mov ecx,esi
	call CConfig::SetOpt_String
	inc edi
	mov byte ptr [esp+0x2C],bl
	cmp ebp,ebx
	je Block7

 Block6:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [esp+0x1C],ebx
	jne Block3

 Block8:
	mov ebp,dword ptr [esp+0x14]

 Block9:
	lea edx,[esp+0x20]
	push 0x9E1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xF4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov byte ptr [esp+0x38],4
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp ebp,ebx
	je Block13

 Block12:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block13:
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
// CConfig::ApplyGameOpt
__SUB_CLASS_THIS(000B2060, __thiscall, 12345,  CConfig, void, CONFIG_GAMEOPT*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	je Block2

 Block1:
	push edi
	lea edi,[ecx+0x20]
	mov ecx,0x13
	rep movsd
	pop edi

 Block2:
	pop esi
	ret 4
}
}
// CConfig::SetOpt_BOOL
__SUB_CLASS_THIS(000B2520, __thiscall, 12371,  CConfig, void, int32_t, const char*, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+0xC],eax
	push 4
	setne al
	lea edx,[esp+0x10]
	push edx
	mov edx,dword ptr [esp+0xC]
	push 4
	push 0
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x18]
	push eax
	push edx
	call CConfig::GetOptKey
	push eax
	call RegSetValueExA
	ret 0xC
}
}
// CConfig::LoadCharacter
_SUB_EXCEPTION_HANDLER(B6C00)
// 4B7830
static uint8_t _SUB_B6C00_LOOKUP_TABLE_0[39] = {
0, 13, 13, 13, 1, 2, 13, 13, 13, 3, 4, 13, 13, 5, 13, 6, 
13, 7, 8, 9, 9, 9, 9, 10, 9, 11, 8, 12, 8, 13, 13, 8, 
13, 13, 13, 13, 13, 13, 8, 
};
__SUB_CLASS_THIS(000B6C00, __thiscall, 12323,  CConfig, void, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B6C00
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
	mov ebp,ecx
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x1C],eax

 Block1:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	add eax,0xFFFFFFFC
	mov dword ptr [esp+0x20],ecx
	cmp eax,0x26
	ja Block16

 Block2:
	movzx eax,byte ptr [eax+_SUB_B6C00_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block7
cmp EAX, 3
je Block5
cmp EAX, 4
je Block8
cmp EAX, 5
je Block13
cmp EAX, 6
je Block6
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block14
cmp EAX, 12
je Block15
cmp EAX, 13
je Block16


 Block3:
	mov esi,8
	lea edi,[esi+2]
	mov dword ptr [esp+0x20],1
	jmp Block17

 Block4:
	mov esi,0x1F4
	mov ebx,0x32
	mov edi,0x2BC
	mov dword ptr [esp+0x14],0x4B
	mov dword ptr [esp+0x20],ecx
	jmp Block18

 Block5:
	mov esi,0x258
	mov ebx,0x23
	mov edi,0x320
	mov dword ptr [esp+0x14],0x32
	jmp Block18

 Block6:
	mov esi,0x2D0
	mov ebx,0x50
	mov edi,0x398
	mov dword ptr [esp+0x14],0x64
	jmp Block18

 Block7:
	mov esi,0xFA
	mov ebx,0x64
	lea edi,[esi+0x32]
	mov dword ptr [esp+0x14],0x7D
	jmp Block18

 Block8:
	mov esi,0x2DA
	mov ebx,0x190
	mov edi,0x3B6
	mov dword ptr [esp+0x14],0x226
	jmp Block18

 Block9:
	mov esi,0x1F4
	mov ebx,0x64
	mov edi,0x2BC
	mov dword ptr [esp+0x14],0x7D
	jmp Block18

 Block10:
	mov esi,0x64
	lea edi,[esi+0x19]
	jmp Block17

 Block11:
	mov esi,0xF4
	mov ebx,0x69
	lea edi,[esi+0x6A]
	mov dword ptr [esp+0x14],0x87
	jmp Block18

 Block12:
	mov esi,0x6F
	lea ebx,[esi-4]
	lea edi,[esi+0x70]
	mov dword ptr [esp+0x14],0xBF
	jmp Block18

 Block13:
	mov esi,0xB
	lea ebx,[esi+0xD]
	lea edi,[esi+4]
	mov dword ptr [esp+0x14],0x1E
	mov dword ptr [esp+0x20],ecx
	jmp Block18

 Block14:
	mov esi,0x301
	mov ebx,0x157
	mov edi,0x3E1
	mov dword ptr [esp+0x14],0x190
	jmp Block18

 Block15:
	mov esi,0xF4
	mov ebx,0x69
	lea edi,[esi+0x70]
	mov dword ptr [esp+0x14],0xBD
	jmp Block18

 Block16:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,4
	lea eax,[edx+edx*4]
	add eax,eax
	add eax,eax
	sub ecx,eax
	lea eax,[edx+ecx*2+2]
	lea esi,[eax+eax*2]
	add esi,esi
	mov edi,eax
	shl edi,4
	add esi,esi
	sub edi,eax
	mov dword ptr [esp+0x20],0

 Block17:
	mov ebx,esi
	mov dword ptr [esp+0x14],edi

 Block18:
	lea ecx,[esp+0x24]
	push 0x9C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x18]
	push 0x310
	push 0xFFFFFFFB
	push esi
	push ecx
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Int
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x28]
	push 0x9C4
	push edx
	mov dword ptr [ebp+esi*4+0x10C],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x18]
	push 0x248
	push 0xFFFFFFFB
	push ebx
	push ecx
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Int
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x2C]
	push 0x19A6
	push edx
	mov dword ptr [ebp+esi*4+0x1B8],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x18]
	push 0x3F0
	push 0xFFFFFFFB
	push edi
	push ecx
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Int
	lea edx,[esp+0x30]
	push 0x19A7
	push edx
	mov dword ptr [ebp+esi*4+0x264],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	push 0x2F0
	push 0xFFFFFFFB
	push ecx
	push edx
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+esi*4+0x310],eax
	lea eax,[esp+0x34]
	push 0x9C5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x50],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x18]
	push 0x7FFFFFFF
	push 0x80000000
	push edx
	push eax
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+esi*4+0x3BC],eax
	cmp esi,6
	jne Block30

 Block29:
	push esi
	lea ecx,[esp+0x1C]
	push offset _S_UIBIND
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	lea edx,[ebp+0x468]
	push edx
	push eax
	push 0
	mov ecx,ebp
	call CConfig::GetOpt_Binary

 Block30:
	inc esi
	cmp esi,0x2B
	mov dword ptr [esp+0x1C],esi
	jl Block1

 Block31:
	mov eax,dword ptr [ebp+0x108]
	lea edi,[ebp+0x108]
	xor ebx,ebx
	cmp eax,ebx
	je Block33

 Block32:
	push eax
	call RegCloseKey
	mov dword ptr [edi],ebx

 Block33:
	lea ecx,[esp+0x30]
	push 0xA19
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea edx,[esp+0x34]
	push 0x9C6
	push edx
	mov byte ptr [esp+0x4C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esi]
	push edx
	push ebx
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x5C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0x18
	mov byte ptr [esp+0x44],6
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x38]
	push eax
	push edi
	push ebx
	push 0xF
	push ebx
	push ebx
	push ebx
	push esi
	push 0x80000002
	call RegCreateKeyExA
	cmp dword ptr [edi],ebx
	je Block88

 Block38:
	lea ecx,[esp+0x34]
	push 0x9CB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],8
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x20],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea edx,[esp+0x34]
	push 0x9CC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],9
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x24],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea eax,[esp+0x34]
	push 0x9CD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xA
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x28],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea ecx,[esp+0x34]
	push 0x9CE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xB
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x2C],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea edx,[esp+0x34]
	push 0x9CF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xC
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x30],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	push 1
	push offset _S_GOPARTYSEARCH
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x34],eax
	lea eax,[esp+0x34]
	push 0x9D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xD
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x38],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	lea ecx,[esp+0x34]
	push 0x9D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xE
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x3C],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea edx,[esp+0x34]
	push 0x9D1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0xF
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x40],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	lea eax,[esp+0x34]
	push 0x9D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0x10
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x44],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	push 1
	push offset _S_GOALLIANCEINVITE
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_BOOL
	push 1
	push offset _S_GOALLIANCETALK
	push 2
	mov ecx,ebp
	mov dword ptr [ebp+0x48],eax
	call CConfig::GetOpt_BOOL
	lea ecx,[esp+0x34]
	push 0x9D6
	push ecx
	mov dword ptr [ebp+0x4C],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0x11
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x50],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea edx,[esp+0x34]
	push 0x9D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0x12
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x54],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	lea eax,[esp+0x34]
	push 0x9D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 3
	push 1
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x13
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	lea ecx,[esp+0x34]
	push 0xB7E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x1FB
	push 0x1A
	push 0x46
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x14
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x60],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	lea edx,[esp+0x34]
	push 0xB79
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0x15
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	lea eax,[esp+0x34]
	push 0x13FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x2710
	push ebx
	push ebx
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x16
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x64],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	lea ecx,[esp+0x34]
	push 0x175F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x50],0x17
	call CConfig::GetOpt_BOOL
	mov dword ptr [ebp+0x68],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea edx,[esp+0x34]
	push 0xD71
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x18
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x18],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	lea eax,[esp+0x34]
	push 0xD73
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x19
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x1C],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	cmp dword ptr [ebp+0x54],ebx
	je Block84

 Block75:
	push 0x1BD
	lea esi,[ebp+0x46C]
	push ebx
	push esi
	call _memset
	add esp,0xC
	xor edi,edi

 Block76:
	lea ecx,[esp+0x34]
	push 0x9C8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x50],0x1A
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [esp+0x18]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push eax
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_Int
	lea ecx,[eax-1]
	cmp ecx,7
	ja Block83

 Block79:
	lea edx,[esp+0x30]
	push 0x9C9
	push edx
	mov byte ptr [esi],al
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov ecx,dword ptr [esp+0x18]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push ecx
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_Int
	mov dword ptr [esi+1],eax
	cmp eax,0x16
	jne Block83

 Block82:
	mov byte ptr [esi],0
	mov dword ptr [esi+1],ebx

 Block83:
	inc edi
	add esi,5
	cmp edi,0x59
	jl Block76

 Block84:
	mov ecx,ebp
	call CConfig::LoadBlockFriend
	mov ecx,ebp
	call CConfig::LoadBlackList
	mov ecx,ebp
	call CConfig::LoadFriendGroup
	mov ecx,ebp
	call CConfig::LoadQuestAlarm
	push ebx
	lea edx,[esp+0x1C]
	push offset _S_DIALOGVISIBLED
	push edx
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x24]
	add esp,0xC
	push 1
	push esi
	push 2
	mov ecx,ebp
	call CConfig::GetOpt_BOOL
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [ebp+0x62C],eax
	mov eax,dword ptr [esp+0x50]
	push eax
	push ecx
	mov ecx,ebp
	call CConfig::SaveLastConnectedCharacterID
	lea edx,[esp+0x50]
	push 0xB7A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push eax
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x58],0x1C
	call CConfig::GetOpt_Int
	mov dword ptr [ebp+0x630],eax
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	cmp dword ptr [ebp+0x630],ebx
	jne Block88

 Block87:
	mov dword ptr [ebp+0x630],0x5E

 Block88:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp esi,ebx
	je Block90

 Block89:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 8
}
}
// CConfig::IsBlockedFriend
__SUB_CLASS_THIS(000B2CC0, __thiscall, 12356,  CConfig, int32_t, unsigned long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	sub eax,0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	xor eax,eax
	ret 8

 Block3:
	mov edx,dword ptr [esp+4]
	lea eax,[ecx+0xD8]
	push eax
	push edx
	call CConfig::FindBlockedFriendIndex
	xor ecx,ecx
	test eax,eax
	setge cl
	mov eax,ecx
	ret 8

 Block4:
	mov eax,dword ptr [esp+4]
	lea edx,[ecx+0xD4]
	push edx
	push eax
	call CConfig::FindBlockedFriendIndex
	xor ecx,ecx
	test eax,eax
	setge cl
	mov eax,ecx
	ret 8
}
}
// CConfig::SetQuestAlarmAutoRegister
_SUB_EXCEPTION_HANDLER(B35C0)
__SUB_CLASS_THIS(000B35C0, __thiscall, 12355,  CConfig, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B35C0
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
	lea eax,[esp+8]
	push 0x9DF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+8]
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
	ret 4
}
}
// CConfig::IsFriendGroupFolded
__SUB_CLASS_THIS(000B3010, __thiscall, 12360,  CConfig, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push esi
	push 0
	lea eax,[esp+0xC]
	push eax
	add ecx,0xDC
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::GetAt
	mov esi,eax
	mov eax,dword ptr [esp+8]
	neg esi
	sbb esi,esi
	neg esi
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	pop esi
	ret 4
}
}
// CConfig::FindBlockedFriendIndex
__SUB_CLASS_THIS(000B27F0, __thiscall, 12358,  CConfig, long, unsigned long, ZArray<unsigned long>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov ecx,edi
	xor esi,esi
	call ZArray<unsigned long>::GetCount
	test eax,eax
	jbe Block4

 Block1:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esp+0xC]
	lea esp,[esp]

 Block2:
	cmp dword ptr [ecx],edx
	je Block5

 Block3:
	inc esi
	add ecx,4
	cmp esi,eax
	jb Block2

 Block4:
	pop edi
	or eax,0xFFFFFFFF
	pop esi
	ret 8

 Block5:
	pop edi
	mov eax,esi
	pop esi
	ret 8
}
}
// CConfig::GetUIWndPosLarge
__SUB_CLASS_THIS(000B2180, __thiscall, 12339,  CConfig, void, int32_t, int32_t&, int32_t&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [ecx+eax*4+0x264]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],edx
	mov eax,dword ptr [ecx+eax*4+0x310]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],eax
	pop esi
	ret 0xC
}
}
// CConfig::GetShowOnlineOnly
__SUB_CLASS_THIS0(000B2040, __thiscall, 12354,  CConfig, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xF4]
	ret
}
}
// CConfig::CConfig
_SUB_EXCEPTION_HANDLER(B6740)
__SUB_CLASS_THIS0(000B6740, __thiscall, 12319,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B6740
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFFC
	mov dword ptr [TSingleton<CConfig>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CConfig>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CConfig::`vftable'
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	lea ecx,[esi+0xDC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, unsigned char, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, unsigned char, ZXString<char>>::_CalcAutoGrow
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	lea ebp,[esi+0x100]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x468],edi
	lea eax,[esp+0x10]
	push 0xA19
	push eax
	mov byte ptr [esp+0x2C],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	push edi
	push 0xF
	push edi
	push edi
	push edi
	push eax
	push 0x80000002
	mov byte ptr [esp+0x48],9
	call RegCreateKeyExA
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x24],8
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	push 0x1BD
	lea edx,[esi+0x46C]
	push edi
	push edx
	call _memset
	add esp,0xC
	mov ecx,esi
	call CConfig::LoadGlobal
	mov ecx,esi
	call CConfig::ResetSessionInfo
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esi+0x634],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// CConfig::CheckExecPathReg
_SUB_EXCEPTION_HANDLER(B5850)
__SUB_CLASS_THIS(000B5850, __thiscall, 12353,  CConfig, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B5850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x100],0
	mov dword ptr [esp+0x28],0
	je Block31

 Block1:
	lea eax,[esp+0x18]
	push 0xC6D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push offset _S_
	push eax
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x38],1
	call CConfig::GetOpt_String
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],3
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block4:
	cmp byte ptr [eax],0
	jne Block6

 Block5:
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x14]
	call ZXString<char>::op_assign
	jmp Block27

 Block6:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	mov byte ptr [esp+0x10],0x5C
	mov byte ptr [esp+0x11],0
	call ZXString<char>::AssignCStr
	push 1
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],4
	call ZXString<char>::Right
	lea edx,[esp+0x14]
	push edx
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],3
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test esi,esi
	je Block16

 Block11:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [eax-4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	dec eax
	push eax
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],3
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x30]
	push ecx
	lea ecx,[esp+0x14]
	call ZXString<char>::Compare
	test eax,eax
	je Block27

 Block17:
	lea edx,[esp+0x10]
	push edx
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	lea eax,[esp+0x1C]
	push 0xC6E
	push eax
	mov byte ptr [esp+0x30],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x28],7
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax-4]
	jmp Block20

 Block19:
	xor ecx,ecx

 Block20:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],6
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov esi,dword ptr [esp+0x14]
	push esi
	call GetFileAttributesA
	cmp eax,0xFFFFFFFF
	je Block24

 Block23:
	test al,0x10
	je Block25

 Block24:
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esp+0x14]
	call ZXString<char>::op_assign

 Block25:
	mov byte ptr [esp+0x28],3
	test esi,esi
	je Block27

 Block26:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea edx,[esp+0x1C]
	push 0xC6D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push 0
	mov ecx,ebp
	mov byte ptr [esp+0x34],8
	call CConfig::SetOpt_String
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],3
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	add esp,0x20
	ret 4
}
}
// CConfig::IsInBlackList
_SUB_EXCEPTION_HANDLER(B3050)
__SUB_CLASS_THIS(000B3050, __thiscall, 12360,  CConfig, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3050
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
	mov eax,dword ptr [ecx+0xF8]
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]

 Block3:
	xor esi,esi
	test edi,edi
	jle Block7

 Block4:
	mov ebx,eax
	lea esp,[esp]

 Block5:
	push ebx
	lea ecx,[esp+0x24]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block10

 Block6:
	inc esi
	add ebx,4
	cmp esi,edi
	jl Block5

 Block7:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,1
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
// CConfig::AddQuestAlarm
__SUB_CLASS_THIS(000B4EF0, __thiscall, 12362,  CConfig, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xFC]
	lea ecx,[esi+0xFC]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],5
	jge Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	push eax
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],ecx
	mov ecx,esi
	call CConfig::SaveQuestAlarm

 Block3:
	pop esi
	ret 8
}
}
// CConfig::LoadLastConnectedCharacterID
_SUB_EXCEPTION_HANDLER(B4180)
__SUB_CLASS_THIS(000B4180, __thiscall, 12322,  CConfig, unsigned long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4180
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
	mov dword ptr [esp+0x20],ecx
	xor ebx,ebx
	cmp dword ptr [ecx+0x100],ebx
	je Block10

 Block1:
	mov eax,dword ptr [ecx+0x104]
	lea edi,[ecx+0x104]
	cmp eax,ebx
	je Block3

 Block2:
	push eax
	call RegCloseKey
	mov dword ptr [edi],ebx

 Block3:
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x1C]
	push 0xA19
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea ecx,[esp+0x18]
	push 0x9C7
	push ecx
	mov byte ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x40],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ebp,dword ptr [esp+0x14]
	lea eax,[esp+0x24]
	push eax
	push edi
	push ebx
	push 0xF
	push ebx
	push ebx
	push ebx
	push ebp
	push 0x80000002
	call RegCreateKeyExA
	cmp dword ptr [edi],ebx
	jne Block11

 Block8:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp ebp,ebx
	je Block10

 Block9:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block10:
	xor eax,eax
	jmp Block16

 Block11:
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x40]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x2C]
	add esp,0xC
	push 0x7FFFFFFF
	push 0x80000000
	push ebx
	push esi
	push 1
	call CConfig::GetOpt_Int
	mov edi,eax
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp ebp,ebx
	je Block15

 Block14:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,edi

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
// CConfig::GetUIWndPos
__SUB_CLASS_THIS(000B20A0, __thiscall, 12331,  CConfig, void, int32_t, int32_t&, int32_t&, int32_t&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [ecx+eax*4+0x10C]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],edx
	mov edx,dword ptr [ecx+eax*4+0x1B8]
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esi],edx
	mov eax,dword ptr [ecx+eax*4+0x3BC]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ecx],eax
	pop esi
	ret 0x10
}
}
// CConfig::SaveGlobal
_SUB_EXCEPTION_HANDLER(B3BE0)
__SUB_CLASS_THIS0(000B3BE0, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3BE0
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
	xor edi,edi
	cmp dword ptr [esi+0x100],edi
	je Block45

 Block1:
	lea eax,[esp+0x14]
	push 0x9B5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],edi
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea edx,[esp+0x14]
	push 0x9B6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],1
	call CConfig::SetOpt_String
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	lea eax,[esp+0x14]
	push 0x9B7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],2
	call CConfig::SetOpt_String
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	lea ecx,[esp+0x14]
	push 0x9B9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],3
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea edx,[esp+0x14]
	push 0x9BA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],4
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	lea edx,[esp+0x14]
	push 0x9BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],5
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea edx,[esp+0x14]
	push 0x9BC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],6
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea edx,[esp+0x14]
	push 0x9BD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],7
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x14]
	push 0x9BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x7C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],8
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea edx,[esp+0x14]
	push 0x9BF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x80]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],9
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea edx,[esp+0x14]
	push 0x9C0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xA
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea edx,[esp+0x14]
	push 0xB97
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xB
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea edx,[esp+0x14]
	push 0xB98
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xC
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea edx,[esp+0x14]
	push 0xB23
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xD
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea edx,[esp+0x14]
	push 0x9C1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xE
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	xor ebp,ebp
	cmp dword ptr [esi+0x98],edi
	je Block33

 Block32:
	mov ebp,2

 Block33:
	cmp dword ptr [esi+0x9C],edi
	je Block35

 Block34:
	or ebp,1

 Block35:
	lea edx,[esp+0x14]
	push 0x1946
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0xF
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea eax,[esp+0x14]
	push 0x19E4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],0x10
	call CConfig::SetOpt_BOOL
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	cmp eax,edi
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x24],0x11
	lea ebp,[esi+0xA4]

 Block40:
	lea edx,[esp+0x18]
	push 0x180D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x30],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],0x11
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esp+0x14]
	push ecx
	push edx
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	inc edi
	add ebp,4
	cmp edi,0xC
	jl Block40

 Block43:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
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
// CConfig::ResetSessionInfo
_SUB_EXCEPTION_HANDLER(B3230)
__SUB_CLASS_THIS0(000B3230, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B3230
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
	lea eax,[esp+8]
	push 0x9B2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CConfig::SetOpt_String
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+8]
	push 0x9B3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0xC]
	push 0x9B4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],2
	call CConfig::SetOpt_Int
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push 0xFFFFFFFF
	push offset _S_SIFIELDID
	push 0
	mov ecx,esi
	call CConfig::SetOpt_Int
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CConfig::GetOpt_Binary
_SUB_EXCEPTION_HANDLER(B2F00)
__SUB_CLASS_THIS(000B2F00, __thiscall, 12378,  CConfig, void, int32_t, const char*, ZArray<unsigned char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B2F00
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
	mov eax,dword ptr [esp+0x20]
	push eax
	call CConfig::GetOptKey
	mov edi,dword ptr [esp+0x24]
	lea ecx,[esp+0x20]
	push ecx
	push 0
	lea edx,[esp+0x14]
	push edx
	push 0
	mov esi,eax
	push edi
	push esi
	mov dword ptr [esp+0x24],3
	mov dword ptr [esp+0x38],0
	call RegQueryValueExA
	test eax,eax
	jne Block6

 Block1:
	cmp dword ptr [esp+0xC],3
	jne Block6

 Block2:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block6

 Block3:
	mov dword ptr [esp+0x24],0
	lea ecx,[esp+0x20]
	push ecx
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x20],0
	call ZArray<unsigned char>::_Alloc
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x20]
	push edx
	push eax
	lea ecx,[esp+0x14]
	push ecx
	push 0
	push edi
	push esi
	call RegQueryValueExA
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [esp+0x28]
	call ZArray<unsigned char>::RemoveAll

 Block5:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CConfig::SaveLastConnectedCharacterID
_SUB_EXCEPTION_HANDLER(B4320)
__SUB_CLASS_THIS(000B4320, __thiscall, 12323,  CConfig, void, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B4320
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
	cmp dword ptr [edi+0x104],0
	je Block3

 Block1:
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[esp+0x10]
	push offset _S_D__1
	push ecx
	mov dword ptr [esp+0x24],0
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x30]
	mov esi,dword ptr [esp+0x18]
	add esp,0xC
	push edx
	push esi
	push 1
	mov ecx,edi
	call CConfig::SetOpt_Int
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block3

 Block2:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CConfig::DeleteAllQuestAlarm
__SUB_CLASS_THIS0(000B4F60, __thiscall, 12321,  CConfig, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xFC]
	call ZArray<long>::RemoveAll
	mov ecx,esi
	pop esi
	jmp  CConfig::SaveQuestAlarm
}
}
// CConfig::LoadFuncKeyMapped
__SUB_CLASS_THIS(000B2010, __thiscall, 12327,  CConfig, int32_t, FUNCKEY_MAPPED*) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x54],0
	jne Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea esi,[ecx+0x46C]
	mov ecx,0x6F
	rep movsd
	movsb
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CConfig::GetOpt_BOOL
__SUB_CLASS_THIS(000B24C0, __thiscall, 12370,  CConfig, int32_t, int32_t, const char*, int32_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push eax
	call CConfig::GetOptKey
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+4]
	push edx
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x14]
	push ecx
	push 0
	push edx
	push eax
	mov dword ptr [esp+0x20],4
	call RegQueryValueExA
	test eax,eax
	jne Block4

 Block1:
	cmp dword ptr [esp+0xC],4
	jne Block4

 Block2:
	cmp dword ptr [esp+8],4
	jne Block4

 Block3:
	cmp dword ptr [esp],eax
	setne al
	pop ecx
	ret 0xC

 Block4:
	mov eax,dword ptr [esp+0x10]
	pop ecx
	ret 0xC
}
}
// CConfig::ChangeBlockOption
__SUB_CLASS_THIS(000B4D00, __thiscall, 12359,  CConfig, int32_t, unsigned long, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	sub eax,0
	push ebx
	push esi
	push edi
	mov esi,ecx
	je Block5

 Block1:
	sub eax,1
	jne Block10

 Block2:
	mov ebx,dword ptr [esp+0x10]
	lea edi,[esi+0xD8]
	push edi
	push ebx
	call CConfig::FindBlockedFriendIndex
	test eax,eax
	jge Block6

 Block3:
	cmp dword ptr [esp+0x18],0
	jne Block9

 Block4:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 0xC

 Block5:
	mov ebx,dword ptr [esp+0x10]
	lea edi,[esi+0xD4]
	push edi
	push ebx
	call CConfig::FindBlockedFriendIndex
	test eax,eax
	jl Block8

 Block6:
	cmp dword ptr [esp+0x18],0
	jne Block4

 Block7:
	mov ecx,dword ptr [edi]
	lea edx,[ecx+eax*4]
	push edx
	mov ecx,edi
	call ZArray<unsigned long>::RemoveAt
	mov ecx,esi
	call CConfig::SaveBlockFriend
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 0xC

 Block8:
	cmp dword ptr [esp+0x18],0
	je Block4

 Block9:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<unsigned long>::InsertBefore
	mov dword ptr [eax],ebx

 Block10:
	mov ecx,esi
	call CConfig::SaveBlockFriend
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 0xC
}
}
// CConfig::GetQuestAlarm
__SUB_CLASS_THIS0(004220E0, __thiscall, 12364,  CConfig, ZArray<long>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0xFC
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZArray<long>::operator=
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
