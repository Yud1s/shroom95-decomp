#include "regen.hpp"
// CashShopAdvanced.ipp
#include "CashShopAdvanced.hpp"

// CWvsCommodityEx::GetCommodityExBySN
_SUB_EXCEPTION_HANDLER(9A960)
__SUB_CLASS_THIS(0009A960, __thiscall, 48675,  CWvsCommodityEx, const ZRef<CS_COMMODITY_EX>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9A960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x30]
	push edi
	mov dword ptr [esp+0x14],0
	call CWvsCommodityEx::GetCommodityExIndexBySN
	test eax,eax
	jl Block2

 Block1:
	mov edi,dword ptr [esp+0x2C]
	push eax
	push edi
	mov ecx,esi
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 8

 Block2:
	mov dword ptr [esp+0x18],0
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],1
	call ZRef<CS_COMMODITY_EX>::_Alloc
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x2C]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esi+0xC],edi
	lea edi,[esi+4]
	push edi
	mov dword ptr [eax+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x28],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block3:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 8
}
}
// CS_COMMODITY_EX::ToOldData
__SUB_CLASS_THIS0(00099DF0, __thiscall, 48540,  CS_COMMODITY_EX, ZRef<CS_COMMODITY>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],ecx
	test ecx,ecx
	je Block2

 Block1:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CS_COMMODITY_EX::CS_COMMODITY_EX
__SUB_CLASS_THIS0(0009A370, __thiscall, 48538,  CS_COMMODITY_EX, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CS_COMMODITY::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x78],eax
	int 3// TODO: 	mov dword ptr [esi],offset CS_COMMODITY_EX::`vftable'
	mov dword ptr [esi+0x7C],eax
	mov eax,esi
	pop esi
	ret
}
}
// CS_COMMODITY_EX::~CS_COMMODITY_EX
_SUB_EXCEPTION_HANDLER(9A390)
__SUB_CLASS_THIS0(0009A390, __thiscall, 48551,  CS_COMMODITY_EX, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9A390
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	lea ecx,[esi+0x7C]
	mov dword ptr [esp+0x14],0
	call ZArray<ZRef<CS_COMMODITY_EX>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CS_COMMODITY::~CS_COMMODITY
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CS_COMMODITY_EX::GetMinPrice
__SUB_CLASS_THIS0(000C67C0, __thiscall, 48550,  CS_COMMODITY_EX, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push esi
	xor esi,esi

 Block1:
	mov edx,dword ptr [ecx+0x7C]
	test edx,edx
	je Block6

 Block2:
	cmp esi,dword ptr [edx-4]
	jae Block6

 Block3:
	mov edx,dword ptr [edx+esi*8+4]
	mov edx,dword ptr [edx+0x20]
	cmp eax,edx
	jge Block5

 Block4:
	mov eax,edx

 Block5:
	inc esi
	jmp Block1

 Block6:
	pop esi
	ret
}
}
// CWvsCommodityEx::GetCommodityEx
__SUB_CLASS_THIS0(00099920, __thiscall, 48674,  CWvsCommodityEx, ZArray<ZRef<CS_COMMODITY_EX> >&) {
__asm {

 Block0:
	mov eax,ecx
	ret
}
}
// CWvsCommodityEx::GetCommodityExByIndex
__SUB_CLASS_THIS(00099E20, __thiscall, 48675,  CWvsCommodityEx, const ZRef<CS_COMMODITY_EX>, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+ecx*8+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CS_COMMODITY_EX::IsMulti
__SUB_CLASS_THIS0(00099910, __thiscall, 48541,  CS_COMMODITY_EX, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x78]
	ret
}
}
// CS_COMMODITY_EX::GetPackedCount
__SUB_CLASS_THIS0(000999C0, __thiscall, 48542,  CS_COMMODITY_EX, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x7C]
	test eax,eax
	jne Block2

 Block1:
	ret

 Block2:
	mov eax,dword ptr [eax-4]
	ret
}
}
// CWvsCommodityEx::_SortByPrice
_SUB_EXCEPTION_HANDLER(99E50)
__SUB(00099E50, __cdecl, 48679,  void, ZArray<ZRef<CS_COMMODITY_EX> >&, uint32_t, uint32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_99E50
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
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x40]
	add ecx,eax
	mov dword ptr [esp+0x1C],ecx
	cmp eax,ecx
	jae Block33

 Block1:
	mov edi,ecx
	lea edx,[eax*8]
	lea esi,[eax+1]
	sub edi,eax
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],edi
	jmp Block3

 Block3:
	mov dword ptr [esp+0x40],esi
	cmp esi,ecx
	jae Block32

 Block4:
	lea esp,[esp]

 Block5:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	lea eax,[edx+ecx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x20]
	xor ebx,ebx
	lea edi,[esi*8]
	mov ecx,dword ptr [edi+ecx+4]
	cmp dword ptr [esp+0x44],ebx
	je Block7

 Block6:
	cmp edx,dword ptr [ecx+0x20]
	setg bl
	jmp Block8

 Block7:
	cmp edx,dword ptr [ecx+0x20]
	setl bl

 Block8:
	mov ecx,ebx
	test ecx,ecx
	je Block30

 Block9:
	mov ebx,dword ptr [eax+4]
	mov dword ptr [esp+0x24],ebx
	test ebx,ebx
	je Block11

 Block10:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,dword ptr [esp+0x38]
	mov esi,dword ptr [ecx]
	mov eax,dword ptr [edi+esi+4]
	lea ebp,[edi+esi+4]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+esi+4]
	lea esi,[edx+esi+4]
	test eax,eax
	je Block18

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov dword ptr [esi],0

 Block18:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [esi],eax
	mov esi,dword ptr [ecx]
	add esi,edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block20

 Block19:
	lea edx,[ebx+4]
	push edx
	call edi

 Block20:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block24

 Block23:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block24:
	mov dword ptr [esi+4],0

 Block25:
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ebx,ebx
	je Block29

 Block26:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push esi
	call edi
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block28:
	mov dword ptr [esp+0x24],0

 Block29:
	mov esi,dword ptr [esp+0x40]

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x3C]
	inc esi
	mov dword ptr [esp+0x40],esi
	cmp esi,ecx
	jb Block5

 Block31:
	mov esi,dword ptr [esp+0x14]

 Block32:
	inc esi
	add edx,8
	sub dword ptr [esp+0x18],1
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x3C],edx
	jne Block3

 Block33:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CWvsCommodityEx::_SortBySN
