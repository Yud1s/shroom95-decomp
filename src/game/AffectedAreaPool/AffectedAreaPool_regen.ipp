#include "regen.hpp"
// AffectedAreaPool.ipp
#include "AffectedAreaPool.hpp"

// CAffectedAreaPool::CheckForTooManyClouds
_SUB_EXCEPTION_HANDLER(34B20)
__SUB_CLASS_THIS(00034B20, __thiscall, 51436,  CAffectedAreaPool, int32_t, const tagPOINT&, NakedParam<ZRef<AFFECTEDAREA>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34B20
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
	mov ecx,dword ptr [ecx+0x10]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block22

 Block1:
	lea ebx,[ebx]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block4:
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea ecx,[esi+0x20]
	push ecx
	mov byte ptr [esp+0x34],1
	call PtInRect
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block15

 Block5:
	mov eax,dword ptr [esp+0x38]
	cmp esi,eax
	je Block29

 Block6:
	mov edx,dword ptr [esi+0x48]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	cmp edx,dword ptr [eax+0x48]
	jne Block17

 Block7:
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call ebx
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block14

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call ebx
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov eax,1
	jmp Block28

 Block15:
	test esi,esi
	je Block21

 Block16:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi

 Block17:
	call ebp
	test eax,eax
	jne Block20

 Block18:
	push edi
	call ebx
	test esi,esi
	je Block20

 Block19:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block20:
	mov dword ptr [esp+0x1C],0

 Block21:
	cmp dword ptr [esp+0x14],0
	jne Block2

 Block22:
	mov eax,dword ptr [esp+0x38]

 Block23:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block27

 Block24:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block27

 Block25:
	push edi
	call ebx
	test esi,esi
	je Block27

 Block26:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block27:
	xor eax,eax

 Block28:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC

 Block29:
	test esi,esi
	je Block23

 Block30:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block22

 Block31:
	push edi
	call ebx
	test esi,esi
	je Block22

 Block32:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block22
}
}
// CAffectedAreaPool::IsUsableAreaBuffItem
_SUB_EXCEPTION_HANDLER(34E10)
__SUB_CLASS_THIS(00034E10, __thiscall, 51425,  CAffectedAreaPool, int32_t, unsigned long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call dword ptr [ZImports::_timeGetTime]
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block13

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block4:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x2C],0
	jl Block9

 Block5:
	cmp dword ptr [esi+4],3
	jne Block9

 Block6:
	mov eax,dword ptr [esp+0x34]
	cmp dword ptr [esi+8],eax
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp dword ptr [esi+0xC],ecx
	je Block15

 Block8:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	push edx
	push eax
	lea ecx,[esi+0x20]
	push ecx
	call PtInRect
	test eax,eax
	jne Block15

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call ebp
	test esi,esi
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block12:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block13:
	mov eax,1

 Block14:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x10

 Block15:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block18

 Block16:
	push edi
	call ebp
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	xor eax,eax
	jmp Block14
}
}
// CAffectedAreaPool::RedrawForPhase
_SUB_EXCEPTION_HANDLER(37D50)
__SUB_CLASS_THIS(00037D50, __thiscall, 51413,  CAffectedAreaPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block12

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block4:
	lea ecx,[esi+0x40]
	mov dword ptr [esp+0x2C],0
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block6

 Block5:
	lea edx,[esi-0xC]
	push edx
	call ebx

 Block6:
	mov ecx,ebp
	call CAffectedAreaPool::AffectedAreaAnimationCreated
	mov eax,dword ptr [esp+0x34]
	cmp eax,dword ptr [esi+0x48]
	jne Block8

 Block7:
	call get_update_time
	push eax
	sub esp,8
	mov eax,esp
	lea ecx,[esi-0xC]
	mov dword ptr [esp+0x24],esp
	push ecx
	mov dword ptr [eax+4],esi
	call ebx
	mov ecx,ebp
	call CAffectedAreaPool::FindAndDraw

 Block8:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push edi
	call ebx
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block12:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CAffectedAreaPool::IsAbleToInsertExclusiveArea
_SUB_EXCEPTION_HANDLER(35480)
__SUB_CLASS_THIS(00035480, __thiscall, 51426,  CAffectedAreaPool, int32_t, const tagRECT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x10]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block10

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block4:
	cmp dword ptr [esi+0xC],0xB8CC9D
	mov dword ptr [esp+0x38],0
	jne Block6

 Block5:
	mov ecx,dword ptr [esp+0x40]
	push ecx
	lea edx,[esi+0x20]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IntersectRect
	test eax,eax
	jne Block12

 Block6:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block9

 Block7:
	push edi
	call ebp
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],0
	jne Block2

 Block10:
	mov eax,1

 Block11:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block12:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block15

 Block13:
	push edi
	call ebp
	test esi,esi
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	xor eax,eax
	jmp Block11
}
}
// CAffectedAreaPool::CAffectedAreaPool
__SUB_CLASS_THIS0(000341A0, __thiscall, 51410,  CAffectedAreaPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esi+4]
	xor edx,edx
	cmp eax,edx
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance],edx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CAffectedAreaPool::`vftable'
	lea ecx,[esi+0x18]
	int 3// TODO: 	mov dword ptr [eax],offset ZList<ZRef<AFFECTEDAREA>>::`vftable'
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],edx
	mov dword ptr [eax+0x10],edx
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edx
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edx
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::_CalcAutoGrow
	mov eax,esi
	pop esi
	ret
}
}
// CAffectedAreaPool::Update
_SUB_EXCEPTION_HANDLER(367F0)
__SUB_CLASS_THIS(000367F0, __thiscall, 51413,  CAffectedAreaPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [edi+0x10]
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block36

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	jmp Block3

 Block2:
	mov edi,dword ptr [esp+0x14]

 Block3:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block5:
	cmp dword ptr [esi+0xC],0x1EA20AE
	mov dword ptr [esp+0x50],ebx
	jne Block7

 Block6:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	mov dword ptr [esp+0x24],esp
	push edx
	call ebp
	mov eax,dword ptr [esp+0x60]
	push eax
	mov ecx,edi
	call CAffectedAreaPool::ShelterUpdate
	jmp Block31

 Block7:
	cmp dword ptr [esi+4],2
	jne Block25

 Block8:
	cmp dword ptr [esi+0x1C],ebx
	jne Block25

 Block9:
	mov ecx,dword ptr [esi+0x18]
	sub ecx,dword ptr [esp+0x58]
	cmp ecx,0x1F4
	jge Block25

 Block10:
	mov dword ptr [esi+0x1C],1
	xor edi,edi
	lea ebx,[ebx]

 Block11:
	mov eax,dword ptr [esi+0x40]
	cmp eax,ebx
	je Block25

 Block12:
	cmp edi,dword ptr [eax-4]
	jae Block25

 Block13:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block37

 Block14:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],1
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block37

 Block15:
	mov eax,dword ptr [esi+0x40]
	mov ecx,dword ptr [eax+edi*4]
	lea eax,[eax+edi*4]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebx
	je Block38

 Block16:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebx
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],1
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block11

 Block23:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	inc edi
	jmp Block11

 Block25:
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebx
	je Block30

 Block26:
	mov ecx,dword ptr [esp+0x58]
	mov edx,ecx
	sub edx,eax
	js Block30

 Block27:
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	lea edi,[esi-0x10]
	lea eax,[edi+4]
	mov dword ptr [esp+0x28],esp
	push eax
	call ebp
	mov ecx,dword ptr [esp+0x20]
	call CAffectedAreaPool::FindAndDraw
	mov dword ptr [esi+0x14],ebx
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block28:
	push esi
	call ebp
	cmp edi,ebx
	je Block35

 Block29:
	mov edx,dword ptr [edi]
	mov ecx,edi
	jmp Block34

 Block30:
	add esi,0xFFFFFFF0

 Block31:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block32:
	push edi
	call ebp
	cmp esi,ebx
	je Block35

 Block33:
	mov edx,dword ptr [esi]
	mov ecx,esi

 Block34:
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block35:
	mov dword ptr [esp+0x24],ebx
	cmp dword ptr [esp+0x18],ebx
	jne Block2

 Block36:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4

 Block37:
	push eax
	call _com_issue_error

 Block38:
	push 0x80004003
	call _com_issue_error
}
}
// CAffectedAreaPool::GetAffectedAreaByPoint
_SUB_EXCEPTION_HANDLER(34CC0)
__SUB_CLASS_THIS(00034CC0, __thiscall, 51418,  CAffectedAreaPool, ZRef<AFFECTEDAREA>*, ZRef<AFFECTEDAREA>*, NakedParam<tagPOINT>, unsigned long&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34CC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	call get_update_time
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],esi
	cmp esi,ebx
	je Block12

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block4:
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esi+4],ebx
	jne Block8

 Block5:
	mov edx,dword ptr [esp+0x18]
	sub edx,dword ptr [esi+0x14]
	js Block8

 Block6:
	mov eax,dword ptr [esp+0x44]
	cmp dword ptr [esi+0x48],eax
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push edx
	lea eax,[esi+0x20]
	push eax
	call PtInRect
	test eax,eax
	jne Block14

 Block8:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push edi
	call ebp
	cmp esi,ebx
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov dword ptr [esp+0x20],ebx
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebx

 Block13:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x14

 Block14:
	mov cx,word ptr [esi+0xC]
	movzx eax,byte ptr [esi+0x10]
	mov ebx,dword ptr [esp+0x34]
	shl cx,8
	movzx edx,cx
	mov ecx,dword ptr [esp+0x40]
	or edx,eax
	mov dword ptr [ebx+4],esi
	mov dword ptr [ecx],edx
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	push edx
	call ebp
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push edi
	call ebp
	test esi,esi
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block17:
	mov eax,ebx
	jmp Block13
}
}
// CAffectedAreaPool::RemoveAffectedArea
_SUB_EXCEPTION_HANDLER(34100)
__SUB_CLASS_THIS(00034100, __thiscall, 51440,  CAffectedAreaPool, void, NakedParam<ZRef<AFFECTEDAREA>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34100
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x44]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esp+0x18],0
	call ZList<ZRef<AFFECTEDAREA>>::RemoveAt
	mov edx,dword ptr [esp+0x20]
	push edx
	lea ecx,[esi+0x18]
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::RemoveKey
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CAffectedAreaPool::GetAffectAreaByPoint
_SUB_EXCEPTION_HANDLER(350F0)
__SUB_CLASS_THIS(000350F0, __thiscall, 51423,  CAffectedAreaPool, ZRef<AFFECTEDAREA>*, ZRef<AFFECTEDAREA>*, long, unsigned long, ZArray<unsigned long>&, NakedParam<tagPOINT>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_350F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],0
	call get_update_time
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block21

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	xor edi,edi
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,edi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block4:
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],edi
	cmp dword ptr [esi+0xC],edx
	jne Block17

 Block5:
	mov eax,dword ptr [esp+0x18]
	sub eax,dword ptr [esi+0x14]
	js Block17

 Block6:
	mov ecx,dword ptr [esp+0x4C]
	cmp dword ptr [esi+0x48],ecx
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block20

 Block8:
	push edi
	call ebx
	test esi,esi
	je Block20

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block20

 Block10:
	mov ecx,dword ptr [esp+0x40]
	call ZArray<unsigned long>::GetCount
	test eax,eax
	jbe Block14

 Block11:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esi+8]
	mov ecx,dword ptr [ecx]
	mov edi,edi

 Block12:
	cmp edx,dword ptr [ecx]
	je Block14

 Block13:
	inc edi
	add ecx,4
	cmp edi,eax
	jb Block12

 Block14:
	cmp edi,eax
	jne Block16

 Block15:
	mov edx,dword ptr [esp+0x3C]
	cmp dword ptr [esi+8],edx
	jne Block17

 Block16:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	push eax
	push ecx
	lea edx,[esi+0x20]
	push edx
	call PtInRect
	test eax,eax
	jne Block23

 Block17:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block20

 Block18:
	push edi
	call ebx
	test esi,esi
	je Block20

 Block19:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block20:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block21:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [eax+4],0

 Block22:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x1C

 Block23:
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [ebx+4],esi
	add esi,0xFFFFFFF0
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block26

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block26

 Block25:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block26:
	mov eax,ebx
	jmp Block22
}
}
// CAffectedAreaPool::FindAndDraw
_SUB_EXCEPTION_HANDLER(35900)
__SUB_CLASS_THIS(00035900, __thiscall, 51438,  CAffectedAreaPool, void, NakedParam<ZRef<AFFECTEDAREA>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x2C],ecx
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0xD0],ebx
	cmp eax,ebx
	jne Block5

 Block1:
	mov eax,dword ptr [esp+0xDC]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp eax,ebx
	je Block91

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block91

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block91

 Block5:
	mov eax,dword ptr [eax+0x2E18]
	mov ecx,dword ptr [esp+0xDC]
	mov dword ptr [ecx+0x38],ebx
	mov esi,dword ptr [esp+0xDC]
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [esi+0x40]
	cmp eax,ebx
	jne Block7

 Block6:
	xor eax,eax
	jmp Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	cmp eax,ebx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],ebx
	jle Block87

 Block9:
	mov ebp,dword ptr [ZImports::_VariantInit]
	nop

 Block10:
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x40]
	add edi,edi
	add edi,edi
	mov esi,dword ptr [eax+edi]
	add eax,edi
	cmp esi,ebx
	je Block92

 Block11:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xDC]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	test dword ptr [esp+0x18],0xFF000000
	jne Block86

 Block14:
	mov eax,dword ptr [esp+0xDC]
	mov edx,dword ptr [esp+0x34]
	cmp edx,dword ptr [eax+0x48]
	jne Block86

 Block15:
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],ebx
	mov eax,dword ptr [eax+0x40]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],1
	cmp eax,ebx
	je Block92

 Block16:
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xD0],2
	cmp esi,ebx
	je Block92

 Block17:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xD0],1
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xD0],bl
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],ebx
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD0],al
	mov eax,dword ptr [ecx+0x40]
	add eax,edi
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block92

 Block26:
	lea edx,[esp+0x70]
	push edx
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xD0],4
	cmp esi,ebx
	je Block92

 Block27:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xD0],3
	cmp eax,ebx
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xD0],bl
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [esp+0xDC]
	mov eax,dword ptr [eax+0x40]
	mov esi,dword ptr [eax+edi]
	add eax,edi
	cmp esi,ebx
	je Block92

 Block36:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0xDC]
	mov eax,dword ptr [eax+0x40]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+edi]
	add eax,edi
	add edx,ecx
	mov dword ptr [esp+0xC0],edx
	cmp esi,ebx
	je Block92

 Block39:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block41

 Block40:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x14]
	sub esp,8
	add edx,ecx
	mov ecx,dword ptr [esp+0xE4]
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0xE4]
	mov dword ptr [esp+0xCC],edx
	mov dword ptr [esp+0x28],esp
	cmp eax,ebx
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0xC8]
	push edx
	call CAffectedAreaPool::CheckForTooManyClouds
	cmp eax,ebx
	je Block45

 Block44:
	mov eax,dword ptr [esp+0xDC]
	mov dword ptr [eax+0x38],1
	jmp Block86

 Block45:
	mov ecx,dword ptr [esp+0xDC]
	cmp dword ptr [ecx+0xC],0xB8CC9D
	jne Block59

 Block46:
	lea edx,[esp+0x50]
	push edx
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block47:
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xD4],5
	call ebp
	lea edx,[esp+0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block48:
	mov eax,dword ptr [esp+0xDC]
	mov eax,dword ptr [eax+0x40]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],6
	cmp eax,ebx
	je Block92

 Block49:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],7
	cmp ecx,ebx
	je Block92

 Block50:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x94]
	push eax
	push ebx
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],6
	cmp eax,ebx
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov esi,8
	mov byte ptr [esp+0xD0],5
	cmp word ptr [esp+0x90],si
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0xD0],bl
	cmp word ptr [esp+0x50],si
	jne Block58

 Block57:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	jmp Block71

 Block58:
	lea eax,[esp+0x50]
	jmp Block74

 Block59:
	lea ecx,[esp+0x80]
	push ecx
	call ebp
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block60:
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0xD4],8
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block61:
	mov edx,dword ptr [esp+0xDC]
	mov eax,dword ptr [edx+0x40]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],9
	cmp eax,ebx
	je Block92

 Block62:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	mov ecx,offset _D_G_RAND
	mov byte ptr [esp+0xD0],0xA
	call CRand32::Random
	xor edx,edx
	mov ecx,0x64
	div ecx
	mov ecx,dword ptr [esi]
	lea eax,[edx+0x64]
	cmp ecx,ebx
	je Block92

 Block63:
	lea edx,[esp+0x80]
	push edx
	lea edx,[esp+0x64]
	push edx
	push ebx
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xD0],9
	cmp eax,ebx
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,8
	mov byte ptr [esp+0xD0],8
	cmp word ptr [esp+0x60],si
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebx
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [esp+0xD0],bl
	cmp word ptr [esp+0x80],si
	jne Block73

 Block70:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx

 Block71:
	cmp eax,ebx
	je Block75

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block73:
	lea eax,[esp+0x80]

 Block74:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	lea ecx,[esp+0xA0]
	push ecx
	call ebp
	lea edx,[esp+0xA0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block76:
	lea eax,[esp+0xB0]
	push eax
	mov byte ptr [esp+0xD4],0xB
	call ebp
	lea ecx,[esp+0xB0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block77:
	mov edx,dword ptr [esp+0xDC]
	mov eax,dword ptr [edx+0x40]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0xC
	cmp eax,ebx
	je Block92

 Block78:
	lea ecx,[esp+0xA0]
	push ecx
	lea edx,[esp+0xB4]
	push edx
	push 0x20
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xD0],0xB
	cmp word ptr [esp+0xB0],si
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	cmp eax,ebx
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [esp+0xD0],bl
	cmp word ptr [esp+0xA0],si
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	cmp eax,ebx
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0xDC]
	inc eax
	cmp eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],eax
	jl Block10

 Block87:
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp esi,ebx
	je Block91

 Block88:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block89:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block91

 Block90:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block91:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret 0xC

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	push eax
	call _com_issue_error
}
}
// CAffectedAreaPool::~CAffectedAreaPool
_SUB_EXCEPTION_HANDLER(34200)
__SUB_CLASS_THIS0(00034200, __thiscall, 51412,  CAffectedAreaPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34200
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
	int 3// TODO: 	mov dword ptr [esi],offset CAffectedAreaPool::`vftable'
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<AFFECTEDAREA>>::`vftable'
	call ZList<ZRef<AFFECTEDAREA>>::RemoveAll
	mov dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CAffectedAreaPool::OnPacket
__SUB_CLASS_THIS(00038330, __thiscall, 51427,  CAffectedAreaPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x148
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CAffectedAreaPool::OnAffectedAreaRemoved
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CAffectedAreaPool::OnAffectedAreaCreated

 Block4:
	ret 8
}
}
// CAffectedAreaPool::OnAffectedAreaCreated
_SUB_EXCEPTION_HANDLER(37EC0)
__SUB_CLASS_THIS(00037EC0, __thiscall, 51430,  CAffectedAreaPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37EC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	call get_update_time
	mov esi,dword ptr [esp+0x88]
	mov ecx,esi
	mov dword ptr [esp+0x2C],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x88],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode2
	push 0x10
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,esi
	movzx edi,ax
	call CInPacket::DecodeBuffer
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x14]
	xor esi,esi
	push esi
	lea edx,[esp+0x8C]
	push edx
	add ecx,0x18
	mov dword ptr [esp+0x30],eax
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::GetAt
	mov dword ptr [esp+0x34],esi
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x80],esi
	call ZRef<AFFECTEDAREA>::_Alloc
	imul edi,0x64
	mov esi,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	add edi,dword ptr [esp+0x2C]
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr [esi+0xC],ebp
	mov dword ptr [esi+0x10],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esi+0x24],ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x28],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x30],ecx
	xor eax,eax
	mov dword ptr [esi+0x48],edx
	mov dword ptr [esi+0x38],eax
	mov dword ptr [esi+0x14],edi
	cmp edi,eax
	jne Block2

 Block1:
	mov dword ptr [esi+0x14],1

 Block2:
	mov dword ptr [esi+0x3C],eax
	cmp ebx,3
	jne Block38

 Block3:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	call CItemInfo::GetAreaBuffItem
	xor ebx,ebx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x28]
	push 0x12FD
	push eax
	mov byte ptr [esp+0x88],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x8C],3
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push eax
	lea ecx,[esp+0x8C]
	call _xbstr_t::_ctor_1
	mov ebp,dword ptr [esp+0x88]
	mov dword ptr [esp+0x2C],ebp
	cmp ebp,ebx
	je Block5

 Block4:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block5:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],2
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],4
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push ebx
	push ebx
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x9C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block13

 Block12:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov byte ptr [esp+0x94],6
	cmp dword ptr [_D_G_RM],ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0x98],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x8C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	cmp word ptr [esp+0x68],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x80],9
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x68]
	push eax
	call edi

 Block22:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],0xA
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x38]
	push edx
	call edi

 Block26:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],0xB
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block30:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+8]
	mov edi,dword ptr [esp+0x88]
	imul eax,0x3E8
	add eax,dword ptr [esi+0x14]
	lea ecx,[esp+0x58]
	push ecx
	mov dword ptr [esi+0x18],eax
	push ecx
	mov eax,esp
	mov dword ptr [esi+0x1C],ebx
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block32

 Block31:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block32:
	lea ecx,[esi+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CAffectedAreaPool::MakeLayer_Fog
	mov byte ptr [esp+0x80],2
	cmp edi,ebx
	je Block34

 Block33:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],1
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov byte ptr [esp+0x80],0
	cmp ebp,ebx
	je Block39

 Block37:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release
	jmp Block39

 Block38:
	push 1
	sub esp,8
	mov eax,esp
	lea ecx,[esi-0xC]
	mov dword ptr [esp+0x94],esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	call CAffectedAreaPool::AffectedAreaAnimationCreated
	xor ebx,ebx

 Block39:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	mov dword ptr [esp+0x90],esp
	push edx
	call ebp
	mov ecx,dword ptr [esp+0x1C]
	call CAffectedAreaPool::AddAffectedArea
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	push edi
	call ebp
	cmp esi,ebx
	je Block42

 Block41:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block42:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4
}
}
// CAffectedAreaPool::GetAr01AreaMAD
_SUB_EXCEPTION_HANDLER(35390)
__SUB_CLASS_THIS(00035390, __thiscall, 51429,  CAffectedAreaPool, long, unsigned long, ZArray<unsigned long>&, NakedParam<tagPOINT>, unsigned long&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push edi
	push eax
	mov eax,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	push edx
	push 0x217E772
	lea eax,[esp+0x24]
	push eax
	call CAffectedAreaPool::GetAffectAreaByPoint
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	je Block3

 Block1:
	cmp dword ptr [esi+0x48],edi
	je Block4

 Block2:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<AFFECTEDAREA>::~ZRef<AFFECTEDAREA>

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0x18

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x217E772
	call CSkillInfo::GetSkill
	mov ecx,dword ptr [esi+0x10]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x174]
	push edx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0xC]
	mov esi,eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<AFFECTEDAREA>::~ZRef<AFFECTEDAREA>
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0x18
}
}
// CAffectedAreaPool::GetAr01AreaPAD
_SUB_EXCEPTION_HANDLER(352A0)
__SUB_CLASS_THIS(000352A0, __thiscall, 51429,  CAffectedAreaPool, long, unsigned long, ZArray<unsigned long>&, NakedParam<tagPOINT>, unsigned long&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_352A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push edi
	push eax
	mov eax,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	push edx
	push 0x217E772
	lea eax,[esp+0x24]
	push eax
	call CAffectedAreaPool::GetAffectAreaByPoint
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	je Block3

 Block1:
	cmp dword ptr [esi+0x48],edi
	je Block4

 Block2:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<AFFECTEDAREA>::~ZRef<AFFECTEDAREA>

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0x18

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x217E772
	call CSkillInfo::GetSkill
	mov ecx,dword ptr [esi+0x10]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x168]
	push edx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0xC]
	mov esi,eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<AFFECTEDAREA>::~ZRef<AFFECTEDAREA>
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0x18
}
}
// CAffectedAreaPool::OnAffectedAreaRemoved
_SUB_EXCEPTION_HANDLER(360A0)
__SUB_CLASS_THIS(000360A0, __thiscall, 51430,  CAffectedAreaPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_360A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x28],edi
	mov ecx,dword ptr [esp+0xE8]
	call CInPacket::Decode4
	xor ebp,ebp
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x1C],ebp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[edi+0x18]
	mov dword ptr [esp+0xE8],ebp
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::GetAt
	test eax,eax
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp eax,ebp
	je Block90

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block90

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	jmp Block88

 Block4:
	mov esi,dword ptr [esp+0x1C]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax+4],esi
	cmp esi,ebp
	je Block6

 Block5:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,edi
	call CAffectedAreaPool::RemoveAffectedArea
	mov eax,dword ptr [esi+0x40]
	cmp eax,ebp
	jne Block8

 Block7:
	xor eax,eax
	jmp Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	cmp eax,ebp
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x24],ebp
	jle Block75

 Block10:
	mov edi,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x1C]
	mov esi,dword ptr [edx+0x40]
	add edi,edi
	add edi,edi
	mov eax,3
	add esi,edi
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],ebp
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xE0],1
	cmp ecx,ebp
	je Block91

 Block11:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x38]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0xE0],3
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov ebx,dword ptr [esp+0x34]
	cmp ebx,ebp
	sete al
	test al,al
	jne Block71

 Block16:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx+0xC],0x1EA20AE
	jne Block22

 Block17:
	cmp dword ptr [esp+0x24],2
	jne Block22

 Block18:
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x24],esp
	push ebp
	add eax,8
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0xE0],0
	cmp ebx,ebp
	je Block73

 Block21:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx
	jmp Block73

 Block22:
	mov eax,3
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],0xFFFFFFFE
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xE0],4
	cmp ecx,ebp
	je Block91

 Block23:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xE0],3
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov edx,dword ptr [esp+0x1C]
	cmp dword ptr [edx+0xC],0x1EA20AE
	je Block71

 Block30:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block92

 Block31:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0xE4],5
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block92

 Block32:
	mov eax,3
	mov word ptr [esp+0xB8],ax
	mov dword ptr [esp+0xC0],ebp
	mov ecx,eax
	mov word ptr [esp+0x78],cx
	mov dword ptr [esp+0x80],0xFFFFFFFF
	mov edx,eax
	mov word ptr [esp+0x98],dx
	mov dword ptr [esp+0xA0],0x3E8
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xE0],9
	cmp ecx,ebp
	je Block91

 Block33:
	lea eax,[esp+0x68]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0xC0]
	push eax
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0xA8]
	push eax
	push ebx
	lea edx,[esp+0xE0]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xC8],8
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0xC8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	cmp word ptr [esp+0x98],8
	mov byte ptr [esp+0xE0],8
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xE0],7
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0xE0],6
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xE0],5
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xE0],3
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	lea eax,[esp+0xA8]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block92

 Block58:
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0xE4],0xA
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block92

 Block59:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xE0],0xB
	cmp ecx,ebp
	je Block91

 Block60:
	lea edx,[esp+0xA8]
	push edx
	lea eax,[esp+0x8C]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xE0],0xA
	cmp word ptr [esp+0x88],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	cmp eax,ebp
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0xE0],3
	cmp word ptr [esp+0xA8],si
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov edx,dword ptr [esp+0x1C]
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [edx+0x40]
	mov dword ptr [esp+0x24],esp
	push ebp
	add eax,edi
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block70:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation

 Block71:
	mov byte ptr [esp+0xE0],0
	cmp ebx,ebp
	je Block73

 Block72:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block73:
	mov eax,dword ptr [esp+0x24]
	inc eax
	cmp eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],eax
	jl Block10

 Block74:
	mov edi,dword ptr [esp+0x28]

 Block75:
	mov eax,dword ptr [edi+0x10]
	cmp eax,ebp
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esp+0x14],eax
	je Block85

 Block76:
	mov bl,0xC
	lea ecx,[ecx]

 Block77:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block79

 Block78:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block79:
	cmp dword ptr [esi+0x38],0
	mov byte ptr [esp+0xE0],bl
	je Block81

 Block80:
	call get_update_time
	push eax
	sub esp,8
	mov eax,esp
	lea ecx,[esi-0xC]
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	call CAffectedAreaPool::FindAndDraw

 Block81:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0xE4],0
	call ebp
	test eax,eax
	jne Block84

 Block82:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block84

 Block83:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block84:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x30],0
	jne Block77

 Block85:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	je Block90

 Block86:
	mov esi,dword ptr [esp+0x1C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block90

 Block87:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi

 Block88:
	je Block90

 Block89:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block90:
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD0
	ret 4

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	push eax
	call _com_issue_error
}
}
// CAffectedAreaPool::MakeLayer_Fog
_SUB_EXCEPTION_HANDLER(36B50)
__SUB_CLASS_THIS(00036B50, __thiscall, 51434,  CAffectedAreaPool, void, ZArray<_x_com_ptr<IWzGr2DLayer> >&, NakedParam<_x_com_ptr<IWzProperty>>, const tagRECT&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36B50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0xC]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],edi
	test cl,cl
	je Block3

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block48

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block48

 Block3:
	cmp eax,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x20],edi
	call eax
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebx+8]
	mov esi,dword ptr [ebx]
	mov eax,dword ptr [ebx+0xC]
	sub eax,dword ptr [ebx+4]
	mov edx,ecx
	sub edx,esi
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-0x18],edx
	lea eax,[esi+ecx]
	cdq
	sub eax,edx
	mov edx,eax
	sar edx,1
	cmp esi,ecx
	mov dword ptr [ebp-0x6C],edx
	mov dword ptr [ebp-0x1C],esi
	jge Block46

 Block8:
	fild dword ptr [ebp-0x18]
	fstp qword ptr [ebp-0x7C]
	fild dword ptr [ebp-0x14]
	fstp qword ptr [ebp-0x74]
	jmp Block10

 Block9:
	mov esi,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ebp-0x6C]

 Block10:
	mov eax,esi
	sub eax,edx
	cdq
	xor eax,edx
	sub eax,edx
	mov dword ptr [ebp-0x14],eax
	fild dword ptr [ebp-0x14]
	fdiv qword ptr [ebp-0x7C]
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [ebp-0x74]
	fst qword ptr [ebp-0x64]
	fild dword ptr [ebx+4]
	fadd st,st(1)
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [ebp-0x14],edi
	fild dword ptr [ebp-0x14]
	fst qword ptr [ebp-0x48]
	fild dword ptr [ebx+0xC]
	fsubrp st(2),st
	fcompp
	fnstsw ax
	test ah,5
	jp Block45

 Block11:
	mov ecx,dword ptr [ebp+8]
	push 0xFFFFFFFF
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov ebx,eax
	mov eax,0x20
	mov dword ptr [ebp-0x18],ebx
	call __alloca_probe_8
	mov esi,esp
	push 0
	push 0
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	sub edx,0x3FF9EB5C
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp-0x1C]
	push edi
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x5C],esp
	mov dword ptr [eax],0
	mov ecx,offset _D_G_RAND
	mov byte ptr [ebp-4],2
	call CRand32::Random
	mov edi,dword ptr [ebp-0x20]
	and eax,1
	push eax
	push 0
	push 0
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	test edi,edi
	je Block13

 Block12:
	xor edx,edx
	div edi
	mov eax,edx

 Block13:
	push 0xA
	push esi
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	je Block4

 Block14:
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block20

 Block15:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x2C]
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block19

 Block18:
	cmp edi,0x80004002
	jne Block49

 Block19:
	mov ebx,dword ptr [ebp-0x18]

 Block20:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],5
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx]
	add esp,0x28
	cmp esi,eax
	je Block25

 Block21:
	mov dword ptr [ebx],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	test esi,esi
	je Block25

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block25:
	mov eax,dword ptr [ebp-0x28]
	xor edi,edi
	cmp eax,edi
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,3
	mov word ptr [ebp-0x40],ax
	mov dword ptr [ebp-0x38],edi
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],6
	cmp ecx,edi
	je Block4

 Block32:
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp-0x30]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],7
	cmp esi,edi
	je Block4

 Block33:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp-0x18]
	push edx
	push esi
	mov dword ptr [ebp-0x18],edi
	call eax
	cmp eax,edi
	jge Block35

 Block34:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov ecx,dword ptr [ebp-0x18]
	fild dword ptr [ebp-0x18]
	test ecx,ecx
	jge Block37

 Block36:
	fadd qword ptr [__real_41f0000000000000]

 Block37:
	fmul qword ptr [__real_3fe999999999999a]
	fadd qword ptr [ebp-0x48]
	call __ftol2_sse
	mov edi,eax
	mov eax,dword ptr [ebp-0x30]
	mov dword ptr [ebp-0x14],edi
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block39:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],0
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	fild dword ptr [ebp-0x14]
	mov eax,dword ptr [ebp+0x10]
	fst qword ptr [ebp-0x48]
	fild dword ptr [eax+0xC]
	fsub qword ptr [ebp-0x64]
	fcompp
	fnstsw ax
	test ah,0x41
	je Block11

 Block44:
	mov esi,dword ptr [ebp-0x1C]
	mov ebx,dword ptr [ebp+0x10]

 Block45:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x14
	div ecx
	lea eax,[esi+edx+0x23]
	cmp eax,dword ptr [ebx+8]
	mov dword ptr [ebp-0x1C],eax
	jl Block9

 Block46:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block48:
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 0xC

 Block49:
	push edi
	call _com_issue_error
}
}
// CAffectedAreaPool::MakeLayer_Fog_OneTile
_SUB_EXCEPTION_HANDLER(36F20)
__SUB_CLASS_THIS(00036F20, __thiscall, 51434,  CAffectedAreaPool, void, ZArray<_x_com_ptr<IWzGr2DLayer> >&, NakedParam<_x_com_ptr<IWzProperty>>, const tagRECT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x30],0
	test cl,cl
	je Block3

 Block1:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block21

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret 0xC

 Block3:
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [ecx+8]
	add eax,dword ptr [ecx]
	mov edi,dword ptr [ecx+0xC]
	mov ecx,dword ptr [esp+0x38]
	cdq
	sub eax,edx
	mov esi,eax
	push 0xFFFFFFFF
	sar esi,1
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	push 0
	push 0
	push 0xC00614A4
	push ecx
	mov ebp,eax
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	push edi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_0__1
	mov byte ptr [esp+0x60],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x5C],3
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x60],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x58],4
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x58],5
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp]
	add esp,0x28
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [ebp],eax
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block13:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret 0xC
}
}
// CAffectedAreaPool::ShelterUpdate
_SUB_EXCEPTION_HANDLER(34280)
__SUB_CLASS_THIS(00034280, __thiscall, 51416,  CAffectedAreaPool, void, long, NakedParam<ZRef<AFFECTEDAREA>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34280
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x50]
	test byte ptr [eax+0x3C],1
	mov ebx,dword ptr [esp+0x48]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0x40],0
	mov ebp,8
	jne Block36

 Block1:
	mov ecx,ebx
	sub ecx,dword ptr [eax+0x14]
	lea edx,[ecx+0x4EC]
	test edx,edx
	jle Block36

 Block2:
	test ecx,ecx
	jge Block36

 Block3:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],1
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [ecx+0x40]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block17:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],bp
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],4
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [edx+0x40]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x28],bp
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block31:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bp
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x18]
	push eax
	call edi

 Block35:
	mov eax,dword ptr [esp+0x50]
	or dword ptr [eax+0x3C],1
	mov eax,dword ptr [esp+0x50]

 Block36:
	test byte ptr [eax+0x3C],2
	mov edi,0xFFFFFFFE
	jne Block80

 Block37:
	mov ecx,ebx
	sub ecx,dword ptr [eax+0x14]
	test ecx,ecx
	jle Block80

 Block38:
	mov edx,ebx
	sub edx,dword ptr [eax+0x18]
	add edx,0x492
	jns Block80

 Block39:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [eax+0x40]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],6
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],bp
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea ecx,[esp+0x28]
	mov bl,7
	push ecx
	mov byte ptr [esp+0x44],bl
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov eax,dword ptr [esp+0x50]
	mov eax,dword ptr [eax+0x40]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],8
	test eax,eax
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],9
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],8
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],bp
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x28]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x44],bl
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [edx+0x40]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xB
	test eax,eax
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push 0x20
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],bp
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bp
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x50]
	or dword ptr [eax+0x3C],2
	mov eax,dword ptr [esp+0x50]
	mov ebx,dword ptr [esp+0x48]

 Block80:
	test byte ptr [eax+0x3C],4
	jne Block124

 Block81:
	mov ecx,ebx
	sub ecx,dword ptr [eax+0x18]
	lea edx,[ecx+0x492]
	test edx,edx
	jle Block124

 Block82:
	test ecx,ecx
	jge Block124

 Block83:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [eax+0x40]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xC
	test eax,eax
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block87:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],bp
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],0xD
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [ecx+0x40]
	add eax,ebp
	mov eax,dword ptr [eax]
	mov bl,0xE
	mov byte ptr [esp+0x40],bl
	test eax,eax
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea edx,[esp+0x14]
	push edx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],0xF
	test ecx,ecx
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
	mov byte ptr [esp+0x40],0xD
	cmp word ptr [esp+0x28],bp
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bp
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block109:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea eax,[esp+0x28]
	mov bl,0x10
	push eax
	mov byte ptr [esp+0x44],bl
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [edx+0x40]
	add eax,ebp
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x11
	test eax,eax
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push 0
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],bp
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bp
	jne Block122

 Block120:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov eax,dword ptr [esp+0x50]
	or dword ptr [eax+0x3C],4
	mov eax,dword ptr [esp+0x50]
	mov ebx,dword ptr [esp+0x48]

 Block124:
	test byte ptr [eax+0x3C],8
	jne Block135

 Block125:
	sub ebx,dword ptr [eax+0x18]
	test ebx,ebx
	jle Block135

 Block126:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [eax+0x40]
	add eax,ebp
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x12
	test eax,eax
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block130

 Block129:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block130:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],bp
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov eax,dword ptr [esp+0x50]
	or dword ptr [eax+0x3C],ebp
	mov eax,dword ptr [esp+0x50]

 Block135:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block138

 Block136:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block138

 Block137:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block138:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0xC
}
}
// CAffectedAreaPool::AffectedAreaAnimationCreated
_SUB_EXCEPTION_HANDLER(372C0)
__SUB_CLASS_THIS(000372C0, __thiscall, 51432,  CAffectedAreaPool, void, NakedParam<ZRef<AFFECTEDAREA>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_372C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x140
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x154]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [esp+0x168]
	mov edx,dword ptr [ecx+0x20]
	mov eax,dword ptr [ecx+0xC]
	cmp eax,0xB8CC9D
	mov esi,dword ptr [ecx+0x10]
	mov dword ptr [esp+0x1C],edx
	mov edx,dword ptr [ecx+0x24]
	mov dword ptr [esp+0x20],edx
	mov edx,dword ptr [ecx+0x28]
	mov dword ptr [esp+0x24],edx
	mov edx,dword ptr [ecx+0x2C]
	mov dword ptr [esp+0x15C],0
	mov dword ptr [esp+0x28],edx
	jg Block17

 Block1:
	je Block36

 Block2:
	cmp eax,0x20361B
	jg Block14

 Block3:
	je Block15

 Block4:
	sub eax,0x82
	je Block10

 Block5:
	sub eax,1
	jne Block89

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x83
	call CSkillInfo::GetMobSkill
	imul esi,0x5C
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+esi-0x48]
	mov edx,dword ptr [esp+0x168]
	lea esi,[eax+esi-0x5C]
	mov dword ptr [edx+0x34],ecx
	push offset _D_VTMISSING
	lea ecx,[esp+0xB8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x98]
	mov byte ptr [esp+0x160],0x22
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[esp+0xBC]
	push eax
	lea ecx,[esp+0xA0]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov ecx,esi
	call MOBSKILLLEVELDATA::GetTileUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],0x24
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x128]
	mov byte ptr [esp+0x170],0x23
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x114]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x94]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0x15C],0x29
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	mov eax,dword ptr [esp+0x170]
	add eax,0x40
	push eax
	mov ecx,ebp
	call CAffectedAreaPool::MakeLayer_Fog
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x15C],0
	test eax,eax
	je Block88

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block88

 Block10:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x82
	call CSkillInfo::GetMobSkill
	imul esi,0x5C
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+esi-0x48]
	lea ecx,[eax+esi-0x5C]
	mov eax,dword ptr [esp+0x168]
	mov dword ptr [eax+0x34],edx
	lea edx,[esp+0x30]
	push edx
	call MOBSKILLLEVELDATA::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x15C],0x21
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [eax]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov ecx,dword ptr [esp+0x168]
	push 0
	push 0x14
	add ecx,0x40
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	push eax
	call CAnimationDisplayer::MakeLayer_FootHold
	lea ecx,[esp+0x30]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block88

 Block14:
	cmp eax,0x40684E
	jne Block89

 Block15:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	mov ebx,eax
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block16:
	push eax
	call _com_issue_error

 Block17:
	cmp eax,0xD7511E
	je Block15

 Block18:
	cmp eax,0x152266B
	je Block36

 Block19:
	cmp eax,0x1EA20AE
	jne Block89

 Block20:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov edi,eax
	push esi
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	cmp dword ptr [esp+0x16C],0
	mov esi,eax
	je Block22

 Block21:
	mov eax,dword ptr [esp+0x168]
	mov ecx,esi
	mov ebp,eax
	mov ebx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_tTime
	imul eax,0x3E8
	add eax,dword ptr [ebp+0x14]
	mov ebp,dword ptr [esp+0x18]
	mov dword ptr [ebx+0x18],eax
	mov eax,dword ptr [esp+0x168]
	mov dword ptr [eax+0x1C],0

 Block22:
	mov ecx,dword ptr [esi+0x1F8]
	push ecx
	add esi,0x1F0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub dword ptr [esp+0x30],eax
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[esp+0xD8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xE8]
	mov byte ptr [esp+0x160],9
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[esp+0xDC]
	push edx
	lea eax,[esp+0xF0]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 1
	push ecx
	mov bl,0xA
	mov ecx,edi
	mov byte ptr [esp+0x178],bl
	call SKILLENTRY::GetEffectUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],0xB
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x148]
	mov byte ptr [esp+0x170],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x134]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xE4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xD4]
	mov byte ptr [esp+0x15C],0x10
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esp+0x170]
	add eax,0x40
	push eax
	mov ecx,ebp
	call CAffectedAreaPool::MakeLayer_Fog_OneTile
	push offset _D_VTMISSING
	lea ecx,[esp+0xF8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x108]
	mov byte ptr [esp+0x160],0x11
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0xFC]
	push ecx
	lea edx,[esp+0x110]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0
	mov bl,0x12
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x178],bl
	call SKILLENTRY::GetSpecialUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],0x13
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x138]
	push ecx
	mov byte ptr [esp+0x174],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[esp+0x124]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x104]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xF4]
	mov byte ptr [esp+0x15C],0x10
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esp+0x170]
	add eax,0x40
	push eax
	mov ecx,ebp
	call CAffectedAreaPool::MakeLayer_Fog_OneTile
	push offset _D_VTMISSING
	lea ecx,[esp+0xC8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA8]
	mov byte ptr [esp+0x160],0x15
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0xCC]
	push ecx
	lea edx,[esp+0xB0]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,edi
	call SKILLENTRY::GetFinishUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],0x17
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea ecx,[esp+0x158]
	push ecx
	mov byte ptr [esp+0x174],0x16
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[esp+0x144]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC4]
	mov byte ptr [esp+0x15C],0x10
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block34:
	mov edx,dword ptr [esp+0x170]
	add edx,0x40
	push edx
	mov ecx,ebp
	call CAffectedAreaPool::MakeLayer_Fog_OneTile
	mov byte ptr [esp+0x15C],0
	test esi,esi
	je Block88

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block88

 Block36:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	mov ebx,eax
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x160],0x19
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	push 0
	push 0
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetTileUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],0x1B
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x88]
	mov byte ptr [esp+0x170],0x1A
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x15C],0x1E
	cmp word ptr [esp+0x74],bp
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x74]
	push edx
	call edi

 Block49:
	mov byte ptr [esp+0x15C],0x1F
	cmp word ptr [esp+0x34],bp
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x34]
	push ecx
	call edi

 Block53:
	mov byte ptr [esp+0x15C],0x20
	cmp word ptr [esp+0x54],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x54]
	push eax
	call edi

 Block57:
	cmp dword ptr [esp+0x16C],0
	je Block59

 Block58:
	mov edi,dword ptr [esp+0x168]
	push esi
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xFC]
	push ecx
	add eax,0xF4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x3E8
	mov edx,dword ptr [esp+0x170]
	add esp,8
	add eax,dword ptr [edi+0x14]
	mov dword ptr [edx+0x18],eax
	mov eax,dword ptr [esp+0x168]
	mov dword ptr [eax+0x1C],0

 Block59:
	mov esi,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block61

 Block60:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block61:
	mov ecx,dword ptr [esp+0x170]
	add ecx,0x40
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CAffectedAreaPool::MakeLayer_Fog_OneTile
	jmp Block86

 Block62:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0x160],1
	call edi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	push 0
	push 0
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push ecx
	mov ecx,ebx
	call SKILLENTRY::GetTileUOL
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x170],3
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x98]
	mov byte ptr [esp+0x170],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x164],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block69

 Block67:
	cmp eax,0x80004002
	je Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x15C],6
	cmp word ptr [esp+0x84],bp
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x84]
	push ecx
	call edi

 Block73:
	mov byte ptr [esp+0x15C],7
	cmp word ptr [esp+0x64],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x64]
	push eax
	call edi

 Block77:
	mov byte ptr [esp+0x15C],8
	cmp word ptr [esp+0x44],bp
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x44]
	push edx
	call edi

 Block81:
	cmp dword ptr [esp+0x16C],0
	je Block83

 Block82:
	mov edi,dword ptr [esp+0x168]
	push esi
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xFC]
	push ecx
	add eax,0xF4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x3E8
	mov edx,dword ptr [esp+0x170]
	add esp,8
	add eax,dword ptr [edi+0x14]
	mov dword ptr [edx+0x18],eax
	mov eax,dword ptr [esp+0x168]
	mov dword ptr [eax+0x1C],0

 Block83:
	mov esi,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block85

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block85:
	mov ecx,dword ptr [esp+0x170]
	add ecx,0x40
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CAffectedAreaPool::MakeLayer_Fog

 Block86:
	mov byte ptr [esp+0x15C],0
	test esi,esi
	je Block88

 Block87:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block88:
	mov ecx,dword ptr [esp+0x168]

 Block89:
	mov dword ptr [esp+0x15C],0xFFFFFFFF
	test ecx,ecx
	je Block93

 Block90:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block91:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block93

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block93:
	mov ecx,dword ptr [esp+0x154]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14C
	ret 0xC
}
}
// CAffectedAreaPool::IsSmokeAreaByPoint
_SUB_EXCEPTION_HANDLER(34F40)
__SUB_CLASS_THIS(00034F40, __thiscall, 51421,  CAffectedAreaPool, int32_t, unsigned long, ZArray<unsigned long>&, NakedParam<tagPOINT>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34F40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov esi,dword ptr [esi+0x10]
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],esi
	cmp esi,ebx
	je Block24

 Block1:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<AFFECTEDAREA>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block3

 Block2:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block3:
	cmp dword ptr [esi+4],2
	mov dword ptr [esp+0x2C],ebx
	jne Block19

 Block4:
	mov edx,dword ptr [esp+0x18]
	sub edx,dword ptr [esi+0x14]
	js Block19

 Block5:
	mov eax,dword ptr [esp+0x44]
	cmp dword ptr [esi+0x48],eax
	jne Block19

 Block6:
	mov ebx,dword ptr [esp+0x38]
	mov ecx,ebx
	xor edi,edi
	call ZArray<unsigned long>::GetCount
	test eax,eax
	jbe Block11

 Block7:
	mov ebp,dword ptr [esi+8]
	mov ebx,dword ptr [ebx]

 Block8:
	cmp ebp,dword ptr [ebx]
	je Block10

 Block9:
	mov ecx,dword ptr [esp+0x38]
	inc edi
	add ebx,4
	call ZArray<unsigned long>::GetCount
	cmp edi,eax
	jb Block8

 Block10:
	mov ebx,dword ptr [esp+0x38]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,ebx
	call ZArray<unsigned long>::GetCount
	cmp edi,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x34]
	cmp dword ptr [esi+8],ecx
	je Block14

 Block13:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	push edi
	jmp Block15

 Block14:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	lea eax,[esi+0x20]
	push eax
	call PtInRect
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	push edi
	test eax,eax
	jne Block26

 Block15:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call ebp
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov dword ptr [esp+0x20],0
	xor ebx,ebx
	jmp Block23

 Block19:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push edi
	call ebp
	cmp esi,ebx
	je Block22

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block22:
	mov dword ptr [esp+0x20],ebx

 Block23:
	cmp dword ptr [esp+0x14],ebx
	jne Block1

 Block24:
	xor eax,eax

 Block25:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x14

 Block26:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call ebp
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
	mov eax,1
	jmp Block25
}
}
// CAffectedAreaPool::AddAffectedArea
_SUB_EXCEPTION_HANDLER(37210)
__SUB_CLASS_THIS(00037210, __thiscall, 51440,  CAffectedAreaPool, void, NakedParam<ZRef<AFFECTEDAREA>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37210
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0
	call ZList<ZRef<AFFECTEDAREA>>::AddTail_
	mov edi,eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZRef<AFFECTEDAREA>::op_assign_copy
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx+0x44],edi
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x1C]
	push edx
	push eax
	lea ecx,[esi+0x18]
	call ZMap<unsigned long, ZRef<AFFECTEDAREA>, unsigned long>::Insert
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
