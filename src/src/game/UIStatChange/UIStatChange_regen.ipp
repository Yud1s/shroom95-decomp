#include "regen.hpp"
// UIStatChange.ipp
#include "UIStatChange.hpp"

// GetStatCanvas
_SUB_EXCEPTION_HANDLER(46A6B0)
__SUB(0046A6B0, __cdecl, 85130,  _x_com_ptr<IWzCanvas>, unsigned long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46A6B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x60]
	cmp eax,0x200
	ja Block9

 Block1:
	je Block8

 Block2:
	sub eax,0x40
	je Block7

 Block3:
	sub eax,0x40
	je Block6

 Block4:
	sub eax,0x80
	jne Block13

 Block5:
	lea eax,[edi+4]
	jmp Block14

 Block6:
	mov eax,3
	jmp Block14

 Block7:
	mov eax,2
	jmp Block14

 Block8:
	mov eax,5
	jmp Block14

 Block9:
	cmp eax,0x800
	je Block12

 Block10:
	cmp eax,0x2000
	jne Block13

 Block11:
	mov eax,1
	jmp Block14

 Block12:
	xor eax,eax
	jmp Block14

 Block13:
	mov eax,dword ptr [esp+0x60]

 Block14:
	mov dword ptr [esp+0x60],edi
	push eax
	mov eax,dword ptr [esp+0x68]
	push eax
	lea ecx,[esp+0x68]
	push offset _S_UIUIWINDOW2IMGRE__9
	mov ebp,1
	push ecx
	mov dword ptr [esp+0x64],ebp
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0x10
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],2
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ebx,dword ptr [esp+0x60]
	push edi
	push edi
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x6C],3
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x68],4
	cmp dword ptr [_D_G_RM],edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],3
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],5
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x5C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov edi,8
	mov dword ptr [esp+0x14],ebp
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x3C],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block27:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x1C],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x1C]
	push eax
	call ebp

 Block31:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x2C]
	push edx
	call ebp

 Block35:
	mov byte ptr [esp+0x54],0
	test ebx,ebx
	je Block37

 Block36:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
