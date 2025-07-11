#include "regen.hpp"
// Field_GuildBoss.ipp
#include "Field_GuildBoss.hpp"

// CPulley::~CPulley
_SUB_EXCEPTION_HANDLER(151390)
__SUB_CLASS_THIS0(00151390, __thiscall, 143682,  CPulley, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [edi+0x20]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [esp+0xC],0
	jne Block19

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x3C],0
	call esi
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [edi+0x20]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x14]
	push eax
	push 0x10
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x10]
	push edx
	call edi

 Block15:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block18:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block19:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CPulley::Init
_SUB_EXCEPTION_HANDLER(151560)
__SUB_CLASS_THIS(00151560, __thiscall, 143681,  CPulley, void, long, long, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151560
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x20]
	lea eax,[edi+0xB8]
	push eax
	lea ecx,[ebx-0x3C]
	push ecx
	lea edx,[edi+0x5A]
	push edx
	lea eax,[ebx-0xBA]
	push eax
	lea ecx,[esi+0x10]
	push ecx
	call SetRect
	push 0
	push 0xFF
	push 0xC0015F90
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x38]
	push edi
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	push 0
	push edx
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x3C],0
	push eax
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x20]
	add esp,0x28
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x20],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
