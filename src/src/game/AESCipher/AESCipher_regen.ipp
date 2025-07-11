#include "regen.hpp"
// AESCipher.ipp
#include "AESCipher.hpp"

// CAESCipher::OFB_EncUpdate
__SUB(00032D60, __cdecl, 134541,  unsigned char, CAESCipher::AES_ALG_INFO*, unsigned char*, unsigned long, unsigned char*, unsigned long*) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esi+0x20]
	push edi
	mov edi,dword ptr [esp+0x24]
	lea eax,[ebx+edi]
	mov byte ptr [esp+0x1C],0
	mov dword ptr [ebp],eax
	cmp eax,0x10
	jae Block2

 Block1:
	mov eax,dword ptr [esp+0x20]
	push edi
	push eax
	lea ecx,[ebx+esi+0x10]
	push ecx
	call _memcpy
	add esp,0xC
	add dword ptr [esi+0x20],edi
	pop edi
	pop esi
	mov dword ptr [ebp],0
	pop ebp
	mov al,1
	pop ebx
	add esp,8
	ret

 Block2:
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x28]
	cmp ebp,edi
	jne Block4

 Block3:
	mov edx,dword ptr [esp+0x24]
	push edx
	call _malloc
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push ebp
	push eax
	mov dword ptr [esp+0x20],eax
	call _memcpy
	mov ebp,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x1C],1

 Block4:
	mov eax,0x10
	sub eax,ebx
	push eax
	lea edx,[ebx+esi+0x10]
	push ebp
	push edx
	mov dword ptr [esp+0x20],eax
	call _memcpy
	mov eax,dword ptr [esp+0x30]
	add ebp,dword ptr [esp+0x20]
	lea ebx,[eax+ebx-0x10]
	lea eax,[esi+0x24]
	push esi
	push eax
	call CAESCipher::AES_Encrypt
	mov ecx,dword ptr [esi]
	xor ecx,dword ptr [esi+0x10]
	add esp,0x14
	mov dword ptr [edi],ecx
	mov edx,dword ptr [esi+0x14]
	xor edx,dword ptr [esi+4]
	add edi,0x10
	mov dword ptr [edi-0xC],edx
	mov eax,dword ptr [esi+0x18]
	xor eax,dword ptr [esi+8]
	mov dword ptr [edi-8],eax
	mov ecx,dword ptr [esi+0x1C]
	xor ecx,dword ptr [esi+0xC]
	mov dword ptr [edi-4],ecx
	cmp ebx,0x10
	jb Block7

 Block5:
	mov eax,ebx
	shr eax,4
	mov dword ptr [esp+0x24],eax

 Block6:
	lea eax,[esi+0x24]
	push esi
	push eax
	call CAESCipher::AES_Encrypt
	mov edx,dword ptr [esi]
	xor edx,dword ptr [ebp]
	add esp,8
	mov dword ptr [edi],edx
	mov eax,dword ptr [ebp+4]
	xor eax,dword ptr [esi+4]
	add ebp,0x10
	mov dword ptr [edi+4],eax
	mov ecx,dword ptr [ebp-8]
	xor ecx,dword ptr [esi+8]
	add edi,0x10
	mov dword ptr [edi-8],ecx
	mov edx,dword ptr [ebp-4]
	xor edx,dword ptr [esi+0xC]
	sub ebx,0x10
	sub dword ptr [esp+0x24],1
	mov dword ptr [edi-4],edx
	jne Block6

 Block7:
	push ebx
	lea eax,[esi+0x10]
	push ebp
	push eax
	call _memcpy
	mov eax,dword ptr [esi+0x20]
	and eax,0xF0000000
	add eax,ebx
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x38]
	sub dword ptr [eax],ebx
	add esp,0xC
	cmp byte ptr [esp+0x1C],0
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	call _free
	add esp,4

 Block9:
	pop edi
	pop esi
	pop ebp
	mov al,1
	pop ebx
	add esp,8
	ret
}
}
// CAESCipher::OFB_EncFinal
__SUB(00032EC0, __cdecl, 134543,  unsigned char, CAESCipher::AES_ALG_INFO*, unsigned char*, unsigned long*) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esi+0x20]
	lea eax,[esi+0x24]
	push esi
	push eax
	mov dword ptr [ebp],0x10
	call CAESCipher::AES_Encrypt
	add esp,8
	test edi,edi
	jbe Block3

 Block1:
	mov ecx,dword ptr [esp+0x14]
	mov eax,esi
	sub ecx,esi
	mov esi,edi

 Block2:
	mov dl,byte ptr [eax+0x10]
	xor dl,byte ptr [eax]
	inc eax
	sub esi,1
	mov byte ptr [ecx+eax-1],dl
	jne Block2

 Block3:
	mov dword ptr [ebp],edi
	pop edi
	pop esi
	mov al,1
	pop ebp
	ret
}
}
// CAESCipher::OFB_DecFinal
__SUB(00033080, __cdecl, 134543,  unsigned char, CAESCipher::AES_ALG_INFO*, unsigned char*, unsigned long*) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esi+0x20]
	lea eax,[esi+0x24]
	push esi
	push eax
	mov dword ptr [ebp],edi
	call CAESCipher::AES_Encrypt
	add esp,8
	test edi,edi
	jbe Block3

 Block1:
	mov ecx,dword ptr [esp+0x14]
	mov eax,esi
	sub ecx,esi
	mov esi,edi
	lea esp,[esp]

 Block2:
	mov dl,byte ptr [eax+0x10]
	xor dl,byte ptr [eax]
	inc eax
	sub esi,1
	mov byte ptr [ecx+eax-1],dl
	jne Block2

 Block3:
	mov dword ptr [ebp],edi
	pop edi
	pop esi
	mov al,1
	pop ebp
	ret
}
}
// CAESCipher::RIJNDAEL_KeySchedule
__SUB(00031D20, __cdecl, 134536,  void, unsigned long*, unsigned long*) {
__asm {

 Block0:
	cmp byte ptr [CAESCipher::tab_gen],0
	jne Block2

 Block1:
	call CAESCipher::gen_tabs

 Block2:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	push ebx
	push esi
	mov esi,dword ptr [eax+0x10]
	mov dword ptr [edx+4],esi
	mov esi,dword ptr [eax+0x20]
	lea ecx,[edx+4]
	mov dword ptr [edx+8],esi
	mov esi,dword ptr [eax+0x30]
	mov dword ptr [edx+0xC],esi
	mov esi,dword ptr [eax+0x40]
	mov dword ptr [edx+0x10],esi
	mov esi,dword ptr [eax+0x50]
	mov dword ptr [edx+0x14],esi
	mov esi,dword ptr [eax+0x60]
	mov dword ptr [edx+0x18],esi
	mov eax,dword ptr [eax+0x70]
	push edi
	mov dword ptr [edx+0x1C],eax
	xor esi,esi
	lea esp,[esp]

 Block3:
	mov edx,eax
	ror edx,8
	mov ebx,edx
	mov eax,edx
	shr eax,0x18
	mov eax,dword ptr [eax*4+0xC65F20]
	shr ebx,0x10
	movzx edi,bl
	xor eax,dword ptr [edi*4+0xC65B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor eax,dword ptr [edi*4+0xC65720]
	movzx edx,dl
	xor eax,dword ptr [edx*4+_D_FL_TAB]
	add esi,4
	xor eax,dword ptr [esi+0xC6831C]
	add ecx,0x20
	xor eax,dword ptr [ecx-0x24]
	mov dword ptr [ecx-4],eax
	xor eax,dword ptr [ecx-0x20]
	mov dword ptr [ecx],eax
	xor eax,dword ptr [ecx-0x1C]
	mov dword ptr [ecx+4],eax
	xor eax,dword ptr [ecx-0x18]
	mov ebx,eax
	mov dword ptr [ecx+8],eax
	mov edx,eax
	shr edx,0x18
	mov edx,dword ptr [edx*4+0xC65F20]
	shr ebx,0x10
	movzx edi,bl
	xor edx,dword ptr [edi*4+0xC65B20]
	mov ebx,eax
	shr ebx,8
	movzx eax,al
	movzx edi,bl
	xor edx,dword ptr [edi*4+0xC65720]
	xor edx,dword ptr [eax*4+_D_FL_TAB]
	xor edx,dword ptr [ecx-0x14]
	mov eax,edx
	mov dword ptr [ecx+0xC],eax
	xor eax,dword ptr [ecx-0x10]
	mov dword ptr [ecx+0x10],eax
	xor eax,dword ptr [ecx-0xC]
	mov dword ptr [ecx+0x14],eax
	xor eax,dword ptr [ecx-8]
	mov dword ptr [ecx+0x18],eax
	cmp esi,0x1C
	jb Block3

 Block4:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CAESCipher::AES_EncInit
__SUB(00031C80, __cdecl, 134539,  void, CAESCipher::AES_ALG_INFO*, unsigned long*, unsigned char*, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax+0x20],0
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [ecx]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [ecx]
	mov dword ptr [eax+0xC],ecx
	ret

 Block2:
	mov edx,dword ptr [CAESCipher::bDefaultAESKeyValue]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [CAESCipher::bDefaultAESKeyValue+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [CAESCipher::bDefaultAESKeyValue+8]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [CAESCipher::bDefaultAESKeyValue+12]
	mov dword ptr [eax+0xC],ecx
	ret
}
}
// CAESCipher::OFB_DecUpdate
__SUB(00032F10, __cdecl, 134541,  unsigned char, CAESCipher::AES_ALG_INFO*, unsigned char*, unsigned long, unsigned char*, unsigned long*) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esi+0x20]
	push edi
	mov edi,dword ptr [esp+0x24]
	lea eax,[ebx+edi]
	mov byte ptr [esp+0x1C],0
	mov dword ptr [ebp],eax
	cmp eax,0x10
	ja Block2

 Block1:
	mov eax,dword ptr [esp+0x20]
	push edi
	push eax
	lea ecx,[ebx+esi+0x10]
	push ecx
	call _memcpy
	add esp,0xC
	add dword ptr [esi+0x20],edi
	pop edi
	pop esi
	mov dword ptr [ebp],0
	pop ebp
	mov al,1
	pop ebx
	add esp,8
	ret

 Block2:
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x28]
	cmp ebp,edi
	jne Block4

 Block3:
	mov edx,dword ptr [esp+0x24]
	push edx
	call _malloc
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push ebp
	push eax
	mov dword ptr [esp+0x20],eax
	call _memcpy
	mov ebp,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x1C],1

 Block4:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[ebx+edx]
	mov dword ptr [ecx],eax
	mov eax,0x10
	sub eax,ebx
	push eax
	lea edx,[ebx+esi+0x10]
	push ebp
	push edx
	mov dword ptr [esp+0x20],eax
	call _memcpy
	mov eax,dword ptr [esp+0x30]
	add ebp,dword ptr [esp+0x20]
	lea ebx,[eax+ebx-0x10]
	lea eax,[esi+0x24]
	push esi
	push eax
	call CAESCipher::AES_Encrypt
	mov ecx,dword ptr [esi+0x10]
	xor ecx,dword ptr [esi]
	add esp,0x14
	mov dword ptr [edi],ecx
	mov edx,dword ptr [esi+0x14]
	xor edx,dword ptr [esi+4]
	add edi,0x10
	mov dword ptr [edi-0xC],edx
	mov eax,dword ptr [esi+0x18]
	xor eax,dword ptr [esi+8]
	mov dword ptr [edi-8],eax
	mov ecx,dword ptr [esi+0x1C]
	xor ecx,dword ptr [esi+0xC]
	mov dword ptr [edi-4],ecx
	cmp ebx,0x10
	jbe Block7

 Block5:
	lea eax,[ebx-0x11]
	shr eax,4
	inc eax
	mov dword ptr [esp+0x24],eax

 Block6:
	lea eax,[esi+0x24]
	push esi
	push eax
	call CAESCipher::AES_Encrypt
	mov edx,dword ptr [esi]
	xor edx,dword ptr [ebp]
	add esp,8
	mov dword ptr [edi],edx
	mov eax,dword ptr [ebp+4]
	xor eax,dword ptr [esi+4]
	add ebp,0x10
	mov dword ptr [edi+4],eax
	mov ecx,dword ptr [ebp-8]
	xor ecx,dword ptr [esi+8]
	add edi,0x10
	mov dword ptr [edi-8],ecx
	mov edx,dword ptr [ebp-4]
	xor edx,dword ptr [esi+0xC]
	sub ebx,0x10
	sub dword ptr [esp+0x24],1
	mov dword ptr [edi-4],edx
	jne Block6

 Block7:
	push ebx
	lea eax,[esi+0x10]
	push ebp
	push eax
	call _memcpy
	mov eax,dword ptr [esi+0x20]
	and eax,0xF0000000
	add eax,ebx
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x38]
	sub dword ptr [eax],ebx
	add esp,0xC
	cmp byte ptr [esp+0x1C],0
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	call _free
	add esp,4

 Block9:
	pop edi
	pop esi
	pop ebp
	mov al,1
	pop ebx
	add esp,8
	ret
}
}
// CAESCipher::AES_DecInit
__SUB(00031CD0, __cdecl, 134539,  void, CAESCipher::AES_ALG_INFO*, unsigned long*, unsigned char*, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax+0x20],0
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [ecx]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [ecx]
	mov dword ptr [eax+0xC],ecx
	ret

 Block2:
	mov edx,dword ptr [CAESCipher::bDefaultAESKeyValue]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [CAESCipher::bDefaultAESKeyValue+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [CAESCipher::bDefaultAESKeyValue+8]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [CAESCipher::bDefaultAESKeyValue+12]
	mov dword ptr [eax+0xC],ecx
	ret
}
}
// CAESCipher::gen_tabs
__SUB0(000319F0, __cdecl, 134532,  void) {
__asm {

 Block0:
	push ebx
	push ebp
	xor ecx,ecx
	push esi
	mov byte ptr [_D_LOG_TAB+7],0
	lea eax,[ecx+1]
	push edi

 Block1:
	mov edx,eax
	and dl,0x80
	movzx edx,dl
	neg edx
	sbb edx,edx
	mov bl,al
	add bl,bl
	mov byte ptr [ecx+_D_POW_TAB],al
	mov byte ptr [eax+_D_LOG_TAB],cl
	movzx esi,bl
	and edx,0x1B
	movzx eax,al
	xor edx,esi
	inc ecx
	xor eax,edx
	cmp ecx,0x100
	jb Block1

 Block2:
	mov byte ptr [_D_LOG_TAB+1],0
	mov eax,1
	xor ecx,ecx

 Block3:
	mov edx,eax
	and dl,0x80
	movzx edx,dl
	neg edx
	sbb edx,edx
	mov dword ptr [ecx+_D_RCO_TAB],eax
	add al,al
	movzx eax,al
	and edx,0x1B
	add ecx,4
	xor eax,edx
	cmp ecx,0x28
	jb Block3

 Block4:
	xor ebx,ebx

 Block5:
	test ebx,ebx
	je Block7

 Block6:
	movzx ecx,byte ptr [ebx+_D_LOG_TAB]
	mov edx,offset _D_POW_TAB+255
	sub edx,ecx
	movzx eax,byte ptr [edx]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	movzx edx,al
	mov cl,dl
	add cl,cl
	movzx ecx,cl
	mov eax,edx
	shr eax,7
	movzx eax,al
	or eax,ecx
	xor edx,eax
	mov ecx,eax
	shr ecx,7
	add al,al
	movzx ecx,cl
	movzx eax,al
	or ecx,eax
	xor edx,ecx
	mov eax,ecx
	add cl,cl
	shr eax,7
	movzx ecx,cl
	movzx eax,al
	or eax,ecx
	xor edx,eax
	mov ecx,eax
	shr ecx,7
	add al,al
	movzx ecx,cl
	movzx eax,al
	or ecx,eax
	xor ecx,edx
	xor ecx,0x63
	mov byte ptr [ebx+_D_SBX_TAB],cl
	mov byte ptr [ecx+_D_ISB_TAB],bl
	inc ebx
	cmp ebx,0x100
	jb Block5

 Block9:
	xor ecx,ecx

 Block10:
	movzx esi,byte ptr [ecx+_D_SBX_TAB]
	mov edx,esi
	rol edx,8
	mov dword ptr [ecx*4+0xC65720],edx
	mov eax,esi
	rol eax,0x10
	mov edx,esi
	rol edx,0x18
	mov dword ptr [ecx*4+_D_FL_TAB],esi
	mov dword ptr [ecx*4+0xC65B20],eax
	mov dword ptr [ecx*4+0xC65F20],edx
	test esi,esi
	je Block12

 Block11:
	movzx edi,byte ptr [esi+_D_LOG_TAB]
	movzx eax,byte ptr [_D_LOG_TAB+2]
	add eax,edi
	cdq
	mov ebx,0xFF
	idiv ebx
	movzx eax,byte ptr [_D_LOG_TAB+3]
	add eax,edi
	mov edi,ebx
	movzx ebp,byte ptr [edx+_D_POW_TAB]
	cdq
	idiv edi
	movzx eax,byte ptr [edx+_D_POW_TAB]
	jmp Block13

 Block12:
	xor ebp,ebp
	xor eax,eax

 Block13:
	shl eax,8
	or eax,esi
	shl eax,8
	or eax,esi
	shl eax,8
	or eax,ebp
	mov edx,eax
	rol edx,8
	mov dword ptr [ecx*4+0xC67720],edx
	mov edx,eax
	rol edx,0x10
	mov dword ptr [ecx*4+_D_FT_TAB],eax
	rol eax,0x18
	mov dword ptr [ecx*4+0xC67B20],edx
	mov dword ptr [ecx*4+0xC67F20],eax
	movzx eax,byte ptr [ecx+_D_ISB_TAB]
	mov edx,eax
	rol edx,8
	mov dword ptr [ecx*4+0xC64720],edx
	mov edx,eax
	rol edx,0x10
	mov dword ptr [ecx*4+0xC64B20],edx
	mov edx,eax
	rol edx,0x18
	mov dword ptr [ecx*4+_D_IL_TAB],eax
	mov dword ptr [ecx*4+0xC64F20],edx
	test eax,eax
	je Block15

 Block14:
	movzx esi,byte ptr [eax+_D_LOG_TAB]
	movzx eax,byte ptr [_D_LOG_TAB+14]
	add eax,esi
	cdq
	mov edi,0xFF
	idiv edi
	movzx eax,byte ptr [_D_LOG_TAB+9]
	add eax,esi
	movzx ebx,byte ptr [edx+_D_POW_TAB]
	cdq
	idiv edi
	movzx eax,byte ptr [_D_LOG_TAB+13]
	add eax,esi
	movzx ebp,byte ptr [edx+_D_POW_TAB]
	cdq
	idiv edi
	movzx eax,byte ptr [_D_LOG_TAB+11]
	add eax,esi
	mov esi,0xFF
	movzx edi,byte ptr [edx+_D_POW_TAB]
	cdq
	idiv esi
	movzx eax,byte ptr [edx+_D_POW_TAB]
	jmp Block16

 Block15:
	xor ebx,ebx
	xor ebp,ebp
	xor edi,edi
	xor eax,eax

 Block16:
	shl eax,8
	or eax,edi
	shl eax,8
	or eax,ebp
	shl eax,8
	or eax,ebx
	mov edx,eax
	rol edx,8
	mov dword ptr [ecx*4+0xC66720],edx
	mov edx,eax
	rol edx,0x10
	mov dword ptr [ecx*4+_D_IT_TAB],eax
	rol eax,0x18
	mov dword ptr [ecx*4+0xC66B20],edx
	mov dword ptr [ecx*4+0xC66F20],eax
	inc ecx
	cmp ecx,0x100
	jb Block10

 Block17:
	pop edi
	pop esi
	pop ebp
	mov byte ptr [CAESCipher::tab_gen],1
	pop ebx
	ret
}
}
// CAESCipher::AES_Encrypt
__SUB(00031E30, __cdecl, 134537,  void, void*, unsigned char*) {
__asm {

 Block0:
	sub esp,0x24
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	push ebx
	mov ebx,dword ptr [ecx]
	xor ebx,dword ptr [eax+4]
	push ebp
	mov ebp,dword ptr [ecx+4]
	xor ebp,dword ptr [eax+8]
	push esi
	mov esi,dword ptr [ecx+8]
	xor esi,dword ptr [eax+0xC]
	push edi
	mov edi,dword ptr [ecx+0xC]
	xor edi,dword ptr [eax+0x10]
	mov edx,esi
	shr edx,0x10
	movzx edx,dl
	mov ecx,edi
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,ebp
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	mov dword ptr [esp+0x1C],esi
	xor ecx,dword ptr [eax+0x14]
	add eax,0x14
	mov edx,edi
	shr edx,0x10
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	mov dword ptr [esp+0x10],ecx
	mov ecx,esi
	mov dword ptr [esp+0x14],ebx
	shr ebx,0x18
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	mov dword ptr [esp+0x18],ebp
	xor edx,dword ptr [ebx*4+0xC67F20]
	movzx esi,byte ptr [esp+0x18]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	mov ebx,edi
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],edi
	mov edi,ebp
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor edx,dword ptr [eax+4]
	xor esi,dword ptr [eax+8]
	mov ebx,ebp
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	movzx edi,byte ptr [esp+0x20]
	mov dword ptr [esp+0x38],esi
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor esi,dword ptr [eax+0xC]
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x30],esi
	mov ecx,dword ptr [esp+0x10]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	add eax,0x10
	xor esi,dword ptr [eax]
	shr ebx,0x10
	mov dword ptr [esp+0x14],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x2C]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov edi,edx
	xor esi,dword ptr [eax+4]
	shr ebx,8
	mov dword ptr [esp+0x18],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr edx,0x10
	xor esi,dword ptr [eax+8]
	movzx edx,dl
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x1C]
	shr ecx,8
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	mov edx,edi
	xor esi,dword ptr [eax+0xC]
	shr edx,0x10
	movzx edx,dl
	mov ecx,esi
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	add eax,0x10
	xor ecx,dword ptr [eax]
	mov dword ptr [esp+0x20],esi
	mov edx,esi
	shr ebx,0x18
	shr edx,0x10
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x18]
	xor esi,dword ptr [eax+8]
	shr ebx,0x10
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor edx,dword ptr [eax+4]
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	movzx edi,byte ptr [esp+0x20]
	mov dword ptr [esp+0x38],esi
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor esi,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],esi
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	add eax,0x10
	xor esi,dword ptr [eax]
	shr ebx,0x10
	mov dword ptr [esp+0x14],esi
	movzx esi,bl
	mov ebx,dword ptr [esp+0x2C]
	mov esi,dword ptr [esi*4+0xC67B20]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor esi,dword ptr [eax+4]
	mov dword ptr [esp+0x18],esi
	mov ebx,dword ptr [esp+0x30]
	mov edi,edx
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr edx,0x10
	xor esi,dword ptr [eax+8]
	movzx edx,dl
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	shr ecx,8
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	mov edx,edi
	xor esi,dword ptr [eax+0xC]
	shr edx,0x10
	mov ecx,esi
	movzx edx,dl
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	mov edx,esi
	xor ecx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x20],esi
	add eax,0x10
	shr edx,0x10
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	shr ebx,0x18
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	shr ebx,8
	xor edx,dword ptr [eax+4]
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor esi,dword ptr [eax+8]
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x18]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],esi
	movzx edi,byte ptr [esp+0x20]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor esi,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],esi
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	add eax,0x10
	xor esi,dword ptr [eax]
	shr ebx,0x10
	mov dword ptr [esp+0x14],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x2C]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr ebx,8
	xor esi,dword ptr [eax+4]
	mov edi,edx
	mov dword ptr [esp+0x18],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	mov ebx,ecx
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr edx,0x10
	xor esi,dword ptr [eax+8]
	movzx edx,dl
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	shr ecx,8
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	xor esi,dword ptr [eax+0xC]
	add eax,0x10
	mov dword ptr [esp+0x20],esi
	mov ecx,esi
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x14]
	mov edx,edi
	shr edx,0x10
	movzx edx,dl
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	mov edx,esi
	xor ecx,dword ptr [eax]
	shr edx,0x10
	shr ebx,0x18
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x18]
	xor esi,dword ptr [eax+8]
	xor edx,dword ptr [eax+4]
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	movzx edi,byte ptr [esp+0x20]
	mov dword ptr [esp+0x38],esi
	shr ebx,8
	mov ecx,dword ptr [esp+0x10]
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor esi,dword ptr [eax+0xC]
	shr ebx,0x10
	mov dword ptr [esp+0x30],esi
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	add eax,0x10
	xor esi,dword ptr [eax]
	mov dword ptr [esp+0x14],esi
	mov ebx,dword ptr [esp+0x30]
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x2C]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov edi,edx
	xor esi,dword ptr [eax+4]
	shr ebx,8
	mov dword ptr [esp+0x18],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr edx,0x10
	xor esi,dword ptr [eax+8]
	movzx edx,dl
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x1C]
	shr ecx,8
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	mov edx,edi
	xor esi,dword ptr [eax+0xC]
	shr edx,0x10
	movzx edx,dl
	mov ecx,esi
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	add eax,0x10
	xor ecx,dword ptr [eax]
	mov edx,esi
	shr edx,0x10
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],esi
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	shr ebx,0x18
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	xor edx,dword ptr [eax+4]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x18]
	xor esi,dword ptr [eax+8]
	shr ebx,0x10
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	movzx edi,byte ptr [esp+0x20]
	mov dword ptr [esp+0x38],esi
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor esi,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],esi
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr ebx,0x10
	xor esi,dword ptr [eax+0x10]
	add eax,0x10
	mov dword ptr [esp+0x14],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x2C]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr ebx,8
	xor esi,dword ptr [eax+4]
	mov edi,edx
	mov dword ptr [esp+0x18],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	mov ebx,ecx
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor esi,dword ptr [eax+8]
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	mov edi,dword ptr [esp+0x1C]
	shr edx,0x10
	movzx edx,dl
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	shr ecx,8
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	mov edx,edi
	xor esi,dword ptr [eax+0xC]
	shr edx,0x10
	mov ecx,esi
	movzx edx,dl
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	mov edx,esi
	xor ecx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x20],esi
	add eax,0x10
	shr edx,0x10
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	shr ebx,0x18
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x18]
	xor esi,dword ptr [eax+8]
	xor edx,dword ptr [eax+4]
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x14]
	movzx edi,byte ptr [esp+0x20]
	mov dword ptr [esp+0x38],esi
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	xor esi,dword ptr [eax+0xC]
	add eax,0x10
	mov dword ptr [esp+0x30],esi
	mov ebx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x10]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	shr ebx,0x10
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr ebx,0x10
	xor esi,dword ptr [eax]
	add eax,0x10
	mov dword ptr [esp+0x14],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	mov ebx,dword ptr [esp+0x2C]
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC67720]
	mov ebx,dword ptr [esp+0x30]
	mov edi,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,dl
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov edi,edx
	xor esi,dword ptr [eax-0xC]
	shr ebx,8
	mov dword ptr [esp+0x18],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,ecx
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x2C]
	mov dword ptr [esp+0x38],esi
	shr ebx,0x10
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	shr edx,0x10
	xor esi,dword ptr [eax-8]
	movzx edx,dl
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x1C]
	shr ecx,8
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edx*4+0xC67B20]
	movzx edx,byte ptr [esp+0x30]
	movzx ecx,cl
	xor esi,dword ptr [ecx*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	xor esi,dword ptr [edx*4+_D_FT_TAB]
	mov edx,edi
	xor esi,dword ptr [eax-4]
	shr edx,0x10
	movzx edx,dl
	mov ecx,esi
	shr ecx,0x18
	mov ecx,dword ptr [ecx*4+0xC67F20]
	xor ecx,dword ptr [edx*4+0xC67B20]
	mov edx,dword ptr [esp+0x18]
	shr edx,8
	movzx edx,dl
	xor ecx,dword ptr [edx*4+0xC67720]
	movzx edx,bl
	xor ecx,dword ptr [edx*4+_D_FT_TAB]
	mov edx,esi
	xor ecx,dword ptr [eax]
	shr edx,0x10
	mov dword ptr [esp+0x20],esi
	movzx edx,dl
	mov edx,dword ptr [edx*4+0xC67B20]
	shr ebx,0x18
	mov dword ptr [esp+0x10],ecx
	mov ecx,edi
	mov edi,dword ptr [esp+0x18]
	shr ecx,8
	movzx esi,cl
	xor edx,dword ptr [esi*4+0xC67720]
	movzx esi,byte ptr [esp+0x18]
	xor edx,dword ptr [ebx*4+0xC67F20]
	mov ebx,dword ptr [esp+0x20]
	xor edx,dword ptr [esi*4+_D_FT_TAB]
	shr ebx,8
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	mov ebx,dword ptr [esp+0x14]
	shr ebx,0x10
	shr edi,0x18
	xor esi,dword ptr [edi*4+0xC67F20]
	movzx edi,byte ptr [esp+0x1C]
	mov dword ptr [esp+0x38],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67B20]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x18]
	xor esi,dword ptr [eax+8]
	shr ebx,0x10
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [esp+0x1C]
	movzx edi,bl
	mov ebx,dword ptr [esp+0x14]
	xor edx,dword ptr [eax+4]
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC67F20]
	xor esi,dword ptr [edi*4+0xC67B20]
	movzx edi,byte ptr [esp+0x20]
	shr ebx,8
	mov dword ptr [esp+0x38],esi
	movzx esi,bl
	mov esi,dword ptr [esi*4+0xC67720]
	xor dword ptr [esp+0x38],esi
	mov esi,dword ptr [esp+0x38]
	xor esi,dword ptr [edi*4+_D_FT_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor esi,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x10]
	shr ebx,0x10
	movzx edi,bl
	mov dword ptr [esp+0x30],esi
	shr esi,0x18
	mov esi,dword ptr [esi*4+0xC65F20]
	xor esi,dword ptr [edi*4+0xC65B20]
	mov ebx,edx
	shr ebx,8
	movzx edi,bl
	xor esi,dword ptr [edi*4+0xC65720]
	mov ebx,dword ptr [esp+0x30]
	shr ebx,0x10
	movzx edi,cl
	xor esi,dword ptr [edi*4+_D_FL_TAB]
	movzx edi,bl
	mov ebx,dword ptr [esp+0x2C]
	mov edi,dword ptr [edi*4+0xC65B20]
	xor esi,dword ptr [eax+0x10]
	shr ebx,8
	movzx ebx,bl
	xor edi,dword ptr [ebx*4+0xC65720]
	mov ebx,ecx
	shr ebx,0x18
	xor edi,dword ptr [ebx*4+0xC65F20]
	movzx ebx,dl
	xor edi,dword ptr [ebx*4+_D_FL_TAB]
	mov ebx,dword ptr [esp+0x30]
	xor edi,dword ptr [eax+0x14]
	add eax,0x10
	shr ebx,8
	mov ebp,edx
	movzx ebx,bl
	shr ebp,0x18
	mov dword ptr [esp+0x38],ebp
	mov ebp,dword ptr [ebx*4+0xC65720]
	mov ebx,dword ptr [esp+0x38]
	xor ebp,dword ptr [ebx*4+0xC65F20]
	mov ebx,ecx
	shr ebx,0x10
	movzx ebx,bl
	xor ebp,dword ptr [ebx*4+0xC65B20]
	movzx ebx,byte ptr [esp+0x2C]
	xor ebp,dword ptr [ebx*4+_D_FL_TAB]
	mov ebx,dword ptr [esp+0x2C]
	xor ebp,dword ptr [eax+8]
	shr edx,0x10
	shr ebx,0x18
	mov dword ptr [esp+0x38],ebx
	movzx ebx,dl
	mov edx,dword ptr [esp+0x38]
	mov edx,dword ptr [edx*4+0xC65F20]
	xor edx,dword ptr [ebx*4+0xC65B20]
	shr ecx,8
	movzx ecx,cl
	xor edx,dword ptr [ecx*4+0xC65720]
	movzx ecx,byte ptr [esp+0x30]
	xor edx,dword ptr [ecx*4+_D_FL_TAB]
	xor edx,dword ptr [eax+0xC]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edi
	pop edi
	mov dword ptr [eax],esi
	pop esi
	mov dword ptr [eax+8],ebp
	pop ebp
	mov dword ptr [eax+0xC],edx
	pop ebx
	add esp,0x24
	ret
}
}
// CAESCipher::Encrypt
__SUB(000330F0, __cdecl, 134531,  void, unsigned char*, unsigned char*, int32_t, unsigned long*) {
__asm {

 Block0:
	sub esp,0x13C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x138],eax
	push ebx
	mov ebx,dword ptr [esp+0x144]
	push esi
	mov esi,dword ptr [esp+0x14C]
	push edi
	lea eax,[esp+0x10]
	push eax
	push offset CAESCipher::UserKey
	mov dword ptr [esp+0x14],0
	call CAESCipher::AES_EncKeySchedule
	mov edi,dword ptr [esp+0x15C]
	mov ecx,dword ptr [esp+0x160]
	push edi
	push esi
	push ecx
	lea edx,[esp+0x24]
	push edx
	call CAESCipher::AES_EncInit
	add esp,0x18
	test edi,edi
	je Block2

 Block1:
	lea eax,[esp+0xC]
	push eax
	push ebx
	push edi
	lea ecx,[esp+0x1C]
	push esi
	push ecx
	call CAESCipher::OFB_EncUpdate
	add esp,0x14

 Block2:
	mov eax,dword ptr [esp+0xC]
	lea edx,[esp+0xC]
	push edx
	add ebx,eax
	lea ecx,[esp+0x14]
	push ebx
	push ecx
	call CAESCipher::OFB_EncFinal
	mov ecx,dword ptr [esp+0x150]
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x13C
	ret
}
}
// CAESCipher::Decrypt
__SUB(000331A0, __cdecl, 134531,  void, unsigned char*, unsigned char*, int32_t, unsigned long*) {
__asm {

 Block0:
	sub esp,0x13C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x138],eax
	push ebx
	mov ebx,dword ptr [esp+0x144]
	push esi
	mov esi,dword ptr [esp+0x14C]
	push edi
	lea eax,[esp+0x10]
	push eax
	push offset CAESCipher::UserKey
	mov dword ptr [esp+0x14],0
	call CAESCipher::AES_EncKeySchedule
	mov edi,dword ptr [esp+0x15C]
	mov ecx,dword ptr [esp+0x160]
	push edi
	push esi
	push ecx
	lea edx,[esp+0x24]
	push edx
	call CAESCipher::AES_DecInit
	add esp,0x18
	test edi,edi
	je Block2

 Block1:
	lea eax,[esp+0xC]
	push eax
	push ebx
	push edi
	lea ecx,[esp+0x1C]
	push esi
	push ecx
	call CAESCipher::OFB_DecUpdate
	add esp,0x14

 Block2:
	mov eax,dword ptr [esp+0xC]
	lea edx,[esp+0xC]
	push edx
	add ebx,eax
	lea ecx,[esp+0x14]
	push ebx
	push ecx
	call CAESCipher::OFB_DecFinal
	mov ecx,dword ptr [esp+0x150]
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x13C
	ret
}
}
// CAESCipher::AES_EncKeySchedule
__SUB(000330D0, __cdecl, 134535,  void, unsigned long*, CAESCipher::AES_ALG_INFO*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+0x24],8
	add eax,0x28
	mov dword ptr [esp+8],eax
	jmp  CAESCipher::RIJNDAEL_KeySchedule
}
}
