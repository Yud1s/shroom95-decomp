#include "regen.hpp"
// MacroSysMan.ipp
#include "MacroSysMan.hpp"

// CMacroSysMan::IsShoutMacro
__SUB_CLASS_THIS(0020E610, __thiscall, 52628,  CMacroSysMan, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jl Block4

 Block1:
	mov edx,dword ptr [ecx+0x20]
	test edx,edx
	je Block4

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block4

 Block3:
	imul eax,0x1D
	mov ecx,edx
	xor edx,edx
	cmp dword ptr [eax+ecx+0x19],edx
	sete dl
	mov eax,edx
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CMacroSysMan::~CMacroSysMan
_SUB_EXCEPTION_HANDLER(20EB30)
__SUB_CLASS_THIS0(0020EB30, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20EB30
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
	int 3// TODO: 	mov dword ptr [esi],offset CMacroSysMan::`vftable'
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x14],2
	call ZArray<SINGLEMACRO>::RemoveAll
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMacroSysMan::ACTIVEMACROINFO>::`vftable'
	call ZList<CMacroSysMan::ACTIVEMACROINFO>::RemoveAll
	mov dword ptr [TSingleton<CMacroSysMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMacroSysMan::DoActiveMacro
__SUB_CLASS_THIS(0020F190, __thiscall, 52624,  CMacroSysMan, void, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+8],esi
	test ecx,ecx
	jl Block20

 Block1:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block20

 Block2:
	cmp ecx,dword ptr [eax-4]
	jae Block20

 Block3:
	cmp dword ptr [esi+0xC],0
	jne Block20

 Block4:
	imul ecx,0x1D
	push ebx
	push ebp
	mov ebp,1
	push edi
	mov dword ptr [esp+0x10],ebp
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],3
	jmp Block6

 Block5:
	mov ebp,dword ptr [esp+0x10]

 Block6:
	mov eax,dword ptr [esi+0x20]
	mov ebx,dword ptr [ecx+eax]
	test ebx,ebx
	je Block18

 Block7:
	mov eax,0x10624DD3
	imul ebx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	test edx,edx
	je Block18

 Block8:
	cmp edx,9
	je Block18

 Block9:
	test ebp,ebp
	je Block11

 Block10:
	mov dword ptr [esp+0x10],0

 Block11:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkill
	mov edi,eax
	test edi,edi
	je Block16

 Block12:
	mov ecx,edi
	mov esi,1
	call SKILLENTRY::GetMaxLevel
	cmp eax,esi
	jl Block15

 Block13:
	push esi
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x21C]
	push edx
	add eax,0x214
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block17

 Block14:
	mov ecx,edi
	inc esi
	call SKILLENTRY::GetMaxLevel
	cmp esi,eax
	jle Block13

 Block15:
	mov esi,dword ptr [esp+0x14]

 Block16:
	lea ecx,[esi+4]
	call ZList<CMacroSysMan::ACTIVEMACROINFO>::AddTail_
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ebp
	jmp Block18

 Block17:
	mov esi,dword ptr [esp+0x14]

 Block18:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	sub dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x18],ecx
	jne Block5

 Block19:
	pop edi
	pop ebp
	pop ebx

 Block20:
	pop esi
	add esp,0x10
	ret 4
}
}
// CMacroSysMan::GetMacro
__SUB_CLASS_THIS(0020E5D0, __thiscall, 52621,  CMacroSysMan, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jl Block5

 Block1:
	mov edx,dword ptr [ecx+0x20]
	test edx,edx
	je Block5

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block5

 Block3:
	mov edx,dword ptr [esp+8]
	cmp edx,2
	ja Block5

 Block4:
	mov ecx,dword ptr [ecx+0x20]
	imul eax,0x1D
	lea eax,[eax+edx*4]
	mov eax,dword ptr [eax+ecx]
	ret 8

 Block5:
	xor eax,eax
	ret 8
}
}
// CMacroSysMan::Reset
__SUB_CLASS_THIS0(0020EDD0, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CMacroSysMan::Stop
	lea ecx,[esi+0x20]
	pop esi
	jmp  ZArray<SINGLEMACRO>::RemoveAll
}
}
// CMacroSysMan::Delete
__SUB_CLASS_THIS(0020E5A0, __thiscall, 52626,  CMacroSysMan, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jl Block5

 Block1:
	mov edx,dword ptr [ecx+0x20]
	test edx,edx
	je Block5

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block5

 Block3:
	mov edx,dword ptr [esp+8]
	cmp edx,2
	ja Block5

 Block4:
	mov ecx,dword ptr [ecx+0x20]
	imul eax,0x1D
	lea eax,[eax+edx*4]
	mov dword ptr [eax+ecx],0

 Block5:
	ret 8
}
}
// CMacroSysMan::SetMacroInfo
_SUB_EXCEPTION_HANDLER(20ECB0)
__SUB_CLASS_THIS(0020ECB0, __thiscall, 52629,  CMacroSysMan, void, long, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20ECB0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x20]
	cmp esi,5
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0
	jg Block7

 Block1:
	test eax,eax
	je Block3

 Block2:
	cmp dword ptr [eax-4],0xC
	jg Block7

 Block3:
	lea eax,[esi+1]
	push eax
	mov ecx,edi
	call CMacroSysMan::Realloc
	imul esi,0x1D
	mov eax,dword ptr [edi+0x20]
	mov ecx,dword ptr [esp+0x24]
	add eax,esi
	push ecx
	add eax,0xC
	push eax
	call dword ptr [ZImports::_lstrcmpA]
	mov ebx,dword ptr [esp+0x28]
	test eax,eax
	jne Block5

 Block4:
	mov edx,dword ptr [edi+0x20]
	xor eax,eax
	test ebx,ebx
	sete al
	cmp dword ptr [esi+edx+0x19],eax
	je Block6

 Block5:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+0x20]
	push ecx
	lea eax,[esi+edx+0xC]
	push eax
	call dword ptr [ZImports::_lstrcpyA]
	mov edx,dword ptr [edi+0x20]
	xor ecx,ecx
	test ebx,ebx
	sete cl
	mov dword ptr [esi+edx+0x19],ecx
	mov ecx,edi
	call CMacroSysMan::FlushToSvr

 Block6:
	mov eax,dword ptr [esp+0x24]

 Block7:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CMacroSysMan::CMacroSysMan
__SUB_CLASS_THIS0(0020EAE0, __thiscall, 52617,  CMacroSysMan, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+4]
	xor edx,edx
	int 3// TODO: 	mov dword ptr [eax],offset IGObj::`vftable'
	cmp ecx,edx
	je Block2

 Block1:
	push esi
	lea esi,[ecx-4]
	mov dword ptr [TSingleton<CMacroSysMan>::ms_pInstance],esi
	pop esi
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMacroSysMan>::ms_pInstance],edx

 Block3:
	int 3// TODO: 	mov dword ptr [eax],offset CMacroSysMan::`vftable'
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMacroSysMan::ACTIVEMACROINFO>::`vftable'
	mov dword ptr [ecx+8],edx
	mov dword ptr [ecx+0xC],edx
	mov dword ptr [ecx+0x10],edx
	mov dword ptr [eax+0x18],edx
	mov dword ptr [eax+0x1C],edx
	mov dword ptr [eax+0x20],edx
	mov dword ptr [eax+0x24],edx
	ret
}
}
// CMacroSysMan::FlushToSvr
_SUB_EXCEPTION_HANDLER(20EA20)
__SUB_CLASS_THIS0(0020EA20, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20EA20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x7A
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	lea eax,[esp+8]
	push eax
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x24],0
	call MACROSYSDATA::Encode
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CMacroSysMan::Stop
__SUB_CLASS_THIS0(0020EBE0, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+4]
	call ZList<CMacroSysMan::ACTIVEMACROINFO>::RemoveAll
	mov dword ptr [esi+0x18],0
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [esi+0x1C],0

 Block2:
	pop esi
	ret
}
}
// CMacroSysMan::Realloc
__SUB_CLASS_THIS(0020EC10, __thiscall, 52624,  CMacroSysMan, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push ebx
	push esi
	push edi
	lea edi,[ecx+0x20]
	test eax,eax
	jne Block2

 Block1:
	xor ebx,ebx
	jmp Block3

 Block2:
	mov ebx,dword ptr [eax-4]

 Block3:
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	jle Block7

 Block4:
	lea eax,[esp+0x10]
	push eax
	push 0
	push esi
	mov ecx,edi
	call ZArray<SINGLEMACRO>::_Realloc
	cmp ebx,esi
	jge Block7

 Block5:
	mov edx,ebx
	imul edx,0x1D
	sub esi,ebx

 Block6:
	mov eax,dword ptr [edi]
	add eax,edx
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	add edx,0x1D
	sub esi,1
	mov dword ptr [eax+0x18],ecx
	mov byte ptr [eax+0x1C],cl
	jne Block6

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMacroSysMan::Map
__SUB_CLASS_THIS(0020EC80, __thiscall, 52627,  CMacroSysMan, void, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	lea eax,[esi+1]
	push eax
	mov edi,ecx
	call CMacroSysMan::Realloc
	imul esi,0x1D
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [edi+0x20]
	lea edx,[esi+ecx*4]
	mov ecx,dword ptr [esp+0x14]
	pop edi
	mov dword ptr [edx+eax],ecx
	pop esi
	ret 0xC
}
}
// CMacroSysMan::Update
_SUB_EXCEPTION_HANDLER(20EDF0)
__SUB_CLASS_THIS0(0020EDF0, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20EDF0
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
	cmp dword ptr [esi+0x24],0
	jne Block2

 Block1:
	call CMacroSysMan::CheckMacro

 Block2:
	cmp dword ptr [esi+0xC],0
	je Block21

 Block3:
	mov eax,dword ptr [esi+0x10]
	mov ebp,dword ptr [eax]
	mov ebx,dword ptr [eax+4]
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [eax+8]
	mov edx,dword ptr [edi]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [edx+8]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [eax+0x224]
	push ecx
	add eax,0x21C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block8

 Block4:
	cmp ebp,0x406849
	je Block8

 Block5:
	cmp ebp,0x423D0D
	je Block8

 Block6:
	push 0xD72625
	mov ecx,edi
	call CUserLocal::GetSkillLevel
	test eax,eax
	jg Block8

 Block7:
	push 0x421211
	mov ecx,edi
	call CUserLocal::GetSkillLevel
	test eax,eax
	jle Block19

 Block8:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block19

 Block9:
	push 0
	push 0
	push ebp
	mov ecx,edi
	call CUserLocal::DoActiveSkill
	xor ebp,ebp
	test eax,eax
	jne Block11

 Block10:
	cmp dword ptr [edi+0x3B74],ebp
	je Block19

 Block11:
	cmp dword ptr [esp+0x20],ebp
	je Block17

 Block12:
	mov edx,dword ptr [esi+0x20]
	mov edi,ebx
	imul edi,0x1D
	cmp dword ptr [edx+edi+0x19],ebp
	jne Block17

 Block13:
	call get_field
	test eax,eax
	je Block17

 Block14:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp byte ptr [eax+0x206C],0
	ja Block17

 Block15:
	mov eax,dword ptr [esi+0x20]
	add eax,edi
	push 0xFFFFFFFF
	add eax,0xC
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x14]
	push 1
	push ecx
	mov dword ptr [esp+0x34],ebp
	call get_field
	mov ecx,eax
	call CField::SendChatMsg
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea ecx,[esi+4]
	mov dword ptr [esi+0x18],ebp
	mov edx,dword ptr [ecx+0xC]
	push edx
	call ZList<CMacroSysMan::ACTIVEMACROINFO>::RemoveAt
	mov eax,dword ptr [esi+0x1C]
	cmp eax,ebp
	je Block21

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [esi+0x1C],ebp
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block19:
	add dword ptr [esi+0x18],0x1E
	cmp dword ptr [esi+0x18],0xFA0
	jle Block21

 Block20:
	mov ecx,esi
	call CMacroSysMan::Stop

 Block21:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CMacroSysMan::SetMacro
__SUB_CLASS_THIS(0020E580, __thiscall, 52620,  CMacroSysMan, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push eax
	lea ecx,[esi+0x20]
	call MACROSYSDATA::Decode
	mov ecx,esi
	call CMacroSysMan::CheckMacro
	pop esi
	ret 4
}
}
// CMacroSysMan::CheckMacro
__SUB_CLASS_THIS0(0020E520, __thiscall, 52619,  CMacroSysMan, void) {
__asm {

 Block0:
	cmp dword ptr [TSingleton<CSkillInfo>::ms_pInstance],0
	push ebx
	mov ebx,ecx
	je Block10

 Block1:
	push ebp
	push esi
	push edi
	xor ebp,ebp
	xor edi,edi

 Block2:
	mov eax,dword ptr [ebx+0x20]
	test eax,eax
	je Block9

 Block3:
	cmp ebp,dword ptr [eax-4]
	jae Block9

 Block4:
	xor esi,esi

 Block5:
	mov eax,dword ptr [ebx+0x20]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add eax,edi
	mov eax,dword ptr [esi+eax]
	push eax
	call CSkillInfo::GetSkill
	test eax,eax
	jne Block7

 Block6:
	mov ecx,dword ptr [ebx+0x20]
	add ecx,edi
	mov dword ptr [ecx+esi],eax

 Block7:
	add esi,4
	cmp esi,0xC
	jl Block5

 Block8:
	inc ebp
	add edi,0x1D
	jmp Block2

 Block9:
	pop edi
	pop esi
	mov dword ptr [ebx+0x24],1
	pop ebp

 Block10:
	pop ebx
	ret
}
}
// CMacroSysMan::GetMacroName
_SUB_EXCEPTION_HANDLER(20EFA0)
__SUB_CLASS_THIS(0020EFA0, __thiscall, 52622,  CMacroSysMan, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20EFA0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebx
	jl Block14

 Block1:
	mov eax,dword ptr [ebp+0x20]
	cmp eax,ebx
	je Block14

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block14

 Block3:
	imul esi,0x1D
	add eax,esi
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x2C],ebx
	cmp ecx,ebx
	je Block7

 Block4:
	mov eax,ecx
	lea edi,[eax+1]

 Block5:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block5

 Block6:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push 0
	push edi
	lea ecx,[esp+0x3C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x30]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x2C]

 Block7:
	mov eax,dword ptr [ebp+0x20]
	mov edi,dword ptr [esp+0x28]
	add eax,esi
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x20],1
	mov dword ptr [edi],0
	test ecx,ecx
	je Block11

 Block8:
	mov eax,ecx
	lea esi,[eax+1]

 Block9:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block9

 Block10:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block11:
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x20],0
	test ebx,ebx
	je Block13

 Block12:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,edi
	jmp Block15

 Block14:
	mov esi,dword ptr [esp+0x28]
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi

 Block15:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CMacroSysMan::CanItShow
_SUB_EXCEPTION_HANDLER(20F0E0)
__SUB_CLASS_THIS(0020F0E0, __thiscall, 52630,  CMacroSysMan, int32_t, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20F0E0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	lea esi,[ecx+0x1C]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x14],0
	call ZXString16::op_eq
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block4:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
