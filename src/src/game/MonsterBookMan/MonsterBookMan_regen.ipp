#include "regen.hpp"
// MonsterBookMan.ipp
#include "MonsterBookMan.hpp"

// CMonsterBookAccessor::GetInfo
_SUB_EXCEPTION_HANDLER(263300)
__SUB(00263300, __cdecl, 47199,  ZRef<MonsterBookInfo>, const CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_263300
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esi+4],ebx
	call ZRef<MonsterBookInfo>::_Alloc
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [edx+0x6ED]
	mov dword ptr [eax+0x10],ecx
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [edx+0x6F1]
	mov dword ptr [eax+0x14],ecx
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [eax+0x14]
	add ecx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x14],1
	mov dword ptr [eax+0x18],ecx
	mov edi,dword ptr [esi+4]
	mov eax,dword ptr [edi+0x18]
	push eax
	call MonsterBookInfo::GetBookLevel
	xor ebp,ebp
	add esp,4
	mov dword ptr [edi+0xC],eax
	mov dword ptr [esp+0x1C],ebp
	mov edx,dword ptr [edx+0x6E9]
	mov dword ptr [esp+0x30],1
	cmp edx,ebx
	je Block13

 Block1:
	push edx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance]
	call CMonsterBookMan::GetCard
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call ZRef<MonsterBookCard>::op_assign_copy
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],1
	cmp edi,ebx
	je Block5

 Block2:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	mov ebp,dword ptr [esp+0x1C]
	cmp ebp,ebx
	je Block13

 Block6:
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [eax+0x1C],ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	push edx
	call CMobTemplate::GetMobTemplate
	mov edi,eax
	add esp,4
	mov dword ptr [esp+0x24],edi
	cmp edi,ebx
	je Block8

 Block7:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov byte ptr [esp+0x30],3
	cmp edi,ebx
	je Block10

 Block9:
	mov eax,dword ptr [esi+4]
	lea ecx,[edi+0x30]
	push ecx
	lea ecx,[eax+0x20]
	call ZXString<char>::op_assign

 Block10:
	mov byte ptr [esp+0x30],1
	cmp edi,ebx
	je Block13

 Block11:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block12:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block13:
	mov byte ptr [esp+0x30],0
	test ebp,ebp
	je Block17

 Block14:
	lea edi,[ebp-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block17

 Block16:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block17:
	mov eax,esi
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
// CMonsterBookAccessor::SetCount
_SUB_EXCEPTION_HANDLER(5118F0)
__SUB(005118F0, __cdecl, 47194,  void, CharacterData&, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5118F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0x28]
	cmp ebx,5
	ja Block2

 Block1:
	lea ecx,[esp+8]
	mov dword ptr [esp+0xC],0
	call ZRef<GW_MonsterBookCard>::_Alloc
	mov eax,dword ptr [esp+0x24]
	lea ecx,[eax-0x50E0]
	mov eax,dword ptr [esp+0xC]
	mov word ptr [eax],cx
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+8]
	mov byte ptr [eax+2],bl
	push edx
	lea eax,[esp+0x28]
	push eax
	add ecx,0x6D1
	mov dword ptr [esp+0x20],0
	call ZMap<long, ZRef<GW_MonsterBookCard>, long>::Insert
	lea ecx,[esp+8]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<GW_MonsterBookCard>::~ZRef<GW_MonsterBookCard>

 Block2:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x14
	ret
}
}
// CMonsterBookAccessor::GetCount
_SUB_EXCEPTION_HANDLER(2B8620)
__SUB(002B8620, __cdecl, 47196,  long, const CharacterData&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8620
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	add ecx,0x6D1
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<GW_MonsterBookCard>, long>::GetAt
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block2

 Block1:
	movzx ebx,byte ptr [eax+2]
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block7

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// MonsterBookInfo::GetBookLevel
__SUB(002614D0, __cdecl, 46749,  long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x118
	jle Block2

 Block1:
	mov eax,8
	ret

 Block2:
	cmp eax,0xD2
	jle Block4

 Block3:
	mov eax,7
	ret

 Block4:
	cmp eax,0x96
	jle Block6

 Block5:
	mov eax,6
	ret

 Block6:
	cmp eax,0x64
	jle Block8

 Block7:
	mov eax,5
	ret

 Block8:
	cmp eax,0x3C
	jle Block10

 Block9:
	mov eax,4
	ret

 Block10:
	cmp eax,0x1E
	jle Block12

 Block11:
	mov eax,3
	ret

 Block12:
	xor ecx,ecx
	cmp eax,0xA
	setg cl
	inc ecx
	mov eax,ecx
	ret
}
}
// MonsterBookStr::~MonsterBookStr
_SUB_EXCEPTION_HANDLER(262B70)
__SUB_CLASS_THIS0(00262B70, __thiscall, 46734,  MonsterBookStr, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_262B70
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],3
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],2
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// MonsterBookInfo::~MonsterBookInfo
_SUB_EXCEPTION_HANDLER(2628D0)
__SUB_CLASS_THIS0(002628D0, __thiscall, 46750,  MonsterBookInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2628D0
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
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMonsterBookAccessor::UpdateInfo
_SUB_EXCEPTION_HANDLER(262A50)
__SUB(00262A50, __cdecl, 47198,  void, CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_262A50
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
	mov ebx,dword ptr [esp+0x2C]
	xor ebp,ebp
	lea ecx,[ebx+0x6D1]
	mov dword ptr [ebx+0x6ED],ebp
	mov dword ptr [ebx+0x6F1],ebp
	call ZMap<long, ZRef<GW_MonsterBookCard>, long>::GetHeadPosition
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block10

 Block1:
	lea esp,[esp]

 Block2:
	mov eax,dword ptr [eax+8]
	mov ecx,dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance]
	push eax
	lea eax,[esp+0x18]
	push eax
	call CMonsterBookMan::GetCard
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block10

 Block3:
	cmp dword ptr [eax+8],8
	jne Block5

 Block4:
	inc dword ptr [ebx+0x6F1]
	jmp Block6

 Block5:
	inc dword ptr [ebx+0x6ED]

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[ebx+0x6D1]
	mov dword ptr [esp+0x20],ebp
	call ZMap<long, ZRef<GW_MonsterBookCard>, long>::GetNext
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	jne Block2

 Block10:
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
