#include "regen.hpp"
// UIPartySearchTab.ipp
#include "UIPartySearchTab.hpp"

// TabPartySearch::~TabPartySearch
_SUB_EXCEPTION_HANDLER(41A790)
__SUB_CLASS_THIS0(0041A790, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41A790
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
	int 3// TODO: 	mov dword ptr [esi],offset TabPartySearch::`vftable'
	lea ecx,[esi+0x58]
	mov dword ptr [esp+0x14],3
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x40]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlEdit>, long>::`vftable'
	call ZMap<long, ZRef<CCtrlEdit>, long>::RemoveAll
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlCheckBox>, long>::`vftable'
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::RemoveAll
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlButton>, long>::`vftable'
	call ZMap<long, ZRef<CCtrlButton>, long>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// TabPartySearch::HideControls
__SUB_CLASS_THIS0(0041A840, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov ebx,ecx
	xor esi,esi
	push edi
	mov dword ptr [esp+0xC],esi
	lea edi,[ebx+0x10]
	nop

 Block1:
	push 0
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	inc esi
	cmp esi,3
	mov dword ptr [esp+0xC],esi
	jl Block1

 Block2:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	lea edi,[ebx+0x28]

 Block3:
	push 0
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	inc esi
	cmp esi,0x1F
	mov dword ptr [esp+0xC],esi
	jl Block3

 Block4:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	lea edi,[ebx+0x40]

 Block5:
	push 0
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	inc esi
	cmp esi,3
	mov dword ptr [esp+0xC],esi
	jl Block5

 Block6:
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// TabPartySearch::IsValidSetting
_SUB_EXCEPTION_HANDLER(4199D0)
__SUB_CLASS_THIS(004199D0, __thiscall, 85663,  TabPartySearch, int32_t, NakedParam<PARTYSERACH_SETTING>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4199D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov eax,dword ptr [esp+0x2C]
	cmp eax,0xC8
	mov dword ptr [esp+0x1C],ebx
	jle Block2

 Block1:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x2ED
	jmp Block24

 Block2:
	mov ecx,dword ptr [esp+0x28]
	mov edx,eax
	sub edx,ecx
	cmp edx,0x1E
	jle Block4

 Block3:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x2EC
	jmp Block24

 Block4:
	cmp ecx,eax
	jle Block10

 Block5:
	lea ecx,[esp+0x38]
	push 0x2EF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0x10
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x4C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign

 Block8:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x20]
	add esp,0x14
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block26

 Block10:
	mov edx,dword ptr [esp+0x38]
	cmp edx,ecx
	jl Block23

 Block11:
	cmp edx,eax
	jg Block23

 Block12:
	mov ecx,dword ptr [esp+0x30]
	add ecx,0xFFFFFFFE
	cmp ecx,4
	ja Block22

 Block13:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetPartyMemberNumber
	cmp dword ptr [esp+0x30],eax
	jg Block17

 Block14:
	lea edx,[esp+0x38]
	push 0x2EB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0xC
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	lea eax,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call ZXString<char>::_ctor_copy
	jmp Block8

 Block17:
	mov esi,dword ptr [esp+0x34]
	cmp esi,ebx
	jne Block19

 Block18:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x2F0
	push ecx
	jmp Block25

 Block19:
	or eax,0xFFFFFFFF
	mov ecx,1
	mov edx,0x1F
	mov edi,edi

 Block20:
	xor eax,ecx
	rol ecx,1
	sub edx,1
	jne Block20

 Block21:
	and eax,esi
	neg eax
	sbb eax,eax
	inc eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 0x18

 Block22:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x2EA
	push edx
	jmp Block25

 Block23:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x2EE

 Block24:
	push eax

 Block25:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block26:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 0x18
}
}
// TabPartySearch::TabPartySearch
__SUB_CLASS_THIS(0041A700, __thiscall, 85654,  TabPartySearch, void, CWnd*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+8]
	lea ecx,[esi+0x10]
	push edi
	mov dword ptr [esi+0xC],eax
	int 3// TODO: 	mov dword ptr [esi],offset TabPartySearch::`vftable'
	xor edi,edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlButton>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CCtrlButton>, long>::_CalcAutoGrow
	lea ecx,[esi+0x28]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlCheckBox>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::_CalcAutoGrow
	lea ecx,[esi+0x40]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CCtrlEdit>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CCtrlEdit>, long>::_CalcAutoGrow
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edi
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// TabPartySearch::SetControl_As_Default
__SUB_CLASS_THIS0(00419C20, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push ebx
	push esi
	push edi
	lea eax,[ebp-0x10]
	mov dword ptr [ebp-8],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0xC]
	test eax,eax
	je Block5

 Block1:
	lea ebx,[eax-0x10]
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block4:
	mov dword ptr [ebp-0xC],0

 Block5:
	mov ecx,dword ptr [edi+0x35]
	push ecx
	add edi,0x33
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov esi,dword ptr [ebp-8]
	xor edi,edi
	add esp,8
	movzx ebx,al
	mov dword ptr [ebp-0xC],edi
	add esi,0x28
	lea ebx,[ebx]

 Block6:
	push 0
	lea edx,[ebp-0xC]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	push 0
	lea eax,[ebp-0xC]
	push eax
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push 1
	call CCtrlCheckBox::SetChecked
	push 0
	lea ecx,[ebp-0xC]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	inc edi
	cmp edi,0x1F
	mov dword ptr [ebp-0xC],edi
	jl Block6

 Block7:
	mov eax,0x20
	call __chkstk
	xor edx,edx
	lea eax,[ebx-0xF]
	test eax,eax
	setle dl
	mov ecx,esp
	push 0xA
	push ecx
	mov dword ptr [ebp-0xC],0
	dec edx
	and eax,edx
	push eax
	call _itoa
	mov esi,dword ptr [ebp-8]
	add esp,0xC
	mov edi,eax
	push 0
	lea eax,[ebp-0xC]
	add esi,0x40
	push eax
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlEdit::SetText
	mov eax,0x20
	call __chkstk
	lea eax,[ebx+0xF]
	cmp eax,0xC8
	mov ecx,esp
	mov dword ptr [ebp-8],1
	jl Block9

 Block8:
	mov eax,0xC8

 Block9:
	push 0xA
	push ecx
	push eax
	call _itoa
	add esp,0xC
	push 0
	lea ecx,[ebp-8]
	push ecx
	mov ecx,esi
	mov edi,eax
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlEdit::SetText
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 6
	mov dword ptr [ebp-8],2
	call _itoa
	add esp,0xC
	push 0
	lea edx,[ebp-8]
	push edx
	mov ecx,esi
	mov edi,eax
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlEdit::SetText
	lea esp,[ebp-0x1C]
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// TabPartySearch::OnChildNotify
// 81A6D8
static uint8_t _SUB_41A0A0_LOOKUP_TABLE_0[27] = {
0, 6, 1, 6, 6, 6, 6, 6, 2, 6, 6, 6, 6, 6, 6, 3, 
6, 6, 6, 6, 4, 6, 6, 6, 6, 6, 5, 
};
__SUB_CLASS_THIS(0041A0A0, __thiscall, 85660,  TabPartySearch, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0xC8
	push ebp
	mov ebp,ecx
	jne Block62

 Block1:
	mov eax,dword ptr [esp+8]
	push ebx
	add eax,0xFFFFE4A7
	push esi
	push edi
	cmp eax,0x1A
	ja Block20

 Block2:
	movzx eax,byte ptr [eax+_SUB_41A0A0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block6
cmp EAX, 2
je Block9
cmp EAX, 3
je Block12
cmp EAX, 4
je Block15
cmp EAX, 5
je Block18
cmp EAX, 6
je Block20


 Block3:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,1
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]

 Block4:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,0x1F
	mov dword ptr [esp+0x18],esi
	jl Block4

 Block5:
	jmp Block20

 Block6:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,2
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]
	lea ebx,[ebx]

 Block7:
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,8
	mov dword ptr [esp+0x18],esi
	jl Block7

 Block8:
	jmp Block20

 Block9:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,8
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]

 Block10:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,0xF
	mov dword ptr [esp+0x18],esi
	jl Block10

 Block11:
	jmp Block20

 Block12:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,0xF
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]
	lea esp,[esp]

 Block13:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,0x14
	mov dword ptr [esp+0x18],esi
	jl Block13

 Block14:
	jmp Block20

 Block15:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,0x14
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]

 Block16:
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,0x1A
	mov dword ptr [esp+0x18],esi
	jl Block16

 Block17:
	jmp Block20

 Block18:
	mov ebx,dword ptr [esp+0x1C]
	mov esi,0x1A
	mov dword ptr [esp+0x18],esi
	lea edi,[ebp+0x28]

 Block19:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push ebx
	call CCtrlCheckBox::SetChecked
	inc esi
	cmp esi,0x1F
	mov dword ptr [esp+0x18],esi
	jl Block19

 Block20:
	push 0
	lea ecx,[esp+0x20]
	lea esi,[ebp+0x28]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],3
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block26

 Block21:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],4
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block26

 Block22:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],5
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block26

 Block23:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],6
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block26

 Block24:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],7
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block26

 Block25:
	mov edi,1
	jmp Block27

 Block26:
	xor edi,edi

 Block27:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],2
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],9
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block34

 Block28:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0xA
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block34

 Block29:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0xB
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block34

 Block30:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0xC
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block34

 Block31:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0xD
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block34

 Block32:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0xE
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block34

 Block33:
	mov edi,1
	jmp Block35

 Block34:
	xor edi,edi

 Block35:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],8
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x10
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block40

 Block36:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x11
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block40

 Block37:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x12
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block40

 Block38:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x13
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block40

 Block39:
	mov edi,1
	jmp Block41

 Block40:
	xor edi,edi

 Block41:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0xF
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x16
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block47

 Block42:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x17
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block47

 Block43:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x18
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block47

 Block44:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x19
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block47

 Block45:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x15
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block47

 Block46:
	mov edi,1
	jmp Block48

 Block47:
	xor edi,edi

 Block48:
	push 0
	lea edx,[esp+0x20]
	mov ebx,0x14
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x1B
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block53

 Block49:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x1C
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block53

 Block50:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x1D
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block53

 Block51:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x1E
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block53

 Block52:
	lea edi,[ebx-0x13]
	jmp Block54

 Block53:
	xor edi,edi

 Block54:
	push 0
	lea edx,[esp+0x20]
	mov ebp,0x1A
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	push 0
	lea eax,[esp+0x20]
	mov edi,1
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block60

 Block55:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],2
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block60

 Block56:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],8
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	je Block60

 Block57:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0xF
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block60

 Block58:
	push 0
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	cmp dword ptr [eax+0x48],0
	je Block60

 Block59:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov edx,dword ptr [eax+0x10]
	cmp dword ptr [edx+0x48],0
	jne Block61

 Block60:
	xor edi,edi

 Block61:
	push 0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CCtrlCheckBox::SetChecked
	pop edi
	pop esi
	pop ebx

 Block62:
	pop ebp
	ret 0xC
}
}
// TabPartySearch::SetControl_As_Setting
_SUB_EXCEPTION_HANDLER(419DE0)
__SUB_CLASS_THIS0(00419DE0, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_419DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edx,ecx
	mov dword ptr [ebp-0x24],edx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x3794]
	mov esi,dword ptr [eax+0x3798]
	mov ebx,dword ptr [eax+0x379C]
	mov edi,dword ptr [eax+0x37A0]
	mov eax,dword ptr [eax+0x37A4]
	mov dword ptr [ebp-0x28],eax
	test ecx,ecx
	je Block2

 Block1:
	mov ecx,edx
	call TabPartySearch::SetControl_As_Default
	jmp Block34

 Block2:
	test esi,esi
	jle Block4

 Block3:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,0xC
	jmp Block5

 Block4:
	mov eax,offset _S_

 Block5:
	mov dword ptr [ebp-0x18],0
	test eax,eax
	je Block9

 Block6:
	mov ecx,eax
	lea esi,[ecx+1]
	lea esp,[esp]

 Block7:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block7

 Block8:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp-0x18]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp-0x18]
	call ZXString<char>::ReleaseBuffer

 Block9:
	mov dword ptr [ebp-4],0
	test ebx,ebx
	jle Block11

 Block10:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,0xC
	jmp Block12

 Block11:
	mov eax,offset _S_

 Block12:
	mov dword ptr [ebp-0x1C],0
	test eax,eax
	je Block16

 Block13:
	mov ecx,eax
	lea esi,[ecx+1]

 Block14:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block14

 Block15:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp-0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp-0x1C]
	call ZXString<char>::ReleaseBuffer

 Block16:
	mov byte ptr [ebp-4],1
	test edi,edi
	jle Block18

 Block17:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	jmp Block19

 Block18:
	mov eax,offset _S_

 Block19:
	mov dword ptr [ebp-0x20],0
	test eax,eax
	je Block23

 Block20:
	mov ecx,eax
	lea esi,[ecx+1]

 Block21:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block21

 Block22:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp-0x20]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp-0x20]
	call ZXString<char>::ReleaseBuffer

 Block23:
	mov esi,dword ptr [ebp-0x24]
	push 0
	lea ecx,[ebp-0x14]
	add esi,0x40
	push ecx
	mov ebx,2
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x14],0
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [ebp-0x18]
	push edx
	mov ecx,eax
	call CCtrlEdit::SetText
	push 0
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	mov dword ptr [ebp-0x14],1
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [eax+0x10]
	push ecx
	mov ecx,eax
	call CCtrlEdit::SetText
	push 0
	lea edx,[ebp-0x14]
	push edx
	mov ecx,esi
	mov dword ptr [ebp-0x14],ebx
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [ebp-0x20]
	mov eax,dword ptr [eax+0x10]
	push ecx
	mov ecx,eax
	call CCtrlEdit::SetText
	mov esi,dword ptr [ebp-0x24]
	xor edi,edi
	mov dword ptr [ebp-0x14],edi
	add esi,0x28
	lea ebx,[ebx]

 Block24:
	mov eax,dword ptr [ebp-0x28]
	mov edx,1
	mov ecx,edi
	shl edx,cl
	push 0
	test eax,edx
	je Block26

 Block25:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push 1
	jmp Block27

 Block26:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push 0

 Block27:
	mov eax,dword ptr [eax+0x10]
	mov ecx,eax
	call CCtrlCheckBox::SetChecked
	inc edi
	cmp edi,0x1F
	mov dword ptr [ebp-0x14],edi
	jl Block24

 Block28:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea esp,[ebp-0x48]
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
// TabPartySearch::HoldSearch
__SUB_CLASS_THIS0(00418740, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x37A8]
	test eax,eax
	je Block3

 Block1:
	cmp eax,2
	je Block3

 Block2:
	mov dword ptr [ecx+0x37A8],2
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ShowPartySearch_Remocon_Holding
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendCancelPartyWanted
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CWnd::InvalidateRect

 Block3:
	pop esi
	ret
}
}
// TabPartySearch::StopSearch
__SUB_CLASS_THIS0(0041C9C0, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x37A8],0
	je Block2

 Block1:
	call TabPartySearch::SetControl_As_Default
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x3794
	call PARTYSERACH_SETTING::Clear
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x37A8],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ClosePartySearch_Remocon
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	jmp  CWvsContext::SendCancelPartyWanted

 Block2:
	ret
}
}
// TabPartySearch::Draw
_SUB_EXCEPTION_HANDLER(418790)
__SUB_CLASS_THIS(00418790, __thiscall, 85658,  TabPartySearch, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_418790
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
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__117
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esi+0x58]
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// TabPartySearch::OnButtonClicked
__SUB_CLASS_THIS(0041CA10, __thiscall, 85659,  TabPartySearch, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x1770
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	call TabPartySearch::StopSearch
	ret 4

 Block4:
	call TabPartySearch::HoldSearch
	ret 4

 Block5:
	call TabPartySearch::StartSearch

 Block6:
	ret 4
}
}
// TabPartySearch::ActivateControls
_SUB_EXCEPTION_HANDLER(4190F0)
__SUB_CLASS_THIS0(004190F0, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4190F0
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
	mov dword ptr [esp+0x28],esi
	xor edi,edi
	xor ebx,ebx
	lea ebp,[esi+0x10]
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x24],ebp
	lea esp,[esp]

 Block1:
	push edi
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	inc ebx
	cmp ebx,3
	mov dword ptr [esp+0x14],ebx
	jl Block1

 Block2:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[ecx]

 Block3:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	inc ebx
	cmp ebx,3
	mov dword ptr [esp+0x14],ebx
	jl Block3

 Block4:
	xor ebx,ebx
	add esi,0x40
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x1C],esi
	nop

 Block5:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	inc ebx
	cmp ebx,3
	mov dword ptr [esp+0x14],ebx
	jl Block5

 Block6:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[ecx]

 Block7:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	inc ebx
	cmp ebx,3
	mov dword ptr [esp+0x14],ebx
	jl Block7

 Block8:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x35]
	push edx
	add eax,0x33
	push eax
	mov dword ptr [esp+0x3C],edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,edi
	je Block12

 Block9:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	mov ebx,1
	push ebx
	mov ecx,esi
	call eax
	jmp Block13

 Block12:
	mov ebx,1

 Block13:
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x14],edi
	add esi,0x28
	lea esp,[esp]

 Block14:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esp+0x14]
	add eax,ebx
	cmp eax,0x1F
	mov dword ptr [esp+0x14],eax
	jl Block14

 Block15:
	cmp dword ptr [esp+0x20],0x1D
	ja Block27

 Block16:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],edi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebp,2
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebp,8
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	push ebx
	mov eax,dword ptr [edx+0x24]
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebp,0x1A
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebp,0x14
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0xF
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,7
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0xD
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0xE
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	mov ebx,0x1E
	push edi
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0x13
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	cmp dword ptr [esp+0x20],ebp
	jl Block18

 Block17:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0x15
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,0x19
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push 0x91
	push 0x5B
	call CCtrlWnd::Move

 Block18:
	mov ebp,dword ptr [esp+0x24]
	mov ebx,1

 Block19:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x37A8]
	sub eax,edi
	je Block37

 Block20:
	sub eax,ebx
	je Block32

 Block21:
	sub eax,ebx
	jne Block41

 Block22:
	push edi
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x30],edi
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],2
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp

 Block23:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	add ebp,ebx
	cmp ebp,0x1F
	mov dword ptr [esp+0x14],ebp
	jl Block23

 Block24:
	xor esi,esi
	mov dword ptr [esp+0x14],esi

 Block25:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	add esi,ebx
	cmp esi,3
	mov dword ptr [esp+0x14],esi
	jl Block25

 Block26:
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
	xor eax,eax
	mov dword ptr [esp+0x14],eax

 Block28:
	cmp eax,0x15
	je Block30

 Block29:
	push edi
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx
	push edi
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push edi
	call eax
	mov eax,dword ptr [esp+0x14]

 Block30:
	add eax,ebx
	cmp eax,0x1F
	mov dword ptr [esp+0x14],eax
	jl Block28

 Block31:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],0x19
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	push 0xB3
	push 0x5B
	call CCtrlWnd::Move
	jmp Block19

 Block32:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],edi
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],2
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	lea ecx,[ecx]

 Block33:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	add ebp,ebx
	cmp ebp,0x1F
	mov dword ptr [esp+0x14],ebp
	jl Block33

 Block34:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	lea ecx,[ecx]

 Block35:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	add esi,ebx
	cmp esi,3
	mov dword ptr [esp+0x14],esi
	jl Block35

 Block36:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block37:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],edi
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],2
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp

 Block38:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	add ebp,ebx
	cmp ebp,0x1F
	mov dword ptr [esp+0x14],ebp
	jl Block38

 Block39:
	xor esi,esi
	mov dword ptr [esp+0x14],esi

 Block40:
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	add esi,ebx
	cmp esi,3
	mov dword ptr [esp+0x14],esi
	jl Block40

 Block41:
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
// TabPartySearch::OnCreate
_SUB_EXCEPTION_HANDLER(41A8E0)
__SUB_CLASS_THIS(0041A8E0, __thiscall, 85657,  TabPartySearch, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41A8E0
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [ebx+0xC]
	xor ebp,ebp
	push ebp
	push ebp
	lea esi,[ebx+0x58]
	push eax
	mov ecx,esi
	call CLayoutMan::Init
	push ebp
	push ebp
	push ebp
	push 0x1770
	push offset _S_UIUIWINDOW2IMGUS__120
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x44],ebp
	call CLayoutMan::AddButton
	mov edi,dword ptr [eax+4]
	push ebp
	lea edx,[esp+0x30]
	add ebx,0x10
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0xC0],ebp
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov ebp,eax
	test edi,edi
	je Block59

 Block1:
	add edi,8
	je Block59

 Block2:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block4

 Block3:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x10],edi
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	cmp dword ptr [esp+0x38],0
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x1771
	push offset _S_UIUIWINDOW2IMGUS__119
	lea ecx,[esp+0x48]
	push ecx
	mov edi,1
	mov ecx,esi
	mov dword ptr [esp+0x44],edi
	call CLayoutMan::AddButton
	push 0
	lea edx,[esp+0x30]
	mov dword ptr [esp+0xBC],edi
	mov edi,dword ptr [eax+4]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov ebp,eax
	test edi,edi
	je Block60

 Block9:
	add edi,8
	je Block60

 Block10:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x10],edi
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	xor ebp,ebp
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	cmp dword ptr [esp+0x38],ebp
	je Block16

 Block15:
	push ebp
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push ebp
	push ebp
	push ebp
	push 0x1772
	push offset _S_UIUIWINDOW2IMGUS__118
	lea ecx,[esp+0x48]
	push ecx
	mov edi,2
	mov ecx,esi
	mov dword ptr [esp+0x44],edi
	call CLayoutMan::AddButton
	mov esi,dword ptr [eax+4]
	push ebp
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0xC0],edi
	call ZMap<long, ZRef<CCtrlButton>, long>::Insert
	mov edi,eax
	cmp esi,ebp
	je Block61

 Block17:
	add esi,8
	cmp esi,ebp
	je Block61

 Block18:
	add esi,0xFFFFFFF8
	cmp esi,ebp
	je Block20

 Block19:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [edi+0x10],esi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block22

 Block21:
	push ebp
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	cmp dword ptr [esp+0x38],ebp
	je Block24

 Block23:
	push ebp
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x38]
	mov ebx,dword ptr [eax+4]
	cmp esi,ebp
	je Block29

 Block25:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	mov dword ptr [esp+0x38],ebp

 Block29:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	lea edx,[eax-0x1E]
	add esp,8
	mov dword ptr [esp+0x20],ebp
	cmp edx,0x27
	ja Block31

 Block30:
	mov dword ptr [esp+0x20],ebp

 Block31:
	lea ecx,[eax-0x46]
	cmp ecx,0x31
	ja Block33

 Block32:
	mov dword ptr [esp+0x20],1

 Block33:
	lea edx,[eax-0x78]
	cmp edx,0x50
	ja Block35

 Block34:
	mov dword ptr [esp+0x20],2

 Block35:
	cmp eax,0x14
	mov dword ptr [esp+0x2C],ebp
	mov esi,3
	jl Block38

 Block36:
	cmp eax,0x1E
	jge Block39

 Block37:
	mov dword ptr [esp+0x2C],ebp

 Block38:
	cmp eax,0x1E
	jl Block41

 Block39:
	cmp eax,0x37
	jge Block42

 Block40:
	mov dword ptr [esp+0x2C],1

 Block41:
	cmp eax,0x37
	jl Block44

 Block42:
	cmp eax,0x46
	jge Block45

 Block43:
	mov dword ptr [esp+0x2C],2

 Block44:
	cmp eax,0x46
	jl Block47

 Block45:
	cmp eax,0x78
	jge Block48

 Block46:
	mov dword ptr [esp+0x2C],esi

 Block47:
	cmp eax,0x78
	jl Block50

 Block48:
	cmp eax,0xC8
	jg Block50

 Block49:
	mov dword ptr [esp+0x2C],4

 Block50:
	lea ecx,[esp+0x3C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	lea eax,[esp+0x34]
	push 0x1A25
	push eax
	mov dword ptr [esp+0xC0],esi
	mov dword ptr [esp+0x44],ebp
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x58],0xFF777777
	mov dword ptr [esp+0x54],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	lea ecx,[esp+0x48]
	cmp ecx,esi
	je Block55

 Block51:
	mov ecx,dword ptr [esp+0x48]
	cmp ecx,ebp
	je Block53

 Block52:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x48],ebp

 Block53:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x48],esi
	cmp esi,ebp
	je Block55

 Block54:
	add esi,8
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebp
	je Block57

 Block56:
	call _xbstr_t::Data_t::Release

 Block57:
	push offset _S_ALLJOBS
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x6C],0xFFFFFFFC
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0xB8],4
	cmp eax,ebp
	je Block62

 Block58:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block63

 Block59:
	xor edi,edi
	jmp Block4

 Block60:
	xor edi,edi
	jmp Block12

 Block61:
	xor esi,esi
	jmp Block20

 Block62:
	xor edi,edi

 Block63:
	mov ebp,dword ptr [esp+0x18]
	xor ebx,ebx
	push ebx
	lea edx,[esp+0x38]
	lea ecx,[ebp+0x28]
	push edx
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x3C],ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block71

 Block64:
	add edi,8
	cmp edi,ebx
	je Block71

 Block65:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block67

 Block66:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block67:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block69

 Block68:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block69:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x6E
	push 9
	push 0x1B59
	push eax
	call edx
	push ebx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],5
	cmp eax,ebx
	je Block72

 Block70:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block73

 Block71:
	xor edi,edi
	jmp Block67

 Block72:
	xor edi,edi

 Block73:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x20],1
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block81

 Block74:
	add edi,8
	cmp edi,ebx
	je Block81

 Block75:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block77

 Block76:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block77:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block79

 Block78:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block79:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x80
	push 9
	push 0x1B5A
	push eax
	call edx
	push 0x64
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],6
	cmp eax,ebx
	je Block82

 Block80:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block83

 Block81:
	xor edi,edi
	jmp Block77

 Block82:
	xor edi,edi

 Block83:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x20],2
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block91

 Block84:
	add edi,8
	cmp edi,ebx
	je Block91

 Block85:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block87

 Block86:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block87:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block89

 Block88:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block89:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x6F
	push 0xAD
	push 0x1B5B
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x6E
	push eax
	mov dword ptr [esp+0x54],0xFFB5B5B5
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],7
	cmp eax,ebx
	je Block92

 Block90:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block93

 Block91:
	xor edi,edi
	jmp Block87

 Block92:
	xor edi,edi

 Block93:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x20],3
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block101

 Block94:
	add edi,8
	cmp edi,ebx
	je Block101

 Block95:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block97

 Block96:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block97:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block99

 Block98:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block99:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0x80
	push 0xAD
	push 0x1B5C
	push edx
	call eax
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x78
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],8
	cmp eax,ebx
	je Block102

 Block100:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block103

 Block101:
	xor edi,edi
	jmp Block97

 Block102:
	xor edi,edi

 Block103:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x20],4
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block117

 Block104:
	add edi,8
	cmp edi,ebx
	je Block117

 Block105:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block107

 Block106:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block107:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block109

 Block108:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block109:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x91
	push 0xAD
	push 0x1B5D
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x82
	push eax
	call get_job_name
	add esp,4
	mov dword ptr [esp+0x24],ebx
	cmp eax,ebx
	je Block113

 Block110:
	mov ecx,eax
	lea esi,[ecx+1]
	lea esp,[esp]

 Block111:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block111

 Block112:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer

 Block113:
	lea ecx,[esp+0x28]
	push ebx
	push ecx
	mov byte ptr [esp+0xC0],9
	call get_basic_font
	add esp,8
	mov edx,dword ptr [esp+0x28]
	push 0x46
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block115:
	lea eax,[esp+0x2C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_assign
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0xB
	cmp eax,ebx
	je Block118

 Block116:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block119

 Block117:
	xor edi,edi
	jmp Block107

 Block118:
	xor edi,edi

 Block119:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],5
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block129

 Block120:
	add edi,8
	cmp edi,ebx
	je Block129

 Block121:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block123

 Block122:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block125

 Block124:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block125:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xA2
	push 0xAD
	push 0x1B5E
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x456
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::AssignCStr
	push 0x46
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block127

 Block126:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block127:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_assign
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0xC
	cmp eax,ebx
	je Block130

 Block128:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block131

 Block129:
	xor edi,edi
	jmp Block123

 Block130:
	xor edi,edi

 Block131:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],6
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block139

 Block132:
	add edi,8
	cmp edi,ebx
	je Block139

 Block133:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block135

 Block134:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block135:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block137

 Block136:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block137:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xB3
	push 0xAD
	push 0x1B5F
	push eax
	call edx
	push 0x834
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0xD
	cmp eax,ebx
	je Block140

 Block138:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block141

 Block139:
	xor edi,edi
	jmp Block135

 Block140:
	xor edi,edi

 Block141:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],7
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block149

 Block142:
	add edi,8
	cmp edi,ebx
	je Block149

 Block143:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block145

 Block144:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block145:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block147

 Block146:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block147:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xC4
	push 0xAD
	push 0x1B60
	push eax
	call edx
	push 0xC8
	mov dword ptr [esp+0x54],0xFF777777
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0xE
	cmp eax,ebx
	je Block150

 Block148:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block151

 Block149:
	xor edi,edi
	jmp Block145

 Block150:
	xor edi,edi

 Block151:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],8
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block161

 Block152:
	add edi,8
	cmp edi,ebx
	je Block161

 Block153:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block155

 Block154:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block155:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block157

 Block156:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block157:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xA2
	push 9
	push 0x1B61
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0xD2
	push eax
	mov dword ptr [esp+0x54],0xFFB5B5B5
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::AssignCStr
	push 0x46
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block159

 Block158:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block159:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_assign
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0xF
	cmp eax,ebx
	je Block162

 Block160:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block163

 Block161:
	xor edi,edi
	jmp Block155

 Block162:
	xor edi,edi

 Block163:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],9
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block173

 Block164:
	add edi,8
	cmp edi,ebx
	je Block173

 Block165:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block167

 Block166:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block167:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block169

 Block168:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block169:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xB3
	push 9
	push 0x1B62
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0xDC
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::AssignCStr
	push 0x46
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block171

 Block170:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block171:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_assign
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x10
	cmp eax,ebx
	je Block174

 Block172:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block175

 Block173:
	xor edi,edi
	jmp Block167

 Block174:
	xor edi,edi

 Block175:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xA
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block183

 Block176:
	add edi,8
	cmp edi,ebx
	je Block183

 Block177:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block179

 Block178:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block179:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block181

 Block180:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block181:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xC4
	push 9
	push 0x1B63
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0xE6
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x11
	cmp eax,ebx
	je Block184

 Block182:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block185

 Block183:
	xor edi,edi
	jmp Block179

 Block184:
	xor edi,edi

 Block185:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xB
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block193

 Block186:
	add edi,8
	cmp edi,ebx
	je Block193

 Block187:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block189

 Block188:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block189:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block191

 Block190:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block191:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0xD5
	push 9
	push 0x1B64
	push edx
	call eax
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x4BA
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x12
	cmp eax,ebx
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block195

 Block193:
	xor edi,edi
	jmp Block189

 Block194:
	xor edi,edi

 Block195:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xC
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block203

 Block196:
	add edi,8
	cmp edi,ebx
	je Block203

 Block197:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block199

 Block198:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block201

 Block200:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block201:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xE6
	push 9
	push 0x1B65
	push eax
	call edx
	push 0x898
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x13
	cmp eax,ebx
	je Block204

 Block202:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block205

 Block203:
	xor edi,edi
	jmp Block199

 Block204:
	xor edi,edi

 Block205:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xD
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block213

 Block206:
	add edi,8
	cmp edi,ebx
	je Block213

 Block207:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block209

 Block208:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block209:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block211

 Block210:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block211:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xF7
	push 9
	push 0x1B66
	push eax
	call edx
	push 0xC80
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x14
	cmp eax,ebx
	je Block214

 Block212:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block215

 Block213:
	xor edi,edi
	jmp Block209

 Block214:
	xor edi,edi

 Block215:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xE
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block223

 Block216:
	add edi,8
	cmp edi,ebx
	je Block223

 Block217:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block219

 Block218:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block219:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block221

 Block220:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block221:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x108
	push 9
	push 0x1B67
	push eax
	call edx
	push 0x1F4
	mov dword ptr [esp+0x54],0xFF777777
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x15
	cmp eax,ebx
	je Block224

 Block222:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block225

 Block223:
	xor edi,edi
	jmp Block219

 Block224:
	xor edi,edi

 Block225:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0xF
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block233

 Block226:
	add edi,8
	cmp edi,ebx
	je Block233

 Block227:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block229

 Block228:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block229:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block231

 Block230:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block231:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xD7
	push 0xAD
	push 0x1B68
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x1FE
	push eax
	mov dword ptr [esp+0x54],0xFFB5B5B5
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x16
	cmp eax,ebx
	je Block234

 Block232:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block235

 Block233:
	xor edi,edi
	jmp Block229

 Block234:
	xor edi,edi

 Block235:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x10
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block243

 Block236:
	add edi,8
	cmp edi,ebx
	je Block243

 Block237:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block239

 Block238:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block239:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block241

 Block240:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block241:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0xE8
	push 0xAD
	push 0x1B69
	push edx
	call eax
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x208
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x17
	cmp eax,ebx
	je Block244

 Block242:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block245

 Block243:
	xor edi,edi
	jmp Block239

 Block244:
	xor edi,edi

 Block245:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x11
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block255

 Block246:
	add edi,8
	cmp edi,ebx
	je Block255

 Block247:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block249

 Block248:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block249:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block251

 Block250:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block251:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xF9
	push 0xAD
	push 0x1B6A
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x5E6
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::AssignCStr
	push 0x46
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block253

 Block252:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block253:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_assign
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x18
	cmp eax,ebx
	je Block256

 Block254:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block257

 Block255:
	xor edi,edi
	jmp Block249

 Block256:
	xor edi,edi

 Block257:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x12
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block265

 Block258:
	add edi,8
	cmp edi,ebx
	je Block265

 Block259:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block261

 Block260:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block261:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block263

 Block262:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block263:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x10A
	push 0xAD
	push 0x1B6B
	push eax
	call edx
	push 0xDAC
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x19
	cmp eax,ebx
	je Block266

 Block264:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block267

 Block265:
	xor edi,edi
	jmp Block261

 Block266:
	xor edi,edi

 Block267:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x13
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block277

 Block268:
	add edi,8
	cmp edi,ebx
	je Block277

 Block269:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block271

 Block270:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block271:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block273

 Block272:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block273:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x11B
	push 0xAD
	push 0x1B6C
	push eax
	call edx
	lea eax,[esp+0x18]
	push 0xF
	push eax
	mov dword ptr [esp+0x58],0xFF777777
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xBC],0x1A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB8],0xA
	cmp eax,ebx
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block275:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x1B
	cmp eax,ebx
	je Block278

 Block276:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block279

 Block277:
	xor edi,edi
	jmp Block271

 Block278:
	xor edi,edi

 Block279:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x14
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block287

 Block280:
	add edi,8
	cmp edi,ebx
	je Block287

 Block281:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block283

 Block282:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block283:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block285

 Block284:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block285:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0x6F
	push 0x5B
	push 0x1B6D
	push edx
	call eax
	push 0x190
	mov dword ptr [esp+0x54],0xFFB5B5B5
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x1C
	cmp eax,ebx
	je Block288

 Block286:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block289

 Block287:
	xor edi,edi
	jmp Block283

 Block288:
	xor edi,edi

 Block289:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x15
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block297

 Block290:
	add edi,8
	cmp edi,ebx
	je Block297

 Block291:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block293

 Block292:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block293:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block295

 Block294:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block295:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0x80
	push 0x5B
	push 0x1B6E
	push edx
	call eax
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x19A
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x1D
	cmp eax,ebx
	je Block298

 Block296:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block299

 Block297:
	xor edi,edi
	jmp Block293

 Block298:
	xor edi,edi

 Block299:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x16
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block307

 Block300:
	add edi,8
	cmp edi,ebx
	je Block307

 Block301:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block303

 Block302:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block303:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block305

 Block304:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block305:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x80
	push 0x5B
	push 0x1B6F
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x1A4
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x1E
	cmp eax,ebx
	je Block308

 Block306:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block309

 Block307:
	xor edi,edi
	jmp Block303

 Block308:
	xor edi,edi

 Block309:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x17
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block317

 Block310:
	add edi,8
	cmp edi,ebx
	je Block317

 Block311:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block313

 Block312:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block313:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block315

 Block314:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block315:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0x91
	push 0x5B
	push 0x1B70
	push edx
	call eax
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x582
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x1F
	cmp eax,ebx
	je Block318

 Block316:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov edi,eax
	jmp Block319

 Block317:
	xor edi,edi
	jmp Block313

 Block318:
	xor edi,edi

 Block319:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[ebp+0x28]
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x18
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov esi,eax
	cmp edi,ebx
	je Block327

 Block320:
	add edi,8
	cmp edi,ebx
	je Block327

 Block321:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block323

 Block322:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block323:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block325

 Block324:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block325:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xA2
	push 0x5B
	push 0x1B71
	push eax
	call edx
	mov eax,dword ptr [esp+0x2C]
	add eax,0x1AE
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x20
	cmp eax,ebx
	je Block328

 Block326:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block329

 Block327:
	xor edi,edi
	jmp Block323

 Block328:
	xor esi,esi

 Block329:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea edi,[ebp+0x28]
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x19
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xB3
	push 0x5B
	push 0x1B72
	push eax
	call edx
	push 0x12C
	mov dword ptr [esp+0x54],0xFF777777
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x21
	cmp eax,ebx
	je Block331

 Block330:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block332

 Block331:
	xor esi,esi

 Block332:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x1A
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xD7
	push 0x5B
	push 0x1B73
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x136
	push eax
	mov dword ptr [esp+0x54],0xFFB5B5B5
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x22
	cmp eax,ebx
	je Block334

 Block333:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block335

 Block334:
	xor esi,esi

 Block335:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x1B
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xE8
	push 0x5B
	push 0x1B74
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x140
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x23
	cmp eax,ebx
	je Block337

 Block336:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block338

 Block337:
	xor esi,esi

 Block338:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x1C
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xF9
	push 0x5B
	push 0x1B75
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	add eax,0x51E
	push eax
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x24
	cmp eax,ebx
	je Block340

 Block339:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block341

 Block340:
	xor esi,esi

 Block341:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x1D
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x10A
	push 0x5B
	push 0x1B76
	push eax
	call edx
	push 0xCE4
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x25
	cmp eax,ebx
	je Block343

 Block342:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	mov esi,eax
	jmp Block344

 Block343:
	xor esi,esi

 Block344:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC0],0xA
	mov dword ptr [esp+0x20],0x1E
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	push esi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0x11B
	push 0x5B
	push 0x1B77
	push eax
	call edx
	lea ecx,[esp+0x70]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x18]
	push 0x1A25
	mov bl,0x26
	push eax
	mov byte ptr [esp+0xC0],bl
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	mov dword ptr [esp+0xAC],1
	mov dword ptr [esp+0xA8],3
	mov dword ptr [esp+0x94],0xFF555555
	mov dword ptr [esp+0x90],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	lea ecx,[esp+0x84]
	cmp ecx,esi
	je Block349

 Block345:
	mov ecx,dword ptr [esp+0x84]
	test ecx,ecx
	je Block347

 Block346:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x84],0

 Block347:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x84],esi
	test esi,esi
	je Block349

 Block348:
	add esi,8
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block349:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block351

 Block350:
	call _xbstr_t::Data_t::Release

 Block351:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x27
	test eax,eax
	je Block353

 Block352:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	mov edi,eax
	jmp Block354

 Block353:
	xor edi,edi

 Block354:
	push 0
	lea edx,[esp+0x1C]
	lea esi,[ebp+0x40]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC0],bl
	mov dword ptr [esp+0x20],0
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	push edi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push 0xB
	push 0x15
	push 0x5C
	push 0x34
	push 0x1F40
	push edx
	call eax
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x28
	test eax,eax
	je Block356

 Block355:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	mov edi,eax
	jmp Block357

 Block356:
	xor edi,edi

 Block357:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xC0],bl
	mov dword ptr [esp+0x20],1
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	push edi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xB
	push 0x15
	push 0x5C
	push 0x66
	push 0x1F41
	push eax
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xA4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB8],0x29
	test eax,eax
	je Block359

 Block358:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	mov edi,eax
	jmp Block360

 Block359:
	xor edi,edi

 Block360:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xC0],bl
	mov dword ptr [esp+0x20],2
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	push edi
	lea ecx,[eax+0xC]
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push 0xB
	push 0x15
	push 0x5C
	push 0xCF
	push 0x1F42
	push eax
	call edx
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0xB8],0xA
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],9
	test eax,eax
	je Block362

 Block361:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block362:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],3
	test eax,eax
	je Block364

 Block363:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block364:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test ecx,ecx
	je Block366

 Block365:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x48],0

 Block366:
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block368

 Block367:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block368:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// TabPartySearch::StartSearch
