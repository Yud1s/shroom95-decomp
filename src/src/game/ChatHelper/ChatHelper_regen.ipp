#include "regen.hpp"
// ChatHelper.ipp
#include "ChatHelper.hpp"

// CHATLOG_ADD
__SUB(000AA000, __cdecl, 145087,  void, ZXString<char>&, uint16_t) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block2

 Block1:
	movzx ecx,word ptr [esp+0xC]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+8],esp
	push 0
	mov dword ptr [eax+4],0
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push eax
	call CUIStatusBar::ChatLogAdd

 Block2:
	pop ecx
	ret
}
}
// CChatHelper::TryChat
_SUB_EXCEPTION_HANDLER(AA550)
__SUB_CLASS_THIS(000AA550, __thiscall, 37931,  CChatHelper, int32_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA550
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
	mov ebp,dword ptr [esp+0x2C]
	xor edi,edi
	push ebp
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x24],edi
	call timeGetTime
	mov ebx,eax
	sub eax,dword ptr [esi+4]
	mov dword ptr [esp+0x18],ebx
	cmp eax,0xAF0
	jb Block6

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp byte ptr [ecx+0x206C],0
	jbe Block9

 Block2:
	lea edx,[esp+0x2C]
	push 0x392
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x24],1
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],edi
	je Block4

 Block3:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],edi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 8
	push eax
	call CUIStatusBar::ChatLogAdd

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],0
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	xor eax,eax
	jmp Block43

 Block9:
	push ebp
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call ZXString<char>::op_assign
	push 1
	push edi
	push 1
	push 0x400
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x30]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block14

 Block10:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x11D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block43

 Block14:
	mov ecx,ebx
	sub ecx,dword ptr [esi]
	cmp ecx,0x7530
	jbe Block16

 Block15:
	lea ecx,[esi+0xC]
	mov dword ptr [esi],ebx
	call ZArray<ZXString<char>>::RemoveAll

 Block16:
	push ebp
	lea edi,[esi+0xC]
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block17:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block31

 Block18:
	cmp dword ptr [eax-4],4
	jbe Block20

 Block19:
	mov edx,eax
	push edx
	mov ecx,edi
	call ZArray<ZXString<char>>::RemoveAt
	jmp Block17

 Block20:
	test eax,eax
	je Block31

 Block21:
	cmp dword ptr [eax-4],4
	jne Block31

 Block22:
	mov ebx,eax
	mov ebp,1
	lea edi,[ebx+4]
	jmp Block24

 Block24:
	push edi
	mov ecx,ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block30

 Block25:
	inc ebp
	add edi,4
	cmp ebp,4
	jl Block24

 Block26:
	call timeGetTime
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esi+4],eax
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x390
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block43

 Block30:
	mov ebx,dword ptr [esp+0x18]

 Block31:
	mov ecx,dword ptr [esi+0x20]
	mov dword ptr [esi+ecx*4+0x10],ebx
	mov eax,dword ptr [esi+0x20]
	inc eax
	and eax,0x80000003
	jns Block33

 Block32:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block33:
	mov dword ptr [esi+0x20],eax
	sub ebx,dword ptr [esi+eax*4+0x10]
	cmp ebx,0x7D0
	jae Block38

 Block34:
	call timeGetTime
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x391
	push edx
	mov dword ptr [esi+4],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block43

 Block38:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CChatHelper::HistoryAdd
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,1

 Block43:
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
// CClaimChatLog::IsClaimAbleCharacter
_SUB_EXCEPTION_HANDLER(AAC20)
__SUB_CLASS_THIS(000AAC20, __thiscall, 37723,  CClaimChatLog, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AAC20
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
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea esi,[eax-1]
	test esi,esi
	jl Block7

 Block3:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi+4]
	push eax
	push ecx
	lea eax,[ecx+esi*4]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea edx,[esp+0x18]
	push edx
	call ExtractCharacterNameHelper<ZXString<char>>::call
	add esp,8
	mov ecx,eax
	call ZXString<char>::Compare
	test eax,eax
	mov eax,dword ptr [esp+0x10]
	sete bl
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	test bl,bl
	jne Block10

 Block6:
	sub esi,1
	jns Block3

 Block7:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block10:
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
	mov eax,1
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
// CChatHelper::HistoryUp
_SUB_EXCEPTION_HANDLER(AA230)
__SUB_CLASS_THIS0(000AA230, __thiscall, 37932,  CChatHelper, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA230
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
	xor edi,edi
	mov dword ptr [esp+0xC],edi
	lea eax,[edi+1]
	cmp dword ptr [ecx+0x28],edi
	je Block2

 Block1:
	add dword ptr [ecx+0x24],eax
	mov dword ptr [ecx+0x28],edi

 Block2:
	add dword ptr [ecx+0x24],0xFFFFFFFF
	jns Block4

 Block3:
	mov dword ptr [ecx+0x24],edi

 Block4:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esi],edi
	mov dword ptr [esp+0xC],eax
	mov eax,dword ptr [ecx+0x24]
	cmp eax,edi
	mov dword ptr [esp+0x18],edi
	jl Block10

 Block5:
	mov edx,dword ptr [ecx+8]
	cmp edx,edi
	jne Block7

 Block6:
	xor edx,edx
	jmp Block8

 Block7:
	mov edx,dword ptr [edx-4]

 Block8:
	cmp eax,edx
	jae Block10

 Block9:
	mov ecx,dword ptr [ecx+8]
	lea edx,[ecx+eax*4]
	push edx
	mov ecx,esi
	call ZXString<char>::op_assign

 Block10:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CClaimChatLog::GetChatLogOfTwoCharacters