_SUB_EXCEPTION_HANDLER(9A040)
__SUB(0009A040, __cdecl, 48679,  void, ZArray<ZRef<CS_COMMODITY_EX> >&, uint32_t, uint32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9A040
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
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x40]
	add ecx,eax
	mov dword ptr [esp+0x1C],ecx
	cmp eax,ecx
	jae Block33

 Block1:
	mov edi,ecx
	lea edx,[eax*8]
	lea esi,[eax+1]
	sub edi,eax
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],edi
	jmp Block3

 Block3:
	mov dword ptr [esp+0x40],esi
	cmp esi,ecx
	jae Block32

 Block4:
	lea esp,[esp]

 Block5:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	lea eax,[edx+ecx]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0xC]
	xor ebx,ebx
	lea edi,[esi*8]
	mov ecx,dword ptr [edi+ecx+4]
	cmp dword ptr [esp+0x44],ebx
	je Block7

 Block6:
	cmp edx,dword ptr [ecx+0xC]
	setg bl
	jmp Block8

 Block7:
	cmp edx,dword ptr [ecx+0xC]
	setl bl

 Block8:
	mov ecx,ebx
	test ecx,ecx
	je Block30

 Block9:
	mov ebx,dword ptr [eax+4]
	mov dword ptr [esp+0x24],ebx
	test ebx,ebx
	je Block11

 Block10:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,dword ptr [esp+0x38]
	mov esi,dword ptr [ecx]
	mov eax,dword ptr [edi+esi+4]
	lea ebp,[edi+esi+4]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+esi+4]
	lea esi,[edx+esi+4]
	test eax,eax
	je Block18

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov dword ptr [esi],0

 Block18:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [esi],eax
	mov esi,dword ptr [ecx]
	add esi,edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block20

 Block19:
	lea edx,[ebx+4]
	push edx
	call edi

 Block20:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block24

 Block23:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block24:
	mov dword ptr [esi+4],0

 Block25:
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ebx,ebx
	je Block29

 Block26:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push esi
	call edi
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block28:
	mov dword ptr [esp+0x24],0

 Block29:
	mov esi,dword ptr [esp+0x40]

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x3C]
	inc esi
	mov dword ptr [esp+0x40],esi
	cmp esi,ecx
	jb Block5

 Block31:
	mov esi,dword ptr [esp+0x14]

 Block32:
	inc esi
	add edx,8
	sub dword ptr [esp+0x18],1
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x3C],edx
	jne Block3

 Block33:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CWvsCommodityEx::~CWvsCommodityEx
