#include "regen.hpp"
// StdAfx.ipp
#include "StdAfx.hpp"

// PcInitialize
__SUB(00342A10, __cdecl, 131697,  HRESULT, const wchar_t*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push esi
	push edi
	mov edi,dword ptr [ebp+8]
	test edi,edi
	jne Block2

 Block1:
	mov edi,offset _S_PCOMDLL

 Block2:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	call dword ptr [ZImports::_LoadLibraryA]
	mov esi,eax
	test esi,esi
	jne Block4

 Block3:
	mov eax,0x800401F8
	lea esp,[ebp-0xC]
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block4:
	call _LoadProc
	test eax,eax
	jne Block6

 Block5:
	call PcUninitialize
	mov eax,0x800401F9
	lea esp,[ebp-0xC]
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block6:
	push offset _S_PCINITMODULE
	push esi
	call dword ptr [ZImports::_GetProcAddress]
	test eax,eax
	jne Block8

 Block7:
	push esi
	mov edi,0x800401F9
	call dword ptr [ZImports::_FreeLibrary]
	mov eax,edi
	lea esp,[ebp-0xC]
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block8:
	call eax
	mov edi,eax
	test edi,edi
	jge Block10

 Block9:
	push esi
	call dword ptr [ZImports::_FreeLibrary]
	mov eax,edi
	lea esp,[ebp-0xC]
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block10:
	push offset _D__G_NPCOMMODULERE
	call dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [_D__G_HPCOMMODULE],esi
	xor eax,eax
	lea esp,[ebp-0xC]
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// ZExceptionHandler::GetLogicalAddress
__SUB(003425C0, __cdecl, 78777,  int32_t, void*, char*, unsigned long, unsigned long&, unsigned long&) {
__asm {

 Block0:
	sub esp,0x1C
	push edi
	mov edi,dword ptr [esp+0x24]
	push 0x1C
	lea eax,[esp+8]
	push eax
	push edi
	call VirtualQuery
	test eax,eax
	jne Block2

 Block1:
	pop edi
	add esp,0x1C
	ret

 Block2:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push esi
	mov esi,dword ptr [esp+0xC]
	push ecx
	push edx
	push esi
	call GetModuleFileNameA
	test eax,eax
	jne Block4

 Block3:
	pop esi
	pop edi
	add esp,0x1C
	ret

 Block4:
	mov eax,dword ptr [esi+0x3C]
	movzx ecx,word ptr [eax+esi+0x14]
	add eax,esi
	push ebx
	push ebp
	movzx ebp,word ptr [eax+6]
	sub edi,esi
	xor ebx,ebx
	lea ecx,[ecx+eax+0x18]
	test ebp,ebp
	jbe Block11

 Block5:
	lea eax,[ecx+8]
	mov edi,edi

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+8]
	mov esi,dword ptr [eax+4]
	cmp ecx,edx
	jae Block8

 Block7:
	mov ecx,edx

 Block8:
	cmp esi,edi
	ja Block10

 Block9:
	add ecx,esi
	cmp edi,ecx
	jbe Block12

 Block10:
	inc ebx
	add eax,0x28
	cmp ebx,ebp
	jb Block6

 Block11:
	pop ebp
	pop ebx
	pop esi
	xor eax,eax
	pop edi
	add esp,0x1C
	ret

 Block12:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	inc ebx
	pop ebp
	mov dword ptr [edx],ebx
	sub edi,esi
	pop ebx
	mov dword ptr [eax],edi
	pop esi
	mov eax,1
	pop edi
	add esp,0x1C
	ret
}
}
// __ZAPILoader::ZAPILoader
__SUB_CLASS_THIS0(00343070, __thiscall, 89449,  __ZAPILoader, void) {
__asm {

 Block0:
	sub esp,0x168
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x164],eax
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	push eax
	push offset _S___39
	mov edi,ecx
	call dword ptr [ZImports::_FindFirstFileA]
	mov esi,dword ptr [ZImports::_lstrcmpiA]
	mov ebx,dword ptr [ZImports::_FindNextFileA]
	mov ebp,eax
	jmp Block2

 Block2:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_10__9
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block3:
	push 0
	lea eax,[esp+0x154]
	push offset _S_RAW_10__8
	push eax
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call esi
	test eax,eax
	je Block20

 Block4:
	push 0
	lea edx,[esp+0x154]
	push offset _S_RAW_10__7
	push edx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	call esi
	test eax,eax
	je Block20

 Block5:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_10__6
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block6:
	push 0
	lea eax,[esp+0x154]
	push offset _S_RAW_10__5
	push eax
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call esi
	test eax,eax
	je Block20

 Block7:
	push 0
	lea edx,[esp+0x154]
	push offset _S_RAW_10__4
	push edx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	call esi
	test eax,eax
	je Block20

 Block8:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_E__2
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block9:
	push 0
	lea eax,[esp+0x154]
	push offset _S_RAW_10__3
	push eax
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call esi
	test eax,eax
	je Block20

 Block10:
	push 0
	lea edx,[esp+0x154]
	push offset _S_RAW_E__1
	push edx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	call esi
	test eax,eax
	je Block20

 Block11:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_D__1
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block12:
	push 0
	lea eax,[esp+0x154]
	push offset _S_RAW_D
	push eax
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call esi
	test eax,eax
	je Block20

 Block13:
	push 0
	lea edx,[esp+0x154]
	push offset _S_RAW_10__2
	push edx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	call esi
	test eax,eax
	je Block20

 Block14:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_5
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block15:
	push 0
	lea eax,[esp+0x154]
	push offset _S_RAW_10__1
	push eax
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call esi
	test eax,eax
	je Block20

 Block16:
	push 0
	lea edx,[esp+0x154]
	push offset _S_RAW_10
	push edx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea eax,[esp+0x40]
	push eax
	call esi
	test eax,eax
	je Block20

 Block17:
	push 0
	lea ecx,[esp+0x154]
	push offset _S_RAW_C
	push ecx
	call CIGCipher::innoDecryptStr
	add esp,0xC
	push eax
	lea edx,[esp+0x40]
	push edx
	call esi
	test eax,eax
	je Block20

 Block18:
	lea eax,[esp+0x10]
	push eax
	push ebp
	call ebx
	test eax,eax
	jne Block2

 Block19:
	lea ecx,[edi+0x24]
	push ecx
	push 0xBAADF00D
	push 0xBAADF00D
	mov ecx,edi
	call _anon_ZAPILoader::MakeRawKey
	mov ecx,edi
	call _anon_ZAPILoader::InitDecoderInfo
	mov ecx,edi
	call _anon_ZAPILoader::LoadLibraries
	mov ecx,edi
	call _anon_ZAPILoader::LoadAPI
	mov ecx,dword ptr [esp+0x174]
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x168
	ret

 Block20:
	mov ecx,edi
	call _anon_ZAPILoader::ShowErrorMessageAndExit
	int 3
}
}
// __ZAPILoader::ShowErrorMessageAndExit
__SUB_CLASS_THIS0(00341700, __thiscall, 89450,  __ZAPILoader, void) {
__asm {

 Block0:
	push 0
	push offset _S_ERRORMESSAGE
	push offset _S_RAW_4D
	push 0
	call dword ptr [ZImports::_MessageBoxA]
	push 0
	call _exit
	int 3
}
}
// ZExceptionHandler::GenerateMiniDump
__SUB_CLASS_THIS(00342110, __thiscall, 78784,  ZExceptionHandler, int32_t, _EXCEPTION_POINTERS*) {
__asm {

 Block0:
	sub esp,0x124
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x120],eax
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x120],0
	push edi
	mov edi,dword ptr [esp+0x130]
	je Block2

 Block1:
	xor eax,eax
	jmp Block14

 Block2:
	cmp dword ptr [ebx+0x148],0
	je Block1

 Block3:
	push esi
	push 0x104
	lea eax,[esp+0x2C]
	push eax
	push 0
	call GetModuleFileNameA
	lea ecx,[esp+0x28]
	dec ecx
	mov esi,eax
	add esi,ecx
	lea edx,[esp+0x28]
	cmp esi,edx
	jb Block9

 Block4:
	lea esp,[esp]

 Block5:
	mov al,byte ptr [esi]
	cmp al,0x2F
	je Block9

 Block6:
	cmp al,0x5C
	je Block9

 Block7:
	cmp al,0x2E
	je Block9

 Block8:
	dec esi
	lea eax,[esp+0x28]
	cmp esi,eax
	jae Block5

 Block9:
	lea ecx,[esp+0xC]
	push ecx
	call GetLocalTime
	lea edx,[esp+0x28]
	cmp esi,edx
	jae Block11

 Block10:
	inc esi

 Block11:
	movzx eax,word ptr [esp+0x18]
	movzx ecx,word ptr [esp+0x16]
	movzx edx,word ptr [esp+0x14]
	push eax
	movzx eax,word ptr [esp+0x16]
	push ecx
	movzx ecx,word ptr [esp+0x16]
	push edx
	movzx edx,word ptr [esp+0x18]
	push eax
	push ecx
	push edx
	push offset _S_D02D02D02D02D02D
	push esi
	call wsprintfA
	add esp,0x20
	push 0
	push 0
	push 2
	push 0
	push 3
	push 0xC0000000
	lea eax,[esp+0x40]
	push eax
	call CreateFileA
	mov esi,eax
	test edi,edi
	je Block13

 Block12:
	call GetCurrentThreadId
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],1

 Block13:
	push 0
	neg edi
	push 0
	sbb edi,edi
	lea ecx,[esp+0x24]
	and edi,ecx
	push edi
	push 0x100
	push esi
	call GetCurrentProcessId
	push eax
	call GetCurrentProcess
	mov edx,dword ptr [ebx+0x148]
	push eax
	call edx
	push esi
	call CloseHandle
	mov eax,1
	pop esi

 Block14:
	mov ecx,dword ptr [esp+0x128]
	pop edi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x124
	ret 4
}
}
// __ZAPILoader::DecodePackage
__SUB_CLASS_THIS(00342B30, __thiscall, 89455,  __ZAPILoader, uint32_t, const void*, uint32_t&, void*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [ebx]
	add esi,dword ptr [esp+0xC]
	push edi
	push 1
	push esi
	lea eax,[esp+0x18]
	push eax
	mov edi,ecx
	call _anon_ZAPILoader::_Decode
	push 1
	inc esi
	push esi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call _anon_ZAPILoader::_Decode
	mov edx,dword ptr [esp+0x18]
	lea eax,[esi+1]
	movzx esi,byte ptr [esp+0x14]
	push esi
	push eax
	push edx
	mov ecx,edi
	call _anon_ZAPILoader::_Decode
	movzx eax,byte ptr [esp+0x10]
	add esi,2
	add dword ptr [ebx],esi
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// ZtlEnterFatalSection
__SUB(00341C00, __cdecl, 131690,  void, ZFatalSectionData*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block5

 Block1:
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block5

 Block2:
	push edi
	mov edi,dword ptr [ZImports::_Sleep]

 Block3:
	push 0
	call edi
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block3

 Block4:
	pop edi

 Block5:
	pop esi
	ret
}
}
// __ZAPILoader::LoadAPI
__SUB_CLASS_THIS0(00342E10, __thiscall, 89450,  __ZAPILoader, void) {
__asm {

 Block0:
	sub esp,0x114
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x110],eax
	push ebx
	mov ebx,dword ptr [ZImports::_GetProcAddress]
	push ebp
	push esi
	push edi
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov edi,offset LoadLibraryA
	mov ebp,0xF9B

 Block1:
	xor eax,eax
	push 0xFE
	push eax
	lea ecx,[esp+0x2A]
	push ecx
	mov word ptr [esp+0x2C],ax
	call _memset
	add esp,0xC
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x14]
	push eax
	push offset _D_S_AAPIINFO
	mov ecx,esi
	call _anon_ZAPILoader::DecodePackage
	mov eax,dword ptr [esi+eax*4]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	call ebx
	mov dword ptr [edi],eax
	add edi,4
	cmp dword ptr [esp+0x10],ebp
	jb Block1

 Block2:
	push 0
	call GetModuleHandleA
	mov ebp,eax
	xor eax,eax
	mov ecx,1
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xBC],ecx
	mov dword ptr [esi+0xC0],ecx
	mov dword ptr [esp+0x10],eax
	lea edi,[esp+0x14]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push 0xFE
	push eax
	lea eax,[esp+0x2A]
	xor edx,edx
	push eax
	mov word ptr [esp+0x2C],dx
	call _memset
	add esp,0xC
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x14]
	push edx
	push offset _D_S_AZTLTASKMEMFUN
	mov ecx,esi
	call _anon_ZAPILoader::DecodePackage
	lea eax,[esp+0x20]
	push eax
	push ebp
	call ebx
	mov dword ptr [edi],eax
	add edi,4
	cmp dword ptr [esp+0x10],0x3D
	jb Block3

 Block5:
	mov edx,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	test edx,edx
	je Block9

 Block6:
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block9

 Block7:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block9

 Block8:
	mov dword ptr [CoTaskMemAlloc],edx
	mov dword ptr [CoTaskMemRealloc],ecx
	mov dword ptr [CoTaskMemFree],eax

 Block9:
	mov ecx,dword ptr [esp+0x110]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x114
	ret
}
}
// __ZAPILoader::InitDecoderInfo
__SUB_CLASS_THIS0(00341720, __thiscall, 89450,  __ZAPILoader, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+0xA8],eax
	mov dword ptr [ecx+0xAC],eax
	mov dword ptr [ecx+0xB8],eax
	mov eax,1
	mov dword ptr [ecx+0xBC],eax
	mov dword ptr [ecx+0xC0],eax
	ret
}
}
// ZExceptionHandler::Report
__SUB_CLASS(00341EA0, __cdecl, 78783,  ZExceptionHandler, int32_t, const char*, none) {
__asm {

 Block0:
	sub esp,0x408
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x404],eax
	mov ecx,dword ptr [esp+0x410]
	push esi
	push edi
	mov edi,dword ptr [esp+0x414]
	lea eax,[esp+0x41C]
	push eax
	push ecx
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_wvsprintfA]
	mov edx,dword ptr [edi+0x114]
	push 0
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	push esi
	lea ecx,[esp+0x18]
	push ecx
	push edx
	call WriteFile
	mov ecx,dword ptr [esp+0x40C]
	pop edi
	mov eax,esi
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x408
	ret
}
}
// ZExceptionHandler::IntelStackWalk
__SUB_CLASS_THIS(00342670, __thiscall, 78781,  ZExceptionHandler, void, _CONTEXT*) {
__asm {

 Block0:
	sub esp,0x110
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x10C],eax
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x120]
	push edi
	mov edi,ecx
	push offset _S_CALLSTACK
	push edi
	call ZExceptionHandler::Report
	push offset _S_ADDRESSFRAMELOGI
	push edi
	call ZExceptionHandler::Report
	mov ebx,dword ptr [esi+0xB8]
	mov esi,dword ptr [esi+0xB4]
	push 0x103
	xor ebp,ebp
	lea eax,[esp+0x2D]
	push ebp
	push eax
	mov byte ptr [esp+0x34],0
	call _memset
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push 0x104
	lea eax,[esp+0x40]
	push eax
	push ebx
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x44],ebp
	call ZExceptionHandler::GetLogicalAddress
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]
	lea ecx,[esp+0x48]
	push ecx
	push edx
	push eax
	push esi
	push ebx
	push offset _S_08X08X04X08XS
	push edi
	call ZExceptionHandler::Report
	mov ebx,dword ptr [esi]
	mov ebp,dword ptr [esi+4]
	add esp,0x4C
	mov eax,esi
	test bl,3
	jne Block4

 Block1:
	cmp ebx,eax
	jbe Block4

 Block2:
	push 8
	push ebx
	call dword ptr [ZImports::_IsBadWritePtr]
	test eax,eax
	jne Block4

 Block3:
	push 0x103
	xor esi,esi
	lea ecx,[esp+0x1D]
	push esi
	push ecx
	mov byte ptr [esp+0x24],al
	call _memset
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x104
	lea ecx,[esp+0x30]
	push ecx
	push ebp
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x34],esi
	call ZExceptionHandler::GetLogicalAddress
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x38]
	push edx
	push eax
	push ecx
	push ebx
	push ebp
	push offset _S_08X08X04X08XS
	push edi
	call ZExceptionHandler::Report
	mov ebp,dword ptr [ebx+4]
	mov eax,ebx
	mov ebx,dword ptr [ebx]
	add esp,0x3C
	test bl,3
	je Block1

 Block4:
	mov ecx,dword ptr [esp+0x11C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x110
	ret 4
}
}
// __ZAPILoader::LoadLibraries
__SUB_CLASS_THIS0(00341750, __thiscall, 89450,  __ZAPILoader, void) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [ZImports::_LoadLibraryA]
	push esi
	push edi
	mov esi,ecx
	mov edi,offset _D_S_ASDLLNAME
	sub edi,esi
	mov ebx,9

 Block1:
	mov eax,dword ptr [edi+esi]
	push eax
	call ebp
	mov dword ptr [esi],eax
	add esi,4
	sub ebx,1
	jne Block1

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// ZExceptionHandler::RawUnhandledExceptionFilter
__SUB(00343380, __stdcall, 78772,  long, _EXCEPTION_POINTERS*) {
__asm {

 Block0:
	mov ecx,offset _D__G_ZEH
	jmp  ZExceptionHandler::UnhandledExceptionFilter
}
}
// __ZAPILoader::MakeRawKey
__SUB_CLASS_THIS(00341780, __thiscall, 89453,  __ZAPILoader, void, uint64_t, __ZAPILoader::RAWKEY&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov edx,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x1C]
	mov eax,edx
	shr eax,4
	xor eax,ebx
	and eax,0xF0F0F0F
	xor ebx,eax
	shl eax,4
	xor edx,eax
	mov eax,ebx
	shr eax,4
	xor eax,edx
	and eax,0x1010101
	xor edx,eax
	shl eax,4
	xor ebx,eax
	mov eax,ebx
	shr eax,9
	xor eax,ebx
	and eax,0x550055
	mov ecx,eax
	shl ecx,9
	xor ecx,eax
	xor ebx,ecx
	mov eax,edx
	shr eax,9
	xor eax,edx
	and eax,0x550055
	mov ecx,eax
	shl ecx,9
	xor ecx,eax
	xor edx,ecx
	mov eax,ebx
	shr eax,0x12
	xor eax,ebx
	and eax,0x3333
	mov ecx,eax
	shl ecx,0x12
	xor ecx,eax
	mov eax,edx
	shr eax,0x12
	xor eax,edx
	and eax,0x3333
	xor ebx,ecx
	mov ecx,eax
	shl ecx,0x12
	xor ecx,eax
	xor edx,ecx
	mov eax,edx
	shr eax,0x10
	xor eax,edx
	and eax,0xFF
	mov ecx,eax
	shl ecx,0x10
	xor ecx,eax
	mov eax,dword ptr [esp+0x24]
	xor edx,ecx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x10],0x10
	jmp Block2

 Block2:
	and ebx,0xFFFFFFF
	and edx,0xFFFFFFF
	test dword ptr [esp+0x24],0x7EFC
	mov ecx,ebx
	mov eax,edx
	je Block4

 Block3:
	shl ecx,0x1A
	shr ebx,2
	shl eax,0x1A
	shr edx,2
	jmp Block5

 Block4:
	shl ecx,0x1B
	shr ebx,1
	shl eax,0x1B
	shr edx,1

 Block5:
	or edx,eax
	or ebx,ecx
	mov ecx,ebx
	shr ecx,0x10
	movzx esi,cl
	mov eax,ebx
	shr eax,8
	movzx eax,al
	mov edi,eax
	shr edi,5
	movzx ecx,bl
	mov dword ptr [esp+0x14],ecx
	and ecx,0xC0
	or ecx,edi
	shr ecx,2
	mov edi,ebx
	shr edi,0x18
	and edi,0xE
	or ecx,edi
	mov ecx,dword ptr [ecx*4+_D_S_AADWP2+768]
	mov edi,esi
	shr edi,5
	and edi,4
	mov ebp,esi
	and ebp,0x40
	or edi,ebp
	shr edi,1
	shr eax,1
	and eax,0x3F
	and esi,0x1D
	or edi,esi
	or ecx,dword ptr [edi*4+_D_S_AADWP2+512]
	movzx edi,dl
	or ecx,dword ptr [eax*4+_D_S_AADWP2+256]
	mov eax,dword ptr [esp+0x14]
	and eax,0x3F
	or ecx,dword ptr [eax*4+_D_S_AADWP2]
	mov dword ptr [esp+0x14],edi
	shr edi,4
	mov eax,edx
	shr eax,0x10
	movzx esi,al
	and edi,8
	mov ebp,esi
	and ebp,0xC0
	or edi,ebp
	shr edi,2
	mov eax,edx
	shr eax,8
	movzx eax,al
	mov ebp,edx
	shr ebp,0x18
	and ebp,0xD
	or edi,ebp
	mov ebp,eax
	and eax,0x3D
	shl dword ptr [esp+0x24],1
	shr ebp,6
	and ebp,2
	or ebp,eax
	mov eax,dword ptr [edi*4+0xB56E78]
	or eax,dword ptr [ebp*4+0xB56C78]
	mov edi,dword ptr [esp+0x14]
	and edi,0x3F
	or eax,dword ptr [edi*4+0xB56B78]
	and esi,0x3F
	or eax,dword ptr [esi*4+0xB56D78]
	movzx esi,cx
	mov edi,eax
	shl edi,0x10
	or edi,esi
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi],edi
	and eax,0xFFFF0000
	shr ecx,0x10
	add esi,4
	or eax,ecx
	mov dword ptr [esi],eax
	add esi,4
	sub dword ptr [esp+0x10],1
	mov dword ptr [esp+0x1C],esi
	jne Block2

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0xC
}
}
// ZExceptionHandler::GenerateExceptionReport
__SUB_CLASS_THIS(00342B90, __thiscall, 78774,  ZExceptionHandler, void, _EXCEPTION_POINTERS*) {
__asm {

 Block0:
	sub esp,0x120
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x11C],eax
	push ebx
	mov ebx,dword ptr [esp+0x128]
	push esi
	push edi
	lea eax,[esp+0x10]
	push eax
	mov edi,ecx
	call GetLocalTime
	movzx ecx,word ptr [esp+0x1E]
	movzx edx,word ptr [esp+0x1C]
	movzx eax,word ptr [esp+0x1A]
	push ecx
	movzx ecx,word ptr [esp+0x1C]
	push edx
	movzx edx,word ptr [esp+0x1E]
	push eax
	movzx eax,word ptr [esp+0x1E]
	push ecx
	movzx ecx,word ptr [esp+0x20]
	push edx
	push eax
	push ecx
	push offset _S_DDD02D02D02D03D
	push edi
	call ZExceptionHandler::Report
	add esp,0x24
	call GetCurrentThreadId
	push eax
	call GetCurrentProcessId
	push eax
	push offset _S_PIDXTIDX
	push edi
	call ZExceptionHandler::Report
	mov esi,dword ptr [ebx]
	mov edx,dword ptr [esi]
	push edx
	call ZExceptionHandler::GetExceptionString
	push eax
	mov eax,dword ptr [esi]
	push eax
	push offset _S_EXCEPTIONCODE08X
	push edi
	call ZExceptionHandler::Report
	add esp,0x24
	cmp dword ptr [esi],0xE8000001
	jne Block3

 Block1:
	cmp dword ptr [esi+0x10],0
	je Block3

 Block2:
	mov ecx,dword ptr [esi+0x14]
	push ecx
	push offset _S_WITHTIDLX
	push edi
	call ZExceptionHandler::Report
	add esp,0xC

 Block3:
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esi+0xC]
	lea eax,[esp+0x10]
	push eax
	push 0x104
	lea ecx,[esp+0x30]
	push ecx
	push edx
	call ZExceptionHandler::GetLogicalAddress
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esi+0xC]
	push ecx
	push edx
	push eax
	push offset _S_FAULTADDRESS08X0
	push edi
	call ZExceptionHandler::Report
	mov esi,dword ptr [ebx+4]
	push offset _S_REGISTERS
	push edi
	call ZExceptionHandler::Report
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [esi+0xA0]
	mov eax,dword ptr [esi+0xA8]
	push ecx
	mov ecx,dword ptr [esi+0xAC]
	push edx
	mov edx,dword ptr [esi+0xA4]
	push eax
	mov eax,dword ptr [esi+0xB0]
	push ecx
	push edx
	push eax
	push offset _S_EAX08XEBX08XECX0
	push edi
	call ZExceptionHandler::Report
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [esi+0xBC]
	add esp,0x54
	push ecx
	push edx
	push offset _S_CSEIP04X08X
	push edi
	call ZExceptionHandler::Report
	mov eax,dword ptr [esi+0xB4]
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [esi+0xC8]
	push eax
	push ecx
	push edx
	push offset _S_SSESP04X08XEBP08
	push edi
	call ZExceptionHandler::Report
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [esi+0x90]
	mov edx,dword ptr [esi+0x94]
	push eax
	mov eax,dword ptr [esi+0x98]
	push ecx
	push edx
	push eax
	push offset _S_DS04XES04XFS04XG
	push edi
	call ZExceptionHandler::Report
	mov ecx,dword ptr [esi+0xC0]
	push ecx
	push offset _S_FLAGS08X
	push edi
	call ZExceptionHandler::Report
	add esp,0x48
	mov ecx,edi
	call ZExceptionHandler::InitDbgHelpFunctions
	test eax,eax
	jne Block5

 Block4:
	push offset _S_DBGHELPDLLORITSE
	push edi
	call ZExceptionHandler::Report
	add esp,8
	push esi
	mov ecx,edi
	call ZExceptionHandler::IntelStackWalk
	jmp Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZExceptionHandler::GenerateMiniDump
	push esi
	mov ecx,edi
	call ZExceptionHandler::DbgHelpStackWalk
	mov edx,dword ptr [edi+0x128]
	mov eax,dword ptr [edi+0x130]
	push edx
	call eax
	push offset _S___4
	push edi
	call ZExceptionHandler::Report
	add esp,8

 Block6:
	mov ecx,dword ptr [esp+0x128]
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x120
	ret 4
}
}
// ZExceptionHandler::UnhandledExceptionFilter
__SUB_CLASS_THIS(00342F50, __thiscall, 78773,  ZExceptionHandler, long, _EXCEPTION_POINTERS*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [ZImports::_InterlockedExchange]
	mov esi,ecx
	push 1
	lea ebx,[esi+8]
	push ebx
	call edi
	test eax,eax
	je Block2

 Block1:
	push 0x64
	call Sleep
	push 1
	push ebx
	call edi
	test eax,eax
	jne Block1

 Block2:
	mov eax,dword ptr [esi+0x124]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[esi+0xC]
	push ecx
	push 0
	call eax
	add esp,8

 Block4:
	push esi
	call ZtlEnterFatalSection
	add esp,4
	xor edx,edx
	cmp dword ptr [esi+0x118],edx
	push 0
	sete dl
	push 0x80000000
	lea edi,[esi+0xC]
	lea edx,[edx+edx+2]
	push edx
	push 0
	push 0
	push 0x40000000
	push edi
	call CreateFileA
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esi+0x114],eax
	cmp eax,0xFFFFFFFF
	je Block8

 Block5:
	cmp dword ptr [esi+0x118],0
	jne Block7

 Block6:
	push 2
	push 0
	push 0
	push eax
	call SetFilePointer

 Block7:
	push ebp
	mov ecx,esi
	call ZExceptionHandler::GenerateExceptionReport
	mov eax,dword ptr [esi+0x114]
	push eax
	call CloseHandle

 Block8:
	mov eax,dword ptr [esi+0x124]
	mov dword ptr [esi+0x114],0
	test eax,eax
	je Block10

 Block9:
	push edi
	push 1
	call eax
	add esp,8

 Block10:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block12

 Block11:
	mov dword ptr [esi],0

 Block12:
	mov dword ptr [ebx],0
	lea esp,[esp]

 Block13:
	push 0x3E8
	call Sleep
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	jne Block13

 Block14:
	mov ecx,dword ptr [esi+0x110]
	xor eax,eax
	test ecx,ecx
	je Block16

 Block15:
	push ebp
	call ecx

 Block16:
	cmp dword ptr [esi+0x11C],0
	pop edi
	pop esi
	pop ebp
	pop ebx
	je Block18

 Block17:
	mov eax,1

 Block18:
	ret 4
}
}
// _LoadProc
__SUB(00341690, __cdecl, 131683,  int32_t, HINSTANCE__*) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [ZImports::_GetProcAddress]
	push offset _S_PCCREATEOBJECT
	push esi
	call edi
	push offset _S_PCFREEUNUSEDLIBR
	push esi
	mov dword ptr [_D__G_APFNPCOMAPIS],eax
	call edi
	push offset _S_PCSERIALIZEOBJEC
	push esi
	mov dword ptr [_D__G_APFNPCOMAPIS+4],eax
	call edi
	push offset _S_PCSERIALIZESTRIN
	push esi
	mov dword ptr [_D__G_APFNPCOMAPIS+8],eax
	call edi
	push offset _S_PCROOTNAMESPACE
	push esi
	mov dword ptr [_D__G_APFNPCOMAPIS+12],eax
	call edi
	mov dword ptr [_D__G_APFNPCOMAPIS+16],eax
	xor eax,eax
	pop edi
	jmp Block2

 Block2:
	cmp dword ptr [eax+_D__G_APFNPCOMAPIS],0
	je Block5

 Block3:
	add eax,4
	cmp eax,0x14
	jb Block2

 Block4:
	mov eax,1
	ret

 Block5:
	xor eax,eax
	ret
}
}
// __ZAPILoader::_Decode
__SUB_CLASS_THIS(003422C0, __thiscall, 89457,  __ZAPILoader, void, unsigned char*, const unsigned char*, uint32_t) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xB8]
	push esi
	lea ecx,[ebp+0xA8]
	push edi
	mov dword ptr [esp+0x10],ebp
	lea edi,[ebp+0xB0]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block14

 Block1:
	mov ebx,dword ptr [esp+0x30]
	mov esi,8
	sub esi,eax
	cmp esi,ebx
	jbe Block3

 Block2:
	mov esi,ebx

 Block3:
	mov edx,eax
	test esi,esi
	jbe Block8

 Block4:
	mov ebx,edi
	mov edi,dword ptr [esp+0x28]
	lea eax,[edx+ecx]
	sub ebx,ecx
	add edx,esi
	mov dword ptr [esp+0x18],esi
	mov esi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x1C],edx
	jmp Block6

 Block6:
	mov dl,byte ptr [esi]
	mov byte ptr [ebx+eax],dl
	mov cl,byte ptr [eax]
	xor cl,dl
	mov byte ptr [edi],cl
	mov ecx,1
	sub dword ptr [esp+0x30],ecx
	inc esi
	add edi,ecx
	add eax,ecx
	sub dword ptr [esp+0x18],ecx
	jne Block6

 Block7:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x30]
	jmp Block9

 Block8:
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x28]

 Block9:
	cmp edx,8
	jne Block11

 Block10:
	mov edx,dword ptr [ebp+0xB0]
	mov eax,dword ptr [ebp+0xB4]
	mov dword ptr [ecx],edx
	mov dword ptr [ecx+4],eax
	mov dword ptr [ebp+0xB8],0
	jmp Block12

 Block11:
	mov dword ptr [ebp+0xB8],edx

 Block12:
	test ebx,ebx
	je Block32

 Block13:
	jmp Block15

 Block14:
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x28]

 Block15:
	mov eax,dword ptr [ebp+0xBC]
	mov edx,dword ptr [ebp+0xC0]
	mov ebx,dword ptr [ecx]
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x28],edx
	xor eax,eax
	xor edx,edx
	mov dword ptr [esp+0x1C],ebx
	mov ebx,dword ptr [ecx+4]
	cmp dword ptr [esp+0x30],eax
	je Block25

 Block16:
	jmp Block18

 Block18:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x1C]
	cmp eax,1
	je Block21

 Block19:
	sub dword ptr [esp+0x2C],1
	jne Block22

 Block20:
	mov dword ptr [esp+0x2C],eax

 Block21:
	lea edx,[ebp+0x24]
	push edx
	push ebx
	push ecx
	mov ecx,ebp
	call _anon_ZAPILoader::Decode
	jmp Block23

 Block22:
	mov ebp,ebx
	shld ebp,ecx,7
	mov eax,ebx
	shr eax,0x19
	shl ecx,7
	xor edx,edx
	or eax,ecx
	or edx,ebp
	mov ebp,dword ptr [esp+0x10]

 Block23:
	cmp dword ptr [esp+0x30],8
	jb Block25

 Block24:
	mov ecx,dword ptr [esi]
	mov ebx,dword ptr [esi+4]
	mov ebp,ebx
	xor ebp,edx
	mov dword ptr [esp+0x1C],ecx
	xor ecx,eax
	mov dword ptr [edi+4],ebp
	mov ebp,dword ptr [esp+0x10]
	mov dword ptr [edi],ecx
	add esi,8
	add edi,8
	sub dword ptr [esp+0x30],8
	jne Block18

 Block25:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [ebp+0xBC],ecx
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	jne Block27

 Block26:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax],edx
	pop ebx
	add esp,0x14
	ret 0xC

 Block27:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [ebx],eax
	xor eax,eax
	mov dword ptr [ebx+4],edx
	test ecx,ecx
	jbe Block31

 Block28:
	lea edx,[ebp+0xB0]
	mov eax,ebx
	sub edx,ebx
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x2C],ecx

 Block29:
	mov cl,byte ptr [esi]
	mov byte ptr [eax+edx],cl
	mov bl,byte ptr [eax]
	xor bl,cl
	mov byte ptr [edi],bl
	inc esi
	inc edi
	inc eax
	sub dword ptr [esp+0x30],1
	jne Block29

 Block30:
	mov eax,dword ptr [esp+0x2C]

 Block31:
	mov dword ptr [ebp+0xB8],eax

 Block32:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// ZExceptionHandler::InitDbgHelpFunctions