_SUB_EXCEPTION_HANDLER(AAD20)
__SUB_CLASS_THIS(000AAD20, __thiscall, 37724,  CClaimChatLog, ZXString<char>*, ZXString<char>*, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AAD20
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
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x40],1
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0x40],4
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	dec eax
	cmp eax,ebx
	mov dword ptr [esp+0x20],eax
	jl Block21

 Block4:
	lea esi,[eax*4]
	mov eax,dword ptr [edi+4]
	push ecx
	add eax,esi
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[esp+0x28]
	push eax
	call ExtractCharacterNameHelper<ZXString<char>>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ebx,dword ptr [esp+0x50]
	test eax,eax
	je Block8

 Block7:
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jne Block18

 Block8:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [esi+edx]
	lea ebp,[esi+edx]
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[ecx+eax+1]
	cmp eax,0x640
	mov dword ptr [esp+0x1C],eax
	jg Block19

 Block12:
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jne Block14

 Block13:
	push 1
	push eax
	push 1
	push 0x400
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	mov ecx,dword ptr [edi+4]
	add esp,0xC
	push 0xFFFFFFFF
	add ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block14:
	mov ecx,dword ptr [edi+4]
	push offset _S___22
	lea edx,[esp+0x30]
	add ecx,esi
	push edx
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x48],6
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x44],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x40],6
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x20]
	sub eax,1
	mov dword ptr [esp+0x20],eax
	jns Block4

 Block19:
	mov esi,dword ptr [esp+0x18]
	xor ebx,ebx
	cmp esi,ebx
	je Block21

 Block20:
	mov eax,dword ptr [esi-4]
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	mov edi,dword ptr [esp+0x48]
	dec eax
	push eax
	push edi
	lea ecx,[esp+0x20]
	call ZXString<char>::Left
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],1
	mov byte ptr [esp+0x40],3
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov byte ptr [esp+0x40],2
	cmp esi,ebx
	je Block26

 Block25:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],1
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,edi
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
// CChatHelper::CChatHelper
__SUB_CLASS_THIS0(000AA4C0, __thiscall, 37928,  CChatHelper, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],0xFFFFFFFF
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	ret
}
}
// CChatHelper::~CChatHelper
_SUB_EXCEPTION_HANDLER(AA4F0)
__SUB_CLASS_THIS0(000AA4F0, __thiscall, 37930,  CChatHelper, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA4F0
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
	mov dword ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CClaimChatLog::AddCharacterName
_SUB_EXCEPTION_HANDLER(AA350)
__SUB_CLASS_THIS(000AA350, __thiscall, 37723,  CClaimChatLog, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA350
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
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	add eax,4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::Compare
	test eax,eax
	jne Block7

 Block4:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	xor eax,eax
	jmp Block16

 Block7:
	mov eax,dword ptr [esi+8]
	lea ebx,[esi+8]
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	lea esi,[eax-1]
	test esi,esi
	jl Block13

 Block10:
	mov ecx,dword ptr [ebx]
	mov ebp,dword ptr [esp+0x24]
	lea edi,[ecx+esi*4]
	nop

 Block11:
	push ebp
	mov ecx,edi
	call ZXString<char>::Compare
	test eax,eax
	je Block17

 Block12:
	dec esi
	sub edi,4
	test esi,esi
	jge Block11

 Block13:
	lea edx,[esp+0x24]
	push edx
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,1

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block17:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test ebp,ebp
	je Block6

 Block18:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block16
}
}
// CClaimChatLog::CClaimChatLog
_SUB_EXCEPTION_HANDLER(AAAC0)
__SUB_CLASS_THIS(000AAAC0, __thiscall, 37720,  CClaimChatLog, void, ZArray<ZXString<char> >&, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AAAC0
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
	mov dword ptr [esp+0x14],edi
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [edi+4],ebx
	mov dword ptr [edi+8],ebx
	mov eax,dword ptr [esp+0x34]
	mov ebp,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block3

 Block1:
	cmp byte ptr [eax],bl
	je Block3

 Block2:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x38]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,edi
	call CClaimChatLog::AddCharacterName
	jmp Block16

 Block3:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	jne Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	lea esi,[eax-1]
	cmp esi,ebx
	jl Block16

 Block7:
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [ebp]
	push ecx
	lea eax,[ecx+esi*4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov byte ptr [esp+0x30],3
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea edx,[esp+0x1C]
	push edx
	call ExtractCharacterNameHelper<ZXString<char>>::call
	add esp,8
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],3
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov edi,dword ptr [esp+0x30]
	cmp edi,ebx
	je Block12

 Block10:
	cmp byte ptr [edi],bl
	je Block12

 Block11:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x18]
	call CClaimChatLog::AddCharacterName

 Block12:
	mov byte ptr [esp+0x28],2
	cmp edi,ebx
	je Block14

 Block13:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block14:
	sub esi,1
	jns Block7

 Block15:
	mov edi,dword ptr [esp+0x14]

 Block16:
	push ebp
	lea ecx,[edi+4]
	call ZArray<ZXString<char>>::operator=
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,edi
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
// CChatHelper::HistoryDown
_SUB_EXCEPTION_HANDLER(AA2C0)
__SUB_CLASS_THIS0(000AA2C0, __thiscall, 37932,  CChatHelper, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA2C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[eax-1]
	mov dword ptr [esi],0
	mov eax,dword ptr [ecx+0x24]
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+8],1
	test eax,eax
	jl Block5

 Block3:
	cmp eax,edx
	jge Block6

 Block4:
	inc eax
	mov dword ptr [ecx+0x24],eax
	jmp Block8

 Block5:
	cmp eax,edx

 Block6:
	jne Block9

 Block7:
	test edx,edx
	jl Block9

 Block8:
	mov ecx,dword ptr [ecx+8]
	lea edx,[ecx+eax*4]
	push edx
	mov ecx,esi
	call ZXString<char>::op_assign

 Block9:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CChatHelper::HistoryAddforCommand
