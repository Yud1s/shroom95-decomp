#include "regen.hpp"
// FuncKeyMappedMan.ipp
#include "FuncKeyMappedMan.hpp"

// CFuncKeyMappedMan::AdaptVirtualKey
__SUB_CLASS_THIS0(001687E0, __thiscall, 69953,  CFuncKeyMappedMan, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	test eax,eax
	je Block15

 Block1:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [ZImports::_MapVirtualKeyA]
	xor esi,esi
	lea ebp,[ecx+5]
	lea esp,[esp]

 Block2:
	movzx ecx,byte ptr [ebp-1]
	cmp ecx,8
	ja Block13

 Block3:
	cmp ecx,4
	jne Block13

 Block4:
	test eax,eax
	je Block13

 Block5:
	mov ecx,dword ptr [ebp]
	cmp ecx,8
	ja Block13

 Block6:
	cmp ECX, 0
je Block7
cmp ECX, 1
je Block8
cmp ECX, 2
je Block9
cmp ECX, 3
je Block10
cmp ECX, 4
je Block13
cmp ECX, 5
je Block13
cmp ECX, 6
je Block13
cmp ECX, 7
je Block13
cmp ECX, 8
je Block11


 Block7:
	push 1
	push esi
	mov ebx,eax
	call edi
	push eax
	push 0
	jmp Block12

 Block8:
	push 1
	push esi
	mov ebx,eax
	call edi
	push eax
	push 1
	jmp Block12

 Block9:
	push 1
	push esi
	mov ebx,eax
	call edi
	push eax
	push 2
	jmp Block12

 Block10:
	push 1
	push esi
	mov ebx,eax
	call edi
	push eax
	push 3
	jmp Block12

 Block11:
	push 1
	push esi
	mov ebx,eax
	call edi
	push eax
	push 5

 Block12:
	mov ecx,ebx
	call CUIStatusBar::SetShortcutTooltip
	mov eax,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]

 Block13:
	inc esi
	add ebp,5
	cmp esi,0x59
	jl Block2

 Block14:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block15:
	ret
}
}
// CFuncKeyMappedMan::IsFuncKeyMapModified
__SUB_CLASS_THIS0(003D8180, __thiscall, 69956,  CFuncKeyMappedMan, int32_t) {
__asm {

 Block0:
	push esi
	lea edx,[ecx+4]
	mov esi,0x1BD
	add ecx,0x1C1
	nop

 Block1:
	mov eax,dword ptr [ecx]
	cmp eax,dword ptr [edx]
	jne Block3

 Block2:
	sub esi,4
	add edx,4
	add ecx,4
	cmp esi,4
	jae Block1

 Block3:
	movzx eax,byte ptr [ecx]
	push edi
	movzx edi,byte ptr [edx]
	sub eax,edi
	pop edi
	jne Block8

 Block4:
	cmp esi,1
	jbe Block9

 Block5:
	movzx eax,byte ptr [ecx+1]
	movzx esi,byte ptr [edx+1]
	sub eax,esi
	jne Block8

 Block6:
	movzx eax,byte ptr [ecx+2]
	movzx esi,byte ptr [edx+2]
	sub eax,esi
	jne Block8

 Block7:
	movzx eax,byte ptr [ecx+3]
	movzx ecx,byte ptr [edx+3]
	sub eax,ecx

 Block8:
	sar eax,0x1F
	or eax,1
	xor edx,edx
	test eax,eax
	setne dl
	pop esi
	mov eax,edx
	ret

 Block9:
	xor eax,eax
	xor edx,edx
	test eax,eax
	setne dl
	pop esi
	mov eax,edx
	ret
}
}
// CFuncKeyMappedMan::DefaultFuncKeyMap
__SUB_CLASS_THIS0(00168600, __thiscall, 69953,  CFuncKeyMappedMan, void) {
__asm {

 Block0:
	push esi
	push edi
	lea edi,[ecx+4]
	mov ecx,0x6F
	mov esi,offset _D_S_ADEFAULTFKM
	rep movsd
	movsb
	pop edi
	pop esi
	ret
}
}
// CFuncKeyMappedMan::ChangePetConsumeItemID
_SUB_EXCEPTION_HANDLER(168920)
__SUB_CLASS_THIS(00168920, __thiscall, 69957,  CFuncKeyMappedMan, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_168920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	push 0x9F
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x3C0],eax
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x3C0]
	push ecx
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
	ret 4
}
}
// CFuncKeyMappedMan::FuncKeyMapped
// 5686A4
static uint8_t _SUB_168620_LOOKUP_TABLE_0[97] = {
0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 2, 7, 7, 3, 7, 7, 7, 7, 7, 4, 7, 5, 7, 
6, 
};
__SUB_CLASS_THIS(00168620, __thiscall, 69959,  CFuncKeyMappedMan, FUNCKEY_MAPPED&, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x1D]
	cmp eax,0x60
	ja Block9

 Block1:
	movzx eax,byte ptr [eax+_SUB_168620_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block2
cmp EAX, 2
je Block5
cmp EAX, 3
je Block7
cmp EAX, 4
je Block4
cmp EAX, 5
je Block3
cmp EAX, 6
je Block6
cmp EAX, 7
je Block9


 Block2:
	lea eax,[ecx+0xD6]
	ret 4

 Block3:
	lea eax,[ecx+0x1C1]
	ret 4

 Block4:
	lea eax,[ecx+0x1C6]
	ret 4

 Block5:
	lea eax,[ecx+0x1CB]
	ret 4

 Block6:
	lea eax,[ecx+0x1D0]
	ret 4

 Block7:
	lea eax,[ecx+0x1D5]
	ret 4

 Block8:
	lea eax,[ecx+0x95]
	ret 4

 Block9:
	lea ecx,[ecx+edx*4]
	lea eax,[edx+ecx+4]
	ret 4
}
}
// CFuncKeyMappedMan::OnInit
__SUB_CLASS_THIS(00168C30, __thiscall, 69954,  CFuncKeyMappedMan, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [esp+0xC],edi
	call CInPacket::Decode1
	mov ecx,0x1BD
	movzx eax,al
	cmp word ptr [ebx+0x10],cx
	jb Block2

 Block1:
	test eax,eax
	je Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	lea edx,[edi+4]
	push edx
	call CConfig::LoadFuncKeyMapped
	test eax,eax
	jne Block4

 Block3:
	mov ecx,edi
	call CFuncKeyMappedMan::DefaultFuncKeyMap

 Block4:
	mov ecx,edi
	call CFuncKeyMappedMan::SaveFuncKeyMap
	jmp Block10

 Block5:
	push ebp
	lea esi,[edi+5]
	mov ebp,0x59

 Block6:
	lea edi,[esi-1]
	push ebx
	mov ecx,edi
	call FUNCKEY_MAPPED::Decode
	cmp dword ptr [esi],0x16
	jne Block8

 Block7:
	mov byte ptr [edi],0
	mov dword ptr [esi],0

 Block8:
	add esi,5
	sub ebp,1
	jne Block6

 Block9:
	mov edi,dword ptr [esp+0x10]
	pop ebp

 Block10:
	mov ecx,edi
	call CFuncKeyMappedMan::AdaptVirtualKey
	lea esi,[edi+4]
	add edi,0x1C1
	mov ecx,0x6F
	rep movsd
	mov ecx,dword ptr [esp+0xC]
	movsb
	call CFuncKeyMappedMan::SaveFuncKeyMap
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret 4
}
}
// CFuncKeyMappedMan::ChangePetConsumeMPItemID
_SUB_EXCEPTION_HANDLER(1689C0)
__SUB_CLASS_THIS(001689C0, __thiscall, 69957,  CFuncKeyMappedMan, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1689C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	push 0x9F
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x3C4],eax
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x3C4]
	push ecx
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
	ret 4
}
}
// CFuncKeyMappedMan::SaveFuncKeyMap
_SUB_EXCEPTION_HANDLER(168A60)
__SUB_CLASS_THIS0(00168A60, __thiscall, 69953,  CFuncKeyMappedMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_168A60
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	push 0x9F
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	xor esi,esi
	push esi
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x40],esi
	call COutPacket::Encode4
	mov dword ptr [esp+0x18],esi
	lea ebp,[ebx+4]
	mov byte ptr [esp+0x3C],1
	xor edi,edi
	mov dword ptr [esp+0x20],ebp
	lea ecx,[ecx]

 Block1:
	mov al,byte ptr [ebp]
	cmp al,byte ptr [ebp+0x1BD]
	jne Block3

 Block2:
	mov ecx,dword ptr [ebp+1]
	cmp ecx,dword ptr [ebp+0x1BE]
	je Block4

 Block3:
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi

 Block4:
	inc edi
	add ebp,5
	cmp edi,0x59
	jl Block1

 Block5:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp ecx,esi
	je Block7

 Block6:
	call CSequencedKeyMan::Restore

 Block7:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,esi
	je Block28

 Block8:
	mov esi,dword ptr [ebx-4]
	test esi,esi
	je Block28

 Block9:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	jne Block11

 Block10:
	xor edx,edx
	jmp Block12

 Block11:
	mov edx,dword ptr [eax-4]

 Block12:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	cmp ecx,edx
	jbe Block17

 Block13:
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [eax-4]

 Block15:
	add eax,eax
	cmp ecx,eax
	ja Block15

 Block16:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block17:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+ecx],esi
	add dword ptr [esp+0x2C],4
	xor edi,edi
	test esi,esi
	jle Block27

 Block18:
	mov eax,dword ptr [esp+0x28]
	mov ebp,dword ptr [ebx+edi*4]
	test eax,eax
	jne Block20

 Block19:
	xor edx,edx
	jmp Block21

 Block20:
	mov edx,dword ptr [eax-4]

 Block21:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	cmp ecx,edx
	jbe Block26

 Block22:
	test eax,eax
	je Block24

 Block23:
	mov eax,dword ptr [eax-4]

 Block24:
	add eax,eax
	cmp ecx,eax
	ja Block24

 Block25:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block26:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+ecx],ebp
	add dword ptr [esp+0x2C],4
	mov eax,dword ptr [ebx+edi*4]
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x24]
	push edx
	lea edx,[ecx+eax*4]
	lea ecx,[eax+edx+4]
	call FUNCKEY_MAPPED::Encode
	inc edi
	cmp edi,esi
	jl Block18

 Block27:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	mov esi,dword ptr [esp+0x1C]
	mov ecx,esi
	call CFuncKeyMappedMan::AdaptVirtualKey
	lea edi,[esi+0x1C1]
	mov esi,dword ptr [esp+0x20]
	mov ecx,0x6F
	rep movsd
	movsb

 Block28:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],0
	call ZArray<long>::RemoveAll
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CFuncKeyMappedMan::~CFuncKeyMappedMan
__SUB_CLASS_THIS0(001687C0, __thiscall, 69953,  CFuncKeyMappedMan, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CFuncKeyMappedMan::`vftable'
	mov dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance],0
	ret
}
}
// CFuncKeyMappedMan::OnPetConsumeMPItemInit
__SUB_CLASS_THIS(001688F0, __thiscall, 69954,  CFuncKeyMappedMan, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	mov dword ptr [esi+0x3C4],eax
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov ecx,dword ptr [eax+0x1C]
	mov dword ptr [esi+0x3C4],ecx

 Block2:
	pop esi
	ret 4
}
}
// CFuncKeyMappedMan::OnPacket
__SUB_CLASS_THIS(00168CE0, __thiscall, 69955,  CFuncKeyMappedMan, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x18E
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
	call CFuncKeyMappedMan::OnPetConsumeMPItemInit
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CFuncKeyMappedMan::OnPetConsumeItemInit
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CFuncKeyMappedMan::OnInit

 Block6:
	ret 8
}
}
// CFuncKeyMappedMan::OnPetConsumeItemInit
__SUB_CLASS_THIS(001688C0, __thiscall, 69954,  CFuncKeyMappedMan, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	mov dword ptr [esi+0x3C0],eax
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [esi+0x3C0],ecx

 Block2:
	pop esi
	ret 4
}
}
// CFuncKeyMappedMan::CFuncKeyMappedMan
