#include "regen.hpp"
// QuickslotKeyMappedMan.ipp
#include "QuickslotKeyMappedMan.hpp"

// CQuickslotKeyMappedMan::IsQuickslotKeyMapModified
__SUB_CLASS_THIS0(003D8200, __thiscall, 77505,  CQuickslotKeyMappedMan, int32_t) {
__asm {

 Block0:
	lea edx,[ecx+4]
	mov eax,0x20
	add ecx,0x24
	push esi
	lea esp,[esp]

 Block1:
	mov esi,dword ptr [ecx]
	cmp esi,dword ptr [edx]
	jne Block4

 Block2:
	sub eax,4
	add edx,4
	add ecx,4
	cmp eax,4
	jae Block1

 Block3:
	xor eax,eax
	xor edx,edx
	test eax,eax
	setne dl
	pop esi
	mov eax,edx
	ret

 Block4:
	movzx eax,byte ptr [ecx]
	movzx esi,byte ptr [edx]
	sub eax,esi
	jne Block8

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
}
}
// CQuickslotKeyMappedMan::CQuickslotKeyMappedMan
__SUB_CLASS_THIS0(002C6010, __thiscall, 77501,  CQuickslotKeyMappedMan, void) {
__asm {

 Block0:
	push esi
	mov eax,ecx
	push edi
	lea edi,[eax+4]
	test edi,edi
	je Block2

 Block1:
	lea ecx,[edi-4]
	mov dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [eax],offset CQuickslotKeyMappedMan::`vftable'
	mov ecx,8
	mov esi,offset _D_S_ADEFAULTQKM__2
	rep movsd
	lea edi,[eax+0x24]
	mov ecx,8
	mov esi,offset _D_S_ADEFAULTQKM__2
	rep movsd
	pop edi
	pop esi
	ret
}
}
// CQuickslotKeyMappedMan::DefaultQuickslotKeyMap
__SUB_CLASS_THIS0(002C5FF0, __thiscall, 77503,  CQuickslotKeyMappedMan, void) {
__asm {

 Block0:
	push esi
	push edi
	lea edi,[ecx+4]
	mov ecx,8
	mov esi,offset _D_S_ADEFAULTQKM__2
	rep movsd
	pop edi
	pop esi
	ret
}
}
// CQuickslotKeyMappedMan::~CQuickslotKeyMappedMan
__SUB_CLASS_THIS0(002C6060, __thiscall, 77503,  CQuickslotKeyMappedMan, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CQuickslotKeyMappedMan::`vftable'
	mov dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance],0
	ret
}
}
// CQuickslotKeyMappedMan::OnInit
__SUB_CLASS_THIS(002C6130, __thiscall, 77504,  CQuickslotKeyMappedMan, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ebx,ecx
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	test al,al
	je Block2

 Block1:
	push 0x20
	lea eax,[ebx+4]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	jmp Block3

 Block2:
	mov ecx,ebx
	call CQuickslotKeyMappedMan::DefaultQuickslotKeyMap

 Block3:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block4:
	call CUIStatusBar::ReDrawQuickslot

 Block5:
	lea esi,[ebx+4]
	lea edi,[ebx+0x24]
	mov ecx,8
	rep movsd
	mov ecx,ebx
	call CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CQuickslotKeyMappedMan::SaveQuickslotKeyMap
_SUB_EXCEPTION_HANDLER(2C60A0)
__SUB_CLASS_THIS0(002C60A0, __thiscall, 77503,  CQuickslotKeyMappedMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C60A0
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
	mov edi,ecx
	push 0xD8
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x20
	lea esi,[edi+4]
	push esi
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	add edi,0x24
	mov ecx,8
	rep movsd
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret
}
}
