#include "regen.hpp"
// AntiPrivateServer.ipp
#include "AntiPrivateServer.hpp"

// RVAToOffset
__SUB(0005DE00, __cdecl, 146099,  unsigned long, void*, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x10
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-8],eax
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ebp-8]
	add edx,dword ptr [ecx+0x3C]
	mov dword ptr [ebp-0xC],edx
	mov eax,dword ptr [ebp-0xC]
	add eax,0xF8
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp-0x10],0
	jmp Block2

 Block1:
	mov ecx,dword ptr [ebp-0x10]
	add ecx,1
	mov dword ptr [ebp-0x10],ecx

 Block2:
	mov edx,dword ptr [ebp-0xC]
	movzx eax,word ptr [edx+6]
	cmp dword ptr [ebp-0x10],eax
	jge Block7

 Block3:
	mov ecx,dword ptr [ebp-0x10]
	imul ecx,0x28
	mov edx,dword ptr [ebp-4]
	mov eax,dword ptr [ebp+0xC]
	cmp eax,dword ptr [edx+ecx+0xC]
	jb Block6

 Block4:
	mov ecx,dword ptr [ebp-0x10]
	imul ecx,0x28
	mov edx,dword ptr [ebp-0x10]
	imul edx,0x28
	mov eax,dword ptr [ebp-4]
	mov ecx,dword ptr [eax+ecx+0xC]
	mov eax,dword ptr [ebp-4]
	add ecx,dword ptr [eax+edx+8]
	cmp dword ptr [ebp+0xC],ecx
	jae Block6

 Block5:
	mov ecx,dword ptr [ebp-0x10]
	imul ecx,0x28
	mov edx,dword ptr [ebp-4]
	mov eax,dword ptr [edx+ecx+0x14]
	add eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-0x10]
	imul ecx,0x28
	mov edx,dword ptr [ebp-4]
	sub eax,dword ptr [edx+ecx+0xC]
	jmp Block8

 Block6:
	jmp Block1

 Block7:
	xor eax,eax

 Block8:
	mov esp,ebp
	pop ebp
	ret
}
}
// CCriticalSector::~CCriticalSector
__SUB_CLASS_THIS0(0005DB70, __thiscall, 77250,  CCriticalSector, void) {
__asm {

 Block0:
	push ecx
	call dword ptr [ZImports::_DeleteCriticalSection]
	ret
}
}
// CCriticalSector::CCriticalSector
__SUB_CLASS_THIS0(0005DB60, __thiscall, 77249,  CCriticalSector, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push esi
	call dword ptr [ZImports::_InitializeCriticalSection]
	mov eax,esi
	pop esi
	ret
}
}
// CheckSumForce
__SUB(0005DB80, __cdecl, 146097,  unsigned long, unsigned char*, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x418
	jmp Block2

 Block2:
	mov dword ptr [ebp-0x414],0xED1883C8
	mov dword ptr [ebp-4],0
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-4]
	add eax,1
	mov dword ptr [ebp-4],eax

 Block4:
	cmp dword ptr [ebp-4],0x100
	jge Block13

 Block5:
	mov ecx,dword ptr [ebp-4]
	mov dword ptr [ebp-0x10],ecx
	mov dword ptr [ebp-0x418],8
	jmp Block7

 Block6:
	mov edx,dword ptr [ebp-0x418]
	sub edx,1
	mov dword ptr [ebp-0x418],edx

 Block7:
	cmp dword ptr [ebp-0x418],0
	jle Block12

 Block8:
	mov eax,dword ptr [ebp-0x10]
	and eax,1
	je Block10

 Block9:
	mov ecx,dword ptr [ebp-0x10]
	shr ecx,1
	mov edx,dword ptr [ebp-0x414]
	sub edx,1
	xor ecx,edx
	mov dword ptr [ebp-0x10],ecx
	jmp Block11

 Block10:
	mov eax,dword ptr [ebp-0x10]
	shr eax,1
	mov dword ptr [ebp-0x10],eax

 Block11:
	jmp Block6

 Block12:
	mov ecx,dword ptr [ebp-4]
	mov edx,dword ptr [ebp-0x10]
	mov dword ptr [ebp+ecx*4-0x410],edx
	jmp Block3

 Block13:
	mov dword ptr [ebp-0xC],0xFFFFFFFF
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-8],eax

 Block14:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,dword ptr [ebp-8]
	jae Block16

 Block15:
	mov edx,dword ptr [ebp-0xC]
	shr edx,8
	mov eax,dword ptr [ebp+8]
	movzx ecx,byte ptr [eax]
	mov eax,dword ptr [ebp-0xC]
	and eax,0xFF
	xor ecx,eax
	xor edx,dword ptr [ebp+ecx*4-0x410]
	mov dword ptr [ebp-0xC],edx
	mov ecx,dword ptr [ebp+8]
	add ecx,1
	mov dword ptr [ebp+8],ecx
	jmp Block14

 Block16:
	mov edx,dword ptr [ebp-0xC]
	not edx
	mov dword ptr [ebp-0xC],edx
	jmp Block18

 Block18:
	mov eax,dword ptr [ebp-0xC]
	mov esp,ebp
	pop ebp
	ret
}
}
// GetGPNMemCrc32
__SUB(0005DC90, __cdecl, 146098,  unsigned long, unsigned long, unsigned long, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x30
	jmp Block2

 Block2:
	mov dword ptr [ebp-4],0
	mov eax,dword ptr [ebp+0x10]
	push eax
	call _malloc
	add esp,4
	mov dword ptr [ebp-8],eax
	cmp dword ptr [ebp-8],0
	je Block15

 Block3:
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	mov edx,dword ptr [ebp+0xC]
	push edx
	mov eax,dword ptr [ebp-8]
	push eax
	call _memcpy
	add esp,0xC
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [ebp-0x18],ecx
	mov edx,dword ptr [ebp-0x18]
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [edx+0x3C]
	mov dword ptr [ebp-0x1C],eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,0xA0
	mov dword ptr [ebp-0xC],ecx
	mov edx,dword ptr [ebp-0xC]
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [edx]
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp-0xC]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x10],edx

 Block4:
	cmp dword ptr [ebp-0x10],0
	jbe Block14

 Block5:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax]
	mov dword ptr [ebp-0x24],ecx
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [edx+4]
	sub eax,8
	shr eax,1
	mov dword ptr [ebp-0x20],eax
	mov ecx,dword ptr [ebp-0x14]
	add ecx,8
	mov dword ptr [ebp-0x28],ecx
	mov dword ptr [ebp-0x2C],0
	jmp Block7

 Block6:
	mov edx,dword ptr [ebp-0x2C]
	add edx,1
	mov dword ptr [ebp-0x2C],edx

 Block7:
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,dword ptr [ebp-0x20]
	jae Block13

 Block8:
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ebp-0x28]
	movzx eax,word ptr [edx+ecx*2]
	sar eax,0xC
	cmp eax,3
	jne Block12

 Block9:
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ebp-0x28]
	movzx eax,word ptr [edx+ecx*2]
	and eax,0xFFF
	add eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x30],eax
	mov ecx,dword ptr [ebp-0x30]
	cmp ecx,dword ptr [ebp+0xC]
	jb Block12

 Block10:
	mov edx,dword ptr [ebp+0xC]
	add edx,dword ptr [ebp+0x10]
	cmp dword ptr [ebp-0x30],edx
	jae Block12

 Block11:
	mov eax,dword ptr [ebp-0x30]
	sub eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx+eax]
	sub edx,dword ptr [ebp+8]
	mov eax,dword ptr [ebp-0x30]
	sub eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-8]
	mov dword ptr [ecx+eax],edx

 Block12:
	jmp Block6

 Block13:
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [ebp-0x10]
	sub eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ebp-0x14]
	add edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x14],edx
	jmp Block4

 Block14:
	mov eax,dword ptr [ebp+0x10]
	push eax
	mov ecx,dword ptr [ebp-8]
	push ecx
	call CheckSumForce
	add esp,8
	mov dword ptr [ebp-4],eax
	mov edx,dword ptr [ebp-8]
	push edx
	call _free
	add esp,4

 Block15:
	jmp Block17

 Block17:
	mov eax,dword ptr [ebp-4]
	mov esp,ebp
	pop ebp
	ret
}
}
// MyGetProcAddress
__SUB(0005E0A0, __stdcall, 78655,  PROC*, HINSTANCE__*, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x48
	jmp Block2

 Block2:
	mov dword ptr [ebp-8],0
	mov dword ptr [ebp-4],0
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0xC],eax
	mov ecx,dword ptr [ebp-0xC]
	movzx edx,word ptr [ecx]
	cmp edx,0x5A4D
	jne Block33

 Block3:
	mov eax,dword ptr [ebp-0xC]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax+0x3C]
	mov dword ptr [ebp-0x10],ecx
	mov edx,dword ptr [ebp-0x10]
	cmp dword ptr [edx],0x4550
	jne Block33

 Block4:
	mov dword ptr [ebp-0x18],0
	mov dword ptr [ebp-0x14],0
	mov eax,dword ptr [ebp-0x10]
	movzx ecx,word ptr [eax+0x18]
	cmp ecx,0x20B
	jne Block6

 Block5:
	mov edx,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x1C],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x88]
	mov dword ptr [ebp-0x18],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x8C]
	mov dword ptr [ebp-0x14],eax
	jmp Block7

 Block6:
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ecx+0x78]
	mov dword ptr [ebp-0x18],edx
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x7C]
	mov dword ptr [ebp-0x14],ecx

 Block7:
	cmp dword ptr [ebp-0x18],0
	je Block33

 Block8:
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x24],edx
	mov dword ptr [ebp-0x20],0
	cmp dword ptr [ebp+0xC],0x10000
	jae Block10

 Block9:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x20],eax
	mov ecx,dword ptr [ebp-0x20]
	sub ecx,1
	mov dword ptr [ebp-0x20],ecx
	jmp Block32

 Block10:
	mov dword ptr [ebp-0x38],0
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x34],edx

 Block11:
	mov eax,dword ptr [ebp-0x34]
	movsx ecx,byte ptr [eax]
	test ecx,ecx
	je Block15

 Block12:
	mov edx,dword ptr [ebp-0x34]
	add edx,1
	mov dword ptr [ebp-0x34],edx
	mov eax,dword ptr [ebp-0x38]
	add eax,1
	mov dword ptr [ebp-0x38],eax
	cmp dword ptr [ebp-0x38],0x100
	jb Block14

 Block13:
	xor eax,eax
	jmp Block36

 Block14:
	jmp Block11

 Block15:
	mov ecx,dword ptr [ebp-0x24]
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x30],edx
	mov byte ptr [ebp-0x29],0
	mov dword ptr [ebp-0x20],0
	jmp Block17

 Block16:
	mov eax,dword ptr [ebp-0x20]
	add eax,1
	mov dword ptr [ebp-0x20],eax

 Block17:
	mov ecx,dword ptr [ebp-0x24]
	mov edx,dword ptr [ebp-0x20]
	cmp edx,dword ptr [ecx+0x18]
	jae Block29

 Block18:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax]
	mov dword ptr [ebp-0x40],ecx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x34],edx
	push 4
	mov eax,dword ptr [ebp-0x40]
	push eax
	call dword ptr [ZImports::_IsBadReadPtr]
	test eax,eax
	je Block20

 Block19:
	xor eax,eax
	jmp Block36

 Block20:
	mov byte ptr [ebp-0x41],1
	mov dword ptr [ebp-0x48],0
	jmp Block22

 Block21:
	mov ecx,dword ptr [ebp-0x48]
	add ecx,1
	mov dword ptr [ebp-0x48],ecx

 Block22:
	mov edx,dword ptr [ebp-0x48]
	cmp edx,dword ptr [ebp-0x38]
	jae Block26

 Block23:
	mov eax,dword ptr [ebp-0x40]
	movzx ecx,byte ptr [eax]
	mov edx,dword ptr [ebp-0x34]
	movsx eax,byte ptr [edx]
	sub ecx,eax
	je Block25

 Block24:
	mov byte ptr [ebp-0x41],0
	jmp Block26

 Block25:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,1
	mov dword ptr [ebp-0x40],ecx
	mov edx,dword ptr [ebp-0x34]
	add edx,1
	mov dword ptr [ebp-0x34],edx
	jmp Block21

 Block26:
	movzx eax,byte ptr [ebp-0x41]
	test eax,eax
	je Block28

 Block27:
	mov byte ptr [ebp-0x29],1
	jmp Block29

 Block28:
	mov ecx,dword ptr [ebp-0x30]
	add ecx,4
	mov dword ptr [ebp-0x30],ecx
	jmp Block16

 Block29:
	movzx edx,byte ptr [ebp-0x29]
	test edx,edx
	jne Block31

 Block30:
	xor eax,eax
	jmp Block36

 Block31:
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax+0x24]
	mov dword ptr [ebp-0x3C],ecx
	mov edx,dword ptr [ebp-0x20]
	mov eax,dword ptr [ebp-0x3C]
	lea ecx,[eax+edx*2]
	mov dword ptr [ebp-0x3C],ecx
	mov edx,dword ptr [ebp-0x3C]
	movzx eax,word ptr [edx]
	mov dword ptr [ebp-0x20],eax

 Block32:
	mov ecx,dword ptr [ebp-0x24]
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ecx+0x1C]
	mov dword ptr [ebp-0x28],edx
	mov eax,dword ptr [ebp-0x20]
	mov ecx,dword ptr [ebp-0x28]
	lea edx,[ecx+eax*4]
	mov dword ptr [ebp-0x28],edx
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax]
	mov dword ptr [ebp-8],ecx

 Block33:
	jmp Block35

 Block35:
	mov eax,dword ptr [ebp-8]

 Block36:
	mov esp,ebp
	pop ebp
	ret 8
}
}
// InitSafeDll
__SUB0(0005E2F0, __cdecl, 146107,  HINSTANCE__*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x48C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push esi
	push edi
	jmp Block2

 Block2:
	push 0x104
	lea eax,[ebp-0x110]
	push eax
	call dword ptr [ZImports::_GetSystemDirectoryA]
	mov ecx,dword ptr [_S_WS232DLL__1]
	mov dword ptr [ebp-0x218],ecx
	mov edx,dword ptr [_S_WS232DLL__1+4]
	mov dword ptr [ebp-0x214],edx
	mov ax,word ptr [_S_WS232DLL__1+8]
	mov word ptr [ebp-0x210],ax
	mov cl,byte ptr [_S_WS232DLL__1+10]
	mov byte ptr [ebp-0x20E],cl
	lea edx,[ebp-0x110]
	add edx,0xFFFFFFFF
	mov dword ptr [ebp-0x46C],edx

 Block3:
	mov eax,dword ptr [ebp-0x46C]
	mov cl,byte ptr [eax+1]
	mov byte ptr [ebp-0x46D],cl
	add dword ptr [ebp-0x46C],1
	cmp byte ptr [ebp-0x46D],0
	jne Block3

 Block4:
	mov edi,dword ptr [ebp-0x46C]
	mov dx,word ptr [_S___41]
	mov word ptr [edi],dx
	lea eax,[ebp-0x218]
	mov dword ptr [ebp-0x474],eax
	mov ecx,dword ptr [ebp-0x474]
	mov dword ptr [ebp-0x478],ecx

 Block5:
	mov edx,dword ptr [ebp-0x474]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x479],al
	add dword ptr [ebp-0x474],1
	cmp byte ptr [ebp-0x479],0
	jne Block5

 Block6:
	mov ecx,dword ptr [ebp-0x474]
	sub ecx,dword ptr [ebp-0x478]
	mov edx,dword ptr [ebp-0x478]
	mov dword ptr [ebp-0x480],edx
	mov dword ptr [ebp-0x484],ecx
	lea eax,[ebp-0x110]
	add eax,0xFFFFFFFF
	mov dword ptr [ebp-0x488],eax

 Block7:
	mov ecx,dword ptr [ebp-0x488]
	mov dl,byte ptr [ecx+1]
	mov byte ptr [ebp-0x489],dl
	add dword ptr [ebp-0x488],1
	cmp byte ptr [ebp-0x489],0
	jne Block7

 Block8:
	mov edi,dword ptr [ebp-0x488]
	mov esi,dword ptr [ebp-0x480]
	mov eax,dword ptr [ebp-0x484]
	mov ecx,eax
	shr ecx,2
	rep movsd
	mov ecx,eax
	and ecx,3
	rep movsb
	lea ecx,[ebp-0x320]
	push ecx
	push 0x104
	call dword ptr [ZImports::_GetTempPathA]
	lea edx,[ebp-0x320]
	push edx
	push 0
	push offset _S_NST
	lea eax,[ebp-0x320]
	push eax
	call dword ptr [ZImports::_GetTempFileNameA]
	push 0
	lea ecx,[ebp-0x320]
	push ecx
	lea edx,[ebp-0x110]
	push edx
	call dword ptr [ZImports::_CopyFileA]
	push 0
	push 0x80
	push 3
	push 0
	push 3
	push 0xC0000000
	lea eax,[ebp-0x320]
	push eax
	call dword ptr [ZImports::_CreateFileA]
	mov dword ptr [ebp-0x328],eax
	cmp dword ptr [ebp-0x328],0xFFFFFFFF
	je Block14

 Block9:
	push 0
	lea ecx,[ebp-0x36C]
	push ecx
	push 0x40
	lea edx,[ebp-0x368]
	push edx
	mov eax,dword ptr [ebp-0x328]
	push eax
	call dword ptr [ZImports::_ReadFile]
	movzx ecx,word ptr [ebp-0x368]
	cmp ecx,0x5A4D
	jne Block13

 Block10:
	push 0
	push 0
	mov edx,dword ptr [ebp-0x32C]
	push edx
	mov eax,dword ptr [ebp-0x328]
	push eax
	call dword ptr [ZImports::_SetFilePointer]
	push 0
	lea ecx,[ebp-0x36C]
	push ecx
	push 0xF8
	lea edx,[ebp-0x468]
	push edx
	mov eax,dword ptr [ebp-0x328]
	push eax
	call dword ptr [ZImports::_ReadFile]
	cmp dword ptr [ebp-0x468],0x4550
	jne Block13

 Block11:
	cmp dword ptr [ebp-0x434],0x80000000
	jbe Block13

 Block12:
	mov dword ptr [ebp-0x434],0x10000000
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x32C]
	push ecx
	mov edx,dword ptr [ebp-0x328]
	push edx
	call dword ptr [ZImports::_SetFilePointer]
	push 0
	lea eax,[ebp-0x36C]
	push eax
	push 0xF8
	lea ecx,[ebp-0x468]
	push ecx
	mov edx,dword ptr [ebp-0x328]
	push edx
	call dword ptr [ZImports::_WriteFile]

 Block13:
	mov eax,dword ptr [ebp-0x328]
	push eax
	call dword ptr [ZImports::_CloseHandle]

 Block14:
	push 8
	push 0
	lea ecx,[ebp-0x320]
	push ecx
	call dword ptr [ZImports::_LoadLibraryExA]
	mov dword ptr [ebp-0x324],eax
	jmp Block16

 Block16:
	mov eax,dword ptr [ebp-0x324]
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
// HideDll
__SUB(0005EBD0, __cdecl, 146110,  void, HINSTANCE__*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	jmp Block2

 Block2:
	mov dword ptr [ebp-4],0
	push eax
	mov eax,dword ptr fs:[0x18]
	mov eax,dword ptr [eax+0x30]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ebp-4],eax
	pop eax
	mov eax,dword ptr [ebp-4]
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [ebp-8],ecx

 Block3:
	mov edx,dword ptr [ebp-8]
	cmp dword ptr [edx+0x18],0
	je Block6

 Block4:
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax+0x18]
	cmp ecx,dword ptr [ebp+8]
	je Block6

 Block5:
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-8],eax
	jmp Block3

 Block6:
	mov ecx,dword ptr [ebp-8]
	cmp dword ptr [ecx+0x18],0
	jne Block8

 Block7:
	jmp Block10

 Block8:
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+4]
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ecx+4],eax
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx+0xC]
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax+8]
	mov dword ptr [edx],ecx
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+8]
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx+0xC]
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax+0x14]
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+0x10]
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx+0x10]
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax+0x14]
	mov dword ptr [edx+4],ecx
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+0x40]
	mov ecx,dword ptr [ebp-8]
	mov edx,dword ptr [ecx+0x3C]
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-8]
	mov ecx,dword ptr [eax+0x3C]
	mov edx,dword ptr [ebp-8]
	mov eax,dword ptr [edx+0x40]
	mov dword ptr [ecx+4],eax
	push 0x48
	push 0
	mov ecx,dword ptr [ebp-8]
	push ecx
	call _memset
	add esp,0xC
	jmp Block10

 Block10:
	mov esp,ebp
	pop ebp
	ret
}
}