_SUB_EXCEPTION_HANDLER(9A480)
__SUB_CLASS_THIS0(0009A480, __thiscall, 48673,  CWvsCommodityEx, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9A480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0x3F80]
	add ebp,0x3F80
	xor edi,edi
	mov dword ptr [esp+0x28],ebp
	cmp eax,edi
	jne Block2

 Block1:
	mov dword ptr [esp+0x20],edi
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x20],eax

 Block3:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block6

 Block4:
	cmp dword ptr [eax-4],edi
	jbe Block6

 Block5:
	call ZArray<ZRef<CS_COMMODITY_EX>>::RemoveAll

 Block6:
	lea ecx,[esp+0x1B]
	push ecx
	push edi
	mov ecx,esi
	call ZArray<ZRef<CS_COMMODITY_EX>>::_Alloc
	push 0x64
	lea ecx,[esp+0x58]
	int 3// TODO: 	mov dword ptr [esp+0x58],offset ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::`vftable'
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x60],0x1F
	mov dword ptr [esp+0x64],edi
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::_CalcAutoGrow
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x78],edi
	cmp eax,edi
	jne Block8

 Block7:
	xor eax,eax
	jmp Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	mov edx,eax
	shl edx,4
	sub edx,eax
	mov eax,0xCCCCCCCD
	mul edx
	shr edx,3
	cmp dword ptr [esp+0x5C],edx
	jae Block11

 Block10:
	push edi
	push edx
	lea ecx,[esp+0x5C]
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::ResizeHashTable

 Block11:
	mov dword ptr [esp+0x1C],edi
	cmp dword ptr [esp+0x20],edi
	jbe Block45

 Block12:
	jmp Block14

 Block13:
	mov ebp,dword ptr [esp+0x28]

 Block14:
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [esi+eax+4]
	mov ebx,dword ptr [eax+0xC]
	push 0x80
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x78],1
	cmp eax,edi
	je Block16

 Block15:
	mov ecx,eax
	call CS_COMMODITY_EX::_ctor_default
	mov edi,eax

 Block16:
	mov dword ptr [esp+0x38],edi
	test edi,edi
	je Block18

 Block17:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov edx,dword ptr [ebp]
	mov esi,dword ptr [esi+edx+4]
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x7C],2
	call CS_COMMODITY::operator=
	xor ebp,ebp
	mov dword ptr [esp+0x48],ebp
	mov eax,0x14F8B589
	imul ebx
	sar edx,0xD
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	xor ebx,ebx
	mov byte ptr [esp+0x78],3
	cmp esi,0x66
	jne Block21

 Block19:
	cmp dword ptr [edi+0x4C],ebx
	jne Block22

 Block20:
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x34]
	push eax
	push 0xFFFFFFFF
	call ZArray<ZRef<CS_COMMODITY_EX>>::InsertBefore
	mov ecx,eax
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov dword ptr [edi+0x78],ebx
	jmp Block41

 Block21:
	cmp dword ptr [edi+0x4C],ebx
	je Block41

 Block22:
	mov eax,dword ptr [esp+0x2C]
	push ebx
	cdq
	push 0x3E8
	push edx
	push eax
	call __allmul
	mov ecx,eax
	mov eax,edx
	mov dword ptr [esp+0x2C],eax
	mov eax,esi
	cdq
	add ecx,eax
	mov eax,dword ptr [esp+0x2C]
	adc eax,edx
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ecx
	push edx
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x44],eax
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::GetPos
	cmp eax,ebx
	je Block36

 Block23:
	push ebx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x5C]
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::GetAt
	push eax
	lea ecx,[esp+0x48]
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov ebp,dword ptr [esp+0x48]
	cmp ebp,ebx
	je Block36

 Block24:
	mov eax,dword ptr [ebp+0x7C]
	lea ebx,[ebp+0x7C]
	test eax,eax
	je Block26

 Block25:
	cmp dword ptr [eax-4],0
	jne Block35

 Block26:
	push 0x80
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x78],4
	test eax,eax
	je Block28

 Block27:
	mov ecx,eax
	call CS_COMMODITY_EX::_ctor_default
	mov esi,eax
	jmp Block29

 Block28:
	xor esi,esi

 Block29:
	mov dword ptr [esp+0x50],esi
	test esi,esi
	je Block31

 Block30:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0x7C],5
	call CS_COMMODITY::operator=
	lea edx,[esp+0x4C]
	push edx
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZRef<CS_COMMODITY_EX>>::InsertBefore
	mov ecx,eax
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov byte ptr [esp+0x78],3
	test esi,esi
	je Block35

 Block32:
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block33:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block34:
	mov dword ptr [esp+0x50],0

 Block35:
	lea eax,[esp+0x34]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x7C]
	call ZArray<ZRef<CS_COMMODITY_EX>>::InsertBefore
	mov ecx,eax
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov eax,1
	mov dword ptr [ebp+0x78],eax
	mov dword ptr [edi+0x78],eax
	xor ebx,ebx
	jmp Block37

 Block36:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push 0xFFFFFFFF
	call ZArray<ZRef<CS_COMMODITY_EX>>::InsertBefore
	mov ecx,eax
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	push ebx
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x5C]
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::Insert
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[eax+0x10]
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov dword ptr [edi+0x78],ebx

 Block37:
	mov byte ptr [esp+0x78],2
	cmp ebp,ebx
	je Block41

 Block38:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block39:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block40:
	mov dword ptr [esp+0x48],ebx

 Block41:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x7C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block42:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block43:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	xor edi,edi
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x1C],eax
	cmp eax,dword ptr [esp+0x20]
	jb Block13

 Block44:
	mov esi,dword ptr [esp+0x24]

 Block45:
	lea ecx,[esp+0x54]
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::RemoveAll
	mov eax,dword ptr [esi]
	cmp eax,edi
	jne Block47

 Block46:
	xor eax,eax
	jmp Block48

 Block47:
	mov eax,dword ptr [eax-4]

 Block48:
	push 1
	push eax
	push edi
	push esi
	call CWvsCommodityEx::_SortBySN
	add esp,0x10
	mov ecx,esi
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	test eax,eax
	jbe Block57

 Block49:
	jmp Block51

 Block51:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+edi*8+4]
	cmp dword ptr [eax+0x78],0
	je Block56

 Block52:
	cmp dword ptr [eax+0x4C],0
	je Block56

 Block53:
	mov ecx,dword ptr [eax+0x7C]
	test ecx,ecx
	je Block55

 Block54:
	mov ecx,dword ptr [ecx-4]

 Block55:
	push 1
	push ecx
	add eax,0x7C
	push 0
	push eax
	call CWvsCommodityEx::_SortByPrice
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+edi*8+4]
	mov eax,dword ptr [ecx+0x7C]
	mov eax,dword ptr [eax+4]
	add esp,0x10
	push eax
	call CS_COMMODITY::operator=

 Block56:
	mov ecx,esi
	inc edi
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	cmp edi,eax
	jb Block51

 Block57:
	mov ecx,esi
	xor edi,edi
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	test eax,eax
	jbe Block66

 Block58:
	jmp Block60

 Block60:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+edi*8+4]
	cmp dword ptr [eax+0x78],0
	je Block65

 Block61:
	cmp dword ptr [eax+0x4C],0
	je Block65

 Block62:
	mov ecx,dword ptr [eax+0x7C]
	test ecx,ecx
	je Block64

 Block63:
	mov ecx,dword ptr [ecx-4]

 Block64:
	push 1
	push ecx
	add eax,0x7C
	push 0
	push eax
	call CWvsCommodityEx::_SortByPrice
	add esp,0x10

 Block65:
	mov ecx,esi
	inc edi
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	cmp edi,eax
	jb Block60

 Block66:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x54],offset ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::`vftable'
	call ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64>::RemoveAll
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsCommodityEx::GetCommodityExIndexBySN
__SUB_CLASS_THIS(000999D0, __thiscall, 48676,  CWvsCommodityEx, long, long) {
__asm {

 Block0:
	mov eax,0x14F8B589
	imul dword ptr [esp+4]
	mov eax,dword ptr [ecx]
	sub esp,8
	push ebx
	push ebp
	sar edx,0xD
	push esi
	push edi
	mov edi,edx
	shr edi,0x1F
	xor ebp,ebp
	add edi,edx
	cmp eax,ebp
	jne Block2

 Block1:
	mov dword ptr [esp+0x10],ebp
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x10],ecx

 Block3:
	mov dword ptr [esp+0x14],ebp
	cmp dword ptr [esp+0x10],ebp
	jbe Block17

 Block4:
	lea ebx,[eax+4]
	lea esp,[esp]

 Block5:
	mov ecx,dword ptr [ebx]
	mov esi,dword ptr [ecx+0xC]
	mov eax,0x14F8B589
	imul esi
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,edi
	jne Block16

 Block6:
	cmp esi,dword ptr [esp+0x1C]
	je Block18

 Block7:
	call CS_COMMODITY_EX::IsMulti
	test eax,eax
	je Block16

 Block8:
	mov eax,dword ptr [ecx+0x7C]
	test eax,eax
	jne Block10

 Block9:
	xor esi,esi
	jmp Block11

 Block10:
	mov esi,dword ptr [eax-4]

 Block11:
	xor edx,edx
	test esi,esi
	jbe Block16

 Block12:
	add eax,4

 Block13:
	mov ecx,dword ptr [eax]
	mov ebp,dword ptr [esp+0x1C]
	cmp dword ptr [ecx+0xC],ebp
	je Block19

 Block14:
	inc edx
	add eax,8
	cmp edx,esi
	jb Block13

 Block15:
	mov ebp,dword ptr [esp+0x14]

 Block16:
	inc ebp
	add ebx,8
	mov dword ptr [esp+0x14],ebp
	cmp ebp,dword ptr [esp+0x10]
	jb Block5

 Block17:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,8
	ret 4

 Block18:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	add esp,8
	ret 4

 Block19:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
