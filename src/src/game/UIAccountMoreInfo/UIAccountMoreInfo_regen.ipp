#include "regen.hpp"
// UIAccountMoreInfo.ipp
#include "UIAccountMoreInfo.hpp"

// CUIAccountMoreInfo::OnSaveAccountMoreInfoResult
__SUB_CLASS_THIS(0036B600, __thiscall, 71572,  CUIAccountMoreInfo, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	call CInPacket::Decode1
	xor ecx,ecx
	test al,al
	mov eax,dword ptr [esi+0xBF4]
	mov edx,dword ptr [eax+4]
	setne cl
	push 1
	mov edi,ecx
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3E9
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x16B7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	ret 4
}
}
// CUIAccountMoreInfo::SetBrithDayComboBox
_SUB_EXCEPTION_HANDLER(36B670)
// 76B940
static uint8_t _SUB_36B670_LOOKUP_TABLE_0[12] = {
0, 1, 0, 2, 0, 2, 0, 0, 2, 0, 2, 0, 
};
__SUB_CLASS_THIS0(0036B670, __thiscall, 71565,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36B670
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
	mov eax,dword ptr [esi+0xB1C]
	mov eax,dword ptr [eax+0x3C]
	xor ebp,ebp
	cmp eax,ebp
	jne Block7

 Block1:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_GetLocalTime]
	movzx ebx,word ptr [esp+0x20]
	mov ecx,dword ptr [esi+0xB1C]
	lea edi,[ebx-0x64]
	call CCtrlComboBox::RemoveAllItems
	cmp edi,ebx
	jg Block6

 Block2:
	mov edi,edi

 Block3:
	mov dword ptr [esp+0x18],ebp
	push edi
	lea ecx,[esp+0x1C]
	push offset _S_D__1
	push ecx
	mov dword ptr [esp+0x44],ebp
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB1C]
	add esp,0xC
	push edi
	push eax
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	inc edi
	cmp edi,ebx
	jle Block3

 Block6:
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [eax+0x3C]
	add ecx,0xFFFFFFF1
	mov dword ptr [eax+0x68],ecx

 Block7:
	mov eax,dword ptr [esi+0xB24]
	cmp dword ptr [eax+0x3C],ebp
	jne Block13

 Block8:
	mov ebx,1
	mov edi,ebx
	lea esp,[esp]

 Block9:
	mov dword ptr [esp+0x18],ebp
	push edi
	lea edx,[esp+0x1C]
	push offset _S_D__1
	push edx
	mov dword ptr [esp+0x44],ebx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB24]
	add esp,0xC
	push edi
	push eax
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	add edi,ebx
	cmp edi,0xC
	jle Block9

 Block12:
	mov ecx,dword ptr [esi+0xB24]
	push ebp
	call CCtrlComboBox::SetSelect

 Block13:
	mov eax,dword ptr [esi+0xB2C]
	cmp dword ptr [eax+0x3C],ebp
	jg Block15

 Block14:
	xor eax,eax
	jmp Block16

 Block15:
	mov eax,dword ptr [eax+0x68]

 Block16:
	mov ecx,dword ptr [esi+0xB1C]
	mov dword ptr [esp+0x18],eax
	lea eax,[esp+0x14]
	push eax
	call CCtrlComboBox::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebp
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esi+0xB24]
	lea edx,[esp+0x14]
	push edx
	call CCtrlComboBox::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea eax,[ebx-1]
	mov dword ptr [esp+0x14],ebp
	cmp eax,0xB
	ja Block31

 Block21:
	movzx eax,byte ptr [eax+_SUB_36B670_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block22
cmp EAX, 1
je Block24
cmp EAX, 2
je Block23


 Block22:
	mov dword ptr [esp+0x14],0x1F
	jmp Block31

 Block23:
	mov dword ptr [esp+0x14],0x1E
	jmp Block31

 Block24:
	mov ecx,edi
	and ecx,0x80000003
	jns Block26

 Block25:
	dec ecx
	or ecx,0xFFFFFFFC
	inc ecx

 Block26:
	jne Block28

 Block27:
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	mov ecx,edi
	sub ecx,eax
	jne Block29

 Block28:
	mov eax,0x51EB851F
	imul edi
	sar edx,7
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x190
	sub edi,eax
	jne Block30

 Block29:
	mov dword ptr [esp+0x14],0x1D
	jmp Block31

 Block30:
	mov dword ptr [esp+0x14],0x1C

 Block31:
	mov ecx,dword ptr [esi+0xB2C]
	call CCtrlComboBox::RemoveAllItems
	mov edi,1
	cmp dword ptr [esp+0x14],edi
	jl Block36

 Block32:
	mov ebx,2

 Block33:
	mov dword ptr [esp+0x1C],ebp
	push edi
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	mov dword ptr [esp+0x44],ebx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB2C]
	add esp,0xC
	push edi
	push eax
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	inc edi
	cmp edi,dword ptr [esp+0x14]
	jle Block33

 Block36:
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [ecx+0x3C]
	cmp dword ptr [esp+0x18],eax
	jl Block38

 Block37:
	dec eax
	mov dword ptr [esp+0x18],eax

 Block38:
	mov edx,dword ptr [esp+0x18]
	push edx
	call CCtrlComboBox::SetSelect
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
// CUIAccountMoreInfo::OnKey
__SUB_CLASS_THIS(0036AD20, __thiscall, 71570,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block3

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0xACC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::UI_Close

 Block3:
	ret 8
}
}
// CUIAccountMoreInfo::GetRTTI
__SUB_CLASS_THIS0(0036AF40, __thiscall, 71575,  CUIAccountMoreInfo, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIAccountMoreInfo::ms_RTTI_CUIAccountMoreInfo
	ret
}
}
// CUIAccountMoreInfo::OnChildNotify
__SUB_CLASS_THIS(0036C2A0, __thiscall, 71567,  CUIAccountMoreInfo, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	cmp eax,0x258
	jne Block6

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3EB
	je Block5

 Block2:
	cmp eax,0x3ED
	jbe Block8

 Block3:
	cmp eax,0x3EF
	ja Block8

 Block4:
	call CUIAccountMoreInfo::SetBrithDayComboBox
	ret 0xC

 Block5:
	push 1
	call CUIAccountMoreInfo::SetAregComboBox
	ret 0xC

 Block6:
	cmp eax,0x64
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block8:
	ret 0xC
}
}
// CUIAccountMoreInfo::OnLoadAccountMoreInfoResult
__SUB_CLASS_THIS(0036C2F0, __thiscall, 71572,  CUIAccountMoreInfo, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov ebp,eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x10],eax
	call CInPacket::Decode4
	mov ebx,edi
	shr edi,8
	and edi,0xFF
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	and ebx,0xFF
	mov dword ptr [esp+0x20],edi
	call CUIAccountMoreInfo::SetAregComboBox
	mov ecx,dword ptr [esi+0xB0C]
	xor edi,edi
	cmp dword ptr [ecx+0x3C],edi
	jle Block5

 Block1:
	push edi
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esi+0xB0C]
	cmp eax,ebx
	je Block4

 Block2:
	inc edi
	cmp edi,dword ptr [ecx+0x3C]
	jl Block1

 Block3:
	jmp Block5

 Block4:
	push edi
	call CCtrlComboBox::SetSelect

 Block5:
	push 1
	mov ecx,esi
	call CUIAccountMoreInfo::SetAregComboBox
	mov ecx,dword ptr [esi+0xB14]
	xor edi,edi
	cmp dword ptr [ecx+0x3C],edi
	jle Block10

 Block6:
	push edi
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esi+0xB14]
	cmp eax,dword ptr [esp+0x1C]
	je Block9

 Block7:
	inc edi
	cmp edi,dword ptr [ecx+0x3C]
	jl Block6

 Block8:
	jmp Block10

 Block9:
	push edi
	call CCtrlComboBox::SetSelect

 Block10:
	mov eax,0xD1B71759
	mul ebp
	mov ebx,edx
	mov eax,0x51EB851F
	mul ebp
	mov ecx,edx
	shr ecx,5
	mov eax,ecx
	imul ecx,0x64
	xor edx,edx
	mov edi,0x64
	div edi
	sub ebp,ecx
	mov ecx,dword ptr [esi+0xB1C]
	xor edi,edi
	shr ebx,0xD
	cmp dword ptr [ecx+0x3C],edi
	mov dword ptr [esp+0x1C],edx
	jle Block16

 Block11:
	lea ecx,[ecx]

 Block12:
	push edi
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esi+0xB1C]
	cmp eax,ebx
	je Block15

 Block13:
	inc edi
	cmp edi,dword ptr [ecx+0x3C]
	jl Block12

 Block14:
	jmp Block16

 Block15:
	push edi
	call CCtrlComboBox::SetSelect

 Block16:
	mov ecx,dword ptr [esi+0xB24]
	xor edi,edi
	cmp dword ptr [ecx+0x3C],edi
	jle Block23

 Block17:
	jmp Block19

 Block19:
	push edi
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esi+0xB24]
	cmp eax,dword ptr [esp+0x1C]
	je Block22

 Block20:
	inc edi
	cmp edi,dword ptr [ecx+0x3C]
	jl Block19

 Block21:
	jmp Block23

 Block22:
	push edi
	call CCtrlComboBox::SetSelect

 Block23:
	mov ecx,esi
	call CUIAccountMoreInfo::SetBrithDayComboBox
	mov ecx,dword ptr [esi+0xB2C]
	xor edi,edi
	cmp dword ptr [ecx+0x3C],edi
	jle Block28

 Block24:
	push edi
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esi+0xB2C]
	cmp eax,ebp
	je Block27

 Block25:
	inc edi
	cmp edi,dword ptr [ecx+0x3C]
	jl Block24

 Block26:
	jmp Block28

 Block27:
	push edi
	call CCtrlComboBox::SetSelect

 Block28:
	xor edi,edi
	lea ebx,[esi+0xB34]
	lea ebx,[ebx]

 Block29:
	mov eax,dword ptr [esp+0x10]
	mov ecx,edi
	shr eax,cl
	test al,1
	je Block31

 Block30:
	mov ecx,dword ptr [ebx]
	push 1
	call CCtrlCheckBox::SetChecked

 Block31:
	inc edi
	add ebx,8
	cmp edi,5
	jl Block29

 Block32:
	xor edi,edi
	add esi,0xB5C

 Block33:
	mov edx,dword ptr [esp+0x14]
	mov ecx,edi
	shr edx,cl
	test dl,1
	je Block35

 Block34:
	mov ecx,dword ptr [esi]
	push 1
	call CCtrlCheckBox::SetChecked

 Block35:
	inc edi
	add esi,8
	cmp edi,0x13
	jl Block33

 Block36:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CUIAccountMoreInfo::OnCreate
