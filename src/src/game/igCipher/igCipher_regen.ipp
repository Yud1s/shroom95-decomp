#include "regen.hpp"
// igCipher.ipp
#include "igCipher.hpp"

// CIGCipher::innoHash
__SUB(0061BF30, __cdecl, 16144,  unsigned long, unsigned char*, int32_t, unsigned long*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp],0xC65053F2
	test eax,eax
	jne Block2

 Block1:
	lea eax,[esp]

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	xor esi,esi
	test ebp,ebp
	jle Block6

 Block3:
	push ebx
	push edi

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dl,byte ptr [esi+ecx]
	mov cl,byte ptr [eax+1]
	movzx edi,cl
	movzx ebx,byte ptr [edi+CIGCipher::bShuffle]
	sub bl,dl
	add byte ptr [eax],bl
	movzx edi,dl
	movzx ebx,byte ptr [edi+CIGCipher::bShuffle]
	mov byte ptr [esp+0x20],dl
	mov dl,byte ptr [eax+2]
	xor bl,dl
	sub cl,bl
	mov byte ptr [eax+1],cl
	mov cl,byte ptr [eax+3]
	movzx edx,cl
	movzx edx,byte ptr [edx+CIGCipher::bShuffle]
	add dl,byte ptr [esp+0x20]
	sub cl,byte ptr [eax]
	xor dl,byte ptr [eax+2]
	inc esi
	mov byte ptr [eax+2],dl
	add cl,byte ptr [edi+CIGCipher::bShuffle]
	mov byte ptr [eax+3],cl
	mov ecx,dword ptr [eax]
	rol ecx,3
	cmp esi,ebp
	mov dword ptr [eax],ecx
	jl Block4

 Block5:
	pop edi
	pop ebx
	pop esi
	mov eax,ecx
	pop ebp
	pop ecx
	ret

 Block6:
	mov eax,dword ptr [eax]
	pop esi
	pop ebp
	pop ecx
	ret
}
}
// CIGCipher::innoEncrypt
__SUB(0061BE20, __cdecl, 16146,  void, unsigned char*, unsigned char*, int32_t, unsigned long*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp],0xC65053F2
	test eax,eax
	jne Block2

 Block1:
	lea eax,[esp]

 Block2:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	jle Block6

 Block3:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	sub ebp,esi
	mov dword ptr [esp+0x20],ecx

 Block4:
	movzx ecx,byte ptr [eax]
	mov dl,byte ptr [ecx+CIGCipher::bShuffle]
	xor dl,byte ptr [esi+ebp]
	inc esi
	mov cl,dl
	mov bl,dl
	add bl,bl
	add dl,dl
	shr cl,1
	xor cl,bl
	and cl,0x55
	xor cl,dl
	rol cl,4
	mov byte ptr [esi-1],cl
	mov dl,byte ptr [eax+1]
	movzx edx,dl
	movzx edx,byte ptr [edx+CIGCipher::bShuffle]
	sub dl,cl
	add byte ptr [eax],dl
	mov dl,byte ptr [eax+2]
	movzx edi,cl
	movzx ebx,byte ptr [edi+CIGCipher::bShuffle]
	xor bl,dl
	mov dl,byte ptr [eax+1]
	sub dl,bl
	mov byte ptr [eax+1],dl
	mov dl,byte ptr [eax+3]
	movzx ebx,dl
	movzx ebx,byte ptr [ebx+CIGCipher::bShuffle]
	sub dl,byte ptr [eax]
	add bl,cl
	xor bl,byte ptr [eax+2]
	mov byte ptr [eax+2],bl
	add dl,byte ptr [edi+CIGCipher::bShuffle]
	mov byte ptr [eax+3],dl
	mov ecx,dword ptr [eax]
	rol ecx,3
	sub dword ptr [esp+0x20],1
	mov dword ptr [eax],ecx
	jne Block4

 Block5:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block6:
	pop ecx
	ret
}
}
// CIGCipher::innoDecryptStr
__SUB(0061BEE0, __cdecl, 16150,  const char*, char*, unsigned char*, unsigned long*) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	lea eax,[esp+8]
	push eax
	push 4
	lea ecx,[esp+0x1C]
	push esi
	push ecx
	mov dword ptr [esp+0x18],0xC65053F2
	call CIGCipher::innoDecrypt
	mov edi,dword ptr [esp+0x24]
	lea edx,[esp+0x18]
	push edx
	push edi
	add esi,4
	push esi
	mov esi,dword ptr [esp+0x2C]
	push esi
	call CIGCipher::innoDecrypt
	add esp,0x20
	mov byte ptr [edi+esi],0
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