__SUB_CLASS_THIS0(00341F10, __thiscall, 78782,  ZExceptionHandler, int32_t) {
__asm {

 Block0:
	sub esp,0x19C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x198],eax
	push esi
	push edi
	push offset _S_DBGHELPDLL
	mov esi,ecx
	call dword ptr [ZImports::_LoadLibraryA]
	mov edi,eax
	test edi,edi
	jne Block2

 Block1:
	pop edi
	pop esi
	mov ecx,dword ptr [esp+0x198]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x19C
	ret

 Block2:
	push ebp
	mov ebp,dword ptr [ZImports::_GetProcAddress]
	push offset _S_SYMINITIALIZE
	push edi
	call ebp
	mov dword ptr [esi+0x12C],eax
	test eax,eax
	je Block16

 Block3:
	push offset _S_SYMCLEANUP
	push edi
	call ebp
	mov dword ptr [esi+0x130],eax
	test eax,eax
	je Block16

 Block4:
	push offset _S_STACKWALK
	push edi
	call ebp
	mov dword ptr [esi+0x134],eax
	test eax,eax
	je Block16

 Block5:
	push offset _S_SYMFUNCTIONTABLE
	push edi
	call ebp
	mov dword ptr [esi+0x138],eax
	test eax,eax
	je Block16

 Block6:
	push offset _S_SYMGETMODULEBASE
	push edi
	call ebp
	mov dword ptr [esi+0x13C],eax
	test eax,eax
	je Block16

 Block7:
	push offset _S_SYMGETSYMFROMADD
	push edi
	call ebp
	mov dword ptr [esi+0x140],eax
	test eax,eax
	je Block16

 Block8:
	push offset _S_SYMGETLINEFROMAD
	push edi
	call ebp
	push offset _S_MINIDUMPWRITEDUM
	push edi
	mov dword ptr [esi+0x144],eax
	call ebp
	push 0x90
	mov dword ptr [esi+0x148],eax
	lea eax,[esp+0x14]
	push 0
	push eax
	mov dword ptr [esp+0x18],0x94
	call _memset
	add esp,0xC
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_GetVersionExA]
	cmp dword ptr [esp+0x1C],2
	jne Block10

 Block9:
	call GetCurrentProcess
	jmp Block11

 Block10:
	call GetCurrentProcessId

 Block11:
	push 0x103
	lea edx,[esp+0xA5]
	push 0
	push edx
	mov dword ptr [esi+0x128],eax
	mov byte ptr [esp+0xAC],0
	call _memset
	add esp,0xC
	push 0x104
	lea eax,[esp+0xA4]
	push eax
	push 0
	call GetModuleFileNameA
	lea ecx,[esp+0xA0]
	dec ecx
	add eax,ecx
	lea edx,[esp+0xA0]
	cmp eax,edx
	jb Block15

 Block12:
	mov cl,byte ptr [eax]
	cmp cl,0x2F
	je Block15

 Block13:
	cmp cl,0x5C
	je Block15

 Block14:
	dec eax
	lea ecx,[esp+0xA0]
	cmp eax,ecx
	jae Block12

 Block15:
	push 1
	mov byte ptr [eax+1],0
	mov eax,dword ptr [esi+0x128]
	mov ecx,dword ptr [esi+0x12C]
	lea edx,[esp+0xA4]
	push edx
	push eax
	call ecx
	test eax,eax
	jne Block17

 Block16:
	pop ebp
	pop edi
	xor eax,eax
	pop esi
	mov ecx,dword ptr [esp+0x198]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x19C
	ret

 Block17:
	push offset _S_SYMSETOPTIONS
	push edi
	call ebp
	test eax,eax
	je Block19

 Block18:
	push 0x17
	call eax

 Block19:
	mov ecx,dword ptr [esp+0x1A4]
	xor eax,eax
	cmp dword ptr [esp+0x1C],2
	pop ebp
	pop edi
	sete al
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x19C
	ret
}
}
// ZExceptionHandler::GetExceptionString
// 741DA8
static uint8_t _SUB_341C40_LOOKUP_TABLE_0[248] = {
0, 17, 1, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 2, 17, 17, 17, 17, 17, 17, 17, 3, 
4, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
15, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
17, 17, 17, 17, 17, 17, 17, 16, 
};
__SUB(00341C40, __cdecl, 78775,  char*, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xC0000005
	ja Block9

 Block1:
	je Block8

 Block2:
	lea ecx,[eax+0x7FFFFFFF]
	cmp ecx,3
	ja Block31

 Block3:
	cmp ECX, 0
je Block7
cmp ECX, 1
je Block4
cmp ECX, 2
je Block5
cmp ECX, 3
je Block6


 Block4:
	mov eax,offset _S_DATATYPEMISALIGN
	ret

 Block5:
	mov eax,offset _S_BREAKPOINT
	ret

 Block6:
	mov eax,offset _S_SINGLESTEP
	ret

 Block7:
	mov eax,offset _S_GUARDPAGE
	ret

 Block8:
	mov eax,offset _S_ACCESSVIOLATION
	ret

 Block9:
	cmp eax,0xE8000001
	ja Block31

 Block10:
	je Block30

 Block11:
	lea ecx,[eax+0x3FFFFFFA]
	cmp ecx,0xF7
	ja Block31

 Block12:
	movzx ecx,byte ptr [ecx+_SUB_341C40_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block24
cmp ECX, 1
je Block29
cmp ECX, 2
je Block25
cmp ECX, 3
je Block26
cmp ECX, 4
je Block28
cmp ECX, 5
je Block13
cmp ECX, 6
je Block14
cmp ECX, 7
je Block15
cmp ECX, 8
je Block16
cmp ECX, 9
je Block17
cmp ECX, 10
je Block18
cmp ECX, 11
je Block19
cmp ECX, 12
je Block20
cmp ECX, 13
je Block21
cmp ECX, 14
je Block22
cmp ECX, 15
je Block23
cmp ECX, 16
je Block27
cmp ECX, 17
je Block31


 Block13:
	mov eax,offset _S_ARRAYBOUNDSEXCEE
	ret

 Block14:
	mov eax,offset _S_FLTDENORMALOPERA
	ret

 Block15:
	mov eax,offset _S_FLTDIVIDEBYZERO
	ret

 Block16:
	mov eax,offset _S_FLTINEXACTRESULT
	ret

 Block17:
	mov eax,offset _S_FLTINVALIDOPERAT
	ret

 Block18:
	mov eax,offset _S_FLTOVERFLOW
	ret

 Block19:
	mov eax,offset _S_FLTSTACKCHECK
	ret

 Block20:
	mov eax,offset _S_FLTUNDERFLOW
	ret

 Block21:
	mov eax,offset _S_INTDIVIDEBYZERO
	ret

 Block22:
	mov eax,offset _S_INTOVERFLOW
	ret

 Block23:
	mov eax,offset _S_PRIVINSTRUCTION
	ret

 Block24:
	mov eax,offset _S_INPAGEERROR
	ret

 Block25:
	mov eax,offset _S_ILLEGALINSTRUCTI
	ret

 Block26:
	mov eax,offset _S_NONCONTINUABLEEX
	ret

 Block27:
	mov eax,offset _S_STACKOVERFLOW
	ret

 Block28:
	mov eax,offset _S_INVALIDDISPOSITI
	ret

 Block29:
	mov eax,offset _S_INVALIDHANDLE
	ret

 Block30:
	mov eax,offset _S_ZTLDEADLOCK
	ret

 Block31:
	push 0
	push 0x80
	push offset _D_SBUFFER
	push 0
	push eax
	push offset _S_NTDLLDLL
	mov byte ptr [_D_SBUFFER],0
	call GetModuleHandleA
	push eax
	push 0xA00
	call FormatMessageA
	mov eax,offset _D_SBUFFER
	ret
}
}
// __ZAPILoader::Decode
__SUB_CLASS_THIS(00341990, __thiscall, 89461,  __ZAPILoader, uint64_t, uint64_t, const __ZAPILoader::RAWKEY&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	ror ecx,4
	mov eax,edx
	xor eax,ecx
	and eax,0xF0F0F0F
	xor edx,eax
	xor eax,ecx
	ror eax,0xC
	mov ecx,edx
	xor ecx,eax
	and ecx,0xFFFF0000
	xor edx,ecx
	xor ecx,eax
	ror ecx,0x12
	mov eax,edx
	xor eax,ecx
	and eax,0x33333333
	xor edx,eax
	xor eax,ecx
	ror eax,0x16
	mov ecx,edx
	xor ecx,eax
	and ecx,0xFF00FF00
	xor edx,ecx
	xor ecx,eax
	ror ecx,9
	mov esi,dword ptr [esp+0x1C]
	mov edi,ecx
	mov eax,edx
	xor eax,edi
	and eax,0x55555555
	mov ecx,eax
	xor ecx,edi
	xor eax,edx
	rol ecx,2
	rol eax,1
	mov edi,eax
	mov dword ptr [esp+0x1C],8

 Block1:
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x14],ecx
	xor edx,edi
	and edx,0x3F3F3F3F
	add esi,4
	mov eax,edi
	ror eax,4
	xor eax,dword ptr [esi]
	add esi,4
	and eax,0x3F3F3F3F
	mov ecx,eax
	shr ecx,0x10
	movzx ebp,cl
	mov ebx,eax
	shr ebx,0x18
	mov ebx,dword ptr [ebx*4+0xB56678]
	or ebx,dword ptr [ebp*4+0xB56478]
	mov ecx,eax
	shr ecx,8
	movzx ebp,cl
	// TODO: 	or ebx,dword ptr [ebp*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+768]
	mov ebp,edx
	shr ebp,0x18
	or ebx,dword ptr [ebp*4+0xB56578]
	mov ecx,edx
	shr ecx,0x10
	movzx ebp,cl
	or ebx,dword ptr [ebp*4+0xB56378]
	mov ecx,edx
	shr ecx,8
	movzx ebp,cl
	// TODO: 	or ebx,dword ptr [ebp*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+512]
	mov ecx,dword ptr [esp+0x14]
	movzx eax,al
	// TODO: 	or ebx,dword ptr [eax*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+256]
	movzx edx,dl
	// TODO: 	or ebx,dword ptr [edx*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw]
	mov edx,dword ptr [esi]
	xor ecx,ebx
	xor edx,ecx
	mov eax,ecx
	and edx,0x3F3F3F3F
	add esi,4
	ror eax,4
	xor eax,dword ptr [esi]
	mov dword ptr [esp+0x14],ecx
	and eax,0x3F3F3F3F
	mov ecx,eax
	shr ecx,0x10
	movzx ebp,cl
	mov ebx,eax
	shr ebx,0x18
	mov ebx,dword ptr [ebx*4+0xB56678]
	or ebx,dword ptr [ebp*4+0xB56478]
	mov ecx,eax
	shr ecx,8
	movzx ebp,cl
	// TODO: 	or ebx,dword ptr [ebp*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+768]
	mov ebp,edx
	shr ebp,0x18
	or ebx,dword ptr [ebp*4+0xB56578]
	mov ecx,edx
	shr ecx,0x10
	movzx ebp,cl
	or ebx,dword ptr [ebp*4+0xB56378]
	mov ecx,edx
	shr ecx,8
	movzx ebp,cl
	// TODO: 	or ebx,dword ptr [ebp*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+512]
	mov ecx,dword ptr [esp+0x14]
	movzx eax,al
	// TODO: 	or ebx,dword ptr [eax*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw+256]
	movzx edx,dl
	// TODO: 	or ebx,dword ptr [edx*4+``anonymous namespace'::ZAPILoader::_GetS'::`2'::s_aadw]
	add esi,4
	xor edi,ebx
	sub dword ptr [esp+0x1C],1
	jne Block1

 Block2:
	ror ecx,1
	ror edi,2
	mov eax,edi
	xor eax,ecx
	and eax,0x55555555
	xor ecx,eax
	xor eax,edi
	rol eax,9
	mov edx,eax
	xor edx,ecx
	and edx,0xFF00FF00
	xor ecx,edx
	xor edx,eax
	rol edx,0x16
	mov eax,edx
	xor eax,ecx
	and eax,0x33333333
	xor ecx,eax
	xor eax,edx
	rol eax,0x12
	mov edx,eax
	xor edx,ecx
	and edx,0xFFFF0000
	xor ecx,edx
	xor edx,eax
	rol edx,0xC
	mov eax,edx
	mov esi,eax
	xor esi,ecx
	and esi,0xF0F0F0F
	mov edx,esi
	xor edx,eax
	xor esi,ecx
	pop edi
	xor eax,eax
	or eax,esi
	pop esi
	rol edx,4
	xor ecx,ecx
	pop ebp
	or edx,ecx
	pop ebx
	ret 0xC
}
}
// ZExceptionHandler::ZExceptionHandler
__SUB_CLASS_THIS0(00343390, __thiscall, 78761,  ZExceptionHandler, void) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push esi
	mov esi,ecx
	push edi
	push esi
	call constructHelper<ZFatalSection>::call
	xor edi,edi
	add esp,4
	push offset ZExceptionHandler::RawUnhandledExceptionFilter
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esi+0x12C],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x144],edi
	call dword ptr [ZImports::_SetUnhandledExceptionFilter]
	push 0x104
	lea ebx,[esi+0xC]
	push ebx
	push edi
	mov dword ptr [esi+0x110],eax
	call GetModuleFileNameA
	lea edi,[eax+esi+0xB]
	cmp edi,ebx
	jb Block5

 Block1:
	mov al,byte ptr [edi]
	cmp al,0x2F
	je Block5

 Block2:
	cmp al,0x5C
	je Block5

 Block3:
	cmp al,0x2E
	je Block5

 Block4:
	dec edi
	cmp edi,ebx
	jae Block1

 Block5:
	lea eax,[esp+0xC]
	push eax
	call GetLocalTime
	cmp edi,ebx
	jae Block7

 Block6:
	inc edi

 Block7:
	movzx ecx,word ptr [esp+0x12]
	movzx edx,word ptr [esp+0xE]
	movzx eax,word ptr [esp+0xC]
	push ecx
	push edx
	push eax
	push offset _S_D02D02DLOG
	push edi
	call wsprintfA
	add esp,0x14
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// ZExceptionHandler::DbgHelpStackWalk
__SUB_CLASS_THIS(003427B0, __thiscall, 78781,  ZExceptionHandler, void, _CONTEXT*) {
__asm {

 Block0:
	sub esp,0x3E4
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x3E0],eax
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x3F0]
	push esi
	mov esi,ecx
	push offset _S_CALLSTACK
	push esi
	call ZExceptionHandler::Report
	push offset _S_ADDRESSFRAME
	push esi
	call ZExceptionHandler::Report
	push 0xA0
	xor ebx,ebx
	lea eax,[esp+0x44]
	push ebx
	push eax
	call _memset
	mov edx,dword ptr [ebp+0xC4]
	mov ecx,dword ptr [ebp+0xB8]
	add esp,0x1C
	push ebx
	mov eax,3
	mov dword ptr [esp+0x54],edx
	mov edx,dword ptr [esi+0x13C]
	push edx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [esi+0x138]
	push eax
	mov dword ptr [esp+0x38],ecx
	mov ecx,dword ptr [ebp+0xB4]
	push ebx
	mov dword ptr [esp+0x54],ecx
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	call GetCurrentThread
	push eax
	call GetCurrentProcess
	mov edx,dword ptr [esi+0x134]
	push eax
	push 0x14C
	call edx
	test eax,eax
	je Block14

 Block1:
	push edi

 Block2:
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block13

 Block3:
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push offset _S_08X08X
	push esi
	call ZExceptionHandler::Report
	push 0x103
	lea ecx,[esp+0xE9]
	push ebx
	push ecx
	mov dword ptr [esp+0x1F4],0x18
	mov dword ptr [esp+0x204],0x200
	mov dword ptr [esp+0x2C],ebx
	mov byte ptr [esp+0xF0],bl
	call _memset
	mov ecx,dword ptr [esp+0x4C]
	xor eax,eax
	add esp,0x1C
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	lea edx,[esp+0x1D8]
	push edx
	mov edx,dword ptr [esi+0x128]
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0x140]
	push ecx
	push edx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x2C],0x14
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call eax
	mov edi,eax
	cmp edi,ebx
	je Block6

 Block4:
	mov eax,dword ptr [esi+0x144]
	cmp eax,ebx
	je Block6

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x128]
	push ecx
	push edx
	call eax

 Block6:
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea ecx,[esp+0x1C]
	push ecx
	push 0x104
	lea edx,[esp+0xE0]
	push edx
	push eax
	call ZExceptionHandler::GetLogicalAddress
	mov eax,dword ptr [esp+0x38]
	add esp,0x14
	lea ecx,[esp+0xD4]
	push ecx
	cmp eax,0xFFFFFFFF
	je Block8

 Block7:
	mov edx,dword ptr [esp+0x2C]
	push eax
	push edx
	lea eax,[esp+0x1F8]
	push eax
	push offset _S_HSHSLUS
	push esi
	call ZExceptionHandler::Report
	add esp,0x18
	jmp Block12

 Block8:
	cmp edi,ebx
	je Block10

 Block9:
	mov edx,dword ptr [esp+0x14]
	push edx
	lea eax,[esp+0x1F4]
	push eax
	push offset _S_HSXS
	jmp Block11

 Block10:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x1C]
	push edx
	push eax
	push offset _S_04X08XS

 Block11:
	push esi
	call ZExceptionHandler::Report
	add esp,0x14

 Block12:
	mov ecx,dword ptr [esi+0x13C]
	mov edx,dword ptr [esi+0x138]
	push ebx
	push ecx
	push edx
	push ebx
	push ebp
	lea eax,[esp+0x44]
	push eax
	call GetCurrentThread
	push eax
	call GetCurrentProcess
	mov ecx,dword ptr [esi+0x134]
	push eax
	push 0x14C
	call ecx
	test eax,eax
	jne Block2

 Block13:
	pop edi

 Block14:
	mov ecx,dword ptr [esp+0x3EC]
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x3E4
	ret 4
}
}