__SUB_CLASS_THIS0(0041C740, __thiscall, 85656,  TabPartySearch, void) {
__asm {

 Block0:
	sub esp,0x20
	push ebx
	push ebp
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3604]
	push esi
	push edi
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [ecx+0x20B4]
	cmp dword ptr [ecx+0x36B6],eax
	je Block3

 Block2:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1591
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block3:
	cmp dword ptr [ecx+0x37A8],1
	je Block17

 Block4:
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block9

 Block5:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block8:
	mov dword ptr [esp+0x18],0

 Block9:
	mov eax,dword ptr [esi+0x35]
	push eax
	add esi,0x33
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea ecx,[esp+0x1C]
	movzx edi,al
	call PARTYSERACH_SETTING::_ctor_default
	xor ebx,ebx
	push ebx
	lea ecx,[esp+0x14]
	lea esi,[ebp+0x40]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],ebx
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atol
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push ebx
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],1
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [eax+0x10]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atol
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ebx
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x1C],2
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [eax+0x10]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atol
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,ebp
	call TabPartySearch::GetSearchingJob_From_CheckBox
	mov edx,dword ptr [esp+0x1C]
	push edi
	sub esp,0x14
	mov ecx,esp
	mov dword ptr [ecx],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [ecx+0xC],edx
	mov dword ptr [ecx+0x10],eax
	mov ecx,ebp
	mov dword ptr [esp+0x44],eax
	call TabPartySearch::IsValidSetting
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x3794
	call PARTYSERACH_SETTING::Clear
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x2C]
	add eax,0x3794
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],esi
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [eax+0x37A8],1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ShowPartySearch_Remocon_Searching
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x3794]
	mov dword ptr [esp+0x1C],edx
	mov eax,dword ptr [ecx+0x3798]
	mov dword ptr [esp+0x20],eax
	mov edx,dword ptr [ecx+0x379C]
	mov dword ptr [esp+0x24],edx
	mov esi,dword ptr [ecx+0x37A0]
	mov dword ptr [esp+0x28],esi
	mov edi,dword ptr [ecx+0x37A4]
	push edi
	push esi
	push edx
	push eax
	mov dword ptr [esp+0x3C],edi
	call CWvsContext::SendPartyWanted
	mov ecx,dword ptr [ebp+0xC]
	push 0
	call CWnd::InvalidateRect

 Block17:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// TabPartySearch::GetSearchingJob_From_CheckBox
__SUB_CLASS_THIS0(00419980, __thiscall, 85661,  TabPartySearch, unsigned long) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	xor edi,edi
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	lea ebx,[ecx+0x28]
	nop

 Block1:
	push 0
	lea eax,[esp+0x10]
	push eax
	mov ecx,ebx
	call ZMap<long, ZRef<CCtrlCheckBox>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	cmp dword ptr [ecx+0x48],0
	je Block5

 Block2:
	cmp esi,0x15
	jne Block4

 Block3:
	or edi,0x100000
	jmp Block5

 Block4:
	mov edx,1
	mov ecx,esi
	shl edx,cl
	or edi,edx

 Block5:
	inc esi
	cmp esi,0x1F
	mov dword ptr [esp+0xC],esi
	jl Block1

 Block6:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