_SUB_EXCEPTION_HANDLER(36C4C0)
__SUB_CLASS_THIS(0036C4C0, __thiscall, 71566,  CUIAccountMoreInfo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36C4C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x164
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x178]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x188]
	push eax
	call CUIWnd::OnCreate_0
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x16AE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	lea ecx,[esp+0xF0]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x184],ebx
	mov dword ptr [esp+0xF4],0xFFEEEEEE
	mov dword ptr [esp+0xF8],0xFFA5A198
	mov dword ptr [esp+0xFC],0xFF999999
	mov dword ptr [esp+0x114],0xA
	mov dword ptr [esp+0x144],0xFFFFFFFE
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x180],0
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block7:
	mov eax,dword ptr [esi+0xB0C]
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xB0C]
	lea edx,[esp+0xF0]
	push edx
	push 0x12
	push 0x9B
	push 0x20
	push 0x59
	push ebx
	mov dword ptr [esp+0x130],0x3F1
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	push 0x3EB
	push esi
	call eax
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],2
	cmp eax,ebx
	je Block12

 Block10:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block13

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0x180],0
	cmp eax,ebx
	je Block21

 Block14:
	add eax,8
	cmp eax,ebx
	je Block21

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block17:
	mov eax,dword ptr [esi+0xB14]
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0xB14]
	lea eax,[esp+0xF0]
	push eax
	push 0x12
	push 0x87
	push 0x20
	push 0xF8
	push ebx
	mov dword ptr [esp+0x130],0x3F2
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0x3EC
	push esi
	call edx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],3
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0x180],0
	cmp eax,ebx
	je Block31

 Block24:
	add eax,8
	cmp eax,ebx
	je Block31

 Block25:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block27

 Block26:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block27:
	mov eax,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block29

 Block28:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0xB1C]
	lea eax,[esp+0xF0]
	push eax
	push 0x12
	push 0x3C
	push 0x39
	push 0x59
	push ebx
	mov dword ptr [esp+0x130],0x3F4
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0x3EE
	push esi
	call edx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],4
	cmp eax,ebx
	je Block32

 Block30:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block27

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0x180],0
	cmp eax,ebx
	je Block41

 Block34:
	add eax,8
	cmp eax,ebx
	je Block41

 Block35:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block37

 Block36:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block37:
	mov eax,dword ptr [esi+0xB24]
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block39

 Block38:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [esi+0xB24]
	lea eax,[esp+0xF0]
	push eax
	push 0x12
	push 0x28
	push 0x39
	push 0x98
	push ebx
	mov dword ptr [esp+0x130],0x3F5
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0x3EF
	push esi
	call edx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],5
	cmp eax,ebx
	je Block42

 Block40:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block43

 Block41:
	xor edi,edi
	jmp Block37

 Block42:
	xor eax,eax

 Block43:
	mov byte ptr [esp+0x180],0
	cmp eax,ebx
	je Block52

 Block44:
	add eax,8
	cmp eax,ebx
	je Block52

 Block45:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block47

 Block46:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block47:
	mov eax,dword ptr [esi+0xB2C]
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block49

 Block48:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block49:
	mov ecx,dword ptr [esi+0xB2C]
	lea eax,[esp+0xF0]
	push eax
	push 0x12
	push 0x28
	push 0x39
	push 0xC2
	push ebx
	mov dword ptr [esp+0x130],0x3F6
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0x3F0
	push esi
	call edx
	lea ecx,[esp+0x144]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push offset _S_
	lea ecx,[esp+0x150]
	mov byte ptr [esp+0x184],6
	mov dword ptr [esp+0x14C],ebx
	mov dword ptr [esp+0x164],0xF
	mov dword ptr [esp+0x168],0x46
	call ZXString<char>::AssignCStr
	mov edx,0xD3
	mov dword ptr [esp+0x5C],edx
	mov dword ptr [esp+0x64],edx
	mov dword ptr [esp+0x6C],edx
	mov dword ptr [esp+0x74],edx
	mov edx,0xE5
	mov dword ptr [esp+0x7C],edx
	mov dword ptr [esp+0x84],edx
	mov dword ptr [esp+0x8C],edx
	mov edx,0xF7
	mov dword ptr [esp+0x94],edx
	mov dword ptr [esp+0x9C],edx
	mov dword ptr [esp+0xA4],edx
	mov edx,0x109
	mov edi,0xD
	mov eax,0x83
	mov ecx,0x68
	mov dword ptr [esp+0xAC],edx
	mov dword ptr [esp+0xB4],edx
	mov dword ptr [esp+0xBC],edx
	mov edx,0x11B
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x4C],eax
	mov eax,0xDC
	mov dword ptr [esp+0xC4],edx
	mov dword ptr [esp+0xCC],edx
	mov dword ptr [esp+0xD4],edx
	mov edx,0x12D
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x38],0x51
	mov dword ptr [esp+0x40],0xA7
	mov dword ptr [esp+0x48],0x108
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x54],0x9B
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x60],ecx
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x70],0x143
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x80],ecx
	mov dword ptr [esp+0x88],eax
	mov dword ptr [esp+0x90],edi
	mov dword ptr [esp+0x98],ecx
	mov dword ptr [esp+0xA0],eax
	mov dword ptr [esp+0xA8],edi
	mov dword ptr [esp+0xB0],ecx
	mov dword ptr [esp+0xB8],eax
	mov dword ptr [esp+0xC0],edi
	mov dword ptr [esp+0xC8],ecx
	mov dword ptr [esp+0xD0],eax
	mov dword ptr [esp+0xD8],edi
	mov dword ptr [esp+0xDC],edx
	mov dword ptr [esp+0xE0],ecx
	mov dword ptr [esp+0xE4],edx
	mov dword ptr [esp+0xE8],eax
	mov dword ptr [esp+0xEC],edx
	xor edi,edi
	lea ebp,[esi+0xB34]

 Block50:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],7
	test eax,eax
	je Block53

 Block51:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block54

 Block52:
	xor edi,edi
	jmp Block47

 Block53:
	xor eax,eax

 Block54:
	mov byte ptr [esp+0x180],6
	test eax,eax
	je Block66

 Block55:
	add eax,8
	je Block66

 Block56:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block58

 Block57:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block58:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],ebx
	test eax,eax
	je Block62

 Block59:
	lea ebx,[eax+8]
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block62

 Block60:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block62

 Block61:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block62:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x144]
	push eax
	mov eax,dword ptr [esp+edi*8+0x38]
	push eax
	mov eax,dword ptr [esp+edi*8+0x38]
	push eax
	lea eax,[edi+0x3F7]
	push eax
	push esi
	call edx
	mov ecx,dword ptr [ebp]
	push 0
	call CCtrlCheckBox::SetChecked
	inc edi
	add ebp,8
	cmp edi,5
	jl Block50

 Block63:
	xor edi,edi
	lea ebp,[esi+0xB5C]
	nop

 Block64:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],8
	test eax,eax
	je Block67

 Block65:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block68

 Block66:
	xor ebx,ebx
	jmp Block58

 Block67:
	xor eax,eax

 Block68:
	mov byte ptr [esp+0x180],6
	test eax,eax
	je Block81

 Block69:
	add eax,8
	je Block81

 Block70:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block72

 Block71:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block72:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],ebx
	test eax,eax
	je Block76

 Block73:
	lea ebx,[eax+8]
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block74:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block76

 Block75:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block76:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x144]
	push eax
	mov eax,dword ptr [esp+edi*8+0x60]
	push eax
	mov eax,dword ptr [esp+edi*8+0x60]
	push eax
	lea eax,[edi+0x3FC]
	push eax
	push esi
	call edx
	mov ecx,dword ptr [ebp]
	push 0
	call CCtrlCheckBox::SetChecked
	inc edi
	add ebp,8
	cmp edi,0x13
	jl Block64

 Block77:
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x28],ebp
	lea eax,[esp+0x1C]
	push 0x512
	mov bl,9
	push eax
	mov byte ptr [esp+0x188],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x184],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x180],bl
	cmp eax,ebp
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],0xB
	cmp eax,ebp
	je Block82

 Block80:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block83

 Block81:
	xor ebx,ebx
	jmp Block72

 Block82:
	xor eax,eax

 Block83:
	mov byte ptr [esp+0x180],bl
	cmp eax,ebp
	je Block95

 Block84:
	add eax,8
	cmp eax,ebp
	je Block95

 Block85:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block87

 Block86:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block87:
	mov eax,dword ptr [esi+0xBF4]
	mov dword ptr [esi+0xBF4],edi
	cmp eax,ebp
	je Block91

 Block88:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block89:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block91

 Block90:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block91:
	mov ecx,dword ptr [esi+0xBF4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebp
	push 0x14B
	push 0x127
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x1C]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x184],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x180],bl
	cmp eax,ebp
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block93:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x180],0xD
	cmp eax,ebp
	je Block96

 Block94:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block97

 Block95:
	xor edi,edi
	jmp Block87

 Block96:
	xor eax,eax

 Block97:
	mov byte ptr [esp+0x180],bl
	cmp eax,ebp
	je Block127

 Block98:
	add eax,8
	cmp eax,ebp
	je Block127

 Block99:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block101

 Block100:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block101:
	mov eax,dword ptr [esi+0xBFC]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esi+0xBFC],edi
	cmp eax,ebp
	je Block105

 Block102:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call ebx
	test eax,eax
	jne Block105

 Block103:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block105

 Block104:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block105:
	mov ecx,dword ptr [esi+0xBFC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebp
	push 0x14B
	push 0x159
	push 0x3EA
	push esi
	call edx
	push ebp
	mov ecx,esi
	call CUIAccountMoreInfo::SetAregComboBox
	mov ecx,esi
	call CUIAccountMoreInfo::SetBrithDayComboBox
	mov ecx,esi
	call CUIAccountMoreInfo::SendLoadAccountMoreInfoRequest
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x180],6
	cmp eax,ebp
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block107:
	mov esi,dword ptr [esp+0x150]
	mov byte ptr [esp+0x180],0xE
	cmp esi,ebp
	je Block116

 Block108:
	lea eax,[esi+8]
	push eax
	call ebx
	cmp eax,ebp
	jne Block115

 Block109:
	cmp esi,ebp
	je Block115

 Block110:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block112

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block112:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block114

 Block113:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block114:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block115:
	mov dword ptr [esp+0x150],ebp

 Block116:
	mov eax,dword ptr [esp+0x14C]
	mov byte ptr [esp+0x180],0
	cmp eax,ebp
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block118:
	mov esi,dword ptr [esp+0x13C]
	mov dword ptr [esp+0x180],0xFFFFFFFF
	cmp esi,ebp
	je Block126

 Block119:
	lea ecx,[esi+8]
	push ecx
	call ebx
	test eax,eax
	jne Block126

 Block120:
	cmp esi,ebp
	je Block126

 Block121:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block123

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block123:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block125

 Block124:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block125:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block126:
	mov ecx,dword ptr [esp+0x178]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x170
	ret 4

 Block127:
	xor edi,edi
	jmp Block101
}
}
// CUIAccountMoreInfo::~CUIAccountMoreInfo
_SUB_EXCEPTION_HANDLER(36AF90)
__SUB_CLASS_THIS0(0036AF90, __thiscall, 71565,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36AF90
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIAccountMoreInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAccountMoreInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAccountMoreInfo::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xBF8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xBF0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push 0x13
	push 8
	lea eax,[esi+0xB58]
	push eax
	mov byte ptr [esp+0x2C],7
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push 5
	push 8
	lea ecx,[esi+0xB30]
	push ecx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB20]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAccountMoreInfo>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CUIAccountMoreInfo::OnSetFocus
