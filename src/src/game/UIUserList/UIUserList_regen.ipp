#include "regen.hpp"
// UIUserList.ipp
#include "UIUserList.hpp"

// CTabGuildAlliance::SectionData::GetFirstOfPage
__SUB_CLASS_THIS0(004B8E40, __thiscall, 40595,  CTabGuildAlliance::SectionData, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x70]
	test eax,eax
	jne Block2

 Block1:
	xor edx,edx
	jmp Block3

 Block2:
	mov edx,dword ptr [eax-4]

 Block3:
	mov ecx,dword ptr [ecx+0x18]
	lea eax,[ecx+ecx*4]
	cmp eax,edx
	jl Block5

 Block4:
	mov eax,edx

 Block5:
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_
__SUB(004D98E0, __cdecl, 83791,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::JobDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabFriend::GetNonRequestFriendCount
__SUB_CLASS_THIS(004B8EC0, __thiscall, 40063,  CTabFriend, long, const ZArray<CTabFriend::FRIENDITEM>&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov ecx,esi
	xor edi,edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block5

 Block1:
	mov ecx,dword ptr [esi]
	add ecx,0x28

 Block2:
	cmp byte ptr [ecx],1
	je Block4

 Block3:
	inc edi

 Block4:
	add ecx,0x30
	sub eax,1
	jne Block2

 Block5:
	mov eax,edi
	pop edi
	pop esi
	ret 4
}
}
// CWndGuildGrade::OnSetFocus
__SUB_CLASS_THIS(004CD270, __thiscall, 40664,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_
_SUB_EXCEPTION_HANDLER(4C12F0)
__SUB(004C12F0, __cdecl, 83708,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::GradeAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C12F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::GradeAscComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::GradeAscComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// InsertionSort_CTabFriend__FRIENDITEM_Friend_GroupAscComp_CTabFriend__FRIENDITEM__
_SUB_EXCEPTION_HANDLER(4D3450)
__SUB(004D3450, __cdecl, 83731,  void, ZArray<CTabFriend::FRIENDITEM>&, int32_t, int32_t, Friend_GroupAscComp<CTabFriend::FRIENDITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D3450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x48],eax
	mov ebx,dword ptr [esp+0x60]
	cmp ebx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x18],ebx
	jg Block9

 Block1:
	mov ebp,dword ptr [esp+0x5C]
	lea eax,[ebx+ebx*2]
	shl eax,4
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov esi,dword ptr [ebp]
	add esi,eax
	mov eax,dword ptr [esi]
	lea ecx,[esi+4]
	push ecx
	lea ecx,[esp+0x24]
	mov edi,ebx
	mov dword ptr [esp+0x20],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+8]
	mov dword ptr [esp+0x24],edx
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x28],eax
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [esp+0x2C],ecx
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x30],edx
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x34],eax
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [esi+0x20]
	mov dword ptr [esp+0x3C],edx
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esp+0x40],eax
	mov cl,byte ptr [esi+0x28]
	mov byte ptr [esp+0x44],cl
	add esi,0x2C
	push esi
	lea ecx,[esp+0x4C]
	call ZXString<char>::op_assign
	cmp ebx,dword ptr [esp+0x60]
	jle Block8

 Block4:
	mov ebx,dword ptr [esp+0x14]
	nop

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edx+ebx-0x30]
	add eax,0x2C
	push eax
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x68]
	call Friend_GroupAscComp_S::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+ebx-0x30]
	lea esi,[ecx+ebx]
	lea eax,[esi-0x2C]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi-0x28]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [esi-0x24]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [esi-0x20]
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [esi-0x1C]
	mov dword ptr [esi+0x14],ecx
	mov edx,dword ptr [esi-0x18]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [esi-0x14]
	mov dword ptr [esi+0x1C],eax
	mov ecx,dword ptr [esi-0x10]
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [esi-0xC]
	lea ecx,[esi-4]
	mov dword ptr [esi+0x24],edx
	mov al,byte ptr [esi-8]
	push ecx
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],al
	call ZXString<char>::op_assign
	dec edi
	sub ebx,0x30
	cmp edi,dword ptr [esp+0x60]
	jg Block5

 Block7:
	mov ebx,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [esp+0x1C]
	lea esi,[edi+edi*2]
	shl esi,4
	add esi,dword ptr [ebp]
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x14],ecx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x1C],eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [esp+0x40]
	lea ecx,[esp+0x48]
	mov dword ptr [esi+0x24],edx
	mov al,byte ptr [esp+0x44]
	push ecx
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],al
	call ZXString<char>::op_assign
	add dword ptr [esp+0x14],0x30
	inc ebx
	cmp ebx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x18],ebx
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
_SUB_EXCEPTION_HANDLER(4C16F0)
__SUB(004C16F0, __cdecl, 83714,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::NameDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C16F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	mov ecx,dword ptr [eax+4]
	push ecx
	lea ecx,[eax-0x74]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esp+0xA4]
	lea ecx,[esi+eax-0x78]
	push ecx
	lea ecx,[edx+ebx]
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabFriend::IsGroupBlocked
_SUB_EXCEPTION_HANDLER(4BAA90)
__SUB_CLASS_THIS(004BAA90, __thiscall, 40067,  CTabFriend, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BAA90
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
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	xor ebp,ebp

 Block1:
	mov eax,dword ptr [edi+0xA8]
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block14

 Block2:
	cmp ebp,dword ptr [eax-4]
	jae Block14

 Block3:
	lea ecx,[esp+0x2C]
	add esi,eax
	push ecx
	mov ecx,esi
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block10

 Block4:
	lea ebx,[esi+0x1C]
	mov ecx,ebx
	xor edi,edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block9

 Block5:
	mov esi,dword ptr [ebx]
	add esi,0x20
	nop

 Block6:
	cmp dword ptr [esi+4],0
	jne Block8

 Block7:
	cmp dword ptr [esi],0
	je Block11

 Block8:
	mov ecx,ebx
	inc edi
	add esi,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp edi,eax
	jb Block6

 Block9:
	mov edi,dword ptr [esp+0x18]

 Block10:
	mov esi,dword ptr [esp+0x14]
	inc ebp
	add esi,0x20
	jmp Block1

 Block11:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	xor eax,eax
	jmp Block17

 Block14:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,1

 Block17:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CTabGuildAlliance::CreateButton
_SUB_EXCEPTION_HANDLER(4BBE50)
__SUB_CLASS_THIS0(004BBE50, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BBE50
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
	mov esi,ecx
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x802
	push offset _S_UIUIWINDOW2IMGUS__32
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block89

 Block1:
	add eax,8
	je Block89

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block4:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+8],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x804
	push offset _S_UIUIWINDOW2IMGUS__31
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],1
	test eax,eax
	je Block90

 Block9:
	add eax,8
	je Block90

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block12:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 0x803
	push offset _S_UIUIWINDOW2IMGUS__30
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],2
	test eax,eax
	je Block91

 Block17:
	add eax,8
	je Block91

 Block18:
	lea edi,[eax-8]
	test edi,edi
	je Block20

 Block19:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block20:
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x805
	push offset _S_UIUIWINDOW2IMGUS__29
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],3
	test eax,eax
	je Block92

 Block25:
	add eax,8
	je Block92

 Block26:
	lea edi,[eax-8]
	test edi,edi
	je Block28

 Block27:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block28:
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x806
	push offset _S_UIUIWINDOW2IMGUS__28
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],4
	test eax,eax
	je Block93

 Block33:
	add eax,8
	je Block93

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block36:
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block40:
	push 0
	push 0
	push 0
	push 0x80C
	push offset _S_UIUIWINDOW2IMGUS__27
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],5
	test eax,eax
	je Block94

 Block41:
	add eax,8
	je Block94

 Block42:
	lea edi,[eax-8]
	test edi,edi
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block44:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x808
	push offset _S_UIUIWINDOW2IMGUS__26
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],6
	test eax,eax
	je Block95

 Block49:
	add eax,8
	je Block95

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block52:
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block54:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block56:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x809
	push offset _S_UIUIWINDOW2IMGUS__25
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],7
	test eax,eax
	je Block96

 Block57:
	add eax,8
	je Block96

 Block58:
	lea edi,[eax-8]
	test edi,edi
	je Block60

 Block59:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block60:
	mov eax,dword ptr [esi+0x40]
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block62

 Block61:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block62:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block64

 Block63:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block64:
	push 0
	push 0
	push 0
	push 0x807
	push offset _S_UIUIWINDOW2IMGUS__24
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],8
	test eax,eax
	je Block97

 Block65:
	add eax,8
	je Block97

 Block66:
	lea edi,[eax-8]
	test edi,edi
	je Block68

 Block67:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block68:
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block70

 Block69:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block70:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block72

 Block71:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block72:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x80B
	push offset _S_UIUIWINDOW2IMGUS__23
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],9
	test eax,eax
	je Block98

 Block73:
	add eax,8
	je Block98

 Block74:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block75:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block76:
	mov eax,dword ptr [esi+0x50]
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block78:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block80

 Block79:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block80:
	mov ecx,dword ptr [esi+0x8C]
	push 0
	push 0
	push 0
	push 0x80A
	push offset _S_UIUIWINDOW2IMGUS__22
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xA
	test eax,eax
	je Block99

 Block81:
	add eax,8
	je Block99

 Block82:
	lea edi,[eax-8]
	test edi,edi
	je Block84

 Block83:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block84:
	mov eax,dword ptr [esi+0x58]
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block86

 Block85:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block86:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],ebp
	je Block88

 Block87:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block88:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block89:
	xor edi,edi
	jmp Block4

 Block90:
	xor edi,edi
	jmp Block12

 Block91:
	xor edi,edi
	jmp Block20

 Block92:
	xor edi,edi
	jmp Block28

 Block93:
	xor edi,edi
	jmp Block36

 Block94:
	xor edi,edi
	jmp Block44

 Block95:
	xor edi,edi
	jmp Block52

 Block96:
	xor edi,edi
	jmp Block60

 Block97:
	xor edi,edi
	jmp Block68

 Block98:
	xor edi,edi
	jmp Block76

 Block99:
	xor edi,edi
	jmp Block84
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_
__SUB(004D9670, __cdecl, 83773,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::JobAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabFriend::GetFriendCount
__SUB_CLASS_THIS(004B8E70, __thiscall, 40061,  CTabFriend, long, const ZArray<CTabFriend::FRIENDITEM>&, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov ecx,esi
	xor edi,edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block10

 Block1:
	mov edx,dword ptr [esi]
	push ebp
	mov ebp,dword ptr [esp+0x14]
	mov esi,eax
	lea esp,[esp]

 Block2:
	cmp byte ptr [edx+0x28],1
	je Block8

 Block3:
	push edx
	call is_offline
	add esp,4
	test ebp,ebp
	je Block6

 Block4:
	test al,al
	jne Block8

 Block5:
	jmp Block7

 Block6:
	test al,al
	je Block8

 Block7:
	inc edi

 Block8:
	add edx,0x30
	sub esi,1
	jne Block2

 Block9:
	pop ebp

 Block10:
	mov eax,edi
	pop edi
	pop esi
	ret 8
}
}
// Friend_GroupAscComp_S::operator()
__SUB_CLASS_THIS(004BE850, __thiscall, 8067,  Friend_GroupAscComp_S, int32_t, const ZXString<char>&, const ZXString<char>&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	push 0x189E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebp,dword ptr [esp+0x18]
	push eax
	mov ecx,ebp
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x18]
	push 0x189E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esp+0x1C]
	push eax
	mov ecx,esi
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	test ebx,ebx
	je Block6

 Block5:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 8

 Block6:
	test edi,edi
	je Block8

 Block7:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret 8

 Block8:
	mov esi,dword ptr [esi]
	push esi
	mov ecx,ebp
	call ZXString<char>::CompareNoCase
	xor edx,edx
	test eax,eax
	setl dl
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov eax,edx
	pop ecx
	ret 8
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_
__SUB(004D8830, __cdecl, 83741,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::JobAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::JobAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabGuild::GradeDescComp::operator()
__SUB_CLASS_THIS(004B74A0, __thiscall, 40439,  CTabGuild::GradeDescComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x14]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_
__SUB(004B8CD0, __cdecl, 83647,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::GradeDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::GradeDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::GradeDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIUserList::SetScrollRange
__SUB_CLASS_THIS(004B7A50, __thiscall, 40174,  CUIUserList, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB18]
	test ecx,ecx
	je Block4

 Block1:
	mov edx,dword ptr [esp+4]
	test edx,edx
	jg Block3

 Block2:
	mov dword ptr [esp+4],0
	jmp  CCtrlScrollBar::SetScrollRange

 Block3:
	mov eax,0x66666667
	imul edx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax+2]
	mov dword ptr [esp+4],edx
	jmp  CCtrlScrollBar::SetScrollRange

 Block4:
	ret 4
}
}
// CTabFriend::OnDblClick
_SUB_EXCEPTION_HANDLER(4D92A0)
__SUB_CLASS_THIS0(004D92A0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D92A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	jne Block5

 Block1:
	mov ecx,dword ptr [eax+0xC60]
	cmp ecx,ebx
	je Block17

 Block2:
	cmp byte ptr [ecx],bl
	je Block17

 Block3:
	cmp edx,ebx
	jne Block5

 Block4:
	mov ecx,esi
	call CTabFriend::OnModify
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x44
	ret

 Block5:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x40],ebx
	lea ecx,[esp+0x14]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x54],ebx
	call CTabFriend::GetFriendItem
	cmp eax,ebx
	jl Block16

 Block6:
	cmp dword ptr [esp+0x38],ebx
	jne Block8

 Block7:
	cmp dword ptr [esp+0x34],ebx
	je Block13

 Block8:
	lea eax,[esp+0xC]
	push 0x18C2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x24],esp
	push edx
	mov byte ptr [esp+0x64],1
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block11

 Block9:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block16

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block11:
	mov ecx,esi
	call CTabFriend::OnBlockFriend
	mov ecx,dword ptr [esi+0x7C]
	mov edx,dword ptr [ecx+0xC5C]
	lea eax,[esp+0x14]
	push eax
	push edx
	mov ecx,esi
	call CTabFriend::GetFriendItem
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea eax,[esp+0x14]
	push eax
	call is_offline
	add esp,4
	mov ecx,esi
	test al,al
	je Block15

 Block14:
	call CTabFriend::OnSendMemo
	jmp Block16

 Block15:
	call CTabFriend::OnWhisper

 Block16:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block17:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x44
	ret
}
}
// CUIPartyHP::~CUIPartyHP
__SUB_CLASS_THIS0(004D6330, __thiscall, 41033,  CUIPartyHP, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CUIPartyHP::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPartyHP::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPartyHP::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB34]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB30]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB2C]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB28]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xB24]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xB20]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xB1C]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xB18]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0xB14]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0xB10]
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0xB0C]
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIPartyHP>::ms_pInstance],0
	pop esi
	jmp  CUIWnd::~CUIWnd
}
}
// CWndGuildGrade::OnSaveGradeName
_SUB_EXCEPTION_HANDLER(4BFD70)
__SUB_CLASS_THIS0(004BFD70, __thiscall, 40659,  CWndGuildGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BFD70
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
	mov esi,ecx
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0x37C8]
	test eax,eax
	je Block15

 Block1:
	mov eax,dword ptr [ebp+0x20B4]
	mov ecx,dword ptr [ebp+0x37D4]
	cmp dword ptr [ecx],eax
	jne Block15

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xD07
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block15

 Block3:
	lea ebx,[esi+0x98]
	xor eax,eax
	mov dword ptr [esp+0x18],ebx
	nop

 Block4:
	lea edi,[eax+1]
	push edi
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call CWvsContext::GetGuildGradeName
	mov eax,dword ptr [ebx]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jne Block9

 Block5:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,edi
	add ebx,4
	cmp eax,5
	jl Block4

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xD01
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block9:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x38],edi
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push ecx
	mov ecx,esp
	lea edx,[esi+0xA8]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea eax,[esi+0xA4]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [esp+0x44],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea edx,[esi+0xA0]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x48],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	add esi,0x9C
	push esi
	mov byte ptr [esp+0x4C],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push eax
	mov byte ptr [esp+0x50],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x4C],5
	test esi,esi
	je Block13

 Block12:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block14

 Block13:
	xor esi,esi

 Block14:
	mov ecx,esi
	mov dword ptr [esp+0x4C],edi
	call CField::SendSetGradeNameMsg

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CTabFriend::FRIENDITEM::FRIENDITEM
_SUB_EXCEPTION_HANDLER(4C0810)
__SUB_CLASS_THIS(004C0810, __thiscall, 40082,  CTabFriend::FRIENDITEM, void, const CTabFriend::FRIENDITEM&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0810
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	lea edx,[edi+4]
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+8]
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],ecx
	mov edx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],edx
	mov eax,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],edx
	mov eax,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],ecx
	mov dl,byte ptr [edi+0x28]
	add edi,0x2C
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],dl
	push edi
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CTabGuild::GUILDITEM::GUILDITEM
_SUB_EXCEPTION_HANDLER(4C08C0)
__SUB_CLASS_THIS(004C08C0, __thiscall, 40406,  CTabGuild::GUILDITEM, void, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C08C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	lea edx,[edi+4]
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[edi+8]
	lea ecx,[esi+8]
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],ecx
	mov edx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],edx
	mov eax,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],edx
	mov eax,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],ecx
	lea edx,[edi+0x28]
	lea ecx,[esi+0x28]
	push edx
	mov byte ptr [esp+0x1C],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],eax
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],ecx
	mov edx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],edx
	mov eax,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],eax
	mov ecx,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],ecx
	mov edx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],edx
	mov eax,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],eax
	mov ecx,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],ecx
	mov edx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],edx
	mov eax,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],eax
	mov ecx,dword ptr [edi+0x54]
	mov dword ptr [esi+0x54],ecx
	mov edx,dword ptr [edi+0x58]
	mov dword ptr [esi+0x58],edx
	mov eax,dword ptr [edi+0x5C]
	mov dword ptr [esi+0x5C],eax
	mov ecx,dword ptr [edi+0x60]
	mov dword ptr [esi+0x60],ecx
	mov edx,dword ptr [edi+0x64]
	mov dword ptr [esi+0x64],edx
	mov eax,dword ptr [edi+0x68]
	mov dword ptr [esi+0x68],eax
	mov ecx,dword ptr [edi+0x6C]
	mov dword ptr [esi+0x6C],ecx
	mov edx,dword ptr [edi+0x70]
	mov dword ptr [esi+0x70],edx
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_
_SUB_EXCEPTION_HANDLER(4C1CA0)
__SUB(004C1CA0, __cdecl, 83722,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::LevelDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::LevelDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::LevelDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuildAlliance::LevelAscComp::operator()
__SUB_CLASS_THIS(004B7520, __thiscall, 40569,  CTabGuildAlliance::LevelAscComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x10]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_
_SUB_EXCEPTION_HANDLER(4BDE30)
__SUB(004BDE30, __cdecl, 83678,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::GradeDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BDE30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::GradeDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// get_channel
__SUB(004B7210, __cdecl, 83591,  long, const CTabFriend::FRIENDITEM&) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [eax+0x2060]
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call is_offline
	add esp,4
	test al,al
	je Block2

 Block1:
	mov eax,2
	pop esi
	ret

 Block2:
	cmp dword ptr [esi+8],edx
	jne Block5

 Block3:
	test edx,edx
	jl Block5

 Block4:
	xor eax,eax
	pop esi
	ret

 Block5:
	mov eax,1
	pop esi
	ret
}
}
// CTabGuildAlliance::SectionData::Sort
__SUB_CLASS_THIS0(004DA290, __thiscall, 40594,  CTabGuildAlliance::SectionData, void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x78]
	dec eax
	cmp eax,3
	ja Block14

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block8
cmp EAX, 3
je Block11


 Block2:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x7C],eax
	je Block4

 Block3:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block4:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block5:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x7C],eax
	je Block7

 Block6:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block7:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block8:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x7C],eax
	je Block10

 Block9:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block10:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block11:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x7C],eax
	je Block13

 Block12:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block13:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>::call_1
	add esp,8

 Block14:
	pop ecx
	ret
}
}
// CTabGuild::OnSortMember
__SUB_CLASS_THIS(004DA9A0, __thiscall, 40384,  CTabGuild, void, int32_t, const CTabGuild::ORDER) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],eax
	sete al
	imul eax,0x7C
	add eax,ecx
	mov ecx,dword ptr [esp+8]
	cmp ecx,dword ptr [eax+0x120]
	jne Block2

 Block1:
	xor ecx,ecx
	cmp dword ptr [eax+0x124],ecx
	sete cl
	mov dword ptr [eax+0x124],ecx
	lea ecx,[eax+0xAC]
	call CTabGuild::SectionData::Sort
	ret 8

 Block2:
	mov dword ptr [eax+0x120],ecx
	lea ecx,[eax+0xAC]
	mov dword ptr [eax+0x124],1
	call CTabGuild::SectionData::Sort
	ret 8
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_
_SUB_EXCEPTION_HANDLER(4BE4F0)
__SUB(004BE4F0, __cdecl, 83690,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::LevelDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE4F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::LevelDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// CTabFriend::OnModify
_SUB_EXCEPTION_HANDLER(4D90E0)
__SUB_CLASS_THIS0(004D90E0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D90E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	jne Block12

 Block1:
	mov ecx,dword ptr [eax+0xC60]
	cmp ecx,ebx
	je Block13

 Block2:
	cmp byte ptr [ecx],bl
	je Block13

 Block3:
	cmp edx,ebx
	jne Block12

 Block4:
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0x14]
	push 0x189E
	push eax
	mov dword ptr [esp+0x5C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x7C]
	push eax
	add ecx,0xC60
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push ebx
	cmp edi,ebx
	je Block9

 Block7:
	push ebx
	push ebx
	push ebx
	lea ecx,[esp+0x24]
	push 0x1876
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x7C]
	mov ecx,dword ptr [edx+0xC60]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x70],1
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block10

 Block9:
	mov eax,dword ptr [esi+0x7C]
	push ecx
	add eax,0xC60
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CTabFriend::OnGroupAdd

 Block10:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x48
	ret

 Block12:
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x48],ebx
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x5C],2
	call CTabFriend::GetFriendItem
	push ecx
	mov ecx,esp
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CTabFriend::OnAdd
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block13:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x48
	ret
}
}
// CTabGuild::LoadData
_SUB_EXCEPTION_HANDLER(4DA5B0)
__SUB_CLASS_THIS0(004DA5B0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DA5B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0xAC],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	lea esi,[ecx+0xC8]
	mov edi,2
	lea ebx,[ebx]

 Block1:
	lea ecx,[esi+0x54]
	mov dword ptr [esi-4],1
	mov dword ptr [esi],1
	call ZArray<CTabGuild::GUILDITEM>::RemoveAll
	add esi,0x7C
	sub edi,1
	jne Block1

 Block2:
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0x37C8]
	xor ebx,ebx
	cmp eax,ebx
	jne Block4

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x70]
	mov dword ptr [ecx+0xBC8],ebx
	mov edx,dword ptr [eax+0x70]
	mov dword ptr [edx+0xBCC],2
	jmp Block44

 Block4:
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call CWvsContext::GetGuildName
	mov esi,dword ptr [esp+0x14]
	push eax
	lea ecx,[esi+0x74]
	mov dword ptr [esp+0xD0],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWvsContext::GetGuildNotice
	mov eax,dword ptr [eax]
	add esi,0xA0
	push eax
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	cmp edi,ebx
	je Block12

 Block9:
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	call CWvsContext::GetGuildNotice
	push eax
	mov ecx,esi
	mov dword ptr [esp+0xD0],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x14]
	call CTabGuild::MakeGuildNoticeLayer

 Block12:
	mov edi,dword ptr [esp+0x14]
	xor esi,esi
	add edi,0x78

 Block13:
	inc esi
	push esi
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	call CWvsContext::GetGuildGradeName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0xD0],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	add edi,4
	cmp esi,5
	jl Block13

 Block16:
	mov ecx,ebp
	xor edi,edi
	call CWvsContext::GetGuildMemberNum
	test eax,eax
	jle Block37

 Block17:
	lea esp,[esp]

 Block18:
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push edi
	mov ecx,ebp
	call CWvsContext::GetGuildMemberDataByIdx
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block36

 Block19:
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x98]
	mov dword ptr [esp+0xCC],3
	lea edx,[eax+1]

 Block20:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block20

 Block21:
	sub eax,edx
	mov esi,eax
	push esi
	lea eax,[esp+0x9C]
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0xA5]
	mov dword ptr [esp+0x30],eax
	cmp eax,0xFFFFFFFF
	jne Block23

 Block22:
	push ebx
	push 2
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S___16]
	mov word ptr [eax],cx
	push 2
	jmp Block29

 Block23:
	push eax
	call get_job_name
	add esp,4
	cmp eax,ebx
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block30

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0x2C],ebx
	jmp Block30

 Block26:
	mov ecx,eax
	lea esi,[ecx+1]
	mov edi,edi

 Block27:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block27

 Block28:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x3C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi

 Block29:
	lea ecx,[esp+0x30]
	call ZXString<char>::ReleaseBuffer

 Block30:
	mov eax,dword ptr [esp+0xAD]
	mov edx,dword ptr [esp+0xA9]
	push eax
	mov dword ptr [esp+0x3C],eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x3C],edx
	call CWvsContext::GetGuildGradeName
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xD0],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xCC],3
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov dword ptr [esp+0x90],ebx
	mov dword ptr [esp+0x94],ebx
	cmp dword ptr [esp+0xB1],ebx
	je Block34

 Block33:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x11C
	jmp Block35

 Block34:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x24]
	push edx
	add ecx,0x198

 Block35:
	push 0xFFFFFFFF
	call ZArray<CTabGuild::GUILDITEM>::InsertBefore
	mov ecx,eax
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block36:
	mov ecx,ebp
	inc edi
	call CWvsContext::GetGuildMemberNum
	cmp edi,eax
	jl Block18

 Block37:
	mov esi,dword ptr [esp+0x14]
	lea ecx,[esi+0xAC]
	call CTabGuild::SectionData::Sort
	lea ecx,[esi+0x128]
	call CTabGuild::SectionData::Sort
	mov eax,dword ptr [esi+0x11C]
	cmp eax,ebx
	jne Block39

 Block38:
	xor ecx,ecx
	jmp Block40

 Block39:
	mov ecx,dword ptr [eax-4]

 Block40:
	mov eax,dword ptr [esi+0x198]
	cmp eax,ebx
	jne Block42

 Block41:
	xor eax,eax
	jmp Block43

 Block42:
	mov eax,dword ptr [eax-4]

 Block43:
	add eax,ecx
	mov ecx,dword ptr [esi+0x70]
	mov dword ptr [ecx+0xBC8],eax
	mov ecx,dword ptr [esi+0x70]
	call CUIUserList::SetViewItem

 Block44:
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0xAC]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0xBC
	ret
}
}
// CUIUserList::SetTooltipStr
_SUB_EXCEPTION_HANDLER(4BAC80)
__SUB_CLASS_THIS(004BAC80, __thiscall, 40180,  CUIUserList, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BAC80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x20],0
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+8]
	push ecx
	add edx,0x14
	push edx
	add eax,0x14
	push eax
	lea ecx,[esi+0x88]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CTabGuild::OnGradeChange
_SUB_EXCEPTION_HANDLER(4C9930)
__SUB_CLASS_THIS(004C9930, __thiscall, 40379,  CTabGuild, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9930
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	je Block10

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [esi+0x20B4]
	je Block10

 Block2:
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x94],ebx
	call CTabGuild::GetGuildItem
	mov edi,dword ptr [esp+0x24]
	cmp dword ptr [esp+0x94],ebx
	je Block4

 Block3:
	dec edi
	jmp Block5

 Block4:
	inc edi

 Block5:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebx
	je Block8

 Block6:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,esi
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	mov edx,dword ptr [esp+0x10]
	push edi
	push edx
	call CField::SendSetMemberGradeMsg
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block10:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x80
	ret 4
}
}
// CTabParty::Draw
_SUB_EXCEPTION_HANDLER(4C4A30)
__SUB_CLASS_THIS(004C4A30, __thiscall, 40282,  CTabParty, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C4A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x110
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x124]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	mov dword ptr [esp+0x12C],edi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x120],edi
	mov dword ptr [esp+0x118],edi
	mov dword ptr [esp+0x11C],edi
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x114],eax
	mov eax,dword ptr [esi+0x4C]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x12C],5
	mov dword ptr [esp+0xA0],eax
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x4C]
	mov ebp,dword ptr [eax+0xC80]
	add eax,0xC80
	mov byte ptr [esp+0x12C],6
	mov dword ptr [esp+0x1C],ebp
	cmp ebp,edi
	je Block4

 Block3:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block4:
	mov eax,dword ptr [esi+0x4C]
	add eax,0xC9C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x12C],7
	mov dword ptr [esp+0x98],eax
	cmp eax,edi
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov eax,dword ptr [esi+0x4C]
	add eax,0xCA0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x12C],8
	mov dword ptr [esp+0x64],eax
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	push 0x3C
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__68
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],9
	mov dword ptr [esp+0x6C],esp
	cmp eax,edi
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	lea ecx,[esp+0x5C]
	push 0x849
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x50]
	mov byte ptr [esp+0x12C],0xA
	cmp ecx,edi
	jne Block12

 Block11:
	xor ecx,ecx
	jmp Block13

 Block12:
	mov ecx,dword ptr [ecx-4]

 Block13:
	mov edx,dword ptr [esi+0x4C]
	mov edx,dword ptr [edx+0xBC8]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[esp+0x6C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x6C]
	add esp,0x10
	mov byte ptr [esp+0x12C],9
	cmp eax,edi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call ebx
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x138],0xB
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x134],0xC
	cmp ebp,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x134],0xB
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov ebp,eax
	mov byte ptr [esp+0x12C],9
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[esp+0x68]
	push edx
	call ebx
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x130],0xD
	call ebx
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x2C]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,0xE
	push eax
	mov byte ptr [esp+0x140],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0xF
	cmp ecx,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edi,0xDC
	push 0x44
	sub edi,ebp
	push edi
	mov byte ptr [esp+0x144],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x12C],0xD
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x12C],9
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esi+0x4C]
	add eax,0xBD4
	push 0x57
	lea ecx,[edi-0x14]
	mov dword ptr [eax],ecx
	mov edx,0x3F
	mov dword ptr [eax+4],edx
	push 0xA
	lea edi,[edi+ebp+0x14]
	mov dword ptr [eax+8],edi
	lea ebp,[edx+0x15]
	mov dword ptr [eax+0xC],ebp
	mov edx,dword ptr [esp+0x13C]
	push offset _S_UIUIWINDOW2IMGUS__67
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x6C],esp
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	xor edi,edi
	mov ebx,0x69
	mov dword ptr [esp+0x48],edi

 Block40:
	mov eax,dword ptr [esi+0x50]
	mov ebp,dword ptr [esp+0x1C]
	test eax,eax
	je Block127

 Block41:
	cmp edi,dword ptr [eax-4]
	jae Block127

 Block42:
	test eax,eax
	je Block44

 Block43:
	mov eax,dword ptr [eax-4]

 Block44:
	dec eax
	cmp edi,eax
	jne Block48

 Block45:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	je Block47

 Block46:
	cmp dword ptr [eax-4],0
	jne Block48

 Block47:
	push ebx
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__66
	jmp Block49

 Block48:
	push ebx
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__65

 Block49:
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esi+0x50]
	lea edi,[edi+edi*4]
	shl edi,4
	add eax,edi
	add eax,0xC
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	push 0x43
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x1C],esp
	push ebp
	mov byte ptr [esp+0x138],0x10
	call edx
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov ecx,dword ptr [esi+0x50]
	mov dword ptr [edi+ecx+0x4C],eax
	mov edx,dword ptr [esi+0x50]
	mov ecx,dword ptr [edi+edx+0x10]
	lea eax,[edi+edx]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+4]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x3C]
	push offset _S_13S11S6D
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esi+0x4C]
	mov edx,dword ptr [esi+0x50]
	mov ecx,dword ptr [eax+0xC5C]
	add esp,0x20
	cmp ecx,dword ptr [edi+edx]
	jne Block89

 Block52:
	lea edx,[esp+0x20]
	push 0xC
	push edx
	mov dword ptr [esp+0xA4],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::CompareNoCase
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0x134]
	test eax,eax
	je Block18

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF244768
	push 0x14
	push 0xE6
	push ebx
	push 0xA
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block57:
	lea eax,[esp+0x104]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x104]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block58:
	mov edx,3
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],0xFF
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x104]
	push eax
	mov eax,dword ptr [esi+0x50]
	lea ecx,[esp+0x6C]
	push ecx
	push edx
	push ecx
	add eax,edi
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x12
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x13
	test ecx,ecx
	je Block18

 Block59:
	lea ebp,[ebx+5]
	push ebp
	push 0x1B
	mov byte ptr [esp+0x144],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x12C],0x11
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x12C],0x10
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x10C]
	xor edx,edx
	mov word ptr [esp+0x104],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xA4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block68:
	mov eax,3
	mov word ptr [esp+0xE4],ax
	mov dword ptr [esp+0xEC],0xFF
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0xE8]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x15
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x16
	test ecx,ecx
	je Block18

 Block69:
	push ebp
	push 0x75
	mov byte ptr [esp+0x144],0x15
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x12C],0x14
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0xE4],ax
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0x12C],0x10
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ecx,dword ptr [esi+0x50]
	mov edx,dword ptr [edi+ecx+0x10]
	push edx
	lea eax,[esp+0x28]
	push offset _S_6D
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[esp+0xD4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block78:
	mov eax,3
	mov word ptr [esp+0xF4],ax
	mov dword ptr [esp+0xFC],0xFF
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0xD4]
	push ecx
	lea edx,[esp+0xF8]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x18
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x19
	test ecx,ecx
	je Block18

 Block79:
	push ebp
	push 0xBB
	mov byte ptr [esp+0x144],0x18
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x12C],0x17
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x12C],0x10
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov ecx,dword ptr [esi+0x50]
	cmp dword ptr [edi+ecx+0x18],0
	je Block124

 Block88:
	lea edx,[ebx+1]
	push edx
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__64
	jmp Block121

 Block89:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block90:
	mov eax,3
	mov word ptr [esp+0xB4],ax
	mov dword ptr [esp+0xBC],0xFF
	mov eax,dword ptr [esp+0x98]
	lea ecx,[esp+0xC4]
	push ecx
	lea edx,[esp+0xB8]
	push edx
	push eax
	mov eax,dword ptr [esi+0x50]
	push ecx
	add eax,edi
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x1B
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x1C
	test ecx,ecx
	je Block18

 Block91:
	lea ebp,[ebx+5]
	push ebp
	push 0x1B
	mov byte ptr [esp+0x144],0x1B
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xB4],8
	mov byte ptr [esp+0x12C],0x1A
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0x12C],0x10
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block100:
	mov ecx,3
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],0xFF
	mov ecx,dword ptr [esp+0x98]
	lea edx,[esp+0x78]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x8C]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x1E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x1F
	test ecx,ecx
	je Block18

 Block101:
	push ebp
	push 0x75
	mov byte ptr [esp+0x144],0x1E
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x12C],0x1D
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x12C],0x10
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov ecx,dword ptr [esi+0x50]
	mov edx,dword ptr [edi+ecx+0x10]
	push edx
	lea eax,[esp+0x28]
	push offset _S_6D
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block110:
	mov eax,3
	mov word ptr [esp+0x4C],ax
	mov dword ptr [esp+0x54],0xFF
	mov eax,dword ptr [esp+0x98]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x21
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x22
	test ecx,ecx
	je Block18

 Block111:
	push ebp
	push 0xBB
	mov byte ptr [esp+0x144],0x21
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x12C],0x20
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x12C],0x10
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov ecx,dword ptr [esi+0x50]
	cmp dword ptr [edi+ecx+0x18],0
	je Block124

 Block120:
	lea edx,[ebx+1]
	push edx
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__63

 Block121:
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block123

 Block122:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block123:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1

 Block124:
	mov ecx,dword ptr [esi+0x50]
	lea ebp,[ebx+0x14]
	push ebp
	push 0xF0
	push ebx
	push 0xA
	lea edx,[edi+ecx+0x1C]
	push edx
	call SetRect
	mov eax,dword ptr [esi+0x50]
	push ebp
	push 0x71
	push ebx
	push 0xB
	lea ecx,[edi+eax+0x2C]
	push ecx
	call SetRect
	mov edx,dword ptr [esi+0x50]
	push ebp
	push 0xBC
	push ebx
	push 0x73
	lea eax,[edi+edx+0x3C]
	push eax
	call SetRect
	mov eax,dword ptr [esp+0x18]
	mov ebx,ebp
	mov byte ptr [esp+0x12C],9
	test eax,eax
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	inc dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x48]
	jmp Block40

 Block127:
	xor ecx,ecx
	lea edx,[ebx+1]
	mov dword ptr [esp+0x48],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x18],edx

 Block128:
	mov eax,dword ptr [esi+0x58]
	xor edi,edi
	cmp eax,edi
	je Block175

 Block129:
	cmp ecx,dword ptr [eax-4]
	jae Block175

 Block130:
	cmp eax,edi
	jne Block132

 Block131:
	xor eax,eax
	jmp Block133

 Block132:
	mov eax,dword ptr [eax-4]

 Block133:
	dec eax
	push ebx
	push 0xA
	cmp ecx,eax
	jne Block135

 Block134:
	push offset _S_UIUIWINDOW2IMGUS__66
	jmp Block136

 Block135:
	push offset _S_UIUIWINDOW2IMGUS__65

 Block136:
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	cmp eax,edi
	je Block138

 Block137:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block138:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esi+0x58]
	add eax,ebp
	add eax,0xC
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString<char>::op_assign
	push 0x43
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x30],esp
	push ecx
	mov byte ptr [esp+0x138],0x23
	call eax
	lea ecx,[esp+0x28]
	push ecx
	call format_string_1
	mov edx,dword ptr [esi+0x58]
	mov dword ptr [edx+ebp+0x4C],eax
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [eax+ebp+0x10]
	mov edx,dword ptr [esp+0x2C]
	add eax,ebp
	mov eax,dword ptr [eax+4]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x3C]
	push offset _S_13S11S6D
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esi+0x4C]
	mov edx,dword ptr [esi+0x58]
	mov ecx,dword ptr [eax+0xC5C]
	add esp,0x20
	cmp ecx,dword ptr [edx+ebp]
	jne Block157

 Block139:
	lea edx,[esp+0x14]
	push 0xC
	push edx
	mov dword ptr [esp+0xA4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov eax,dword ptr [esp+0x134]
	cmp eax,edi
	je Block18

 Block142:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF244768
	push 0x14
	push 0xE6
	push ebx
	push 0xA
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block144:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block145:
	mov edx,3
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],0xFF
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x25
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x26
	test ecx,ecx
	je Block18

 Block146:
	mov edi,dword ptr [esp+0x28]
	lea edx,[edi+4]
	push edx
	push 0x1B
	mov byte ptr [esp+0x144],0x25
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x12C],0x24
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x12C],0x23
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov ecx,dword ptr [esi+0x58]
	cmp dword ptr [ecx+ebp+0x18],0
	je Block172

 Block155:
	mov edx,dword ptr [esp+0x134]
	push edi
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__64
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block171

 Block156:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	jmp Block171

 Block157:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push eax
	call edi
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block158:
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x130],0x27
	call edi
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block159:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x28
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x29
	test ecx,ecx
	je Block18

 Block160:
	mov edi,dword ptr [esp+0x28]
	lea eax,[edi+4]
	push eax
	push 0x1B
	mov byte ptr [esp+0x144],0x28
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x12C],0x27
	jne Block163

 Block161:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x12C],0x23
	jne Block167

 Block165:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov edx,dword ptr [esi+0x58]
	cmp dword ptr [edx+ebp+0x18],0
	je Block172

 Block169:
	push edi
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__63
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block171

 Block170:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block171:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1

 Block172:
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x58]
	add edi,0x13
	push edi
	push 0xF0
	push ebx
	push 0xA
	lea edx,[ecx+ebp+0x1C]
	push edx
	call SetRect
	mov eax,dword ptr [esi+0x58]
	push edi
	push 0x71
	push ebx
	push 0xB
	lea ecx,[eax+ebp+0x2C]
	push ecx
	call SetRect
	mov edx,dword ptr [esi+0x58]
	push edi
	push 0xBC
	push ebx
	push 0x73
	lea eax,[edx+ebp+0x3C]
	push eax
	call SetRect
	mov eax,dword ptr [esp+0x20]
	add dword ptr [esp+0x18],0x14
	add ebx,0x14
	mov byte ptr [esp+0x12C],9
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block174:
	inc dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x48]
	add ebp,0x50
	jmp Block128

 Block175:
	mov eax,dword ptr [esi+0x58]
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block177

 Block176:
	cmp dword ptr [eax-4],edi
	jne Block196

 Block177:
	mov eax,dword ptr [esi+0x50]
	cmp eax,edi
	je Block179

 Block178:
	cmp dword ptr [eax-4],edi
	jne Block196

 Block179:
	push ebx
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__66
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	cmp eax,edi
	je Block181

 Block180:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block181:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x130],0x2A
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	mov ecx,dword ptr [esp+0xA0]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1AC4
	mov bl,0x2B
	push edx
	mov byte ptr [esp+0x144],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x2C
	test ecx,ecx
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	mov eax,dword ptr [esp+0x24]
	add eax,5
	push eax
	push 0x1B
	mov byte ptr [esp+0x144],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x12C],0x2A
	cmp word ptr [esp+0x38],di
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov byte ptr [esp+0x12C],9
	cmp word ptr [esp+0x4C],di
	jne Block194

 Block192:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	add dword ptr [esp+0x14],0x14
	mov ebx,dword ptr [esp+0x14]

 Block196:
	mov edx,dword ptr [esp+0x134]
	add ebx,6
	push ebx
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__62
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block198:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	lea eax,[esp+0x20]
	push 0x849
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x54]
	mov byte ptr [esp+0x12C],0x2D
	test ecx,ecx
	je Block200

 Block199:
	mov ecx,dword ptr [ecx-4]

 Block200:
	mov edx,dword ptr [esi+0x4C]
	mov edx,dword ptr [edx+0xBC8]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[esp+0x6C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x12C],9
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block202:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block204

 Block203:
	push eax
	call _com_issue_error

 Block204:
	mov ebp,dword ptr [esp+0x60]
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x2E
	push ebp
	mov byte ptr [esp+0x138],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x134],0x2F
	mov byte ptr [esp+0x134],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x38],8
	mov ebx,eax
	mov byte ptr [esp+0x12C],9
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x130],0x30
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x140],0x31
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x32
	test ecx,ecx
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	mov ebp,dword ptr [esp+0x24]
	add ebp,8
	mov edi,0xDC
	push ebp
	sub edi,ebx
	push edi
	mov byte ptr [esp+0x144],0x31
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x12C],0x30
	jne Block217

 Block215:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x12C],9
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov eax,dword ptr [esi+0x4C]
	add eax,0xBE4
	lea ecx,[edi-0x14]
	mov dword ptr [eax],ecx
	lea edx,[ebp-5]
	mov dword ptr [eax+4],edx
	lea edi,[edi+ebx+0x14]
	mov dword ptr [eax+8],edi
	add ebp,0x10
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x134]
	add eax,0x1B
	push eax
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__67
	push ecx
	mov dword ptr [esp+0x24],eax
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block224

 Block223:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block224:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x12
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x48],ebp

 Block225:
	mov eax,dword ptr [esi+0x54]
	mov edi,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block317

 Block226:
	cmp ebp,dword ptr [eax-4]
	jae Block317

 Block227:
	cmp eax,ebx
	jne Block229

 Block228:
	xor eax,eax
	jmp Block230

 Block229:
	mov eax,dword ptr [eax-4]

 Block230:
	dec eax
	push ecx
	push 0xA
	cmp ebp,eax
	jne Block232

 Block231:
	push offset _S_UIUIWINDOW2IMGUS__66
	jmp Block233

 Block232:
	push offset _S_UIUIWINDOW2IMGUS__65

 Block233:
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebx
	je Block235

 Block234:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block235:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esi+0x54]
	lea ebp,[ebp+ebp*4]
	shl ebp,4
	add eax,ebp
	add eax,0xC
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	push 0x43
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x30],esp
	push edi
	mov byte ptr [esp+0x138],0x33
	call edx
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov ecx,dword ptr [esi+0x54]
	mov dword ptr [ecx+ebp+0x4C],eax
	mov edx,dword ptr [esi+0x54]
	mov ecx,dword ptr [edx+ebp+0x10]
	lea eax,[edx+ebp]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+4]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x3C]
	push offset _S_13S11S6D
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esi+0x4C]
	mov edx,dword ptr [esi+0x54]
	mov ecx,dword ptr [eax+0xC5C]
	add esp,0x20
	cmp ecx,dword ptr [edx+ebp]
	jne Block276

 Block236:
	lea edx,[esp+0x20]
	push 0xC
	push edx
	mov dword ptr [esp+0xA4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::CompareNoCase
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block238

 Block237:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block238:
	mov eax,dword ptr [esp+0x134]
	cmp eax,ebx
	je Block18

 Block239:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	push 0xFF244768
	push 0x14
	push 0xE6
	push edx
	push 0xA
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	cmp eax,ebx
	jge Block241

 Block240:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block241:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block242:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x130],0x34
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block243:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x54]
	push ecx
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x35
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x36
	cmp ecx,ebx
	je Block18

 Block244:
	mov edi,dword ptr [esp+0x24]
	add edi,5
	push edi
	push 0x1B
	mov byte ptr [esp+0x144],0x35
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x12C],0x34
	jne Block247

 Block245:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebx
	je Block248

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block248

 Block247:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block248:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x12C],0x33
	jne Block251

 Block249:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block252:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block253:
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x130],0x37
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block254:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x38
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x39
	cmp ecx,ebx
	je Block18

 Block255:
	push edi
	push 0x75
	mov byte ptr [esp+0x144],0x38
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x12C],0x37
	jne Block258

 Block256:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebx
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block259:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x12C],0x33
	jne Block262

 Block260:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebx
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block263:
	mov ecx,dword ptr [esi+0x54]
	mov edx,dword ptr [ecx+ebp+0x10]
	push edx
	lea eax,[esp+0x28]
	push offset _S_6D
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xB4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block264:
	lea eax,[esp+0xC4]
	push eax
	mov byte ptr [esp+0x130],0x3A
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block265:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0xB4]
	push edx
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0xC8]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x3B
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x3C
	cmp ecx,ebx
	je Block18

 Block266:
	push edi
	push 0xBB
	mov byte ptr [esp+0x144],0x3B
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0x12C],0x3A
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebx
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block270:
	cmp word ptr [esp+0xB4],8
	mov byte ptr [esp+0x12C],0x33
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	cmp eax,ebx
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[esp+0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	mov ecx,dword ptr [esi+0x54]
	cmp dword ptr [ecx+ebp+0x18],ebx
	je Block314

 Block275:
	mov edx,dword ptr [esp+0x14]
	inc edx
	push edx
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__64
	jmp Block311

 Block276:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xF4]
	push ecx
	call edi
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block277:
	lea eax,[esp+0xD4]
	push eax
	mov byte ptr [esp+0x130],0x3D
	call edi
	lea ecx,[esp+0xD4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block278:
	mov ecx,dword ptr [esp+0x64]
	lea edx,[esp+0xF4]
	push edx
	lea eax,[esp+0xD8]
	push eax
	mov eax,dword ptr [esi+0x54]
	push ecx
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x3E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x3F
	cmp ecx,ebx
	je Block18

 Block279:
	mov edi,dword ptr [esp+0x24]
	add edi,5
	push edi
	push 0x1B
	mov byte ptr [esp+0x144],0x3E
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x12C],0x3D
	jne Block282

 Block280:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	cmp eax,ebx
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block283:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x12C],0x33
	jne Block286

 Block284:
	mov eax,dword ptr [esp+0xFC]
	xor ecx,ecx
	mov word ptr [esp+0xF4],cx
	cmp eax,ebx
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea edx,[esp+0xF4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block287:
	lea eax,[esp+0xE4]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xE4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block288:
	lea edx,[esp+0xA4]
	push edx
	mov byte ptr [esp+0x130],0x40
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xA4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block289:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0xE4]
	push ecx
	lea edx,[esp+0xA8]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x41
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x42
	cmp ecx,ebx
	je Block18

 Block290:
	push edi
	push 0x75
	mov byte ptr [esp+0x144],0x41
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0x12C],0x40
	jne Block293

 Block291:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,ebx
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block294:
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x12C],0x33
	jne Block297

 Block295:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	cmp eax,ebx
	je Block298

 Block296:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block298

 Block297:
	lea eax,[esp+0xE4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block298:
	mov ecx,dword ptr [esi+0x54]
	mov edx,dword ptr [ecx+ebp+0x10]
	push edx
	lea eax,[esp+0x28]
	push offset _S_6D
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block299:
	lea eax,[esp+0x104]
	push eax
	mov byte ptr [esp+0x130],0x43
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x104]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block16

 Block300:
	mov ecx,dword ptr [esp+0x64]
	lea edx,[esp+0x68]
	push edx
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x108]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],0x44
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x45
	cmp ecx,ebx
	je Block18

 Block301:
	push edi
	push 0xBB
	mov byte ptr [esp+0x144],0x44
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x12C],0x43
	jne Block304

 Block302:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	cmp eax,ebx
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea ecx,[esp+0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block305:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x12C],0x33
	jne Block308

 Block306:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebx
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block309:
	mov ecx,dword ptr [esi+0x54]
	cmp dword ptr [ecx+ebp+0x18],ebx
	je Block314

 Block310:
	mov edx,dword ptr [esp+0x14]
	inc edx
	push edx
	push 0xB
	push offset _S_UIUIWINDOW2IMGUS__63

 Block311:
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebx
	je Block313

 Block312:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block313:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1

 Block314:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x54]
	lea edi,[eax+0x14]
	push edi
	push 0xF0
	push eax
	push 0xA
	lea edx,[ecx+ebp+0x1C]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x54]
	push edi
	push 0xBC
	push eax
	push 0x73
	lea edx,[ecx+ebp+0x3C]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x12C],9
	cmp eax,ebx
	je Block316

 Block315:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block316:
	inc dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x48]
	jmp Block225

 Block317:
	cmp ebp,ebx
	jne Block334

 Block318:
	push ecx
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__66
	push ecx
	mov ecx,dword ptr [esp+0x144]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebx
	je Block320

 Block319:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block320:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x130],0x46
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block324

 Block323:
	push eax
	call _com_issue_error

 Block324:
	mov ecx,dword ptr [esp+0xA0]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1AC4
	mov bl,0x47
	push edx
	mov byte ptr [esp+0x144],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x48
	test ecx,ecx
	jne Block326

 Block325:
	push 0x80004003
	call _com_issue_error

 Block326:
	mov eax,dword ptr [esp+0x24]
	add eax,5
	push eax
	push 0x1B
	mov byte ptr [esp+0x144],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x12C],0x46
	cmp word ptr [esp+0x38],di
	jne Block329

 Block327:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block330:
	mov byte ptr [esp+0x12C],9
	cmp word ptr [esp+0x4C],di
	jne Block333

 Block331:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block334

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block334

 Block333:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block334:
	mov eax,dword ptr [esi+8]
	mov ebx,dword ptr [esp+0x114]
	cmp dword ptr [ebx+0x3604],0
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	jne Block343

 Block335:
	push 1
	call eax
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea edi,[esi+0x18]
	mov ebp,6

 Block336:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	add edi,8
	sub ebp,1
	jne Block336

 Block337:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block342

 Block338:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block341

 Block339:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block341

 Block340:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block341:
	mov dword ptr [esp+0x2C],0

 Block342:
	mov ecx,dword ptr [ebp+0x35]
	push ecx
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov esi,dword ptr [esi+0x48]
	movzx eax,al
	xor ebx,ebx
	add esp,8
	cmp eax,0xA
	setge bl
	push ebx
	jmp Block383

 Block343:
	push 0
	call eax
	mov ecx,dword ptr [esi+0x4C]
	mov eax,dword ptr [ecx+0xC5C]
	test eax,eax
	je Block346

 Block344:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [edx+0x20B4]
	je Block346

 Block345:
	mov edi,1
	jmp Block347

 Block346:
	xor edi,edi

 Block347:
	cmp dword ptr [ebx+0x3604],0
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x20],edi
	lea ecx,[eax+4]
	je Block350

 Block348:
	mov eax,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],eax
	jne Block350

 Block349:
	mov eax,1
	jmp Block351

 Block350:
	xor eax,eax

 Block351:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp dword ptr [ebx+0x3604],0
	je Block359

 Block352:
	mov eax,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],eax
	jne Block359

 Block353:
	test edi,edi
	je Block359

 Block354:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block356

 Block355:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block357

 Block356:
	xor edi,edi

 Block357:
	mov ecx,edi
	call CField::IsUnableToKickParty
	test eax,eax
	jne Block359

 Block358:
	lea edx,[eax+1]
	jmp Block360

 Block359:
	xor edx,edx

 Block360:
	mov eax,dword ptr [esi+0x18]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov edi,dword ptr [_D_G_PSTAGE+4]
	mov eax,dword ptr [esi+0x20]
	lea ebp,[eax+4]
	test edi,edi
	je Block363

 Block361:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block363

 Block362:
	mov ecx,edi
	jmp Block364

 Block363:
	xor ecx,ecx

 Block364:
	mov edi,dword ptr [ebp]
	add edi,0x1C
	call CField::IsUnableToWithdrawParty
	neg eax
	sbb eax,eax
	inc eax
	push eax
	mov eax,dword ptr [edi]
	mov ecx,ebp
	call eax
	mov ebx,dword ptr [esp+0x9C]
	lea edi,[esi+0x28]
	mov ebp,2
	jmp Block366

 Block366:
	cmp dword ptr [esp+0x20],0
	je Block369

 Block367:
	test ebx,ebx
	jne Block369

 Block368:
	lea edx,[ebx+1]
	jmp Block370

 Block369:
	xor edx,edx

 Block370:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	add edi,8
	sub ebp,1
	jne Block366

 Block371:
	mov ecx,dword ptr [esp+0x114]
	cmp dword ptr [ecx+0x3604],ebp
	je Block381

 Block372:
	mov eax,dword ptr [ecx+0x20B4]
	cmp dword ptr [ecx+0x36B6],eax
	jne Block381

 Block373:
	cmp dword ptr [esp+0x20],ebp
	je Block381

 Block374:
	test ebx,ebx
	jne Block381

 Block375:
	cmp dword ptr [esp+0x5C],ebx
	jne Block381

 Block376:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block378

 Block377:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block379

 Block378:
	xor edi,edi

 Block379:
	test dword ptr [edi+0x178],0x800
	jne Block381

 Block380:
	mov eax,1
	jmp Block382

 Block381:
	xor eax,eax

 Block382:
	mov ecx,dword ptr [esi+0x38]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov esi,dword ptr [esi+0x40]
	push 1

 Block383:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	call eax
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x12C],8
	test eax,eax
	je Block385

 Block384:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block385:
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x12C],7
	test eax,eax
	je Block387

 Block386:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block387:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x130],6
	call edx
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x12C],5
	test eax,eax
	je Block389

 Block388:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block389:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x12C],1
	test eax,eax
	je Block391

 Block390:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block391:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x12C],0
	test eax,eax
	je Block393

 Block392:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block393:
	mov eax,dword ptr [esp+0x134]
	mov dword ptr [esp+0x12C],0xFFFFFFFF
	test eax,eax
	je Block395

 Block394:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block395:
	mov ecx,dword ptr [esp+0x124]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x11C
	ret 4
}
}
// CWndAllianceGrade::OnChangeGradeName
_SUB_EXCEPTION_HANDLER(4CF0B0)
__SUB_CLASS_THIS0(004CF0B0, __thiscall, 40690,  CWndAllianceGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CF0B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x20],ecx
	call CWvsContext::AmIAllianceMaster
	test eax,eax
	je Block53

 Block1:
	mov ebp,dword ptr [edi+0x90]
	xor ebx,ebx
	cmp ebp,ebx
	je Block53

 Block2:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x34],ebx
	cmp eax,ebx
	je Block10

 Block3:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebx
	je Block10

 Block4:
	add eax,8
	cmp eax,ebx
	je Block10

 Block5:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block7

 Block6:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	push ebx
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xD04
	push ecx
	mov dword ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebx
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	cmp ebp,4
	je Block11

 Block8:
	cmp ebp,5
	je Block11

 Block9:
	mov eax,4
	jmp Block12

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x28],esi
	jmp Block7

 Block11:
	xor eax,eax

 Block12:
	push ebx
	push ebx
	push 0xA
	push eax
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov dword ptr [esp+0x14],ebx
	mov bl,2
	mov ecx,esi
	mov byte ptr [esp+0x34],bl
	call CDialog::DoModal
	cmp eax,1
	jne Block49

 Block13:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp ebp,4
	je Block21

 Block16:
	cmp ebp,5
	je Block21

 Block17:
	lea eax,[esp+0x14]
	push 1
	push eax
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block42

 Block18:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x348
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block21:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block28

 Block22:
	cmp byte ptr [edi],0
	je Block28

 Block23:
	lea edx,[esp+0x14]
	push 1
	push edx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block27

 Block24:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x348
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block27:
	mov edi,dword ptr [esp+0x14]

 Block28:
	cmp ebp,4
	jne Block35

 Block29:
	test edi,edi
	je Block31

 Block30:
	cmp byte ptr [edi],0
	jne Block35

 Block31:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xBC
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block35

 Block32:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xD05
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block35:
	test edi,edi
	je Block37

 Block36:
	cmp byte ptr [edi],0
	jne Block41

 Block37:
	mov ecx,dword ptr [esp+0x20]
	push ebp
	call CWvsContext::IsAllianceMemberExist
	test eax,eax
	je Block41

 Block38:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x117D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block41:
	mov edi,dword ptr [esp+0x18]

 Block42:
	mov ecx,dword ptr [edi+0x90]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[edi+ecx*4+0xA8]
	call ZXString<char>::op_assign
	cmp ebp,5
	jne Block48

 Block43:
	add edi,0xB8
	mov ecx,edi
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block47

 Block44:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xBC
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block47

 Block45:
	lea edx,[esp+0x1C]
	push 0xCE2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov edi,dword ptr [esp+0x18]

 Block48:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block53

 Block52:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_
_SUB_EXCEPTION_HANDLER(4C1850)
__SUB(004C1850, __cdecl, 83716,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::JobAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::JobAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::JobAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
__SUB(004D87C0, __cdecl, 83739,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::NameDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::NameDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CUIPartyHP::IsKindOf
__SUB_CLASS_THIS(004D6300, __thiscall, 41037,  CUIPartyHP, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIPartyHP::ms_RTTI_CUIPartyHP
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_
_SUB_EXCEPTION_HANDLER(4C0DB0)
__SUB(004C0DB0, __cdecl, 83700,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::JobAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0DB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::JobAscComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::JobAscComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CTabGuild::CTabGuild
_SUB_EXCEPTION_HANDLER(4D7E50)
__SUB_CLASS_THIS(004D7E50, __thiscall, 40373,  CTabGuild, void, CUIUserList*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D7E50
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0xD
	push 8
	lea eax,[esi+4]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset CTabGuild::`vftable'
	call __eh_vector_ctor_iterator
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x6C],edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x70],ecx
	mov dword ptr [esi+0x74],edi
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x78]
	push edx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x8C]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	push offset CTabGuild::SectionData::~SectionData
	push offset CTabGuild::SectionData::_ctor_default
	push 2
	push 0x7C
	lea ecx,[esi+0xAC]
	push ecx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CWndGuildGrade::OnButtonClicked
__SUB_CLASS_THIS(004D54E0, __thiscall, 40663,  CWndGuildGrade, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x85C
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	call CWndGuildGrade::OnSaveGradeName
	ret 4

 Block3:
	call CWndGuildGrade::OnChangeGradeName

 Block4:
	ret 4
}
}
// CTabFriend::OnGroupAdd
_SUB_EXCEPTION_HANDLER(4D4F20)
__SUB_CLASS_THIS(004D4F20, __thiscall, 40051,  CTabFriend, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D4F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	xor ebx,ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x14],ebx
	mov byte ptr [esp+0x48],1
	mov dword ptr [esp+0x18],ebx
	xor ebp,ebp

 Block1:
	mov eax,dword ptr [edi+0xA8]
	mov dword ptr [esp+0x20],ebp
	cmp eax,ebx
	je Block11

 Block2:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [eax-4]
	jae Block11

 Block3:
	mov edx,eax
	lea ebp,[edx+ebp+0x1C]
	mov ecx,ebp
	mov dword ptr [esp+0x1C],ebx
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block10

 Block4:
	mov eax,dword ptr [ebp]
	lea esi,[ebx+eax]
	lea ecx,[esi+0x2C]
	push ecx
	lea ecx,[esp+0x54]
	call ZXString<char>::op_eq_0
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	add esi,0x2C
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp]
	push ecx
	add eax,ebx
	mov ecx,esp
	add eax,4
	mov dword ptr [esp+0x3C],esp
	push eax
	mov byte ptr [esp+0x58],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x54],1
	call CUIFriendGroup::Friend::_ctor_1
	mov esi,eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x4C],3
	call ZArray<CUIFriendGroup::Friend>::InsertBefore
	mov edi,eax
	push esi
	mov ecx,edi
	call ZXString<char>::op_assign
	lea edx,[esi+4]
	push edx
	lea ecx,[edi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [esp+0x1C]
	inc esi
	mov ecx,ebp
	mov dword ptr [esp+0x1C],esi
	add ebx,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp esi,eax
	jb Block4

 Block9:
	mov edi,dword ptr [esp+0x24]
	xor ebx,ebx

 Block10:
	mov ebp,dword ptr [esp+0x20]
	inc dword ptr [esp+0x18]
	add ebp,0x20
	jmp Block1

 Block11:
	mov eax,dword ptr [edi+0x7C]
	mov edx,dword ptr [eax+4]
	mov ebp,dword ptr [eax+0x24]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x2C]
	call eax
	mov edi,dword ptr [edi+0x7C]
	mov edx,dword ptr [edi+4]
	lea ecx,[edi+4]
	mov esi,eax
	mov eax,dword ptr [edx+0x30]
	add esi,ebp
	call eax
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov ebp,eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x30],edi
	mov byte ptr [esp+0x48],5
	cmp edi,ebx
	je Block20

 Block12:
	mov ecx,dword ptr [esp+0x54]
	push ecx
	lea edx,[esp+0x18]
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x5C]
	mov dword ptr [esp+0x60],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push ebp
	push esi
	mov ecx,edi
	call CUIFriendGroup::_ctor_0
	cmp eax,ebx
	je Block20

 Block13:
	add eax,8
	cmp eax,ebx
	je Block20

 Block14:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block16

 Block15:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov ecx,esi
	mov byte ptr [esp+0x48],6
	call CDialog::DoModal
	cmp eax,1
	je Block21

 Block17:
	mov byte ptr [esp+0x48],1
	cmp esi,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CUIFriendGroup>::_ReleaseRaw

 Block19:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x48],0
	call ZArray<CUIFriendGroup::Friend>::RemoveAll
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	jmp Block41

 Block20:
	mov dword ptr [esp+0x28],ebx
	mov esi,ebx
	jmp Block16

 Block21:
	mov ecx,dword ptr [esi+0x94]
	lea edx,[esp+0x54]
	push edx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],6
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block25

 Block24:
	cmp byte ptr [eax],0
	jne Block26

 Block25:
	mov byte ptr [esp+0x48],1
	jmp Block18

 Block26:
	lea edi,[esi+0x98]
	mov ecx,edi
	xor ebx,ebx
	call ZArray<CUIFriendGroup::Friend>::GetCount
	test eax,eax
	jbe Block37

 Block27:
	xor ebp,ebp
	lea ebx,[ebx]

 Block28:
	mov eax,dword ptr [edi]
	add eax,ebp
	cmp dword ptr [eax+8],0
	je Block30

 Block29:
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x58]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi]
	push ecx
	add eax,ebp
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x58],8
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x54],9
	jmp Block32

 Block30:
	lea ecx,[esp+0x50]
	push ecx
	lea ecx,[eax+4]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block36

 Block31:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x189E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [edi]
	push ecx
	add eax,ebp
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x58],0xA
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x54],0xB

 Block32:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block35

 Block34:
	xor esi,esi

 Block35:
	mov ecx,esi
	mov byte ptr [esp+0x54],6
	call CField::SendSetFriendMsg
	mov esi,dword ptr [esp+0x28]

 Block36:
	mov ecx,edi
	inc ebx
	add ebp,0xC
	call ZArray<CUIFriendGroup::Friend>::GetCount
	cmp ebx,eax
	jb Block28

 Block37:
	add esi,8
	lea eax,[esi+4]
	push eax
	mov byte ptr [esp+0x4C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block38:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block40:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x48],0
	call ZArray<CUIFriendGroup::Friend>::RemoveAll
	mov eax,dword ptr [esp+0x50]
	test eax,eax

 Block41:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8
}
}
// CTabGuild::OnPagePrev
__SUB_CLASS_THIS(004B9E80, __thiscall, 40379,  CTabGuild, void, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],eax
	push esi
	sete al
	mov esi,ecx
	imul eax,0x7C
	lea ecx,[eax+esi+0xAC]
	mov eax,dword ptr [ecx+0x18]
	dec eax
	cmp eax,1
	jg Block2

 Block1:
	mov eax,1

 Block2:
	mov dword ptr [ecx+0x18],eax
	mov ecx,dword ptr [esi+0x70]
	call CUIUserList::SetViewItem
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CTabGuild::GetGuildItem
__SUB_CLASS_THIS(004BF190, __thiscall, 40388,  CTabGuild, long, unsigned long, CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	push 0x74
	push 0
	push ebx
	mov esi,ecx
	call _memset
	mov edi,dword ptr [esp+0x1C]
	add esp,0xC
	xor eax,eax
	xor edx,edx
	mov edi,edi

 Block1:
	mov ecx,dword ptr [esi+0x11C]
	test ecx,ecx
	je Block6

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block6

 Block3:
	cmp dword ptr [edx+ecx],edi
	je Block5

 Block4:
	inc eax
	add edx,0x74
	jmp Block1

 Block5:
	imul eax,0x74
	add eax,ecx
	push eax
	mov ecx,ebx
	call CTabGuild::GUILDITEM::operator=
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block6:
	xor eax,eax
	xor edx,edx

 Block7:
	mov ecx,dword ptr [esi+0x198]
	test ecx,ecx
	je Block12

 Block8:
	cmp eax,dword ptr [ecx-4]
	jae Block12

 Block9:
	cmp dword ptr [edx+ecx],edi
	je Block11

 Block10:
	inc eax
	add edx,0x74
	jmp Block7

 Block11:
	imul eax,0x74
	add eax,ecx
	push eax
	mov ecx,ebx
	call CTabGuild::GUILDITEM::operator=
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8

 Block12:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret 8
}
}
// CTabGuild::LevelAscComp::operator()
__SUB_CLASS_THIS(004B73A0, __thiscall, 40423,  CTabGuild::LevelAscComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x10]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
__SUB(004D8B40, __cdecl, 83755,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::NameDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::NameDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_
_SUB_EXCEPTION_HANDLER(4BDD10)
__SUB(004BDD10, __cdecl, 83676,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::GradeAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BDD10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::GradeAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
__SUB(004B8440, __cdecl, 83622,  const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::NameAscComp&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov eax,dword ptr [ebp+4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	lea esi,[ebp+4]
	add edi,4
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	mov ebx,dword ptr [esp+0x1C]
	test eax,eax
	mov eax,dword ptr [ebx+4]
	push eax
	jge Block5

 Block1:
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block7

 Block2:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block4

 Block3:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	ret

 Block4:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block5:
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block4

 Block6:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,ebx
	jl Block8

 Block7:
	mov eax,ebp

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_
__SUB(004D8A60, __cdecl, 83751,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::GradeDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::GradeDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabBlackList::GetToolTipString
__SUB_CLASS_THIS(004BC5C0, __thiscall, 40726,  CTabBlackList, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x14]
	mov eax,dword ptr [ecx+0xB18]
	mov eax,dword ptr [eax+0x38]
	mov edx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0x14]
	sub eax,3
	lea eax,[eax+eax*4]
	lea eax,[esi+eax*4]
	push eax
	add edx,0xFFFFFFF6
	push edx
	add ecx,0xBF4
	push ecx
	mov dword ptr [esp+0x10],0
	call PtInRect
	mov esi,dword ptr [esp+0xC]
	test eax,eax
	je Block2

 Block1:
	push 0x2C3
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC

 Block2:
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC
}
}
// CTabGuildAlliance::Draw
_SUB_EXCEPTION_HANDLER(4CA6F0)
__SUB_CLASS_THIS(004CA6F0, __thiscall, 40521,  CTabGuildAlliance, long, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CA6F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x168
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x34],esi
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ebp+0x54],eax
	mov dword ptr [ebp+0x2C],ebx
	mov dword ptr [ebp-0x16C],ebx
	mov dword ptr [ebp-0x170],ebx
	mov dword ptr [ebp-0x168],ebx
	mov dword ptr [ebp-0x174],ebx
	mov eax,dword ptr [esi+0x8C]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp+0x60],ebx
	mov dword ptr [ebp+0x14],eax
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x8C]
	add eax,0xC80
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x38],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x8C]
	add eax,0xC90
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x24],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x8C]
	add eax,0xC8C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xA
	mov dword ptr [ebp-0x20],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x8C]
	add eax,0xC9C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+0x30],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	push ebx
	or eax,0xFFFFFFFF
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__77
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x10],eax
	mov dword ptr [ebp+0x28],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x44],esp
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov ecx,dword ptr [esi+0x8C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [ebp+0x70]
	cmp eax,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x58],ebx
	call eax
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov edi,dword ptr [ebp+0x58]
	mov ecx,dword ptr [esi+0x8C]
	shr edi,1
	cmp dword ptr [ecx+0xBC8],ebx
	mov dword ptr [ebp+0x58],edi
	push 1
	jle Block23

 Block17:
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [esi+0x90]
	push edx
	push ecx
	mov ebx,esp
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [ebx],0
	test ecx,ecx
	je Block22

 Block18:
	mov eax,ecx
	lea edi,[eax+1]
	jmp Block20

 Block20:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block20

 Block21:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push 0
	push edi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [ebp+0x58]

 Block22:
	push 6
	push edi
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x74]
	test eax,eax
	jmp Block24

 Block23:
	mov ecx,dword ptr [ebp+0x14]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1174
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 6
	push edi
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x74]
	cmp eax,ebx

 Block24:
	mov dword ptr [ebp+0x44],esp
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	call _DrawTextA
	mov ecx,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	cmp dword ptr [ecx+0xBC8],0
	jle Block45

 Block27:
	mov eax,dword ptr [esi+0xBC]
	test eax,eax
	je Block29

 Block28:
	cmp byte ptr [eax],0
	jne Block43

 Block29:
	lea edx,[ebp-0x1C]
	push edx
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea ecx,[ebp]
	mov bl,0xD
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov edx,dword ptr [ebp-0x20]
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1175
	push eax
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	push 0x1D
	mov edi,8
	push edi
	mov byte ptr [ebp-4],0xE
	call IWzCanvas::DrawTextA
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp],di
	jne Block38

 Block36:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x1C],di
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block48

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block42:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block48

 Block43:
	cmp dword ptr [esi+0xC0],0
	sete al
	test al,al
	je Block48

 Block44:
	mov ecx,esi
	call CTabGuildAlliance::MakeNoticeLayer
	jmp Block48

 Block45:
	cmp dword ptr [esi+0xC0],0
	sete al
	test al,al
	sete al
	test al,al
	je Block48

 Block46:
	mov eax,dword ptr [esi+0xC0]
	test eax,eax
	je Block48

 Block47:
	mov dword ptr [esi+0xC0],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block48:
	mov edi,dword ptr [ebp+0x54]
	mov eax,dword ptr [edi+0x37EE]
	xor ecx,ecx
	cmp eax,ecx
	je Block270

 Block49:
	mov dword ptr [ebp+0x60],ecx
	mov dword ptr [ebp+0x58],ecx
	mov ecx,edi
	call CWvsContext::GetAllianceMemberNum
	inc eax
	test eax,eax
	jle Block270

 Block50:
	lea esp,[esp]

 Block51:
	mov edi,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x34]
	mov eax,dword ptr [ebx+0x8C]
	mov ecx,edi
	shl ecx,7
	mov edx,edi
	shl edx,4
	lea esi,[ecx+ebx+0xC8]
	lea ecx,[edx+eax+0xC04]
	mov edx,dword ptr [ebp+0x60]
	push edx
	push 0
	push offset _S_UIUIWINDOW2IMGUS__76
	push ecx
	mov dword ptr [ebp+0x48],ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x5C],esp
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	mov ecx,dword ptr [ebx+0x8C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	xor eax,eax
	mov dword ptr [ebp+0x3C],eax
	mov dword ptr [ebp+0x24],eax
	mov byte ptr [ebp-4],0x11
	cmp edi,eax
	jne Block73

 Block54:
	mov edi,dword ptr [ebp+0x54]
	lea ecx,[ebp-0x6C]
	push ecx
	mov ecx,edi
	call CWvsContext::GetGuildName
	push eax
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	movzx eax,word ptr [edi+0x37E3]
	test ax,ax
	je Block67

 Block57:
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x74]
	push edx
	mov ecx,edi
	call CWvsContext::GetGuildMarkCanvas
	mov eax,dword ptr [eax]
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x24],eax
	call edx

 Block59:
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,3
	mov edx,0xFF
	mov word ptr [ebp-0x54],ax
	mov dword ptr [ebp-0x4C],edx
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	je Block13

 Block62:
	mov ebx,dword ptr [ebp-0x54]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x50]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	mov edx,dword ptr [ebp+0x60]
	push eax
	mov eax,dword ptr [edi+0x80]
	add edx,3
	push edx
	push 3
	push ecx
	mov dword ptr [ebp+0x50],ecx
	call eax
	test eax,eax
	jge Block64

 Block63:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block64:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x11
	jne Block66

 Block65:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	jmp Block89

 Block66:
	lea eax,[ebp-0x54]
	jmp Block92

 Block67:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [ebp-0x64],cx
	mov dword ptr [ebp-0x5C],edx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [ebx+0x88]
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp+0x50],eax
	test ecx,ecx
	je Block13

 Block68:
	mov ebx,dword ptr [ebp-0x64]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x60]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp+0x60]
	push eax
	mov eax,dword ptr [edi+0x80]
	add edx,3
	push edx
	push 3
	push ecx
	mov dword ptr [ebp+0x4C],ecx
	call eax
	test eax,eax
	jge Block70

 Block69:
	mov ecx,dword ptr [ebp+0x4C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block70:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],0x11
	jne Block72

 Block71:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	jmp Block89

 Block72:
	lea eax,[ebp-0x64]
	jmp Block92

 Block73:
	mov ecx,dword ptr [ebp+0x54]
	imul edi,0x4A
	mov edx,dword ptr [ecx+0x384C]
	lea edi,[edx+edi-0x4A]
	lea eax,[edi+4]
	push eax
	lea ecx,[ebp+0x3C]
	call ZXString<char>::op_assign
	movzx eax,word ptr [edi+0x1B]
	test ax,ax
	je Block84

 Block74:
	movzx ecx,byte ptr [edi+0x1A]
	movzx edx,word ptr [edi+0x18]
	push ecx
	movzx ecx,byte ptr [edi+0x1D]
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	push eax
	lea edx,[ebp-0x70]
	push edx
	call CWvsContext::GetGuildMarkCanvas
	mov eax,dword ptr [eax]
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x24],eax
	call edx

 Block76:
	mov eax,dword ptr [ebp-0x70]
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov eax,3
	mov edx,0xFF
	mov word ptr [ebp-0x44],ax
	mov dword ptr [ebp-0x3C],edx
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	je Block13

 Block79:
	mov ebx,dword ptr [ebp-0x44]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x40]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	mov edx,dword ptr [ebp+0x60]
	push eax
	mov eax,dword ptr [edi+0x80]
	add edx,3
	push edx
	push 3
	push ecx
	mov dword ptr [ebp+0x50],ecx
	call eax
	test eax,eax
	jge Block81

 Block80:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block81:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x11
	jne Block83

 Block82:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	jmp Block89

 Block83:
	lea eax,[ebp-0x44]
	jmp Block92

 Block84:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [ebp-0x1C],cx
	mov dword ptr [ebp-0x14],edx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [ebx+0x88]
	mov byte ptr [ebp-4],0x16
	mov dword ptr [ebp+0x50],eax
	test ecx,ecx
	je Block13

 Block85:
	mov ebx,dword ptr [ebp-0x1C]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp+0x60]
	push eax
	mov eax,dword ptr [edi+0x80]
	add edx,3
	push edx
	push 3
	push ecx
	mov dword ptr [ebp+0x4C],ecx
	call eax
	test eax,eax
	jge Block87

 Block86:
	mov ecx,dword ptr [ebp+0x4C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block87:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x11
	jne Block91

 Block88:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx

 Block89:
	test eax,eax
	je Block93

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block91:
	lea eax,[ebp-0x1C]

 Block92:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xB4]
	push ecx
	call edi
	lea edx,[ebp-0xB4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block94:
	lea eax,[ebp-0x134]
	push eax
	mov byte ptr [ebp-4],0x17
	call edi
	lea ecx,[ebp-0x134]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block95:
	mov edi,dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x3C]
	lea edx,[ebp-0xB4]
	push edx
	lea eax,[ebp-0x134]
	push eax
	push edi
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x18
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block13

 Block96:
	mov eax,dword ptr [ebp+0x60]
	add eax,8
	push eax
	push 0x1A
	mov dword ptr [ebp+0x50],eax
	mov byte ptr [ebp-4],0x18
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x134],8
	mov byte ptr [ebp-4],0x17
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x12C]
	xor ecx,ecx
	mov word ptr [ebp-0x134],cx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x134]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp word ptr [ebp-0xB4],8
	mov byte ptr [ebp-4],0x11
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp-0xB4],ax
	mov eax,dword ptr [ebp-0xAC]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp-0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	lea edx,[ebp-0xD4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block105:
	lea ecx,[ebp-0xD4]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x1A
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1B
	test edi,edi
	je Block13

 Block106:
	mov ecx,edi
	mov byte ptr [ebp-4],0x1A
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0xD4],8
	lea edi,[eax+0x1D]
	mov byte ptr [ebp-4],0x11
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp-0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [ebp+0x60]
	add eax,7
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esi+0x70]
	add edi,0xE
	test eax,eax
	je Block112

 Block111:
	mov eax,dword ptr [eax-4]

 Block112:
	mov ecx,dword ptr [esi+0x74]
	push ecx
	push eax
	lea edx,[ebp+0x2C]
	push offset _S_DD
	push edx
	call ZXString<char>::Format
	add esp,0x10
	lea eax,[ebp-0x84]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block113:
	mov ebx,dword ptr [ebp+0x2C]
	lea edx,[ebp-0x84]
	push edx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x1C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x1D
	mov byte ptr [ebp-4],0x1C
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x84],8
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x11
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	lea edx,[ebp-0xF4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xF4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block118:
	lea ecx,[ebp-0xE4]
	push ecx
	mov byte ptr [ebp-4],0x1E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xE4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block119:
	mov edx,dword ptr [ebp+0x38]
	lea eax,[ebp-0xF4]
	push eax
	lea ecx,[ebp-0xE4]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x1F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	je Block13

 Block120:
	mov eax,dword ptr [ebp+0x50]
	push eax
	push edi
	mov byte ptr [ebp-4],0x1F
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xE4],bx
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[ebp-0xE4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0xF4],bx
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov eax,dword ptr [ebp+0x4C]
	mov ebx,dword ptr [ebp+0x60]
	lea ecx,[edi-0x14]
	add ebx,8
	lea edi,[eax+edi+0x14]
	mov eax,dword ptr [ebp+0x48]
	mov dword ptr [eax],ecx
	lea edx,[ebx-5]
	mov dword ptr [eax+4],edx
	add ebx,0x10
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esi+0x70]
	test eax,eax
	je Block133

 Block129:
	cmp dword ptr [eax-4],1
	jbe Block133

 Block130:
	test eax,eax
	je Block132

 Block131:
	mov eax,dword ptr [eax-4]

 Block132:
	lea ecx,[eax-1]
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,2
	inc edx
	mov dword ptr [esi+0x1C],edx
	jmp Block134

 Block133:
	mov dword ptr [esi+0x1C],1

 Block134:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[ebp+0x2C]
	push offset _S_DD
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[ebp-0x94]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block135:
	mov edi,dword ptr [ebp+0x2C]
	lea ecx,[ebp-0x94]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0x21
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x22
	mov ecx,ebx
	mov byte ptr [ebp-4],0x21
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x94],8
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x11
	jne Block138

 Block136:
	mov eax,dword ptr [ebp-0x8C]
	xor edx,edx
	mov word ptr [ebp-0x94],dx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea eax,[ebp-0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block139:
	push 1
	push ebx
	push ecx
	mov ebx,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ebx],0
	test edi,edi
	je Block143

 Block140:
	mov eax,edi
	lea edx,[eax+1]
	lea esp,[esp]

 Block141:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block141

 Block142:
	mov ecx,dword ptr [ebp+0x2C]
	sub eax,edx
	mov edi,eax
	push edi
	push ecx
	push 0
	push edi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block143:
	mov ebx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x78]
	lea eax,[ebx+8]
	push eax
	push 0xC6
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x5C],esp
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block145:
	call _DrawTextA
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0xB9
	sub edx,eax
	lea eax,[ebx+7]
	add ecx,0xE
	add ebx,0x19
	add esp,0x18
	cmp dword ptr [esi],0
	mov dword ptr [esi+0xC],edx
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],ecx
	mov dword ptr [ebp+0x60],ebx
	je Block264

 Block146:
	mov edi,ebx
	add edi,2
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGUS__72
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x5C],esp
	test eax,eax
	je Block148

 Block147:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block148:
	mov ecx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ecx+0x8C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [esi+0x28],0xE4
	lea eax,[edi+1]
	mov dword ptr [esi+0x24],eax
	lea ecx,[edi+0x10]
	mov dword ptr [esi+0x2C],ecx
	mov ebx,1
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esi+0x38],0x3E
	mov dword ptr [esi+0x3C],ecx
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	lea edx,[eax+0x3F]
	mov dword ptr [esi+0x48],edx
	add eax,2
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x4C],ecx
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	mov eax,edx
	lea edx,[eax+0x28]
	add eax,2
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x58],edx
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x5C],ecx
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	mov eax,edx
	lea edx,[eax+0x3F]
	add eax,2
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edx
	mov dword ptr [esi+0x6C],ecx
	mov eax,dword ptr [esi+0x78]
	cmp eax,ebx
	je Block152

 Block149:
	cmp eax,2
	je Block152

 Block150:
	cmp eax,3
	je Block152

 Block151:
	cmp eax,4
	jne Block180

 Block152:
	lea edi,[eax+2]
	shl edi,4
	mov ebx,dword ptr [edi+esi+8]
	sub ebx,dword ptr [edi+esi]
	add edi,esi
	lea edx,[ebp-0xC4]
	push edx
	inc ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block153:
	lea ecx,[ebp-0xA4]
	push ecx
	mov byte ptr [ebp-4],0x23
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xA4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block154:
	push 0
	push 0
	lea eax,[ebp-0xC4]
	push eax
	lea ecx,[ebp-0xA4]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__71
	mov byte ptr [ebp-4],0x24
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	je Block13

 Block155:
	lea edx,[ebp-0x164]
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x4C],0
	test eax,eax
	je Block158

 Block156:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x68]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x68]
	mov dword ptr [ebp+0x4C],ecx
	test eax,eax
	jge Block158

 Block157:
	cmp eax,0x80004002
	jne Block30

 Block158:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0x28
	jne Block161

 Block159:
	mov eax,dword ptr [ebp-0x15C]
	xor edx,edx
	mov word ptr [ebp-0x164],dx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea eax,[ebp-0x164]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block162:
	cmp word ptr [ebp-0xA4],8
	mov byte ptr [ebp-4],0x29
	jne Block165

 Block163:
	mov eax,dword ptr [ebp-0x9C]
	xor ecx,ecx
	mov word ptr [ebp-0xA4],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[ebp-0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x2A
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [ebp-0xC4],ax
	mov eax,dword ptr [ebp-0xBC]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[ebp-0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block171:
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x2B
	test ecx,ecx
	je Block13

 Block172:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	mov edi,dword ptr [ebp-0x34]
	sub esp,0x10
	mov dword ptr [ebp+0x48],eax
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x30]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x2C]
	push 0x10
	push ebx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x28]
	push 0
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x50],edx
	mov eax,edx
	mov edx,dword ptr [ecx]
	push eax
	push 0x10
	push ebx
	push 0xFFFFFFFF
	push edi
	mov edi,dword ptr [ebp+0x48]
	push edi
	push eax
	mov eax,dword ptr [edx+0x84]
	push ecx
	mov dword ptr [ebp+0x40],ecx
	call eax
	test eax,eax
	jge Block174

 Block173:
	mov ecx,dword ptr [ebp+0x40]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block174:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x2A
	jne Block177

 Block175:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block180

 Block179:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block180:
	mov eax,dword ptr [esi+0x18]
	add dword ptr [ebp+0x60],0x12
	lea ebx,[eax+eax*4-5]
	mov ecx,esi
	mov dword ptr [ebp+0x50],ebx
	call CTabGuildAlliance::SectionData::GetLastOfPage
	cmp ebx,eax
	jge Block220

 Block181:
	mov eax,dword ptr [ebp+0x60]
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi
	add eax,0x14
	mov dword ptr [ebp+0x48],eax

 Block182:
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x78]
	push ecx
	push 0
	push offset _S_UIUIWINDOW2IMGUS__70
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x5C],esp
	test eax,eax
	je Block184

 Block183:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block184:
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax+0x8C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esi+0x70]
	add eax,edi
	add eax,8
	xor ebx,ebx
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x70]
	add eax,edi
	add eax,4
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x2C
	mov dword ptr [ebp+0x1C],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x70]
	cmp dword ptr [edi+ecx+0x10],0xFFFFFFFF
	lea ebx,[edi+ecx]
	mov byte ptr [ebp-4],0x2D
	jne Block186

 Block185:
	mov eax,offset _S___16
	jmp Block187

 Block186:
	mov eax,0x20
	call __chkstk
	mov ebx,dword ptr [ebx+0x10]
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,0xC

 Block187:
	mov dword ptr [ebp+0x4C],0
	test eax,eax
	je Block191

 Block188:
	mov ecx,eax
	lea ebx,[ecx+1]
	lea esp,[esp]

 Block189:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block189

 Block190:
	sub ecx,ebx
	mov ebx,ecx
	push ebx
	push eax
	push 0
	push ebx
	lea ecx,[ebp+0x4C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[ebp+0x4C]
	call ZXString<char>::ReleaseBuffer

 Block191:
	mov eax,dword ptr [esi+0x70]
	mov edx,dword ptr [eax+edi+0x14]
	add eax,edi
	mov eax,dword ptr [ebp+0x34]
	lea eax,[eax+edx*4+0x90]
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2E
	mov dword ptr [ebp+0x20],0
	call ZXString<char>::op_assign
	mov ebx,dword ptr [ebp+0x38]
	push 0x3C
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x5C],esp
	push ebx
	mov byte ptr [ebp-4],0x2F
	call edx
	lea eax,[ebp+0x1C]
	push eax
	call format_string_1
	mov ecx,dword ptr [esi+0x70]
	add esp,0xC
	push 0x3C
	mov dword ptr [edi+ecx+0x6C],eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x5C],esp
	push ebx
	call eax
	lea ecx,[ebp+0x18]
	push ecx
	call format_string_1
	mov edx,dword ptr [esi+0x70]
	add esp,0xC
	push 0x3C
	push ecx
	mov dword ptr [edi+edx+0x70],eax
	mov eax,esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x5C],esp
	push ebx
	call ecx
	lea edx,[ebp+0x20]
	push edx
	call format_string_1
	mov ebx,dword ptr [ebp+0x30]
	add esp,0xC
	mov dword ptr [ebp+0x5C],ebx
	test ebx,ebx
	je Block193

 Block192:
	mov eax,ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block193:
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [ecx+0x8C]
	mov eax,dword ptr [esi+0x70]
	mov ecx,dword ptr [edx+0xC5C]
	mov byte ptr [ebp-4],0x30
	cmp ecx,dword ptr [edi+eax]
	jne Block201

 Block194:
	mov eax,dword ptr [ebp+0x78]
	test eax,eax
	je Block13

 Block195:
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF244768
	push 0x14
	push 0xE6
	push ecx
	push 1
	push eax
	mov dword ptr [ebp+0x40],eax
	call edx
	test eax,eax
	jge Block197

 Block196:
	mov ecx,dword ptr [ebp+0x40]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block197:
	mov edx,dword ptr [ebp+0x38]
	cmp dword ptr [ebp+0x30],edx
	je Block200

 Block198:
	mov ebx,edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	mov dword ptr [ebp+0x5C],ebx
	call ecx
	cmp dword ptr [ebp+0x30],0
	je Block200

 Block199:
	mov eax,dword ptr [ebp+0x30]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block200:
	mov ecx,dword ptr [esi+0x70]
	mov edx,dword ptr [edi+ecx+0x14]
	lea eax,[edi+ecx]
	mov eax,dword ptr [eax+0x74]
	mov dword ptr [ebp+0x10],edx
	mov dword ptr [ebp+0x28],eax

 Block201:
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x1C]
	mov dword ptr [ebp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x48]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x30]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x40],esp
	test eax,eax
	je Block203

 Block202:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block203:
	call _DrawTextA
	add esp,0x18
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x18]
	mov dword ptr [ebp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x48]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x40]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x40],esp
	test eax,eax
	je Block205

 Block204:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block205:
	call _DrawTextA
	add esp,0x18
	push 1
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x4C]
	mov dword ptr [ebp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x48]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x58]
	add eax,dword ptr [esi+0x50]
	cdq
	sub eax,edx
	sar eax,1
	inc eax
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x40],esp
	test eax,eax
	je Block207

 Block206:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block207:
	call _DrawTextA
	add esp,0x18
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x20]
	mov dword ptr [ebp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x48]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x60]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x40],esp
	test eax,eax
	je Block209

 Block208:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block209:
	call _DrawTextA
	mov ecx,dword ptr [ebp+0x48]
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [esi+0x70]
	add esp,0x18
	push ecx
	push 0xE6
	push edx
	push 0
	lea ecx,[edi+eax+0x18]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x30]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x2C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [esi+0x48]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x40]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x3C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x50]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x4C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [esi+0x68]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x60]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x5C]
	push ecx
	call SetRect
	mov eax,0x14
	add dword ptr [ebp+0x60],eax
	add dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x2F
	test ebx,ebx
	je Block211

 Block210:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block211:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block213:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block215

 Block214:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block215:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block217:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block219:
	mov ebx,dword ptr [ebp+0x50]
	inc ebx
	mov ecx,esi
	mov dword ptr [ebp+0x50],ebx
	add edi,0x78
	call CTabGuildAlliance::SectionData::GetLastOfPage
	cmp ebx,eax
	jl Block182

 Block220:
	test ebx,ebx
	jne Block236

 Block221:
	mov edi,dword ptr [ebp+0x60]
	push edi
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__70
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x5C],esp
	test eax,eax
	je Block223

 Block222:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block223:
	mov ecx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ecx+0x8C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x124]
	push edx
	call esi
	lea eax,[ebp-0x124]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block224:
	lea ecx,[ebp-0x104]
	push ecx
	mov byte ptr [ebp-4],0x31
	call esi
	lea edx,[ebp-0x104]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block225:
	mov edx,dword ptr [ebp+0x14]
	lea eax,[ebp-0x124]
	push eax
	lea ecx,[ebp-0x104]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1AC4
	push eax
	mov byte ptr [ebp-4],0x32
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x33
	test ecx,ecx
	je Block13

 Block226:
	lea edx,[edi+5]
	push edx
	push 0xA
	mov byte ptr [ebp-4],0x32
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x104],8
	mov byte ptr [ebp-4],0x31
	jne Block233

 Block227:
	xor eax,eax
	mov word ptr [ebp-0x104],ax
	mov eax,dword ptr [ebp-0xFC]
	test eax,eax
	je Block229

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block229:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block230:
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x11
	jne Block234

 Block231:
	mov eax,dword ptr [ebp-0x11C]
	xor edx,edx
	mov word ptr [ebp-0x124],dx
	test eax,eax
	je Block235

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	add edi,0x14
	mov dword ptr [ebp+0x60],edi
	jmp Block237

 Block233:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x104]
	push ecx
	call ebx
	jmp Block230

 Block234:
	lea eax,[ebp-0x124]
	push eax
	call ebx

 Block235:
	add edi,0x14
	mov dword ptr [ebp+0x60],edi
	jmp Block237

 Block236:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,dword ptr [ZImports::_VariantInit]

 Block237:
	lea ecx,[ebp-0x114]
	push ecx
	mov edi,8
	call esi
	lea edx,[ebp-0x114]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block238:
	lea eax,[ebp-0x144]
	push eax
	mov byte ptr [ebp-4],0x34
	call esi
	lea ecx,[ebp-0x144]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block30

 Block239:
	push 0
	push 0
	lea edx,[ebp-0x114]
	push edx
	lea eax,[ebp-0x144]
	push eax
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__59
	mov byte ptr [ebp-4],0x35
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x36
	je Block13

 Block240:
	lea ecx,[ebp-0x154]
	push ecx
	mov byte ptr [ebp-4],0x35
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x37
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x50],0
	test eax,eax
	je Block243

 Block241:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x44]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x50],ecx
	test eax,eax
	jge Block243

 Block242:
	cmp eax,0x80004002
	jne Block30

 Block243:
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp-0x154],di
	jne Block246

 Block244:
	mov eax,dword ptr [ebp-0x14C]
	xor edx,edx
	mov word ptr [ebp-0x154],dx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea eax,[ebp-0x154]
	push eax
	call ebx

 Block247:
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x144],di
	jne Block250

 Block248:
	mov eax,dword ptr [ebp-0x13C]
	xor ecx,ecx
	mov word ptr [ebp-0x144],cx
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea edx,[ebp-0x144]
	push edx
	call ebx

 Block251:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x114],di
	jne Block254

 Block252:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea ecx,[ebp-0x114]
	push ecx
	call ebx

 Block255:
	mov edx,3
	mov word ptr [ebp],dx
	mov edx,0xFF
	mov dword ptr [ebp+8],edx
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	je Block13

 Block256:
	mov edi,dword ptr [ebp]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+4]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x60]
	push edi
	dec eax
	push eax
	push 0
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block258

 Block257:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block258:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x3B
	jne Block261

 Block259:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block262:
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block264

 Block263:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block264:
	mov eax,dword ptr [ebp+0x24]
	add dword ptr [ebp+0x60],0xF
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block266

 Block265:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block266:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block268

 Block267:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block268:
	mov esi,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x54]
	inc esi
	mov dword ptr [ebp+0x58],esi
	call CWvsContext::GetAllianceMemberNum
	inc eax
	cmp esi,eax
	jl Block51

 Block269:
	mov esi,dword ptr [ebp+0x34]
	mov edi,dword ptr [ebp+0x54]

 Block270:
	cmp dword ptr [edi+0x37EE],0
	je Block344

 Block271:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	mov ecx,dword ptr [esi+0x8C]
	mov ebx,dword ptr [ebp+0x54]
	xor edx,edx
	cmp dword ptr [ecx+0xC5C],eax
	mov eax,dword ptr [ebx+0x20B4]
	setne dl
	add ebx,0x37C8
	mov ecx,ebx
	mov dword ptr [ebp+0x44],eax
	xor edi,edi
	mov dword ptr [ebp+0x3C],edx
	call GUILDDATA::GetCount
	test eax,eax
	jle Block284

 Block272:
	mov ecx,dword ptr [ebx+0xC]
	mov dword ptr [ebp+0x58],ecx

 Block273:
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ebp+0x58]
	cmp dword ptr [eax],edx
	je Block276

 Block274:
	add dword ptr [ebp+0x58],4
	mov ecx,ebx
	inc edi
	call GUILDDATA::GetCount
	cmp edi,eax
	jl Block273

 Block275:
	jmp Block284

 Block276:
	test edi,edi
	jl Block284

 Block277:
	mov eax,dword ptr [ebp+0x54]
	imul edi,0x25
	mov ecx,dword ptr [eax+0x37D8]
	mov edx,1
	cmp dword ptr [edi+ecx+0x21],edx
	jne Block284

 Block278:
	mov ecx,dword ptr [eax+0x384C]
	test ecx,ecx
	je Block280

 Block279:
	mov ecx,dword ptr [ecx-4]

 Block280:
	cmp dword ptr [eax+0x37EE],0
	jne Block282

 Block281:
	xor eax,eax
	jmp Block283

 Block282:
	mov eax,dword ptr [eax+0x3844]

 Block283:
	inc ecx
	cmp ecx,eax
	jl Block285

 Block284:
	xor edx,edx

 Block285:
	mov eax,dword ptr [esi+8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi+0x10]
	add eax,4
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x20B4]
	mov dword ptr [ebp+0x44],ecx
	mov ecx,ebx
	xor edi,edi
	call GUILDDATA::GetCount
	test eax,eax
	jle Block289

 Block286:
	mov edx,dword ptr [ebx+0xC]
	mov dword ptr [ebp+0x58],edx

 Block287:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ebp+0x58]
	cmp dword ptr [ecx],eax
	je Block294

 Block288:
	add dword ptr [ebp+0x58],4
	mov ecx,ebx
	inc edi
	call GUILDDATA::GetCount
	cmp edi,eax
	jl Block287

 Block289:
	or edi,0xFFFFFFFF

 Block290:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	xor eax,eax
	cmp edi,2
	sete al
	push eax
	call edx
	mov ecx,dword ptr [ebp+0x54]
	call CWvsContext::AmIAllianceMaster
	test eax,eax
	je Block296

 Block291:
	cmp dword ptr [ebp+0x10],1
	jne Block296

 Block292:
	cmp dword ptr [ebp+0x3C],0
	je Block296

 Block293:
	push 1
	jmp Block297

 Block294:
	test edi,edi
	jl Block289

 Block295:
	mov edx,dword ptr [ebp+0x54]
	imul edi,0x25
	mov eax,dword ptr [edx+0x37D8]
	mov edi,dword ptr [eax+edi+0x21]
	jmp Block290

 Block296:
	push 0

 Block297:
	mov eax,dword ptr [esi+0x18]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov edi,dword ptr [ebp+0x28]
	test edi,edi
	jle Block310

 Block298:
	mov ecx,dword ptr [ebp+0x54]
	call CWvsContext::AmIAllianceMaster
	test eax,eax
	je Block306

 Block299:
	cmp edi,1
	je Block310

 Block300:
	cmp edi,2
	je Block310

 Block301:
	mov eax,dword ptr [esi+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	cmp edi,3
	jne Block304

 Block302:
	push 0
	call edx

 Block303:
	mov eax,dword ptr [esi+0x28]
	mov edi,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x54]
	lea ebx,[eax+4]
	add edi,0x1C
	call CWvsContext::GetAllianceMaxGradeNum
	mov edx,dword ptr [edi]
	xor ecx,ecx
	cmp eax,3
	setne cl
	push ecx
	mov ecx,ebx
	jmp Block313

 Block304:
	push 1
	call edx
	mov eax,dword ptr [esi+0x28]
	cmp edi,5
	je Block312

 Block305:
	mov edi,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x54]
	lea ebx,[eax+4]
	add edi,0x1C
	call CWvsContext::GetAllianceMaxGradeNum
	mov edx,dword ptr [edi]
	xor ecx,ecx
	cmp eax,dword ptr [ebp+0x28]
	setne cl
	push ecx
	mov ecx,ebx
	jmp Block313

 Block306:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x20B4]
	mov dword ptr [ebp+0x44],ecx
	mov ecx,ebx
	xor edi,edi
	call GUILDDATA::GetCount
	test eax,eax
	jle Block310

 Block307:
	mov edx,dword ptr [ebx+0xC]
	mov dword ptr [ebp+0x58],edx

 Block308:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ebp+0x58]
	cmp dword ptr [ecx],eax
	je Block317

 Block309:
	add dword ptr [ebp+0x58],4
	mov ecx,ebx
	inc edi
	call GUILDDATA::GetCount
	cmp edi,eax
	jl Block308

 Block310:
	mov eax,dword ptr [esi+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0

 Block311:
	call edx
	mov eax,dword ptr [esi+0x28]

 Block312:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0

 Block313:
	call edx
	mov ebx,dword ptr [ebp+0x54]
	mov ecx,ebx
	call CWvsContext::AmIAllianceMaster
	mov edi,dword ptr [ebp+0x3C]
	test eax,eax
	je Block325

 Block314:
	cmp dword ptr [ebp+0x10],1
	jne Block325

 Block315:
	test edi,edi
	je Block325

 Block316:
	push 1
	jmp Block326

 Block317:
	test edi,edi
	jl Block310

 Block318:
	mov edx,dword ptr [ebp+0x54]
	imul edi,0x25
	mov eax,dword ptr [edx+0x37D8]
	cmp dword ptr [eax+edi+0x21],2
	jne Block310

 Block319:
	mov eax,dword ptr [ebp+0x28]
	cmp eax,1
	je Block310

 Block320:
	cmp eax,2
	je Block310

 Block321:
	cmp eax,3
	jne Block323

 Block322:
	mov eax,dword ptr [esi+0x20]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	jmp Block303

 Block323:
	cmp eax,5
	mov eax,dword ptr [esi+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	je Block311

 Block324:
	call edx
	mov eax,dword ptr [esi+0x28]
	mov edi,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x54]
	lea ebx,[eax+4]
	add edi,0x1C
	call CWvsContext::GetAllianceMaxGradeNum
	mov edx,dword ptr [edi]
	xor ecx,ecx
	cmp eax,dword ptr [ebp+0x28]
	setne cl
	push ecx
	mov ecx,ebx
	jmp Block313

 Block325:
	push 0

 Block326:
	mov eax,dword ptr [esi+0x30]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	test edi,edi
	je Block329

 Block327:
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0xC5C],0
	je Block329

 Block328:
	mov edx,1
	jmp Block330

 Block329:
	xor edx,edx

 Block330:
	mov eax,dword ptr [esi+0x38]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi+0x40]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	test edi,edi
	je Block333

 Block331:
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0xC5C],0
	je Block333

 Block332:
	mov edx,1
	jmp Block334

 Block333:
	xor edx,edx

 Block334:
	mov eax,dword ptr [esi+0x48]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov ecx,ebx
	call CWvsContext::AmIAllianceMaster
	test eax,eax
	jne Block337

 Block335:
	mov ecx,ebx
	call CWvsContext::AmIAllianceSubMaster
	test eax,eax
	jne Block337

 Block336:
	xor edx,edx
	jmp Block338

 Block337:
	mov edx,1

 Block338:
	mov eax,dword ptr [esi+0x50]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	test edi,edi
	je Block343

 Block339:
	cmp dword ptr [ebx+0x3604],0
	je Block343

 Block340:
	mov eax,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],eax
	jne Block343

 Block341:
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0xC5C],0
	je Block343

 Block342:
	mov esi,dword ptr [esi+0x58]
	mov edx,dword ptr [esi+4]
	lea ecx,[esi+4]
	mov eax,1
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	jmp Block346

 Block343:
	mov esi,dword ptr [esi+0x58]
	mov edx,dword ptr [esi+4]
	xor eax,eax
	lea ecx,[esi+4]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	jmp Block346

 Block344:
	add esi,8
	mov ebx,0xB
	lea ecx,[ecx]

 Block345:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	add esi,8
	sub ebx,1
	jne Block345

 Block346:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block348

 Block347:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block348:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block350

 Block349:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block350:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block352

 Block351:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block352:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block354

 Block353:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block354:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block356

 Block355:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block356:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block358

 Block357:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block358:
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block360

 Block359:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block360:
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block362

 Block361:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block362:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block364

 Block363:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block364:
	mov eax,dword ptr [ebp+0x60]
	lea esp,[ebp-0x184]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CTabGuildAlliance::Update
_SUB_EXCEPTION_HANDLER(4CC3E0)
__SUB_CLASS_THIS0(004CC3E0, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CC3E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0xC0],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block88

 Block1:
	mov eax,dword ptr [edi+0xBC]
	cmp eax,ebx
	je Block88

 Block2:
	cmp dword ptr [eax-4],ebx
	je Block88

 Block3:
	mov eax,3
	mov word ptr [ebp-0x20],ax
	mov dword ptr [ebp-0x18],0xFFFFFFFE
	mov ecx,dword ptr [edi+0xC0]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	cmp word ptr [ebp-0x20],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov dword ptr [ebp-0x28],ebx
	lea edx,[ebp-0x24]
	push 0x3D0
	push edx
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp-0x28]
	push ecx
	push eax
	mov byte ptr [ebp-4],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x38]
	push edx
	call esi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],3
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[ebp-0x38]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push 0xF
	push 0xD7
	call IWzCanvas::Create
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],1
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	lea ecx,[ebp-0x20]
	push ecx
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov eax,dword ptr [edi+0xBC]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,6
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0xC8C]
	mov esi,esp
	lea ecx,[ebp-0x20]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	push eax
	mov eax,dword ptr [edi+0xBC]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [edi+0xC4]
	push 0
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],bx
	jne Block38

 Block32:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block34:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x20],bx
	jne Block39

 Block36:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block40

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block38:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x38]
	push ecx
	call esi
	jmp Block35

 Block39:
	lea eax,[ebp-0x20]
	push eax
	call esi

 Block40:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	call ebx
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],8
	call ebx
	lea ecx,[ebp-0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[ebp-0x68]
	push edx
	mov byte ptr [ebp-4],9
	call ebx
	lea eax,[ebp-0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],0xB
	call ebx
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [edi+0xC0]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x58]
	push eax
	lea edx,[ebp-0x68]
	push edx
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp-0x28]
	lea edx,[ebp-0x38]
	push edx
	push eax
	lea edx,[ebp-0x78]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x78],8
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x78]
	push ecx
	call esi

 Block56:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xB
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x38]
	push eax
	call esi

 Block60:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xA
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[ebp-0x20]
	push edx
	call esi

 Block64:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],9
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp-0x68]
	push ecx
	call esi

 Block68:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],8
	jne Block71

 Block69:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[ebp-0x58]
	push eax
	call esi

 Block72:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],1
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block76:
	lea eax,[ebp-0x48]
	push eax
	call ebx
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov eax,dword ptr [edi+0xBC]
	lea edx,[ebp-0x48]
	push edx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0xD
	or esi,0xFFFFFFFF
	add dword ptr [edi+0xC4],esi
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0x8C]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [edi+0xC4]
	add ecx,eax
	sets bl
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],1
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	test bl,bl
	je Block86

 Block85:
	mov dword ptr [edi+0xC4],0x10E

 Block86:
	mov eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	lea esp,[ebp-0x88]
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
	ret
}
}
// CUIUserList::OnChildNotify
__SUB_CLASS_THIS(004DC6E0, __thiscall, 40163,  CUIUserList, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov esi,ecx
	cmp ebp,0x7D1
	jne Block3

 Block1:
	cmp ebx,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x1C]
	push eax
	call CUIUserList::OnTabChanged
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block3:
	cmp dword ptr [esi+0xB1C],2
	mov edi,dword ptr [esp+0x1C]
	jne Block5

 Block4:
	mov ecx,dword ptr [esi+0xC7C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x10]
	push edi
	push ebx
	push ebp
	call eax

 Block5:
	cmp dword ptr [esi+0xB1C],1
	jne Block12

 Block6:
	cmp ebp,0x89F
	jne Block12

 Block7:
	cmp ebx,0x65
	jne Block11

 Block8:
	cmp edi,1
	jne Block10

 Block9:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1656
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,esi
	call CUIUserList::SetTooltipStr
	jmp Block16

 Block10:
	test edi,edi
	jne Block16

 Block11:
	lea ecx,[esi+0x88]
	call CUIToolTip::ClearToolTip
	jmp Block16

 Block12:
	cmp ebp,0x7D0
	jne Block16

 Block13:
	cmp ebx,0x12C
	jb Block16

 Block14:
	cmp ebx,0x130
	ja Block16

 Block15:
	push 0xFFFFFFFF
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	push 0xFFFFFFFF
	mov ecx,esi
	call CUIUserList::DestroyAllianceButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block16:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	cmp ebx,0x64
	jne Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push ebp
	mov ecx,esi
	call eax

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CWndAllianceGrade::OnSetFocus
__SUB_CLASS_THIS(004CE520, __thiscall, 40695,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
_SUB_EXCEPTION_HANDLER(4BDF50)
__SUB(004BDF50, __cdecl, 83680,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::NameAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BDF50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi-0x78]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block7

 Block6:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+edi]
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// CTabFriend::GetFriendItem
__SUB_CLASS_THIS(004BE9B0, __thiscall, 40056,  CTabFriend, long, unsigned long, CTabFriend::FRIENDITEM&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	push 0x30
	xor ebp,ebp
	mov esi,ecx
	push ebp
	push edi
	mov dword ptr [esp+0x1C],esi
	call _memset
	add esp,0xC
	mov dword ptr [esp+0x1C],ebp

 Block1:
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	je Block9

 Block2:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,dword ptr [eax-4]
	jae Block9

 Block3:
	mov edx,eax
	lea ebx,[edx+ebp+0x1C]
	mov ecx,ebx
	xor esi,esi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block7

 Block4:
	mov ecx,dword ptr [ebx]

 Block5:
	mov edx,dword ptr [esp+0x18]
	cmp dword ptr [ecx],edx
	je Block8

 Block6:
	inc esi
	add ecx,0x30
	cmp esi,eax
	jb Block5

 Block7:
	inc dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x10]
	add ebp,0x20
	jmp Block1

 Block8:
	lea esi,[esi+esi*2]
	shl esi,4
	add esi,dword ptr [ebx]
	mov eax,dword ptr [esi]
	lea ecx,[esi+4]
	push ecx
	lea ecx,[edi+4]
	mov dword ptr [edi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+8]
	mov dword ptr [edi+8],edx
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [edi+0xC],eax
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [edi+0x10],ecx
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [edi+0x14],edx
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [edi+0x18],eax
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [edi+0x1C],ecx
	mov edx,dword ptr [esi+0x20]
	mov dword ptr [edi+0x20],edx
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [edi+0x24],eax
	mov cl,byte ptr [esi+0x28]
	mov byte ptr [edi+0x28],cl
	add esi,0x2C
	push esi
	lea ecx,[edi+0x2C]
	call ZXString<char>::op_assign
	push edi
	call get_channel
	add esp,4
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block9:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	pop ecx
	ret 8
}
}
// CTabGuildAlliance::GUILDITEM::operator=
__SUB_CLASS_THIS(004BBD70, __thiscall, 40556,  CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	lea edx,[edi+8]
	push edx
	lea ecx,[esi+8]
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],eax
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],ecx
	mov edx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	lea ecx,[edi+0x28]
	push ecx
	lea ecx,[esi+0x28]
	mov dword ptr [esi+0x24],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],ecx
	mov edx,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],edx
	mov eax,dword ptr [edi+0x54]
	mov dword ptr [esi+0x54],eax
	mov ecx,dword ptr [edi+0x58]
	mov dword ptr [esi+0x58],ecx
	mov edx,dword ptr [edi+0x5C]
	mov dword ptr [esi+0x5C],edx
	mov eax,dword ptr [edi+0x60]
	mov dword ptr [esi+0x60],eax
	mov ecx,dword ptr [edi+0x64]
	mov dword ptr [esi+0x64],ecx
	mov edx,dword ptr [edi+0x68]
	mov dword ptr [esi+0x68],edx
	mov eax,dword ptr [edi+0x6C]
	mov dword ptr [esi+0x6C],eax
	mov ecx,dword ptr [edi+0x70]
	mov dword ptr [esi+0x70],ecx
	mov edx,dword ptr [edi+0x74]
	pop edi
	mov dword ptr [esi+0x74],edx
	mov eax,esi
	pop esi
	ret 4
}
}
// CUIPartyHP::CUIPartyHP
_SUB_EXCEPTION_HANDLER(4D5920)
__SUB_CLASS_THIS0(004D5920, __thiscall, 41031,  CUIPartyHP, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D5920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push edi
	push 0xE
	call CUIWnd::_ctor_0
	lea ebp,[esi+0xB08]
	mov dword ptr [esp+0x68],edi
	cmp ebp,edi
	je Block2

 Block1:
	lea eax,[ebp-0xB08]
	mov dword ptr [TSingleton<CUIPartyHP>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIPartyHP>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIPartyHP::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPartyHP::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPartyHP::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp],0
	lea ebx,[esi+0xB0C]
	mov dword ptr [ebx],0
	mov dword ptr [esi+0xB10],0
	mov dword ptr [esi+0xB14],0
	mov dword ptr [esi+0xB18],0
	mov dword ptr [esi+0xB1C],0
	mov dword ptr [esi+0xB20],0
	mov dword ptr [esi+0xB24],0
	mov dword ptr [esi+0xB28],0
	mov dword ptr [esi+0xB2C],0
	mov dword ptr [esi+0xB30],0
	mov dword ptr [esi+0xB34],0
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x6C],0xD
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x6C],0xE
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push 0
	push 0
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x86F
	push ecx
	mov byte ptr [esp+0x84],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x7C],0x10
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x7C],0xF
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	cmp word ptr [esp+0x40],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x68],0x13
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block16:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],0x14
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block20:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],0x15
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block24:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],0x16
	test edi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x15
	jne Block36

 Block30:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block33:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x18
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block37

 Block34:
	cmp eax,0x80004002
	je Block37

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x50]
	push eax
	call ebp
	jmp Block33

 Block37:
	mov ebx,8
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x50]
	push ecx
	call ebp

 Block41:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x1A
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB10]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x50]
	push edx
	call ebp

 Block48:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x1C
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB14]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block55:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x1E
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x50]
	push ecx
	call ebp

 Block62:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x20
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x50]
	push edx
	call ebp

 Block69:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x22
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB20]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block76:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x24
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB24]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x50]
	push ecx
	call ebp

 Block83:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AD4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x26
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x50]
	push edx
	call ebp

 Block90:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1157
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x28
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block97:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1158
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],0x2A
	test edi,edi
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[esp+0x5C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block102

 Block100:
	cmp eax,0x80004002
	je Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x50]
	push ecx
	call ebp

 Block106:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1159
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x2C
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB30]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block109

 Block107:
	cmp eax,0x80004002
	je Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea edx,[esp+0x50]
	push edx
	call ebp

 Block113:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x7D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x2E
	mov ecx,edi
	mov byte ptr [esp+0x78],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xB34]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block116

 Block114:
	cmp eax,0x80004002
	je Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov byte ptr [esp+0x68],0x15
	cmp word ptr [esp+0x50],bx
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block120:
	mov ecx,esi
	call CUIPartyHP::Create
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x6C],0xD
	call edx
	mov eax,esi
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_
__SUB(004D8C90, __cdecl, 83761,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::LevelAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::LevelAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CUIUserList::CreateGuildButton
_SUB_EXCEPTION_HANDLER(4C0180)
__SUB_CLASS_THIS(004C0180, __thiscall, 40173,  CUIUserList, int32_t, int32_t, const CTabGuild::SectionData&, const tagRECT&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x40]
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [edi+4]
	mov edx,dword ptr [esp+0x44]
	push eax
	push ecx
	push edx
	call PtInRect
	test eax,eax
	je Block23

 Block1:
	mov ebx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [edi+8]
	xor ecx,ecx
	test ebx,ebx
	sete cl
	add eax,0xA
	mov dword ptr [esp+0x14],eax
	mov eax,5
	sub eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x1C],1
	lea ebp,[eax+eax*4]
	add ebp,ebp
	add ebp,ebp
	xor eax,eax
	add edx,ebp
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x34],eax
	cmp dword ptr [esi+ecx*8+0xB24],eax
	jne Block8

 Block2:
	cmp dword ptr [edi],eax
	mov eax,offset _S_UIUIWINDOW2IMGUS__51
	jne Block4

 Block3:
	mov eax,offset _S_UIUIWINDOW2IMGUS__50

 Block4:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esi+eax*8+0xB20]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 0
	push eax
	mov eax,dword ptr [esp+0x20]
	add eax,0x5F
	push eax
	mov eax,ebx
	neg eax
	sbb eax,eax
	add eax,0x817
	push eax
	push esi
	call edx
	xor eax,eax

 Block8:
	mov ecx,dword ptr [edi+0x10]
	xor edx,edx
	cmp ebx,eax
	mov eax,dword ptr [edi+0xC]
	sete dl
	add ecx,ebp
	add eax,0xA
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ecx
	lea edx,[edx+edx+2]
	cmp dword ptr [esi+edx*8+0xB24],0
	lea ebp,[esi+edx*8+0xB24]
	mov dword ptr [esp+0x40],edx
	jne Block14

 Block9:
	push offset _S_UIUIWINDOW2IMGUS__49
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov byte ptr [esp+0x34],2
	test eax,eax
	je Block11

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esi+eax*8+0xB20]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 0
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	xor eax,eax
	test ebx,ebx
	sete al
	lea eax,[eax+eax+0x818]
	push eax
	push esi
	call edx
	cmp dword ptr [edi+0x18],1
	jne Block14

 Block13:
	mov ebp,dword ptr [ebp]
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[ebp+4]
	push 0
	call edx

 Block14:
	mov eax,dword ptr [esp+0x40]
	cmp dword ptr [esi+eax*8+0xB2C],0
	lea ebp,[esi+eax*8+0xB2C]
	jne Block20

 Block15:
	push offset _S_UIUIWINDOW2IMGUS__48
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov byte ptr [esp+0x34],3
	test eax,eax
	je Block17

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esp+0x40]
	push eax
	lea ecx,[esi+ecx*8+0xB28]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 0
	push eax
	mov eax,dword ptr [edi+0x14]
	add eax,dword ptr [esp+0x20]
	push eax
	xor eax,eax
	test ebx,ebx
	sete al
	lea eax,[eax+eax+0x819]
	push eax
	push esi
	call edx
	mov eax,dword ptr [edi+0x18]
	cmp eax,dword ptr [edi+0x1C]
	jne Block20

 Block19:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block20:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,1

 Block23:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x10
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
__SUB(004D97F0, __cdecl, 83785,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::NameAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
__SUB(004B85E0, __cdecl, 83627,  const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::NameDescComp&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov eax,dword ptr [ebp+4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	lea esi,[ebp+4]
	add edi,4
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	mov ebx,dword ptr [esp+0x1C]
	test eax,eax
	mov eax,dword ptr [ebx+4]
	push eax
	jl Block5

 Block1:
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block7

 Block2:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block4

 Block3:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	ret

 Block4:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block5:
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block4

 Block6:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,ebx
	jge Block8

 Block7:
	mov eax,ebp

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
__SUB(004B7BC0, __cdecl, 83596,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::NameAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+4]
	add eax,esi
	push ecx
	lea ecx,[eax+4]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	mov esi,edi
	mov dword ptr [esp+0xC],edx
	imul esi,0x74

 Block7:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+ecx+4]
	mov ecx,dword ptr [esp+0xC]
	push eax
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
__SUB(004B8660, __cdecl, 83629,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::NameDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x94
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x90],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0x10]
	push esi
	push edi
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x10],edi

 Block1:
	cmp edi,dword ptr [ebp+0x10]
	jge Block6

 Block2:
	mov esi,edi
	shl esi,4
	sub esi,edi
	add esi,esi
	add esi,esi
	add esi,esi

 Block3:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+4]
	add eax,esi
	push ecx
	lea ecx,[eax+4]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block5

 Block4:
	inc edi
	add esi,0x78
	cmp edi,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	mov dword ptr [esp+0x10],edi

 Block6:
	dec ebx
	cmp dword ptr [ebp+0xC],ebx
	jge Block10

 Block7:
	mov edx,dword ptr [esp+0x18]
	mov esi,ebx
	shl esi,4
	sub esi,ebx
	add esi,esi
	add edx,4
	add esi,esi
	mov dword ptr [esp+0x1C],edx
	add esi,esi

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+esi+4]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block10

 Block9:
	dec ebx
	sub esi,0x78
	cmp dword ptr [ebp+0xC],ebx
	jl Block8

 Block10:
	cmp edi,ebx
	jge Block12

 Block11:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+ecx*8]
	mov ecx,edi
	shl ecx,4
	sub ecx,edi
	inc dword ptr [esp+0x10]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x20]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x20]
	mov edi,edx
	rep movsd
	mov edi,dword ptr [esp+0x10]
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x9C]
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_
_SUB_EXCEPTION_HANDLER(4C1050)
__SUB(004C1050, __cdecl, 83704,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::LevelAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::LevelAscComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::LevelAscComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
__SUB(004D9840, __cdecl, 83787,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::NameDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuild::SectionData::Sort
__SUB_CLASS_THIS0(004DA1B0, __thiscall, 40448,  CTabGuild::SectionData, void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x74]
	dec eax
	cmp eax,3
	ja Block14

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block8
cmp EAX, 3
je Block11


 Block2:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x78],eax
	je Block4

 Block3:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block4:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block5:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x78],eax
	je Block7

 Block6:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block7:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block8:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x78],eax
	je Block10

 Block9:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block10:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>::call_1
	add esp,8
	pop ecx
	ret

 Block11:
	xor eax,eax
	mov byte ptr [esp],al
	cmp dword ptr [ecx+0x78],eax
	je Block13

 Block12:
	mov eax,dword ptr [esp]
	push eax
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>::call_1
	add esp,8
	pop ecx
	ret

 Block13:
	mov edx,dword ptr [esp]
	push edx
	add ecx,0x70
	push ecx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>::call_1
	add esp,8

 Block14:
	pop ecx
	ret
}
}
// CUIUserList::Draw
_SUB_EXCEPTION_HANDLER(4D0CD0)
__SUB_CLASS_THIS(004D0CD0, __thiscall, 40160,  CUIUserList, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D0CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x138
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x15C]
	push eax
	call CWnd::Draw
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x154],edi
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x20],edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x158],2
	call CWnd::GetCanvas
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x1C],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x160],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x154],2
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea edx,[esp+0x18]
	push 0x3D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov byte ptr [esp+0x160],4
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x154],2
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0xB1C]
	cmp eax,5
	ja Block74

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block44
cmp EAX, 2
je Block74
cmp EAX, 3
je Block47
cmp EAX, 4
je Block58
cmp EAX, 5
je Block69


 Block10:
	push offset _D_VTMISSING
	lea ecx,[esp+0xF0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x130]
	mov byte ptr [esp+0x158],5
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x154],6
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi+0xC64]
	lea edx,[esp+0xEC]
	push edx
	lea edx,[esp+0x130]
	push edx
	mov edx,dword ptr [eax+0x9C]
	mov eax,dword ptr [eax+0xA4]
	push edx
	push eax
	call IWzCanvas::Create
	lea ecx,[esp+0x12C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xEC]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xD0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xC0]
	mov byte ptr [esp+0x158],7
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x154],8
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0xCC]
	push edx
	lea eax,[esp+0xC0]
	push eax
	push 0x17E
	push 0x108
	call IWzCanvas::Create
	lea ecx,[esp+0xBC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xCC]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],esp
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block18:
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esi+0xC64]
	call CTabFriend::Draw
	lea eax,[esi+0xB08]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::op_assign
	mov ebp,dword ptr [esp+0x24]
	mov byte ptr [esp+0x154],9
	test ebp,ebp
	je Block22

 Block21:
	cmp byte ptr [ebp],0
	jne Block40

 Block22:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCurFieldID
	mov edi,eax
	lea ecx,[esp+0x34]
	push edi
	push ecx
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [esp+0x38],0
	mov byte ptr [esp+0x154],0xA
	sete al
	test al,al
	sete al
	test al,al
	je Block39

 Block23:
	lea edx,[esp+0x48]
	push 0x6EB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x160],0xB
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x154],0xD
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea ecx,[esp+0x44]
	push 0x6EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x160],0xE
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x154],0x10
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov dword ptr [esp+0x2C],0
	mov bl,0x11
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x154],bl
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block29

 Block28:
	lea eax,[esp+0x18]
	push eax
	jmp Block30

 Block29:
	lea ecx,[esp+0x28]
	push ecx

 Block30:
	lea ecx,[esp+0x30]
	call ZXString<char>::op_assign
	lea edx,[esp+0x30]
	push 0x2D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x2C]
	push edi
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x160],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x154],bl
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov byte ptr [esp+0x154],0x10
	test edi,edi
	je Block34

 Block33:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x154],0xD
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x154],0xA
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov ebp,dword ptr [esp+0x24]

 Block39:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x154],9
	call CField::PROPERTY::~PROPERTY

 Block40:
	push offset _D_VTMISSING
	lea ecx,[esp+0x100]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xE0]
	mov byte ptr [esp+0x158],0x13
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0xCA4]
	lea ecx,[esp+0xFC]
	push ecx
	lea edx,[esp+0xE0]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x14
	push ebp
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x164],0x15
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push 0x11D
	push 0xA
	mov byte ptr [esp+0x16C],bl
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x154],2
	test ebp,ebp
	je Block74

 Block43:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4
	jmp Block74

 Block44:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block46

 Block45:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block46:
	mov ecx,dword ptr [esi+0xC68]
	call CTabParty::Draw
	jmp Block74

 Block47:
	push offset _D_VTMISSING
	lea ecx,[esp+0x140]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x120]
	mov byte ptr [esp+0x158],0x16
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x154],0x17
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea edx,[esp+0x13C]
	push edx
	lea eax,[esp+0x120]
	push eax
	mov eax,dword ptr [esi+0xBCC]
	lea edx,[eax+eax*4]
	lea eax,[edx*4+0x69]
	push eax
	push 0xE6
	call IWzCanvas::Create
	lea ecx,[esp+0x11C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x13C]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x110]
	mov byte ptr [esp+0x158],0x18
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x154],0x19
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[esp+0x9C]
	push edx
	lea eax,[esp+0x110]
	push eax
	push 0x32
	push 0x108
	call IWzCanvas::Create
	lea ecx,[esp+0x10C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x9C]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x1C],esp
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	mov ecx,dword ptr [esi+0xC6C]
	call CTabGuild::Draw
	add eax,0xFFFFFF47
	push eax
	mov ecx,esi
	call CUIUserList::SetScrollRange
	jmp Block74

 Block58:
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x158],0x1A
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x154],0x1B
	test edx,edx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [esi+0xC70]
	call CTabGuildAlliance::CalcListCanvasHeight
	push eax
	push 0xE6
	mov ecx,edx
	call IWzCanvas::Create
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x158],0x1C
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x154],0x1D
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push 0x32
	push 0x108
	call IWzCanvas::Create
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x1C],esp
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	mov ecx,dword ptr [esi+0xC70]
	call CTabGuildAlliance::Draw
	add eax,0xFFFFFF47
	push eax
	mov ecx,esi
	call CUIUserList::SetScrollRange
	jmp Block74

 Block69:
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xB0]
	mov byte ptr [esp+0x158],0x1E
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x154],0x1F
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x7C]
	push eax
	mov eax,dword ptr [esi+0xBCC]
	lea edx,[esp+0xB0]
	push edx
	lea eax,[eax+eax*4]
	lea edx,[eax*4+0x1C]
	push edx
	push 0xE6
	call IWzCanvas::Create
	lea ecx,[esp+0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x154],2
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x1C],esp
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	mov ecx,dword ptr [esi+0xC78]
	call CTabBlackList::Draw

 Block74:
	mov eax,dword ptr [esp+0x14]
	xor ebx,ebx
	cmp eax,ebx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x2C],ebx
	call eax
	cmp eax,ebx
	jge Block78

 Block77:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block78:
	mov eax,dword ptr [esi+0xB18]
	mov ebp,dword ptr [eax+0x38]
	mov dword ptr [esp+0x30],ebx
	mov eax,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0x154],0x20
	cmp eax,5
	ja Block110

 Block79:
	cmp EAX, 0
je Block80
cmp EAX, 1
je Block110
cmp EAX, 2
je Block107
cmp EAX, 3
je Block83
cmp EAX, 4
je Block91
cmp EAX, 5
je Block102


 Block80:
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x154],0x21
	cmp esi,ebx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x7C]
	push ecx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xFF
	push edx
	push 0x73
	push 0xA
	mov ecx,esi
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x154],0x20
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xB0]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0xAC]
	push eax
	push 0x17E
	push 0x108
	push ebx
	push ebx
	push 0x17E
	push 0x108
	push 0xFF
	push ecx
	push ebx
	push ebx
	mov ecx,esi
	mov byte ptr [esp+0x180],0x22
	call IWzCanvas::CopyEx
	lea ecx,[esp+0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block110

 Block83:
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x154],0x23
	cmp dword ptr [esp+0x1C],ebx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x8C]
	push edx
	push 0x32
	push 0x108
	push 0
	push 0
	push 0x32
	push 0x108
	push 0xFF
	push eax
	push 0x37
	push 9
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x154],0x20
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x24]
	lea edi,[ebp+ebp*4]
	add edi,edi
	add edi,edi
	sub ebx,edi
	cmp ebx,0xB9
	jl Block87

 Block86:
	mov ebx,0xB9

 Block87:
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push ebx
	push 0xE6
	push edi
	push 0
	push ebx
	push 0xE6
	push 0xFF
	push edx
	push 0x64
	push 0xA
	mov byte ptr [esp+0x180],0x24
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x154],0x20
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xC6C]
	push ebp
	lea eax,[esp+0x38]
	push eax
	add ecx,0xAC
	push ecx
	mov dword ptr [esp+0x44],edi
	add edi,ebx
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x4C],0xE6
	mov dword ptr [esp+0x50],edi
	call CUIUserList::CreateGuildButton
	test eax,eax
	jne Block89

 Block88:
	push eax
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	push 2
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	push 3
	mov ecx,esi
	call CUIUserList::DestroyGuildButton

 Block89:
	mov eax,dword ptr [esi+0xC6C]
	push ebp
	lea edx,[esp+0x38]
	push edx
	add eax,0x128
	push eax
	push 0
	mov ecx,esi
	call CUIUserList::CreateGuildButton
	test eax,eax
	jne Block110

 Block90:
	push 1
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	push 4
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	push 5
	mov ecx,esi
	call CUIUserList::DestroyGuildButton
	jmp Block110

 Block91:
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x154],0x25
	cmp dword ptr [esp+0x1C],ebx
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	mov edx,dword ptr [esp+0x20]
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push 0x32
	push 0x108
	push 0
	push 0
	push 0x32
	push 0x108
	push 0xFF
	push edx
	push 0x37
	push 9
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x154],0x20
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x24]
	lea edi,[ebp+ebp*4]
	add edi,edi
	add edi,edi
	sub ebx,edi
	cmp ebx,0xB9
	jl Block95

 Block94:
	mov ebx,0xB9

 Block95:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	lea eax,[esp+0x4C]
	push eax
	push ebx
	push 0xE6
	push edi
	push 0
	push ebx
	push 0xE6
	push 0xFF
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push 0x64
	push 0xA
	mov byte ptr [esp+0x180],0x26
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x154],0x20
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x38],edi
	add edi,ebx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x3C],0xE6
	mov dword ptr [esp+0x40],edi
	cmp dword ptr [ebx+0x37EE],0
	je Block110

 Block96:
	mov ecx,ebx
	xor edi,edi
	call CWvsContext::GetAllianceMemberNum
	inc eax
	test eax,eax
	jle Block110

 Block97:
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x24],6
	lea esp,[esp]

 Block98:
	mov eax,dword ptr [esi+0xC70]
	mov ecx,dword ptr [esp+0x28]
	push ebp
	lea edx,[esp+0x38]
	push edx
	lea edx,[ecx+eax+0xC8]
	push edx
	push edi
	mov ecx,esi
	call CUIUserList::CreateAllianceButton
	test eax,eax
	jne Block100

 Block99:
	push edi
	mov ecx,esi
	call CUIUserList::DestroyAllianceButton
	mov eax,dword ptr [esp+0x24]
	dec eax
	push eax
	mov ecx,esi
	call CUIUserList::DestroyAllianceButton
	mov ecx,dword ptr [esp+0x24]
	push ecx
	mov ecx,esi
	call CUIUserList::DestroyAllianceButton

 Block100:
	sub dword ptr [esp+0x28],0xFFFFFF80
	add dword ptr [esp+0x24],2
	mov ecx,ebx
	inc edi
	call CWvsContext::GetAllianceMemberNum
	inc eax
	cmp edi,eax
	jl Block98

 Block101:
	jmp Block110

 Block102:
	mov esi,dword ptr [esp+0x24]
	lea ebp,[ebp+ebp*4]
	add ebp,ebp
	add ebp,ebp
	sub esi,ebp
	cmp esi,0xE4
	jl Block104

 Block103:
	mov esi,0xE4

 Block104:
	push offset _D_VTMISSING
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x154],0x27
	cmp ecx,ebx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x9C]
	push edx
	push esi
	push 0xE6
	push ebp
	push ebx
	push esi
	push 0xE6
	push 0xFF
	push eax
	push 0x3C
	push 0xA
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block110

 Block107:
	mov eax,dword ptr [esp+0x1C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block109:
	mov ecx,dword ptr [esi+0xC7C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [esi+0xC7C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x14]
	call edx

 Block110:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x154],1
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x154],0
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x154],0xFFFFFFFF
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	mov ecx,dword ptr [esp+0x14C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x144
	ret 4
}
}
// CTabGuildAlliance::OnWhisper
_SUB_EXCEPTION_HANDLER(4CCB50)
__SUB_CLASS_THIS0(004CCB50, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CCB50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x8C]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block5

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block5

 Block2:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x38],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x98],esi
	call CTabGuildAlliance::GetGuildItem
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block4

 Block3:
	push esi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::StartChat

 Block4:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM

 Block5:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x88
	ret
}
}
// CUIUserList::DestroyGuildButton
__SUB_CLASS_THIS(004BAB80, __thiscall, 40174,  CUIUserList, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jge Block7

 Block1:
	add esi,0xB24
	mov edi,6

 Block2:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block5

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi],0
	je Block5

 Block4:
	push 0
	lea ecx,[esi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi],0

 Block5:
	add esi,8
	sub edi,1
	jne Block2

 Block6:
	pop edi
	pop esi
	ret 4

 Block7:
	mov ecx,dword ptr [esi+edi*8+0xB24]
	test ecx,ecx
	je Block10

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+edi*8+0xB24],0
	lea esi,[esi+edi*8+0xB20]
	je Block10

 Block9:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block10:
	pop edi
	pop esi
	ret 4
}
}
// CTabGuildAlliance::GUILDITEM::~GUILDITEM
_SUB_EXCEPTION_HANDLER(4BA520)
__SUB_CLASS_THIS0(004BA520, __thiscall, 40555,  CTabGuildAlliance::GUILDITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA520
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
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
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
// CTabParty::GetPartyItem
__SUB_CLASS_THIS(004BAEA0, __thiscall, 40289,  CTabParty, long, unsigned long, CTabParty::PARTYITEM&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	push 0x50
	push 0
	push ebx
	mov esi,ecx
	call _memset
	mov edi,dword ptr [esp+0x1C]
	add esp,0xC
	xor eax,eax
	xor edx,edx
	mov edi,edi

 Block1:
	mov ecx,dword ptr [esi+0x50]
	test ecx,ecx
	je Block6

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block6

 Block3:
	cmp dword ptr [edx+ecx],edi
	je Block5

 Block4:
	inc eax
	add edx,0x50
	jmp Block1

 Block5:
	lea edx,[eax+eax*4]
	shl edx,4
	add edx,ecx
	push edx
	mov ecx,ebx
	call CTabParty::PARTYITEM::operator=
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block6:
	xor eax,eax
	xor edx,edx

 Block7:
	mov ecx,dword ptr [esi+0x54]
	test ecx,ecx
	je Block12

 Block8:
	cmp eax,dword ptr [ecx-4]
	jae Block12

 Block9:
	cmp dword ptr [edx+ecx],edi
	je Block11

 Block10:
	inc eax
	add edx,0x50
	jmp Block7

 Block11:
	lea edx,[eax+eax*4]
	shl edx,4
	add edx,ecx
	push edx
	mov ecx,ebx
	call CTabParty::PARTYITEM::operator=
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8

 Block12:
	xor ecx,ecx
	xor edx,edx
	lea esp,[esp]

 Block13:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	je Block18

 Block14:
	cmp ecx,dword ptr [eax-4]
	jae Block18

 Block15:
	cmp dword ptr [edx+eax],edi
	je Block17

 Block16:
	inc ecx
	add edx,0x50
	jmp Block13

 Block17:
	lea ecx,[ecx+ecx*4]
	shl ecx,4
	add ecx,eax
	push ecx
	mov ecx,ebx
	call CTabParty::PARTYITEM::operator=
	pop edi
	pop esi
	mov eax,2
	pop ebx
	ret 8

 Block18:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret 8
}
}
// CTabGuildAlliance::~CTabGuildAlliance
_SUB_EXCEPTION_HANDLER(4D8160)
__SUB_CLASS_THIS0(004D8160, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D8160
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabGuildAlliance::`vftable'
	push offset CTabGuildAlliance::SectionData::~SectionData
	push 5
	push 0x80
	lea eax,[esi+0xC8]
	push eax
	mov dword ptr [esp+0x24],7
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xC0]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0xA8]
	push eax
	mov byte ptr [esp+0x24],4
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0x94]
	push ecx
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 7
	push 4
	lea ecx,[esi+0x6C]
	push ecx
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0xD
	push 8
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabGuildAlliance::OnCreate
_SUB_EXCEPTION_HANDLER(4C9E60)
__SUB_CLASS_THIS0(004C9E60, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x84],0
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1176
	mov bl,1
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x80],5
	cmp word ptr [esp+0x58],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x58]
	push eax
	call edi

 Block13:
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x18],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block17:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x28],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block21:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x878
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x8C],8
	test edi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x54]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x6C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block33

 Block27:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block29:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x87A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x90],0xA
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x70]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block34

 Block31:
	cmp eax,0x80004002
	je Block34

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x48]
	push edx
	call ebx
	jmp Block30

 Block34:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block38:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x87B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x8C],0xC
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xD
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x74]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block45:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x87C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x8C],0xE
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x78]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x48]
	push edx
	call ebx

 Block52:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x87D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x90],0x10
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0x11
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x7C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block59:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x87E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x8C],0x12
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0x13
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x80]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block66:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x87F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x8C],0x14
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x90],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0x15
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x84]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block69

 Block67:
	cmp eax,0x80004002
	je Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],7
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x48]
	push edx
	call ebx

 Block73:
	lea eax,[esp+0x14]
	push 0xCE0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x84],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	lea ecx,[esp+0x14]
	push 0xCE1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x84],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	lea edx,[esp+0x14]
	push 0xCE2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x84],0x18
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xB4]
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xB0]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	push offset _S_
	lea ecx,[esi+0xBC]
	call ZXString<char>::AssignCStr
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],0x19
	call ebx
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	push 0
	push 0
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x1A
	push offset _S_UIUIWINDOW2IMGUS__69
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x1B
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x1C
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x88]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x80],0x19
	cmp word ptr [esp+0x38],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x48],si
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x74
	ret
}
}
// CTabParty::LoadData
_SUB_EXCEPTION_HANDLER(4C4570)
__SUB_CLASS_THIS0(004C4570, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C4570
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC4]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	lea ecx,[ebp+0x50]
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	lea ecx,[ebp+0x54]
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	lea ecx,[ebp+0x58]
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	mov eax,dword ptr [_D_G_PSTAGE+4]
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block86

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block86

 Block2:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block5

 Block3:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block5

 Block4:
	mov eax,esi
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	lea ecx,[eax+0x16C]
	call TSecType<unsigned long>::GetData
	cmp dword ptr [ebx+0x3604],0
	mov dword ptr [esp+0x18],eax
	jne Block8

 Block7:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [eax+0xBC8],0
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx+0xBCC],2
	jmp Block86

 Block8:
	xor esi,esi
	lea edi,[ebx+0x3608]

 Block9:
	cmp dword ptr [edi],0
	je Block17

 Block10:
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0xCC],eax
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push esi
	mov ecx,ebx
	call CWvsContext::GetPartyMemberData
	cmp dword ptr [esp+0x38],0xFFFFFFFE
	mov dword ptr [esp+0x70],0
	jne Block12

 Block11:
	lea ecx,[ebp+0x54]
	jmp Block15

 Block12:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [esp+0x2C]
	jne Block14

 Block13:
	lea edx,[esp+0x24]
	push edx
	lea ecx,[ebp+0x50]
	jmp Block16

 Block14:
	lea ecx,[ebp+0x58]

 Block15:
	lea eax,[esp+0x24]
	push eax

 Block16:
	push 0xFFFFFFFF
	call ZArray<CTabParty::PARTYITEM>::InsertBefore
	mov ecx,eax
	call CTabParty::PARTYITEM::operator=
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	call CTabParty::PARTYITEM::~PARTYITEM

 Block17:
	inc esi
	add edi,4
	cmp esi,6
	jl Block9

 Block18:
	xor ecx,ecx
	mov dword ptr [esp+0x78],ecx
	mov dword ptr [esp+0x80],ecx
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [esp+0xCC],1
	cmp eax,ecx
	jne Block20

 Block19:
	xor eax,eax
	jmp Block21

 Block20:
	mov eax,dword ptr [eax-4]

 Block21:
	mov dword ptr [esp+0x14],eax
	dec eax
	cmp eax,ecx
	jle Block29

 Block22:
	xor edi,edi
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x18],eax
	lea ecx,[ecx]

 Block23:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x1C],ecx
	jge Block28

 Block24:
	mov ebx,ecx
	sub ebx,dword ptr [esp+0x1C]
	lea esi,[edi+0x50]

 Block25:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [esi+eax+4]
	push ecx
	lea ecx,[edi+eax+4]
	call ZXString<char>::Compare
	test eax,eax
	jle Block27

 Block26:
	mov edx,dword ptr [ebp+0x50]
	add edx,edi
	push edx
	lea ecx,[esp+0x78]
	call CTabParty::PARTYITEM::operator=
	mov eax,dword ptr [ebp+0x50]
	lea ecx,[esi+eax]
	push ecx
	lea ecx,[edi+eax]
	call CTabParty::PARTYITEM::operator=
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[esp+0x74]
	push edx
	add ecx,esi
	call CTabParty::PARTYITEM::operator=

 Block27:
	add esi,0x50
	sub ebx,1
	jne Block25

 Block28:
	mov eax,1
	add dword ptr [esp+0x1C],eax
	add edi,0x50
	sub dword ptr [esp+0x18],eax
	jne Block23

 Block29:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block31

 Block30:
	mov eax,dword ptr [eax-4]

 Block31:
	mov dword ptr [esp+0x14],eax
	dec eax
	test eax,eax
	jle Block39

 Block32:
	xor edi,edi
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x18],eax

 Block33:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x1C],eax
	jge Block38

 Block34:
	mov ebx,eax
	sub ebx,dword ptr [esp+0x1C]
	lea esi,[edi+0x50]

 Block35:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax+esi+4]
	push ecx
	lea ecx,[eax+edi+4]
	call ZXString<char>::Compare
	test eax,eax
	jle Block37

 Block36:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,edi
	push ecx
	lea ecx,[esp+0x78]
	call CTabParty::PARTYITEM::operator=
	mov eax,dword ptr [ebp+0x58]
	lea edx,[eax+esi]
	push edx
	lea ecx,[eax+edi]
	call CTabParty::PARTYITEM::operator=
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[esp+0x74]
	push eax
	add ecx,esi
	call CTabParty::PARTYITEM::operator=

 Block37:
	add esi,0x50
	sub ebx,1
	jne Block35

 Block38:
	mov eax,1
	add dword ptr [esp+0x1C],eax
	add edi,0x50
	sub dword ptr [esp+0x18],eax
	jne Block33

 Block39:
	mov eax,dword ptr [ebp+0x54]
	add ebp,0x54
	test eax,eax
	je Block41

 Block40:
	mov eax,dword ptr [eax-4]

 Block41:
	mov dword ptr [esp+0x14],eax
	dec eax
	test eax,eax
	jle Block49

 Block42:
	xor edi,edi
	mov ebp,1
	mov dword ptr [esp+0x18],eax

 Block43:
	cmp ebp,dword ptr [esp+0x14]
	jge Block48

 Block44:
	mov ebx,dword ptr [esp+0x14]
	lea esi,[edi+0x50]
	sub ebx,ebp

 Block45:
	mov eax,dword ptr [esp+0x20]
	add eax,0x54
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [eax+esi+4]
	push ecx
	lea ecx,[eax+edi+4]
	call ZXString<char>::Compare
	test eax,eax
	jle Block47

 Block46:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x54]
	add eax,0x54
	add ecx,edi
	push ecx
	lea ecx,[esp+0x78]
	call CTabParty::PARTYITEM::operator=
	mov eax,dword ptr [esp+0x20]
	add eax,0x54
	mov eax,dword ptr [eax]
	lea edx,[eax+esi]
	push edx
	lea ecx,[eax+edi]
	call CTabParty::PARTYITEM::operator=
	lea eax,[esp+0x74]
	push eax
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0x54]
	add eax,0x54
	add ecx,esi
	call CTabParty::PARTYITEM::operator=

 Block47:
	add esi,0x50
	sub ebx,1
	jne Block45

 Block48:
	inc ebp
	add edi,0x50
	sub dword ptr [esp+0x18],1
	jne Block43

 Block49:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0x50]
	test eax,eax
	jne Block51

 Block50:
	xor edx,edx
	jmp Block52

 Block51:
	mov edx,dword ptr [eax-4]

 Block52:
	lea eax,[ecx+0x54]
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block54

 Block53:
	xor ecx,ecx
	jmp Block55

 Block54:
	mov ecx,dword ptr [eax-4]

 Block55:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi+0x58]
	test eax,eax
	je Block57

 Block56:
	mov eax,dword ptr [eax-4]

 Block57:
	add eax,ecx
	mov ecx,dword ptr [edi+0x4C]
	add eax,edx
	mov dword ptr [ecx+0xBC8],eax
	mov eax,dword ptr [edi+0x50]
	test eax,eax
	jne Block59

 Block58:
	xor esi,esi
	jmp Block60

 Block59:
	mov esi,dword ptr [eax-4]

 Block60:
	mov eax,dword ptr [edi+0x58]
	test eax,eax
	jne Block62

 Block61:
	xor edx,edx
	jmp Block63

 Block62:
	mov edx,dword ptr [eax-4]

 Block63:
	mov eax,dword ptr [edi+0x54]
	test eax,eax
	jne Block65

 Block64:
	xor ecx,ecx
	jmp Block66

 Block65:
	mov ecx,dword ptr [eax-4]

 Block66:
	mov eax,dword ptr [edi+0x4C]
	add edx,esi
	xor esi,esi
	cmp esi,edx
	sbb edx,edx
	inc edx
	cmp esi,ecx
	sbb ecx,ecx
	inc ecx
	add edx,ecx
	add edx,dword ptr [eax+0xBC8]
	xor ecx,ecx
	mov dword ptr [eax+0xBCC],edx
	xor edx,edx

 Block67:
	mov eax,dword ptr [edi+0x50]
	test eax,eax
	je Block71

 Block68:
	cmp ecx,dword ptr [eax-4]
	jae Block71

 Block69:
	mov esi,dword ptr [edi+0x4C]
	mov eax,dword ptr [edx+eax]
	cmp eax,dword ptr [esi+0xC5C]
	je Block82

 Block70:
	inc ecx
	add edx,0x50
	jmp Block67

 Block71:
	xor ecx,ecx
	xor edx,edx

 Block72:
	mov eax,dword ptr [edi+0x54]
	test eax,eax
	je Block76

 Block73:
	cmp ecx,dword ptr [eax-4]
	jae Block76

 Block74:
	mov esi,dword ptr [edi+0x4C]
	mov eax,dword ptr [edx+eax]
	cmp eax,dword ptr [esi+0xC5C]
	je Block82

 Block75:
	inc ecx
	add edx,0x50
	jmp Block72

 Block76:
	xor ecx,ecx
	xor edx,edx

 Block77:
	mov eax,dword ptr [edi+0x58]
	test eax,eax
	je Block81

 Block78:
	cmp ecx,dword ptr [eax-4]
	jae Block81

 Block79:
	mov esi,dword ptr [edi+0x4C]
	mov eax,dword ptr [edx+eax]
	cmp eax,dword ptr [esi+0xC5C]
	je Block82

 Block80:
	inc ecx
	add edx,0x50
	jmp Block77

 Block81:
	mov ecx,dword ptr [edi+0x4C]
	mov dword ptr [ecx+0xC5C],0

 Block82:
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0xCC],2
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xBC
	ret
}
}
// CTabGuildAlliance::SectionData::SectionData
__SUB_CLASS_THIS0(004D4700, __thiscall, 40591,  CTabGuildAlliance::SectionData, void) {
__asm {

 Block0:
	mov eax,ecx
	mov edx,1
	xor ecx,ecx
	mov dword ptr [eax],edx
	mov dword ptr [eax+0x18],edx
	mov dword ptr [eax+0x1C],edx
	mov dword ptr [eax+0x70],ecx
	mov dword ptr [eax+0x74],ecx
	mov dword ptr [eax+0x78],ecx
	mov dword ptr [eax+0x7C],edx
	ret
}
}
// CTabGuild::DeleteGuildNoticeLayer
__SUB_CLASS_THIS0(004B8DE0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0xA4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CWndAllianceGrade::Draw
_SUB_EXCEPTION_HANDLER(4CEA00)
__SUB_CLASS_THIS(004CEA00, __thiscall, 40692,  CWndAllianceGrade, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CEA00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	mov eax,dword ptr [ebp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xA8]
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp+0x4C],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [esi+0xA8]
	mov edi,dword ptr [eax+0xC80]
	add eax,0xC80
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x44],edi
	test edi,edi
	je Block4

 Block3:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block4:
	cmp dword ptr [ebx+0x37EE],0
	mov byte ptr [ebp-4],2
	je Block84

 Block5:
	mov eax,dword ptr [ebp+0x60]
	mov edi,dword ptr [eax+0x84]
	mov esi,dword ptr [edi+4]
	add edi,4
	mov ecx,ebx
	add esi,0x1C
	call CWvsContext::AmIAllianceMaster
	mov edx,dword ptr [esi]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov edi,dword ptr [eax+0x8C]
	mov esi,dword ptr [edi+4]
	add edi,4
	mov ecx,ebx
	add esi,0x1C
	call CWvsContext::AmIAllianceMaster
	mov edx,dword ptr [esi]
	push eax
	mov ecx,edi
	call edx
	mov edi,dword ptr [ebp+0x40]
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__86
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block7

 Block6:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block7:
	mov esi,dword ptr [ebp+0x60]
	add esi,0xD4
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x48],ebx
	test ebx,ebx
	je Block9

 Block8:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block9:
	push 0x37
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__83
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block11:
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [ebp+0x58],0
	mov dword ptr [ebp+0x5C],0x50
	nop

 Block12:
	cmp dword ptr [ebp+0x58],4
	mov eax,offset _S_UIUIWINDOW2IMGUS__82
	je Block14

 Block13:
	mov eax,offset _S_UIUIWINDOW2IMGUS__81

 Block14:
	mov esi,dword ptr [ebp+0x5C]
	add esi,0xFFFFFFFB
	push esi
	push 0xA
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block16:
	mov ecx,dword ptr [ebp+0x60]
	add ecx,0xD4
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [ebp+0x58]
	mov edx,dword ptr [ebp+0x60]
	inc eax
	mov dword ptr [ebp+0x50],eax
	cmp dword ptr [edx+0x90],eax
	jne Block25

 Block17:
	test edi,edi
	je Block82

 Block18:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFF244768
	push 0x14
	push 0xF4
	push esi
	push 0xA
	push edi
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	cmp ebx,dword ptr [ebp+0x44]
	je Block30

 Block21:
	mov esi,ebx
	mov ebx,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x48],ebx
	test ebx,ebx
	je Block23

 Block22:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block23:
	test esi,esi
	je Block30

 Block24:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block30

 Block25:
	mov eax,dword ptr [ebp+0x4C]
	cmp ebx,eax
	je Block30

 Block26:
	mov esi,ebx
	mov ebx,eax
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block30:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block31:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],4
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block32:
	mov eax,0x20
	mov byte ptr [ebp-4],5
	call __chkstk
	mov eax,esp
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x50]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	test edi,edi
	je Block82

 Block33:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	push 0x1E
	mov ecx,edi
	mov byte ptr [ebp-4],5
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],4
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],3
	jne Block40

 Block38:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	lea eax,[ebp+0x20]
	push eax
	call esi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block42:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],7
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block43:
	mov esi,dword ptr [ebp+0x58]
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax+esi*4+0xAC]
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp]
	push edx
	push ebx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	mov byte ptr [ebp-4],9
	push 0x46
	mov ecx,edi
	mov byte ptr [ebp-4],8
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block46

 Block44:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],3
	jne Block50

 Block48:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block52:
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax+esi*4+0xC0]
	lea edx,[ebp+0x10]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xB
	test ebx,ebx
	je Block82

 Block53:
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA
	call IWzFont::CalcTextWidth
	mov esi,0x56
	sub esi,eax
	shr esi,1
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],3
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [ecx+eax*4+0xAC]
	test eax,eax
	je Block59

 Block58:
	cmp byte ptr [eax],0
	jne Block64

 Block59:
	mov eax,dword ptr [ecx+0xA8]
	add eax,0xC88
	mov eax,dword ptr [eax]
	cmp ebx,eax
	je Block64

 Block60:
	mov dword ptr [ebp+0x54],ebx
	mov ebx,eax
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block62:
	cmp dword ptr [ebp+0x54],0
	je Block64

 Block63:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block65:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block83

 Block66:
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+ecx*4+0xC0]
	lea edx,[ebp-0x1C]
	push edx
	push ebx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x5C]
	push edx
	add esi,0xA2
	mov byte ptr [ebp-4],0xE
	push esi
	mov ecx,edi
	mov byte ptr [ebp-4],0xD
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xC
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],3
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [ebp+0x50]
	add dword ptr [ebp+0x5C],0x14
	cmp eax,5
	mov dword ptr [ebp+0x58],eax
	jl Block12

 Block75:
	mov byte ptr [ebp-4],2
	test ebx,ebx
	je Block77

 Block76:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block77:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	jmp Block92

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	push eax
	call _com_issue_error

 Block84:
	add esi,0x84
	mov ebx,2

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	add esi,8
	sub ebx,1
	jne Block85

 Block86:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block88

 Block87:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block88:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	lea esp,[ebp-0x4C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_
__SUB(004B89A0, __cdecl, 83638,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::LevelAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::LevelAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::LevelAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_
_SUB_EXCEPTION_HANDLER(4C0F00)
__SUB(004C0F00, __cdecl, 83702,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::JobDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0F00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::JobDescComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::JobDescComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CTabGuild::OnInvite
_SUB_EXCEPTION_HANDLER(4C96F0)
__SUB_CLASS_THIS0(004C96F0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C96F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block9

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block9

 Block2:
	add eax,8
	je Block9

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x30A
	push ecx
	mov dword ptr [esp+0x34],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	push 0xC
	push 4
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block12

 Block6:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x10],esp
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	mov edi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x24],2
	test edi,edi
	je Block10

 Block7:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block10

 Block8:
	mov ecx,edi
	jmp Block11

 Block9:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block10:
	xor ecx,ecx

 Block11:
	mov byte ptr [esp+0x24],1
	call CField::SendInviteGuildMsg

 Block12:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CTabGuildAlliance::LevelDescComp::operator()
__SUB_CLASS_THIS(004B75E0, __thiscall, 40581,  CTabGuildAlliance::LevelDescComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x10]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CTabGuildAlliance::MakeNoticeLayer
_SUB_EXCEPTION_HANDLER(4B9450)
__SUB_CLASS_THIS0(004B9450, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B9450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0xC0]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [edi+0xC0],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,3
	mov dword ptr [esp+0x44],ebp
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x44],1
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebp
	push 0xF
	push 0xD7
	push 0x54
	push 0xE
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xC0]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0xC0],eax
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp esi,ebp
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [edi+0xC0]
	cmp esi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [edi+0x8C]
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x44],2
	cmp ecx,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x44],3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov esi,dword ptr [edi+0xC0]
	mov byte ptr [esp+0x44],4
	cmp esi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block33

 Block32:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],3
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov ecx,dword ptr [edi+0x8C]
	lea eax,[esp+0x18]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x44],5
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0xC0]
	mov byte ptr [esp+0x44],6
	cmp esi,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],5
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [edi+0xC0]
	cmp esi,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov esi,dword ptr [edi+0xC0]
	cmp esi,ebp
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],ebp
	call ecx
	cmp eax,ebp
	jge Block61

 Block60:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edi+0xC4],edx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x38
	ret
}
}
// CWndAllianceGrade::OnMouseButton
__SUB_CLASS_THIS(004B76A0, __thiscall, 40693,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push edi
	mov edi,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push esi
	push eax
	lea esi,[edi-4]
	push ecx
	mov ecx,esi
	call CWndAllianceGrade::GetGradeIndexFromPoint
	test eax,eax
	je Block3

 Block2:
	push 0
	mov ecx,esi
	mov dword ptr [edi+0x8C],eax
	call CWnd::InvalidateRect

 Block3:
	pop esi

 Block4:
	pop edi
	ret 0x10
}
}
// CTabGuild::GetToolTipString
_SUB_EXCEPTION_HANDLER(4BF220)
__SUB_CLASS_THIS(004BF220, __thiscall, 40389,  CTabGuild, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BF220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x63
	push 0x118
	push 0x53
	push 5
	lea eax,[esp+0x9C]
	push eax
	mov dword ptr [esp+0x28],0
	call SetRect
	mov ebx,dword ptr [esp+0xB4]
	mov edi,dword ptr [esp+0xB0]
	push ebx
	push edi
	lea ecx,[esp+0x94]
	push ecx
	call PtInRect
	test eax,eax
	je Block4

 Block1:
	mov ecx,dword ptr [esi+0xA0]
	lea eax,[esi+0xA0]
	test ecx,ecx
	je Block4

 Block2:
	cmp byte ptr [ecx],0
	je Block4

 Block3:
	mov esi,dword ptr [esp+0xAC]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	jmp Block39

 Block4:
	lea edx,[ebx-0x65]
	cmp edx,0xB7
	ja Block38

 Block5:
	mov eax,dword ptr [esi+0x70]
	mov ecx,dword ptr [eax+0xB18]
	mov ecx,dword ptr [ecx+0x38]
	lea ecx,[ecx+ecx*4-0x19]
	lea ebp,[ebx+ecx*4]
	push ebp
	add edi,0xFFFFFFF6
	push edi
	add eax,0xBD4
	push eax
	call PtInRect
	test eax,eax
	je Block8

 Block6:
	push 0x2BD

 Block7:
	mov esi,dword ptr [esp+0xB0]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block39

 Block8:
	mov edx,dword ptr [esi+0x70]
	push ebp
	push edi
	add edx,0xBE4
	push edx
	call PtInRect
	test eax,eax
	je Block10

 Block9:
	push 0x2BE
	jmp Block7

 Block10:
	push ebp
	push edi
	lea eax,[esi+0xDC]
	push eax
	call PtInRect
	test eax,eax
	je Block12

 Block11:
	push 0x2BF
	jmp Block7

 Block12:
	push ebp
	push edi
	lea ecx,[esi+0x158]
	push ecx
	call PtInRect
	test eax,eax
	jne Block11

 Block13:
	push ebp
	push edi
	lea edx,[esi+0xEC]
	push edx
	call PtInRect
	test eax,eax
	je Block15

 Block14:
	push 0x2C0
	jmp Block7

 Block15:
	push ebp
	push edi
	lea eax,[esi+0x168]
	push eax
	call PtInRect
	test eax,eax
	jne Block14

 Block16:
	push ebp
	push edi
	lea ecx,[esi+0xFC]
	push ecx
	call PtInRect
	test eax,eax
	je Block18

 Block17:
	push 0x2C1
	jmp Block7

 Block18:
	push ebp
	push edi
	lea edx,[esi+0x178]
	push edx
	call PtInRect
	test eax,eax
	jne Block17

 Block19:
	push ebp
	push edi
	lea eax,[esi+0x10C]
	push eax
	call PtInRect
	test eax,eax
	je Block21

 Block20:
	push 0x2C2
	jmp Block7

 Block21:
	push ebp
	push edi
	lea ecx,[esi+0x188]
	push ecx
	call PtInRect
	test eax,eax
	jne Block20

 Block22:
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x40],eax
	mov edx,dword ptr [esi+0x70]
	mov dword ptr [esp+0xA4],eax
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	push eax
	mov eax,dword ptr [esp+0xB4]
	push ebx
	push eax
	mov ecx,esi
	call CTabGuild::GetMemberIDFromPoint
	lea ecx,[esp+0x18]
	push ecx
	mov ebx,eax
	push ebx
	mov ecx,esi
	call CTabGuild::GetGuildItem
	test ebx,ebx
	je Block40

 Block23:
	cmp dword ptr [esp+0x18],0
	je Block40

 Block24:
	cmp dword ptr [esp+0x84],0
	je Block28

 Block25:
	push ebp
	push edi
	lea edx,[esp+0x4C]
	push edx
	call PtInRect
	test eax,eax
	je Block28

 Block26:
	lea eax,[esp+0x1C]
	push eax

 Block27:
	mov esi,dword ptr [esp+0xB0]
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	jmp Block39

 Block28:
	push ebp
	push edi
	lea ecx,[esp+0x5C]
	push ecx
	call PtInRect
	or ebx,0xFFFFFFFF
	test eax,eax
	je Block33

 Block29:
	cmp dword ptr [esp+0x88],0
	je Block31

 Block30:
	lea edx,[esp+0x20]
	push edx
	jmp Block27

 Block31:
	cmp dword ptr [esp+0x24],ebx
	jne Block33

 Block32:
	mov esi,dword ptr [esp+0xAC]
	push 0xF39
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA4],ebx
	call CTabGuild::GUILDITEM::~GUILDITEM
	jmp Block39

 Block33:
	cmp dword ptr [esp+0x28],ebx
	jne Block35

 Block34:
	push ebp
	push edi
	lea eax,[esp+0x6C]
	push eax
	call PtInRect
	test eax,eax
	jne Block32

 Block35:
	push ebp
	push edi
	lea ecx,[esp+0x7C]
	push ecx
	call PtInRect
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esi+edx*4+0x88]
	mov esi,dword ptr [esp+0xAC]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA4],ebx
	call CTabGuild::GUILDITEM::~GUILDITEM
	jmp Block39

 Block37:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA4],ebx
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block38:
	mov esi,dword ptr [esp+0xAC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block39:
	mov eax,esi
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 0xC

 Block40:
	mov esi,dword ptr [esp+0xAC]
	or ebx,0xFFFFFFFF
	push ebx
	push offset _S_
	mov ecx,esi
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA4],ebx
	call CTabGuild::GUILDITEM::~GUILDITEM
	jmp Block39
}
}
// CUIUserList::IsMyAddon
__SUB_CLASS_THIS(004B7A90, __thiscall, 40168,  CUIUserList, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance]
	test eax,eax
	je Block2

 Block1:
	xor ecx,ecx
	cmp eax,dword ptr [esp+4]
	sete cl
	mov eax,ecx
	ret 4

 Block2:
	mov eax,dword ptr [TSingleton<CWndGuildBoard>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	xor edx,edx
	cmp eax,dword ptr [esp+4]
	sete dl
	mov eax,edx
	ret 4

 Block4:
	mov eax,dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance]
	test eax,eax
	jne Block1

 Block5:
	ret 4
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_
_SUB_EXCEPTION_HANDLER(4C1E10)
__SUB(004C1E10, __cdecl, 83724,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::GradeAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::GradeAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::GradeAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuild::OnButtonClicked
// 8D54AC
static uint8_t _SUB_4D5310_LOOKUP_TABLE_0[46] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 18, 11, 18, 18, 18, 
18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 
18, 18, 18, 18, 18, 18, 18, 18, 12, 13, 14, 15, 16, 17, 
};
__SUB_CLASS_THIS(004D5310, __thiscall, 40378,  CTabGuild, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFF812
	push esi
	mov esi,ecx
	cmp eax,0x2D
	ja Block21

 Block1:
	movzx eax,byte ptr [eax+_SUB_4D5310_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block9
cmp EAX, 6
je Block7
cmp EAX, 7
je Block11
cmp EAX, 8
je Block8
cmp EAX, 9
je Block10
cmp EAX, 10
je Block13
cmp EAX, 11
je Block20
cmp EAX, 12
je Block14
cmp EAX, 13
je Block15
cmp EAX, 14
je Block16
cmp EAX, 15
je Block18
cmp EAX, 16
je Block17
cmp EAX, 17
je Block19
cmp EAX, 18
je Block21


 Block2:
	call CTabGuild::OnInvite
	pop esi
	ret 4

 Block3:
	call CTabGuild::OnWithdraw
	pop esi
	ret 4

 Block4:
	call CTabGuild::OnKick
	pop esi
	ret 4

 Block5:
	push 1
	call CTabGuild::OnGradeChange
	pop esi
	ret 4

 Block6:
	push 0
	call CTabGuild::OnGradeChange
	pop esi
	ret 4

 Block7:
	call CTabGuild::OnWhisper
	pop esi
	ret 4

 Block8:
	call CTabGuild::OnChat
	pop esi
	ret 4

 Block9:
	call CTabGuild::OnFindUser
	pop esi
	ret 4

 Block10:
	mov ecx,dword ptr [esi+0x70]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x3C]
	push ebx
	xor ebx,ebx
	mov eax,ecx
	cmp dword ptr [eax+0xC54],ebx
	sete bl
	push ebx
	call edx
	pop ebx
	pop esi
	ret 4

 Block11:
	mov esi,dword ptr [esi+0x70]
	mov ecx,dword ptr [esi+0xC6C]
	test ecx,ecx
	je Block21

 Block12:
	call CTabGuild::OnSetNotice
	pop esi
	ret 4

 Block13:
	call CTabGuild::OnPartyInvite
	pop esi
	ret 4

 Block14:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 1
	mov ecx,esi
	call CTabGuild::OnMaxMinToggle
	pop esi
	ret 4

 Block15:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 0
	mov ecx,esi
	call CTabGuild::OnMaxMinToggle
	pop esi
	ret 4

 Block16:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 1
	mov ecx,esi
	call CTabGuild::OnPagePrev
	pop esi
	ret 4

 Block17:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 0
	mov ecx,esi
	call CTabGuild::OnPagePrev
	pop esi
	ret 4

 Block18:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 1
	mov ecx,esi
	call CTabGuild::OnPageNext
	pop esi
	ret 4

 Block19:
	mov ecx,dword ptr [esi+0x70]
	push 0xFFFFFFFF
	call CUIUserList::DestroyGuildButton
	push 0
	mov ecx,esi
	call CTabGuild::OnPageNext
	pop esi
	ret 4

 Block20:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x27
	call CWvsContext::UI_Toggle

 Block21:
	pop esi
	ret 4
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_
__SUB(004D96B0, __cdecl, 83775,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::JobDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CWndAllianceGrade::LoadData
_SUB_EXCEPTION_HANDLER(4BC510)
__SUB_CLASS_THIS0(004BC510, __thiscall, 40690,  CWndAllianceGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BC510
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
	mov dword ptr [esp+0x14],ecx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebx+0x37EE]
	test eax,eax
	je Block6

 Block1:
	xor esi,esi
	lea edi,[ecx+0xAC]

 Block2:
	inc esi
	push esi
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CWvsContext::GetAllianceGradeName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	add edi,4
	cmp esi,5
	jl Block2

 Block5:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect

 Block6:
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
// CTabGuildAlliance::OnSetNotice
_SUB_EXCEPTION_HANDLER(4CCCF0)
__SUB_CLASS_THIS0(004CCCF0, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CCCF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x38],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	add eax,8
	je Block11

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	mov ebx,1
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x117A
	push ecx
	mov dword ptr [esp+0x4C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	push 0x64
	push 0
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,ebx
	jne Block17

 Block6:
	lea edx,[esp+0x10]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	push 0
	push 0
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],2
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block15

 Block7:
	cmp byte ptr [eax],0
	je Block15

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block12

 Block9:
	cmp dword ptr [eax-4],0x64
	jle Block12

 Block10:
	mov byte ptr [esp+0x38],bl
	jmp Block16

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5

 Block12:
	push ebx
	push 0
	push ebx
	push 0x400
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block14

 Block13:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x11D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block15

 Block14:
	push 0xA7
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],3
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],2
	call ZArray<unsigned char>::RemoveAll

 Block15:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block19

 Block18:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret
}
}
// CTabGuildAlliance::OnInvite
_SUB_EXCEPTION_HANDLER(4CC9C0)
__SUB_CLASS_THIS0(004CC9C0, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CC9C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	add eax,8
	je Block11

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0x1177
	push ecx
	mov dword ptr [esp+0x44],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	push 0xE
	push 4
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block8

 Block6:
	lea edx,[esp+8]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	push 0xA7
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0xC]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block10:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5
}
}
// CUIUserList::SetScrollBar
__SUB_CLASS_THIS(004B7920, __thiscall, 40162,  CUIUserList, void, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB1C]
	push edi
	cmp eax,5
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block6
cmp EAX, 3
je Block4
cmp EAX, 4
je Block4
cmp EAX, 5
je Block5


 Block2:
	mov eax,dword ptr [esi+0xC64]
	mov edi,dword ptr [eax+0x9C]
	xor ebp,ebp
	lea ebx,[ebp+0x73]
	jmp Block7

 Block3:
	mov ebp,0x75
	lea ebx,[ebp-0x39]
	lea edi,[ebp+0x6C]
	jmp Block7

 Block4:
	mov ebp,0x69
	lea ebx,[ebp-5]
	lea edi,[ebp+0x50]
	jmp Block7

 Block5:
	mov ebp,0x1B
	lea ebx,[ebp+0x21]
	mov edi,0xE4
	jmp Block7

 Block6:
	xor ebp,ebp
	xor edi,edi
	mov ebx,0xFFFFFC18

 Block7:
	cmp dword ptr [esp+0x14],0
	mov ecx,dword ptr [esi+0xB18]
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push edi
	push ebx
	push 0xF3
	push 8
	push 1
	push 0x7D0
	push esi
	call eax
	jmp Block10

 Block9:
	push ebx
	push 0xF3
	call CCtrlWnd::Move
	mov ecx,dword ptr [esi+0xB18]
	push edi
	call CCtrlScrollBar::SetScrollBarSize

 Block10:
	mov ecx,dword ptr [esi+0xB18]
	mov dword ptr [ecx+0x34],0xEB
	mov eax,dword ptr [esi+0xBCC]
	lea ecx,[eax+eax*4]
	add ecx,ecx
	add ecx,ecx
	sub ecx,edi
	add ecx,ebp
	test ecx,ecx
	jle Block13

 Block11:
	cmp dword ptr [esi+0xB1C],1
	je Block13

 Block12:
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax+2]
	push ecx
	mov ecx,dword ptr [esi+0xB18]
	call CCtrlScrollBar::SetScrollRange
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4

 Block13:
	mov ecx,dword ptr [esi+0xB18]
	push 0
	call CCtrlScrollBar::SetScrollRange
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CWndAllianceGrade::CWndAllianceGrade
_SUB_EXCEPTION_HANDLER(4CE3D0)
__SUB_CLASS_THIS(004CE3D0, __thiscall, 40688,  CWndAllianceGrade, void, CUIUserList*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CE3D0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance],edi

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CWndAllianceGrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndAllianceGrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndAllianceGrade::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x94]
	push edx
	mov byte ptr [esp+0x2C],2
	mov dword ptr [esi+0x90],edi
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0xC0]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x17E
	push 0x108
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x3C],6
	mov dword ptr [esi+0xA8],edx
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CTabParty::PARTYITEM::~PARTYITEM
_SUB_EXCEPTION_HANDLER(4BA420)
__SUB_CLASS_THIS0(004BA420, __thiscall, 40305,  CTabParty::PARTYITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA420
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
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_
_SUB_EXCEPTION_HANDLER(4C1440)
__SUB(004C1440, __cdecl, 83710,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::GradeDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::GradeDescComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::GradeDescComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CUIUserList::OnMouseMove
_SUB_EXCEPTION_HANDLER(4BFF70)
__SUB_CLASS_THIS(004BFF70, __thiscall, 40166,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BFF70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x10],edi
	mov eax,dword ptr [esi+0xB18]
	mov dword ptr [esp+0x2C],ebx
	cmp eax,5
	ja Block7

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block8
cmp EAX, 2
je Block12
cmp EAX, 3
je Block9
cmp EAX, 4
je Block11
cmp EAX, 5
je Block10


 Block2:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC60]
	lea edx,[esp+0x40]
	push edx
	call CTabFriend::GetToolTipString
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x30],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],bl

 Block3:
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov edi,dword ptr [esp+0x10]
	cmp edi,ebx
	je Block7

 Block6:
	cmp byte ptr [edi],bl
	jne Block13

 Block7:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	jmp Block14

 Block8:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC64]
	lea edx,[esp+0x3C]
	push edx
	call CTabParty::GetToolTipString
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x30],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],bl
	jmp Block3

 Block9:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC68]
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::GetToolTipString
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x30],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],bl
	jmp Block3

 Block10:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC74]
	lea edx,[esp+0x20]
	push edx
	call CTabBlackList::GetToolTipString
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x30],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],bl
	jmp Block3

 Block11:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC6C]
	lea edx,[esp+0x24]
	push edx
	call CTabGuildAlliance::GetToolTipString
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x30],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],bl
	jmp Block3

 Block12:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi+0xC78]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x2C]
	push edx
	mov edx,dword ptr [esp+0x38]
	push edx
	call eax
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	jmp Block14

 Block13:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x24],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CUIUserList::SetTooltipStr

 Block14:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebx
	je Block16

 Block15:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8
}
}
// CTabBlackList::BLACKLISTITEM::~BLACKLISTITEM
__SUB_CLASS_THIS0(004BA720, __thiscall, 40740,  CTabBlackList::BLACKLISTITEM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CTabGuild::GetMemberIDFromPoint
__SUB_CLASS_THIS(004B9390, __thiscall, 40385,  CTabGuild, unsigned long, long, long, long) {
__asm {

 Block0:
	sub esp,0xC
	mov eax,dword ptr [esp+0x10]
	add eax,0xFFFFFFF6
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [esp+0x18]
	push ebx
	push ebp
	lea edx,[eax+eax*4-0x19]
	mov eax,dword ptr [esp+0x1C]
	push esi
	lea edx,[eax+edx*4]
	push edi
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x18],edx
	xor ebp,ebp
	lea esi,[ecx+0xC4]

 Block1:
	mov eax,dword ptr [esi]
	lea ebx,[eax+eax*4]
	lea ebx,[ebx*4-0x14]
	mov edi,ebx
	imul edi,0x74

 Block2:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	jne Block4

 Block3:
	xor ecx,ecx
	jmp Block5

 Block4:
	mov ecx,dword ptr [eax-4]

 Block5:
	mov eax,dword ptr [esi]
	lea eax,[eax+eax*4]
	add eax,eax
	add eax,eax
	cmp eax,ecx
	jl Block7

 Block6:
	mov eax,ecx

 Block7:
	cmp ebx,eax
	jge Block10

 Block8:
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	push ecx
	add eax,edi
	push edx
	add eax,0x18
	push eax
	call PtInRect
	test eax,eax
	jne Block12

 Block9:
	inc ebx
	add edi,0x74
	jmp Block2

 Block10:
	inc ebp
	add esi,0x7C
	cmp ebp,2
	jl Block1

 Block11:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 0xC

 Block12:
	mov eax,dword ptr [esp+0x10]
	imul ebp,0x7C
	imul ebx,0x74
	mov ecx,dword ptr [eax+ebp+0x11C]
	mov eax,dword ptr [ebx+ecx]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CTabGuildAlliance::GUILDITEM::GUILDITEM
_SUB_EXCEPTION_HANDLER(4C09E0)
__SUB_CLASS_THIS(004C09E0, __thiscall, 40552,  CTabGuildAlliance::GUILDITEM, void, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C09E0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	lea edx,[edi+4]
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[edi+8]
	lea ecx,[esi+8]
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],ecx
	mov edx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],edx
	mov eax,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],edx
	mov eax,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],ecx
	lea edx,[edi+0x28]
	lea ecx,[esi+0x28]
	push edx
	mov byte ptr [esp+0x1C],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],eax
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],ecx
	mov edx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],edx
	mov eax,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],eax
	mov ecx,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],ecx
	mov edx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],edx
	mov eax,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],eax
	mov ecx,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],ecx
	mov edx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],edx
	mov eax,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],eax
	mov ecx,dword ptr [edi+0x54]
	mov dword ptr [esi+0x54],ecx
	mov edx,dword ptr [edi+0x58]
	mov dword ptr [esi+0x58],edx
	mov eax,dword ptr [edi+0x5C]
	mov dword ptr [esi+0x5C],eax
	mov ecx,dword ptr [edi+0x60]
	mov dword ptr [esi+0x60],ecx
	mov edx,dword ptr [edi+0x64]
	mov dword ptr [esi+0x64],edx
	mov eax,dword ptr [edi+0x68]
	mov dword ptr [esi+0x68],eax
	mov ecx,dword ptr [edi+0x6C]
	mov dword ptr [esi+0x6C],ecx
	mov edx,dword ptr [edi+0x70]
	mov dword ptr [esi+0x70],edx
	mov eax,dword ptr [edi+0x74]
	mov dword ptr [esi+0x74],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIUserList::GetRTTI
__SUB_CLASS_THIS0(004BAA40, __thiscall, 40201,  CUIUserList, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIUserList::ms_RTTI_CUIUserList
	ret
}
}
// CTabBlackList::OnDelete
_SUB_EXCEPTION_HANDLER(4D09E0)
__SUB_CLASS_THIS0(004D09E0, __thiscall, 40720,  CTabBlackList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D09E0
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x18]
	lea edi,[esi+0x18]
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [esi+0x14]
	mov eax,dword ptr [eax+0xC5C]
	cmp eax,ecx
	jae Block12

 Block4:
	mov edx,dword ptr [edi]
	lea ecx,[eax+eax*4]
	lea eax,[edx+ecx*4]
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x14]
	mov eax,dword ptr [eax+0xC5C]
	mov edx,dword ptr [edi]
	lea ecx,[eax+eax*4]
	lea eax,[edx+ecx*4]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x20],0
	call ZArray<CTabBlackList::BLACKLISTITEM>::RemoveAt
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::DeleteBlackList
	mov edi,dword ptr [edi]
	test edi,edi
	je Block6

 Block5:
	mov edi,dword ptr [edi-4]

 Block6:
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [eax+0xBC8],edi
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx+0xBC8]
	inc eax
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ecx+0xBCC],eax
	mov ecx,dword ptr [esi+0x14]
	cmp dword ptr [ecx+0xBCC],0
	jne Block8

 Block7:
	mov edx,ecx
	mov dword ptr [edx+0xBCC],1

 Block8:
	mov ecx,dword ptr [esi+0x14]
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0x14]
	push 0
	call CUIUserList::SetScrollBar
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3864],0
	je Block10

 Block9:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x20],1
	call get_field
	mov ecx,eax
	mov byte ptr [esp+0x20],0
	call CField::DeleteBlackList

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CTabGuild::MakeGuildNoticeLayer
_SUB_EXCEPTION_HANDLER(4B8FD0)
__SUB_CLASS_THIS0(004B8FD0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B8FD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0xA4]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [edi+0xA4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,3
	mov dword ptr [esp+0x50],0
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0xF
	push 0xB0
	push 0x54
	push 0xE
	lea eax,[esp+0x28]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA4]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0xA4],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [edi+0xA4]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [edi+0x70]
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x50],2
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0xC]
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x50],3
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov esi,dword ptr [edi+0xA4]
	mov byte ptr [esp+0x50],4
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x50],3
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov ecx,dword ptr [edi+0x70]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x50],5
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0xA4]
	mov byte ptr [esp+0x50],6
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],5
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [edi+0xA4]
	test esi,esi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov dword ptr [edi+0xA8],0xFA
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x48
	ret
}
}
// CTabGuild::GUILDITEM::operator=
__SUB_CLASS_THIS(004BB450, __thiscall, 40410,  CTabGuild::GUILDITEM, CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	lea edx,[edi+8]
	push edx
	lea ecx,[esi+8]
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],eax
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],ecx
	mov edx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	lea ecx,[edi+0x28]
	push ecx
	lea ecx,[esi+0x28]
	mov dword ptr [esi+0x24],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],ecx
	mov edx,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],edx
	mov eax,dword ptr [edi+0x54]
	mov dword ptr [esi+0x54],eax
	mov ecx,dword ptr [edi+0x58]
	mov dword ptr [esi+0x58],ecx
	mov edx,dword ptr [edi+0x5C]
	mov dword ptr [esi+0x5C],edx
	mov eax,dword ptr [edi+0x60]
	mov dword ptr [esi+0x60],eax
	mov ecx,dword ptr [edi+0x64]
	mov dword ptr [esi+0x64],ecx
	mov edx,dword ptr [edi+0x68]
	mov dword ptr [esi+0x68],edx
	mov eax,dword ptr [edi+0x6C]
	mov dword ptr [esi+0x6C],eax
	mov ecx,dword ptr [edi+0x70]
	pop edi
	mov dword ptr [esi+0x70],ecx
	mov eax,esi
	pop esi
	ret 4
}
}
// CWndGuildGrade::LoadData
_SUB_EXCEPTION_HANDLER(4BC460)
__SUB_CLASS_THIS0(004BC460, __thiscall, 40659,  CWndGuildGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BC460
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
	mov dword ptr [esp+0x14],ecx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebx+0x37C8]
	test eax,eax
	je Block6

 Block1:
	xor esi,esi
	lea edi,[ecx+0x98]

 Block2:
	inc esi
	push esi
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildGradeName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	add edi,4
	cmp esi,5
	jl Block2

 Block5:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect

 Block6:
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
// CTabFriend::OnChat
_SUB_EXCEPTION_HANDLER(4C42B0)
__SUB_CLASS_THIS0(004C42B0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C42B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	test edx,edx
	je Block9

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block9

 Block2:
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x38],0
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x4C],0
	call CTabFriend::GetFriendItem
	cmp dword ptr [esp+0xC],0
	je Block8

 Block3:
	test eax,eax
	je Block5

 Block4:
	cmp eax,1
	jne Block8

 Block5:
	cmp dword ptr [TSingleton<CUIMessenger>::ms_pInstance],0
	jne Block8

 Block6:
	push 0
	call CUIMessenger::TryNew
	add esp,4
	test eax,eax
	je Block8

 Block7:
	push ecx
	lea edx,[esp+0x14]
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	call CUIMessenger::SendInviteMsg

 Block8:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block9:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x40
	ret
}
}
// CTabFriend::OnAdd
_SUB_EXCEPTION_HANDLER(4D8E50)
__SUB_CLASS_THIS(004D8E50, __thiscall, 40050,  CTabFriend, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D8E50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x50],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x4C],1
	cmp eax,ebx
	je Block20

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block20

 Block2:
	add eax,8
	cmp eax,ebx
	je Block20

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push ebx
	push ebx
	mov dword ptr [esi+0x90],ebx
	mov edi,1
	mov dword ptr [esi+0xA4],edi
	push ebx
	mov dword ptr [esi+0x94],edi
	push 0x3EA
	mov ecx,esi
	mov byte ptr [esp+0x5C],2
	mov dword ptr [esi+0x98],0x1968
	call CUtilDlg::SetUtilDlg_0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x58]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 0xC
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_Input
	push ebx
	push edi
	push ebx
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x50],3
	call CWvsContext::GetFriendGroups
	int 3// TODO: 	mov ebp,offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x40],ebx
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x4C],4
	xor edi,edi
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block9

 Block6:
	lea ebx,[ebx]

 Block7:
	mov ecx,dword ptr [esp+0x14]
	lea ebp,[ecx+edi*4]
	lea ecx,[esp+0x30]
	call ZList<ZXString<char>>::AddTail_
	push ebp
	mov ecx,eax
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	inc edi
	call ZArray<ZXString<char>>::GetCount
	cmp edi,eax
	jb Block7

 Block8:
	int 3// TODO: 	mov ebp,offset ZList<ZXString<char>>::`vftable'

 Block9:
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_COMBOBOX
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block17

 Block10:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CUtilDlg::GetComboBoxStr
	push 1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x58],5
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x58],6
	call CUtilDlg::GetInputResult
	push ebx
	push ebx
	mov ecx,eax
	mov byte ptr [esp+0x5C],7
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x58],8
	cmp esi,ebx
	je Block12

 Block11:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block13

 Block12:
	xor esi,esi

 Block13:
	mov ecx,esi
	mov byte ptr [esp+0x58],9
	call CField::SendSetFriendMsg
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],5
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],4
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x4C],3
	mov dword ptr [esp+0x30],ebp
	call ZList<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x4C],2
	call ZArray<ZXString<char>>::RemoveAll
	push ebx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x50],bl
	call ZRef<CUtilDlg>::_ReleaseRaw
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4

 Block20:
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	jmp Block5
}
}
// CTabParty::CreateButton
_SUB_EXCEPTION_HANDLER(4BAF70)
__SUB_CLASS_THIS0(004BAF70, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BAF70
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
	mov esi,ecx
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x898
	push offset _S_UIUIWINDOW2IMGUS__10
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block73

 Block1:
	add eax,8
	je Block73

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block4:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+8],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x899
	push offset _S_UIUIWINDOW2IMGUS__9
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],1
	test eax,eax
	je Block74

 Block9:
	add eax,8
	je Block74

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block12:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 0x89A
	push offset _S_UIUIWINDOW2IMGUS__8
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],2
	test eax,eax
	je Block75

 Block17:
	add eax,8
	je Block75

 Block18:
	lea edi,[eax-8]
	test edi,edi
	je Block20

 Block19:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block20:
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x89B
	push offset _S_UIUIWINDOW2IMGUS__7
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],3
	test eax,eax
	je Block76

 Block25:
	add eax,8
	je Block76

 Block26:
	lea edi,[eax-8]
	test edi,edi
	je Block28

 Block27:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block28:
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x89C
	push offset _S_UIUIWINDOW2IMGUS__6
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],4
	test eax,eax
	je Block77

 Block33:
	add eax,8
	je Block77

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block36:
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block40:
	push 0
	push 0
	push 0
	push 0x89D
	push offset _S_UIUIWINDOW2IMGUS__5
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],5
	test eax,eax
	je Block78

 Block41:
	add eax,8
	je Block78

 Block42:
	lea edi,[eax-8]
	test edi,edi
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block44:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x89E
	push offset _S_UIUIWINDOW2IMGUS__4
	lea eax,[esp+0x28]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],6
	test eax,eax
	je Block79

 Block49:
	add eax,8
	je Block79

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block52:
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block54:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block56:
	mov ecx,dword ptr [esi+0x4C]
	push 0
	push 0
	push 0
	push 0x89F
	push offset _S_UIUIWINDOW2IMGUS__3
	lea edx,[esp+0x28]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],7
	test eax,eax
	je Block80

 Block57:
	add eax,8
	je Block80

 Block58:
	lea edi,[eax-8]
	test edi,edi
	je Block60

 Block59:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block60:
	mov eax,dword ptr [esi+0x40]
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block62

 Block61:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block62:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],ebp
	je Block64

 Block63:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block64:
	push 0
	push 0
	push 0
	push 0x8A0
	push offset _S_UIUIWINDOW2IMGUS__2
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x4C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],8
	test eax,eax
	je Block81

 Block65:
	add eax,8
	je Block81

 Block66:
	lea edi,[eax-8]
	test edi,edi
	je Block68

 Block67:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block68:
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block70

 Block69:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block70:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],ebp
	je Block72

 Block71:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block72:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block73:
	xor edi,edi
	jmp Block4

 Block74:
	xor edi,edi
	jmp Block12

 Block75:
	xor edi,edi
	jmp Block20

 Block76:
	xor edi,edi
	jmp Block28

 Block77:
	xor edi,edi
	jmp Block36

 Block78:
	xor edi,edi
	jmp Block44

 Block79:
	xor edi,edi
	jmp Block52

 Block80:
	xor edi,edi
	jmp Block60

 Block81:
	xor edi,edi
	jmp Block68
}
}
// CTabGuildAlliance::GetMemberIDFromPoint
__SUB_CLASS_THIS(004B9840, __thiscall, 40529,  CTabGuildAlliance, unsigned long, long, long, long) {
__asm {

 Block0:
	sub esp,0xC
	mov eax,dword ptr [esp+0x10]
	add eax,0xFFFFFFF6
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [esp+0x18]
	push ebx
	push ebp
	lea edx,[eax+eax*4-0x19]
	mov eax,dword ptr [esp+0x1C]
	push esi
	lea edx,[eax+edx*4]
	push edi
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x18],edx
	xor ebp,ebp
	lea esi,[ecx+0xE0]

 Block1:
	mov eax,dword ptr [esi]
	lea ebx,[eax+eax*4-5]
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block2:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	jne Block4

 Block3:
	xor ecx,ecx
	jmp Block5

 Block4:
	mov ecx,dword ptr [eax-4]

 Block5:
	mov eax,dword ptr [esi]
	lea eax,[eax+eax*4]
	cmp eax,ecx
	jl Block7

 Block6:
	mov eax,ecx

 Block7:
	cmp ebx,eax
	jge Block10

 Block8:
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	push ecx
	add eax,edi
	push edx
	add eax,0x18
	push eax
	call PtInRect
	test eax,eax
	jne Block12

 Block9:
	inc ebx
	add edi,0x78
	jmp Block2

 Block10:
	inc ebp
	sub esi,0xFFFFFF80
	cmp ebp,5
	jl Block1

 Block11:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 0xC

 Block12:
	mov ecx,dword ptr [esp+0x10]
	pop edi
	shl ebp,7
	mov edx,dword ptr [ecx+ebp+0x138]
	mov eax,ebx
	shl eax,4
	pop esi
	sub eax,ebx
	mov eax,dword ptr [edx+eax*8]
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CTabGuildAlliance::OnChangeMaster
_SUB_EXCEPTION_HANDLER(4BA670)
__SUB_CLASS_THIS0(004BA670, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA670
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
	mov eax,dword ptr [esi+0x8C]
	mov eax,dword ptr [eax+0xC5C]
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x20B4]
	je Block3

 Block2:
	push 0xA7
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x8C]
	mov eax,dword ptr [edx+0xC5C]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CTabGuildAlliance::OnWithdraw
_SUB_EXCEPTION_HANDLER(4BBCC0)
__SUB_CLASS_THIS0(004BBCC0, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BBCC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1178
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block2

 Block1:
	push 0xA7
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CTabGuild::OnWhisper
_SUB_EXCEPTION_HANDLER(4C9A10)
__SUB_CLASS_THIS0(004C9A10, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block5

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block5

 Block2:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x38],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x94],esi
	call CTabGuild::GetGuildItem
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block4

 Block3:
	push esi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::StartChat

 Block4:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block5:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x84
	ret
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_
__SUB(004B8040, __cdecl, 83610,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::LevelAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::LevelAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::LevelAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_
_SUB_EXCEPTION_HANDLER(4BDAD0)
__SUB(004BDAD0, __cdecl, 83672,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::LevelAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BDAD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::LevelAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_
__SUB(004B8140, __cdecl, 83613,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::LevelDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::LevelDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::LevelDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CTabGuild::SectionData::SectionData
__SUB_CLASS_THIS0(004D46D0, __thiscall, 40445,  CTabGuild::SectionData, void) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,1
	xor edx,edx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+0x70],edx
	mov dword ptr [eax+0x74],edx
	mov dword ptr [eax+0x78],ecx
	ret
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_
__SUB(004B8340, __cdecl, 83619,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::GradeDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::GradeDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::GradeDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// Median_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
__SUB(004B7CC0, __cdecl, 83599,  const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, CTabGuild::NameDescComp&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov eax,dword ptr [ebp+4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	lea esi,[ebp+4]
	add edi,4
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	mov ebx,dword ptr [esp+0x1C]
	test eax,eax
	mov eax,dword ptr [ebx+4]
	push eax
	jl Block5

 Block1:
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block7

 Block2:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block4

 Block3:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	ret

 Block4:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block5:
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block4

 Block6:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,ebx
	jge Block8

 Block7:
	mov eax,ebp

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_
__SUB(004D8DE0, __cdecl, 83767,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::GradeDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::GradeDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CUIUserList::ToggleGuildInfo
_SUB_EXCEPTION_HANDLER(4D1B30)
__SUB_CLASS_THIS(004D1B30, __thiscall, 40162,  CUIUserList, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D1B30
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance]
	xor esi,esi
	cmp ecx,esi
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance]
	cmp eax,esi
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	cmp dword ptr [esp+0x24],esi
	je Block8

 Block4:
	push 0xD4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x1C],esi
	cmp ebp,esi
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	mov ebx,dword ptr [edi+0x24]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,ebx
	push eax
	push edi
	mov ecx,ebp
	call CWndGuildGrade::_ctor_0
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov dword ptr [edi+0xC74],eax
	mov dword ptr [edi+0xC54],1
	jmp Block9

 Block8:
	mov dword ptr [edi+0xC54],esi

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CTabFriend::OnAccontMoreInfoView
__SUB_CLASS_THIS0(004B7260, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x28
	call CWvsContext::UI_Open
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_
__SUB(004D9980, __cdecl, 83795,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::LevelDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuildAlliance::GradeDescComp::operator()
__SUB_CLASS_THIS(004B7620, __thiscall, 40585,  CTabGuildAlliance::GradeDescComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x14]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CTabGuild::OnPageNext
__SUB_CLASS_THIS(004B9ED0, __thiscall, 40379,  CTabGuild, void, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],eax
	push esi
	sete al
	mov esi,ecx
	imul eax,0x7C
	mov edx,dword ptr [eax+esi+0xC8]
	lea ecx,[eax+esi+0xAC]
	mov eax,dword ptr [ecx+0x18]
	inc eax
	cmp eax,edx
	jl Block2

 Block1:
	mov eax,edx

 Block2:
	mov dword ptr [ecx+0x18],eax
	mov ecx,dword ptr [esi+0x70]
	call CUIUserList::SetViewItem
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CWndGuildGrade::CWndGuildGrade
_SUB_EXCEPTION_HANDLER(4CD140)
__SUB_CLASS_THIS(004CD140, __thiscall, 40657,  CWndGuildGrade, void, CUIUserList*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CD140
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance],edi

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CWndGuildGrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndGuildGrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndGuildGrade::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x98]
	push edx
	mov byte ptr [esp+0x2C],2
	mov dword ptr [esi+0x90],edi
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x24]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x17E
	push 0x108
	push edx
	mov dword ptr [esi+0x94],ecx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],5
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CTabFriend::OnDelete
_SUB_EXCEPTION_HANDLER(4D47A0)
__SUB_CLASS_THIS0(004D47A0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D47A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x24],ebp
	mov eax,dword ptr [ebp+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	xor edi,edi
	cmp edx,edi
	jne Block46

 Block1:
	mov ecx,dword ptr [eax+0xC60]
	cmp ecx,edi
	je Block54

 Block2:
	cmp byte ptr [ecx],0
	je Block54

 Block3:
	cmp edx,edi
	jne Block46

 Block4:
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x20]
	push 0x189E
	push eax
	mov dword ptr [esp+0x78],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x7C]
	push eax
	add ecx,0xC60
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	cmp esi,edi
	je Block9

 Block7:
	push edi
	push edi
	push edi
	push edi
	lea ecx,[esp+0x30]
	push 0x1876
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x7C]
	mov ecx,dword ptr [edx+0xC60]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x8C],1
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov byte ptr [esp+0x70],0
	cmp eax,edi
	je Block44

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block44

 Block9:
	lea eax,[esp+0x1C]
	push 0x189E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea ecx,[esp+0x20]
	push 0x186F
	mov bl,2
	push ecx
	mov byte ptr [esp+0x78],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,dword ptr [eax]
	push edx
	mov edx,dword ptr [ecx+0xC60]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x80],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x70],4
	cmp eax,edi
	je Block32

 Block14:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,edi
	je Block32

 Block15:
	add eax,8
	cmp eax,edi
	je Block32

 Block16:
	lea esi,[eax-8]
	mov dword ptr [esp+0x34],esi
	cmp esi,edi
	je Block18

 Block17:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	lea edx,[esp+0x20]
	push 0x18C4
	mov dword ptr [esi+0xA8],1
	push edx
	mov byte ptr [esp+0x78],5
	mov dword ptr [esi+0xAC],0xAA9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x74],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],5
	cmp eax,edi
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	push 0x3E9
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,6
	jne Block43

 Block21:
	mov dword ptr [esp+0x18],edi
	xor ecx,ecx

 Block22:
	mov eax,dword ptr [ebp+0xA8]
	mov dword ptr [esp+0x20],ecx
	cmp eax,edi
	je Block43

 Block23:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [eax-4]
	jae Block43

 Block24:
	mov edx,dword ptr [ebp+0x7C]
	add edx,0xC60
	add ecx,eax
	push edx
	lea edi,[ecx+0x1C]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block42

 Block25:
	mov ecx,edi
	mov dword ptr [esp+0x1C],0
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block42

 Block26:
	xor ebp,ebp

 Block27:
	mov eax,dword ptr [edi]
	cmp dword ptr [eax+ebp],0
	lea ebx,[eax+ebp]
	je Block40

 Block28:
	mov eax,dword ptr [esi+0xEC]
	cmp dword ptr [eax+0x48],0
	je Block34

 Block29:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block33

 Block30:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block33

 Block31:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	push edx
	call CField::SendDeleteFriendMsg
	jmp Block39

 Block32:
	mov dword ptr [esp+0x34],edi
	mov esi,edi
	jmp Block18

 Block33:
	mov edx,dword ptr [ebx]
	xor ecx,ecx
	push edx
	call CField::SendDeleteFriendMsg
	jmp Block39

 Block34:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x189E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [edi]
	push ecx
	add eax,ebp
	mov ecx,esp
	add eax,4
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x80],7
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x7C],8
	test esi,esi
	je Block37

 Block35:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block37

 Block36:
	mov ecx,esi
	jmp Block38

 Block37:
	xor ecx,ecx

 Block38:
	mov byte ptr [esp+0x7C],5
	call CField::SendSetFriendMsg

 Block39:
	mov esi,dword ptr [esp+0x34]

 Block40:
	mov ebx,dword ptr [esp+0x1C]
	inc ebx
	mov ecx,edi
	mov dword ptr [esp+0x1C],ebx
	add ebp,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp ebx,eax
	jb Block27

 Block41:
	mov ebp,dword ptr [esp+0x24]

 Block42:
	mov ecx,dword ptr [esp+0x20]
	inc dword ptr [esp+0x18]
	add ecx,0x20
	xor edi,edi
	jmp Block22

 Block43:
	push edi
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x74],0
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,edi
	je Block54

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block46:
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x64],edi
	lea ecx,[esp+0x38]
	push ecx
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x78],9
	call CTabFriend::GetFriendItem
	cmp dword ptr [esp+0x38],edi
	je Block53

 Block47:
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x24]
	push 0x1871
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x78],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x7C],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+0x40],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block51

 Block50:
	mov ecx,dword ptr [esp+0x38]
	push ecx
	call get_field
	mov ecx,eax
	call CField::SendDeleteFriendMsg

 Block51:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],9
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block54:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret
}
}
// CWndGuildGrade::GetGradeIndexFromPoint
__SUB_CLASS_THIS(004B6FD0, __thiscall, 40665,  CWndGuildGrade, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	xor edi,edi
	mov esi,0x94

 Block1:
	lea eax,[esi+0x14]
	push eax
	push 0xFE
	push esi
	push 0xA
	lea ecx,[esp+0x20]
	push ecx
	call SetRect
	push ebp
	push ebx
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	jne Block4

 Block2:
	add esi,0x14
	inc edi
	cmp esi,0xF8
	jl Block1

 Block3:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	lea eax,[edi+1]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CTabFriend::OnButtonClicked
__SUB_CLASS_THIS(004D9410, __thiscall, 40049,  CTabFriend, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFF826
	push esi
	mov esi,ecx
	cmp eax,0xE
	ja Block17

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block10
cmp EAX, 2
je Block12
cmp EAX, 3
je Block13
cmp EAX, 4
je Block14
cmp EAX, 5
je Block15
cmp EAX, 6
je Block16
cmp EAX, 7
je Block3
cmp EAX, 8
je Block4
cmp EAX, 9
je Block6
cmp EAX, 10
je Block5
cmp EAX, 11
je Block8
cmp EAX, 12
je Block7
cmp EAX, 13
je Block17
cmp EAX, 14
je Block9


 Block2:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	mov ecx,esi
	call CTabFriend::OnAdd
	pop esi
	ret 4

 Block3:
	call CTabFriend::OnModify
	pop esi
	ret 4

 Block4:
	call CTabFriend::OnDelete
	pop esi
	ret 4

 Block5:
	call CTabFriend::OnWhisper
	pop esi
	ret 4

 Block6:
	call CTabFriend::OnChat
	pop esi
	ret 4

 Block7:
	call CTabFriend::OnPartyInvite
	pop esi
	ret 4

 Block8:
	call CTabFriend::OnSendMemo
	pop esi
	ret 4

 Block9:
	call CTabFriend::OnBlockFriend
	pop esi
	ret 4

 Block10:
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr

 Block11:
	mov ecx,esi
	call CTabFriend::OnGroupAdd
	pop esi
	ret 4

 Block12:
	call CTabFriend::OnGroupWhisper
	pop esi
	ret 4

 Block13:
	push 1
	call CTabFriend::OnToggleView
	pop esi
	ret 4

 Block14:
	push 0
	call CTabFriend::OnToggleView
	pop esi
	ret 4

 Block15:
	call CTabFriend::OnAccontMoreInfoView
	pop esi
	ret 4

 Block16:
	call CTabFriend::OnFindFriendView

 Block17:
	pop esi
	ret 4
}
}
// CTabGuild::SectionData::~SectionData
__SUB_CLASS_THIS0(004D46F0, __thiscall, 40448,  CTabGuild::SectionData, void) {
__asm {

 Block0:
	add ecx,0x70
	jmp  ZArray<CTabGuild::GUILDITEM>::RemoveAll
}
}
// CTabGuildAlliance::GradeAscComp::operator()
__SUB_CLASS_THIS(004B7560, __thiscall, 40573,  CTabGuildAlliance::GradeAscComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x14]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CWndGuildGrade::OnMouseButton
__SUB_CLASS_THIS(004B7660, __thiscall, 40662,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push edi
	mov edi,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push esi
	push eax
	lea esi,[edi-4]
	push ecx
	mov ecx,esi
	call CWndGuildGrade::GetGradeIndexFromPoint
	test eax,eax
	je Block3

 Block2:
	push 0
	mov ecx,esi
	mov dword ptr [edi+0x8C],eax
	call CWnd::InvalidateRect

 Block3:
	pop esi

 Block4:
	pop edi
	ret 0x10
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
__SUB(004B7D40, __cdecl, 83601,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::NameDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+4]
	add eax,esi
	push ecx
	lea ecx,[eax+4]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	mov esi,edi
	mov dword ptr [esp+0xC],edx
	imul esi,0x74

 Block7:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+esi+4]
	mov ecx,dword ptr [esp+0xC]
	push eax
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIUserList::OnButtonClicked
__SUB_CLASS_THIS(004DA370, __thiscall, 40164,  CUIUserList, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC64]
	push edi
	call CTabFriend::OnButtonClicked
	mov ecx,dword ptr [esi+0xC68]
	push edi
	call CTabParty::OnButtonClicked
	mov ecx,dword ptr [esi+0xC6C]
	push edi
	call CTabGuild::OnButtonClicked
	mov ecx,dword ptr [esi+0xC70]
	push edi
	call CTabGuildAlliance::OnButtonClicked
	mov ecx,dword ptr [esi+0xC78]
	push edi
	call CTabBlackList::OnButtonClicked
	mov ecx,dword ptr [esi+0xC7C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	push edi
	call edx
	cmp edi,0x3E8
	jne Block4

 Block1:
	mov ecx,dword ptr [TSingleton<CWndGuildBoard>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block2:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CWndGuildBoard>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
__SUB(004D8AD0, __cdecl, 83753,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::NameAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::NameAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabGuild::OnWithdraw
__SUB_CLASS_THIS0(004B7330, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	pop esi
	jmp  CField::SendWithdrawGuildMsg

 Block3:
	xor ecx,ecx
	pop esi
	jmp  CField::SendWithdrawGuildMsg
}
}
// CTabParty::~CTabParty
_SUB_EXCEPTION_HANDLER(4D4620)
__SUB_CLASS_THIS0(004D4620, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D4620
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabParty::`vftable'
	lea ecx,[esi+0x58]
	mov dword ptr [esp+0x14],2
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x14],1
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x14],0
	call ZArray<CTabParty::PARTYITEM>::RemoveAll
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 9
	push 8
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_
_SUB_EXCEPTION_HANDLER(4BE190)
__SUB(004BE190, __cdecl, 83684,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::JobAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::JobAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
__SUB(004D8750, __cdecl, 83737,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::NameAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::NameAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabFriend::Draw
_SUB_EXCEPTION_HANDLER(4C2CD0)
__SUB_CLASS_THIS(004C2CD0, __thiscall, 40047,  CTabFriend, void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C2CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x11C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x7C]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x124],2
	mov dword ptr [esp+0x98],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x7C]
	add eax,0xC80
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x124],3
	mov dword ptr [esp+0x74],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__61
	push ecx
	mov ecx,dword ptr [esp+0x13C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x13C]
	mov byte ptr [esp+0x134],4
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	xor ebp,ebp
	xor ebx,ebx
	xor edi,edi

 Block7:
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	je Block10

 Block8:
	cmp ebx,dword ptr [eax-4]
	jae Block10

 Block9:
	mov ecx,eax
	lea edx,[edi+ecx+0x1C]
	push edx
	mov ecx,esi
	call CTabFriend::GetNonRequestFriendCount
	add ebp,eax
	inc ebx
	add edi,0x20
	jmp Block7

 Block10:
	mov dword ptr [esp+0x6C],0
	mov eax,dword ptr [esi+0xAC]
	push eax
	push ebp
	lea ecx,[esp+0x74]
	push offset _S_DD
	push ecx
	mov byte ptr [esp+0x134],5
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ebp,dword ptr [esp+0x6C]
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,6
	push ebp
	mov byte ptr [esp+0x130],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x12C],7
	test edi,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,edi
	mov byte ptr [esp+0x12C],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x124],5
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call ebx
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x128],8
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push edi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,9
	push ebp
	mov byte ptr [esp+0x138],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x134],0xA
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,0xF2
	sub edx,dword ptr [esp+0x38]
	push 0x44
	push edx
	mov byte ptr [esp+0x13C],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x124],8
	cmp word ptr [esp+0x2C],di
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x124],5
	cmp word ptr [esp+0x5C],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esi+0xA4]
	mov ecx,dword ptr [esi+0x7C]
	sub eax,3
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [ecx+0xB18]
	mov edx,dword ptr [eax+0x38]
	xor eax,eax
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x48],edx
	mov dword ptr [esp+0x50],eax

 Block33:
	mov ecx,dword ptr [esi+0xA8]
	test ecx,ecx
	je Block206

 Block34:
	cmp eax,dword ptr [ecx-4]
	jae Block206

 Block35:
	push 0
	shl eax,5
	push 0
	add eax,ecx
	push 0
	lea ebx,[eax+0x1C]
	mov dword ptr [esp+0x30],eax
	add eax,4
	push 0
	push eax
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x3C],eax
	call SetRect
	mov ecx,ebx
	xor edi,edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block38

 Block36:
	xor ebp,ebp
	lea ecx,[ecx]

 Block37:
	mov edx,dword ptr [ebx]
	push 0
	push 0
	push 0
	push 0
	lea eax,[edx+ebp+0x10]
	push eax
	call SetRect
	mov ecx,ebx
	inc edi
	add ebp,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp edi,eax
	jb Block37

 Block38:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x48],ecx
	jg Block75

 Block39:
	mov eax,dword ptr [esp+0x48]
	add eax,7
	cmp ecx,eax
	jg Block75

 Block40:
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [esi+0xA4]
	mov edi,ecx
	sub edi,dword ptr [esp+0x48]
	imul edi,eax
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x2C]
	push edx
	push edi
	push 0
	push eax
	call SetRect
	mov ecx,3
	mov word ptr [esp+0xCC],cx
	mov dword ptr [esp+0xD4],0xFF
	mov ecx,dword ptr [esp+0x130]
	mov byte ptr [esp+0x124],0xB
	test ecx,ecx
	je Block13

 Block41:
	mov ebp,dword ptr [esp+0xCC]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0xE0]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0xE4]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0xE8]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esi+0x80]
	push eax
	mov eax,dword ptr [edx+0x80]
	push edi
	push 0
	push ecx
	mov dword ptr [esp+0x48],ecx
	call eax
	test eax,eax
	jge Block43

 Block42:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block43:
	cmp word ptr [esp+0xCC],8
	mov byte ptr [esp+0x124],5
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov dword ptr [esp+0x44],0
	mov ecx,dword ptr [esp+0x24]
	mov ebp,dword ptr [ecx]
	push ebx
	mov ecx,esi
	mov byte ptr [esp+0x128],0xC
	call CTabFriend::GetNonRequestFriendCount
	push eax
	push 1
	push ebx
	mov ecx,esi
	call CTabFriend::GetFriendCount
	push eax
	push ebp
	lea edx,[esp+0x50]
	push offset _S_SDD
	push edx
	call ZXString<char>::Format
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0x14
	lea eax,[esp+0x10C]
	push eax
	call ebx
	lea ecx,[esp+0x10C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block48:
	lea edx,[esp+0xFC]
	push edx
	mov byte ptr [esp+0x128],0xD
	call ebx
	lea eax,[esp+0xFC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block49:
	mov eax,dword ptr [esi+0x7C]
	mov eax,dword ptr [eax+0xC94]
	lea ecx,[esp+0x10C]
	push ecx
	lea edx,[esp+0x100]
	push edx
	mov edx,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x138],0xE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x140]
	mov byte ptr [esp+0x134],0xF
	test ecx,ecx
	je Block13

 Block50:
	lea eax,[edi+5]
	push eax
	push 0x13
	mov byte ptr [esp+0x13C],0xE
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x124],0xD
	cmp word ptr [esp+0xFC],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x104]
	xor ecx,ecx
	mov word ptr [esp+0xFC],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0xFC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x124],0xC
	cmp word ptr [esp+0x10C],bx
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x10C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov edx,dword ptr [esp+0x24]
	cmp dword ptr [edx+0x14],0
	lea eax,[esi+0x84]
	jne Block60

 Block59:
	lea eax,[esi+0x88]

 Block60:
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0x28],ebx
	test ebx,ebx
	je Block62

 Block61:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block62:
	mov byte ptr [esp+0x124],0x10
	test ebx,ebx
	je Block13

 Block63:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x54]
	push eax
	push ebx
	mov dword ptr [esp+0x5C],0
	call ecx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block65:
	mov ecx,dword ptr [esi+0xA0]
	sub ecx,dword ptr [esp+0x54]
	mov edx,3
	shr ecx,1
	mov word ptr [esp+0xDC],dx
	mov dword ptr [esp+0xE4],0xFF
	mov edx,dword ptr [esp+0x130]
	mov byte ptr [esp+0x124],0x11
	test edx,edx
	je Block13

 Block66:
	mov ebx,dword ptr [esp+0xDC]
	mov ebp,dword ptr [edx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0xF0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0xF4]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0xF8]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [esp+0x38]
	mov eax,dword ptr [ebp+0x80]
	push ebx
	add ecx,edi
	push ecx
	push 3
	push edx
	mov dword ptr [esp+0x3C],edx
	call eax
	test eax,eax
	jge Block68

 Block67:
	mov ecx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0xDC],8
	mov byte ptr [esp+0x124],0x10
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0x128],0xC
	call edx
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x124],5
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov ebx,dword ptr [esp+0x3C]

 Block75:
	mov eax,dword ptr [esp+0x24]
	inc dword ptr [esp+0x14]
	cmp dword ptr [eax+0x14],0
	jne Block205

 Block76:
	xor ebp,ebp
	xor edi,edi
	mov ecx,ebx
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x28],edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block185

 Block77:
	nop

 Block78:
	mov ecx,dword ptr [ebx]
	lea eax,[edi+edi*2]
	shl eax,4
	cmp byte ptr [ecx+eax+0x28],1
	lea edx,[ecx+eax]
	mov dword ptr [esp+0x44],eax
	je Block184

 Block79:
	cmp dword ptr [esi+0xB0],0
	je Block81

 Block80:
	push edx
	call is_offline
	add esp,4
	test al,al
	jne Block184

 Block81:
	mov eax,ebp
	and eax,0x80000001
	jns Block83

 Block82:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block83:
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [esp+0x70],eax
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x48],eax
	jg Block181

 Block84:
	mov eax,dword ptr [esp+0x48]
	add eax,7
	cmp dword ptr [esp+0x14],eax
	jg Block181

 Block85:
	mov ebx,dword ptr [esp+0x14]
	sub ebx,dword ptr [esp+0x48]
	mov eax,dword ptr [esi+0xA0]
	imul ebx,eax
	cmp dword ptr [esp+0x70],0
	mov dword ptr [esp+0x40],ebx
	je Block87

 Block86:
	mov ecx,1
	jmp Block88

 Block87:
	mov ecx,dword ptr [esp+0x58]
	add ecx,2

 Block88:
	add eax,ebx
	push eax
	mov eax,dword ptr [esp+0x5C]
	add eax,ecx
	push eax
	push ebx
	push ecx
	add edx,0x10
	push edx
	mov dword ptr [esp+0x38],ecx
	call SetRect
	mov eax,dword ptr [esi+0x7C]
	mov ebp,dword ptr [eax+0xC9C]
	add eax,0xC9C
	mov dword ptr [esp+0x18],ebp
	test ebp,ebp
	je Block90

 Block89:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block90:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x44]
	cmp dword ptr [ecx+edx+0x24],0
	lea eax,[ecx+edx]
	mov byte ptr [esp+0x124],0x12
	jne Block92

 Block91:
	cmp dword ptr [eax+0x20],0
	je Block97

 Block92:
	mov eax,dword ptr [esi+0x7C]
	add eax,0xC98
	mov eax,dword ptr [eax]
	cmp ebp,eax
	je Block103

 Block93:
	mov edi,ebp
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block95:
	test edi,edi
	je Block103

 Block96:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx
	jmp Block103

 Block97:
	push eax
	call is_offline
	add esp,4
	test al,al
	je Block103

 Block98:
	mov eax,dword ptr [esi+0x7C]
	add eax,0xCA0
	mov eax,dword ptr [eax]
	cmp ebp,eax
	je Block103

 Block99:
	mov edi,ebp
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	je Block101

 Block100:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block101:
	test edi,edi
	je Block103

 Block102:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block103:
	cmp dword ptr [esp+0x70],0
	je Block107

 Block104:
	push ebx
	push 0
	push offset _S_UIUIWINDOW2IMGUS__60
	push ecx
	mov ecx,dword ptr [esp+0x140]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x140]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block106:
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1

 Block107:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0x7C]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [eax+0xC5C]
	mov eax,dword ptr [esp+0x44]
	cmp ecx,dword ptr [eax+edx]
	jne Block116

 Block108:
	mov eax,dword ptr [esp+0x130]
	test eax,eax
	je Block13

 Block109:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF244768
	push ecx
	mov ecx,dword ptr [esp+0x60]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push ebx
	push ecx
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block111:
	mov eax,dword ptr [esi+0x7C]
	add eax,0xC9C
	mov eax,dword ptr [eax]
	cmp ebp,eax
	je Block113

 Block112:
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzFont>::_CompareWzFont
	neg eax
	sbb eax,eax
	inc eax
	test al,al
	je Block116

 Block113:
	mov eax,dword ptr [esp+0x74]
	cmp ebp,eax
	je Block116

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,ebp
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x1C],ebp
	call edx
	test edi,edi
	je Block116

 Block115:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block116:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x9C]
	push edx
	call edi
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block117:
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x128],0x13
	call edi
	lea edx,[esp+0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block118:
	mov edx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x44]
	lea eax,[esp+0x9C]
	push eax
	mov eax,dword ptr [edx]
	lea ecx,[esp+0xF0]
	push ecx
	push ebp
	push ecx
	add eax,edi
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x138],0x14
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x140]
	mov byte ptr [esp+0x134],0x15
	test ecx,ecx
	je Block13

 Block119:
	mov edx,dword ptr [esp+0x34]
	lea eax,[ebx+5]
	push eax
	add edx,0xE
	push edx
	mov byte ptr [esp+0x13C],0x14
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xEC],8
	mov byte ptr [esp+0x124],0x13
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0xEC],ax
	mov eax,dword ptr [esp+0xF4]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x124],0x12
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	cmp dword ptr [edx+edi+0x24],0
	lea eax,[edx+edi]
	jne Block129

 Block128:
	cmp dword ptr [eax+0x20],0
	je Block140

 Block129:
	mov eax,3
	mov word ptr [esp+0xAC],ax
	mov dword ptr [esp+0xB4],0xFF
	mov ecx,dword ptr [esi+0x8C]
	mov edi,ecx
	mov byte ptr [esp+0x124],0x16
	mov dword ptr [esp+0x4C],ecx
	test edi,edi
	je Block13

 Block130:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push edi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov edx,dword ptr [esp+0x130]
	test edx,edx
	je Block13

 Block133:
	mov ebp,dword ptr [esp+0xAC]
	mov eax,dword ptr [esi+0xA0]
	sub eax,dword ptr [esp+0x1C]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0xC0]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0xC4]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0xC8]
	shr eax,1
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x5C]
	add eax,ebx
	mov ebx,dword ptr [edx]
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	push eax
	mov eax,dword ptr [esp+0x3C]
	add eax,4
	push eax
	push edx
	mov edi,edx
	call ecx
	test eax,eax
	jge Block135

 Block134:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block135:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x124],0x12
	jne Block139

 Block136:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx

 Block137:
	test eax,eax
	je Block151

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block139:
	lea eax,[esp+0xAC]
	jmp Block150

 Block140:
	push eax
	call get_channel
	add esp,4
	test eax,eax
	jne Block152

 Block141:
	mov ecx,3
	mov word ptr [esp+0xBC],cx
	mov dword ptr [esp+0xC4],0xFF
	mov edx,dword ptr [esi+0x90]
	mov edi,edx
	mov byte ptr [esp+0x124],0x17
	mov dword ptr [esp+0x4C],edx
	test edi,edi
	je Block13

 Block142:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push edi
	call edx
	test eax,eax
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block144:
	mov edx,dword ptr [esp+0x130]
	test edx,edx
	je Block13

 Block145:
	mov ebp,dword ptr [esp+0xBC]
	mov eax,dword ptr [esi+0xA0]
	sub eax,dword ptr [esp+0x1C]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0xD0]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0xD4]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0xD8]
	shr eax,1
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x5C]
	add eax,ebx
	mov ebx,dword ptr [edx]
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	push eax
	mov eax,dword ptr [esp+0x3C]
	add eax,4
	push eax
	push edx
	mov edi,edx
	call ecx
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block147:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x124],0x12
	jne Block149

 Block148:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx
	jmp Block137

 Block149:
	lea eax,[esp+0xBC]

 Block150:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov ebp,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x40]

 Block152:
	mov edi,dword ptr [esi+0x94]
	test edi,edi
	je Block13

 Block153:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block155

 Block154:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block155:
	mov edi,dword ptr [esp+0x58]
	sub edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x44]
	sub edi,5
	cmp byte ptr [edx+eax+0x28],4
	jne Block167

 Block156:
	mov ecx,3
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],0xFF
	mov edx,dword ptr [esi+0x94]
	mov ebp,edx
	mov byte ptr [esp+0x124],0x18
	mov dword ptr [esp+0x4C],edx
	test ebp,ebp
	je Block13

 Block157:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block159:
	mov edx,dword ptr [esp+0x130]
	test edx,edx
	je Block13

 Block160:
	mov ebp,dword ptr [esp+0x5C]
	mov eax,dword ptr [esi+0xA0]
	sub eax,dword ptr [esp+0x1C]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x78]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x5C]
	shr eax,1
	push ecx
	add eax,ebx
	mov ebx,dword ptr [edx]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea ecx,[edi+eax]
	push ecx
	mov dword ptr [esp+0x3C],edx
	push edx
	mov edx,dword ptr [ebx+0x80]
	call edx
	test eax,eax
	jge Block162

 Block161:
	mov ecx,dword ptr [esp+0x20]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block162:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x124],0x12
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov ebx,dword ptr [esp+0x40]
	mov ebp,dword ptr [esp+0x18]

 Block167:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x44]
	cmp byte ptr [edx+eax+0x28],3
	jne Block179

 Block168:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFF
	mov edx,dword ptr [esi+0x98]
	mov ebp,edx
	mov byte ptr [esp+0x124],0x19
	mov dword ptr [esp+0x20],edx
	test ebp,ebp
	je Block13

 Block169:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block171

 Block170:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block171:
	mov edx,dword ptr [esp+0x130]
	test edx,edx
	je Block13

 Block172:
	mov ebp,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+0xA0]
	sub eax,dword ptr [esp+0x1C]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x30]
	shr eax,1
	push ecx
	add eax,ebx
	mov ebx,dword ptr [edx]
	mov ecx,dword ptr [ebx+0x80]
	push eax
	mov eax,dword ptr [esp+0x3C]
	add edi,eax
	push edi
	push edx
	mov dword ptr [esp+0x6C],edx
	call ecx
	test eax,eax
	jge Block174

 Block173:
	mov edx,dword ptr [esp+0x4C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block174:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x124],0x12
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov ebp,dword ptr [esp+0x18]

 Block179:
	mov byte ptr [esp+0x124],5
	test ebp,ebp
	je Block181

 Block180:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block181:
	cmp dword ptr [esp+0x70],0
	jne Block183

 Block182:
	inc dword ptr [esp+0x14]

 Block183:
	inc dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x54]
	mov ebx,dword ptr [esp+0x3C]

 Block184:
	inc edi
	mov ecx,ebx
	mov dword ptr [esp+0x28],edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp edi,eax
	jb Block78

 Block185:
	mov ecx,ebp
	and ecx,0x80000001
	jns Block187

 Block186:
	dec ecx
	or ecx,0xFFFFFFFE
	inc ecx

 Block187:
	jne Block204

 Block188:
	test ebp,ebp
	jne Block205

 Block189:
	mov eax,dword ptr [esp+0x48]
	cmp eax,dword ptr [esp+0x14]
	jg Block204

 Block190:
	lea ecx,[eax+7]
	cmp dword ptr [esp+0x14],ecx
	jg Block204

 Block191:
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x130]
	sub edi,eax
	imul edi,dword ptr [esi+0xA0]
	push edi
	push ebp
	push offset _S_UIUIWINDOW2IMGUS__60
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x140]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block193:
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push eax
	call ebx
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block194:
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x128],0x1A
	call ebx
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block11

 Block195:
	mov eax,dword ptr [esp+0x98]
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AC4
	push ecx
	mov byte ptr [esp+0x13C],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x140]
	mov byte ptr [esp+0x134],0x1C
	test ecx,ecx
	je Block13

 Block196:
	add edi,5
	push edi
	push 0xE
	mov byte ptr [esp+0x13C],0x1B
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x124],0x1A
	cmp word ptr [esp+0x78],di
	jne Block199

 Block197:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov byte ptr [esp+0x124],5
	cmp word ptr [esp+0x88],di
	jne Block203

 Block201:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x14]
	inc dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x50]
	mov edi,8
	jmp Block33

 Block203:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block204:
	inc dword ptr [esp+0x14]

 Block205:
	inc dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x50]
	mov edi,8
	jmp Block33

 Block206:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x78]
	push eax
	call ebx
	lea ecx,[esp+0x78]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x128],0x1D
	call ebx
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	push 0
	push 0
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x94]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x1E
	push offset _S_UIUIWINDOW2IMGUS__59
	mov byte ptr [esp+0x13C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x138],0x1F
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	lea eax,[esp+0xB0]
	mov byte ptr [esp+0x138],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x12C],0x20
	call Ztl_variant_t::GetUnknown
	mov dword ptr [esp+0x50],0
	test eax,eax
	je Block216

 Block213:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x50],ecx
	test eax,eax
	jge Block216

 Block214:
	cmp eax,0x80004002
	je Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	mov byte ptr [esp+0x124],0x22
	cmp word ptr [esp+0x9C],di
	jne Block219

 Block217:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov byte ptr [esp+0x124],0x23
	cmp word ptr [esp+0x88],di
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov byte ptr [esp+0x124],0x24
	cmp word ptr [esp+0x78],di
	jne Block227

 Block225:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block228:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x34],edx
	mov ecx,dword ptr [esp+0x130]
	mov byte ptr [esp+0x124],0x25
	test ecx,ecx
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x60]
	push eax
	push 0
	push 0
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block232

 Block231:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block232:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x124],0x24
	jne Block235

 Block233:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block236:
	mov eax,dword ptr [esp+0x14]
	sub eax,dword ptr [esp+0x48]
	mov esi,dword ptr [esi+0x9C]
	lea eax,[eax+eax*4]
	dec esi
	lea eax,[eax*4-1]
	cmp esi,eax
	jl Block238

 Block237:
	mov esi,eax

 Block238:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],edx
	mov ecx,dword ptr [esp+0x130]
	mov byte ptr [esp+0x124],0x26
	test ecx,ecx
	jne Block240

 Block239:
	push 0x80004003
	call _com_issue_error

 Block240:
	mov ebx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x60]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push esi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x80]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block242

 Block241:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block242:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x124],0x24
	jne Block245

 Block243:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov byte ptr [esp+0x124],5
	test ebx,ebx
	je Block248

 Block247:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block248:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x124],4
	test eax,eax
	je Block250

 Block249:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block250:
	mov eax,dword ptr [esp+0x74]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x128],3
	call eax
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x124],2
	test eax,eax
	je Block252

 Block251:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block252:
	mov eax,dword ptr [esp+0x12C]
	mov byte ptr [esp+0x124],1
	test eax,eax
	je Block254

 Block253:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block254:
	mov eax,dword ptr [esp+0x130]
	mov byte ptr [esp+0x124],0
	test eax,eax
	je Block256

 Block255:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block256:
	mov eax,dword ptr [esp+0x134]
	mov dword ptr [esp+0x124],0xFFFFFFFF
	test eax,eax
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block258:
	mov ecx,dword ptr [esp+0x11C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x114
	ret 0xC
}
}
// CWndGuildGrade::~CWndGuildGrade
_SUB_EXCEPTION_HANDLER(4CD290)
__SUB_CLASS_THIS0(004CD290, __thiscall, 40659,  CWndGuildGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CD290
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
	int 3// TODO: 	mov dword ptr [esi],offset CWndGuildGrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndGuildGrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndGuildGrade::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC0]
	mov dword ptr [esp+0x14],4
	call CLayoutMan::~CLayoutMan
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea edx,[esi+0x80]
	push edx
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CWndGuildGrade>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIUserList::OnMouseButton
__SUB_CLASS_THIS(004DC1D0, __thiscall, 40165,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block34

 Block1:
	mov eax,dword ptr [esi+0xC58]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0xB18]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	cmp eax,5
	ja Block31

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block20
cmp EAX, 2
je Block30
cmp EAX, 3
je Block21
cmp EAX, 4
je Block22
cmp EAX, 5
je Block29


 Block3:
	lea ecx,[esi+0xC5C]
	push offset _S_
	mov dword ptr [esi+0xC58],ebp
	call ZXString<char>::AssignCStr
	mov dword ptr [esp+0x10],ebp

 Block4:
	mov ecx,dword ptr [esi+0xC60]
	mov eax,dword ptr [ecx+0xA8]
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block19

 Block5:
	mov edx,dword ptr [esp+0x10]
	cmp edx,dword ptr [eax-4]
	jae Block19

 Block6:
	cmp dword ptr [esi+0xC58],0
	jne Block19

 Block7:
	mov eax,dword ptr [esi+0xC5C]
	lea ebx,[esi+0xC5C]
	test eax,eax
	je Block9

 Block8:
	cmp byte ptr [eax],0
	jne Block19

 Block9:
	mov eax,dword ptr [esp+0x30]
	mov edi,dword ptr [ecx+0xA8]
	add eax,0xFFFFFF8D
	push eax
	mov eax,dword ptr [esp+0x30]
	add eax,0xFFFFFFF6
	push eax
	add edi,ebp
	lea eax,[edi+4]
	push eax
	call PtInRect
	test eax,eax
	jne Block18

 Block10:
	cmp dword ptr [edi+0x14],eax
	jne Block17

 Block11:
	mov ecx,dword ptr [esi+0xC60]
	mov edx,dword ptr [ecx+0xA8]
	lea edi,[edx+ebp+0x1C]
	mov ecx,edi
	xor ebp,ebp
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block17

 Block12:
	xor ebx,ebx

 Block13:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [edi]
	add ecx,0xFFFFFF8D
	push ecx
	mov ecx,dword ptr [esp+0x30]
	add eax,ebx
	add ecx,0xFFFFFFF6
	push ecx
	add eax,0x10
	push eax
	call PtInRect
	test eax,eax
	jne Block16

 Block14:
	mov ecx,edi
	inc ebp
	add ebx,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp ebp,eax
	jb Block13

 Block15:
	mov ebp,dword ptr [esp+0x14]
	inc dword ptr [esp+0x10]
	add ebp,0x20
	jmp Block4

 Block16:
	mov ecx,dword ptr [edi]
	lea eax,[ebp+ebp*2]
	shl eax,4
	mov edx,dword ptr [eax+ecx]
	mov dword ptr [esi+0xC58],edx

 Block17:
	mov ebp,dword ptr [esp+0x14]
	inc dword ptr [esp+0x10]
	add ebp,0x20
	jmp Block4

 Block18:
	xor eax,eax
	cmp dword ptr [edi+0x14],eax
	push edi
	sete al
	mov ecx,ebx
	mov dword ptr [edi+0x14],eax
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+0x14]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SetFriendGroupFolded
	lea edi,[esi-4]
	mov ecx,edi
	mov dword ptr [esp+0x18],1
	call CUIUserList::SetFriendViewItem
	push 0
	mov ecx,edi
	call CUIUserList::SetScrollBar

 Block19:
	mov ecx,dword ptr [esi+0xC60]
	call CTabFriend::OnClick
	jmp Block31

 Block20:
	mov edx,dword ptr [esi+0xB14]
	mov eax,dword ptr [edx+0x38]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC64]
	call CTabParty::GetMemberIDFromPoint
	mov dword ptr [esi+0xC58],eax
	jmp Block31

 Block21:
	mov edx,dword ptr [esi+0xB14]
	mov eax,dword ptr [edx+0x38]
	mov edi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi+0xC68]
	push eax
	push edi
	push ebx
	call CTabGuild::GetMemberIDFromPoint
	mov dword ptr [esi+0xC58],eax
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [eax+0x38]
	push ecx
	mov ecx,dword ptr [esi+0xC68]
	push edi
	push ebx
	push 1
	call CTabGuild::OnListHeader
	mov edx,dword ptr [esi+0xB14]
	mov eax,dword ptr [edx+0x38]
	mov ecx,dword ptr [esi+0xC68]
	push eax
	push edi
	push ebx
	push 0
	call CTabGuild::OnListHeader
	jmp Block31

 Block22:
	mov ecx,dword ptr [esi+0xB14]
	mov eax,dword ptr [ecx+0x38]
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0xC6C]
	push eax
	mov eax,dword ptr [esp+0x30]
	push edx
	push eax
	call CTabGuildAlliance::GetMemberIDFromPoint
	mov dword ptr [esi+0xC58],eax
	xor edi,edi
	jmp Block24

 Block24:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x384C]
	cmp eax,ebp
	jne Block26

 Block25:
	xor eax,eax
	jmp Block27

 Block26:
	mov eax,dword ptr [eax-4]

 Block27:
	inc eax
	cmp edi,eax
	jge Block31

 Block28:
	mov edx,dword ptr [esi+0xB14]
	mov eax,dword ptr [edx+0x38]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC6C]
	push edx
	push edi
	call CTabGuildAlliance::OnListHeader
	inc edi
	jmp Block24

 Block29:
	mov eax,dword ptr [esi+0xB14]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xC74]
	push edx
	call CTabBlackList::GetMemberIDFromPoint
	mov dword ptr [esi+0xC58],eax
	jmp Block31

 Block30:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0xC78]
	push edx
	mov edx,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+0xC58],ebp
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	push 0x201
	call eax

 Block31:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [esi+0xC58],ecx
	jne Block33

 Block32:
	cmp dword ptr [esp+0x18],0
	je Block41

 Block33:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	jmp Block41

 Block34:
	cmp eax,0x203
	jne Block41

 Block35:
	mov eax,dword ptr [esi+0xB18]
	sub eax,0
	je Block40

 Block36:
	sub eax,1
	je Block39

 Block37:
	sub eax,2
	jne Block41

 Block38:
	mov ecx,dword ptr [esi+0xC68]
	call CTabGuild::OnChat
	jmp Block41

 Block39:
	mov ecx,dword ptr [esi+0xC64]
	call CTabParty::OnChat
	jmp Block41

 Block40:
	mov ecx,dword ptr [esi+0xC60]
	call CTabFriend::OnDblClick

 Block41:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	cmp dword ptr [esi+0xB18],2
	jne Block43

 Block42:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [esi+0xC78]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x1C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov ecx,esi
	call edx

 Block43:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CTabBlackList::CreateButton
_SUB_EXCEPTION_HANDLER(4BC650)
__SUB_CLASS_THIS0(004BC650, __thiscall, 40720,  CTabBlackList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BC650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0x14]
	push 0
	push 0
	push 0
	push 0x866
	push offset _S_UIUIWINDOW2IMGUS__34
	lea eax,[esp+0x24]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block17

 Block1:
	add eax,8
	je Block17

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+8],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esi+0x14]
	push 0
	push 0
	push 0
	push 0x867
	push offset _S_UIUIWINDOW2IMGUS__33
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block18

 Block9:
	add eax,8
	je Block18

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block12:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret

 Block17:
	xor edi,edi
	jmp Block4

 Block18:
	xor edi,edi
	jmp Block12
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_
_SUB_EXCEPTION_HANDLER(4C1B30)
__SUB(004C1B30, __cdecl, 83720,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::LevelAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::LevelAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::LevelAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_
__SUB(004B7F40, __cdecl, 83607,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::JobDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::JobDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::JobDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CTabGuildAlliance::OnMaxMinToggle
__SUB_CLASS_THIS(004B9F20, __thiscall, 40528,  CTabGuildAlliance, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	shl eax,7
	xor ecx,ecx
	cmp dword ptr [eax+esi+0xC8],ecx
	lea eax,[eax+esi+0xC8]
	sete cl
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esi+0x8C]
	call CUIUserList::SetAllianceViewItem
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CTabParty::OnCreateParty
__SUB_CLASS_THIS0(004B72D0, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	pop esi
	jmp  CField::SendCreateNewPartyMsg

 Block3:
	xor ecx,ecx
	pop esi
	jmp  CField::SendCreateNewPartyMsg
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_
__SUB(004B7E40, __cdecl, 83604,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::JobAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::JobAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::JobAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CTabParty::OnChat
_SUB_EXCEPTION_HANDLER(4BED80)
__SUB_CLASS_THIS0(004BED80, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BED80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x4C]
	mov edx,dword ptr [eax+0xC5C]
	test edx,edx
	je Block6

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block6

 Block2:
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x18],0
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x6C],0
	call CTabParty::GetPartyItem
	cmp dword ptr [TSingleton<CUIMessenger>::ms_pInstance],0
	jne Block5

 Block3:
	push 0
	call CUIMessenger::TryNew
	add esp,4
	test eax,eax
	je Block5

 Block4:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0xC],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	call CUIMessenger::SendInviteMsg

 Block5:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call CTabParty::PARTYITEM::~PARTYITEM

 Block6:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x60
	ret
}
}
// CTabFriend::OnCreate
_SUB_EXCEPTION_HANDLER(4C2210)
__SUB_CLASS_THIS0(004C2210, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C2210
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
	mov ebp,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x84],0
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,1
	push offset _S_UIUIWINDOW2IMGUS__58
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x80]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x18],si
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
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
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
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	call edi
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
	mov dword ptr [esp+0x84],4
	call edi
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
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOW2IMGUS__57
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x90]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x80],4
	cmp word ptr [esp+0x28],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[esp+0x18]
	push edx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x84],esi
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGUS__56
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xA
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x8C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x28],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea eax,[esp+0x18]
	push eax
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x84],0xC
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xD
	push offset _S_UIUIWINDOW2IMGUS__55
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xE
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x94]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x80],0xC
	cmp word ptr [esp+0x28],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x84],0x10
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_UIUIWINDOW2IMGUS__54
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x12
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x13
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x98]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x28],si
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	lea edx,[esp+0x18]
	push edx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	lea ecx,[esp+0x28]
	mov esi,0x14
	push ecx
	mov dword ptr [esp+0x84],esi
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x15
	push offset _S_UIUIWINDOW2IMGUS__53
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x16
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x17
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x84]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block114

 Block112:
	cmp eax,0x80004002
	je Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],bl
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov ebx,8
	mov byte ptr [esp+0x80],0x14
	cmp word ptr [esp+0x28],bx
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block125

 Block123:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	lea eax,[esp+0x48]
	push eax
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	lea edx,[esp+0x38]
	push edx
	mov dword ptr [esp+0x84],0x18
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	push 0
	push 0
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x19
	push offset _S_UIUIWINDOW2IMGUS__52
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x1A
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x1B
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x88]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block135

 Block133:
	cmp eax,0x80004002
	je Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	mov edi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],di
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov byte ptr [esp+0x80],0x18
	cmp word ptr [esp+0x38],di
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x48],di
	jne Block146

 Block144:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov dword ptr [ebp+0xA4],0xE6
	mov dword ptr [ebp+0xA0],esi
	mov dword ptr [ebp+0x9C],0xA0
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CTabGuildAlliance::JobDescComp::operator()
__SUB_CLASS_THIS(004B75A0, __thiscall, 40577,  CTabGuildAlliance::JobDescComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_
__SUB(004D9930, __cdecl, 83793,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::LevelAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabBlackList::OnButtonClicked
__SUB_CLASS_THIS(004D0B50, __thiscall, 40722,  CTabBlackList, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x866
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	call CTabBlackList::OnDelete
	ret 4

 Block3:
	call CTabBlackList::OnAdd

 Block4:
	ret 4
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_
_SUB_EXCEPTION_HANDLER(4C1F80)
__SUB(004C1F80, __cdecl, 83726,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::GradeDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1F80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::GradeDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::GradeDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_
__SUB(004B8BC0, __cdecl, 83644,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::GradeAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::GradeAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::GradeAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CWndGuildGrade::OnChangeGradeName
_SUB_EXCEPTION_HANDLER(4CDF80)
__SUB_CLASS_THIS0(004CDF80, __thiscall, 40659,  CWndGuildGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CDF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x20],ecx
	cmp dword ptr [ecx+0x37C8],ebx
	je Block54

 Block1:
	mov eax,dword ptr [ecx+0x20B4]
	mov ecx,dword ptr [ecx+0x37D4]
	cmp dword ptr [ecx],eax
	jne Block54

 Block2:
	mov ebp,dword ptr [edi+0x90]
	cmp ebp,ebx
	je Block54

 Block3:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x34],ebx
	cmp eax,ebx
	je Block11

 Block4:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebx
	je Block11

 Block5:
	add eax,8
	cmp eax,ebx
	je Block11

 Block6:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block8

 Block7:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push ebx
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xD04
	push eax
	mov dword ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebx
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	cmp ebp,4
	je Block12

 Block9:
	cmp ebp,5
	je Block12

 Block10:
	mov eax,4
	jmp Block13

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x28],esi
	jmp Block8

 Block12:
	xor eax,eax

 Block13:
	push ebx
	push ebx
	push 0xA
	push eax
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov dword ptr [esp+0x14],ebx
	mov bl,2
	mov ecx,esi
	mov byte ptr [esp+0x34],bl
	call CDialog::DoModal
	cmp eax,1
	jne Block50

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp ebp,4
	je Block22

 Block17:
	cmp ebp,5
	je Block22

 Block18:
	lea edx,[esp+0x14]
	push 1
	push edx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block43

 Block19:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x348
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block22:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block29

 Block23:
	cmp byte ptr [edi],0
	je Block29

 Block24:
	lea ecx,[esp+0x14]
	push 1
	push ecx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block28

 Block25:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x348
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block28:
	mov edi,dword ptr [esp+0x14]

 Block29:
	cmp ebp,4
	jne Block36

 Block30:
	test edi,edi
	je Block32

 Block31:
	cmp byte ptr [edi],0
	jne Block36

 Block32:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xA8
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block36

 Block33:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xD05
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block36:
	test edi,edi
	je Block38

 Block37:
	cmp byte ptr [edi],0
	jne Block42

 Block38:
	mov ecx,dword ptr [esp+0x20]
	push ebp
	call CWvsContext::IsGuildMemberExist
	test eax,eax
	je Block42

 Block39:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xD06
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block42:
	mov edi,dword ptr [esp+0x18]

 Block43:
	mov eax,dword ptr [edi+0x90]
	lea edx,[esp+0x14]
	push edx
	lea ecx,[edi+eax*4+0x94]
	call ZXString<char>::op_assign
	cmp ebp,5
	jne Block49

 Block44:
	add edi,0xA4
	mov ecx,edi
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block48

 Block45:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xA8
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block48

 Block46:
	lea ecx,[esp+0x20]
	push 0xCE2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov edi,dword ptr [esp+0x18]

 Block49:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect

 Block50:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block54:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CTabFriend::OnSendMemo
_SUB_EXCEPTION_HANDLER(4C4440)
__SUB_CLASS_THIS0(004C4440, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C4440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x7C]
	xor ebp,ebp
	cmp dword ptr [eax+0xC5C],ebp
	je Block10

 Block1:
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x4C],ebp
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x20]
	push edx
	push eax
	mov dword ptr [esp+0x60],ebp
	call CTabFriend::GetFriendItem
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],edx
	cmp eax,ebp
	je Block6

 Block2:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	mov dword ptr [esp+0x1C],ebp

 Block6:
	mov ecx,dword ptr [esp+0x14]
	push 0x4DAAD0
	push 5
	call CharacterData::FindCashItemSlotPosition_1
	mov esi,eax
	cmp esi,ebp
	jg Block8

 Block7:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x2E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block9

 Block8:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	push ebp
	push 0x4DAAD0
	push esi
	mov ecx,edi
	call CWvsContext::SendConsumeCashItemUseRequest

 Block9:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block10:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_
__SUB(004D88A0, __cdecl, 83743,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::JobDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::JobDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CUIUserList::OnMoveWnd
_SUB_EXCEPTION_HANDLER(4B99B0)
__SUB_CLASS_THIS(004B99B0, __thiscall, 40167,  CUIUserList, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B99B0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	cmp dword ptr [esi+0xC54],0
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0xC74]
	add eax,0x107
	push eax
	call CWnd::MoveWnd

 Block2:
	cmp dword ptr [esi+0xC58],0
	je Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	mov ebx,dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,0x107
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd

 Block4:
	cmp dword ptr [TSingleton<CWndGuildBoard>::ms_pInstance],0
	je Block11

 Block5:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x18],0
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],0
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	mov edi,dword ptr [esp+0x24]
	mov ebx,dword ptr [TSingleton<CWndGuildBoard>::ms_pInstance]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,edi
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_
__SUB(004D8D00, __cdecl, 83763,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::LevelDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::LevelDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
__SUB(004D95F0, __cdecl, 83769,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::NameAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuildAlliance::JobAscComp::operator()
__SUB_CLASS_THIS(004B74E0, __thiscall, 40565,  CTabGuildAlliance::JobAscComp, int32_t, const CTabGuildAlliance::GUILDITEM&, const CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CTabGuild::GradeAscComp::operator()
__SUB_CLASS_THIS(004B73E0, __thiscall, 40427,  CTabGuild::GradeAscComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x14]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_
__SUB(004B8780, __cdecl, 83632,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::JobAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::JobAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::JobAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CTabFriend::OnGroupWhisper
__SUB_CLASS_THIS0(004B7250, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	jmp  CUIStatusBar::ChangeGroupWhisperTarget
}
}
// CUIUserList::OnCreate
_SUB_EXCEPTION_HANDLER(4DB080)
__SUB_CLASS_THIS(004DB080, __thiscall, 40161,  CUIUserList, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DB080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x60],esp
	push 0x4E
	push offset _S_UIUIWINDOW2IMGUS__93
	xor ebx,ebx
	push ebx
	push 0x27
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x27
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [ebp+0x70]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push ebx
	push ebx
	push esi
	lea ecx,[esi+0xCA8]
	call CLayoutMan::Init
	push 0xB4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	je Block2

 Block1:
	push esi
	mov ecx,eax
	call CTabFriend::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push 0x5C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov dword ptr [esi+0xC64],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp-4],1
	cmp edi,ebx
	je Block5

 Block4:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 9
	push 8
	lea ecx,[edi+4]
	push ecx
	int 3// TODO: 	mov dword ptr [edi],offset CTabParty::`vftable'
	call __eh_vector_ctor_iterator
	mov dword ptr [edi+0x50],ebx
	mov dword ptr [edi+0x54],ebx
	mov dword ptr [edi+0x58],ebx
	mov dword ptr [edi+0x4C],esi
	jmp Block6

 Block5:
	xor edi,edi

 Block6:
	push 0x1A4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov dword ptr [esi+0xC68],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],2
	cmp eax,ebx
	je Block8

 Block7:
	push esi
	mov ecx,eax
	call CTabGuild::_ctor_0
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push 0x348
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov dword ptr [esi+0xC6C],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],3
	cmp eax,ebx
	je Block11

 Block10:
	push esi
	mov ecx,eax
	call CTabGuildAlliance::_ctor_0
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov dword ptr [esi+0xC70],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp-4],4
	cmp edi,ebx
	je Block14

 Block13:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	lea edx,[edi+4]
	push edx
	int 3// TODO: 	mov dword ptr [edi],offset CTabBlackList::`vftable'
	call __eh_vector_ctor_iterator
	mov dword ptr [edi+0x18],ebx
	mov dword ptr [edi+0x14],esi
	jmp Block15

 Block14:
	xor edi,edi

 Block15:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov dword ptr [esi+0xC78],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],5
	cmp eax,ebx
	je Block17

 Block16:
	push esi
	mov ecx,eax
	call TabExpedition::_ctor_0
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esi+0xC64]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp-4],edi
	mov dword ptr [esi+0xC7C],eax
	call CTabFriend::OnCreate
	mov ecx,dword ptr [esi+0xC6C]
	call CTabGuild::OnCreate
	mov ecx,dword ptr [esi+0xC70]
	call CTabGuildAlliance::OnCreate
	mov ecx,dword ptr [esi+0xC7C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	push ebx
	call edx
	mov dword ptr [esi+0xC54],ebx
	mov dword ptr [esi+0xC74],ebx
	mov dword ptr [esi+0xC58],ebx
	cmp dword ptr [esi+0xB1C],edi
	jne Block20

 Block19:
	mov eax,dword ptr [esi+0xAFC]
	mov dword ptr [esi+0xB1C],eax

 Block20:
	mov eax,dword ptr [esi+0xB1C]
	cmp eax,ebx
	jl Block22

 Block21:
	cmp eax,6
	jl Block23

 Block22:
	mov dword ptr [esi+0xAFC],ebx
	mov dword ptr [esi+0xB1C],ebx

 Block23:
	mov ecx,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xAFC],ecx
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x24],ebx
	mov dword ptr [ebp-0x20],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],6
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov dword ptr [ebp-4],edi
	cmp eax,ebx
	je Block34

 Block27:
	add eax,8
	cmp eax,ebx
	je Block34

 Block28:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block30

 Block29:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [esi+0xB10]
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [ebp+0x48],eax
	cmp eax,ebx
	je Block32

 Block31:
	push ebx
	lea ecx,[ebp+0x44]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0xB10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x24]
	push edx
	push 0x13
	push 0xFA
	push 0x19
	push 9
	push 8
	push 0x7D1
	push esi
	call eax
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x20]
	push ecx
	call edi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block33:
	push eax
	call _com_issue_error

 Block34:
	xor edi,edi
	jmp Block30

 Block35:
	lea eax,[ebp]
	push eax
	mov dword ptr [ebp-4],7
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push ebx
	push ebx
	lea edx,[ebp+0x20]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__92
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_RM],ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea ecx,[ebp-0x44]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xC
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xD
	jne Block49

 Block47:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xE
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea edx,[ebp-0x1C]
	push edx
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0xF
	call edi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	push ebx
	push ebx
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__91
	mov byte ptr [ebp-4],0x10
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x11
	cmp dword ptr [_D_G_RM],ebx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[ebp-0x34]
	mov byte ptr [ebp-4],0x10
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block63

 Block61:
	cmp eax,0x80004002
	je Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov edi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x34],di
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x10],di
	jne Block70

 Block68:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,ebx
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x1C],di
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov dword ptr [ebp+0x40],ebx
	lea ebx,[ebx]

 Block76:
	mov ebx,dword ptr [ebp+0x3C]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov edi,esp
	call __chkstk
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x4C],esp
	push 1
	push 0
	push 0
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x17
	test ebx,ebx
	je Block38

 Block77:
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block82

 Block78:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x30]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebx,eax
	xor eax,eax
	test ebx,ebx
	setl al
	dec eax
	and eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [edi]
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [edi],eax
	test ebx,ebx
	jge Block82

 Block81:
	cmp ebx,0x80004002
	jne Block99

 Block82:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x40]
	push 0
	push 0
	push 0xA
	push ecx
	push edx
	mov byte ptr [ebp-4],0x19
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	je Block38

 Block83:
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x4C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block88

 Block84:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [edi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x4C],ecx
	test eax,eax
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [edi],ecx
	test ebx,ebx
	jge Block88

 Block87:
	cmp ebx,0x80004002
	jne Block99

 Block88:
	mov ecx,dword ptr [esi+0xB10]
	mov byte ptr [ebp-4],0x1C
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x50],di
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x54],di
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,dword ptr [ebp+0x40]
	inc eax
	cmp eax,6
	mov dword ptr [ebp+0x40],eax
	jl Block76

 Block97:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block100

 Block98:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block101

 Block99:
	push ebx
	call _com_issue_error

 Block100:
	xor eax,eax

 Block101:
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block149

 Block102:
	add eax,8
	je Block149

 Block103:
	lea edi,[eax-8]
	test edi,edi
	je Block105

 Block104:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block105:
	mov eax,dword ptr [esi+0xB18]
	mov dword ptr [esi+0xB18],edi
	test eax,eax
	je Block109

 Block106:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block107:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block109

 Block108:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block109:
	push 1
	mov ecx,esi
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0xC64]
	call CTabFriend::CreateButton
	mov ecx,dword ptr [esi+0xC68]
	call CTabParty::CreateButton
	mov ecx,dword ptr [esi+0xC6C]
	call CTabGuild::CreateButton
	mov ecx,dword ptr [esi+0xC70]
	call CTabGuildAlliance::CreateButton
	mov ecx,dword ptr [esi+0xC78]
	call CTabBlackList::CreateButton
	lea eax,[ebp+0x60]
	push 0x5E
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC80]
	add esp,8
	cmp edi,eax
	je Block114

 Block110:
	mov dword ptr [esi+0xC80],eax
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	test edi,edi
	je Block114

 Block113:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block114:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block116

 Block115:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block116:
	lea ecx,[ebp+0x60]
	push 0x5F
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC84]
	add esp,8
	cmp edi,eax
	je Block121

 Block117:
	mov dword ptr [esi+0xC84],eax
	test eax,eax
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block119:
	test edi,edi
	je Block121

 Block120:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block121:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block123

 Block122:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block123:
	lea eax,[ebp+0x60]
	push 0x60
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC88]
	add esp,8
	cmp edi,eax
	je Block128

 Block124:
	mov dword ptr [esi+0xC88],eax
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block126:
	test edi,edi
	je Block128

 Block127:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block128:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block130

 Block129:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block130:
	mov eax,dword ptr [esi+0xC80]
	mov edi,dword ptr [esi+0xC94]
	cmp edi,eax
	je Block135

 Block131:
	mov dword ptr [esi+0xC94],eax
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block133:
	test edi,edi
	je Block135

 Block134:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block135:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0xC98]
	push edi
	push eax
	mov byte ptr [ebp-4],0x1E
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block137:
	lea eax,[ebp+0x60]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xC9C]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x1F
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block139:
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xCA0]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x20
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block141:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xCA4]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x21
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block143:
	lea eax,[ebp+0x60]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xC8C]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x22
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block145:
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xC90]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x23
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block147:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block148:
	push eax
	call _com_issue_error

 Block149:
	xor edi,edi
	jmp Block105

 Block150:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFD10000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x24
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x25
	test ecx,ecx
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x50]
	push edx
	call edi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF555555
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x26
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xC9C]
	mov byte ptr [ebp-4],0x27
	test ecx,ecx
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	lea edx,[ebp+0x50]
	push edx
	call edi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFCBCBCB
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x28
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xCA0]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	lea edx,[ebp+0x50]
	push edx
	call edi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF666666
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x2A
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xCA4]
	mov byte ptr [ebp-4],0x2B
	test ecx,ecx
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	lea edx,[ebp+0x50]
	push edx
	call edi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFB5B5B5
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x2C
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xC8C]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block184

 Block183:
	push 0x80004003
	call _com_issue_error

 Block184:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block187

 Block185:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	lea edx,[ebp+0x50]
	push edx
	call edi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF777777
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xC90]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block195

 Block193:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	mov edx,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esi+0xB10]
	push edx
	call CCtrlTab::SetTab
	mov ecx,esi
	call CUIUserList::SetButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x64]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_
__SUB(004D9890, __cdecl, 83789,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::JobAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuildAlliance::DeleteNoticeLayer
__SUB_CLASS_THIS0(004B8E20, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC0]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0xC0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUIUserList::OnTabChanged
__SUB_CLASS_THIS(004DC580, __thiscall, 40174,  CUIUserList, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xB1C],eax
	mov dword ptr [esi+0xAFC],eax
	cmp eax,5
	ja Block25

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block6
cmp EAX, 2
je Block19
cmp EAX, 3
je Block14
cmp EAX, 4
je Block16
cmp EAX, 5
je Block6


 Block2:
	cmp dword ptr [esi+0xC54],0
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push 0
	call edx

 Block4:
	cmp dword ptr [esi+0xC58],0
	je Block23

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	push 0
	mov ecx,esi
	call edx
	jmp Block23

 Block6:
	cmp dword ptr [esi+0xC54],0
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push 0
	call edx

 Block8:
	cmp dword ptr [esi+0xC58],0
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	push 0
	mov ecx,esi
	call edx

 Block10:
	mov eax,dword ptr [esi+0xC6C]
	mov ecx,dword ptr [eax+0xA4]
	add eax,0xA4
	test ecx,ecx
	je Block12

 Block11:
	mov dword ptr [eax],0
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block12:
	mov eax,dword ptr [esi+0xC70]
	mov ecx,dword ptr [eax+0xC0]
	add eax,0xC0
	test ecx,ecx
	je Block25

 Block13:
	mov dword ptr [eax],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block25

 Block14:
	cmp dword ptr [esi+0xC58],0
	je Block24

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	push 0
	call eax
	jmp Block24

 Block16:
	cmp dword ptr [esi+0xC54],0
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x3C]
	push 0
	call eax

 Block18:
	mov ecx,dword ptr [esi+0xC6C]
	call CTabGuild::DeleteGuildNoticeLayer
	jmp Block25

 Block19:
	cmp dword ptr [esi+0xC54],0
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x3C]
	push 0
	call eax

 Block21:
	cmp dword ptr [esi+0xC58],0
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	push 0
	mov ecx,esi
	call eax

 Block23:
	mov ecx,dword ptr [esi+0xC6C]
	call CTabGuild::DeleteGuildNoticeLayer

 Block24:
	mov ecx,dword ptr [esi+0xC70]
	call CTabGuildAlliance::DeleteNoticeLayer

 Block25:
	mov ecx,esi
	call CUIUserList::ResetInfo
	mov dword ptr [esi+0xC5C],0
	pop esi
	ret 4
}
}
// CWndAllianceGrade::OnButtonClicked
__SUB_CLASS_THIS(004D5500, __thiscall, 40694,  CWndAllianceGrade, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x85C
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	call CWndAllianceGrade::OnSaveGradeName
	ret 4

 Block3:
	call CWndAllianceGrade::OnChangeGradeName

 Block4:
	ret 4
}
}
// CTabParty::OnChangeBoss
_SUB_EXCEPTION_HANDLER(4BEE50)
__SUB_CLASS_THIS0(004BEE50, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BEE50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x4C]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	je Block9

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [esi+0x20B4]
	je Block9

 Block2:
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],ebx
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x18]
	push edx
	push eax
	mov dword ptr [esp+0x78],ebx
	call CTabParty::GetPartyItem
	mov dword ptr [esp+0xC],ebx
	lea ecx,[esp+0x10]
	push 0xFF6
	push ecx
	mov byte ptr [esp+0x78],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x7C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block6

 Block5:
	lea eax,[esp+0x1C]
	push eax
	call get_field
	mov ecx,eax
	call CField::SendChangePartyBossMsg

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call CTabParty::PARTYITEM::~PARTYITEM

 Block9:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x68
	ret
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_
_SUB_EXCEPTION_HANDLER(4BE2B0)
__SUB(004BE2B0, __cdecl, 83686,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::JobDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE2B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::JobDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_
_SUB_EXCEPTION_HANDLER(4BE610)
__SUB(004BE610, __cdecl, 83692,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::GradeAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE610
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::GradeAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_
__SUB(004D8910, __cdecl, 83745,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::LevelAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::LevelAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabParty::OnWithdraw
__SUB_CLASS_THIS0(004B7300, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	pop esi
	jmp  CField::SendWithdrawPartyMsg

 Block3:
	xor ecx,ecx
	pop esi
	jmp  CField::SendWithdrawPartyMsg
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_
__SUB(004B8890, __cdecl, 83635,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::JobDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::JobDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::JobDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// is_offline
__SUB(004B6F90, __cdecl, 83589,  bool, const CTabFriend::FRIENDITEM&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	cmp dword ptr [ecx+0x24],0
	jne Block8

 Block1:
	cmp dword ptr [ecx+0x20],0
	jne Block8

 Block2:
	mov al,byte ptr [ecx+0x28]
	test al,al
	je Block5

 Block3:
	cmp al,3
	je Block5

 Block4:
	cmp al,4
	jne Block6

 Block5:
	cmp dword ptr [ecx+8],0
	jl Block8

 Block6:
	cmp al,2
	je Block8

 Block7:
	xor eax,eax
	ret

 Block8:
	mov eax,1
	ret
}
}
// CUIUserList::CUIUserList
_SUB_EXCEPTION_HANDLER(4D0B70)
__SUB_CLASS_THIS(004D0B70, __thiscall, 40157,  CUIUserList, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D0B70
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 7
	push 0xF4
	push 5
	push 7
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIUserList>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIUserList>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserList::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 6
	push 8
	lea edx,[esi+0xB20]
	push edx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0xF
	push 8
	lea eax,[esi+0xB50]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC5C],edi
	mov dword ptr [esi+0xC60],edi
	mov dword ptr [esi+0xC80],edi
	mov dword ptr [esi+0xC84],edi
	mov dword ptr [esi+0xC88],edi
	mov dword ptr [esi+0xC8C],edi
	mov dword ptr [esi+0xC90],edi
	mov dword ptr [esi+0xC94],edi
	mov dword ptr [esi+0xC98],edi
	mov dword ptr [esi+0xC9C],edi
	mov dword ptr [esi+0xCA0],edi
	mov dword ptr [esi+0xCA4],edi
	mov dword ptr [esi+0xCA8],edi
	mov dword ptr [esi+0xCAC],edi
	mov dword ptr [esi+0xCB0],edi
	mov dword ptr [esi+0xCB4],edi
	mov dword ptr [esi+0xCB8],edi
	mov ecx,dword ptr [esp+0x20]
	push 0xA
	push 0x17E
	mov dword ptr [esi+0xB1C],ecx
	push 0x108
	mov ecx,esi
	mov byte ptr [esp+0x24],0x12
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CTabGuild::OnFindUser
_SUB_EXCEPTION_HANDLER(4BF5C0)
__SUB_CLASS_THIS0(004BF5C0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BF5C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	je Block9

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [esi+0x20B4]
	je Block9

 Block2:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x3C],ebx
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x14]
	push edx
	push eax
	mov dword ptr [esp+0x98],ebx
	call CTabGuild::GetGuildItem
	cmp dword ptr [esp+0x14],ebx
	je Block8

 Block3:
	cmp eax,ebx
	jne Block8

 Block4:
	call get_field
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x1C]
	mov esi,eax
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x10]
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push offset _S_S__1
	push edx
	mov byte ptr [esp+0x9C],2
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CField::SendChatMsgWhisper
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x90],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x90],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block9:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x88
	ret
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
__SUB(004B84C0, __cdecl, 83624,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::NameAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x94
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x90],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0x10]
	push esi
	push edi
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x10],edi

 Block1:
	cmp edi,dword ptr [ebp+0x10]
	jge Block6

 Block2:
	mov esi,edi
	shl esi,4
	sub esi,edi
	add esi,esi
	add esi,esi
	add esi,esi

 Block3:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+4]
	add eax,esi
	push ecx
	lea ecx,[eax+4]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block5

 Block4:
	inc edi
	add esi,0x78
	cmp edi,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	mov dword ptr [esp+0x10],edi

 Block6:
	dec ebx
	cmp dword ptr [ebp+0xC],ebx
	jge Block10

 Block7:
	mov edx,dword ptr [esp+0x18]
	mov esi,ebx
	shl esi,4
	sub esi,ebx
	add esi,esi
	add edx,4
	add esi,esi
	mov dword ptr [esp+0x1C],edx
	add esi,esi

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+ecx+4]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block10

 Block9:
	dec ebx
	sub esi,0x78
	cmp dword ptr [ebp+0xC],ebx
	jl Block8

 Block10:
	cmp edi,ebx
	jge Block12

 Block11:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+ecx*8]
	mov ecx,edi
	shl ecx,4
	sub ecx,edi
	inc dword ptr [esp+0x10]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x20]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x20]
	mov edi,edx
	rep movsd
	mov edi,dword ptr [esp+0x10]
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x9C]
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
_SUB_EXCEPTION_HANDLER(4C0C60)
__SUB(004C0C60, __cdecl, 83698,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::NameDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0C60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	mov ecx,dword ptr [eax+edx+4]
	add eax,edx
	push ecx
	lea ecx,[eax-0x70]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block10

 Block9:
	mov ecx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add ecx,ebx
	imul ecx,0x74
	lea edx,[edi+eax-0x74]
	push edx
	lea ecx,[ecx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov eax,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CWndGuildGrade::Draw
_SUB_EXCEPTION_HANDLER(4CD730)
__SUB_CLASS_THIS(004CD730, __thiscall, 40661,  CWndGuildGrade, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CD730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x58],ebx
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov eax,dword ptr [ebx+0x94]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [ebx+0x94]
	add eax,0xC80
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x4C],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x37C8]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block105

 Block5:
	mov ecx,dword ptr [ebx+0x84]
	add ecx,4
	test eax,eax
	je Block8

 Block6:
	mov eax,dword ptr [esi+0x20B4]
	mov edx,dword ptr [esi+0x37D4]
	cmp dword ptr [edx],eax
	jne Block8

 Block7:
	mov eax,1
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp dword ptr [esi+0x37C8],0
	mov eax,dword ptr [ebx+0x8C]
	lea ecx,[eax+4]
	je Block12

 Block10:
	mov eax,dword ptr [esi+0x20B4]
	mov edx,dword ptr [esi+0x37D4]
	cmp dword ptr [edx],eax
	jne Block12

 Block11:
	mov eax,1
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov edi,dword ptr [ebp+0x10]
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__84
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block15

 Block14:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block15:
	lea ecx,[ebx+0xC0]
	mov dword ptr [ebp+0x54],ecx
	call CLayoutMan::CopyToCanvas_1
	mov ebx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x44],ebx
	test ebx,ebx
	je Block17

 Block16:
	mov eax,ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	mov dword ptr [ebp+0x48],0
	mov esi,dword ptr [esi+0x37EA]
	push esi
	lea eax,[ebp+0x48]
	push offset _S_D__1
	push eax
	mov byte ptr [ebp-4],4
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp+0x14]
	push ecx
	call esi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],5
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],6
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov esi,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push esi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],7
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x48]
	push 0x4D
	lea ecx,[ebp+0x34]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],9
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzFont::CalcTextWidth
	test edi,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,0xF9
	sub ecx,eax
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x34],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],6
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp+0x34]
	push eax
	call esi

 Block31:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],5
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp+0x24]
	push edx
	call esi

 Block35:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],4
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[ebp+0x14]
	push ecx
	call esi

 Block39:
	push 0x80
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__83
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x64],esp
	push edi
	call eax
	mov ecx,dword ptr [ebp+0x54]
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [ebp+0x5C],0
	mov dword ptr [ebp+0x50],0x99
	jmp Block41

 Block41:
	cmp dword ptr [ebp+0x5C],4
	mov eax,offset _S_UIUIWINDOW2IMGUS__82
	je Block43

 Block42:
	mov eax,offset _S_UIUIWINDOW2IMGUS__81

 Block43:
	mov esi,dword ptr [ebp+0x50]
	add esi,0xFFFFFFFB
	push esi
	push 0xA
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x54],esp
	push edi
	call edx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,0xC0
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebp+0x58]
	inc eax
	mov dword ptr [ebp+0x54],eax
	cmp dword ptr [ecx+0x90],eax
	jne Block51

 Block44:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFF244768
	push 0x14
	push 0xF4
	push esi
	push 0xA
	push edi
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	cmp ebx,dword ptr [ebp+0x4C]
	je Block54

 Block47:
	mov esi,ebx
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x44],ebx
	test ebx,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block49:
	test esi,esi
	je Block54

 Block50:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block54

 Block51:
	cmp ebx,dword ptr [ebp+0x60]
	je Block54

 Block52:
	mov esi,ebx
	mov ebx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	mov dword ptr [ebp+0x44],ebx
	call eax
	test esi,esi
	je Block54

 Block53:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block55:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0xA
	call esi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block56:
	mov eax,0x20
	mov byte ptr [ebp-4],0xB
	call __chkstk
	mov eax,esp
	lea ecx,[ebp+0x24]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0xC
	push 0x1E
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xA
	jne Block59

 Block57:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],4
	jne Block63

 Block61:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block65:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0xD
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block66:
	mov esi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+esi*4+0x98]
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0xF
	push 0x46
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0xD
	jne Block69

 Block67:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],4
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block75:
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+esi*4+0xAC]
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x10
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	test ebx,ebx
	je Block24

 Block76:
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzFont::CalcTextWidth
	mov esi,0x56
	sub esi,eax
	shr esi,1
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],4
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ecx+eax*4+0x98]
	test eax,eax
	je Block82

 Block81:
	cmp byte ptr [eax],0
	jne Block87

 Block82:
	mov eax,dword ptr [ecx+0x94]
	add eax,0xC88
	mov eax,dword ptr [eax]
	cmp ebx,eax
	je Block87

 Block83:
	mov dword ptr [ebp+0x64],ebx
	mov ebx,eax
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block85:
	cmp dword ptr [ebp+0x64],0
	je Block87

 Block86:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block88:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x12
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block18

 Block89:
	mov eax,dword ptr [ebp+0x58]
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+ecx*4+0xAC]
	lea edx,[ebp-0x1C]
	push edx
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x50]
	push edx
	add esi,0xA2
	mov byte ptr [ebp-4],0x14
	push esi
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x12
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],4
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [ebp+0x54]
	add dword ptr [ebp+0x50],0x14
	cmp eax,5
	mov dword ptr [ebp+0x5C],eax
	jl Block41

 Block98:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov byte ptr [ebp-4],2
	test ebx,ebx
	je Block102

 Block101:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block102:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	jmp Block113

 Block105:
	mov esi,dword ptr [ebp+0x58]
	add esi,0x84
	mov edi,2
	lea ecx,[ecx]

 Block106:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	add esi,8
	sub edi,1
	jne Block106

 Block107:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	lea esp,[ebp-0x4C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CTabFriend::OnPartyInvite
_SUB_EXCEPTION_HANDLER(4C4390)
__SUB_CLASS_THIS0(004C4390, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C4390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	test edx,edx
	je Block8

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block8

 Block2:
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+0x34],0
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+8]
	push edx
	push eax
	mov dword ptr [esp+0x48],0
	call CTabFriend::GetFriendItem
	cmp dword ptr [esp+8],0
	je Block7

 Block3:
	test eax,eax
	je Block5

 Block4:
	cmp eax,1
	jne Block7

 Block5:
	call get_field
	test eax,eax
	je Block7

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,eax
	call CField::SendJoinPartyMsg

 Block7:
	lea ecx,[esp+8]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block8:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x3C
	ret
}
}
// CTabParty::PARTYITEM::operator=
__SUB_CLASS_THIS(004BAE00, __thiscall, 40306,  CTabParty::PARTYITEM, CTabParty::PARTYITEM&, const CTabParty::PARTYITEM&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+8]
	lea eax,[edi+0xC]
	push eax
	lea ecx,[esi+0xC]
	mov dword ptr [esi+8],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],ecx
	mov edx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],eax
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],ecx
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0x4C]
	pop edi
	mov dword ptr [esi+0x4C],ecx
	mov eax,esi
	pop esi
	ret 4
}
}
// CTabParty::OnKick
_SUB_EXCEPTION_HANDLER(4BEC00)
__SUB_CLASS_THIS0(004BEC00, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BEC00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x4C]
	mov ecx,dword ptr [eax+0xC5C]
	xor edi,edi
	cmp ecx,edi
	je Block5

 Block1:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp ecx,dword ptr [edx+0x20B4]
	je Block5

 Block2:
	mov dword ptr [esp+0x10],edi
	mov dword ptr [esp+0x18],edi
	mov edx,dword ptr [eax+0xC5C]
	lea ecx,[esp+0xC]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x6C],edi
	call CTabParty::GetPartyItem
	cmp eax,0xFFFFFFFF
	je Block4

 Block3:
	lea eax,[esp+0x10]
	push eax
	call get_field
	mov ecx,eax
	call CField::SendKickPartyMsg
	mov ecx,dword ptr [esi+0x4C]
	mov dword ptr [ecx+0xC5C],edi

 Block4:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call CTabParty::PARTYITEM::~PARTYITEM

 Block5:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x5C
	ret
}
}
// CUIUserList::ToggleAllianceGrade
_SUB_EXCEPTION_HANDLER(4D1C00)
__SUB_CLASS_THIS(004D1C00, __thiscall, 40162,  CUIUserList, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D1C00
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance]
	xor esi,esi
	cmp ecx,esi
	je Block3

 Block1:
	call CWnd::Destroy
	mov ecx,dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance]
	cmp ecx,esi
	je Block3

 Block2:
	mov eax,dword ptr [ecx+8]
	mov edx,dword ptr [eax]
	add ecx,8
	push 1
	call edx

 Block3:
	cmp dword ptr [esp+0x24],esi
	je Block7

 Block4:
	push 0xE8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x1C],esi
	cmp ebp,esi
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	mov ebx,dword ptr [edi+0x24]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,ebx
	push eax
	push edi
	mov ecx,ebp
	call CWndAllianceGrade::_ctor_0

 Block6:
	mov dword ptr [edi+0xC58],1
	jmp Block8

 Block7:
	mov dword ptr [edi+0xC58],esi

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CTabFriend::OnClick
_SUB_EXCEPTION_HANDLER(4D5520)
__SUB_CLASS_THIS0(004D5520, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D5520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0x7C]
	push offset _S_
	add ecx,0xB08
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esi+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	jne Block21

 Block1:
	mov ecx,dword ptr [eax+0xC60]
	cmp ecx,ebx
	je Block3

 Block2:
	cmp byte ptr [ecx],bl
	jne Block6

 Block3:
	add esi,0x40
	mov edi,8

 Block4:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	add esi,8
	sub edi,1
	jne Block4

 Block5:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret

 Block6:
	cmp edx,ebx
	jne Block21

 Block7:
	lea edi,[esi+0x40]
	mov ebp,8
	mov edi,edi

 Block8:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	add edi,8
	sub ebp,1
	jne Block8

 Block9:
	lea eax,[esp+0x18]
	push 0x189E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x7C]
	push eax
	add ecx,0xC60
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	neg edi
	sbb edi,edi
	inc edi
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	cmp edi,ebx
	je Block17

 Block12:
	mov dword ptr [esp+0x18],ebx
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x5C],ebx
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov dword ptr [eax],7
	call ZArray<long>::InsertBefore
	mov ebp,dword ptr [esp+0x18]
	mov dword ptr [eax],8
	xor edi,edi
	lea esp,[esp]

 Block13:
	cmp ebp,ebx
	je Block16

 Block14:
	cmp edi,dword ptr [ebp-4]
	jae Block16

 Block15:
	mov ecx,dword ptr [ebp+edi*4]
	mov eax,dword ptr [esi+ecx*8+8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	inc edi
	jmp Block13

 Block16:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZArray<long>::RemoveAll

 Block17:
	push 0x5A
	push offset _S_UIUIWINDOW2IMGUS__35
	push ebx
	push 0x2D
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2D
	lea ecx,[esp+0x18]
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esi+0x7C]
	push ecx
	add eax,0xC60
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [esp+0x60],1
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CTabFriend::IsGroupBlocked
	cmp eax,ebx
	je Block19

 Block18:
	push 0x5E
	push offset _S_UIUIWINDOW2IMGUS__90
	push ebx
	push 0x2F
	lea ecx,[esp+0x24]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2F
	lea ecx,[esp+0x18]
	call ZXString16::ReleaseBuffer

 Block19:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov ecx,dword ptr [esi+0x78]
	call CCtrlButton::SetButtonImage
	mov esi,dword ptr [esi+0x78]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 1
	call edx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block43

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret

 Block21:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x4C],ebx
	lea ecx,[esp+0x20]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x60],2
	call CTabFriend::GetFriendItem
	cmp eax,ebx
	jl Block42

 Block22:
	lea edi,[esi+0x40]
	mov ebp,8
	lea ebx,[ebx]

 Block23:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	add edi,8
	sub ebp,1
	jne Block23

 Block24:
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x5C],3
	call is_offline
	add esp,4
	test al,al
	je Block26

 Block25:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov dword ptr [eax],9
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov dword ptr [eax],0xA
	call ZArray<long>::InsertBefore
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [eax],0xC

 Block26:
	push 0x5A
	push offset _S_UIUIWINDOW2IMGUS__35
	push ebx
	push 0x2D
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2D
	lea ecx,[esp+0x1C]
	call ZXString16::ReleaseBuffer
	mov byte ptr [esp+0x58],4
	cmp dword ptr [esp+0x44],ebx
	jne Block28

 Block27:
	cmp dword ptr [esp+0x40],ebx
	je Block29

 Block28:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<long>::InsertBefore
	push offset _S_UIUIWINDOW2IMGUS__90
	lea ecx,[esp+0x1C]
	mov dword ptr [eax],0xB
	call ZXString16::AssignCStr
	mov ebp,dword ptr [esp+0x14]

 Block29:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov ecx,dword ptr [esi+0x78]
	call CCtrlButton::SetButtonImage
	xor edi,edi

 Block30:
	cmp ebp,ebx
	je Block33

 Block31:
	cmp edi,dword ptr [ebp-4]
	jae Block33

 Block32:
	mov eax,dword ptr [ebp+edi*4]
	mov eax,dword ptr [esi+eax*8+8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	inc edi
	jmp Block30

 Block33:
	lea ecx,[esp+0x20]
	push ecx
	call is_offline
	add esp,4
	test al,al
	jne Block39

 Block34:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebx
	je Block37

 Block35:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block37

 Block36:
	mov ecx,esi
	jmp Block38

 Block37:
	xor ecx,ecx

 Block38:
	push 1
	lea edx,[esp+0x28]
	push edx
	call CField::SendLocationWhisper

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],3
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x58],2
	call ZArray<long>::RemoveAll

 Block42:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block43:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CTabGuildAlliance::LoadData
_SUB_EXCEPTION_HANDLER(4DAA00)
__SUB_CLASS_THIS0(004DAA00, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DAA00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x138
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x134],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	lea esi,[ecx+0xE4]
	mov edi,5
	xor ebx,ebx
	lea esp,[esp]

 Block1:
	lea ecx,[esi+0x54]
	mov dword ptr [esi-4],1
	mov dword ptr [esi],1
	call ZArray<CTabGuildAlliance::GUILDITEM>::RemoveAll
	mov dword ptr [esi+0x58],ebx
	sub esi,0xFFFFFF80
	sub edi,1
	jne Block1

 Block2:
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x24],ebp
	cmp dword ptr [ebp+0x37EE],ebx
	jne Block4

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x8C]
	mov dword ptr [ecx+0xBC8],ebx
	mov edx,dword ptr [eax+0x8C]
	mov dword ptr [edx+0xBCC],ebx
	jmp Block65

 Block4:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWvsContext::GetAllianceName
	mov edi,dword ptr [esp+0x18]
	push eax
	lea ecx,[edi+0x90]
	mov dword ptr [esp+0x158],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x154],esi
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWvsContext::GetAllianceNotice
	push eax
	lea ecx,[edi+0xBC]
	mov dword ptr [esp+0x158],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x154],esi
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,edi
	call CTabGuildAlliance::MakeNoticeLayer
	xor esi,esi
	add edi,0x94

 Block9:
	inc esi
	push esi
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	call CWvsContext::GetAllianceGradeName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x158],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x154],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	add edi,4
	cmp esi,5
	jl Block9

 Block12:
	mov ecx,ebp
	xor edi,edi
	call CWvsContext::GetGuildMemberNum
	test eax,eax
	jle Block32

 Block13:
	lea ebx,[ebx]

 Block14:
	lea eax,[esp+0x120]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov ecx,ebp
	call CWvsContext::GetGuildMemberDataByIdx
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block31

 Block15:
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x120]
	mov dword ptr [esp+0x154],3
	lea edx,[eax+1]

 Block16:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block16

 Block17:
	sub eax,edx
	mov esi,eax
	push esi
	lea edx,[esp+0x124]
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x44]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x12D]
	mov dword ptr [esp+0x3C],eax
	cmp eax,0xFFFFFFFF
	jne Block19

 Block18:
	push ebx
	push 2
	lea ecx,[esp+0x40]
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S___16]
	mov word ptr [eax],cx
	push 2
	jmp Block25

 Block19:
	push eax
	call get_job_name
	add esp,4
	cmp eax,ebx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block26

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0x38],ebx
	jmp Block26

 Block22:
	mov ecx,eax
	lea esi,[ecx+1]
	mov edi,edi

 Block23:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block23

 Block24:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x48]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi

 Block25:
	lea ecx,[esp+0x3C]
	call ZXString<char>::ReleaseBuffer

 Block26:
	mov edx,dword ptr [esp+0x131]
	mov ecx,dword ptr [esp+0x141]
	mov eax,dword ptr [esp+0x135]
	mov dword ptr [esp+0x40],edx
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x4C],eax
	call CWvsContext::GetAllianceGradeName
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x158],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x154],3
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x141]
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0xA0],ebx
	mov dword ptr [esp+0xA4],eax
	cmp dword ptr [esp+0x139],ebx
	je Block30

 Block29:
	lea ecx,[esp+0x30]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0x138]
	call ZArray<CTabGuildAlliance::GUILDITEM>::InsertBefore
	mov ecx,eax
	call CTabGuildAlliance::GUILDITEM::operator=

 Block30:
	inc dword ptr [esi+0x13C]
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x154],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM

 Block31:
	mov ecx,ebp
	inc edi
	call CWvsContext::GetGuildMemberNum
	cmp edi,eax
	jl Block14

 Block32:
	mov ecx,ebp
	mov dword ptr [esp+0x14],ebx
	call CWvsContext::GetAllianceMemberNum
	test eax,eax
	jle Block59

 Block33:
	mov edi,dword ptr [esp+0x18]
	add edi,0x1BC
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x28],edi
	jmp Block36

 Block35:
	mov ebp,dword ptr [esp+0x24]

 Block36:
	mov esi,dword ptr [ebp+0x384C]
	add esi,dword ptr [esp+0x20]
	xor ecx,ecx
	xor ebp,ebp

 Block37:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x1C],ecx
	cmp eax,ebx
	je Block58

 Block38:
	cmp ecx,dword ptr [eax-4]
	jae Block58

 Block39:
	mov edx,dword ptr [esi+0xC]
	cmp dword ptr [edx+ecx*4],ebx
	lea eax,[edx+ecx*4]
	je Block57

 Block40:
	mov dword ptr [esp+0xAC],ebx
	mov dword ptr [esp+0xB0],ebx
	mov dword ptr [esp+0xD0],ebx
	mov ecx,dword ptr [esi+0x10]
	add ecx,ebp
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x154],5
	mov dword ptr [esp+0xA8],eax
	je Block44

 Block41:
	mov eax,ecx
	lea edi,[eax+1]
	mov edi,edi

 Block42:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block42

 Block43:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push ebx
	push edi
	lea ecx,[esp+0xBC]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0xB0]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x28]

 Block44:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx+ebp+0xD]
	lea eax,[ecx+ebp+0xD]
	mov dword ptr [esp+0xB4],edx
	cmp dword ptr [eax],0xFFFFFFFF
	jne Block46

 Block45:
	push ebx
	push 2
	lea ecx,[esp+0xB8]
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S___16]
	mov word ptr [eax],cx
	push 2
	lea ecx,[esp+0xB4]
	call ZXString<char>::ReleaseBuffer
	jmp Block52

 Block46:
	mov eax,ecx
	mov edx,dword ptr [eax+ebp+0xD]
	add eax,ebp
	push edx
	call get_job_name
	add esp,4
	cmp eax,ebx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebx
	je Block52

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0xB0],ebx
	jmp Block52

 Block49:
	mov ecx,eax
	lea edi,[ecx+1]

 Block50:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block50

 Block51:
	sub ecx,edi
	mov edi,ecx
	push edi
	push eax
	push ebx
	push edi
	lea ecx,[esp+0xC0]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0xB4]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x28]

 Block52:
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax+ebp+0x11]
	add eax,ebp
	mov dword ptr [esp+0xB8],ecx
	mov edx,dword ptr [eax+0x15]
	mov dword ptr [esp+0xBC],edx
	mov eax,dword ptr [eax+0x21]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CWvsContext::GetAllianceGradeName
	push eax
	lea ecx,[esp+0xD4]
	mov byte ptr [esp+0x158],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x154],5
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov edx,dword ptr [esi+0x10]
	lea eax,[edx+ebp]
	mov dword ptr [esp+0x118],ebx
	mov ecx,dword ptr [eax+0x21]
	mov dword ptr [esp+0x11C],ecx
	cmp dword ptr [eax+0x19],ebx
	je Block56

 Block55:
	lea edx,[esp+0xA8]
	push edx
	push 0xFFFFFFFF
	lea ecx,[edi-4]
	call ZArray<CTabGuildAlliance::GUILDITEM>::InsertBefore
	mov ecx,eax
	call CTabGuildAlliance::GUILDITEM::operator=

 Block56:
	inc dword ptr [edi]
	lea ecx,[esp+0xA8]
	mov dword ptr [esp+0x154],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x1C]

 Block57:
	inc ecx
	add ebp,0x25
	jmp Block37

 Block58:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x24]
	add dword ptr [esp+0x20],0x4A
	inc esi
	sub edi,0xFFFFFF80
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x28],edi
	call CWvsContext::GetAllianceMemberNum
	cmp esi,eax
	jl Block35

 Block59:
	mov ebp,dword ptr [esp+0x18]
	mov eax,dword ptr [ebp+0x8C]
	mov dword ptr [eax+0xBC8],ebx
	lea esi,[ebp+0x138]
	mov edi,5

 Block60:
	lea ecx,[esi-0x70]
	call CTabGuildAlliance::SectionData::Sort
	mov eax,dword ptr [esi]
	cmp eax,ebx
	jne Block62

 Block61:
	xor ecx,ecx
	jmp Block63

 Block62:
	mov ecx,dword ptr [eax-4]

 Block63:
	mov eax,dword ptr [ebp+0x8C]
	add dword ptr [eax+0xBC8],ecx
	sub esi,0xFFFFFF80
	sub edi,1
	jne Block60

 Block64:
	mov ecx,dword ptr [ebp+0x8C]
	call CUIUserList::SetAllianceViewItem

 Block65:
	mov ecx,dword ptr [esp+0x14C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x134]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x144
	ret
}
}
// CTabGuild::JobAscComp::operator()
__SUB_CLASS_THIS(004B7360, __thiscall, 40419,  CTabGuild::JobAscComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jge Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CTabGuildAlliance::OnKick
_SUB_EXCEPTION_HANDLER(4BF710)
__SUB_CLASS_THIS0(004BF710, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BF710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x24],ebx
	mov eax,dword ptr [ebx+0x8C]
	mov eax,dword ptr [eax+0xC5C]
	xor edi,edi
	cmp eax,edi
	je Block25

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x20B4]
	je Block25

 Block2:
	push edi
	push offset _S_
	push edi
	push edi
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x384C]
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x28],ecx
	cmp eax,edi
	jne Block4

 Block3:
	mov dword ptr [esp+0x18],edi
	jmp Block5

 Block4:
	mov edx,dword ptr [eax-4]
	mov dword ptr [esp+0x18],edx

 Block5:
	cmp dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x1C],edi
	jle Block17

 Block6:
	mov esi,eax
	jmp Block8

 Block7:
	mov ebx,dword ptr [esp+0x24]
	xor edi,edi

 Block8:
	mov ecx,esi
	call GUILDDATA::GetCount
	test eax,eax
	jle Block14

 Block9:
	mov eax,dword ptr [ebx+0x8C]
	mov ebx,dword ptr [eax+0xC5C]
	mov ebp,dword ptr [esi+0xC]

 Block10:
	cmp dword ptr [ebp],ebx
	je Block13

 Block11:
	mov ecx,esi
	inc edi
	add ebp,4
	call GUILDDATA::GetCount
	cmp edi,eax
	jl Block10

 Block12:
	jmp Block14

 Block13:
	test edi,edi
	jge Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	add esi,0x4A
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x1C],eax
	jl Block7

 Block15:
	jmp Block17

 Block16:
	lea ecx,[esi+4]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x20],edx

 Block17:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x24]
	push 0x1179
	push eax
	mov byte ptr [esp+0x4C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x50],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block21

 Block20:
	push 0xA7
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],3
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx+0x37EE]
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],1
	call ZArray<unsigned char>::RemoveAll

 Block21:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test esi,esi
	je Block25

 Block24:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_
__SUB(004D8D70, __cdecl, 83765,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::GradeAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::GradeAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabGuildAlliance::GetGuildItem
__SUB_CLASS_THIS(004BF950, __thiscall, 40532,  CTabGuildAlliance, long, unsigned long, CTabGuildAlliance::GUILDITEM&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push ebp
	push esi
	push edi
	push 0x78
	push 0
	push eax
	mov ebp,ecx
	call _memset
	mov ebx,dword ptr [esp+0x20]
	add esp,0xC
	xor edi,edi
	lea esi,[ebp+0x138]

 Block1:
	xor ecx,ecx
	xor edx,edx

 Block2:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block6

 Block3:
	cmp ecx,dword ptr [eax-4]
	jae Block6

 Block4:
	cmp dword ptr [edx+eax],ebx
	je Block8

 Block5:
	inc ecx
	add edx,0x78
	jmp Block2

 Block6:
	inc edi
	sub esi,0xFFFFFF80
	cmp edi,5
	jl Block1

 Block7:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	ret 8

 Block8:
	mov eax,ecx
	mov edx,edi
	shl edx,7
	shl eax,4
	sub eax,ecx
	mov ecx,dword ptr [edx+ebp+0x138]
	lea edx,[ecx+eax*8]
	mov ecx,dword ptr [esp+0x18]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CTabGuild::OnPartyInvite
_SUB_EXCEPTION_HANDLER(4C9DB0)
__SUB_CLASS_THIS0(004C9DB0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9DB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block6

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block6

 Block2:
	mov dword ptr [esp+0x10],esi
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x34],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x90],esi
	call CTabGuild::GetGuildItem
	or edi,0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block3:
	call get_field
	cmp eax,esi
	je Block5

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	call CField::SendJoinPartyMsg

 Block5:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x88],edi
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block6:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x80
	ret
}
}
// CTabFriend::OnWhisper
_SUB_EXCEPTION_HANDLER(4D4CC0)
__SUB_CLASS_THIS0(004D4CC0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D4CC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x7C]
	mov edx,dword ptr [eax+0xC5C]
	xor edi,edi
	cmp edx,edi
	je Block20

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [esi+0x20B4]
	je Block20

 Block2:
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x4C],edi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x20]
	push edx
	push eax
	mov dword ptr [esp+0x60],edi
	call CTabFriend::GetFriendItem
	cmp dword ptr [esp+0x20],edi
	je Block19

 Block3:
	cmp eax,edi
	je Block5

 Block4:
	cmp eax,1
	jne Block19

 Block5:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],edi
	je Block19

 Block6:
	mov dword ptr [esp+0xC],edi
	lea ecx,[esp+0x10]
	push 0x186E
	push ecx
	mov byte ptr [esp+0x60],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x64],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x58],1
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edi
	call CConfig::GetDialogVisible
	test eax,eax
	je Block17

 Block9:
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x58],3
	cmp eax,edi
	je Block21

 Block10:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,edi
	je Block21

 Block11:
	add eax,8
	cmp eax,edi
	je Block21

 Block12:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	cmp esi,edi
	je Block14

 Block13:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	lea edx,[esp+0x10]
	push 0x1889
	push edx
	mov byte ptr [esp+0x60],4
	mov dword ptr [esi+0xA8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x5C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x58],4
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push edi
	push edi
	push edi
	push edi
	push ecx
	lea eax,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call ZXString<char>::_ctor_copy
	push 0x3E9
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	mov esi,dword ptr [esi+0xEC]
	mov esi,dword ptr [esi+0x48]
	xor ecx,ecx
	cmp esi,edi
	sete cl
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edi
	call CConfig::SetDialogVisible
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x58],1
	call ZRef<CUtilDlg>::~ZRef<CUtilDlg>

 Block17:
	push edi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::StartChat
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x58],0
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block20:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x50
	ret

 Block21:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block14
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_
__SUB(004D96F0, __cdecl, 83777,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::LevelAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabParty::GetMemberIDFromPoint
__SUB_CLASS_THIS(004B8EF0, __thiscall, 40286,  CTabParty, unsigned long, long, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	xor ebx,ebx
	mov esi,ecx
	xor edi,edi
	mov edi,edi

 Block1:
	mov eax,dword ptr [esi+0x50]
	test eax,eax
	je Block6

 Block2:
	cmp ebx,dword ptr [eax-4]
	jae Block6

 Block3:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	add eax,edi
	push ebp
	add eax,0x1C
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc ebx
	add edi,0x50
	jmp Block1

 Block5:
	mov ecx,dword ptr [esi+0x50]
	pop edi
	lea eax,[ebx+ebx*4]
	pop esi
	shl eax,4
	mov eax,dword ptr [eax+ecx]
	pop ebp
	pop ebx
	ret 0xC

 Block6:
	xor ebx,ebx
	xor edi,edi
	nop

 Block7:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	je Block12

 Block8:
	cmp ebx,dword ptr [eax-4]
	jae Block12

 Block9:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	add eax,edi
	push ebp
	add eax,0x1C
	push eax
	call PtInRect
	test eax,eax
	jne Block11

 Block10:
	inc ebx
	add edi,0x50
	jmp Block7

 Block11:
	mov eax,dword ptr [esi+0x58]
	pop edi
	lea edx,[ebx+ebx*4]
	pop esi
	shl edx,4
	mov eax,dword ptr [edx+eax]
	pop ebp
	pop ebx
	ret 0xC

 Block12:
	xor ebx,ebx
	xor edi,edi
	nop

 Block13:
	mov eax,dword ptr [esi+0x54]
	test eax,eax
	je Block18

 Block14:
	cmp ebx,dword ptr [eax-4]
	jae Block18

 Block15:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	add eax,edi
	push ebp
	add eax,0x1C
	push eax
	call PtInRect
	test eax,eax
	jne Block17

 Block16:
	inc ebx
	add edi,0x50
	jmp Block13

 Block17:
	mov edx,dword ptr [esi+0x54]
	pop edi
	lea ecx,[ebx+ebx*4]
	pop esi
	shl ecx,4
	mov eax,dword ptr [ecx+edx]
	pop ebp
	pop ebx
	ret 0xC

 Block18:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC
}
}
// CTabBlackList::Draw
_SUB_EXCEPTION_HANDLER(4CF8D0)
__SUB_CLASS_THIS(004CF8D0, __thiscall, 40721,  CTabBlackList, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CF8D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x38],esi
	xor edi,edi
	mov dword ptr [esp+0xB8],edi
	mov dword ptr [esp+0x50],edi
	mov eax,dword ptr [esi+0x14]
	add eax,0xC9C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB8],1
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x5C],eax
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x14]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB8],2
	mov dword ptr [esp+0x54],eax
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x14]
	mov ebp,dword ptr [eax+0xC80]
	add eax,0xC80
	mov byte ptr [esp+0xB8],3
	mov dword ptr [esp+0x58],ebp
	cmp ebp,edi
	je Block6

 Block5:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block6:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0xBC],4
	call esi
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xBC],5
	call esi
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push edi
	push edi
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x8C]
	push ecx
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIUIWINDOW2IMGUS__89
	mov byte ptr [esp+0xD0],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xCC],7
	cmp dword ptr [_D_G_RM],edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0xA4]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ebx,8
	mov ecx,eax
	mov byte ptr [esp+0xC0],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB8],0xA
	cmp word ptr [esp+0x90],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x90]
	push ecx
	call esi

 Block19:
	mov byte ptr [esp+0xB8],0xB
	cmp word ptr [esp+0x80],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x80]
	push eax
	call esi

 Block23:
	mov byte ptr [esp+0xB8],0xC
	cmp word ptr [esp+0x70],bx
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block27:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],edx
	mov ecx,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xB8],0xD
	cmp ecx,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ebx,dword ptr [esp+0x18]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x5C]
	push eax
	push 0
	push 0
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edi+0x80]
	call ecx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB8],0xC
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
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ecx,[esp+0x14]
	push 0x849
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [edx+0x14]
	mov edx,dword ptr [ecx+0xBC8]
	mov eax,dword ptr [eax]
	push 0x1A
	push edx
	push eax
	lea eax,[esp+0x5C]
	push eax
	mov byte ptr [esp+0xC8],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0xB8],0xC
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov esi,dword ptr [esp+0x50]
	lea eax,[esp+0x18]
	push eax
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	mov bl,0xF
	push esi
	mov byte ptr [esp+0xC4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC0],0x10
	test ebp,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov ecx,ebp
	mov byte ptr [esp+0xC0],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0xB8],0xC
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call ebx
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xBC],0x11
	call ebx
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
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x12
	push esi
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xD0]
	mov byte ptr [esp+0xC8],0x13
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov esi,0xD2
	mov ebp,8
	push ebp
	sub esi,edi
	push esi
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x11
	cmp word ptr [esp+0x18],bp
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0xB8],0xC
	cmp word ptr [esp+0x3C],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov ebp,dword ptr [esp+0x38]
	mov eax,dword ptr [ebp+0x14]
	add eax,0xBF4
	lea ecx,[esi-0x14]
	mov edx,3
	lea esi,[esi+edi+0x14]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],esi
	lea edi,[edx+0x15]
	mov esi,0x1B
	mov dword ptr [eax+0xC],edi
	mov dword ptr [esp+0x28],esi
	xor ebx,ebx
	mov dword ptr [esp+0x2C],0x20

 Block60:
	mov eax,dword ptr [ebp+0x18]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block90

 Block61:
	cmp ebx,dword ptr [eax-4]
	jae Block89

 Block62:
	mov edi,ecx
	neg edi
	sbb edi,edi
	and edi,0xFFFFFF8E
	add edi,0x73
	test ecx,ecx
	je Block70

 Block63:
	push esi
	push 0
	test ebx,ebx
	jne Block67

 Block64:
	push offset _S_UIUIWINDOW2IMGUS__88
	push ecx
	mov ecx,dword ptr [esp+0xD0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD0]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	inc esi
	inc dword ptr [esp+0x2C]
	mov dword ptr [esp+0x28],esi
	jmp Block70

 Block67:
	push offset _S_UIUIWINDOW2IMGUS__87
	push ecx
	mov ecx,dword ptr [esp+0xD0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD0]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block69:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1

 Block70:
	mov ecx,dword ptr [ebp+0x14]
	cmp dword ptr [ecx+0xC5C],ebx
	jne Block80

 Block71:
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block11

 Block72:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF999999
	push 0x11
	push 0x6F
	inc esi
	push esi
	lea ecx,[edi+2]
	push ecx
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block74:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x38]
	push 1
	lea esi,[ebx+ebx*4]
	push eax
	mov eax,dword ptr [ecx+0x18]
	add esi,esi
	add esi,esi
	mov ecx,dword ptr [eax+esi]
	add eax,esi
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ebp],0
	test ecx,ecx
	je Block78

 Block75:
	mov eax,ecx
	lea ebx,[eax+1]

 Block76:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block76

 Block77:
	sub eax,ebx
	mov ebx,eax
	push ebx
	push ecx
	push 0
	push ebx
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x20]

 Block78:
	mov edx,dword ptr [esp+0x38]
	push edx
	lea eax,[edi+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xD8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD8]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block86

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	jmp Block86

 Block80:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [edx+0x18]
	mov ecx,dword ptr [esp+0x5C]
	lea esi,[ebx+ebx*4]
	add esi,esi
	add esi,esi
	push 1
	add eax,esi
	push ecx
	mov ecx,dword ptr [eax]
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ebp],0
	test ecx,ecx
	je Block84

 Block81:
	mov eax,ecx
	lea ebx,[eax+1]

 Block82:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block82

 Block83:
	sub eax,ebx
	mov ebx,eax
	push ebx
	push ecx
	push 0
	push ebx
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x20]

 Block84:
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0xCC]
	push eax
	lea ecx,[edi+0x38]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xD8]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block86:
	call _DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x50]
	add esp,0x18
	lea ebp,[eax+0x14]
	push ebp
	lea ecx,[edi+0x71]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x18]
	push edi
	lea ecx,[esi+eax+4]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	jne Block88

 Block87:
	add dword ptr [esp+0x2C],0x14
	mov dword ptr [esp+0x28],ebp

 Block88:
	mov esi,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x38]
	xor edx,edx
	test eax,eax
	sete dl
	inc ebx
	mov dword ptr [esp+0x30],edx
	jmp Block60

 Block89:
	test eax,eax
	jne Block91

 Block90:
	xor eax,eax
	jmp Block92

 Block91:
	mov eax,dword ptr [eax-4]

 Block92:
	test al,1
	je Block94

 Block93:
	add esi,0x14

 Block94:
	test ebx,ebx
	jne Block112

 Block95:
	push esi
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__88
	push ecx
	mov ecx,dword ptr [esp+0xD0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD0]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block97:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xBC],0x14
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [esp+0x54]
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1AC4
	mov ebx,0x15
	push edx
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xD0]
	mov byte ptr [esp+0xC8],0x16
	test ecx,ecx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	lea eax,[esi+5]
	push eax
	push 0xA
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xB8],0x14
	cmp word ptr [esp+0x3C],di
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [esp+0xB8],0xC
	cmp word ptr [esp+0x18],di
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov edi,dword ptr [ZImports::_VariantInit]
	add esi,ebx

 Block112:
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	lea eax,[eax+eax*4]
	lea eax,[eax*4+0xE3]
	dec esi
	cmp eax,esi
	mov dword ptr [esp+0x30],eax
	jl Block114

 Block113:
	mov dword ptr [esp+0x30],esi

 Block114:
	lea eax,[esp+0x60]
	push eax
	call edi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xBC],0x17
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	push ebp
	push ebp
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__59
	mov byte ptr [esp+0xD0],0x18
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xCC],0x19
	cmp dword ptr [_D_G_RM],ebp
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea eax,[esp+0xB4]
	mov byte ptr [esp+0xCC],0x18
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x1A
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebp
	je Block124

 Block121:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	cmp eax,ebp
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x14]
	cmp eax,ebp
	mov dword ptr [esp+0x2C],ebx
	jge Block124

 Block122:
	cmp eax,0x80004002
	je Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov esi,8
	mov byte ptr [esp+0xB8],0x1C
	cmp word ptr [esp+0xA0],si
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0xB8],0x1D
	cmp word ptr [esp+0x3C],si
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [esp+0xB8],0x1E
	cmp word ptr [esp+0x60],si
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebp
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block136:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	mov byte ptr [esp+0xB8],0x1F
	cmp ebx,ebp
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push ebx
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block142

 Block141:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block142:
	mov eax,dword ptr [esp+0xC0]
	mov esi,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x30],ebp
	call eax
	cmp eax,ebp
	jge Block146

 Block145:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block146:
	mov ecx,dword ptr [esp+0xC0]
	cmp ecx,ebp
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	mov ebp,dword ptr [esp+0x18]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x30]
	push esi
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x48]
	push 0
	push 0
	push 0
	push 0
	push 0xFF
	push ebx
	push eax
	push 0
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x84]
	call ecx
	test eax,eax
	jge Block150

 Block149:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block150:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB8],0x1E
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov esi,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+0x18]
	test eax,eax
	je Block156

 Block155:
	cmp dword ptr [eax-4],0x1A
	jae Block157

 Block156:
	push 1
	jmp Block158

 Block157:
	push 0

 Block158:
	mov eax,dword ptr [esi+8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov eax,dword ptr [esi+0x18]
	test eax,eax
	je Block161

 Block159:
	cmp dword ptr [eax-4],0
	jbe Block161

 Block160:
	push 1
	jmp Block162

 Block161:
	push 0

 Block162:
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xBC],0xC
	call edx
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xB8],4
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xBC],3
	call edx
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB8],2
	test eax,eax
	je Block166

 Block165:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block166:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xB8],1
	test eax,eax
	je Block168

 Block167:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block168:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xB8],0
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block170:
	mov eax,dword ptr [esp+0xC0]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 4
}
}
// CTabFriend::~CTabFriend
_SUB_EXCEPTION_HANDLER(4DA480)
__SUB_CLASS_THIS0(004DA480, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DA480
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabFriend::`vftable'
	lea ecx,[esi+0xA8]
	mov dword ptr [esp+0x14],7
	call ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>>::RemoveAll
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x84]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x80]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0xF
	push 8
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabFriend::GROUPITEM::~GROUPITEM
__SUB_CLASS_THIS0(004BA400, __thiscall, 40097,  CTabFriend::GROUPITEM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CTabBlackList::LoadData
_SUB_EXCEPTION_HANDLER(4CF690)
__SUB_CLASS_THIS0(004CF690, __thiscall, 40720,  CTabBlackList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CF690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	lea ebp,[edi+0x18]
	mov ecx,ebp
	call ZArray<CTabBlackList::BLACKLISTITEM>::RemoveAll
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [eax+0xF8]
	xor ebx,ebx
	cmp eax,ebx
	jne Block2

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x14],ecx
	mov esi,ecx

 Block3:
	mov dword ptr [esp+0x3C],ebx
	cmp esi,ebx
	mov dword ptr [esp+0x58],ebx
	jle Block6

 Block4:
	mov edx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [edx+0xF8]
	lea ecx,[eax+ebx*4]
	push ecx
	lea ecx,[esp+0x40]
	call ZXString<char>::op_assign
	push 0xFFFFFFFF
	mov ecx,ebp
	call ZArray<CTabBlackList::BLACKLISTITEM>::InsertBefore
	mov edi,eax
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [edi+8],ecx
	inc ebx
	cmp ebx,esi
	mov dword ptr [edi+0xC],edx
	mov dword ptr [edi+0x10],eax
	jl Block4

 Block5:
	mov edi,dword ptr [esp+0x24]

 Block6:
	mov ecx,dword ptr [edi+0x14]
	mov dword ptr [ecx+0xBC8],esi
	test esi,esi
	jle Block8

 Block7:
	lea eax,[esi+1]
	cdq
	sub eax,edx
	mov edx,dword ptr [edi+0x14]
	sar eax,1
	mov dword ptr [edx+0xBCC],eax
	jmp Block9

 Block8:
	mov eax,dword ptr [edi+0x14]
	mov dword ptr [eax+0xBCC],1

 Block9:
	xor ecx,ecx
	mov dword ptr [esp+0x28],ecx
	lea eax,[esi-1]
	mov byte ptr [esp+0x58],1
	test eax,eax
	jle Block19

 Block10:
	xor edi,edi
	mov ecx,1
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],eax

 Block11:
	cmp ecx,esi
	jge Block17

 Block12:
	mov eax,esi
	sub eax,ecx
	lea ebx,[edi+0x14]
	mov dword ptr [esp+0x1C],eax

 Block13:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [ebx+eax]
	push ecx
	lea ecx,[edi+eax]
	call ZXString<char>::Compare
	test eax,eax
	jle Block15

 Block14:
	mov esi,dword ptr [ebp]
	add esi,edi
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [esp+0x2C],ecx
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [esp+0x30],edx
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [ebp]
	lea edi,[ebx+eax]
	lea esi,[edx+eax]
	mov dword ptr [esp+0x38],ecx
	push edi
	mov ecx,esi
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+4]
	lea eax,[edi+4]
	mov dword ptr [esi+4],edx
	mov edx,dword ptr [eax+4]
	lea ecx,[esi+4]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	mov edi,dword ptr [ebp]
	lea ecx,[esp+0x28]
	add edi,ebx
	push ecx
	mov ecx,edi
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x34]
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [edi+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [edi+8],eax
	mov dword ptr [edi+0xC],ecx
	mov dword ptr [edi+0x10],edx
	mov edi,dword ptr [esp+0x18]

 Block15:
	add ebx,0x14
	sub dword ptr [esp+0x1C],1
	jne Block13

 Block16:
	mov ecx,dword ptr [esp+0x20]

 Block17:
	inc ecx
	add edi,0x14
	sub dword ptr [esp+0x24],1
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x18],edi
	jne Block11

 Block18:
	mov ecx,dword ptr [esp+0x28]

 Block19:
	mov byte ptr [esp+0x58],0
	test ecx,ecx
	je Block21

 Block20:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CWndAllianceGrade::GetGradeIndexFromPoint
__SUB_CLASS_THIS(004B7040, __thiscall, 40696,  CWndAllianceGrade, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	xor edi,edi
	mov esi,0x4B

 Block1:
	lea eax,[esi+0x14]
	push eax
	push 0xFE
	push esi
	push 0xA
	lea ecx,[esp+0x20]
	push ecx
	call SetRect
	push ebp
	push ebx
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	jne Block4

 Block2:
	add esi,0x14
	inc edi
	cmp esi,0xAF
	jl Block1

 Block3:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	lea eax,[edi+1]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
_SUB_EXCEPTION_HANDLER(4BD770)
__SUB(004BD770, __cdecl, 83666,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::NameDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BD770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	lea eax,[edx+esi-0x74]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block9

 Block8:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+esi]
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CWndGuildGrade::OnCreate
_SUB_EXCEPTION_HANDLER(4CD380)
__SUB_CLASS_THIS(004CD380, __thiscall, 40660,  CWndGuildGrade, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CD380
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
	mov esi,ecx
	push 0
	push 0
	lea ebx,[esi+0xC0]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__80
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	lea eax,[esp+0x14]
	push 0xCE0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xAC]
	mov dword ptr [esp+0x44],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0xCE1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x44],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0xCE2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x44],2
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xB8]
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xB4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push 0
	push 0
	push 0
	push 0x85C
	push offset _S_UIUIWINDOW2IMGUS__79
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x40],3
	test eax,eax
	je Block26

 Block7:
	add eax,8
	je Block26

 Block8:
	lea edi,[eax-8]
	test edi,edi
	je Block10

 Block9:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block10:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block12:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x40],0xFFFFFFFF
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block14:
	push 0
	push 0
	push 0
	push 0x85D
	push offset _S_UIUIWINDOW2IMGUS__78
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x40],4
	test eax,eax
	je Block27

 Block15:
	add eax,8
	je Block27

 Block16:
	lea edi,[eax-8]
	test edi,edi
	je Block18

 Block17:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block18:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block20:
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x40],ebp
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block22:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x40],5
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	lea eax,[esp+0x14]
	mov bl,6
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x44],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x40],7
	test edi,edi
	jne Block28

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	xor edi,edi
	jmp Block10

 Block27:
	xor edi,edi
	jmp Block18

 Block28:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov edi,8
	mov byte ptr [esp+0x40],5
	cmp word ptr [esp+0x28],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x40],ebp
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov dword ptr [esp+0x40],edi
	mov edi,dword ptr [eax]
	test edi,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x40],ebp
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov ecx,esi
	call CWndGuildGrade::LoadData
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CTabGuildAlliance::OnSortMember
__SUB_CLASS_THIS(004DB020, __thiscall, 40527,  CTabGuildAlliance, void, long, const CTabGuildAlliance::ORDER) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	shl eax,7
	add eax,ecx
	mov ecx,dword ptr [esp+8]
	cmp ecx,dword ptr [eax+0x140]
	jne Block2

 Block1:
	xor ecx,ecx
	cmp dword ptr [eax+0x144],ecx
	sete cl
	mov dword ptr [eax+0x144],ecx
	lea ecx,[eax+0xC8]
	call CTabGuildAlliance::SectionData::Sort
	ret 8

 Block2:
	mov dword ptr [eax+0x140],ecx
	lea ecx,[eax+0xC8]
	mov dword ptr [eax+0x144],1
	call CTabGuildAlliance::SectionData::Sort
	ret 8
}
}
// CTabGuild::GUILDITEM::~GUILDITEM
_SUB_EXCEPTION_HANDLER(4BA490)
__SUB_CLASS_THIS0(004BA490, __thiscall, 40409,  CTabGuild::GUILDITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA490
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
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
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
// CTabParty::OnWhisper
_SUB_EXCEPTION_HANDLER(4BECB0)
__SUB_CLASS_THIS0(004BECB0, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BECB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x4C]
	mov edx,dword ptr [eax+0xC5C]
	test edx,edx
	je Block5

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block5

 Block2:
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x18],0
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x6C],0
	call CTabParty::GetPartyItem
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block4

 Block3:
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CUIStatusBar::StartChat

 Block4:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call CTabParty::PARTYITEM::~PARTYITEM

 Block5:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	add esp,0x60
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_
__SUB(004D8C20, __cdecl, 83759,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::JobDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::JobDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabGuild::OnKick
_SUB_EXCEPTION_HANDLER(4C9840)
__SUB_CLASS_THIS0(004C9840, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp edx,ebx
	je Block7

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [esi+0x20B4]
	je Block7

 Block2:
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x94],ebx
	call CTabGuild::GetGuildItem
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x90],1
	cmp esi,ebx
	je Block5

 Block3:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block5

 Block4:
	mov ecx,esi
	jmp Block6

 Block5:
	xor ecx,ecx

 Block6:
	mov byte ptr [esp+0x90],bl
	call CField::SendKickGuildMsg
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block7:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x84
	ret
}
}
// CTabGuildAlliance::SectionData::~SectionData
__SUB_CLASS_THIS0(004D4720, __thiscall, 40594,  CTabGuildAlliance::SectionData, void) {
__asm {

 Block0:
	add ecx,0x70
	jmp  ZArray<CTabGuildAlliance::GUILDITEM>::RemoveAll
}
}
// CTabParty::OnButtonClicked
__SUB_CLASS_THIS(004D85B0, __thiscall, 40284,  CTabParty, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFF768
	cmp eax,8
	ja Block11

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
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10


 Block2:
	call CTabParty::OnCreateParty
	ret 4

 Block3:
	call CTabParty::OnInvite
	ret 4

 Block4:
	call CTabParty::OnKick
	ret 4

 Block5:
	call CTabParty::OnWithdraw
	ret 4

 Block6:
	call CTabParty::OnWhisper
	ret 4

 Block7:
	call CTabParty::OnChat
	ret 4

 Block8:
	call CTabParty::OnChangeBoss
	ret 4

 Block9:
	call CTabParty::ToggleShowHP
	ret 4

 Block10:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x15
	call CWvsContext::UI_Toggle

 Block11:
	ret 4
}
}
// CUIUserList::~CUIUserList
__SUB_CLASS_THIS0(005CCC00, __thiscall, 40159,  CUIUserList, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB1C]
	inc eax
	push esi
	mov esi,dword ptr [ecx+0xB10]
	push edi
	mov edi,dword ptr [esi+0x50]
	cdq
	idiv edi
	test edx,edx
	jl Block3

 Block1:
	cmp edx,edi
	jge Block3

 Block2:
	mov dword ptr [ecx+0xB1C],edx
	push edx
	mov ecx,esi
	call CCtrlTab::SetTab

 Block3:
	pop edi
	pop esi
	ret
}
}
// CTabGuild::OnMaxMinToggle
__SUB_CLASS_THIS(004B9E30, __thiscall, 40379,  CTabGuild, void, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],eax
	push esi
	sete al
	mov esi,ecx
	xor ecx,ecx
	imul eax,0x7C
	cmp dword ptr [eax+esi+0xAC],ecx
	lea eax,[eax+esi+0xAC]
	sete cl
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esi+0x70]
	call CUIUserList::SetViewItem
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CTabFriend::LoadData
_SUB_EXCEPTION_HANDLER(4D9A70)
__SUB_CLASS_THIS0(004D9A70, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D9A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],ecx
	xor edi,edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x18],edi
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x8C],edi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block5

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
	mov dword ptr [esp+0x2C],0
	xor edi,edi

 Block5:
	mov ecx,dword ptr [ebx+0x5FD]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx+0xAC],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x1C],edi

 Block6:
	mov esi,dword ptr [ebp+0x3788]
	mov ecx,esi
	call CWvsContext::CFriend::IsDataTwisted
	mov esi,dword ptr [esi]
	cmp esi,edi
	jne Block8

 Block7:
	xor esi,esi
	jmp Block9

 Block8:
	mov esi,dword ptr [esi-4]

 Block9:
	cmp ebx,esi
	jge Block29

 Block10:
	mov eax,dword ptr [ebp+0x3788]
	mov edi,dword ptr [eax]
	add edi,dword ptr [esp+0x1C]
	xor eax,eax
	cmp dword ptr [edi],eax
	je Block28

 Block11:
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x7C],eax
	mov ecx,dword ptr [edi]
	mov dword ptr [esp+0x50],ecx
	lea ecx,[edi+4]
	mov byte ptr [esp+0x88],1
	cmp ecx,eax
	je Block15

 Block12:
	mov eax,ecx
	lea esi,[eax+1]
	lea esp,[esp]

 Block13:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block13

 Block14:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	lea ecx,[esp+0x64]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x58]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x7C]

 Block15:
	lea edx,[edi+0x16]
	test edx,edx
	jne Block18

 Block16:
	test eax,eax
	je Block21

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0x7C],0
	jmp Block21

 Block18:
	mov eax,edx
	lea esi,[eax+1]

 Block19:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block19

 Block20:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x8C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x80]
	call ZXString<char>::ReleaseBuffer

 Block21:
	mov edx,dword ptr [edi+0x12]
	mov dword ptr [esp+0x58],edx
	mov al,byte ptr [edi+0x11]
	mov byte ptr [esp+0x78],al
	test ebx,ebx
	jl Block26

 Block22:
	mov esi,dword ptr [ebp+0x3788]
	mov ecx,esi
	call CWvsContext::CFriend::IsDataTwisted
	mov esi,dword ptr [esi]
	test esi,esi
	je Block24

 Block23:
	mov esi,dword ptr [esi-4]

 Block24:
	cmp ebx,esi
	jge Block26

 Block25:
	mov eax,dword ptr [ebp+0x3788]
	mov ecx,dword ptr [eax+4]
	cmp dword ptr [ecx+ebx*4],0
	mov dword ptr [esp+0x5C],1
	jne Block27

 Block26:
	mov dword ptr [esp+0x5C],0

 Block27:
	push 0
	push ebx
	mov ecx,ebp
	call CWvsContext::IsBlockedFriend
	push 1
	push ebx
	mov ecx,ebp
	mov dword ptr [esp+0x78],eax
	call CWvsContext::IsBlockedFriend
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x78],eax
	call ZArray<CTabFriend::FRIENDITEM>::InsertBefore
	mov edx,dword ptr [esp+0x50]
	mov esi,eax
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [esi+0x14],ecx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esi+0x1C],eax
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [esp+0x74]
	lea ecx,[esp+0x7C]
	mov dword ptr [esi+0x24],edx
	mov al,byte ptr [esp+0x78]
	push ecx
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],al
	call ZXString<char>::op_assign
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x88],0
	call CTabFriend::FRIENDITEM::~FRIENDITEM

 Block28:
	add dword ptr [esp+0x1C],0x27
	inc ebx
	xor edi,edi
	jmp Block6

 Block29:
	mov esi,dword ptr [esp+0x18]
	cmp esi,edi
	jne Block31

 Block30:
	xor eax,eax
	jmp Block32

 Block31:
	mov eax,dword ptr [esi-4]

 Block32:
	lea edx,[esp+0x17]
	push edx
	dec eax
	push eax
	lea eax,[esp+0x20]
	push edi
	push eax
	call InsertionSortHelper<CTabFriend::FRIENDITEM, FI_NameAscComp>::call
	add esp,0x10
	cmp esi,edi
	jne Block34

 Block33:
	xor eax,eax
	jmp Block35

 Block34:
	mov eax,dword ptr [esi-4]

 Block35:
	lea ecx,[esp+0x17]
	push ecx
	dec eax
	push eax
	lea edx,[esp+0x20]
	push edi
	push edx
	call InsertionSortHelper<CTabFriend::FRIENDITEM, Friend_GroupAscComp<CTabFriend::FRIENDITEM>>::call
	mov ebx,dword ptr [esp+0x34]
	add ebx,0xA8
	add esp,0x10
	mov ecx,ebx
	call ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>>::RemoveAll
	mov dword ptr [esp+0x20],edi
	lea edi,[esi+8]

 Block36:
	xor ebp,ebp
	cmp esi,ebp
	je Block55

 Block37:
	mov eax,dword ptr [esp+0x20]
	cmp eax,dword ptr [esi-4]
	jae Block55

 Block38:
	lea eax,[edi+0x24]
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebx]
	mov byte ptr [esp+0x88],2
	cmp eax,ebp
	je Block44

 Block39:
	cmp dword ptr [eax-4],ebp
	je Block44

 Block40:
	cmp eax,ebp
	jne Block42

 Block41:
	xor eax,eax
	jmp Block43

 Block42:
	mov eax,dword ptr [eax-4]

 Block43:
	mov ecx,dword ptr [ebx]
	shl eax,5
	lea edx,[eax+ecx-0x20]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block49

 Block44:
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x48],ebp
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x8C],3
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsFriendGroupFolded
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x28],ebp
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x90],4
	call ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>::_ctor_0
	mov esi,eax
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [esp+0x8C],5
	call ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>>::InsertBefore
	mov ebp,eax
	push esi
	mov ecx,ebp
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+4]
	mov dword ptr [ebp+4],edx
	mov eax,dword ptr [esi+8]
	mov dword ptr [ebp+8],eax
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [ebp+0xC],ecx
	mov edx,dword ptr [esi+0x10]
	mov dword ptr [ebp+0x10],edx
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [ebp+0x14],eax
	mov cl,byte ptr [esi+0x18]
	mov byte ptr [ebp+0x18],cl
	add esi,0x1C
	push esi
	lea ecx,[ebp+0x1C]
	call ZArray<CTabFriend::FRIENDITEM>::operator=
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x88],6
	call ZArray<CTabFriend::FRIENDITEM>::RemoveAll
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x88],4
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],3
	call ZArray<CTabFriend::FRIENDITEM>::RemoveAll
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x88],2
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	xor ebp,ebp

 Block49:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	jne Block51

 Block50:
	xor eax,eax
	jmp Block52

 Block51:
	mov eax,dword ptr [eax-4]

 Block52:
	mov edx,dword ptr [ebx]
	shl eax,5
	lea ecx,[eax+edx-4]
	push 0xFFFFFFFF
	call ZArray<CTabFriend::FRIENDITEM>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [edi-8]
	lea ecx,[edi-4]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+0xC],eax
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+0x10],ecx
	mov edx,dword ptr [edi+0xC]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x24],eax
	mov cl,byte ptr [edi+0x20]
	lea eax,[edi+0x24]
	mov byte ptr [esi+0x28],cl
	push eax
	lea ecx,[esi+0x2C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x88],0
	cmp eax,ebp
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	inc dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x18]
	add edi,0x30
	jmp Block36

 Block55:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block61

 Block56:
	cmp dword ptr [eax-4],ebp
	je Block61

 Block57:
	lea edx,[esp+0x28]
	push 0x189E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebx]
	mov dword ptr [esp+0x30],1
	cmp ecx,ebp
	jne Block59

 Block58:
	xor ecx,ecx
	jmp Block60

 Block59:
	mov ecx,dword ptr [ecx-4]

 Block60:
	push eax
	mov eax,dword ptr [ebx]
	shl ecx,5
	lea ecx,[ecx+eax-0x20]
	call ZXString<char>::op_eq_0
	mov byte ptr [esp+0x17],0
	test eax,eax
	jne Block62

 Block61:
	mov byte ptr [esp+0x17],1

 Block62:
	test byte ptr [esp+0x30],1
	je Block65

 Block63:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	cmp byte ptr [esp+0x17],0
	je Block72

 Block66:
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x48],ebp
	lea ecx,[esp+0x30]
	push 0x189E
	push ecx
	mov byte ptr [esp+0x90],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x8C],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x88],7
	cmp eax,ebp
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x189E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsFriendGroupFolded
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x30],ebp
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x90],9
	call ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>::_ctor_0
	mov esi,eax
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [esp+0x8C],0xA
	call ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>>::InsertBefore
	mov edi,eax
	push esi
	mov ecx,edi
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+4]
	mov dword ptr [edi+4],edx
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [edi+0xC],ecx
	mov edx,dword ptr [esi+0x10]
	mov dword ptr [edi+0x10],edx
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [edi+0x14],eax
	mov cl,byte ptr [esi+0x18]
	mov byte ptr [edi+0x18],cl
	add esi,0x1C
	push esi
	lea ecx,[edi+0x1C]
	call ZArray<CTabFriend::FRIENDITEM>::operator=
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x88],0xB
	call ZArray<CTabFriend::FRIENDITEM>::RemoveAll
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x88],9
	cmp eax,ebp
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x88],7
	call ZArray<CTabFriend::FRIENDITEM>::RemoveAll
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x88],0
	cmp eax,ebp
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::ResetFriendGroupFolded
	xor edi,edi
	xor esi,esi

 Block73:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block76

 Block74:
	cmp edi,dword ptr [eax-4]
	jae Block76

 Block75:
	mov edx,dword ptr [eax+esi+0x14]
	add eax,esi
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SetFriendGroupFolded
	inc edi
	add esi,0x20
	jmp Block73

 Block76:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetShowOnlineOnly
	mov esi,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	call CTabFriend::OnToggleView
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	jne Block78

 Block77:
	xor eax,eax
	jmp Block79

 Block78:
	mov eax,dword ptr [eax-4]

 Block79:
	mov ecx,dword ptr [esi+0x7C]
	mov dword ptr [ecx+0xBC8],eax
	mov ecx,dword ptr [esi+0x7C]
	call CUIUserList::SetFriendViewItem
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ZArray<CTabFriend::FRIENDITEM>::RemoveAll
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret
}
}
// CUIPartyHP::GetRTTI
__SUB_CLASS_THIS0(004D62E0, __thiscall, 41036,  CUIPartyHP, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIPartyHP::ms_RTTI_CUIPartyHP
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_
__SUB(004D8980, __cdecl, 83747,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::LevelDescComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::LevelDescComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabParty::ToggleShowHP
__SUB_CLASS_THIS0(004D8560, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUIPartyHP>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIPartyHP>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 0
	call CConfig::SetShowPartyHP
	ret

 Block4:
	call TSingleton<CUIPartyHP>::CreateInstance
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 1
	call CConfig::SetShowPartyHP
	ret
}
}
// CTabGuildAlliance::OnButtonClicked
// 8CD110
static uint8_t _SUB_4CCFC0_LOOKUP_TABLE_0[45] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 14, 14, 14, 14, 
14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 11, 11, 
11, 11, 11, 12, 13, 12, 13, 12, 13, 12, 13, 12, 13, 
};
__SUB_CLASS_THIS(004CCFC0, __thiscall, 40522,  CTabGuildAlliance, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x802]
	mov esi,ecx
	cmp eax,0x2C
	ja Block16

 Block1:
	movzx eax,byte ptr [eax+_SUB_4CCFC0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block5
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11
cmp EAX, 5
je Block2
cmp EAX, 6
je Block3
cmp EAX, 7
je Block9
cmp EAX, 8
je Block4
cmp EAX, 9
je Block12
cmp EAX, 10
je Block8
cmp EAX, 11
je Block13
cmp EAX, 12
je Block14
cmp EAX, 13
je Block15
cmp EAX, 14
je Block16


 Block2:
	call CTabGuildAlliance::OnWhisper
	pop edi
	pop esi
	ret 4

 Block3:
	call CTabGuildAlliance::OnChat
	pop edi
	pop esi
	ret 4

 Block4:
	call CTabGuildAlliance::OnPartyInvite
	pop edi
	pop esi
	ret 4

 Block5:
	call CTabGuildAlliance::OnWithdraw
	pop edi
	pop esi
	ret 4

 Block6:
	call CTabGuildAlliance::OnInvite
	pop edi
	pop esi
	ret 4

 Block7:
	call CTabGuildAlliance::OnKick
	pop edi
	pop esi
	ret 4

 Block8:
	call CTabGuildAlliance::OnChangeMaster
	pop edi
	pop esi
	ret 4

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x40]
	push ebx
	xor ebx,ebx
	mov eax,ecx
	cmp dword ptr [eax+0xC58],ebx
	sete bl
	push ebx
	call edx
	pop ebx
	pop edi
	pop esi
	ret 4

 Block10:
	push 1
	call CTabGuildAlliance::OnGradeChange
	pop edi
	pop esi
	ret 4

 Block11:
	push 0
	call CTabGuildAlliance::OnGradeChange
	pop edi
	pop esi
	ret 4

 Block12:
	call CTabGuildAlliance::OnSetNotice
	pop edi
	pop esi
	ret 4

 Block13:
	mov ecx,dword ptr [esi+0x8C]
	push 0xFFFFFFFF
	call CUIUserList::DestroyAllianceButton
	add edi,0xFFFFF7E0
	push edi
	mov ecx,esi
	call CTabGuildAlliance::OnMaxMinToggle
	pop edi
	pop esi
	ret 4

 Block14:
	mov ecx,dword ptr [esi+0x8C]
	push 0xFFFFFFFF
	call CUIUserList::DestroyAllianceButton
	add edi,0xFFFFF7DB
	shr edi,1
	push edi
	mov ecx,esi
	call CTabGuildAlliance::OnPagePrev
	pop edi
	pop esi
	ret 4

 Block15:
	mov ecx,dword ptr [esi+0x8C]
	push 0xFFFFFFFF
	call CUIUserList::DestroyAllianceButton
	add edi,0xFFFFF7DA
	shr edi,1
	push edi
	mov ecx,esi
	call CTabGuildAlliance::OnPageNext

 Block16:
	pop edi
	pop esi
	ret 4
}
}
// CTabFriend::FRIENDITEM::~FRIENDITEM
_SUB_EXCEPTION_HANDLER(4BA390)
__SUB_CLASS_THIS0(004BA390, __thiscall, 40085,  CTabFriend::FRIENDITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA390
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
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabBlackList::OnAdd
_SUB_EXCEPTION_HANDLER(4D0600)
__SUB_CLASS_THIS0(004D0600, __thiscall, 40720,  CTabBlackList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D0600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	xor ebp,ebp
	mov dword ptr [esp+0x44],ebp
	cmp eax,ebp
	je Block13

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebp
	je Block13

 Block2:
	add eax,8
	cmp eax,ebp
	je Block13

 Block3:
	lea ebx,[eax-8]
	mov dword ptr [esp+0x24],ebx
	cmp ebx,ebp
	je Block5

 Block4:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push ebp
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x2E5
	push ecx
	mov dword ptr [esp+0x58],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebp
	push 3
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_1
	push ebp
	push ebp
	push 0xC
	push 4
	push offset _S_
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,ebx
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebx
	call CDialog::DoModal
	cmp eax,1
	jne Block11

 Block6:
	mov dword ptr [esp+0x28],ebp
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x48],2
	call CUtilDlgEx::GetInputStr_Result
	push ebp
	push ebp
	mov ecx,eax
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea eax,[esp+0x28]
	push 1
	push eax
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block14

 Block9:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov byte ptr [esp+0x44],1
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp ebx,ebp
	je Block41

 Block12:
	push ebp
	jmp Block40

 Block13:
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	jmp Block5

 Block14:
	mov dword ptr [esp+0x14],ebp
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edx+0x19EC]
	lea ecx,[esp+0x28]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push offset _S_S__1
	push edx
	mov byte ptr [esp+0x54],4
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp esi,ebp
	je Block21

 Block17:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov byte ptr [esp+0x44],1
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp ebx,ebp
	je Block41

 Block20:
	push ebp
	jmp Block40

 Block21:
	add edi,0x18
	xor esi,esi
	nop

 Block22:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block28

 Block23:
	cmp ebp,dword ptr [eax-4]
	jae Block28

 Block24:
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block27

 Block25:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [esi+ecx]
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::Compare
	test eax,eax
	jl Block28

 Block26:
	inc ebp
	add esi,0x14
	jmp Block22

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block36

 Block28:
	push ebp
	mov ecx,edi
	call ZArray<CTabBlackList::BLACKLISTITEM>::InsertBefore
	mov esi,eax
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi+0xC],eax
	mov ecx,dword ptr [esp+0x38]
	push ecx
	mov dword ptr [esi+0x10],ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::AddBlackList
	mov edi,dword ptr [edi]
	test edi,edi
	je Block30

 Block29:
	mov edi,dword ptr [edi-4]

 Block30:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [eax+0xBC8],edi
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx+0xBC8]
	inc eax
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ecx+0xBCC],eax
	mov ecx,dword ptr [esi+0x14]
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0x14]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x3864],0
	je Block36

 Block31:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x48],5
	test esi,esi
	je Block34

 Block32:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block34

 Block33:
	mov ecx,esi
	jmp Block35

 Block34:
	xor ecx,ecx

 Block35:
	mov byte ptr [esp+0x48],2
	call CField::AddBlackList

 Block36:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ebx,ebx
	je Block41

 Block39:
	push 0

 Block40:
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block41:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CTabParty::GetToolTipString
_SUB_EXCEPTION_HANDLER(4BEF80)
__SUB_CLASS_THIS(004BEF80, __thiscall, 40285,  CTabParty, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BEF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],ebx
	mov ebp,dword ptr [esp+0x80]
	mov eax,dword ptr [esi+0x4C]
	mov edi,dword ptr [esp+0x7C]
	push ebp
	push edi
	add eax,0xBD4
	push eax
	mov dword ptr [esp+0x7C],1
	call PtInRect
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x78]
	push 0x1A56
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block20

 Block2:
	mov ecx,dword ptr [esi+0x4C]
	push ebp
	push edi
	add ecx,0xBE4
	push ecx
	call PtInRect
	test eax,eax
	je Block5

 Block3:
	push 0x1A56

 Block4:
	mov esi,dword ptr [esp+0x7C]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block20

 Block5:
	mov edx,dword ptr [esi+0x4C]
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	push eax
	push ebp
	push edi
	mov ecx,esi
	call CTabParty::GetMemberIDFromPoint
	test eax,eax
	je Block19

 Block6:
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov ecx,esi
	call CTabParty::GetPartyItem
	cmp dword ptr [esp+0x64],0
	mov esi,eax
	je Block9

 Block7:
	push ebp
	push edi
	lea edx,[esp+0x5C]
	push edx
	call PtInRect
	test eax,eax
	je Block9

 Block8:
	mov esi,dword ptr [esp+0x78]
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	jmp Block20

 Block9:
	cmp esi,2
	jne Block19

 Block10:
	push ebp
	push edi
	lea ecx,[esp+0x4C]
	push ecx
	call PtInRect
	test eax,eax
	je Block19

 Block11:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2060]
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edx
	je Block18

 Block12:
	test eax,eax
	jl Block14

 Block13:
	push eax
	call CWvsContext::GetChannelName
	jmp Block15

 Block14:
	lea edx,[esp+0x7C]
	push 0x1A2D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ebx,2
	mov byte ptr [esp+0x70],2
	mov dword ptr [esp+0x14],ebx

 Block15:
	mov esi,dword ptr [esp+0x78]
	push 0xFFFFFFFF
	push eax
	mov ecx,esi
	call ZXString<char>::CreateFromCharStr
	or ebx,1
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x70],1
	test bl,2
	je Block21

 Block16:
	mov eax,dword ptr [esp+0x7C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block21

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block21

 Block18:
	push 0x2C4
	jmp Block4

 Block19:
	mov esi,dword ptr [esp+0x78]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block20:
	mov dword ptr [esp+0x14],1

 Block21:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x70],0
	call CTabParty::PARTYITEM::~PARTYITEM
	mov eax,esi
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 0xC
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_
_SUB_EXCEPTION_HANDLER(4C1590)
__SUB(004C1590, __cdecl, 83712,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::NameAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C1590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	mov ecx,dword ptr [eax+4]
	push ecx
	lea ecx,[eax-0x74]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esp+0xA4]
	lea ecx,[esi+eax-0x78]
	push ecx
	lea ecx,[edx+ebx]
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabFriend::OnToggleView
__SUB_CLASS_THIS(004B9DC0, __thiscall, 40052,  CTabFriend, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xB0],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push eax
	call CConfig::SetShowOnlineOnly
	mov eax,dword ptr [esi+0x20]
	xor edx,edx
	cmp dword ptr [esi+0xB0],edx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete dl
	push edx
	call eax
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xB0]
	push eax
	call edx
	mov ecx,dword ptr [esi+0x7C]
	call CUIUserList::SetFriendViewItem
	mov ecx,dword ptr [esi+0x7C]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x7C]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_
__SUB(004D9730, __cdecl, 83779,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::LevelDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_
_SUB_EXCEPTION_HANDLER(4BD890)
__SUB(004BD890, __cdecl, 83668,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::JobAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BD890
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::JobAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_
__SUB(004D9630, __cdecl, 83771,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::NameDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuild::LevelDescComp::operator()
__SUB_CLASS_THIS(004B7460, __thiscall, 40435,  CTabGuild::LevelDescComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x10]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CUIUserList::DestroyAllianceButton
__SUB_CLASS_THIS(004BAC00, __thiscall, 40174,  CUIUserList, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jge Block7

 Block1:
	add esi,0xB54
	mov edi,0xF

 Block2:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block5

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi],0
	je Block5

 Block4:
	push 0
	lea ecx,[esi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi],0

 Block5:
	add esi,8
	sub edi,1
	jne Block2

 Block6:
	pop edi
	pop esi
	ret 4

 Block7:
	mov ecx,dword ptr [esi+edi*8+0xB54]
	test ecx,ecx
	je Block10

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+edi*8+0xB54],0
	lea esi,[esi+edi*8+0xB50]
	je Block10

 Block9:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block10:
	pop edi
	pop esi
	ret 4
}
}
// CTabGuild::CreateButton
_SUB_EXCEPTION_HANDLER(4BB520)
__SUB_CLASS_THIS0(004BB520, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BB520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7EE
	push offset _S_UIUIWINDOW2IMGUS__21
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x38],0
	test eax,eax
	je Block109

 Block1:
	add eax,8
	je Block109

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block4:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+8],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F0
	push offset _S_UIUIWINDOW2IMGUS__20
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],1
	test eax,eax
	je Block110

 Block9:
	add eax,8
	je Block110

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block12:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 0x7EF
	push offset _S_UIUIWINDOW2IMGUS__19
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x70]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],2
	test eax,eax
	je Block111

 Block17:
	add eax,8
	je Block111

 Block18:
	lea edi,[eax-8]
	test edi,edi
	je Block20

 Block19:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block20:
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F1
	push offset _S_UIUIWINDOW2IMGUS__18
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],3
	test eax,eax
	je Block112

 Block25:
	add eax,8
	je Block112

 Block26:
	lea edi,[eax-8]
	test edi,edi
	je Block28

 Block27:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block28:
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F2
	push offset _S_UIUIWINDOW2IMGUS__17
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],4
	test eax,eax
	je Block113

 Block33:
	add eax,8
	je Block113

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block36:
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block40:
	push 0
	push 0
	push 0
	push 0x7F3
	push offset _S_UIUIWINDOW2IMGUS__16
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x70]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],5
	test eax,eax
	je Block114

 Block41:
	add eax,8
	je Block114

 Block42:
	lea edi,[eax-8]
	test edi,edi
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block44:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F6
	push offset _S_UIUIWINDOW2IMGUS__15
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],6
	test eax,eax
	je Block115

 Block49:
	add eax,8
	je Block115

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block52:
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block54:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block56:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F7
	push offset _S_UIUIWINDOW2IMGUS__14
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],7
	test eax,eax
	je Block116

 Block57:
	add eax,8
	je Block116

 Block58:
	lea edi,[eax-8]
	test edi,edi
	je Block60

 Block59:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block60:
	mov eax,dword ptr [esi+0x40]
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block62

 Block61:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block62:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block64

 Block63:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block64:
	push 0
	push 0
	push 0
	push 0x7F4
	push offset _S_UIUIWINDOW2IMGUS__13
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x70]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],8
	test eax,eax
	je Block117

 Block65:
	add eax,8
	je Block117

 Block66:
	lea edi,[eax-8]
	test edi,edi
	je Block68

 Block67:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block68:
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block70

 Block69:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block70:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block72

 Block71:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block72:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F9
	push offset _S_UIUIWINDOW2IMGUS__12
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],9
	test eax,eax
	je Block118

 Block73:
	add eax,8
	je Block118

 Block74:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block75:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block76:
	mov eax,dword ptr [esi+0x50]
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block78:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block80

 Block79:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block80:
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0
	push 0
	push 0x7F8
	push offset _S_UIUIWINDOW2IMGUS__11
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],0xA
	test eax,eax
	je Block119

 Block81:
	add eax,8
	je Block119

 Block82:
	lea edi,[eax-8]
	test edi,edi
	je Block84

 Block83:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block84:
	mov eax,dword ptr [esi+0x58]
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block86

 Block85:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block86:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block88

 Block87:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block88:
	lea ecx,[esp+0x14]
	push 0xEC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0x154
	push 0xE1
	push 0x7FA
	push eax
	lea edx,[esp+0x30]
	mov ebx,0xB
	push edx
	add ecx,0xCA8
	mov dword ptr [esp+0x50],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x38],0xC
	test eax,eax
	je Block120

 Block89:
	add eax,8
	je Block120

 Block90:
	lea edi,[eax-8]
	test edi,edi
	je Block92

 Block91:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block92:
	mov eax,dword ptr [esi+0x60]
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block94

 Block93:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block94:
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x38],bl
	je Block96

 Block95:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],0

 Block96:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	lea ecx,[esp+0x18]
	push 0x891
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x70]
	push 0
	push 0x4F
	push 0xC2
	push 0x7F5
	push eax
	lea edx,[esp+0x38]
	mov ebx,0xD
	push edx
	add ecx,0xCA8
	mov dword ptr [esp+0x50],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x38],0xE
	test eax,eax
	je Block121

 Block99:
	add eax,8
	je Block121

 Block100:
	lea edi,[eax-8]
	test edi,edi
	je Block102

 Block101:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov eax,dword ptr [esi+0x68]
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block104

 Block103:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block104:
	cmp dword ptr [esp+0x28],0
	mov byte ptr [esp+0x38],bl
	je Block106

 Block105:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x28],0

 Block106:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block109:
	xor edi,edi
	jmp Block4

 Block110:
	xor edi,edi
	jmp Block12

 Block111:
	xor edi,edi
	jmp Block20

 Block112:
	xor edi,edi
	jmp Block28

 Block113:
	xor edi,edi
	jmp Block36

 Block114:
	xor edi,edi
	jmp Block44

 Block115:
	xor edi,edi
	jmp Block52

 Block116:
	xor edi,edi
	jmp Block60

 Block117:
	xor edi,edi
	jmp Block68

 Block118:
	xor edi,edi
	jmp Block76

 Block119:
	xor edi,edi
	jmp Block84

 Block120:
	xor edi,edi
	jmp Block92

 Block121:
	xor edi,edi
	jmp Block102
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_
_SUB_EXCEPTION_HANDLER(4BE730)
__SUB(004BE730, __cdecl, 83694,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::GradeDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::GradeDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// CTabGuild::OnListHeader
__SUB_CLASS_THIS(004DC060, __thiscall, 40381,  CTabGuild, void, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,8
	xor eax,eax
	cmp dword ptr [esp+0xC],eax
	push ebx
	sete al
	push ebp
	mov ebp,dword ptr [esp+0x18]
	push esi
	mov esi,ecx
	mov edx,dword ptr [esi+0x70]
	add ebp,0xFFFFFFF6
	imul eax,0x7C
	lea ecx,[eax+esi+0xAC]
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	sub eax,5
	cmp dword ptr [ecx],0
	lea edx,[eax+eax*4]
	mov eax,dword ptr [esp+0x20]
	lea eax,[eax+edx*4]
	mov dword ptr [esp+0x10],eax
	lea ebx,[ecx+0x20]
	je Block7

 Block1:
	push eax
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	je Block7

 Block2:
	push edi
	mov edi,1
	add ebx,0x10
	lea ecx,[ecx]

 Block3:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	jne Block6

 Block4:
	inc edi
	add ebx,0x10
	cmp edi,4
	jle Block3

 Block5:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block6:
	mov edx,dword ptr [esp+0x1C]
	push edi
	push edx
	mov ecx,esi
	call CTabGuild::OnSortMember
	mov ecx,dword ptr [esi+0x70]
	call CUIUserList::SetViewItem
	mov ecx,dword ptr [esi+0x70]
	push 0
	call CWnd::InvalidateRect
	pop edi

 Block7:
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10
}
}
// DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_
_SUB_EXCEPTION_HANDLER(4C19C0)
__SUB(004C19C0, __cdecl, 83718,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuildAlliance::JobDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C19C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xAC]
	mov esi,dword ptr [esp+0xA4]
	mov ebp,dword ptr [esp+0xA0]
	mov edx,dword ptr [ebp]
	lea eax,[esi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8-0x78]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuildAlliance::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA8]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x98],0
	mov dword ptr [esp+0x14],eax
	jg Block10

 Block1:
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0xA4]

 Block4:
	lea edi,[esi+esi]
	cmp edi,dword ptr [esp+0xA8]
	jge Block7

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[edx+ecx*8]
	lea ecx,[eax-0x78]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::JobDescComp::operator()
	test eax,eax
	je Block7

 Block6:
	inc edi

 Block7:
	lea eax,[edi+ebx]
	mov esi,eax
	shl esi,4
	sub esi,eax
	mov eax,dword ptr [ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[eax+esi-0x78]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	call CTabGuildAlliance::JobDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[esi+eax-0x78]
	add ecx,ebx
	push edx
	mov edx,ecx
	shl edx,4
	sub edx,ecx
	lea ecx,[eax+edx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],edi
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0xA4]

 Block10:
	mov edx,dword ptr [ebp]
	add ebx,esi
	mov ecx,ebx
	shl ecx,4
	lea eax,[esp+0x18]
	sub ecx,ebx
	push eax
	lea ecx,[edx+ecx*8-0x78]
	call CTabGuildAlliance::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuild::SectionData::GetFirstOfPage
__SUB_CLASS_THIS0(004B8E00, __thiscall, 40449,  CTabGuild::SectionData, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x70]
	test eax,eax
	jne Block2

 Block1:
	xor edx,edx
	jmp Block3

 Block2:
	mov edx,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [ecx+0x18]
	lea eax,[eax+eax*4]
	add eax,eax
	add eax,eax
	cmp eax,edx
	jl Block5

 Block4:
	mov eax,edx

 Block5:
	ret
}
}
// CTabFriend::GetToolTipString
__SUB_CLASS_THIS(004BEAA0, __thiscall, 40064,  CTabFriend, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	sub esp,0xC
	mov eax,dword ptr [esp+0x18]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	push edi
	xor edi,edi
	add ebp,0xFFFFFFF6
	mov ebx,ecx
	add eax,0xFFFFFF8D
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x24],edi

 Block1:
	mov eax,dword ptr [ebx+0xA8]
	mov dword ptr [esp+0x28],edi
	test eax,eax
	je Block22

 Block2:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,dword ptr [eax-4]
	jae Block22

 Block3:
	mov edx,dword ptr [esp+0x18]
	mov esi,eax
	push edx
	add esi,edi
	push ebp
	lea eax,[esi+4]
	push eax
	call PtInRect
	test eax,eax
	jne Block11

 Block4:
	cmp dword ptr [esi+0x14],eax
	jne Block10

 Block5:
	mov ecx,dword ptr [ebx+0xA8]
	lea esi,[ecx+edi+0x1C]
	mov ecx,esi
	xor edi,edi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block10

 Block6:
	xor ebx,ebx
	mov edi,edi

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [esp+0x18]
	push edx
	add eax,ebx
	push ebp
	add eax,0x10
	push eax
	call PtInRect
	test eax,eax
	jne Block14

 Block8:
	mov ecx,esi
	inc edi
	add ebx,0x30
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp edi,eax
	jb Block7

 Block9:
	mov ebx,dword ptr [esp+0x10]

 Block10:
	mov edi,dword ptr [esp+0x28]
	inc dword ptr [esp+0x24]
	add edi,0x20
	jmp Block1

 Block11:
	push 0x1884

 Block12:
	mov esi,dword ptr [esp+0x24]

 Block13:
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC

 Block14:
	mov ecx,dword ptr [esi]
	lea eax,[edi+edi*2]
	shl eax,4
	add eax,ecx
	cmp dword ptr [eax+0x24],0
	jne Block16

 Block15:
	cmp dword ptr [eax+0x20],0
	je Block17

 Block16:
	push 0x18C3
	jmp Block12

 Block17:
	push eax
	call get_channel
	add esp,4
	sub eax,0
	je Block21

 Block18:
	sub eax,1
	mov esi,dword ptr [esp+0x20]
	je Block20

 Block19:
	push 0x1886
	jmp Block13

 Block20:
	push 0x1885
	jmp Block13

 Block21:
	push 0x1878
	jmp Block12

 Block22:
	mov esi,dword ptr [esp+0x20]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CTabGuildAlliance::CalcListCanvasHeight
__SUB_CLASS_THIS0(004B9900, __thiscall, 40534,  CTabGuildAlliance, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x8C]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	ret

 Block2:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x384C]
	test eax,eax
	je Block1

 Block3:
	mov eax,dword ptr [eax-4]
	test eax,eax
	je Block1

 Block4:
	lea eax,[eax+eax*2]
	add eax,dword ptr [ecx+0xBCC]
	lea eax,[eax+eax*4]
	lea eax,[eax*4-0xF]
	ret
}
}
// CTabFriend::OnFindFriendView
__SUB_CLASS_THIS0(004B7270, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x29
	call CWvsContext::UI_Open
	ret
}
}
// CUIPartyHP::Draw
_SUB_EXCEPTION_HANDLER(4D1F70)
__SUB_CLASS_THIS(004D1F70, __thiscall, 41034,  CUIPartyHP, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D1F70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xDC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [esp+0xEC]
	push eax
	call CWnd::Draw
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [eax+0x3604]
	xor ebp,ebp
	cmp eax,ebp
	je Block246

 Block1:
	lea ecx,[esp+0x54]
	push 1
	push ecx
	mov dword ptr [esp+0x58],ebp
	call get_basic_font
	lea edx,[esp+0x64]
	push 2
	push edx
	mov dword ptr [esp+0xF4],ebp
	call get_basic_font
	add esp,0x10
	lea eax,[esp+0x84]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xE8],1
	call CWnd::GetCanvas
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],0xFFFFFFFF
	mov esi,dword ptr [esp+0x84]
	mov eax,dword ptr [ebx+0xB08]
	mov byte ptr [esp+0xE4],cl
	cmp esi,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ebp
	push ebp
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xE4],2
	jne Block6

 Block4:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov edi,dword ptr [ebx+0xB08]
	cmp edi,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [esp+0x14]
	jmp Block13

 Block13:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	cmp dword ptr [ebx+0xB10],ebp
	setne dl
	sub eax,edx
	cmp edi,eax
	jae Block23

 Block16:
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	or ecx,0xFFFFFFFF
	mov dword ptr [esp+0x44],ecx
	mov ebp,dword ptr [esp+0x3C]
	mov edx,dword ptr [ebx+0xB0C]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	push edx
	mov edx,dword ptr [ebx+0x80]
	xor ebp,ebp
	push ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push edi
	push esi
	mov byte ptr [esp+0x104],4
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xE4],2
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ebx,dword ptr [esp+0x38]
	inc edi
	jmp Block13

 Block21:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ebx,dword ptr [esp+0x38]
	inc edi
	jmp Block13

 Block23:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	mov eax,dword ptr [ebx+0xB10]
	mov ecx,dword ptr [esi]
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [ecx+0x40]
	push esi
	mov byte ptr [esp+0xEC],5
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov ebp,dword ptr [ebx+0xB10]
	mov edi,dword ptr [esp+0x14]
	test ebp,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebp
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block29:
	mov edx,dword ptr [esp+0x28]
	sub edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x5C]
	push eax
	push 0
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xE4],2
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov edi,dword ptr [ebx+0xB08]
	test edi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block39:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],ecx
	mov edi,edi

 Block40:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov edi,dword ptr [ebx+0xB20]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block43:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	sub ebp,dword ptr [esp+0x18]
	cmp dword ptr [esp+0x1C],ebp
	jae Block53

 Block46:
	mov edx,3
	or ecx,0xFFFFFFFF
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ecx
	mov ebp,dword ptr [esp+0x3C]
	mov edx,dword ptr [ebx+0xB14]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x5C]
	push edx
	push 0
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [edi+0x80]
	push esi
	mov byte ptr [esp+0x104],6
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xE4],2
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x1C]
	jmp Block40

 Block51:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	inc dword ptr [esp+0x1C]
	jmp Block40

 Block53:
	mov edi,dword ptr [ebx+0xB0C]
	test edi,edi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],eax
	nop

 Block58:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block60

 Block59:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	mov edi,dword ptr [ebx+0xB24]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block61:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block63:
	sub ebp,dword ptr [esp+0x18]
	cmp dword ptr [esp+0x1C],ebp
	jae Block82

 Block64:
	mov edi,dword ptr [ebx+0xB14]
	test edi,edi
	je Block2

 Block65:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block67:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ecx

 Block68:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov edi,dword ptr [ebx+0xB1C]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block71:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block73:
	sub ebp,dword ptr [esp+0x18]
	cmp dword ptr [esp+0x24],ebp
	jae Block81

 Block74:
	mov edx,3
	or ecx,0xFFFFFFFF
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ecx
	mov ebp,dword ptr [esp+0x3C]
	mov edx,dword ptr [ebx+0xB18]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [edi+0x80]
	push edx
	push eax
	push esi
	mov byte ptr [esp+0x104],7
	call ecx
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xE4],2
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x24]
	jmp Block68

 Block79:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	inc dword ptr [esp+0x24]
	jmp Block68

 Block81:
	inc dword ptr [esp+0x1C]
	jmp Block58

 Block82:
	mov edi,dword ptr [ebx+0xB10]
	test edi,edi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],ecx

 Block87:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block89

 Block88:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block89:
	mov edi,dword ptr [ebx+0xB28]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block90:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block92:
	sub ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp dword ptr [esp+0x1C],ebp
	jae Block105

 Block93:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov ebx,dword ptr [eax+0xB1C]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov byte ptr [esp+0xEC],8
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	mov ecx,dword ptr [esp+0x38]
	mov ebp,dword ptr [ecx+0xB1C]
	mov edi,dword ptr [esp+0x14]
	test ebp,ebp
	je Block2

 Block96:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block98:
	mov ecx,dword ptr [esp+0x28]
	sub edi,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0x80]
	push ebx
	push eax
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block100

 Block99:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block100:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xE4],2
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x38]
	jmp Block87

 Block103:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block104:
	inc dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x38]
	jmp Block87

 Block105:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov edx,dword ptr [ebx+0xB20]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x50],edx
	mov edx,dword ptr [eax+0x48]
	push esi
	mov byte ptr [esp+0xEC],9
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block107:
	mov ebp,dword ptr [ebx+0xB20]
	mov edi,dword ptr [esp+0x14]
	test ebp,ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block111:
	mov edx,dword ptr [esp+0x28]
	sub edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x5C]
	push eax
	push edi
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block113:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xE4],2
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov edi,dword ptr [ebx+0xB20]
	test edi,edi
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block121:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ecx

 Block122:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block124

 Block123:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	mov edi,dword ptr [ebx+0xB28]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block125:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block127

 Block126:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block127:
	sub ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp dword ptr [esp+0x24],ebp
	jae Block140

 Block128:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov ebx,dword ptr [eax+0xB24]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov byte ptr [esp+0xEC],0xA
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block130:
	mov ecx,dword ptr [esp+0x38]
	mov ebp,dword ptr [ecx+0xB24]
	mov edi,dword ptr [esp+0x14]
	test ebp,ebp
	je Block2

 Block131:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block133:
	mov ecx,dword ptr [esp+0x28]
	sub edi,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [edx+0x80]
	push edi
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block135

 Block134:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block135:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xE4],2
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x38]
	jmp Block122

 Block138:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block139:
	inc dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x38]
	jmp Block122

 Block140:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov edx,dword ptr [ebx+0xB28]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x50],edx
	mov edx,dword ptr [eax+0x48]
	push esi
	mov byte ptr [esp+0xEC],0xB
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block142

 Block141:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block142:
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [eax+0xB28]
	mov ebx,dword ptr [esp+0x14]
	xor ebp,ebp
	cmp edi,ebp
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block146

 Block145:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block146:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [edx+0x40]
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block148

 Block147:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	mov edx,dword ptr [esp+0x38]
	mov ebp,dword ptr [edx+0xB28]
	mov edi,dword ptr [esp+0x24]
	test ebp,ebp
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block152

 Block151:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block152:
	mov edx,dword ptr [esp+0x28]
	sub ebx,dword ptr [esp+0x20]
	sub edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x5C]
	push eax
	push ebx
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block154

 Block153:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block154:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xE4],2
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov ebp,dword ptr [esp+0x60]
	lea ecx,[ebp+0x3608]
	mov dword ptr [esp+0x24],0
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],ecx
	jmp Block161

 Block160:
	mov ebp,dword ptr [esp+0x60]

 Block161:
	mov edx,dword ptr [esp+0x14]
	xor edi,edi
	cmp dword ptr [edx],edi
	je Block241

 Block162:
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x4C],edi
	lea ecx,[esp+0xD8]
	push ecx
	lea edx,[esp+0xD8]
	push edx
	lea ecx,[esp+0xD4]
	push ecx
	lea edx,[esp+0x58]
	push edx
	lea ecx,[esp+0xE0]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0xA0]
	push ecx
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x104],0xD
	call CWvsContext::GetPartyMemberData
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::GetUser
	mov ebx,eax
	cmp ebx,edi
	mov edi,dword ptr [ZImports::_VariantInit]
	je Block184

 Block163:
	lea eax,[esp+0x9C]
	push eax
	call edi
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block247

 Block164:
	lea edx,[esp+0x8C]
	push edx
	mov byte ptr [esp+0xE8],0xE
	call edi
	lea eax,[esp+0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block247

 Block165:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x9C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push esi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xF8],0xF
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xF4],0x10
	test eax,eax
	je Block2

 Block166:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block168

 Block167:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block168:
	mov ecx,dword ptr [esp+0x64]
	test ecx,ecx
	je Block2

 Block169:
	mov edx,dword ptr [esp+0x28]
	add edx,5
	imul edx,dword ptr [esp+0x60]
	add edx,5
	push edx
	push 5
	mov byte ptr [esp+0xFC],0xF
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xE4],0xE
	cmp word ptr [esp+0x8C],di
	jne Block172

 Block170:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [esp+0xE4],0xD
	cmp word ptr [esp+0x9C],di
	jne Block176

 Block174:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block183

 Block178:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x69]
	push edx
	add eax,0x61
	push eax
	mov byte ptr [esp+0xEC],0x11
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [ebp+0x2138]
	push eax
	add ebp,0x2130
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,edi
	shl eax,6
	cdq
	idiv ecx
	add esp,0x10
	mov byte ptr [esp+0xE4],0xD
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block199

 Block179:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block182

 Block180:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block182

 Block181:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block182:
	mov dword ptr [esp+0x2C],0
	jmp Block199

 Block183:
	mov eax,dword ptr [ebx+0x19E0]
	shl eax,6
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x18],eax
	jmp Block199

 Block184:
	lea ecx,[esp+0xAC]
	push ecx
	call edi
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jl Block247

 Block185:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0xE8],0x12
	call edi
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block247

 Block186:
	lea edx,[esp+0xAC]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0xC0]
	push eax
	push esi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xF8],0x13
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xF4],0x14
	cmp eax,ebx
	je Block2

 Block187:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x30],ebx
	call eax
	cmp eax,ebx
	jge Block189

 Block188:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block189:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebx
	je Block2

 Block190:
	mov edx,dword ptr [esp+0x28]
	add edx,5
	imul edx,dword ptr [esp+0x60]
	add edx,5
	push edx
	push 5
	mov byte ptr [esp+0xFC],0x13
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xE4],0x12
	cmp word ptr [esp+0xBC],di
	jne Block193

 Block191:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	cmp eax,ebx
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea ecx,[esp+0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov byte ptr [esp+0xE4],0xD
	cmp word ptr [esp+0xAC],di
	jne Block197

 Block195:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	cmp eax,ebx
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block198:
	mov dword ptr [esp+0x18],ebx

 Block199:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],0xFF
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x38]
	mov ebp,dword ptr [edx+0xB30]
	xor ebx,ebx
	mov byte ptr [esp+0xE4],0x15
	cmp eax,ebx
	je Block2

 Block200:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x58]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block202

 Block201:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block202:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov edi,dword ptr [esp+0x58]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block204

 Block203:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block204:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x78]
	add edi,5
	imul edi,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x30]
	push ebp
	add edi,8
	push edi
	add eax,0xFFFFFFB8
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block206

 Block205:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block206:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xE4],0xD
	jne Block209

 Block207:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,ebx
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block212

 Block211:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block212:
	mov ebx,dword ptr [esp+0x20]
	add ebx,0xFFFFFFB8
	lea ecx,[ecx]

 Block213:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block215

 Block214:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block215:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	lea eax,[ecx+edx-0x48]
	mov ecx,3
	cmp ebx,eax
	jae Block226

 Block216:
	mov word ptr [esp+0x74],cx
	mov dword ptr [esp+0x7C],0xFF
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [edx+0xB34]
	mov byte ptr [esp+0xE4],0x16
	test eax,eax
	je Block2

 Block217:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov ebp,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block219

 Block218:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push ebp
	push eax
	call _com_issue_errorex

 Block219:
	mov edx,dword ptr [esp+0x74]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x90]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x30]
	add eax,5
	imul eax,dword ptr [esp+0x60]
	push edi
	add eax,8
	push eax
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block221

 Block220:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block221:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xE4],0xD
	jne Block224

 Block222:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block213

 Block224:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block225:
	inc ebx
	jmp Block213

 Block226:
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],0xFF
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x38]
	mov ebp,dword ptr [edx+0xB2C]
	xor ebx,ebx
	mov byte ptr [esp+0xE4],0x17
	cmp eax,ebx
	je Block2

 Block227:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block229

 Block228:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block229:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov edi,dword ptr [esp+0x20]
	lea edx,[esp+0x58]
	push edx
	push esi
	mov dword ptr [esp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block231

 Block230:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block231:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	add edi,5
	imul edi,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x68]
	push ebp
	add edi,5
	push edi
	add eax,0xFFFFFFB5
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block233

 Block232:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block233:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xE4],0xD
	jne Block236

 Block234:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block237:
	mov eax,dword ptr [esp+0x4C]
	inc dword ptr [esp+0x50]
	mov byte ptr [esp+0xE4],0xC
	cmp eax,ebx
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block239:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xE4],2
	cmp eax,ebx
	je Block241

 Block240:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block241:
	mov eax,dword ptr [esp+0x24]
	add dword ptr [esp+0x14],4
	inc eax
	cmp eax,6
	mov dword ptr [esp+0x24],eax
	jl Block160

 Block242:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xE8],1
	call edx
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xE4],0
	test eax,eax
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0xE4],0xFFFFFFFF
	test eax,eax
	je Block246

 Block245:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block246:
	mov ecx,dword ptr [esp+0xDC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD4
	ret 4

 Block247:
	push eax
	call _com_issue_error
}
}
// Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_
__SUB(004B8AB0, __cdecl, 83641,  int32_t, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, const CTabGuildAlliance::GUILDITEM&, CTabGuildAlliance::LevelDescComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	mov esi,dword ptr [ebp+0x10]
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov edi,ebx
	shl edi,4
	sub edi,ebx
	add edi,edi
	add edi,edi
	add edi,edi

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	call CTabGuildAlliance::LevelDescComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add edi,0x78
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec esi
	cmp dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0xC],esi
	jge Block10

 Block6:
	mov edi,esi
	shl edi,4
	sub edi,esi
	add edi,edi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,edi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuildAlliance::LevelDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec esi
	sub edi,0x78
	cmp dword ptr [ebp+0xC],esi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],esi

 Block10:
	cmp ebx,esi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx]
	mov edx,esi
	shl edx,4
	sub edx,esi
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	lea edx,[eax+edx*8]
	lea eax,[eax+ecx*8]
	mov ecx,0x1E
	mov esi,eax
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1E
	mov esi,edx
	mov edi,eax
	rep movsd
	mov ecx,0x1E
	lea esi,[esp+0x18]
	mov edi,edx
	rep movsd
	mov esi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CWndAllianceGrade::OnCreate
_SUB_EXCEPTION_HANDLER(4CE650)
__SUB_CLASS_THIS(004CE650, __thiscall, 40691,  CWndAllianceGrade, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CE650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea ebp,[esi+0xD4]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	push ebx
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__85
	call _xbstr_t::_ctor_0
	mov ecx,esi
	call CWnd::SetBackgrnd
	lea eax,[esp+0x14]
	push 0xCE0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xC0]
	mov dword ptr [esp+0x50],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x4C],edi
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0xCE1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xC4]
	mov dword ptr [esp+0x50],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],edi
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x1899
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xD0]
	mov dword ptr [esp+0x50],2
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xCC]
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0xC8]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],edi
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	push ebx
	push ebx
	push ebx
	push 0x85C
	push offset _S_UIUIWINDOW2IMGUS__79
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x64],3
	mov dword ptr [esp+0x4C],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x4C],4
	cmp eax,ebx
	je Block26

 Block7:
	add eax,8
	cmp eax,ebx
	je Block26

 Block8:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block10

 Block9:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block12

 Block11:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block12:
	mov byte ptr [esp+0x4C],3
	cmp dword ptr [esp+0x20],ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block14:
	push ebx
	push ebx
	push ebx
	push 0x85D
	push offset _S_UIUIWINDOW2IMGUS__78
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x4C],5
	cmp eax,ebx
	je Block27

 Block15:
	add eax,8
	cmp eax,ebx
	je Block27

 Block16:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block18

 Block17:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block20:
	mov byte ptr [esp+0x4C],3
	cmp dword ptr [esp+0x20],ebx
	je Block22

 Block21:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block22:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x4C],6
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x50],7
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x4C],8
	cmp edi,ebx
	jne Block28

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	xor edi,edi
	jmp Block10

 Block27:
	xor edi,edi
	jmp Block18

 Block28:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],7
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],6
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],3
	cmp eax,ebx
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x4C],9
	cmp edi,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	cmp eax,ebx
	jge Block42

 Block41:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],3
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov ecx,esi
	call CWndAllianceGrade::LoadData
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// InsertionSort_CTabFriend__FRIENDITEM_FI_NameAscComp_
_SUB_EXCEPTION_HANDLER(4BD450)
__SUB(004BD450, __cdecl, 83662,  void, ZArray<CTabFriend::FRIENDITEM>&, int32_t, int32_t, FI_NameAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BD450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x48],eax
	mov ebx,dword ptr [esp+0x60]
	cmp ebx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x18],ebx
	jg Block9

 Block1:
	mov ebp,dword ptr [esp+0x5C]
	lea eax,[ebx+ebx*2]
	shl eax,4
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov esi,dword ptr [ebp]
	add esi,eax
	mov eax,dword ptr [esi]
	lea ecx,[esi+4]
	push ecx
	lea ecx,[esp+0x24]
	mov edi,ebx
	mov dword ptr [esp+0x20],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+8]
	mov dword ptr [esp+0x24],edx
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x28],eax
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [esp+0x2C],ecx
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x30],edx
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x34],eax
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [esi+0x20]
	mov dword ptr [esp+0x3C],edx
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esp+0x40],eax
	mov cl,byte ptr [esi+0x28]
	mov byte ptr [esp+0x44],cl
	add esi,0x2C
	push esi
	lea ecx,[esp+0x4C]
	call ZXString<char>::op_assign
	cmp ebx,dword ptr [esp+0x60]
	jle Block8

 Block4:
	mov ebx,dword ptr [esp+0x14]
	nop

 Block5:
	mov edx,dword ptr [ebp]
	lea eax,[edx+ebx-0x30]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block7

 Block6:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+ebx-0x30]
	lea esi,[eax+ebx]
	lea edx,[esi-0x2C]
	mov dword ptr [esi],ecx
	push edx
	lea ecx,[esi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi-0x28]
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [esi-0x24]
	mov dword ptr [esi+0xC],ecx
	mov edx,dword ptr [esi-0x20]
	mov dword ptr [esi+0x10],edx
	mov eax,dword ptr [esi-0x1C]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [esi-0x18]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [esi-0x14]
	mov dword ptr [esi+0x1C],edx
	mov eax,dword ptr [esi-0x10]
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [esi-0xC]
	mov dword ptr [esi+0x24],ecx
	mov dl,byte ptr [esi-8]
	lea eax,[esi-4]
	push eax
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],dl
	call ZXString<char>::op_assign
	dec edi
	sub ebx,0x30
	cmp edi,dword ptr [esp+0x60]
	jg Block5

 Block7:
	mov ebx,dword ptr [esp+0x18]

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	lea esi,[edi+edi*2]
	shl esi,4
	add esi,dword ptr [ebp]
	lea edx,[esp+0x20]
	mov dword ptr [esi],ecx
	push edx
	lea ecx,[esi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xC],ecx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x10],edx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0x14],eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esi+0x1C],edx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x24],ecx
	mov dl,byte ptr [esp+0x44]
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esi+0x2C]
	mov byte ptr [esi+0x28],dl
	call ZXString<char>::op_assign
	add dword ptr [esp+0x14],0x30
	inc ebx
	cmp ebx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x18],ebx
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call CTabFriend::FRIENDITEM::~FRIENDITEM
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CUIUserList::CreateAllianceButton
_SUB_EXCEPTION_HANDLER(4C0450)
__SUB_CLASS_THIS(004C0450, __thiscall, 40179,  CUIUserList, int32_t, long, const CTabGuildAlliance::SectionData&, const tagRECT&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x40]
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [edi+4]
	mov edx,dword ptr [esp+0x44]
	push eax
	push ecx
	push edx
	call PtInRect
	test eax,eax
	je Block23

 Block1:
	mov ecx,dword ptr [edi+8]
	mov ebx,dword ptr [edi+4]
	mov eax,5
	sub eax,dword ptr [esp+0x48]
	add ebx,0xA
	lea ebp,[eax+eax*4]
	add ebp,ebp
	add ebp,ebp
	xor eax,eax
	add ecx,ebp
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],eax
	cmp dword ptr [esi+ecx*8+0xB54],eax
	jne Block8

 Block2:
	cmp dword ptr [edi],eax
	mov eax,offset _S_UIUIWINDOW2IMGUS__51
	jne Block4

 Block3:
	mov eax,offset _S_UIUIWINDOW2IMGUS__50

 Block4:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov edx,dword ptr [esp+0x3C]
	push eax
	lea ecx,[esi+edx*8+0xB50]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push 0
	push edx
	mov edx,dword ptr [esp+0x48]
	push ebx
	add edx,0x820
	push edx
	push esi
	call eax

 Block8:
	mov ebx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [edi+0x10]
	add ebx,ebx
	add eax,0xA
	add ecx,ebp
	cmp dword ptr [esi+ebx*8+0xB7C],0
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ecx
	jne Block14

 Block9:
	push offset _S_UIUIWINDOW2IMGUS__49
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x34],2
	test eax,eax
	je Block11

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	lea ecx,[esi+ebx*8+0xB78]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 0
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	lea eax,[ebx+0x825]
	push eax
	push esi
	call edx
	cmp dword ptr [edi+0x18],1
	jne Block14

 Block13:
	mov eax,dword ptr [esi+ebx*8+0xB7C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block14:
	cmp dword ptr [esi+ebx*8+0xB84],0
	lea ebp,[esi+ebx*8+0xB84]
	jne Block20

 Block15:
	push offset _S_UIUIWINDOW2IMGUS__48
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x34],3
	test eax,eax
	je Block17

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push eax
	lea ecx,[esi+ebx*8+0xB80]
	mov byte ptr [esp+0x38],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push 0
	push edx
	mov edx,dword ptr [edi+0x14]
	add edx,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x4C]
	lea edx,[edx+edx+0x826]
	push edx
	push esi
	call eax
	mov ecx,dword ptr [edi+0x18]
	cmp ecx,dword ptr [edi+0x1C]
	jne Block20

 Block19:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block20:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,1

 Block23:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x10
}
}
// CTabGuild::JobDescComp::operator()
__SUB_CLASS_THIS(004B7420, __thiscall, 40431,  CTabGuild::JobDescComp, int32_t, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	ret 8

 Block2:
	jle Block4

 Block3:
	mov eax,1
	pop esi
	ret 8

 Block4:
	mov eax,dword ptr [esi+4]
	push eax
	lea ecx,[edx+4]
	call ZXString<char>::CompareNoCase
	xor ecx,ecx
	test eax,eax
	setl cl
	pop esi
	mov eax,ecx
	ret 8
}
}
// CWndAllianceGrade::OnSaveGradeName
_SUB_EXCEPTION_HANDLER(4CF4F0)
__SUB_CLASS_THIS0(004CF4F0, __thiscall, 40690,  CWndAllianceGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CF4F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0x37EE]
	test eax,eax
	je Block14

 Block1:
	mov ecx,ebp
	call CWvsContext::AmIAllianceMaster
	test eax,eax
	je Block14

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xD07
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block14

 Block3:
	xor eax,eax
	add esi,0xAC
	mov ebx,esi

 Block4:
	lea edi,[eax+1]
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWvsContext::GetAllianceGradeName
	mov eax,dword ptr [ebx]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jne Block9

 Block5:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,edi
	add ebx,4
	cmp eax,5
	jl Block4

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xD01
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block9:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x34],ebx
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push 0xA7
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],1
	call COutPacket::Encode1
	mov edi,5

 Block12:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	add esi,4
	sub edi,1
	jne Block12

 Block13:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x34],ebx
	call ZArray<unsigned char>::RemoveAll

 Block14:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CUIPartyHP::Create
_SUB_EXCEPTION_HANDLER(4D1CE0)
__SUB_CLASS_THIS0(004D1CE0, __thiscall, 41033,  CUIPartyHP, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D1CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push 1
	push eax
	mov dword ptr [esp+0x34],esi
	call get_basic_font
	add esp,8
	xor ebx,ebx
	lea ecx,[esi+0x3608]
	mov dword ptr [esp+0x60],ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ecx
	jmp Block3

 Block2:
	mov esi,dword ptr [esp+0x2C]

 Block3:
	mov edx,dword ptr [esp+0x1C]
	cmp dword ptr [edx],ebx
	je Block16

 Block4:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0x80],2
	call CWvsContext::GetPartyMemberData
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block21

 Block5:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x6C],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x68],4
	cmp ecx,ebx
	je Block20

 Block6:
	mov byte ptr [esp+0x68],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x48],8
	mov esi,eax
	mov byte ptr [esp+0x60],2
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,dword ptr [esp+0x14]
	jle Block12

 Block11:
	mov dword ptr [esp+0x14],esi

 Block12:
	mov eax,dword ptr [esp+0x28]
	inc dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	add dword ptr [esp+0x1C],4
	inc ebp
	cmp ebp,6
	jl Block2

 Block17:
	mov eax,dword ptr [esp+0x14]
	add eax,0x64
	cmp eax,0x96
	mov dword ptr [esp+0x14],eax
	jge Block19

 Block18:
	mov dword ptr [esp+0x14],0x96

 Block19:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	jne Block22

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x14]
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x30],ebx
	call edx
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi+0xAD0]
	add esi,5
	imul esi,dword ptr [esp+0x20]
	lea eax,[edi+0xAFC]
	push eax
	lea ebp,[edi+0xAEC]
	push ebp
	lea ebx,[edi+0xAE8]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add esi,5
	call CConfig::GetUIWndPos
	mov ecx,dword ptr [edi+0xAD0]
	lea edx,[edi+0xAF4]
	push edx
	lea eax,[edi+0xAF0]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetUIWndPosLarge
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [ebx]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push esi
	push edx
	push eax
	push ecx
	mov ecx,edi
	mov byte ptr [edi+0xAF9],1
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
_SUB_EXCEPTION_HANDLER(4C0B10)
__SUB(004C0B10, __cdecl, 83696,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::NameAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0B10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	mov ecx,dword ptr [eax+edx+4]
	add eax,edx
	push ecx
	lea ecx,[eax-0x70]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block10

 Block9:
	mov ecx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add ecx,ebx
	imul ecx,0x74
	lea edx,[edi+eax-0x74]
	push edx
	lea ecx,[ecx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov eax,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_
_SUB_EXCEPTION_HANDLER(4BDBF0)
__SUB(004BDBF0, __cdecl, 83674,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::LevelDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BDBF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::LevelDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuildAlliance::OnPagePrev
__SUB_CLASS_THIS(004B9F70, __thiscall, 40528,  CTabGuildAlliance, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	shl eax,7
	push esi
	mov esi,ecx
	lea ecx,[eax+esi+0xC8]
	mov eax,dword ptr [ecx+0x18]
	dec eax
	cmp eax,1
	jg Block2

 Block1:
	mov eax,1

 Block2:
	mov dword ptr [ecx+0x18],eax
	mov ecx,dword ptr [esi+0x8C]
	call CUIUserList::SetAllianceViewItem
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CTabFriend::ChangeBlockOption
__SUB_CLASS_THIS(004B7280, __thiscall, 40066,  CTabFriend, void, unsigned long, short, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	movsx esi,word ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x18]
	push edi
	push esi
	push ebx
	call CConfig::ChangeBlockOption
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	push esi
	push ebx
	call CWvsContext::ChangeBlockOption
	test eax,eax
	jne Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::LoadBlockFriend
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::LoadFriend

 Block3:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CTabFriend::CreateButton
_SUB_EXCEPTION_HANDLER(4BC7C0)
__SUB_CLASS_THIS0(004BC7C0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BC7C0
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
	mov esi,ecx
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7DA
	push offset _S_UIUIWINDOW2IMGUS__47
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block123

 Block1:
	add eax,8
	je Block123

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+8],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7DB
	push offset _S_UIUIWINDOW2IMGUS__46
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],1
	test eax,eax
	je Block124

 Block9:
	add eax,8
	je Block124

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block12:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 0x7DC
	push offset _S_UIUIWINDOW2IMGUS__45
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],2
	test eax,eax
	je Block125

 Block17:
	add eax,8
	je Block125

 Block18:
	lea edi,[eax-8]
	test edi,edi
	je Block20

 Block19:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block20:
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7DD
	push offset _S_UIUIWINDOW2IMGUS__44
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],3
	test eax,eax
	je Block126

 Block25:
	add eax,8
	je Block126

 Block26:
	lea edi,[eax-8]
	test edi,edi
	je Block28

 Block27:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block28:
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7DE
	push offset _S_UIUIWINDOW2IMGUS__43
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],4
	test eax,eax
	je Block127

 Block33:
	add eax,8
	je Block127

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block36:
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block40:
	push 0
	push 0x11D
	push 0xD0
	push 0x7DF
	push offset _S_UIUIWINDOWIMGUSE__1
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],5
	test eax,eax
	je Block128

 Block41:
	add eax,8
	je Block128

 Block42:
	lea edi,[eax-8]
	test edi,edi
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block44:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0x15E
	push 0xA
	push 0x7E0
	push offset _S_UIUIWINDOWIMGUSE
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],6
	test eax,eax
	je Block129

 Block49:
	add eax,8
	je Block129

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block52:
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block54:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block56:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7E1
	push offset _S_UIUIWINDOW2IMGUS__42
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],7
	test eax,eax
	je Block130

 Block57:
	add eax,8
	je Block130

 Block58:
	lea edi,[eax-8]
	test edi,edi
	je Block60

 Block59:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block60:
	mov eax,dword ptr [esi+0x40]
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block62

 Block61:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block62:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block64

 Block63:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block64:
	push 0
	push 0
	push 0
	push 0x7E2
	push offset _S_UIUIWINDOW2IMGUS__41
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],8
	test eax,eax
	je Block131

 Block65:
	add eax,8
	je Block131

 Block66:
	lea edi,[eax-8]
	test edi,edi
	je Block68

 Block67:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block68:
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block70

 Block69:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block70:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block72

 Block71:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block72:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7E3
	push offset _S_UIUIWINDOW2IMGUS__40
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],9
	test eax,eax
	je Block132

 Block73:
	add eax,8
	je Block132

 Block74:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block75:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block76:
	mov eax,dword ptr [esi+0x50]
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block78:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block80

 Block79:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block80:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7E4
	push offset _S_UIUIWINDOW2IMGUS__39
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xA
	test eax,eax
	je Block133

 Block81:
	add eax,8
	je Block133

 Block82:
	lea edi,[eax-8]
	test edi,edi
	je Block84

 Block83:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block84:
	mov eax,dword ptr [esi+0x58]
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block86

 Block85:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block86:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block88

 Block87:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block88:
	push 0
	push 0
	push 0
	push 0x7E5
	push offset _S_UIUIWINDOW2IMGUS__38
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xB
	test eax,eax
	je Block134

 Block89:
	add eax,8
	je Block134

 Block90:
	lea edi,[eax-8]
	test edi,edi
	je Block92

 Block91:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block92:
	mov eax,dword ptr [esi+0x60]
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block94

 Block93:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block94:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block96

 Block95:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block96:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7E6
	push offset _S_UIUIWINDOW2IMGUS__37
	lea eax,[esp+0x30]
	push eax
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xC
	test eax,eax
	je Block135

 Block97:
	add eax,8
	je Block135

 Block98:
	lea edi,[eax-8]
	test edi,edi
	je Block100

 Block99:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block100:
	mov eax,dword ptr [esi+0x68]
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block102

 Block101:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block102:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block104

 Block103:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block104:
	mov ecx,dword ptr [esi+0x7C]
	push 0
	push 0
	push 0
	push 0x7E7
	push offset _S_UIUIWINDOW2IMGUS__36
	lea edx,[esp+0x30]
	push edx
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xD
	test eax,eax
	je Block136

 Block105:
	add eax,8
	je Block136

 Block106:
	lea edi,[eax-8]
	test edi,edi
	je Block108

 Block107:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block108:
	mov eax,dword ptr [esi+0x70]
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block110

 Block109:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block110:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block112

 Block111:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block112:
	push 0
	push 0
	push 0
	push 0x7E8
	push offset _S_UIUIWINDOW2IMGUS__35
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esi+0x7C]
	add ecx,0xCA8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],0xE
	test eax,eax
	je Block137

 Block113:
	add eax,8
	je Block137

 Block114:
	lea edi,[eax-8]
	test edi,edi
	je Block116

 Block115:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block116:
	mov eax,dword ptr [esi+0x78]
	mov dword ptr [esi+0x78],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block118

 Block117:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block118:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block120

 Block119:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],0

 Block120:
	add esi,0x40
	mov edi,8
	mov edi,edi

 Block121:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	add esi,8
	sub edi,1
	jne Block121

 Block122:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	mov esp,ebp
	pop ebp
	ret

 Block123:
	xor edi,edi
	jmp Block4

 Block124:
	xor edi,edi
	jmp Block12

 Block125:
	xor edi,edi
	jmp Block20

 Block126:
	xor edi,edi
	jmp Block28

 Block127:
	xor edi,edi
	jmp Block36

 Block128:
	xor edi,edi
	jmp Block44

 Block129:
	xor edi,edi
	jmp Block52

 Block130:
	xor edi,edi
	jmp Block60

 Block131:
	xor edi,edi
	jmp Block68

 Block132:
	xor edi,edi
	jmp Block76

 Block133:
	xor edi,edi
	jmp Block84

 Block134:
	xor edi,edi
	jmp Block92

 Block135:
	xor edi,edi
	jmp Block100

 Block136:
	xor edi,edi
	jmp Block108

 Block137:
	xor edi,edi
	jmp Block116
}
}
// CUIUserList::IsKindOf
__SUB_CLASS_THIS(004BAA60, __thiscall, 40202,  CUIUserList, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIUserList::ms_RTTI_CUIUserList
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// Partition_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_
__SUB(004B8240, __cdecl, 83616,  int32_t, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, const CTabGuild::GUILDITEM&, CTabGuild::GradeAscComp&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	push esi
	push edi
	mov edi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],ecx

 Block1:
	cmp ebx,dword ptr [ebp+0x10]
	jge Block5

 Block2:
	mov esi,ebx
	imul esi,0x74

 Block3:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	call CTabGuild::GradeAscComp::operator()
	test eax,eax
	je Block5

 Block4:
	inc ebx
	add esi,0x74
	cmp ebx,dword ptr [ebp+0x10]
	jl Block3

 Block5:
	dec edi
	cmp dword ptr [ebp+0xC],edi
	mov dword ptr [esp+0xC],edi
	jge Block10

 Block6:
	mov esi,edi
	imul esi,0x74

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp+0x18]
	add eax,esi
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call CTabGuild::GradeAscComp::operator()
	test eax,eax
	je Block9

 Block8:
	dec edi
	sub esi,0x74
	cmp dword ptr [ebp+0xC],edi
	jl Block7

 Block9:
	mov dword ptr [esp+0xC],edi

 Block10:
	cmp ebx,edi
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx]
	mov eax,edi
	mov edx,ebx
	imul eax,0x74
	imul edx,0x74
	add edx,ecx
	add eax,ecx
	mov ecx,0x1D
	mov esi,edx
	lea edi,[esp+0x18]
	rep movsd
	mov ecx,0x1D
	mov esi,eax
	mov edi,edx
	rep movsd
	mov ecx,0x1D
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov edi,dword ptr [esp+0xC]
	inc ebx
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x94]
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CTabGuildAlliance::OnPageNext
__SUB_CLASS_THIS(004B9FC0, __thiscall, 40528,  CTabGuildAlliance, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	shl eax,7
	push esi
	mov esi,ecx
	mov edx,dword ptr [eax+esi+0xE4]
	lea ecx,[eax+esi+0xC8]
	mov eax,dword ptr [ecx+0x18]
	inc eax
	cmp eax,edx
	jl Block2

 Block1:
	mov eax,edx

 Block2:
	mov dword ptr [ecx+0x18],eax
	mov ecx,dword ptr [esi+0x8C]
	call CUIUserList::SetAllianceViewItem
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CUIUserList::SetScrollBar
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_
__SUB(004D9770, __cdecl, 83781,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::GradeAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuildAlliance::OnPartyInvite
_SUB_EXCEPTION_HANDLER(4CCF10)
__SUB_CLASS_THIS0(004CCF10, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CCF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x8C]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block6

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block6

 Block2:
	mov dword ptr [esp+0x10],esi
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x34],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x94],esi
	call CTabGuildAlliance::GetGuildItem
	or edi,0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block3:
	call get_field
	cmp eax,esi
	je Block5

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	call CField::SendJoinPartyMsg

 Block5:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x8C],edi
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM

 Block6:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x84
	ret
}
}
// CTabGuild::OnCreate
_SUB_EXCEPTION_HANDLER(4C6F60)
__SUB_CLASS_THIS0(004C6F60, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C6F60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x58],0
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,1
	push offset _S_UIUIWINDOW2IMGUS__69
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x6C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block17:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x54],edi
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x2C]
	push eax
	call ebp

 Block21:
	lea ecx,[esp+0x14]
	push 0xCE0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x8C]
	mov dword ptr [esp+0x58],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],edi
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea edx,[esp+0x14]
	push 0xCE1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x90]
	mov dword ptr [esp+0x58],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],edi
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea eax,[esp+0x18]
	push 0xCE2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x9C]
	mov dword ptr [esp+0x58],6
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0x98]
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esi+0x94]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],edi
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	push offset _S_
	lea ecx,[esi+0xA0]
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CTabParty::OnInvite
_SUB_EXCEPTION_HANDLER(4C6E10)
__SUB_CLASS_THIS0(004C6E10, __thiscall, 40281,  CTabParty, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C6E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block9

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block9

 Block2:
	add eax,8
	je Block9

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push 0
	mov dword ptr [esi+0x90],1
	push 3
	mov ecx,esi
	mov dword ptr [esp+0x30],1
	mov dword ptr [esi+0x94],0x196A
	call CUtilDlgEx::SetUtilDlgEx_0
	push 0
	push 0
	push 0xC
	push 4
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block13

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	mov edi,eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x20],2
	test esi,esi
	je Block10

 Block7:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block10

 Block8:
	mov ecx,esi
	jmp Block11

 Block9:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block10:
	xor ecx,ecx

 Block11:
	push edi
	call CField::SendJoinPartyMsg
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push 0
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// Median_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
__SUB(004B7B40, __cdecl, 83594,  const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, const CTabGuild::GUILDITEM&, CTabGuild::NameAscComp&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov eax,dword ptr [ebp+4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	lea esi,[ebp+4]
	add edi,4
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	mov ebx,dword ptr [esp+0x1C]
	test eax,eax
	mov eax,dword ptr [ebx+4]
	push eax
	jge Block5

 Block1:
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block7

 Block2:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block4

 Block3:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	ret

 Block4:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block5:
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block4

 Block6:
	mov eax,dword ptr [ebx+4]
	push eax
	mov ecx,esi
	call ZXString<char>::CompareNoCase
	test eax,eax
	mov eax,ebx
	jl Block8

 Block7:
	mov eax,ebp

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CTabBlackList::~CTabBlackList
_SUB_EXCEPTION_HANDLER(4C20F0)
__SUB_CLASS_THIS0(004C20F0, __thiscall, 40720,  CTabBlackList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C20F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabBlackList::`vftable'
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],0
	call ZArray<CTabBlackList::BLACKLISTITEM>::RemoveAll
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabGuild::Update
_SUB_EXCEPTION_HANDLER(4C9110)
__SUB_CLASS_THIS0(004C9110, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0xA4],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block87

 Block1:
	lea esi,[edi+0xA0]
	push offset _S_
	mov ecx,esi
	call ZXString<char>::Compare
	test eax,eax
	je Block87

 Block2:
	mov eax,3
	mov word ptr [ebp-0x20],ax
	mov dword ptr [ebp-0x18],0xFFFFFFFE
	mov ecx,dword ptr [edi+0xA4]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [ebp-0x20],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov dword ptr [ebp-0x28],ebx
	lea edx,[ebp-0x24]
	push 0x3D0
	push edx
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp-0x28]
	push ecx
	push eax
	mov byte ptr [ebp-4],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x38]
	push edx
	call ebx
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],3
	call ebx
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[ebp-0x38]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push 0xF
	push 0xB0
	call IWzCanvas::Create
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],1
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	lea ecx,[ebp-0x20]
	push ecx
	call ebx
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov eax,dword ptr [esi]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,6
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [edi+0x70]
	mov eax,dword ptr [eax+0xC8C]
	mov esi,esp
	lea ecx,[ebp-0x20]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	push eax
	mov eax,dword ptr [edi+0xA0]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [edi+0xA8]
	push 0
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],bx
	jne Block37

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block33:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x20],bx
	jne Block38

 Block35:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block39

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block37:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x38]
	push ecx
	call esi
	jmp Block34

 Block38:
	lea eax,[ebp-0x20]
	push eax
	call esi

 Block39:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	call ebx
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],8
	call ebx
	lea ecx,[ebp-0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[ebp-0x68]
	push edx
	mov byte ptr [ebp-4],9
	call ebx
	lea eax,[ebp-0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],0xB
	call ebx
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [edi+0xA4]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x58]
	push eax
	lea edx,[ebp-0x68]
	push edx
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp-0x28]
	lea edx,[ebp-0x38]
	push edx
	push eax
	lea edx,[ebp-0x78]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x78],8
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[ebp-0x78]
	push ecx
	call esi

 Block55:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xB
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp-0x38]
	push eax
	call esi

 Block59:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xA
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x20]
	push edx
	call esi

 Block63:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],9
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x68]
	push ecx
	call esi

 Block67:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],8
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0x58]
	push eax
	call esi

 Block71:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],1
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block75:
	lea eax,[ebp-0x48]
	push eax
	call ebx
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov eax,dword ptr [edi+0xA0]
	lea edx,[ebp-0x48]
	push edx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0xD
	or esi,0xFFFFFFFF
	add dword ptr [edi+0xA8],esi
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0x70]
	add eax,0xC84
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [edi+0xA8]
	add ecx,eax
	sets bl
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],1
	jne Block82

 Block80:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	test bl,bl
	je Block85

 Block84:
	mov dword ptr [edi+0xA8],0xFA

 Block85:
	mov eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	lea esp,[ebp-0x88]
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
	ret
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_
_SUB_EXCEPTION_HANDLER(4BE070)
__SUB(004BE070, __cdecl, 83682,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::NameDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE070
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi-0x78]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jl Block7

 Block6:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+edi]
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// CTabGuildAlliance::CTabGuildAlliance
_SUB_EXCEPTION_HANDLER(4D8060)
__SUB_CLASS_THIS(004D8060, __thiscall, 40518,  CTabGuildAlliance, void, CUIUserList*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D8060
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0xD
	push 8
	lea eax,[esi+4]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset CTabGuildAlliance::`vftable'
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 7
	push 4
	lea ecx,[esi+0x6C]
	xor edi,edi
	push ecx
	mov dword ptr [esp+0x2C],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x88],edi
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x8C],edx
	mov dword ptr [esi+0x90],edi
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x94]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0xA8]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	push offset CTabGuildAlliance::SectionData::~SectionData
	push offset CTabGuildAlliance::SectionData::_ctor_default
	push 5
	push 0x80
	lea edx,[esi+0xC8]
	push edx
	mov byte ptr [esp+0x2C],7
	call __eh_vector_ctor_iterator
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CTabGuildAlliance::OnGradeChange
_SUB_EXCEPTION_HANDLER(4BA5B0)
__SUB_CLASS_THIS(004BA5B0, __thiscall, 40523,  CTabGuildAlliance, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BA5B0
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
	mov eax,dword ptr [esi+0x8C]
	mov eax,dword ptr [eax+0xC5C]
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x20B4]
	je Block3

 Block2:
	push 0xA7
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 9
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x8C]
	mov eax,dword ptr [edx+0xC5C]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CTabGuildAlliance::OnListHeader
__SUB_CLASS_THIS(004DC110, __thiscall, 40524,  CTabGuildAlliance, void, long, long, long, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x18]
	shl eax,7
	push esi
	mov esi,ecx
	mov edx,dword ptr [esi+0x8C]
	lea ecx,[eax+esi+0xC8]
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	sub eax,5
	lea edx,[eax+eax*4]
	mov eax,dword ptr [esp+0x20]
	add ebp,0xFFFFFFF6
	cmp dword ptr [ecx],0
	lea eax,[eax+edx*4]
	mov dword ptr [esp+0x10],eax
	lea ebx,[ecx+0x20]
	je Block8

 Block1:
	push eax
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	je Block8

 Block2:
	push edi
	mov edi,1
	add ebx,0x10
	jmp Block4

 Block4:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	jne Block7

 Block5:
	inc edi
	add ebx,0x10
	cmp edi,4
	jle Block4

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block7:
	mov edx,dword ptr [esp+0x1C]
	push edi
	push edx
	mov ecx,esi
	call CTabGuildAlliance::OnSortMember
	mov ecx,dword ptr [esi+0x8C]
	call CUIUserList::SetAllianceViewItem
	mov ecx,dword ptr [esi+0x8C]
	push 0
	call CWnd::InvalidateRect
	pop edi

 Block8:
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_
__SUB(004D97B0, __cdecl, 83783,  void, ZArray<CTabGuild::GUILDITEM>&, NakedParam<CTabGuild::GradeDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [edx]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor eax,eax
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	imul eax,0x74
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea eax,[eax+ecx-0x74]
	push eax
	push ecx
	push edx
	call ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabFriend::OnBlockFriend
_SUB_EXCEPTION_HANDLER(4D82B0)
__SUB_CLASS_THIS0(004D82B0, __thiscall, 40045,  CTabFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D82B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x7C]
	mov ecx,dword ptr [eax+0xC5C]
	xor ebx,ebx
	cmp ecx,ebx
	jne Block3

 Block1:
	mov edx,dword ptr [eax+0xC60]
	cmp edx,ebx
	je Block43

 Block2:
	cmp byte ptr [edx],bl
	je Block43

 Block3:
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x24],ebx
	cmp ecx,ebx
	jne Block5

 Block4:
	push ecx
	add eax,0xC60
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [esp+0x1C],1
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,edi
	call CTabFriend::IsGroupBlocked
	xor ecx,ecx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x24],ecx

 Block5:
	mov dword ptr [esp+0x20],ebx
	xor esi,esi

 Block6:
	mov eax,dword ptr [edi+0xA8]
	mov dword ptr [esp+0x2C],esi
	cmp eax,ebx
	je Block43

 Block7:
	mov edx,dword ptr [esp+0x20]
	cmp edx,dword ptr [eax-4]
	jae Block43

 Block8:
	cmp dword ptr [esp+0x14],ebx
	je Block10

 Block9:
	mov eax,dword ptr [edi+0x7C]
	mov ecx,dword ptr [edi+0xA8]
	add eax,0xC60
	push eax
	add ecx,esi
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block40

 Block10:
	mov ecx,dword ptr [edi+0xA8]
	lea ebp,[esi+ecx+0x1C]
	mov ecx,ebp
	mov dword ptr [esp+0x28],ebx
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	test eax,eax
	jbe Block40

 Block11:
	mov dword ptr [esp+0x1C],ebx

 Block12:
	mov esi,dword ptr [ebp]
	add esi,dword ptr [esp+0x1C]
	cmp dword ptr [esp+0x14],ebx
	jne Block17

 Block13:
	mov edx,dword ptr [edi+0x7C]
	mov eax,dword ptr [esi]
	cmp eax,dword ptr [edx+0xC5C]
	jne Block38

 Block14:
	cmp dword ptr [esi+0x24],ebx
	jne Block23

 Block15:
	cmp dword ptr [esi+0x20],ebx
	jne Block23

 Block16:
	xor eax,eax
	jmp Block24

 Block17:
	cmp dword ptr [esi+0x24],ebx
	jne Block20

 Block18:
	cmp dword ptr [esi+0x20],ebx
	jne Block20

 Block19:
	xor eax,eax
	jmp Block21

 Block20:
	mov eax,1

 Block21:
	mov ecx,dword ptr [esp+0x24]
	cmp eax,ecx
	je Block38

 Block22:
	jmp Block25

 Block23:
	mov eax,1

 Block24:
	xor ecx,ecx
	cmp eax,ebx
	sete cl

 Block25:
	mov edx,dword ptr [esi]
	mov eax,ecx
	push eax
	push 1
	push edx
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x24],eax
	call CTabFriend::ChangeBlockOption
	mov eax,dword ptr [esi+0x20]
	mov ecx,dword ptr [esi]
	push eax
	push ebx
	push ecx
	mov ecx,edi
	call CTabFriend::ChangeBlockOption
	mov ecx,edi
	call CTabFriend::OnClick
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x44],ebx
	cmp dword ptr [esi+0x24],ebx
	jne Block27

 Block26:
	cmp dword ptr [esi+0x20],ebx
	je Block28

 Block27:
	lea edx,[esp+0x30]
	push 0x1057
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x50],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	jmp Block29

 Block28:
	lea eax,[esp+0x34]
	push 0x1058
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x50],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]

 Block29:
	add esp,0xC
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block35

 Block32:
	cmp byte ptr [esi],bl
	je Block35

 Block33:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block35

 Block34:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push ebx
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block35:
	mov ecx,dword ptr [edi+0x7C]
	push ebx
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp dword ptr [esp+0x14],ebx
	je Block41

 Block36:
	cmp esi,ebx
	je Block38

 Block37:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov esi,dword ptr [esp+0x28]
	add dword ptr [esp+0x1C],0x30
	inc esi
	mov ecx,ebp
	mov dword ptr [esp+0x28],esi
	call ZArray<CTabFriend::FRIENDITEM>::GetCount
	cmp esi,eax
	jb Block12

 Block39:
	mov esi,dword ptr [esp+0x2C]

 Block40:
	inc dword ptr [esp+0x20]
	add esi,0x20
	jmp Block6

 Block41:
	cmp esi,ebx
	je Block43

 Block42:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CTabGuildAlliance::GetToolTipString
_SUB_EXCEPTION_HANDLER(4BF9D0)
__SUB_CLASS_THIS(004BF9D0, __thiscall, 40533,  CTabGuildAlliance, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BF9D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x8C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x63
	push 0x118
	push 0x53
	push 5
	lea eax,[esp+0xA0]
	push eax
	mov dword ptr [esp+0x28],0
	call SetRect
	mov ebx,dword ptr [esp+0xB8]
	mov edi,dword ptr [esp+0xB4]
	push ebx
	push edi
	lea ecx,[esp+0x98]
	push ecx
	call PtInRect
	test eax,eax
	je Block4

 Block1:
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esi+0xBC]
	test ecx,ecx
	je Block4

 Block2:
	cmp byte ptr [ecx],0
	je Block4

 Block3:
	mov esi,dword ptr [esp+0xB0]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	jmp Block38

 Block4:
	lea edx,[ebx-0x65]
	cmp edx,0xB7
	ja Block37

 Block5:
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [eax+0xB18]
	mov ecx,dword ptr [ecx+0x38]
	lea ecx,[ecx+ecx*4-0x19]
	lea ebp,[ebx+ecx*4]
	push ebp
	add edi,0xFFFFFFF6
	push edi
	add eax,0xC04
	push eax
	call PtInRect
	test eax,eax
	je Block8

 Block6:
	push 0x2BD

 Block7:
	mov esi,dword ptr [esp+0xB4]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block38

 Block8:
	mov edx,dword ptr [esi+0x8C]
	push ebp
	push edi
	add edx,0xC14
	push edx
	call PtInRect
	test eax,eax
	jne Block6

 Block9:
	push ebp
	push edi
	lea eax,[esi+0xF8]
	push eax
	call PtInRect
	test eax,eax
	je Block11

 Block10:
	push 0x2BF
	jmp Block7

 Block11:
	push ebp
	push edi
	lea ecx,[esi+0x178]
	push ecx
	call PtInRect
	test eax,eax
	jne Block10

 Block12:
	push ebp
	push edi
	lea edx,[esi+0x108]
	push edx
	call PtInRect
	test eax,eax
	je Block14

 Block13:
	push 0x2C0
	jmp Block7

 Block14:
	push ebp
	push edi
	lea eax,[esi+0x188]
	push eax
	call PtInRect
	test eax,eax
	jne Block13

 Block15:
	push ebp
	push edi
	lea ecx,[esi+0x118]
	push ecx
	call PtInRect
	test eax,eax
	je Block17

 Block16:
	push 0x2C1
	jmp Block7

 Block17:
	push ebp
	push edi
	lea edx,[esi+0x198]
	push edx
	call PtInRect
	test eax,eax
	jne Block16

 Block18:
	push ebp
	push edi
	lea eax,[esi+0x128]
	push eax
	call PtInRect
	test eax,eax
	je Block20

 Block19:
	push 0x2C2
	jmp Block7

 Block20:
	push ebp
	push edi
	lea ecx,[esi+0x1A8]
	push ecx
	call PtInRect
	test eax,eax
	jne Block19

 Block21:
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x40],eax
	mov edx,dword ptr [esi+0x8C]
	mov dword ptr [esp+0xA8],eax
	mov eax,dword ptr [edx+0xB18]
	mov eax,dword ptr [eax+0x38]
	push eax
	mov eax,dword ptr [esp+0xB8]
	push ebx
	push eax
	mov ecx,esi
	call CTabGuildAlliance::GetMemberIDFromPoint
	lea ecx,[esp+0x18]
	push ecx
	mov ebx,eax
	push ebx
	mov ecx,esi
	call CTabGuildAlliance::GetGuildItem
	test ebx,ebx
	je Block39

 Block22:
	cmp dword ptr [esp+0x18],0
	je Block39

 Block23:
	cmp dword ptr [esp+0x84],0
	je Block27

 Block24:
	push ebp
	push edi
	lea edx,[esp+0x4C]
	push edx
	call PtInRect
	test eax,eax
	je Block27

 Block25:
	lea eax,[esp+0x1C]
	push eax

 Block26:
	mov esi,dword ptr [esp+0xB4]
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	jmp Block38

 Block27:
	push ebp
	push edi
	lea ecx,[esp+0x5C]
	push ecx
	call PtInRect
	or ebx,0xFFFFFFFF
	test eax,eax
	je Block32

 Block28:
	cmp dword ptr [esp+0x88],0
	je Block30

 Block29:
	lea edx,[esp+0x20]
	push edx
	jmp Block26

 Block30:
	cmp dword ptr [esp+0x24],ebx
	jne Block32

 Block31:
	mov esi,dword ptr [esp+0xB0]
	push 0xF39
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA8],ebx
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	jmp Block38

 Block32:
	cmp dword ptr [esp+0x28],ebx
	jne Block34

 Block33:
	push ebp
	push edi
	lea eax,[esp+0x6C]
	push eax
	call PtInRect
	test eax,eax
	jne Block31

 Block34:
	push ebp
	push edi
	lea ecx,[esp+0x7C]
	push ecx
	call PtInRect
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esi+edx*4+0xA4]
	mov esi,dword ptr [esp+0xB0]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA8],ebx
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	jmp Block38

 Block36:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA8],ebx
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM

 Block37:
	mov esi,dword ptr [esp+0xB0]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block38:
	mov eax,esi
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x98
	ret 0xC

 Block39:
	mov esi,dword ptr [esp+0xB0]
	or ebx,0xFFFFFFFF
	push ebx
	push offset _S_
	mov ecx,esi
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xA8],ebx
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	jmp Block38
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_
_SUB_EXCEPTION_HANDLER(4BD9B0)
__SUB(004BD9B0, __cdecl, 83670,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::JobDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BD9B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xAC]
	lea eax,[edx+esi-0x74]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuild::JobDescComp::operator()
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebx]
	add ecx,esi
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuild::OnSetNotice
_SUB_EXCEPTION_HANDLER(4C9BC0)
__SUB_CLASS_THIS0(004C9BC0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9BC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	add eax,8
	je Block11

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	mov ebx,1
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD37
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	push 0x64
	push 0
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,ebx
	jne Block17

 Block6:
	lea edx,[esp+0x10]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	push 0
	push 0
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],2
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block15

 Block7:
	cmp byte ptr [eax],0
	je Block15

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block12

 Block9:
	cmp dword ptr [eax-4],0x64
	jle Block12

 Block10:
	mov byte ptr [esp+0x28],bl
	jmp Block16

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5

 Block12:
	push ebx
	push 0
	push ebx
	push 0x400
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block14

 Block13:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x11D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block15

 Block14:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x2C],3
	call get_field
	mov ecx,eax
	mov byte ptr [esp+0x2C],2
	call CField::SendSetGuildNoticeMsg

 Block15:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block19

 Block18:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret
}
}
// CWndAllianceGrade::~CWndAllianceGrade
_SUB_EXCEPTION_HANDLER(4CE540)
__SUB_CLASS_THIS0(004CE540, __thiscall, 40690,  CWndAllianceGrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CE540
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
	int 3// TODO: 	mov dword ptr [esi],offset CWndAllianceGrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndAllianceGrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndAllianceGrade::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xD4]
	mov dword ptr [esp+0x14],5
	call CLayoutMan::~CLayoutMan
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0xC0]
	push eax
	mov byte ptr [esp+0x24],4
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0xAC]
	push ecx
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 5
	push 4
	lea edx,[esi+0x94]
	push edx
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea eax,[esi+0x80]
	push eax
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CWndAllianceGrade>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabFriend::CTabFriend
__SUB_CLASS_THIS(004DA400, __thiscall, 40043,  CTabFriend, void, CUIUserList*) {
__asm {

 Block0:
	push esi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	mov esi,ecx
	push 0xF
	push 8
	lea eax,[esi+4]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset CTabFriend::`vftable'
	call __eh_vector_ctor_iterator
	mov ecx,dword ptr [esp+8]
	xor eax,eax
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0x7C],ecx
	mov eax,esi
	pop esi
	ret 4
}
}
// InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_
_SUB_EXCEPTION_HANDLER(4BE3D0)
__SUB(004BE3D0, __cdecl, 83688,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, int32_t, int32_t, CTabGuildAlliance::LevelAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE3D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA8]
	cmp ebp,dword ptr [esp+0xAC]
	mov edi,ebp
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x18],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0xA4]
	mov eax,ebp
	shl eax,4
	sub eax,ebp
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov esi,edi
	call CTabGuildAlliance::GUILDITEM::operator=
	cmp edi,ebp
	jle Block8

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0xB0]
	lea eax,[edx+edi-0x78]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CTabGuildAlliance::LevelAscComp::operator()
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	add ecx,edi
	lea edx,[ecx-0x78]
	push edx
	call CTabGuildAlliance::GUILDITEM::operator=
	dec esi
	sub edi,0x78
	cmp esi,ebp
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x18]

 Block8:
	mov edx,dword ptr [ebx]
	mov ecx,esi
	shl ecx,4
	lea eax,[esp+0x1C]
	sub ecx,esi
	push eax
	lea ecx,[edx+ecx*8]
	call CTabGuildAlliance::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x78
	inc edi
	cmp edi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x18],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_
__SUB(004D9A20, __cdecl, 83799,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::GradeDescComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_
__SUB(004D8BB0, __cdecl, 83757,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuildAlliance::JobAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuildAlliance::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::JobAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CTabGuild::Draw
_SUB_EXCEPTION_HANDLER(4C71F0)
__SUB_CLASS_THIS(004C71F0, __thiscall, 40376,  CTabGuild, long, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C71F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x17C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x34],edi
	xor ebx,ebx
	mov dword ptr [ebp+0x5C],ebx
	mov dword ptr [ebp-4],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ebp+0x20],eax
	mov dword ptr [ebp+0x28],ebx
	mov dword ptr [ebp-0x184],ebx
	mov dword ptr [ebp-0x17C],ebx
	mov dword ptr [ebp-0x180],ebx
	mov dword ptr [ebp-0x188],ebx
	mov eax,dword ptr [edi+0x70]
	mov esi,dword ptr [eax+0xC84]
	add eax,0xC84
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp+0x1C],esi
	cmp esi,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block2:
	mov eax,dword ptr [edi+0x70]
	add eax,0xC80
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x30],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [edi+0x70]
	add eax,0xC90
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x20],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [edi+0x70]
	add eax,0xC9C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xA
	mov dword ptr [ebp-0x1C],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [edi+0x70]
	add eax,0xCA0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp-0x18],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	push ebx
	or eax,0xFFFFFFFF
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__75
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	mov dword ptr [ebp-0x10],eax
	mov dword ptr [ebp+0x2C],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x3C],esp
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov ecx,dword ptr [edi+0x70]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov ecx,dword ptr [edi+0x70]
	cmp dword ptr [ecx+0xBC8],ebx
	jle Block52

 Block13:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [edi+0x74]
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xE
	cmp esi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x44],8
	lea esi,[eax+0x1A]
	mov byte ptr [ebp-4],0xC
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [ebp+0x20]
	mov eax,0xFE
	sub eax,esi
	cdq
	sub eax,edx
	mov esi,eax
	movzx eax,word ptr [ecx+0x37E3]
	sar esi,1
	cmp ax,bx
	je Block30

 Block22:
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[ebp+0x64]
	push edx
	call CWvsContext::GetGuildMarkCanvas
	mov eax,3
	mov word ptr [ebp+0x44],ax
	mov dword ptr [ebp+0x4C],0xFF
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x10
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [ebp+0x64]
	lea edx,[ebp+0x44]
	push edx
	push eax
	push 2
	push esi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0xF
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xC
	cmp eax,ebx
	je Block38

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block38

 Block30:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [edi+0x6C]
	mov byte ptr [ebp-4],0x11
	cmp ecx,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[ebp+0x44]
	push edx
	push eax
	push 2
	push esi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0xC
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x12
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov edx,dword ptr [ebp-0x20]
	lea eax,[ebp+0xC]
	push eax
	mov eax,dword ptr [edi+0x74]
	lea ecx,[ebp+0x44]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x13
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	push 6
	add esi,0x1A
	push esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x12
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	cmp word ptr [ebp+0xC],8
	mov byte ptr [ebp-4],0xC
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	test eax,eax
	je Block69

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block51:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block69

 Block52:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea eax,[ebp+0x44]
	push eax
	lea ecx,[ebp+0x64]
	push 0x16B
	push ecx
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0xC
	jne Block61

 Block59:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [ebp+0x78]
	test eax,eax
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block66

 Block65:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	mov ecx,dword ptr [ebp+0x1C]
	mov esi,dword ptr [ebp+0x64]
	push 1
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x16B
	push edx
	shr esi,1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 6
	push esi
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x3C],esp
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block68:
	call _DrawTextA
	add esp,0x18

 Block69:
	mov ecx,dword ptr [edi+0x70]
	cmp dword ptr [ecx+0xBC8],0
	jle Block90

 Block70:
	mov eax,dword ptr [edi+0xA0]
	test eax,eax
	je Block72

 Block71:
	cmp byte ptr [eax],0
	jne Block88

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0xC]
	push edx
	call esi
	lea eax,[ebp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x18
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp+0xC]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push edx
	lea eax,[ebp+0x64]
	push 0xD35
	push eax
	mov byte ptr [ebp-4],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	push 0x1D
	mov esi,8
	push esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x44],si
	jne Block83

 Block81:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0xC],si
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block93

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block87:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block93

 Block88:
	cmp dword ptr [edi+0xA4],0
	sete al
	test al,al
	je Block93

 Block89:
	mov ecx,edi
	call CTabGuild::MakeGuildNoticeLayer
	jmp Block93

 Block90:
	cmp dword ptr [edi+0xA4],0
	sete al
	test al,al
	sete al
	test al,al
	je Block93

 Block91:
	mov eax,dword ptr [edi+0xA4]
	test eax,eax
	je Block93

 Block92:
	mov dword ptr [edi+0xA4],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block93:
	xor eax,eax
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp+0x24],eax

 Block94:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [ebp+0x34]
	mov edx,eax
	imul edx,0x7C
	lea esi,[edx+ecx+0xAC]
	mov ecx,dword ptr [ecx+0x70]
	test eax,eax
	jne Block99

 Block95:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	add ecx,0xBD4
	push eax
	mov dword ptr [ebp+0x40],ecx
	call edi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block96:
	mov ebx,dword ptr [ebp+0x5C]
	lea edx,[ebp-0x88]
	or ebx,1
	push edx
	mov byte ptr [ebp-4],0x1C
	mov dword ptr [ebp+0x5C],ebx
	call edi
	lea eax,[ebp-0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block97:
	push 0
	push 0
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x88]
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	or ebx,2
	push offset _S_UIUIWINDOW2IMGUS__74
	mov dword ptr [ebp-4],0x1D
	mov dword ptr [ebp+0x5C],ebx
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [ebp-4],0x1E
	je Block16

 Block98:
	lea eax,[ebp-0x158]
	mov byte ptr [ebp-4],0x1D
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	or ebx,4
	mov ecx,eax
	mov dword ptr [ebp-4],0x1F
	mov dword ptr [ebp+0x5C],ebx
	call Ztl_variant_t::GetUnknown
	jmp Block103

 Block99:
	mov edi,dword ptr [ZImports::_VariantInit]
	add ecx,0xBE4
	mov dword ptr [ebp+0x40],ecx
	lea ecx,[ebp-0x118]
	push ecx
	call edi
	lea edx,[ebp-0x118]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block100:
	or dword ptr [ebp+0x5C],8
	lea eax,[ebp-0x68]
	mov ebx,0x20
	push eax
	mov dword ptr [ebp-4],ebx
	call edi
	lea ecx,[ebp-0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block101:
	or dword ptr [ebp+0x5C],0x10
	push 0
	push 0
	lea edx,[ebp-0x118]
	push edx
	lea eax,[ebp-0x68]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__73
	mov dword ptr [ebp-4],0x21
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [ebp-4],0x22
	je Block16

 Block102:
	lea ecx,[ebp-0x168]
	push ecx
	mov byte ptr [ebp-4],0x21
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	or dword ptr [ebp+0x5C],ebx
	mov ecx,eax
	mov dword ptr [ebp-4],0x23
	call Ztl_variant_t::GetUnknown
	mov ebx,dword ptr [ebp+0x5C]

 Block103:
	mov dword ptr [ebp+4],0
	test eax,eax
	je Block106

 Block104:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x38]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x38]
	mov dword ptr [ebp+4],ecx
	test eax,eax
	jge Block106

 Block105:
	cmp eax,0x80004002
	jne Block14

 Block106:
	mov dword ptr [ebp-4],0x25
	test bl,0x20
	je Block110

 Block107:
	and ebx,0xFFFFFFDF
	cmp word ptr [ebp-0x168],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block115

 Block108:
	mov eax,dword ptr [ebp-0x160]
	xor edx,edx
	mov word ptr [ebp-0x168],dx
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block110:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x26
	test bl,0x10
	je Block117

 Block112:
	and ebx,0xFFFFFFEF
	cmp word ptr [ebp-0x68],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block116

 Block113:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	test eax,eax
	je Block117

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block115:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x168]
	push eax
	call edi
	jmp Block111

 Block116:
	lea edx,[ebp-0x68]
	push edx
	call edi

 Block117:
	mov byte ptr [ebp-4],0x27
	test bl,8
	je Block122

 Block118:
	and ebx,0xFFFFFFF7
	cmp word ptr [ebp-0x118],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [ebp-0x118],ax
	mov eax,dword ptr [ebp-0x110]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[ebp-0x118]
	push ecx
	call edi

 Block122:
	mov byte ptr [ebp-4],0x28
	test bl,4
	je Block127

 Block123:
	and ebx,0xFFFFFFFB
	cmp word ptr [ebp-0x158],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block126

 Block124:
	mov eax,dword ptr [ebp-0x150]
	xor edx,edx
	mov word ptr [ebp-0x158],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp-0x158]
	push eax
	call edi

 Block127:
	mov byte ptr [ebp-4],0x29
	test bl,2
	je Block132

 Block128:
	and ebx,0xFFFFFFFD
	cmp word ptr [ebp-0x88],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block131

 Block129:
	mov eax,dword ptr [ebp-0x80]
	xor ecx,ecx
	mov word ptr [ebp-0x88],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[ebp-0x88]
	push edx
	call edi

 Block132:
	mov byte ptr [ebp-4],0x2A
	test bl,1
	je Block137

 Block133:
	and ebx,0xFFFFFFFE
	cmp word ptr [ebp-0x48],8
	mov dword ptr [ebp+0x5C],ebx
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[ebp-0x48]
	push ecx
	call edi

 Block137:
	mov edx,3
	mov word ptr [ebp+0xC],dx
	mov edx,0xFF
	mov dword ptr [ebp+0x14],edx
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x2B
	test ecx,ecx
	je Block16

 Block138:
	mov ebx,dword ptr [ebp+0xC]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x10]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+4]
	push eax
	push ebx
	push 0
	mov dword ptr [ebp+0x64],ecx
	push ecx
	mov ecx,dword ptr [edi+0x80]
	call ecx
	test eax,eax
	jge Block140

 Block139:
	mov edx,dword ptr [ebp+0x64]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block140:
	cmp word ptr [ebp+0xC],8
	mov byte ptr [ebp-4],0x2A
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov edi,dword ptr [ebp+0x24]
	mov edx,edi
	neg edx
	sbb edx,edx
	and edx,0xA
	add edx,0x41
	add ebx,7
	mov dword ptr [esi+4],edx
	mov dword ptr [esi+8],ebx
	mov eax,dword ptr [esi+0x70]
	test eax,eax
	je Block146

 Block145:
	mov eax,dword ptr [eax-4]

 Block146:
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [ecx+0x70]
	mov ecx,dword ptr [edx+0xBC8]
	push ecx
	push eax
	lea edx,[ebp+0x28]
	push offset _S_DD
	push edx
	call ZXString<char>::Format
	add esp,0x10
	lea eax,[ebp-0xA8]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block147:
	mov eax,dword ptr [ebp+0x28]
	lea edx,[ebp-0xA8]
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	je Block16

 Block148:
	mov byte ptr [ebp-4],0x2C
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0xA8],8
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x2A
	jne Block151

 Block149:
	mov eax,dword ptr [ebp-0xA0]
	xor ecx,ecx
	mov word ptr [ebp-0xA8],cx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea edx,[ebp-0xA8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov eax,dword ptr [ebp+0x64]
	neg edi
	sbb edi,edi
	cdq
	sub eax,edx
	and edi,0xA
	sar eax,1
	add edi,0x5D
	sub edi,eax
	lea eax,[ebp-0xC8]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xC8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block153:
	lea edx,[ebp-0x138]
	push edx
	mov byte ptr [ebp-4],0x2E
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x138]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block154:
	mov eax,dword ptr [ebp+0x30]
	lea ecx,[ebp-0xC8]
	push ecx
	lea edx,[ebp-0x138]
	push edx
	mov edx,dword ptr [ebp+0x28]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x30
	test ecx,ecx
	je Block16

 Block155:
	push ebx
	push edi
	mov byte ptr [ebp-4],0x2F
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x138],8
	mov byte ptr [ebp-4],0x2E
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x138],ax
	mov eax,dword ptr [ebp-0x130]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[ebp-0x138]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	cmp word ptr [ebp-0xC8],8
	mov byte ptr [ebp-4],0x2A
	jne Block162

 Block160:
	mov eax,dword ptr [ebp-0xC0]
	xor edx,edx
	mov word ptr [ebp-0xC8],dx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[ebp-0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov edx,dword ptr [ebp+0x64]
	lea eax,[edi-0x14]
	lea edi,[edi+edx+0x14]
	lea ecx,[ebx-5]
	lea edx,[ebx+0x10]
	mov ebx,dword ptr [ebp+0x40]
	mov dword ptr [ebx],eax
	mov dword ptr [ebx+4],ecx
	mov dword ptr [ebx+8],edi
	mov dword ptr [ebx+0xC],edx
	mov eax,dword ptr [esi+0x70]
	test eax,eax
	je Block168

 Block164:
	cmp dword ptr [eax-4],1
	jbe Block168

 Block165:
	test eax,eax
	je Block167

 Block166:
	mov eax,dword ptr [eax-4]

 Block167:
	lea ecx,[eax-1]
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,4
	inc edx
	mov dword ptr [esi+0x1C],edx
	jmp Block169

 Block168:
	mov dword ptr [esi+0x1C],1

 Block169:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[ebp+0x28]
	push offset _S_DD
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[ebp-0x108]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x108]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block170:
	mov edx,dword ptr [ebp+0x28]
	lea ecx,[ebp-0x108]
	push ecx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x31
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x32
	mov byte ptr [ebp-4],0x31
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x108],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x2A
	jne Block173

 Block171:
	xor eax,eax
	mov word ptr [ebp-0x108],ax
	mov eax,dword ptr [ebp-0x100]
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea ecx,[ebp-0x108]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block174:
	lea edx,[ebp-0x58]
	mov edi,0xCA
	push edx
	sub edi,ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block175:
	lea ecx,[ebp-0xE8]
	push ecx
	mov byte ptr [ebp-4],0x33
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xE8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block176:
	mov edx,dword ptr [ebp+0x30]
	lea eax,[ebp-0x58]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea ecx,[ebp-0xE8]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x34
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x35
	test ecx,ecx
	je Block16

 Block177:
	mov ebx,dword ptr [ebp+0x60]
	add ebx,7
	push ebx
	push edi
	mov byte ptr [ebp-4],0x34
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp-0xE8],di
	jne Block180

 Block178:
	mov eax,dword ptr [ebp-0xE0]
	xor ecx,ecx
	mov word ptr [ebp-0xE8],cx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[ebp-0xE8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x58],di
	jne Block184

 Block182:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov edi,dword ptr [ebp+4]
	mov dword ptr [esi+0xC],0x96
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],0x3D
	test edi,edi
	je Block16

 Block186:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x64]
	push eax
	push edi
	mov dword ptr [ebp+0x64],0
	call ecx
	test eax,eax
	jge Block188

 Block187:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block188:
	mov edx,dword ptr [ebp+0x64]
	add dword ptr [ebp+0x60],edx
	cmp dword ptr [esi],0
	je Block310

 Block189:
	mov edi,dword ptr [ebp+0x60]
	add edi,2
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGUS__72
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block191:
	mov ecx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ecx+0x70]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [esi+0x28],0xE4
	lea eax,[edi+1]
	mov dword ptr [esi+0x24],eax
	lea ecx,[edi+0x10]
	mov dword ptr [esi+0x2C],ecx
	mov ebx,1
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esi+0x38],0x3E
	mov dword ptr [esi+0x3C],ecx
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	lea edx,[eax+0x3F]
	mov dword ptr [esi+0x48],edx
	add eax,2
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x4C],ecx
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	mov eax,edx
	lea edx,[eax+0x28]
	add eax,2
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x58],edx
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x5C],ecx
	mov ecx,dword ptr [esi+0x2C]
	mov edi,dword ptr [esi+0x24]
	mov eax,edx
	lea edx,[eax+0x3F]
	add eax,2
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edx
	mov dword ptr [esi+0x6C],ecx
	mov eax,dword ptr [esi+0x74]
	cmp eax,ebx
	je Block195

 Block192:
	cmp eax,2
	je Block195

 Block193:
	cmp eax,3
	je Block195

 Block194:
	cmp eax,4
	jne Block223

 Block195:
	lea edi,[eax+2]
	shl edi,4
	mov ebx,dword ptr [edi+esi+8]
	sub ebx,dword ptr [edi+esi]
	add edi,esi
	lea edx,[ebp-0x98]
	push edx
	inc ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block196:
	lea ecx,[ebp-0x78]
	push ecx
	mov byte ptr [ebp-4],0x36
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block197:
	push 0
	push 0
	lea eax,[ebp-0x98]
	push eax
	lea ecx,[ebp-0x78]
	push ecx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__71
	mov byte ptr [ebp-4],0x37
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x38
	je Block16

 Block198:
	lea edx,[ebp-0x178]
	mov byte ptr [ebp-4],0x37
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x39
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x40],0
	test eax,eax
	je Block201

 Block199:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x34]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x34]
	mov dword ptr [ebp+0x40],ecx
	test eax,eax
	jge Block201

 Block200:
	cmp eax,0x80004002
	jne Block14

 Block201:
	cmp word ptr [ebp-0x178],8
	mov byte ptr [ebp-4],0x3B
	jne Block204

 Block202:
	mov eax,dword ptr [ebp-0x170]
	xor edx,edx
	mov word ptr [ebp-0x178],dx
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea eax,[ebp-0x178]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block205:
	cmp word ptr [ebp-0x78],8
	mov byte ptr [ebp-4],0x3C
	jne Block208

 Block206:
	mov eax,dword ptr [ebp-0x70]
	xor ecx,ecx
	mov word ptr [ebp-0x78],cx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea edx,[ebp-0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	cmp word ptr [ebp-0x98],8
	mov byte ptr [ebp-4],0x3D
	jne Block212

 Block210:
	xor eax,eax
	mov word ptr [ebp-0x98],ax
	mov eax,dword ptr [ebp-0x90]
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea ecx,[ebp-0x98]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block214:
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x3E
	test ecx,ecx
	je Block16

 Block215:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	mov edi,dword ptr [ebp-0x30]
	sub esp,0x10
	mov dword ptr [ebp+0x54],eax
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x2C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x28]
	push 0x10
	push ebx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x24]
	push 0
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x64],edx
	mov eax,edx
	mov edx,dword ptr [ecx]
	push eax
	push 0x10
	push ebx
	push 0xFFFFFFFF
	push edi
	mov edi,dword ptr [ebp+0x54]
	push edi
	push eax
	mov eax,dword ptr [edx+0x84]
	push ecx
	mov dword ptr [ebp+0x58],ecx
	call eax
	test eax,eax
	jge Block217

 Block216:
	mov ecx,dword ptr [ebp+0x58]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block217:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x3D
	jne Block220

 Block218:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block221:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	mov eax,dword ptr [esi+0x18]
	add dword ptr [ebp+0x60],0x12
	lea edi,[eax+eax*4]
	lea edi,[edi*4-0x14]
	mov ecx,esi
	mov dword ptr [ebp+0x64],edi
	call CTabGuild::SectionData::GetLastOfPage
	cmp edi,eax
	jge Block266

 Block224:
	mov eax,dword ptr [ebp+0x60]
	imul edi,0x74
	add eax,0x14
	mov dword ptr [ebp+0x54],eax

 Block225:
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x7C]
	push ecx
	push 0
	push offset _S_UIUIWINDOW2IMGUS__70
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block227

 Block226:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block227:
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax+0x70]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esi+0x70]
	add eax,edi
	add eax,8
	xor ebx,ebx
	push eax
	lea ecx,[ebp+8]
	mov dword ptr [ebp+8],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x70]
	add eax,edi
	add eax,4
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0x3F
	mov dword ptr [ebp-0x14],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x70]
	cmp dword ptr [edi+ecx+0x10],0xFFFFFFFF
	lea ebx,[edi+ecx]
	mov byte ptr [ebp-4],0x40
	jne Block229

 Block228:
	mov eax,offset _S___16
	jmp Block230

 Block229:
	mov eax,0x20
	call __chkstk
	mov ebx,dword ptr [ebx+0x10]
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,0xC

 Block230:
	mov dword ptr [ebp+0x40],0
	test eax,eax
	je Block234

 Block231:
	mov ecx,eax
	lea ebx,[ecx+1]

 Block232:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block232

 Block233:
	sub ecx,ebx
	mov ebx,ecx
	push ebx
	push eax
	push 0
	push ebx
	lea ecx,[ebp+0x40]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[ebp+0x40]
	call ZXString<char>::ReleaseBuffer

 Block234:
	mov eax,dword ptr [esi+0x70]
	mov edx,dword ptr [eax+edi+0x14]
	add eax,edi
	mov eax,dword ptr [ebp+0x34]
	lea eax,[eax+edx*4+0x74]
	push eax
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0x41
	mov dword ptr [ebp],0
	call ZXString<char>::op_assign
	mov ebx,dword ptr [ebp+0x30]
	push 0x3C
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x58],esp
	push ebx
	mov byte ptr [ebp-4],0x42
	call edx
	lea eax,[ebp-0x14]
	push eax
	call format_string_1
	mov ecx,dword ptr [esi+0x70]
	add esp,0xC
	push 0x3C
	mov dword ptr [edi+ecx+0x6C],eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x58],esp
	push ebx
	call eax
	lea ecx,[ebp+8]
	push ecx
	call format_string_1
	mov edx,dword ptr [esi+0x70]
	add esp,0xC
	push 0x3C
	push ecx
	mov dword ptr [edi+edx+0x70],eax
	mov eax,esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x58],esp
	push ebx
	call ecx
	lea edx,[ebp]
	push edx
	call format_string_1
	add esp,0xC
	cmp dword ptr [ebp+0x24],0
	lea eax,[ebp-0x1C]
	je Block236

 Block235:
	lea eax,[ebp-0x18]

 Block236:
	mov ebx,dword ptr [eax]
	mov dword ptr [ebp+0x58],ebx
	test ebx,ebx
	je Block238

 Block237:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block238:
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax+0x70]
	mov edx,dword ptr [esi+0x70]
	mov eax,dword ptr [ecx+0xC5C]
	mov byte ptr [ebp-4],0x43
	cmp eax,dword ptr [edi+edx]
	jne Block246

 Block239:
	cmp ebx,dword ptr [ebp+0x30]
	je Block242

 Block240:
	mov dword ptr [ebp+0x2C],ebx
	mov ebx,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	mov dword ptr [ebp+0x58],ebx
	call edx
	cmp dword ptr [ebp+0x2C],0
	je Block242

 Block241:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block242:
	mov eax,dword ptr [ebp+0x7C]
	test eax,eax
	je Block16

 Block243:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	push 0xFF244768
	push 0x14
	push 0xE6
	push edx
	push 1
	mov dword ptr [ebp-0x10],eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	test eax,eax
	jge Block245

 Block244:
	mov ecx,dword ptr [ebp-0x10]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block245:
	mov eax,dword ptr [esi+0x70]
	mov edx,dword ptr [ebp+0x24]
	mov ecx,dword ptr [edi+eax+0x14]
	mov dword ptr [ebp-0x10],edx
	mov dword ptr [ebp+0x2C],ecx

 Block246:
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp-0x14]
	mov dword ptr [ebp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x30]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x38],esp
	test eax,eax
	je Block248

 Block247:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block248:
	call _DrawTextA
	add esp,0x18
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+8]
	mov dword ptr [ebp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x40]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x38],esp
	test eax,eax
	je Block250

 Block249:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block250:
	call _DrawTextA
	add esp,0x18
	push 1
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x40]
	mov dword ptr [ebp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x58]
	add eax,dword ptr [esi+0x50]
	cdq
	sub eax,edx
	sar eax,1
	inc eax
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x38],esp
	test eax,eax
	je Block252

 Block251:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block252:
	call _DrawTextA
	add esp,0x18
	push 0
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[ebp]
	mov dword ptr [ebp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esi+0x60]
	add eax,2
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x38],esp
	test eax,eax
	je Block254

 Block253:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block254:
	call _DrawTextA
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [esi+0x70]
	add esp,0x18
	push ecx
	push 0xE6
	push edx
	push 0
	lea ecx,[edi+eax+0x18]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x30]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x2C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi+0x48]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x40]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x3C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi+0x48]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x40]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x3C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x50]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x4C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi+0x68]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	mov edx,dword ptr [esi+0x60]
	push eax
	mov eax,dword ptr [esi+0x70]
	push ecx
	push edx
	lea ecx,[edi+eax+0x5C]
	push ecx
	call SetRect
	mov eax,0x14
	add dword ptr [ebp+0x60],eax
	add dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x42
	test ebx,ebx
	je Block256

 Block255:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block256:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block258

 Block257:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block258:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x40
	test eax,eax
	je Block260

 Block259:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block260:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x3F
	test eax,eax
	je Block262

 Block261:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block262:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block264

 Block263:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block264:
	mov ebx,dword ptr [ebp+0x64]
	inc ebx
	mov ecx,esi
	mov dword ptr [ebp+0x64],ebx
	add edi,0x74
	call CTabGuild::SectionData::GetLastOfPage
	cmp ebx,eax
	jl Block225

 Block265:
	mov edi,ebx

 Block266:
	test edi,edi
	jne Block282

 Block267:
	mov edi,dword ptr [ebp+0x60]
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGUS__70
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x38],esp
	test eax,eax
	je Block269

 Block268:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block269:
	mov ecx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ecx+0x70]
	add ecx,0xCA8
	call CLayoutMan::CopyToCanvas_1
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xD8]
	push edx
	call esi
	lea eax,[ebp-0xD8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block270:
	lea ecx,[ebp-0xB8]
	push ecx
	mov byte ptr [ebp-4],0x44
	call esi
	lea edx,[ebp-0xB8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block271:
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp-0xD8]
	push eax
	lea ecx,[ebp-0xB8]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x38],esp
	push 0x1AC4
	push eax
	mov byte ptr [ebp-4],0x45
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	je Block16

 Block272:
	lea edx,[edi+5]
	push edx
	push 0xA
	mov byte ptr [ebp-4],0x45
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0xB8],8
	mov byte ptr [ebp-4],0x44
	jne Block279

 Block273:
	xor eax,eax
	mov word ptr [ebp-0xB8],ax
	mov eax,dword ptr [ebp-0xB0]
	test eax,eax
	je Block275

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block275:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block276:
	cmp word ptr [ebp-0xD8],8
	mov byte ptr [ebp-4],0x2A
	jne Block280

 Block277:
	mov eax,dword ptr [ebp-0xD0]
	xor edx,edx
	mov word ptr [ebp-0xD8],dx
	test eax,eax
	je Block281

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	add edi,0x14
	mov dword ptr [ebp+0x60],edi
	jmp Block283

 Block279:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0xB8]
	push ecx
	call ebx
	jmp Block276

 Block280:
	lea eax,[ebp-0xD8]
	push eax
	call ebx

 Block281:
	add edi,0x14
	mov dword ptr [ebp+0x60],edi
	jmp Block283

 Block282:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,dword ptr [ZImports::_VariantInit]

 Block283:
	lea ecx,[ebp-0x128]
	push ecx
	mov edi,8
	call esi
	lea edx,[ebp-0x128]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block284:
	lea eax,[ebp-0xF8]
	push eax
	mov byte ptr [ebp-4],0x47
	call esi
	lea ecx,[ebp-0xF8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block285:
	push 0
	push 0
	lea edx,[ebp-0x128]
	push edx
	lea eax,[ebp-0xF8]
	push eax
	push ecx
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__59
	mov byte ptr [ebp-4],0x48
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x49
	je Block16

 Block286:
	lea ecx,[ebp-0x148]
	push ecx
	mov byte ptr [ebp-4],0x48
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x4A
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x64],0
	test eax,eax
	je Block289

 Block287:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x3C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x64],ecx
	test eax,eax
	jge Block289

 Block288:
	cmp eax,0x80004002
	jne Block14

 Block289:
	mov byte ptr [ebp-4],0x4C
	cmp word ptr [ebp-0x148],di
	jne Block292

 Block290:
	mov eax,dword ptr [ebp-0x140]
	xor edx,edx
	mov word ptr [ebp-0x148],dx
	test eax,eax
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea eax,[ebp-0x148]
	push eax
	call ebx

 Block293:
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp-0xF8],di
	jne Block296

 Block294:
	mov eax,dword ptr [ebp-0xF0]
	xor ecx,ecx
	mov word ptr [ebp-0xF8],cx
	test eax,eax
	je Block297

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block297

 Block296:
	lea edx,[ebp-0xF8]
	push edx
	call ebx

 Block297:
	mov byte ptr [ebp-4],0x4E
	cmp word ptr [ebp-0x128],di
	jne Block300

 Block298:
	xor eax,eax
	mov word ptr [ebp-0x128],ax
	mov eax,dword ptr [ebp-0x120]
	test eax,eax
	je Block301

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block301

 Block300:
	lea ecx,[ebp-0x128]
	push ecx
	call ebx

 Block301:
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov edx,0xFF
	mov dword ptr [ebp+0x4C],edx
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x4F
	test ecx,ecx
	je Block16

 Block302:
	mov edi,dword ptr [ebp+0x44]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x64]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x60]
	push edi
	dec eax
	push eax
	push 0
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block304

 Block303:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block304:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x4E
	jne Block307

 Block305:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block308

 Block306:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block308

 Block307:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block308:
	mov byte ptr [ebp-4],0x2A
	test edi,edi
	je Block310

 Block309:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block310:
	mov esi,dword ptr [ebp+0x24]
	test esi,esi
	jne Block312

 Block311:
	add dword ptr [ebp+0x60],0xF

 Block312:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xC
	call edx
	inc esi
	cmp esi,2
	mov dword ptr [ebp+0x24],esi
	jl Block94

 Block313:
	mov ebx,dword ptr [ebp+0x20]
	mov eax,dword ptr [ebx+0x37C8]
	test eax,eax
	je Block374

 Block314:
	mov eax,dword ptr [ebx+0x20B4]
	mov ecx,dword ptr [ebx+0x37D4]
	cmp dword ptr [ecx],eax
	je Block317

 Block315:
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	je Block317

 Block316:
	xor eax,eax
	jmp Block318

 Block317:
	mov eax,1

 Block318:
	mov esi,dword ptr [ebp+0x34]
	mov ecx,dword ptr [esi+8]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp dword ptr [ebx+0x37C8],0
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+4]
	je Block321

 Block319:
	mov eax,dword ptr [ebx+0x20B4]
	mov edx,dword ptr [ebx+0x37D4]
	cmp dword ptr [edx],eax
	jne Block321

 Block320:
	mov edi,1
	jmp Block322

 Block321:
	xor edi,edi

 Block322:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	xor edx,edx
	test edi,edi
	sete dl
	push edx
	call eax
	mov edi,dword ptr [ebp+0x2C]
	cmp edi,1
	jne Block324

 Block323:
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	jmp Block337

 Block324:
	cmp edi,2
	jne Block329

 Block325:
	mov eax,dword ptr [esi+0x18]
	add eax,4
	cmp dword ptr [ebx+0x37C8],0
	je Block328

 Block326:
	mov ecx,dword ptr [ebx+0x20B4]
	mov edx,dword ptr [ebx+0x37D4]
	cmp dword ptr [edx],ecx
	jne Block328

 Block327:
	mov ecx,eax
	mov eax,dword ptr [eax]
	mov eax,dword ptr [eax+0x1C]
	mov edx,1
	push edx
	call eax
	jmp Block337

 Block328:
	mov ecx,eax
	mov eax,dword ptr [eax]
	mov eax,dword ptr [eax+0x1C]
	xor edx,edx
	push edx
	call eax
	jmp Block337

 Block329:
	test edi,edi
	jle Block335

 Block330:
	cmp dword ptr [ebx+0x37C8],0
	je Block332

 Block331:
	mov eax,dword ptr [ebx+0x20B4]
	mov ecx,dword ptr [ebx+0x37D4]
	cmp dword ptr [ecx],eax
	je Block334

 Block332:
	mov eax,dword ptr [ebx+0x20B4]
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	je Block334

 Block333:
	xor eax,eax
	push eax
	jmp Block336

 Block334:
	mov eax,1
	push eax
	jmp Block336

 Block335:
	push 0

 Block336:
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	call eax
	test edi,edi
	jle Block350

 Block337:
	cmp dword ptr [ebx+0x37C8],0
	je Block346

 Block338:
	mov eax,dword ptr [ebx+0x20B4]
	mov ecx,dword ptr [ebx+0x37D4]
	cmp dword ptr [ecx],eax
	jne Block346

 Block339:
	cmp edi,1
	jne Block341

 Block340:
	mov eax,dword ptr [esi+0x20]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	jmp Block351

 Block341:
	cmp edi,2
	jne Block343

 Block342:
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 1
	call eax
	jmp Block351

 Block343:
	mov ecx,ebx
	call CWvsContext::GetGuildMaxGradeNum
	push 1
	cmp edi,eax
	jne Block345

 Block344:
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	call eax
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	jmp Block351

 Block345:
	mov eax,dword ptr [esi+0x20]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	jmp Block351

 Block346:
	mov eax,dword ptr [ebx+0x20B4]
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	jne Block350

 Block347:
	cmp edi,1
	je Block350

 Block348:
	cmp edi,eax
	je Block350

 Block349:
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x1C]
	xor eax,eax
	add ecx,4
	cmp dword ptr [ebp+0x2C],3
	setne al
	push eax
	call edx
	mov ebx,dword ptr [esi+0x28]
	mov edi,dword ptr [ebx+4]
	mov ecx,dword ptr [ebp+0x20]
	add ebx,4
	add edi,0x1C
	call CWvsContext::GetGuildMaxGradeNum
	mov edx,dword ptr [edi]
	xor ecx,ecx
	cmp dword ptr [ebp+0x2C],eax
	setne cl
	push ecx
	mov ecx,ebx
	call edx
	mov ebx,dword ptr [ebp+0x20]
	jmp Block351

 Block350:
	mov eax,dword ptr [esi+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x28]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block351:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [esi+0x70]
	xor eax,eax
	cmp dword ptr [ebp-0x10],eax
	sete al
	mov edi,eax
	mov eax,dword ptr [ecx+0x20B4]
	xor ecx,ecx
	cmp dword ptr [edx+0xC5C],eax
	setne cl
	mov eax,ecx
	mov dword ptr [ebp+0x64],eax
	test edi,edi
	je Block354

 Block352:
	test eax,eax
	je Block354

 Block353:
	mov edx,1
	jmp Block355

 Block354:
	xor edx,edx

 Block355:
	mov eax,dword ptr [esi+0x30]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	test edi,edi
	je Block358

 Block356:
	cmp dword ptr [ebp+0x64],0
	je Block358

 Block357:
	mov eax,1
	jmp Block359

 Block358:
	xor eax,eax

 Block359:
	mov ecx,dword ptr [esi+0x38]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0x40]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 1
	call eax
	test edi,edi
	je Block362

 Block360:
	cmp dword ptr [ebp+0x64],0
	je Block362

 Block361:
	mov eax,1
	jmp Block363

 Block362:
	xor eax,eax

 Block363:
	mov ecx,dword ptr [esi+0x48]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0x50]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 1
	call eax
	test edi,edi
	je Block368

 Block364:
	cmp dword ptr [ebp+0x64],0
	je Block368

 Block365:
	cmp dword ptr [ebx+0x3604],0
	je Block368

 Block366:
	mov eax,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],eax
	jne Block368

 Block367:
	mov edx,1
	jmp Block369

 Block368:
	xor edx,edx

 Block369:
	mov eax,dword ptr [esi+0x58]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	cmp dword ptr [ebx+0x37C8],0
	je Block371

 Block370:
	mov eax,dword ptr [ebx+0x20B4]
	mov ecx,dword ptr [ebx+0x37D4]
	cmp dword ptr [ecx],eax
	je Block373

 Block371:
	mov eax,dword ptr [ebx+0x20B4]
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	je Block373

 Block372:
	mov ecx,dword ptr [esi+0x68]
	mov edx,dword ptr [ecx+4]
	xor eax,eax
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	jmp Block376

 Block373:
	mov ecx,dword ptr [esi+0x68]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	mov eax,1
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	jmp Block376

 Block374:
	mov esi,dword ptr [ebp+0x34]
	lea edi,[esi+8]
	mov ebx,0xD

 Block375:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	add edi,8
	sub ebx,1
	jne Block375

 Block376:
	mov esi,dword ptr [esi+0x50]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x24]
	lea ecx,[esi+4]
	push 0
	call eax
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block378

 Block377:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block378:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block380

 Block379:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block380:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block382

 Block381:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block382:
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block384

 Block383:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block384:
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block386

 Block385:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block386:
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block388

 Block387:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block388:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block390

 Block389:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block390:
	mov eax,dword ptr [ebp+0x60]
	lea esp,[ebp-0x198]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CTabGuild::~CTabGuild
_SUB_EXCEPTION_HANDLER(4D7F30)
__SUB_CLASS_THIS0(004D7F30, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D7F30
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabGuild::`vftable'
	push offset CTabGuild::SectionData::~SectionData
	push 2
	push 0x7C
	lea eax,[esi+0xAC]
	push eax
	mov dword ptr [esp+0x24],6
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0x8C]
	push eax
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0x78]
	push ecx
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x6C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0xD
	push 8
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_
__SUB(004D89F0, __cdecl, 83749,  void, ZArray<CTabGuild::GUILDITEM>&, __POSITION*, __POSITION*, NakedParam<CTabGuild::GradeAscComp>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CTabGuild::GUILDITEM>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::GradeAscComp>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_
_SUB_EXCEPTION_HANDLER(4BD650)
__SUB(004BD650, __cdecl, 83664,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, CTabGuild::NameAscComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BD650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x44],eax
	mov ebp,dword ptr [esp+0xA4]
	cmp ebp,dword ptr [esp+0xA8]
	mov esi,ebp
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x18],esi
	jg Block11

 Block1:
	mov ebx,dword ptr [esp+0xA0]
	mov eax,ebp
	imul eax,0x74
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esp+0x14]

 Block5:
	mov ecx,dword ptr [ebx]
	add ecx,eax
	push ecx
	lea ecx,[esp+0x20]
	mov edi,esi
	call CTabGuild::GUILDITEM::operator=
	cmp esi,ebp
	jle Block10

 Block6:
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block7:
	mov edx,dword ptr [ebx]
	lea eax,[edx+esi-0x74]
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jge Block9

 Block8:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+esi]
	lea edx,[ecx-0x74]
	push edx
	call CTabGuild::GUILDITEM::operator=
	dec edi
	sub esi,0x74
	cmp edi,ebp
	jg Block7

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov ecx,edi
	imul ecx,0x74
	add ecx,dword ptr [ebx]
	lea eax,[esp+0x1C]
	push eax
	call CTabGuild::GUILDITEM::operator=
	add dword ptr [esp+0x14],0x74
	inc esi
	cmp esi,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x18],esi
	jle Block4

 Block11:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CTabGuild::OnChat
_SUB_EXCEPTION_HANDLER(4C9AE0)
__SUB_CLASS_THIS0(004C9AE0, __thiscall, 40375,  CTabGuild, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C9AE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block8

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block8

 Block2:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x38],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x94],esi
	call CTabGuild::GetGuildItem
	cmp dword ptr [esp+0x10],esi
	je Block7

 Block3:
	cmp eax,esi
	jne Block7

 Block4:
	cmp dword ptr [TSingleton<CUIMessenger>::ms_pInstance],esi
	jne Block7

 Block5:
	push esi
	call CUIMessenger::TryNew
	add esp,4
	test eax,eax
	je Block7

 Block6:
	push ecx
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	call CUIMessenger::SendInviteMsg

 Block7:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM

 Block8:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x84
	ret
}
}
// CTabBlackList::GetMemberIDFromPoint
__SUB_CLASS_THIS(004B9940, __thiscall, 40723,  CTabBlackList, unsigned long, long, long, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0x14]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0x20]
	lea eax,[eax+eax*4-0xF]
	lea edx,[ecx+eax*4]
	add ebp,0xFFFFFFF6
	xor ebx,ebx
	mov dword ptr [esp+0x14],edx
	xor esi,esi

 Block1:
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block6

 Block2:
	cmp ebx,dword ptr [eax-4]
	jae Block6

 Block3:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	add eax,esi
	push ebp
	add eax,4
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc ebx
	add esi,0x14
	jmp Block1

 Block5:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,8
	ret 0xC

 Block6:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,8
	ret 0xC
}
}
// DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_
_SUB_EXCEPTION_HANDLER(4C11A0)
__SUB(004C11A0, __cdecl, 83706,  void, ZArray<CTabGuild::GUILDITEM>&, int32_t, int32_t, int32_t, CTabGuild::LevelDescComp&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C11A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [esp+0xA0]
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebp]
	lea eax,[esi+ebx]
	imul eax,0x74
	lea eax,[eax+ecx-0x74]
	push eax
	lea ecx,[esp+0x1C]
	call CTabGuild::GUILDITEM::_ctor_0
	mov eax,dword ptr [esp+0xA4]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x14],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0xA0]

 Block5:
	add esi,esi
	cmp esi,dword ptr [esp+0xA4]
	jge Block8

 Block6:
	mov eax,dword ptr [ebp]
	lea edx,[esi+ebx]
	imul edx,0x74
	add eax,edx
	lea ecx,[eax-0x74]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	call CTabGuild::LevelDescComp::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi

 Block8:
	mov ecx,dword ptr [ebp]
	lea edi,[esi+ebx]
	imul edi,0x74
	lea eax,[ecx+edi-0x74]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CTabGuild::LevelDescComp::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ebp]
	add edx,ebx
	imul edx,0x74
	lea ecx,[edi+eax-0x74]
	push ecx
	lea ecx,[edx+eax-0x74]
	call CTabGuild::GUILDITEM::operator=
	cmp esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA0],esi
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0xA0]

 Block11:
	mov ecx,dword ptr [ebp]
	add esi,ebx
	imul esi,0x74
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+ecx-0x74]
	call CTabGuild::GUILDITEM::operator=
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CTabGuild::GUILDITEM::~GUILDITEM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_
__SUB(004D99D0, __cdecl, 83797,  void, ZArray<CTabGuildAlliance::GUILDITEM>&, NakedParam<CTabGuildAlliance::GradeAscComp>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	push esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	mov esi,ecx
	shl esi,4
	sub esi,ecx
	lea ecx,[eax+esi*8-0x78]
	mov esi,dword ptr [esp+0xC]
	push esi
	push ecx
	push eax
	push edx
	call ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CTabGuildAlliance::OnChat
_SUB_EXCEPTION_HANDLER(4CCC20)
__SUB_CLASS_THIS0(004CCC20, __thiscall, 40520,  CTabGuildAlliance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4CCC20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x8C]
	mov edx,dword ptr [eax+0xC5C]
	xor esi,esi
	cmp edx,esi
	je Block7

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [edi+0x20B4]
	je Block7

 Block2:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x38],esi
	mov eax,dword ptr [eax+0xC5C]
	lea edx,[esp+0x10]
	push edx
	push eax
	mov dword ptr [esp+0x98],esi
	call CTabGuildAlliance::GetGuildItem
	cmp dword ptr [esp+0x10],esi
	je Block6

 Block3:
	cmp dword ptr [TSingleton<CUIMessenger>::ms_pInstance],esi
	jne Block6

 Block4:
	push esi
	call CUIMessenger::TryNew
	add esp,4
	test eax,eax
	je Block6

 Block5:
	push ecx
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	call CUIMessenger::SendInviteMsg

 Block6:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	call CTabGuildAlliance::GUILDITEM::~GUILDITEM

 Block7:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x88
	ret
}
}
