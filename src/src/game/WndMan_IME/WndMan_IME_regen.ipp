#include "regen.hpp"
// WndMan_IME.ipp
#include "WndMan_IME.hpp"

// attr_prec
__SUB(005B4CE0, __cdecl, 79261,  int32_t, unsigned char) {
__asm {

 Block0:
	movzx eax,byte ptr [esp+4]
	cmp eax,5
	ja Block8

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7


 Block2:
	xor eax,eax
	ret

 Block3:
	mov eax,1
	ret

 Block4:
	or eax,0xFFFFFFFF
	ret

 Block5:
	mov eax,2
	ret

 Block6:
	mov eax,0xFFFFFFFE
	ret

 Block7:
	mov eax,0xFFFFFFFD
	ret

 Block8:
	mov eax,0xFFFFFFFC
	ret
}
}