__SUB_CLASS_THIS(0036AF30, __thiscall, 71569,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIAccountMoreInfo::LoadCountryName
_SUB_EXCEPTION_HANDLER(36B950)
__SUB_CLASS_THIS(0036B950, __thiscall, 71558,  CUIAccountMoreInfo, void, NakedParam<ZXString<char>>, NakedParam<ZRef<CCtrlComboBox>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36B950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],1
	call CCtrlComboBox::RemoveAllItems
	lea eax,[ebp+0x50]
	push 0x16B8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x74]
	xor edi,edi
	push edi
	push eax
	mov byte ptr [ebp-4],2
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [ebp+0x74]
	push edi
	call CCtrlComboBox::SetSelect
	mov dword ptr [ebp+0x54],edi
	push 0x64
	lea ecx,[ebp+0x10]
	int 3// TODO: 	mov dword ptr [ebp+0x10],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+0x18],0x1F
	mov dword ptr [ebp+0x1C],edi
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],4
	call esi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],5
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea edx,[ebp]
	push edx
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp-0x1C]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],7
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ebx,8
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x4C],bx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[ebp-0x4C]
	push edx
	call edi

 Block15:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x1C],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x1C]
	push ecx
	call edi

 Block19:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp],bx
	jne Block22

 Block20:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp]
	push eax
	call edi

 Block23:
	mov ecx,dword ptr [ebp+0x48]
	xor edi,edi
	cmp ecx,edi
	sete al
	test al,al
	je Block30

 Block24:
	mov byte ptr [ebp-4],4
	cmp ecx,edi
	je Block26

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block26:
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],3
	int 3// TODO: 	mov dword ptr [ebp+0x10],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],1
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp dword ptr [ebp+0x74],edi
	je Block118

 Block29:
	push edi
	lea ecx,[ebp+0x70]
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	jmp Block118

 Block30:
	cmp ecx,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[ebp+0x28]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp+0x50],edi
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xF
	cmp eax,edi
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	lea eax,[ebp+0x38]
	push eax
	call esi
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp+0x30],edi

 Block40:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block7

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	lea edx,[ebp+0x38]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block86

 Block42:
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x4C]
	push edx
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [ebp+0x4C]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block44

 Block43:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x12
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x34],edi
	test eax,eax
	je Block47

 Block45:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x2C]
	mov edi,ecx
	mov dword ptr [ebp+0x34],edi
	test eax,eax
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block3

 Block47:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x15
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	test esi,esi
	je Block53

 Block52:
	mov eax,dword ptr [esi]
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	push offset _S_NAME
	push eax
	call __wcsicmp
	add esp,8
	test eax,eax
	jne Block59

 Block55:
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block57

 Block56:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block57:
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block81

 Block58:
	mov ecx,dword ptr [ebp+0x4C]
	jmp Block80

 Block59:
	test esi,esi
	je Block61

 Block60:
	mov eax,dword ptr [esi]
	jmp Block62

 Block61:
	xor eax,eax

 Block62:
	push eax
	call __wtoi
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_NAME
	mov ebx,eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x16
	test edi,edi
	je Block7

 Block63:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x17
	jne Block65

 Block64:
	mov eax,dword ptr [eax+8]
	jmp Block66

 Block65:
	mov eax,offset _S___3

 Block66:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov esi,esp
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_NAME
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,edi
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x19
	jne Block68

 Block67:
	mov eax,dword ptr [eax+8]
	jmp Block69

 Block68:
	mov eax,offset _S___3

 Block69:
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	push 0xFFFFFFFF
	push esi
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::Assign
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x1B
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1C
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	lea eax,[ebp+0x5C]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x54]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x58],ebx
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x11
	call ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	je Block81

 Block80:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x4C],0

 Block81:
	cmp word ptr [ebp+0x38],8
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block40

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block84:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block40

 Block85:
	jmp Block3

 Block86:
	mov ebx,dword ptr [ebp+0x54]
	xor eax,eax
	mov edi,ebx
	nop

 Block87:
	test ebx,ebx
	jne Block89

 Block88:
	xor ecx,ecx
	jmp Block90

 Block89:
	mov ecx,dword ptr [ebx-4]

 Block90:
	dec ecx
	cmp eax,ecx
	jge Block100

 Block91:
	inc eax
	mov dword ptr [ebp+0x58],eax
	mov ebx,eax
	lea esi,[edi+4]
	lea esp,[esp]

 Block92:
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block94

 Block93:
	mov eax,dword ptr [eax-4]

 Block94:
	cmp ebx,eax
	jge Block99

 Block95:
	mov eax,dword ptr [esi]
	push eax
	mov ecx,edi
	call ZXString<char>::Compare
	test eax,eax
	jle Block98

 Block96:
	push edi
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::op_assign
	push esi
	mov ecx,edi
	mov byte ptr [ebp-4],0x1D
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	inc ebx
	add esi,4
	jmp Block92

 Block99:
	mov eax,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x54]
	add edi,4
	jmp Block87

 Block100:
	xor edi,edi
	mov esi,ebx

 Block101:
	test ebx,ebx
	je Block104

 Block102:
	cmp edi,dword ptr [ebx-4]
	jae Block104

 Block103:
	push 0
	push esi
	lea ecx,[ebp+0x10]
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	mov edx,dword ptr [eax+0xC]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [ebp+0x74]
	push edx
	push eax
	call CCtrlComboBox::AddItem
	inc edi
	add esi,4
	jmp Block101

 Block104:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0xF
	jne Block107

 Block105:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xC
	call edx
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],3
	int 3// TODO: 	mov dword ptr [ebp+0x10],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],1
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block118

 Block111:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block118

 Block112:
	mov eax,dword ptr [ebp+0x74]
	test eax,eax
	je Block114

 Block113:
	add eax,8
	jmp Block115

 Block114:
	xor eax,eax

 Block115:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+0x74]
	test eax,eax
	je Block118

 Block116:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block118

 Block117:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block118:
	lea esp,[ebp-0x6C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CUIAccountMoreInfo::IsKindOf
__SUB_CLASS_THIS(0036AF60, __thiscall, 71576,  CUIAccountMoreInfo, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIAccountMoreInfo::ms_RTTI_CUIAccountMoreInfo
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
// CUIAccountMoreInfo::SendLoadAccountMoreInfoRequest
_SUB_EXCEPTION_HANDLER(36B190)
__SUB_CLASS_THIS0(0036B190, __thiscall, 71565,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36B190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0xC1
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CUIAccountMoreInfo::SetAregComboBox
_SUB_EXCEPTION_HANDLER(36C0B0)
__SUB_CLASS_THIS(0036C0B0, __thiscall, 71571,  CUIAccountMoreInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36C0B0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	jne Block11

 Block2:
	mov ecx,dword ptr [esi+0xB0C]
	mov eax,dword ptr [ecx+0x68]
	push eax
	call CCtrlComboBox::GetItemParam
	sub esp,8
	mov edi,eax
	mov eax,dword ptr [esi+0xB14]
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov dword ptr [esp+0x28],2
	mov dword ptr [esp+0x30],0
	push edi
	lea eax,[esp+0x34]
	push offset _S_ETCCOUNTRYNAMEIM__1
	push eax
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	mov byte ptr [esp+0x2C],4
	call CUIAccountMoreInfo::LoadCountryName
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block11

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4

 Block6:
	mov eax,dword ptr [esi+0xB0C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0
	push 0x13
	mov ecx,edi
	mov dword ptr [esp+0x34],0
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_ETCCOUNTRYNAMEIM]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_ETCCOUNTRYNAMEIM+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_ETCCOUNTRYNAMEIM+8]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [_S_ETCCOUNTRYNAMEIM+12]
	mov dword ptr [eax+0xC],edx
	mov cx,word ptr [_S_ETCCOUNTRYNAMEIM+16]
	mov word ptr [eax+0x10],cx
	mov dl,byte ptr [_S_ETCCOUNTRYNAMEIM+18]
	push 0x13
	mov ecx,edi
	mov byte ptr [eax+0x12],dl
	call ZXString<char>::ReleaseBuffer
	or edi,0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x2C],edi
	call CUIAccountMoreInfo::LoadCountryName
	mov ecx,dword ptr [esi+0xB14]
	call CCtrlComboBox::RemoveAllItems
	lea eax,[esp+0xC]
	push 0x16B8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB14]
	push 0
	push eax
	mov dword ptr [esp+0x28],1
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esi+0xB14]
	push 0
	call CCtrlComboBox::SetSelect

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// CUIAccountMoreInfo::SendSaveAccountMoreInfoRequest
_SUB_EXCEPTION_HANDLER(36B210)
__SUB_CLASS_THIS0(0036B210, __thiscall, 71565,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36B210
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
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB0C]
	mov eax,dword ptr [ecx+0x68]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],ebx
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [edi+0xB14]
	mov esi,eax
	mov eax,dword ptr [ecx+0x68]
	push eax
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [edi+0xB1C]
	shl eax,8
	or eax,esi
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x1C]
	push eax
	call CCtrlComboBox::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	add esp,4
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [edi+0xB24]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlComboBox::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebp,eax
	mov eax,dword ptr [esp+0x20]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [edi+0xB2C]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlComboBox::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,eax
	mov eax,dword ptr [esp+0x20]
	add esp,4
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [edi+0xB34]
	imul esi,0x64
	add esi,ebp
	imul esi,0x64
	add esi,ebx
	cmp dword ptr [ecx+0x48],0
	mov ebp,1
	jne Block8

 Block7:
	mov ebp,dword ptr [esp+0x20]

 Block8:
	mov edx,dword ptr [edi+0xB3C]
	cmp dword ptr [edx+0x48],0
	je Block10

 Block9:
	or ebp,2

 Block10:
	mov eax,dword ptr [edi+0xB44]
	cmp dword ptr [eax+0x48],0
	je Block12

 Block11:
	or ebp,4

 Block12:
	mov ecx,dword ptr [edi+0xB4C]
	cmp dword ptr [ecx+0x48],0
	je Block14

 Block13:
	or ebp,8

 Block14:
	mov eax,dword ptr [edi+0xB54]
	cmp dword ptr [eax+0x48],0
	je Block16

 Block15:
	or ebp,0x10

 Block16:
	mov eax,1
	lea ecx,[edi+0xB5C]
	lea ebx,[eax+0x12]

 Block17:
	mov edx,dword ptr [ecx]
	cmp dword ptr [edx+0x48],0
	je Block19

 Block18:
	or dword ptr [esp+0x18],eax

 Block19:
	add ecx,8
	rol eax,1
	sub ebx,1
	jne Block17

 Block20:
	push 0xC1
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	jne Block22

 Block21:
	xor edx,edx
	jmp Block23

 Block22:
	mov edx,dword ptr [eax-4]

 Block23:
	mov ecx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edx
	jbe Block28

 Block24:
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax-4]
	nop

 Block26:
	add eax,eax
	cmp ecx,eax
	ja Block26

 Block27:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block28:
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [eax+ecx],3
	mov eax,dword ptr [esp+0x2C]
	inc dword ptr [esp+0x30]
	test eax,eax
	jne Block30

 Block29:
	xor edx,edx
	jmp Block31

 Block30:
	mov edx,dword ptr [eax-4]

 Block31:
	mov ecx,dword ptr [esp+0x30]
	add ecx,4
	cmp ecx,edx
	jbe Block36

 Block32:
	test eax,eax
	je Block34

 Block33:
	mov eax,dword ptr [eax-4]

 Block34:
	add eax,eax
	cmp ecx,eax
	ja Block34

 Block35:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block36:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax+edx],ecx
	mov eax,dword ptr [esp+0x2C]
	mov ebx,4
	add dword ptr [esp+0x30],ebx
	test eax,eax
	jne Block38

 Block37:
	xor edx,edx
	jmp Block39

 Block38:
	mov edx,dword ptr [eax-4]

 Block39:
	mov ecx,dword ptr [esp+0x30]
	add ecx,ebx
	cmp ecx,edx
	jbe Block44

 Block40:
	test eax,eax
	je Block42

 Block41:
	mov eax,dword ptr [eax-4]

 Block42:
	add eax,eax
	cmp ecx,eax
	ja Block42

 Block43:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block44:
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x2C]
	add dword ptr [esp+0x30],ebx
	test eax,eax
	jne Block46

 Block45:
	xor edx,edx
	jmp Block47

 Block46:
	mov edx,dword ptr [eax-4]

 Block47:
	mov ecx,dword ptr [esp+0x30]
	add ecx,ebx
	cmp ecx,edx
	jbe Block52

 Block48:
	test eax,eax
	je Block50

 Block49:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block50:
	add eax,eax
	cmp ecx,eax
	ja Block50

 Block51:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block52:
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+edx],ebp
	mov eax,dword ptr [esp+0x2C]
	add dword ptr [esp+0x30],ebx
	test eax,eax
	jne Block54

 Block53:
	xor edx,edx
	jmp Block55

 Block54:
	mov edx,dword ptr [eax-4]

 Block55:
	mov ecx,dword ptr [esp+0x30]
	add ecx,ebx
	cmp ecx,edx
	jbe Block60

 Block56:
	test eax,eax
	je Block58

 Block57:
	mov eax,dword ptr [eax-4]

 Block58:
	add eax,eax
	cmp ecx,eax
	ja Block58

 Block59:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x2C]

 Block60:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax+ecx],edx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x30],ebx
	lea edx,[esp+0x28]
	push edx
	call CClientSocket::SendPacket
	mov edi,dword ptr [edi+0xBF4]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[edi+4]
	push 0
	call edx
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CUIAccountMoreInfo::OnButtonClicked
__SUB_CLASS_THIS(0036B5A0, __thiscall, 71568,  CUIAccountMoreInfo, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	cmp esi,0x3E8
	je Block4

 Block1:
	jbe Block5

 Block2:
	cmp esi,0x3EA
	ja Block5

 Block3:
	mov eax,dword ptr [edi+0xAD0]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::UI_Close
	push esi
	mov ecx,edi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block4:
	mov dword ptr [edi+0xC00],0
	call CUIAccountMoreInfo::SendSaveAccountMoreInfoRequest

 Block5:
	push esi
	mov ecx,edi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIAccountMoreInfo::CUIAccountMoreInfo
_SUB_EXCEPTION_HANDLER(36AE10)
__SUB_CLASS_THIS0(0036AE10, __thiscall, 71563,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36AE10
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
	push 0x179
	push 3
	push 0x28
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIAccountMoreInfo>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAccountMoreInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAccountMoreInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAccountMoreInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAccountMoreInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push offset ZRef<CCtrlCheckBox>::_ctor_default
	push 5
	push 8
	lea edx,[esi+0xB30]
	push edx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push offset ZRef<CCtrlCheckBox>::_ctor_default
	push 0x13
	push 8
	lea eax,[esi+0xB58]
	push eax
	mov byte ptr [esp+0x2C],7
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xBF4],edi
	mov dword ptr [esi+0xBFC],edi
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x163
	push 0x18E
	push 0x7A
	push 0xC9
	mov ecx,esi
	mov byte ptr [esp+0x3C],0xA
	mov dword ptr [esi+0xC00],edi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIAccountMoreInfo::OnDestroy
__SUB_CLASS_THIS0(0036B550, __thiscall, 71565,  CUIAccountMoreInfo, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xC00],0
	je Block2

 Block1:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x16B6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	add esp,4
	jmp  CUIWnd::OnDestroy
}
}
