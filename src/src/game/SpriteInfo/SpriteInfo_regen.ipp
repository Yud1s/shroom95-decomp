#include "regen.hpp"
// SpriteInfo.ipp
#include "SpriteInfo.hpp"

// CommonSlot
_SUB_EXCEPTION_HANDLER(318160)
__SUB(00318160, __cdecl, 132764,  Ztl_bstr_t, wchar_t*, wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_318160
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
	mov esi,dword ptr [esp+0x30]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	cmp esi,ebx
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [esi-4]
	shr ecx,1

 Block3:
	mov ebp,dword ptr [esp+0x34]
	cmp ebp,ebx
	jne Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,dword ptr [ebp-4]
	shr eax,1

 Block6:
	test cl,1
	jne Block31

 Block7:
	test al,1
	jne Block31

 Block8:
	cmp ebp,ebx
	jne Block10

 Block9:
	xor edi,edi
	jmp Block11

 Block10:
	mov edi,dword ptr [ebp-4]
	shr edi,1

 Block11:
	cmp esi,ebx
	je Block14

 Block12:
	mov eax,dword ptr [esi-4]
	shr eax,1
	cmp edi,eax
	jae Block14

 Block13:
	mov edi,eax

 Block14:
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	cmp eax,ebx
	je Block16

 Block15:
	lea ecx,[edi+edi]
	mov dword ptr [eax],ecx
	add eax,4
	xor edx,edx
	mov word ptr [ecx+eax],dx
	mov ebx,eax

 Block16:
	cmp word ptr [esi],0
	mov edx,ebx
	je Block23

 Block17:
	cmp word ptr [ebp],0
	mov eax,ebp
	je Block22

 Block18:
	lea esp,[esp]

 Block19:
	mov ecx,dword ptr [esi]
	cmp ecx,dword ptr [eax]
	jne Block21

 Block20:
	mov dword ptr [edx],ecx
	add edx,4

 Block21:
	add eax,4
	cmp word ptr [eax],0
	jne Block19

 Block22:
	add esi,4
	cmp word ptr [esi],0
	jne Block17

 Block23:
	sub edx,ebx
	sar edx,1
	mov edi,edx
	lea eax,[edi+edi+6]
	push eax
	add ebx,0xFFFFFFFC
	push ebx
	call CoTaskMemRealloc
	mov esi,eax
	test esi,esi
	je Block26

 Block24:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	xor ecx,ecx
	add esi,4
	mov word ptr [eax+esi],cx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block27

 Block25:
	mov dword ptr [eax+4],0
	mov dword ptr [eax+8],1
	mov dword ptr [eax],esi
	jmp Block28

 Block26:
	push 0
	push 0x8007000E
	call _com_raise_error

 Block27:
	xor eax,eax

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	mov dword ptr [ecx],eax
	test eax,eax
	jne Block30

 Block29:
	push 0x8007000E
	call _com_issue_error

 Block30:
	mov eax,ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block31:
	push 0x22000006
	lea ecx,[esp+0x34]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x30]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x3C],edx
	call _CxxThrowException
	int 3
}
}
