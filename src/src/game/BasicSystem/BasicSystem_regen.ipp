#include "regen.hpp"
// BasicSystem.ipp
#include "BasicSystem.hpp"

// get_bodypart_from_item
// 470114
static uint8_t _SUB_6FBE0_LOOKUP_TABLE_0[100] = {
0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
31, 31, 31, 8, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 31, 8, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 15, 16, 17, 
18, 19, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
20, 21, 22, 23, 31, 31, 31, 31, 31, 31, 24, 25, 26, 31, 27, 28, 
29, 30, 139, 255, 
};
__SUB(0006FBE0, __cdecl, 146086,  long, long, long, long*, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call get_gender_from_id
	mov ecx,dword ptr [esp+0x10]
	add esp,4
	cmp ecx,2
	je Block4

 Block1:
	cmp eax,2
	je Block4

 Block2:
	cmp eax,ecx
	je Block4

 Block3:
	xor eax,eax
	pop esi
	ret

 Block4:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	lea eax,[ecx-0x64]
	cmp eax,0x61
	ja Block67

 Block5:
	movzx eax,byte ptr [eax+_SUB_6FBE0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9
cmp EAX, 4
je Block10
cmp EAX, 5
je Block11
cmp EAX, 6
je Block12
cmp EAX, 7
je Block13
cmp EAX, 8
je Block14
cmp EAX, 9
je Block15
cmp EAX, 10
je Block16
cmp EAX, 11
je Block19
cmp EAX, 12
je Block21
cmp EAX, 13
je Block22
cmp EAX, 14
je Block23
cmp EAX, 15
je Block25
cmp EAX, 16
je Block26
cmp EAX, 17
je Block27
cmp EAX, 18
je Block28
cmp EAX, 19
je Block24
cmp EAX, 20
je Block36
cmp EAX, 21
je Block43
cmp EAX, 22
je Block63
cmp EAX, 23
je Block65
cmp EAX, 24
je Block29
cmp EAX, 25
je Block30
cmp EAX, 26
je Block31
cmp EAX, 27
je Block32
cmp EAX, 28
je Block33
cmp EAX, 29
je Block34
cmp EAX, 30
je Block35
cmp EAX, 31
je Block67


 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],1
	mov eax,1
	pop esi
	ret

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],2
	mov eax,1
	pop esi
	ret

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],3
	mov eax,1
	pop esi
	ret

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],4
	mov eax,1
	pop esi
	ret

 Block10:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],5
	mov eax,1
	pop esi
	ret

 Block11:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],6
	mov eax,1
	pop esi
	ret

 Block12:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],7
	mov eax,1
	pop esi
	ret

 Block13:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],8
	mov eax,1
	pop esi
	ret

 Block14:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0xA
	mov eax,1
	pop esi
	ret

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],9
	mov eax,1
	pop esi
	ret

 Block16:
	cmp dword ptr [esp+0x14],0
	jne Block18

 Block17:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0xC
	mov eax,1
	pop esi
	ret

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0xC
	mov dword ptr [eax+4],0xD
	mov dword ptr [eax+8],0xF
	mov dword ptr [eax+0xC],0x10
	mov eax,4
	pop esi
	ret

 Block19:
	cmp dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x11
	je Block72

 Block20:
	mov dword ptr [eax+4],0x3B
	mov eax,2
	pop esi
	ret

 Block21:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x32
	mov eax,1
	pop esi
	ret

 Block22:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x31
	mov eax,1
	pop esi
	ret

 Block23:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x33
	mov eax,1
	pop esi
	ret

 Block24:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x450
	mov eax,1
	pop esi
	ret

 Block25:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x44C
	mov eax,1
	pop esi
	ret

 Block26:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x44D
	mov eax,1
	pop esi
	ret

 Block27:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x44E
	mov eax,1
	pop esi
	ret

 Block28:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x44F
	mov eax,1
	pop esi
	ret

 Block29:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x12
	mov eax,1
	pop esi
	ret

 Block30:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x13
	mov eax,1
	pop esi
	ret

 Block31:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x14
	mov eax,1
	pop esi
	ret

 Block32:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x3E8
	mov eax,1
	pop esi
	ret

 Block33:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x3E9
	mov eax,1
	pop esi
	ret

 Block34:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x3EA
	mov eax,1
	pop esi
	ret

 Block35:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x3EB
	mov eax,1
	pop esi
	ret

 Block36:
	cmp esi,0x1B7F74
	jne Block40

 Block37:
	cmp dword ptr [esp+0x14],0
	jne Block39

 Block38:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x15
	mov eax,1
	pop esi
	ret

 Block39:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x15
	mov dword ptr [eax+4],0x1F
	mov dword ptr [eax+8],0x27
	mov eax,3
	pop esi
	ret

 Block40:
	cmp dword ptr [esp+0x14],0
	jne Block42

 Block41:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0xE
	mov eax,1
	pop esi
	ret

 Block42:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0xE
	mov dword ptr [eax+4],0x1E
	mov dword ptr [eax+8],0x26
	mov eax,3
	pop esi
	ret

 Block43:
	lea eax,[esi-0x1BA620]
	cmp eax,7
	ja Block63

 Block44:
	cmp EAX, 0
