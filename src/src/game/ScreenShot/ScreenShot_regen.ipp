#include "regen.hpp"
// ScreenShot.ipp
#include "ScreenShot.hpp"

// CScreenShot::SaveFullScreenToJpg
_SUB_EXCEPTION_HANDLER(2DB1E0)
__SUB(002DB1E0, __cdecl, 61894,  void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB1E0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,0x4E98
	call __chkstk
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x4E94],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4EAC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x4EBC]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [eax]
	test eax,eax
	je Block21

 Block1:
	cmp byte ptr [eax],0
	je Block21

 Block2:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	push ecx
	push ebx
	call GetClientRect
	test eax,eax
	je Block21

 Block3:
	lea edx,[esp+0x20]
	push edx
	push ebx
	call ClientToScreen
	test eax,eax
	je Block21

 Block4:
	cmp dword ptr [esp+0x20],0
	jl Block21

 Block5:
	cmp dword ptr [esp+0x24],0
	jl Block21

 Block6:
	call get_screen_width
	mov esi,eax
	call get_screen_height
	imul esi,eax
	lea ebp,[esi*4]
	mov eax,0x4013
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov word ptr [esp+0x34],ax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	lea ecx,[esp+0x20]
	push ecx
	push ebx
	mov edi,eax
	call GetClientRect
	test eax,eax
	je Block20

 Block7:
	lea edx,[esp+0x20]
	push edx
	push ebx
	call ClientToScreen
	test eax,eax
	je Block20

 Block8:
	mov ecx,dword ptr [_D_G_GR]
	xor ebx,ebx
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [esp+0x24]
	push eax
	push ebp
	mov ebp,dword ptr [esp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x58]
	push ecx
	mov ecx,dword ptr [edx+0x64]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebp
	call ecx
	test eax,eax
	jl Block20

 Block11:
	mov dword ptr [esp+0x14],ebx
	lea edx,[esp+0x1B]
	push edx
	lea eax,[esi+esi*2]
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4EBC],ebx
	call ZArray<unsigned char>::_Alloc
	cmp esi,ebx
	mov ebp,dword ptr [esp+0x14]
	mov ecx,edi
	mov eax,ebp
	jle Block14

 Block12:
	mov edi,edi

 Block13:
	movzx edx,byte ptr [ecx]
	mov byte ptr [eax],dl
	movzx edx,byte ptr [ecx+1]
	inc ecx
	inc eax
	mov byte ptr [eax],dl
	movzx edx,byte ptr [ecx+1]
	inc ecx
	inc eax
	mov byte ptr [eax],dl
	inc eax
	add ecx,2
	sub esi,1
	jne Block13

 Block14:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	push 0x4E68
	lea eax,[esp+0x44]
	push ebx
	push eax
	call _memset
	add esp,0xC
	lea ecx,[esp+0x40]
	push ecx
	call ZImports::__ijlInit
	test eax,eax
	jne Block17

 Block15:
	call get_screen_width
	mov dword ptr [esp+0x48],eax
	call get_screen_height
	mov dword ptr [esp+0x4C],eax
	mov eax,dword ptr [esp+0x48]
	lea eax,[eax+eax*2]
	lea edx,[eax+3]
	and edx,0xFFFFFFFC
	sub edx,eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov esi,3
	mov dword ptr [esp+0x44],ebp
	mov dword ptr [esp+0x58],2
	mov dword ptr [esp+0x54],esi
	mov dword ptr [esp+0x50],edx
	mov dword ptr [esp+0x60],ecx
	call get_screen_width
	mov dword ptr [esp+0x6C],eax
	call get_screen_height
	push 8
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x80],esi
	mov dword ptr [esp+0x7C],esi
	mov dword ptr [esp+0x84],1
	mov dword ptr [esp+0x98],0x4B
	call ZImports::__ijlWrite
	test eax,eax
	je Block18

 Block16:
	lea eax,[esp+0x40]
	push eax
	call ZImports::__ijlFree

 Block17:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x4EB4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block21

 Block18:
	lea ecx,[esp+0x40]
	push ecx
	call ZImports::__ijlFree
	test eax,eax
	jne Block17

 Block19:
	push ebx
	call MessageBeep
	jmp Block17

 Block20:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block21:
	mov ecx,dword ptr [esp+0x4EAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x4E94]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x4EA4
	ret
}
}
// CScreenShot::GetBaseFolder
_SUB_EXCEPTION_HANDLER(2DB6B0)
__SUB(002DB6B0, __cdecl, 61899,  void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB6B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x210
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x20C],eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x218]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov esi,dword ptr [esp+0x228]
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [eax+0x80]
	sub eax,0
	je Block18

 Block2:
	sub eax,1
	je Block7

 Block3:
	sub eax,1
	je Block6

 Block4:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block20

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],0
	jmp Block20

 Block6:
	push offset _S_C__3
	jmp Block19

 Block7:
	push 0
	push 0x10
	lea eax,[esp+0x118]
	push eax
	push 0
	call _SHGetSpecialFolderPathA
	test eax,eax
	jl Block17

 Block8:
	lea ecx,[esp+0x110]
	push ecx
	mov ecx,esi
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esi]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor ecx,ecx

 Block11:
	cmp byte ptr [eax+ecx-1],0x5C
	jne Block20

 Block12:
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	dec eax
	push eax
	push 0
	lea edx,[esp+0x10]
	push edx
	mov ecx,esi
	call ZXString<char>::Mid
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x224],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x220],0xFFFFFFFF
	test eax,eax
	je Block20

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block17:
	mov ecx,esi
	call ZXString<char>::Empty
	jmp Block20

 Block18:
	push 0x104
	lea eax,[esp+0x10]
	push eax
	push 0
	call GetModuleFileNameA
	lea ecx,[esp+0xC]
	push ecx
	call CWvsApp::Dir_BackSlashToSlash
	lea edx,[esp+0x10]
	push edx
	call CWvsApp::Dir_upDir
	lea eax,[esp+0x14]
	push eax
	call CWvsApp::Dir_SlashToBackSlash
	add esp,0xC
	lea ecx,[esp+0xC]
	push ecx

 Block19:
	mov ecx,esi
	call ZXString<char>::AssignCStr

 Block20:
	mov ecx,dword ptr [esp+0x218]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [esp+0x20C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x21C
	ret
}
}
// CScreenShot::SaveFullScreenToJpg
_SUB_EXCEPTION_HANDLER(2DB9F0)
__SUB0(002DB9F0, __cdecl, 61895,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB9F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	push ebx
	push 3
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x10],ebx
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S_JPG]
	mov word ptr [eax],cx
	mov dl,byte ptr [_S_JPG+2]
	push 3
	lea ecx,[esp+0xC]
	mov byte ptr [eax+2],dl
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x20],1
	call CScreenShot::GetPicName
	mov eax,dword ptr [esp+0x10]
	add esp,8
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp byte ptr [edx+0x78],bl
	je Block4

 Block3:
	lea eax,[esp+0xC]
	push 1
	push eax
	call CScreenShot::SaveFullScreenDX
	add esp,8
	jmp Block5

 Block4:
	lea ecx,[esp+0xC]
	push ecx
	call CScreenShot::SaveFullScreenToJpg_0
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x14
	ret
}
}
// CScreenShot::GetPicName
_SUB_EXCEPTION_HANDLER(2DB840)
__SUB(002DB840, __cdecl, 61901,  void, ZXString<char>&, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB840
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x28],ebx
	call CScreenShot::GetBaseFolder
	mov esi,dword ptr [esp+0x18]
	add esp,4
	cmp esi,ebx
	je Block2

 Block1:
	cmp byte ptr [esi],bl
	jne Block6

 Block2:
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],ebx

 Block4:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp esi,ebx
	je Block18

 Block5:
	jmp Block17

 Block6:
	test byte ptr [_D__S4__3],1
	jne Block8

 Block7:
	or dword ptr [_D__S4__3],1
	push 0xB12B50
	mov dword ptr [_D_SLASTBASEFOLDER],ebx
	call _atexit
	add esp,4

 Block8:
	lea ecx,[esp+0x18]
	push 0x1873
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [esp+0x30]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [_D_NSEQNO]
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esp+0x2C]
	push edx
	push ecx
	push esi
	push eax
	push ebp
	mov byte ptr [esp+0x38],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp dword ptr [_D_NSEQNO],0xFFFFFFFF
	je Block13

 Block11:
	push esi
	mov ecx,offset _D_SLASTBASEFOLDER
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block13

 Block12:
	push ebp
	call CScreenShot::IsFileExist
	add esp,4
	test eax,eax
	je Block14

 Block13:
	lea edx,[esp+0x14]
	push edx
	mov ecx,offset _D_SLASTBASEFOLDER
	call ZXString<char>::op_assign
	lea eax,[esp+0x14]
	push edi
	push eax
	call CScreenShot::GetSeqNo
	add esp,8
	mov dword ptr [_D_NSEQNO],eax

 Block14:
	lea ecx,[esp+0x18]
	push 0x1873
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [_D_NSEQNO]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push esi
	push eax
	push ebp
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	inc dword ptr [_D_NSEQNO]
	mov dword ptr [esp+0x24],0xFFFFFFFF

 Block17:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CScreenShot::IsFileExist
