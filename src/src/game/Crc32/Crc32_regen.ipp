#include "regen.hpp"
// Crc32.ipp
#include "Crc32.hpp"

// CCrc32::GetCrc32
__SUB(000B7860, __cdecl, 131467,  unsigned long, const unsigned char*, unsigned long, unsigned long, int32_t, unsigned long*, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+0x10],0
	mov ecx,dword ptr [esp+4]
	je Block2

 Block1:
	xor dword ptr [esp+0xC],ecx

 Block2:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+0xC]
	push esi
	push edi
	cmp edx,0x10
	jb Block6

 Block3:
	mov esi,edx
	shr esi,4
	push ebx

 Block4:
	movzx ebx,byte ptr [ecx]
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	movzx ebx,byte ptr [ecx+1]
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	mov edi,eax
	shr edi,0x18
	xor edi,ebx
	shl eax,8
	xor eax,dword ptr [edi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	sub edx,0x10
	sub esi,1
	jne Block4

 Block5:
	pop ebx

 Block6:
	cmp edx,1
	jb Block9

 Block7:
	lea esp,[esp]

 Block8:
	movzx edi,byte ptr [ecx]
	mov esi,eax
	shr esi,0x18
	xor esi,edi
	shl eax,8
	xor eax,dword ptr [esi*4+CCrc32::ms_adwCrc32Table]
	inc ecx
	sub edx,1
	jne Block8

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	pop edi
	pop esi
	test ecx,ecx
	je Block11

 Block10:
	mov dword ptr [ecx],1

 Block11:
	ret
}
}