je Block45
cmp EAX, 1
je Block47
cmp EAX, 2
je Block50
cmp EAX, 3
je Block51
cmp EAX, 4
je Block52
cmp EAX, 5
je Block55
cmp EAX, 6
je Block58
cmp EAX, 7
je Block60


 Block45:
	cmp dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x17
	je Block72

 Block46:
	mov dword ptr [eax+4],0x22
	mov dword ptr [eax+8],0x2A
	mov eax,3
	pop esi
	ret

 Block47:
	cmp dword ptr [esp+0x14],0
	jne Block49

 Block48:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x16
	mov eax,1
	pop esi
	ret

 Block49:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x16
	mov dword ptr [eax+4],0x21
	mov dword ptr [eax+8],0x29
	mov eax,3
	pop esi
	ret

 Block50:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x18
	mov eax,1
	pop esi
	ret

 Block51:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x19
	mov eax,1
	pop esi
	ret

 Block52:
	cmp dword ptr [esp+0x14],0
	jne Block54

 Block53:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x1A
	mov eax,1
	pop esi
	ret

 Block54:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x1A
	mov dword ptr [eax+4],0x23
	mov dword ptr [eax+8],0x2B
	mov eax,3
	pop esi
	ret

 Block55:
	cmp dword ptr [esp+0x14],0
	jne Block57

 Block56:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x1B
	mov eax,1
	pop esi
	ret

 Block57:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x1B
	mov dword ptr [eax+4],0x24
	mov dword ptr [eax+8],0x2C
	mov eax,3
	pop esi
	ret

 Block58:
	cmp dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x1C
	je Block72

 Block59:
	mov dword ptr [eax+4],0x25
	mov dword ptr [eax+8],0x2D
	mov eax,3
	pop esi
	ret

 Block60:
	cmp dword ptr [esp+0x14],0
	jne Block62

 Block61:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0x2E
	mov eax,1
	pop esi
	ret

 Block62:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x2E
	mov dword ptr [eax+4],0x2F
	mov dword ptr [eax+0xC],0x30
	mov eax,3
	pop esi
	ret

 Block63:
	cmp dword ptr [esp+0x14],0
	jne Block39

 Block64:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],0x15
	mov eax,1
	pop esi
	ret

 Block65:
	cmp dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0x1D
	je Block72

 Block66:
	mov dword ptr [eax+4],0x20
	mov dword ptr [eax+8],0x28
	mov eax,3
	pop esi
	ret

 Block67:
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD
	je Block71

 Block68:
	cmp eax,0xE
	je Block71

 Block69:
	cmp eax,0x10
	je Block71

 Block70:
	cmp eax,0x11
	jne Block3

 Block71:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],0xB

 Block72:
	mov eax,1
	pop esi
	ret
}
}
// is_correct_bodypart
// 46FB58
static uint8_t _SUB_6F760_LOOKUP_TABLE_0[100] = {
0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
31, 31, 31, 8, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 31, 8, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 15, 16, 17, 
18, 19, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 
20, 21, 22, 23, 31, 31, 31, 31, 31, 31, 24, 25, 26, 31, 27, 28, 
29, 30, 139, 255, 
};
__SUB(0006F760, __cdecl, 146085,  int32_t, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call get_gender_from_id
	mov ecx,dword ptr [esp+0x14]
	add esp,4
	cmp ecx,2
	je Block4

 Block1:
	cmp eax,2
	je Block4

 Block2:
	cmp eax,ecx
	je Block4

 Block3:
	xor eax,eax
	pop esi
	ret

 Block4:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	lea eax,[ecx-0x64]
	cmp eax,0x61
	ja Block81

 Block5:
	movzx eax,byte ptr [eax+_SUB_6F760_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9
cmp EAX, 4
je Block10
cmp EAX, 5
je Block11
cmp EAX, 6
je Block12
cmp EAX, 7
je Block13
cmp EAX, 8
je Block14
cmp EAX, 9
je Block15
cmp EAX, 10
je Block16
cmp EAX, 11
je Block21
cmp EAX, 12
je Block24
cmp EAX, 13
je Block25
cmp EAX, 14
je Block26
cmp EAX, 15
je Block28
cmp EAX, 16
je Block29
cmp EAX, 17
je Block30
cmp EAX, 18
je Block31
cmp EAX, 19
je Block27
cmp EAX, 20
je Block39
cmp EAX, 21
je Block44
cmp EAX, 22
je Block72
cmp EAX, 23
je Block77
cmp EAX, 24
je Block32
cmp EAX, 25
je Block33
cmp EAX, 26
je Block34
cmp EAX, 27
je Block35
cmp EAX, 28
je Block36
cmp EAX, 29
je Block37
cmp EAX, 30
je Block38
cmp EAX, 31
je Block81


 Block6:
	xor eax,eax
	cmp dword ptr [esp+0xC],1
	pop esi
	sete al
	ret

 Block7:
	xor eax,eax
	cmp dword ptr [esp+0xC],2
	pop esi
	sete al
	ret

 Block8:
	xor eax,eax
	cmp dword ptr [esp+0xC],3
	pop esi
	sete al
	ret

 Block9:
	xor eax,eax
	cmp dword ptr [esp+0xC],4
	pop esi
	sete al
	ret

 Block10:
	xor eax,eax
	cmp dword ptr [esp+0xC],5
	pop esi
	sete al
	ret

 Block11:
	xor eax,eax
	cmp dword ptr [esp+0xC],6
	pop esi
	sete al
	ret

 Block12:
	xor eax,eax
	cmp dword ptr [esp+0xC],7
	pop esi
	sete al
	ret

 Block13:
	xor eax,eax
	cmp dword ptr [esp+0xC],8
	pop esi
	sete al
	ret

 Block14:
	xor eax,eax
	cmp dword ptr [esp+0xC],0xA
	pop esi
	sete al
	ret

 Block15:
	xor eax,eax
	cmp dword ptr [esp+0xC],9
	pop esi
	sete al
	ret

 Block16:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0xC
	je Block20

 Block17:
	cmp eax,0xD
	je Block20

 Block18:
	cmp eax,0xF
	je Block20

 Block19:
	cmp eax,0x10
	jne Block3

 Block20:
	mov eax,1
	pop esi
	ret

 Block21:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x11
	je Block20

 Block22:
	cmp eax,0x3B
	je Block20

 Block23:
	xor eax,eax
	pop esi
	ret

 Block24:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x32
	pop esi
	sete al
	ret

 Block25:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x31
	pop esi
	sete al
	ret

 Block26:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x33
	pop esi
	sete al
	ret

 Block27:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x450
	pop esi
	sete al
	ret

 Block28:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x44C
	pop esi
	sete al
	ret

 Block29:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x44D
	pop esi
	sete al
	ret

 Block30:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x44E
	pop esi
	sete al
	ret

 Block31:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x44F
	pop esi
	sete al
	ret

 Block32:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x12
	pop esi
	sete al
	ret

 Block33:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x13
	pop esi
	sete al
	ret

 Block34:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x14
	pop esi
	sete al
	ret

 Block35:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x3E8
	pop esi
	sete al
	ret

 Block36:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x3E9
	pop esi
	sete al
	ret

 Block37:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x3EA
	pop esi
	sete al
	ret

 Block38:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x3EB
	pop esi
	sete al
	ret

 Block39:
	mov eax,dword ptr [esp+0xC]
	cmp esi,0x1B7F74
	je Block73

 Block40:
	cmp eax,0xE
	je Block20

 Block41:
	cmp eax,0x1E
	je Block20

 Block42:
	cmp eax,0x26
	je Block20

 Block43:
	xor eax,eax
	pop esi
	ret

 Block44:
	lea eax,[esi-0x1BA620]
	cmp eax,7
	ja Block3

 Block45:
	cmp EAX, 0
je Block50
cmp EAX, 1
je Block46
cmp EAX, 2
je Block54
cmp EAX, 3
je Block55
cmp EAX, 4
je Block56
cmp EAX, 5
je Block60
cmp EAX, 6
je Block64
cmp EAX, 7
je Block68


 Block46:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x16
	je Block20

 Block47:
	cmp eax,0x21
	je Block20

 Block48:
	cmp eax,0x29
	je Block20

 Block49:
	xor eax,eax
	pop esi
	ret

 Block50:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x17
	je Block20

 Block51:
	cmp eax,0x22
	je Block20

 Block52:
	cmp eax,0x2A
	je Block20

 Block53:
	xor eax,eax
	pop esi
	ret

 Block54:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x18
	pop esi
	sete al
	ret

 Block55:
	xor eax,eax
	cmp dword ptr [esp+0xC],0x19
	pop esi
	sete al
	ret

 Block56:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x1A
	je Block20

 Block57:
	cmp eax,0x23
	je Block20

 Block58:
	cmp eax,0x2B
	je Block20

 Block59:
	xor eax,eax
	pop esi
	ret

 Block60:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x1B
	je Block20

 Block61:
	cmp eax,0x24
	je Block20

 Block62:
	cmp eax,0x2C
	je Block20

 Block63:
	xor eax,eax
	pop esi
	ret

 Block64:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x1C
	je Block20

 Block65:
	cmp eax,0x25
	je Block20

 Block66:
	cmp eax,0x2D
	je Block20

 Block67:
	xor eax,eax
	pop esi
	ret

 Block68:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x2E
	je Block20

 Block69:
	cmp eax,0x2F
	je Block20

 Block70:
	cmp eax,0x30
	je Block20

 Block71:
	xor eax,eax
	pop esi
	ret

 Block72:
	mov eax,dword ptr [esp+0xC]

 Block73:
	cmp eax,0x15
	je Block20

 Block74:
	cmp eax,0x1F
	je Block20

 Block75:
	cmp eax,0x27
	je Block20

 Block76:
	xor eax,eax
	pop esi
	ret

 Block77:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x1D
	je Block20

 Block78:
	cmp eax,0x20
	je Block20

 Block79:
	cmp eax,0x28
	je Block20

 Block80:
	xor eax,eax
	pop esi
	ret

 Block81:
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD
	je Block85

 Block82:
	cmp eax,0xE
	je Block85

 Block83:
	cmp eax,0x10
	je Block85

 Block84:
	cmp eax,0x11
	jne Block3

 Block85:
	xor eax,eax
	cmp dword ptr [esp+0xC],0xB
	pop esi
	sete al
	ret
}
}
