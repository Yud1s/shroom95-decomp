#include "regen.hpp"
// CtrlEditEx.ipp
#include "CtrlEditEx.hpp"

// CCtrlEditEx::~CCtrlEditEx
__SUB_CLASS_THIS0(000E3CB0, __thiscall, 80268,  CCtrlEditEx, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CCtrlEditEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CCtrlEditEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CCtrlEditEx::`vftable'{for `ZRefCounted'}
	jmp  CCtrlEdit::~CCtrlEdit
}
}
// CCtrlEditEx::CCtrlEditEx
__SUB_CLASS_THIS0(000E3C70, __thiscall, 80266,  CCtrlEditEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlEdit::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlEditEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlEditEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlEditEx::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlEditEx::OnMouseButton
__SUB_CLASS_THIS(000E3D10, __thiscall, 80270,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x201
	je Block2

 Block1:
	sub eax,2
	jne Block3

 Block2:
	mov dword ptr [ecx+0xB8],0

 Block3:
	mov dword ptr [esp+4],edx
	jmp  CCtrlEdit::OnMouseButton
}
}
// CCtrlEditEx::EndSwitching
__SUB_CLASS_THIS0(000E3D40, __thiscall, 80268,  CCtrlEditEx, void) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx+0xBC],eax
	je Block2

 Block1:
	mov dword ptr [ecx+0xBC],eax
	mov dword ptr [ecx+0xC0],eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ecx+0x5C],eax
	jmp  CCtrlWnd::InvalidateRect

 Block2:
	ret
}
}
// CCtrlEditEx::Update
__SUB_CLASS_THIS0(000E3CD0, __thiscall, 80268,  CCtrlEditEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	cmp dword ptr [esi+0xBC],0
	je Block3

 Block1:
	sub eax,dword ptr [esi+0xC0]
	test eax,eax
	jle Block3

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0xC0],0
	call CCtrlWnd::InvalidateRect

 Block3:
	mov ecx,esi
	pop esi
	jmp  CCtrlEdit::Update
}
}
// CCtrlEditEx::FilterString
_SUB_EXCEPTION_HANDLER(E3F90)
__SUB_CLASS_THIS(000E3F90, __thiscall, 80272,  CCtrlEditEx, ZXString<char>*, ZXString<char>*, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E3F90
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
	mov edi,ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x30],1
	cmp dword ptr [edi+0x84],ebp
	je Block27

 Block1:
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block27

 Block2:
	cmp byte ptr [eax],bl
	je Block27

 Block3:
	call timeGetTime
	push ebp
	push 1
	lea ecx,[esp+0x20]
	mov esi,eax
	mov dword ptr [esp+0x20],ebp
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S___39]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [esp+0x30],2
	cmp dword ptr [edi+0xBC],ebp
	je Block7

 Block4:
	mov edx,dword ptr [edi+0xC0]
	sub edx,esi
	test edx,edx
	jle Block7

 Block5:
	mov eax,dword ptr [edi+0x48]
	mov ecx,dword ptr [edi+0x5C]
	push eax
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],2
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x30],4
	mov dword ptr [esp+0x1C],ebp
	call ZXString<char>::GetLength
	test eax,eax
	jle Block20

 Block8:
	mov esi,dword ptr [esp+0x14]
	nop

 Block9:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,dword ptr [edi+0x5C]
	jne Block11

 Block10:
	lea eax,[esp+0x18]
	jmp Block12

 Block11:
	push ebp
	push 1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S___39]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]
	or ebx,2
	lea eax,[esp+0x14]
	mov byte ptr [esp+0x30],5
	mov dword ptr [esp+0x20],ebx

 Block12:
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor ecx,ecx

 Block15:
	push ecx
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::_Cat
	mov dword ptr [esp+0x30],4
	test bl,2
	je Block18

 Block16:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x20],ebx
	cmp esi,ebp
	je Block18

 Block17:
	lea edx,[esi-0xC]
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block18:
	inc dword ptr [esp+0x1C]
	lea ecx,[esp+0x3C]
	call ZXString<char>::GetLength
	cmp dword ptr [esp+0x1C],eax
	jl Block9

 Block19:
	mov esi,dword ptr [esp+0x24]

 Block20:
	mov edi,dword ptr [esp+0x38]
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	mov dword ptr [edi],ebp
	call ZXString<char>::op_assign
	or ebx,1
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0x30],2
	cmp esi,ebp
	je Block22

 Block21:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,edi
	jmp Block30

 Block27:
	mov esi,dword ptr [esp+0x38]
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,esi

 Block30:
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
// CCtrlEditEx::IsKindOf
__SUB_CLASS_THIS(000E3D80, __thiscall, 80278,  CCtrlEditEx, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlEditEx::ms_RTTI_CCtrlEditEx
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CCtrlEditEx::SetSwitchingChar
__SUB_CLASS_THIS(000E3F20, __thiscall, 80273,  CCtrlEditEx, void, char) {
__asm {

 Block0:
	push ecx
	push esi
	push 0
	mov esi,ecx
	call CCtrlEdit::ExtractSelection
	mov al,byte ptr [esp+0xC]
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],0
	mov byte ptr [esp+0x1C],al
	mov byte ptr [esp+0x1D],0
	call ZXString<char>::AssignCStr
	mov ecx,esi
	call CCtrlEdit::InsertString
	mov eax,dword ptr [esi+0x48]
	dec eax
	mov dword ptr [esi+0x5C],eax
	mov dword ptr [esi+0xBC],1
	call timeGetTime
	add eax,0x1F4
	mov ecx,esi
	mov dword ptr [esi+0xC0],eax
	call CCtrlWnd::InvalidateRect
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlEditEx::OnIMEResult
__SUB_CLASS_THIS(000E3DB0, __thiscall, 80271,  IUIMsgHandler, void, const char*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test esi,esi
	je Block3

 Block1:
	cmp byte ptr [esi],0
	je Block3

 Block2:
	lea ecx,[edi-4]
	call CCtrlEditEx::EndSwitching

 Block3:
	push esi
	mov ecx,edi
	call CCtrlEdit::OnIMEResult
	pop edi
	pop esi
	ret 4
}
}
// CCtrlEditEx::OnKey
// 4E3EA8
static uint8_t _SUB_E3DE0_LOOKUP_TABLE_0[81] = {
0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1, 2, 3, 7, 4, 
7, 7, 7, 7, 7, 5, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 7, 
6, 
};
__SUB_CLASS_THIS(000E3DE0, __thiscall, 80269, IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB8],0
	je Block18

 Block1:
	test ebp,ebp
	js Block18

 Block2:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push ebx
	push edi
	mov edi,ebp
	shr edi,4
	mov ebx,ebp
	push 0x10
	and edi,1
	and ebx,1
	call CInputSystem::IsKeyPressed
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xFFFFFFF8
	cmp ecx,0x50
	ja Block17

 Block3:
	movzx ecx,byte ptr [ecx+_SUB_E3DE0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block16
cmp ECX, 1
je Block13
cmp ECX, 2
je Block11
cmp ECX, 3
je Block8
cmp ECX, 4
je Block14
cmp ECX, 5
je Block4
cmp ECX, 6
je Block6
cmp ECX, 7
je Block17


 Block4:
	test ebx,ebx
	je Block17

 Block5:
	jmp Block16

 Block6:
	test edi,edi
	je Block17

 Block7:
	jmp Block16

 Block8:
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esi+0x44]
	mov eax,dword ptr [esi+0x58]
	mov dword ptr [esi+0x58],edx
	mov dword ptr [esi+0x44],eax
	jmp Block16

 Block10:
	mov eax,dword ptr [esi+0x44]
	mov dword ptr [esi+0x58],eax
	jmp Block16

 Block11:
	test edi,edi
	jne Block17

 Block12:
	jmp Block8

 Block13:
	test edi,edi
	jne Block17

 Block14:
	test eax,eax
	jne Block16

 Block15:
	mov ecx,dword ptr [esi+0x44]
	mov dword ptr [esi+0x58],ecx

 Block16:
	mov dword ptr [esi+0xB8],0

 Block17:
	pop edi
	pop ebx

 Block18:
	mov edx,dword ptr [esp+0xC]
	push ebp
	push edx
	mov ecx,esi
	call CCtrlEdit::OnKey
	pop esi
	pop ebp
	ret 8
}
}
// CCtrlEditEx::GetRTTI
__SUB_CLASS_THIS0(000E3CA0, __thiscall, 80277,  CCtrlEditEx, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlEditEx::ms_RTTI_CCtrlEditEx
	ret
}
}
// CCtrlEditEx::GetSwitchingChar
_SUB_EXCEPTION_HANDLER(E41E0)
__SUB_CLASS_THIS0(000E41E0, __thiscall, 80274,  CCtrlEditEx, char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E41E0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xBC],0
	jne Block2

 Block1:
	xor al,al
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x10
	ret

 Block2:
	mov eax,dword ptr [ecx+0x5C]
	mov edx,dword ptr [ecx+0x48]
	cmp eax,edx
	jge Block1

 Block3:
	push edx
	push eax
	lea eax,[esp+0x10]
	push eax
	add ecx,0x34
	call ZXString<char>::Mid
	push 1
	push 1
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::GetBuffer
	mov bl,byte ptr [eax]
	push 0xFFFFFFFF
	lea ecx,[esp+0xC]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov al,bl
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x10
	ret
}
}