_SUB_EXCEPTION_HANDLER(AA1B0)
__SUB_CLASS_THIS(000AA1B0, __thiscall, 37933,  CChatHelper, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA1B0
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
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CChatHelper::HistoryAdd
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
	pop esi
	add esp,0x10
	ret 4
}
}
// CClaimChatLog::~CClaimChatLog
_SUB_EXCEPTION_HANDLER(602B90)
__SUB_CLASS_THIS0(00602B90, __thiscall, 37722,  CClaimChatLog, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_602B90
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
	lea ecx,[esi+8]
	mov dword ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CChatHelper::HistoryAdd
_SUB_EXCEPTION_HANDLER(AA090)
__SUB_CLASS_THIS(000AA090, __thiscall, 37933,  CChatHelper, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AA090
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+8]
	lea esi,[edi+8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	add eax,0xFFFFFFFF
	js Block4

 Block3:
	mov edx,dword ptr [esi]
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[edx+eax*4]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block5

 Block4:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block5:
	mov ecx,dword ptr [edi+0x24]
	test ecx,ecx
	jl Block11

 Block6:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	cmp ecx,eax
	jae Block11

 Block9:
	mov eax,dword ptr [esi]
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[eax+ecx*4]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block11

 Block10:
	mov dword ptr [edi+0x28],1
	jmp Block14

 Block11:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [eax-4]

 Block13:
	mov dword ptr [edi+0x24],eax
	mov dword ptr [edi+0x28],0
	lea esp,[esp]

 Block14:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block17

 Block15:
	cmp dword ptr [eax-4],8
	jbe Block17

 Block16:
	mov ecx,eax
	push ecx
	mov ecx,esi
	call ZArray<ZXString<char>>::RemoveAt
	dec dword ptr [edi+0x24]
	jmp Block14

 Block17:
	cmp dword ptr [edi+0x24],0
	jge Block21

 Block18:
	mov esi,eax
	test esi,esi
	je Block20

 Block19:
	mov esi,dword ptr [esi-4]

 Block20:
	mov dword ptr [edi+0x24],esi
	mov dword ptr [edi+0x28],0

 Block21:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