_SUB_EXCEPTION_HANDLER(2DB0E0)
__SUB(002DB0E0, __cdecl, 61902,  int32_t, const ZXString<char>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB0E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor edi,edi
	or ebx,0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ebp-0x50],offset ZFileStream::`vftable'
	mov dword ptr [ebp-0x40],ebx
	mov dword ptr [ebp-0x3C],edi
	mov dword ptr [ebp-0x38],edi
	mov dword ptr [ebp-0x20],edi
	mov dword ptr [ebp-0x1C],edi
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [eax]
	mov dword ptr [ebp-4],edi
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],1
	call ZFileStream::Close
	cmp eax,edi
	jne Block2

 Block1:
	call GetLastError
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0x14]
	push ecx
	mov dword ptr [ebp-0x14],eax
	call _CxxThrowException

 Block2:
	push edi
	push 0x80
	push 3
	push edi
	push 1
	push 0x80000000
	push esi
	call CreateFileA
	mov dword ptr [ebp-0x40],eax
	cmp eax,ebx
	jne Block4

 Block3:
	call GetLastError
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x18]
	push edx
	mov dword ptr [ebp-0x18],eax
	call _CxxThrowException

 Block4:
	or dword ptr [ebp-0x1C],1
	lea ecx,[ebp-0x50]
	mov dword ptr [ebp-0x48],edi
	mov dword ptr [ebp-0x44],edi
	mov dword ptr [ebp-4],ebx
	call ZFileStream::~ZFileStream
	mov eax,1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CScreenShot::SaveFullScreenDX
_SUB_EXCEPTION_HANDLER(2DB600)
__SUB(002DB600, __cdecl, 61898,  void, const ZXString<char>&, E_ScrFileFormat) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB600
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [_D_G_GR]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x70]
	push esi
	call eax
	test eax,eax
	setge bl
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block7

 Block6:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block7:
	test bl,bl
	je Block9

 Block8:
	push 0
	call MessageBeep

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CScreenShot::GetSeqNo
_SUB_EXCEPTION_HANDLER(2DB490)
__SUB(002DB490, __cdecl, 61903,  long, const ZXString<char>&, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB490
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
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x14],edi
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],edi
	lea esi,[edi+1]
	lea esp,[esp]

 Block1:
	lea eax,[esp+0x1C]
	push 0x1873
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esi-1]
	push edx
	mov edx,dword ptr [ecx]
	push edx
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x28],0
	cmp eax,edi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	call CScreenShot::IsFileExist
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add esi,esi
	jmp Block1

 Block5:
	mov eax,esi
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	lea ebp,[esi-1]
	cmp edi,ebp
	jg Block13

 Block6:
	lea eax,[edi+ebp]
	cdq
	sub eax,edx
	lea edx,[esp+0x1C]
	mov esi,eax
	push 0x1873
	push edx
	sar esi,1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [edx]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x3C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea eax,[esp+0x14]
	push eax
	call CScreenShot::IsFileExist
	add esp,4
	test eax,eax
	je Block10

 Block9:
	lea edi,[esi+1]
	jmp Block12

 Block10:
	cmp edi,ebp
	je Block14

 Block11:
	mov ebp,esi

 Block12:
	cmp edi,ebp
	jle Block6

 Block13:
	mov edi,dword ptr [esp+0x18]

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
