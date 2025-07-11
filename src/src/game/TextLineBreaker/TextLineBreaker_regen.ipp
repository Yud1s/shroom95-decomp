#include "regen.hpp"
// TextLineBreaker.ipp
#include "TextLineBreaker.hpp"

// CTextLineBreaker::LineBreakText
_SUB_EXCEPTION_HANDLER(35FCC0)
__SUB_CLASS_THIS(0035FCC0, __thiscall, 15914,  CTextLineBreaker, int32_t, NakedParam<ZXString<char>>, ZArray<ZXString<char> >&, NakedParam<_x_com_ptr<IWzFont>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35FCC0
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
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	sete al
	test al,al
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],1
	jne Block35

 Block1:
	test eax,eax
	je Block35

 Block2:
	cmp dword ptr [eax-4],0
	je Block35

 Block3:
	mov ecx,dword ptr [esp+0x48]
	call ZArray<ZXString<char>>::RemoveAll
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],2
	call ZArray<long>::RemoveAll
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0
	mov edi,dword ptr [esp+0x44]
	push edi
	mov ebp,edi
	mov esi,edi
	call CharNextA
	mov ebx,eax
	cmp edi,ebx
	jae Block17

 Block4:
	cmp byte ptr [edi],0xD
	jne Block6

 Block5:
	mov esi,edi
	sub esi,ebp
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	inc esi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	lea esi,[edi+1]
	jmp Block16

 Block6:
	mov eax,ebx
	sub eax,ebp
	push eax
	mov ecx,esi
	sub ecx,ebp
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x50]
	call ZXString<char>::Substring
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],3
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block22

 Block7:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x48],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	je Block23

 Block8:
	mov byte ptr [esp+0x44],4
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x3C],3
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax+0xC]
	jl Block14

 Block13:
	mov esi,edi
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	sub esi,ebp
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov esi,edi

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push ebx
	mov edi,ebx
	call CharNextA
	mov ebx,eax
	cmp edi,ebx
	jb Block4

 Block17:
	mov dword ptr [esp+0x18],0
	mov edi,dword ptr [esp+0x14]
	mov bl,6
	mov byte ptr [esp+0x3C],bl
	xor esi,esi

 Block18:
	test edi,edi
	je Block28

 Block19:
	mov ecx,dword ptr [edi-4]
	cmp esi,ecx
	jae Block28

 Block20:
	mov eax,dword ptr [edi+esi*4]
	dec ecx
	cmp esi,ecx
	jne Block24

 Block21:
	push 0xFFFFFFFF
	push eax
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x50]
	call ZXString<char>::Substring
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block25

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [edi+esi*4+4]
	push ecx
	push eax
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x50]
	call ZXString<char>::Substring
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x40],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]

 Block25:
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	inc esi
	jmp Block18

 Block28:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],1
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	mov eax,1
	jmp Block40

 Block35:
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x50]
	add esp,4

 Block37:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test ecx,ecx
	je Block39

 Block38:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block39:
	xor eax,eax

 Block40:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0xC
}
}
