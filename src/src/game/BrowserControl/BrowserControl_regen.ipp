#include "regen.hpp"
// BrowserControl.ipp
#include "BrowserControl.hpp"

// ATL__AtlAdvise
__SUB(00074A10, __stdcall, 146063,  HRESULT, IUnknown*, IUnknown*, const _GUID&, unsigned long*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	test eax,eax
	jne Block2

 Block1:
	mov eax,0x80070057
	pop ecx
	ret 0x10

 Block2:
	mov ecx,dword ptr [eax]
	push esi
	lea edx,[esp+4]
	push edx
	push offset __GUID_b196b284_bab4_101a_b69c_00aa00341d07
	push eax
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x18],0
	call eax
	mov esi,eax
	test esi,esi
	jl Block5

 Block3:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	lea edx,[esp+0xC]
	push edx
	mov edx,dword ptr [esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x10]
	call eax
	mov esi,eax
	test esi,esi
	jl Block5

 Block4:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [eax]
	push edx
	mov edx,dword ptr [esp+0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x14]
	call eax
	mov esi,eax

 Block5:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,esi
	pop esi
	pop ecx
	ret 0x10
}
}
// ADAD__Log
__SUB(00074670, __cdecl, 146060,  void, const char*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call OutputDebugStringA
	ret
}
}
// IsEqualGUID
__SUB(00074560, __cdecl, 146058,  int32_t, const _GUID&, const _GUID&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov eax,0x10
	push esi
	mov edi,edi

 Block1:
	mov esi,dword ptr [edx]
	cmp esi,dword ptr [ecx]
	jne Block4

 Block2:
	sub eax,4
	add ecx,4
	add edx,4
	cmp eax,4
	jae Block1

 Block3:
	xor eax,eax
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret

 Block4:
	movzx eax,byte ptr [edx]
	movzx esi,byte ptr [ecx]
	sub eax,esi
	jne Block8

 Block5:
	movzx eax,byte ptr [edx+1]
	movzx esi,byte ptr [ecx+1]
	sub eax,esi
	jne Block8

 Block6:
	movzx eax,byte ptr [edx+2]
	movzx esi,byte ptr [ecx+2]
	sub eax,esi
	jne Block8

 Block7:
	movzx eax,byte ptr [edx+3]
	movzx ecx,byte ptr [ecx+3]
	sub eax,ecx

 Block8:
	sar eax,0x1F
	or eax,1
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret
}
}
// ADAD__Log
__SUB(00074660, __cdecl, 93385,  void, const char*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call OutputDebugStringA
	ret
}
}
// ATL__AtlUnadvise
__SUB(00074AB0, __stdcall, 146065,  HRESULT, IUnknown*, const _GUID&, unsigned long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	test eax,eax
	jne Block2

 Block1:
	mov eax,0x80070057
	pop ecx
	ret 0xC

 Block2:
	mov ecx,dword ptr [eax]
	push esi
	lea edx,[esp+4]
	push edx
	push offset __GUID_b196b284_bab4_101a_b69c_00aa00341d07
	push eax
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x18],0
	call eax
	mov esi,eax
	test esi,esi
	jl Block5

 Block3:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	lea edx,[esp+0xC]
	push edx
	mov edx,dword ptr [esp+0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x10]
	call eax
	mov esi,eax
	test esi,esi
	jl Block5

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x18]
	call eax
	mov esi,eax

 Block5:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC
}
}
// A2WBSTR
_SUB_EXCEPTION_HANDLER(748A0)
__SUB(000748A0, __cdecl, 146061,  wchar_t*, const char*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_748A0
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
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	cmp eax,ecx
	je Block9

 Block1:
	mov ebx,dword ptr [esp+0x2C]
	cmp ebx,ecx
	je Block9

 Block2:
	mov dword ptr [esp+0x14],ecx
	push ecx
	push ecx
	push ebx
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x38],ecx
	call dword ptr [ZImports::_MultiByteToWideChar]
	mov edi,eax
	mov ebp,edi
	cmp ebx,0xFFFFFFFF
	jne Block4

 Block3:
	lea ebp,[edi-1]

 Block4:
	lea eax,[ebp+ebp+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	jne Block6

 Block5:
	lea ecx,[esp+0x14]
	call _atl__ATL_SAFE_ALLOCA_IMPLCAtlSafeAllocBufferManagerATLCCRTAllocatorCAtlSafeAllocBufferManagerATLCCRTAllocator
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret

 Block6:
	add ebp,ebp
	mov dword ptr [esi],ebp
	add esi,4
	mov ecx,0
	mov word ptr [esi+ebp],cx
	je Block5

 Block7:
	mov edx,dword ptr [esp+0x28]
	push edi
	push esi
	push ebx
	push edx
	push ecx
	push ecx
	call dword ptr [ZImports::_MultiByteToWideChar]
	cmp eax,edi
	je Block5

 Block8:
	add esi,0xFFFFFFFC
	push esi
	call CoTaskMemFree
	lea ecx,[esp+0x14]
	call _atl__ATL_SAFE_ALLOCA_IMPLCAtlSafeAllocBufferManagerATLCCRTAllocatorCAtlSafeAllocBufferManagerATLCCRTAllocator

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// ZStrUtil__Str
__SUB(000745D0, __cdecl, 146059,  char*, const char*, const char*, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+0xC],0
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	push eax
	push ecx
	call _strstr
	add esp,8
	ret

 Block2:
	push ebp
	push edi
	mov edi,dword ptr [esp+0xC]
	test edi,edi
	je Block19

 Block3:
	mov ebp,dword ptr [esp+0x10]
	test ebp,ebp
	je Block19

 Block4:
	mov dl,byte ptr [edi]
	test dl,dl
	je Block19

 Block5:
	cmp byte ptr [ebp],0
	je Block19

 Block6:
	push ebx
	push esi
	lea ebx,[ebx]

 Block7:
	mov al,byte ptr [ebp]
	mov esi,edi
	mov ecx,ebp
	test al,al
	je Block13

 Block8:
	jmp Block10

 Block10:
	mov bl,byte ptr [esi]
	inc esi
	cmp bl,al
	jne Block13

 Block11:
	mov al,byte ptr [ecx+1]
	inc ecx
	test al,al
	jne Block10

 Block12:
	pop esi
	pop ebx
	mov eax,edi
	pop edi
	pop ebp
	ret

 Block13:
	cmp byte ptr [ecx],0
	je Block12

 Block14:
	push edx
	call dword ptr [ZImports::_IsDBCSLeadByte]
	test eax,eax
	je Block16

 Block15:
	add edi,2
	jmp Block17

 Block16:
	inc edi

 Block17:
	mov dl,byte ptr [edi]
	test dl,dl
	jne Block7

 Block18:
	pop esi
	pop ebx
	pop edi
	xor eax,eax
	pop ebp
	ret

 Block19:
	pop edi
	xor eax,eax
	pop ebp
	ret
}
}
