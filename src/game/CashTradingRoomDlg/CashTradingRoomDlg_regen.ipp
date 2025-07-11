#include "regen.hpp"
// CashTradingRoomDlg.ipp
#include "CashTradingRoomDlg.hpp"

// CCashTradingRoomDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(9F030)
__SUB_CLASS_THIS(0009F030, __thiscall, 138383,  CCashTradingRoomDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9F030
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
	mov esi,ecx
	xor edx,edx
	mov dword ptr [esp+0xC],edx
	mov ecx,dword ptr [esp+0x24]
	mov eax,ecx
	sub eax,0x3EA
	je Block19

 Block1:
	sub eax,1
	je Block18

 Block2:
	sub eax,1
	je Block4

 Block3:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block4:
	mov ecx,dword ptr [esi+0x1B8]
	test ecx,ecx
	je Block8

 Block5:
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block8

 Block6:
	cmp byte ptr [eax],0
	je Block8

 Block7:
	xor bl,bl
	jmp Block9

 Block8:
	mov bl,1

 Block9:
	test dl,1
	je Block12

 Block10:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test bl,bl
	jne Block20

 Block13:
	mov ecx,dword ptr [esi+0x1B8]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x1B8]
	push 0
	mov dword ptr [esp+0x20],0
	call CCtrlEdit::SetText
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x1B8]
	test esi,esi
	je Block15

 Block14:
	lea eax,[esi+4]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block18:
	mov ecx,esi
	call CCashTradingRoomDlg::PutMoney
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block19:
	mov ecx,esi
	call CCashTradingRoomDlg::Trade

 Block20:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CMiniRoomBaseDlg::EnableChat
_SUB_EXCEPTION_HANDLER(2377C0)
__SUB_CLASS_THIS(002377C0, __thiscall, 60000,  CMiniRoomBaseDlg, void, long, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2377C0
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
	cmp dword ptr [esp+0x30],0
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD0],ecx
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],ebx
	je Block5

 Block1:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block3

 Block2:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push eax
	lea ecx,[esi+0x94]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov eax,dword ptr [esi+0xD0]
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0
	add ebx,0xFFFFFFFE
	push ebx
	inc eax
	push eax
	mov eax,dword ptr [esi+0xCC]
	lea eax,[edi+eax-0xC]
	push eax
	push 0
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [eax+0x34],0xA6

 Block5:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x14
}
}
// CMiniRoomBaseDlg::MakeGameMessage
_SUB_EXCEPTION_HANDLER(238380)
// 6386F8
static uint8_t _SUB_238380_LOOKUP_TABLE_0[104] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 10, 11, 12, 
};
__SUB_CLASS_THIS(00238380, __thiscall, 60005,  CMiniRoomBaseDlg, void, ZXString<char>&, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_238380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x4C]
	xor ebx,ebx
	mov dword ptr [esp+0x40],ebx
	cmp eax,0x67
	ja Block17

 Block1:
	movzx eax,byte ptr [eax+_SUB_238380_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block9
cmp EAX, 2
je Block7
cmp EAX, 3
je Block8
cmp EAX, 4
je Block3
cmp EAX, 5
je Block4
cmp EAX, 6
je Block5
cmp EAX, 7
je Block2
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block14
cmp EAX, 13
je Block17


 Block2:
	lea ecx,[esp+0x4C]
	push 0x1C4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	jmp Block15

 Block3:
	lea ecx,[esp+8]
	push 0x1C5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x14]
	add esp,0xC
	jmp Block15

 Block4:
	lea ecx,[esp+0xC]
	push 0x1C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	jmp Block15

 Block5:
	lea ecx,[esp+0x10]
	push 0x1C7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	jmp Block15

 Block6:
	lea ecx,[esp+0x14]
	push 0x1C8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	jmp Block15

 Block7:
	lea ecx,[esp+0x18]
	push 0x1CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	jmp Block15

 Block8:
	lea ecx,[esp+0x1C]
	push 0x1CB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	jmp Block15

 Block9:
	lea ecx,[esp+0x20]
	push 0x1CD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	jmp Block15

 Block10:
	lea ecx,[esp+0x24]
	push 0x1CF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	jmp Block15

 Block11:
	lea ecx,[esp+0x28]
	push 0x1CE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x4C],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	jmp Block15

 Block12:
	lea ecx,[esp+0x2C]
	push 0x1D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov byte ptr [esp+0x44],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block15

 Block13:
	lea edx,[esp+0x30]
	push 0x1D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov byte ptr [esp+0x44],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block15

 Block14:
	lea eax,[esp+0x34]
	push 0x1D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov byte ptr [esp+0x44],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]

 Block15:
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// CCashTradingRoomDlg::OnEnter
__SUB_CLASS_THIS(0009C5E0, __thiscall, 138388,  CCashTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0
	call CWnd::InvalidateRect
	ret 8
}
}
// CMiniRoomBaseDlg::AddChatText
_SUB_EXCEPTION_HANDLER(239130)
__SUB_CLASS_THIS(00239130, __thiscall, 60003,  CMiniRoomBaseDlg, void, NakedParam<ZXString16>, FONT_TYPE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_239130
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x5C]
	push eax
	lea ecx,[esp+0x20]
	xor ebx,ebx
	push ecx
	mov dword ptr [esp+0x58],ebx
	call get_basic_font
	add esp,8
	mov dword ptr [esp+0x30],ebx
	mov eax,dword ptr [ebp+0x98]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block5

 Block1:
	mov esi,dword ptr [eax+0x38]
	mov eax,dword ptr [ebp+0x9C]
	cmp eax,ebx
	jne Block3

 Block2:
	xor ecx,ecx
	jmp Block4

 Block3:
	mov ecx,dword ptr [eax-4]

 Block4:
	mov eax,dword ptr [ebp+0xD8]
	sub eax,4
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	sub ecx,eax
	cmp esi,ecx
	mov dword ptr [esp+0x18],1
	jge Block6

 Block5:
	mov dword ptr [esp+0x18],ebx

 Block6:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block29

 Block7:
	mov edx,dword ptr [ebp+0xD4]
	mov eax,dword ptr [esp+0x58]
	lea ecx,[esp+0x38]
	push ecx
	sub edx,0xE
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x60],3
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],4
	cmp ecx,ebx
	je Block30

 Block8:
	mov byte ptr [esp+0x5C],3
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x38],8
	mov edi,eax
	mov byte ptr [esp+0x50],2
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push edi
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x60]
	call ZXString16::Left
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x54],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x34],ecx
	push 0xFFFFFFFF
	lea ecx,[ebp+0x9C]
	call ZArray<CMiniRoomBaseDlg::ChatTextInfo>::InsertBefore
	mov esi,eax
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block16

 Block15:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	sub eax,edi
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x60]
	call ZXString16::Right
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block31

 Block20:
	cmp word ptr [eax],bx
	je Block31

 Block21:
	mov dword ptr [esp+0x14],ebx
	push ebx
	lea ecx,[esp+0x18]
	cmp dword ptr [esp+0x60],ebx
	jne Block23

 Block22:
	push 4
	call ZXString16::GetBuffer
	mov edx,dword ptr [_S___30]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S___30+4]
	mov dword ptr [eax+4],ecx
	push 4
	lea ecx,[esp+0x18]
	call ZXString16::ReleaseBuffer
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x58],7
	call ZXString16::op_add_1
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x50],7
	jmp Block24

 Block23:
	push 2
	call ZXString16::GetBuffer
	mov ecx,dword ptr [_S___27]
	mov dword ptr [eax],ecx
	push 2
	lea ecx,[esp+0x18]
	call ZXString16::ReleaseBuffer
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x58],9
	call ZXString16::op_add_1
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x50],9

 Block24:
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block29:
	push eax
	call _com_issue_error

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [ebp+0x9C]
	lea esi,[ebp+0x9C]
	cmp eax,ebx
	je Block34

 Block32:
	cmp dword ptr [eax-4],0x3E8
	jbe Block34

 Block33:
	push ebx
	mov ecx,esi
	call ZArray<CMiniRoomBaseDlg::ChatTextInfo>::FindIndex
	push eax
	mov ecx,esi
	call ZArray<CMiniRoomBaseDlg::ChatTextInfo>::RemoveAt

 Block34:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	jne Block36

 Block35:
	xor esi,esi
	jmp Block37

 Block36:
	mov esi,dword ptr [esi-4]

 Block37:
	mov eax,dword ptr [ebp+0xD8]
	mov ecx,dword ptr [ebp+0x98]
	sub eax,4
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	sub esi,eax
	inc esi
	push esi
	call CCtrlScrollBar::SetScrollRange
	cmp dword ptr [esp+0x18],ebx
	je Block40

 Block38:
	mov ecx,dword ptr [ebp+0x98]
	cmp dword ptr [ecx+0x3C],1
	jle Block40

 Block39:
	mov eax,dword ptr [ecx+0x3C]
	dec eax
	push eax
	call CCtrlScrollBar::SetCurPos

 Block40:
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x50],1
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// CCashTradingRoomDlg::ClearToolTip
__SUB_CLASS_THIS0(0009FAC0, __thiscall, 138385,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x1F4
	jmp  CUIToolTip::ClearToolTip
}
}
// CCashTradingRoomDlg::GetTextMoney
_SUB_EXCEPTION_HANDLER(A0190)
__SUB_CLASS_THIS(000A0190, __thiscall, 138391,  CCashTradingRoomDlg, void, long, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A0190
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
	mov ebp,ecx
	mov esi,dword ptr [esp+0x28]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],0

 Block2:
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],0

 Block4:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block8

 Block5:
	lea eax,[esp+0x24]
	push 0x1A10
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	push ecx
	push 0
	push offset _S_DS__1
	push esi
	mov dword ptr [esp+0x2C],0
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push 0
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	jmp Block13

 Block8:
	push edi
	push esi
	push eax
	mov ecx,ebp
	call CCashTradingRoomDlg::CompressTextMoney
	mov edx,dword ptr [esp+0x24]
	mov ebx,eax
	push ebx
	push edi
	push esi
	push edx
	mov ecx,ebp
	call CCashTradingRoomDlg::MakeTextMoney
	push ebx
	push edi
	push esi
	mov ecx,ebp
	call CCashTradingRoomDlg::DelTextLeadingZeroes
	lea eax,[esp+0x28]
	push 0x1A10
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor ecx,ecx

 Block11:
	push ecx
	push eax
	mov ecx,esi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CMiniRoomBaseDlg::OnCorrectSSN2
__SUB_CLASS_THIS(0009FAB0, __thiscall, 59991,  CMiniRoomBaseDlg, void, long) {
__asm {

 Block0:
	ret 4
}
}
// CMiniRoomBaseDlg::SendInviteResult
_SUB_EXCEPTION_HANDLER(2376D0)
__SUB(002376D0, __cdecl, 59982,  void, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2376D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x3C]
	push 0x90
	test esi,esi
	jne Block2

 Block1:
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x34],esi
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	jmp Block3

 Block2:
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],1
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x38]
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]

 Block3:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret
}
}
// CCashTradingRoomDlg::PutItem
_SUB_EXCEPTION_HANDLER(9D210)
__SUB_CLASS_THIS(0009D210, __thiscall, 138396,  CCashTradingRoomDlg, int32_t, NakedParam<ZRef<GW_ItemSlotBase>>, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9D210
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
	cmp dword ptr [esi+0x1D8],0
	mov dword ptr [esp+0x28],0
	jne Block14

 Block1:
	cmp dword ptr [esi+0xE4],1
	jle Block14

 Block2:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block7

 Block3:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov ebp,eax
	call CCashTradingRoomDlg::GetPeerGender
	push ebp
	mov edi,eax
	call get_gender_from_id
	add esp,4
	cmp edi,2
	je Block8

 Block4:
	cmp eax,2
	je Block8

 Block5:
	cmp eax,edi
	je Block8

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push 0x1A2B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block7:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block18

 Block8:
	mov ecx,dword ptr [esp+0x34]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,esi
	mov edx,eax
	call CCashTradingRoomDlg::GetPeerJob
	push eax
	push edx
	call is_matched_itemid_job
	add esp,8
	test eax,eax
	jne Block10

 Block9:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push 0x159C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block18

 Block10:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]
	push edx
	push eax
	mov ecx,esi
	call CCashTradingRoomDlg::GetItemIndexFromPoint
	mov edi,eax
	test edi,edi
	jle Block7

 Block11:
	mov edx,dword ptr [esi+0x1E0]
	mov ecx,edi
	shl ecx,4
	cmp dword ptr [edx+ecx-4],0
	jge Block7

 Block12:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block7

 Block13:
	push 0x90
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0xF
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],1
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	lea ecx,[esp+0x14]
	call COutPacket::Encode2
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode2
	push edi
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	push 1
	mov ecx,esi
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x28],0
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 0x18

 Block14:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block18

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	mov edx,dword ptr [esp+0x34]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block18

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block18:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 0x18
}
}
// CCashTradingRoomDlg::OnPacket
__SUB_CLASS_THIS(0009D6B0, __thiscall, 138388,  CCashTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0xF
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	call CCashTradingRoomDlg::OnTrade
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CCashTradingRoomDlg::OnPutMoney
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CCashTradingRoomDlg::OnPutItem

 Block6:
	ret 8
}
}
// CMiniRoomBaseDlg::CMiniRoomBaseDlg
_SUB_EXCEPTION_HANDLER(238770)
__SUB_CLASS_THIS0(00238770, __thiscall, 59972,  CMiniRoomBaseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_238770
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CMiniRoomBaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMiniRoomBaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMiniRoomBaseDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x18],2
	call CChatHelper::_ctor_default
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push offset ZRef<CAvatar>::_ctor_default
	push 8
	push 8
	lea eax,[esi+0xF0]
	push eax
	mov byte ptr [esp+0x2C],3
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 8
	push 4
	lea ecx,[esi+0x130]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_MiniGameRecord>::~ZRef<GW_MiniGameRecord>
	push offset ZRef<GW_MiniGameRecord>::_ctor_default
	push 8
	push 8
	lea edx,[esi+0x164]
	push edx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
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
// CCashTradingRoomDlg::IsKindOf
__SUB_CLASS_THIS(0009FAF0, __thiscall, 138404,  CCashTradingRoomDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCashTradingRoomDlg::ms_RTTI_CCashTradingRoomDlg
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
// CCashTradingRoomDlg::CCashTradingRoomDlg
_SUB_EXCEPTION_HANDLER(9F900)
__SUB_CLASS_THIS0(0009F900, __thiscall, 138375,  CCashTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9F900
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CMiniRoomBaseDlg::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CCashTradingRoomDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCashTradingRoomDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCashTradingRoomDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1CC],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D4],edi
	push offset ZArray<CCashTradingRoomDlg::ITEM>::~ZArray<CCashTradingRoomDlg::ITEM>
	push offset ZArray<CCashTradingRoomDlg::ITEM>::_ctor_default
	push 2
	push 4
	lea ebx,[esi+0x1E0]
	push ebx
	mov byte ptr [esp+0x38],0xA
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1DC],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1F0],edi
	lea ecx,[esi+0x1F8]
	mov byte ptr [esp+0x24],0xC
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xC40],edi
	mov dword ptr [esi+0xC44],edi
	mov dword ptr [esi+0xC48],edi
	mov dword ptr [esi+0xC4C],edi
	mov dword ptr [esi+0xC50],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push edi
	mov byte ptr [esp+0x2C],0xE
	call CWvsContext::UI_Open
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGCA__5
	mov ecx,esi
	call CDialog::CreateDlg_2
	lea ebp,[edi+2]
	mov edi,edi

 Block1:
	lea eax,[esp+0x17]
	push eax
	push 5
	mov ecx,ebx
	mov dword ptr [ebx+8],edi
	call ZArray<CCashTradingRoomDlg::ITEM>::_Alloc
	add ebx,4
	sub ebp,1
	jne Block1

 Block2:
	lea ecx,[esp+0x17]
	push ecx
	push 2
	lea ecx,[esi+0x1F0]
	call ZArray<ZXString<char>>::_Alloc
	mov eax,esi
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
// CCashTradingRoomDlg::OnPutItem
_SUB_EXCEPTION_HANDLER(9CDD0)
__SUB_CLASS_THIS(0009CDD0, __thiscall, 138389,  CCashTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9CDD0
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
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,ebp
	movsx esi,al
	call CInPacket::Decode1
	movsx edi,al
	lea eax,[esp+0x14]
	push ebp
	push eax
	call GW_ItemSlotBase::Decode
	add esp,8
	mov ecx,dword ptr [ebx+esi*4+0x1E0]
	shl edi,4
	lea ebp,[edi+ecx-0x10]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	mov dword ptr [esp+0x24],0
	call eax
	mov dword ptr [ebp+0xC],eax
	mov edx,dword ptr [ebx+esi*4+0x1E0]
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[edi+edx-0x10]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push eax
	lea eax,[esp+0x38]
	push eax
	call CItemInfo::GetItemIcon
	mov ecx,dword ptr [ebx+esi*4+0x1E0]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+ecx-8]
	lea ecx,[edi+ecx-8]
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block5:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block11

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
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
// CMiniRoomBaseDlg::Draw
__SUB_CLASS_THIS(002390D0, __thiscall, 59978,  CMiniRoomBaseDlg, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	push edi
	push eax
	mov esi,ecx
	call CWnd::Draw
	mov ecx,esi
	call CMiniRoomBaseDlg::DrawTextA
	xor edi,edi
	cmp dword ptr [esi+0xE0],edi
	jle Block5

 Block1:
	lea ebx,[esi+0xF4]

 Block2:
	cmp dword ptr [ebx],0
	je Block4

 Block3:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push edi
	push ecx
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x54]
	push edi
	mov ecx,esi
	call eax

 Block4:
	inc edi
	add ebx,8
	cmp edi,dword ptr [esi+0xE0]
	jl Block2

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashTradingRoomDlg::OnCreate
_SUB_EXCEPTION_HANDLER(9E8C0)
__SUB_CLASS_THIS(0009E8C0, __thiscall, 138379,  CCashTradingRoomDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9E8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea ebx,[esi+0xC40]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	lea ecx,[esp+0x4C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esp+0x98],ebp
	mov dword ptr [esp+0x78],ebp
	mov dword ptr [esp+0x70],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x60]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebp
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebp

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x60],edi
	cmp edi,ebp
	je Block5

 Block4:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x80],0x100
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x90],1
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x90],0
	cmp eax,ebp
	je Block36

 Block11:
	add eax,8
	cmp eax,ebp
	je Block36

 Block12:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x1B8]
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block16

 Block15:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x1B8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x4C]
	push edx
	push 0x10
	push 0xA5
	push 0x9E
	push 0x19A
	push 0x3EE
	push esi
	call eax
	mov eax,dword ptr [esi+0x1B8]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	push ebp
	push ebp
	push ebp
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGCA__4
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block18

 Block17:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	push ebp
	push ebp
	push ebp
	push 0x3ED
	push offset _S_UIUIWINDOW2IMGCA__3
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block20

 Block19:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block20:
	push 0
	push 0
	push 0
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGCA__2
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0x90],2
	lea edi,[esi+0x1A4]
	test eax,eax
	je Block22

 Block21:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	cmp dword ptr [edi+4],0
	je Block24

 Block23:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block24:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0x90],0
	je Block26

 Block25:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block26:
	push 0
	push 0
	push 0
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGCA__1
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0x90],3
	lea edi,[esi+0x1AC]
	test eax,eax
	je Block28

 Block27:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	cmp dword ptr [edi+4],0
	je Block30

 Block29:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block30:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0x90],0
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGCA
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block34

 Block33:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block34:
	push 0
	push 0x80
	push 0xD8
	push 0x12
	push 0x199
	mov ecx,esi
	call CMiniRoomBaseDlg::EnableChat
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x90],4
	test eax,eax
	je Block37

 Block35:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block38

 Block36:
	xor edi,edi
	jmp Block14

 Block37:
	xor eax,eax

 Block38:
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block88

 Block39:
	add eax,8
	je Block88

 Block40:
	lea edi,[eax-8]
	test edi,edi
	je Block42

 Block41:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block44

 Block43:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block44:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x87
	push 0xC
	push 0x276
	push 8
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [eax+0x34],0xDF
	lea eax,[esp+0x14]
	push 0x16
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1BC]
	add esp,8
	cmp edi,eax
	je Block49

 Block45:
	mov dword ptr [esi+0x1BC],eax
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block47:
	test edi,edi
	je Block49

 Block48:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block49:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block51:
	lea ecx,[esp+0x14]
	push 0x38
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1C0]
	add esp,8
	cmp edi,eax
	je Block56

 Block52:
	mov dword ptr [esi+0x1C0],eax
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	test edi,edi
	je Block56

 Block55:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block56:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	lea eax,[esp+0x14]
	push 0x3E
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1C4]
	add esp,8
	cmp edi,eax
	je Block63

 Block59:
	mov dword ptr [esi+0x1C4],eax
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block61:
	test edi,edi
	je Block63

 Block62:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block63:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block65:
	lea ecx,[esp+0x14]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1C8]
	add esp,8
	cmp edi,eax
	je Block70

 Block66:
	mov dword ptr [esi+0x1C8],eax
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block68:
	test edi,edi
	je Block70

 Block69:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block70:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	lea eax,[esp+0x14]
	push 0x22
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1CC]
	add esp,8
	cmp edi,eax
	je Block77

 Block73:
	mov dword ptr [esi+0x1CC],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	test edi,edi
	je Block77

 Block76:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block77:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	lea ecx,[esp+0x14]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1D0]
	add esp,8
	cmp edi,eax
	je Block84

 Block80:
	mov dword ptr [esi+0x1D0],eax
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block82:
	test edi,edi
	je Block84

 Block83:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block84:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
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
	jge Block89

 Block87:
	push eax
	call _com_issue_error

 Block88:
	xor edi,edi
	jmp Block42

 Block89:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x94],5
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x50E
	mov bl,6
	push eax
	mov byte ptr [esp+0xAC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA4],7
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xA8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x1D4]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block96

 Block94:
	cmp eax,0x80004002
	je Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov edi,8
	mov byte ptr [esp+0x90],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x3C],di
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x3C]
	push eax
	call ebx

 Block100:
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x1C],di
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block104:
	mov byte ptr [esp+0x90],0
	cmp word ptr [esp+0x2C],di
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block108:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0xBD]
	push ecx
	add eax,0xB5
	push eax
	mov byte ptr [esp+0x98],9
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x1F4],eax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block113

 Block109:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block112

 Block110:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block112

 Block111:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block112:
	mov dword ptr [esp+0x18],0

 Block113:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 4
}
}
// CCashTradingRoomDlg::~CCashTradingRoomDlg
_SUB_EXCEPTION_HANDLER(9FB40)
__SUB_CLASS_THIS0(0009FB40, __thiscall, 138377,  CCashTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9FB40
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
	int 3// TODO: 	mov dword ptr [esi],offset CCashTradingRoomDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCashTradingRoomDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCashTradingRoomDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC40]
	mov dword ptr [esp+0x1C],0xD
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x1F8]
	mov byte ptr [esp+0x1C],0xC
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x1F0]
	mov byte ptr [esp+0x1C],0xB
	call ZArray<ZXString<char>>::RemoveAll
	push offset ZArray<CCashTradingRoomDlg::ITEM>::~ZArray<CCashTradingRoomDlg::ITEM>
	push 2
	push 4
	lea eax,[esi+0x1E0]
	push eax
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x1D4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1D0]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1CC]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x1C8]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x1C4]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x1C0]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x1BC]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea edi,[esi+0x1B4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0x1AC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0x1A4]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CMiniRoomBaseDlg::~CMiniRoomBaseDlg
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
// CMiniRoomBaseDlg::RegisterEmployer
__SUB_CLASS_THIS(0009FA90, __thiscall, 59990,  CMiniRoomBaseDlg, void, unsigned long) {
__asm {

 Block0:
	ret 4
}
}
// CCashTradingRoomDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(9D9A0)
__SUB_CLASS_THIS(0009D9A0, __thiscall, 138381,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9D9A0
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x54]
	mov ebx,dword ptr [esp+0x50]
	push edi
	lea ebp,[esi-4]
	push ebx
	mov ecx,ebp
	call CCashTradingRoomDlg::GetRectIndexFromPoint
	dec eax
	cmp eax,3
	ja Block11

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block6
cmp EAX, 3
je Block9


 Block2:
	mov eax,dword ptr [esi+0x1EC]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+ebx+0x14]
	push ecx
	lea ecx,[esi+0x1F4]
	call CUIToolTip::SetToolTip_String
	mov eax,1
	jmp Block19

 Block3:
	mov edx,dword ptr [esi+0x1EC]
	mov eax,dword ptr [edx+4]
	push eax

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	lea ecx,[eax+ebx+0x14]
	push ecx
	lea ecx,[esi+0x1F4]
	call CUIToolTip::SetToolTip_String

 Block5:
	mov eax,1
	jmp Block19

 Block6:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	xor ebp,ebp
	cmp eax,ebp
	je Block8

 Block7:
	lea ebp,[eax+4]

 Block8:
	push ebp
	jmp Block4

 Block9:
	mov eax,dword ptr [esi+0xD8]
	mov edx,1
	sub edx,eax
	push edx
	lea eax,[esp+0x58]
	push eax
	mov ecx,ebp
	call CMiniRoomBaseDlg::GetUserID
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [esp+0x4C],ebp
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+ebx+0x14]
	push ecx
	lea ecx,[esi+0x1F4]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebp
	je Block5

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	lea eax,[ebp+1]
	jmp Block19

 Block11:
	push edi
	push ebx
	mov ecx,ebp
	call CCashTradingRoomDlg::GetItemIndexFromPoint
	xor ebp,ebp
	cmp eax,ebp
	je Block18

 Block12:
	jle Block14

 Block13:
	mov edx,dword ptr [esi+0x1DC]
	shl eax,4
	lea eax,[edx+eax-0x10]
	jmp Block15

 Block14:
	inc eax
	shl eax,4
	mov ecx,eax
	mov eax,dword ptr [esi+0x1E0]
	sub eax,ecx

 Block15:
	cmp eax,ebp
	je Block18

 Block16:
	cmp dword ptr [eax+0xC],ebp
	jl Block18

 Block17:
	mov edx,dword ptr [_D_DB_DATE_19000101__220]
	mov ecx,dword ptr [_D_DB_DATE_19000101__220+4]
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x3C],ebp
	mov eax,dword ptr [eax+4]
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x24]
	push edx
	mov ecx,1
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x60],ecx
	mov dword ptr [esp+0x3C],ecx
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x1F4]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam
	mov eax,1
	jmp Block19

 Block18:
	lea ecx,[esi+0x1F4]
	call CUIToolTip::ClearToolTip
	xor eax,eax

 Block19:
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
// CMiniRoomBaseDlg::DrawCharacterName
__SUB_CLASS_THIS(0009FB20, __thiscall, 59988,  CMiniRoomBaseDlg, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret 8
}
}
// CCashTradingRoomDlg::OnPutMoney
__SUB_CLASS_THIS(0009C9D0, __thiscall, 138389,  CCashTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movsx ebx,al
	call CInPacket::Decode4
	push 0
	mov ecx,esi
	mov dword ptr [esi+ebx*4+0x1E8],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashTradingRoomDlg::Trade
_SUB_EXCEPTION_HANDLER(9E180)
__SUB_CLASS_THIS0(0009E180, __thiscall, 138377,  CCashTradingRoomDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9E180
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
	mov ebx,ecx
	call Util::FTGetNow
	xor esi,esi
	push esi
	push offset _S_
	push esi
	push esi
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x60],edx
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x2C],esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0x78],esi
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x2C],esi
	jmp Block2

 Block2:
	mov eax,dword ptr [ebx+0x1E4]
	test eax,eax
	je Block34

 Block3:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,dword ptr [eax-4]
	jae Block34

 Block4:
	add eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x58],esi
	test esi,esi
	je Block6

 Block5:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x78],1
	test esi,esi
	je Block29

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block29

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x18]
	mov ecx,esi
	mov dword ptr [esp+0x30],1
	xor edi,edi
	call edx
	cmp eax,3
	jne Block10

 Block9:
	mov edi,esi

 Block10:
	push offset _D_DB_DATE_20790101__36
	lea ebp,[esi+0x20]
	push ebp
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block12

 Block11:
	test edi,edi
	je Block29

 Block12:
	mov dword ptr [esp+0x20],0
	lea eax,[esp+0x4C]
	push eax
	push ebp
	mov byte ptr [esp+0x80],2
	call CompareFileTime
	test eax,eax
	jle Block17

 Block13:
	test edi,edi
	je Block16

 Block14:
	lea ecx,[esp+0x4C]
	push ecx
	lea ebp,[edi+0x59]
	push ebp
	call CompareFileTime
	test eax,eax
	jle Block17

 Block15:
	mov ecx,edi
	call GW_ItemSlotPet::IsDead
	test eax,eax
	jne Block17

 Block16:
	push 0
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x48]
	push edx
	lea ecx,[esp+0x5C]
	mov eax,ebp
	push ecx
	push eax
	call Util::FTSubtract
	add esp,0x18
	lea edx,[esp+0x40]
	push 0x147A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x8C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]
	add esp,0x14
	jmp Block18

 Block17:
	lea eax,[esp+0x44]
	push 0x1478
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x7C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]

 Block18:
	mov byte ptr [esp+0x78],2
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [ebx+0x1C8]
	push 0x64
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x80],5
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	push edx
	push eax
	lea ecx,[esp+0x34]
	push offset _S_SS__3
	push ecx
	call ZXString<char>::Format
	mov edi,dword ptr [esp+0x3C]
	add esp,0x1C
	test edi,edi
	je Block24

 Block23:
	mov eax,dword ptr [edi-4]
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	push eax
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],2
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov byte ptr [esp+0x78],1
	test edi,edi
	je Block29

 Block28:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov byte ptr [esp+0x78],0
	test esi,esi
	je Block33

 Block30:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block31:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block32:
	mov dword ptr [esp+0x58],0

 Block33:
	inc dword ptr [esp+0x28]
	add dword ptr [esp+0x2C],0x10
	mov esi,dword ptr [esp+0x30]
	jmp Block2

 Block34:
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	je Block44

 Block35:
	cmp byte ptr [edi],0
	je Block44

 Block36:
	push 2
	push offset _S___4
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	lea ecx,[esp+0x44]
	push 0x1479
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x78],6
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax-4]
	jmp Block39

 Block38:
	xor ecx,ecx

 Block39:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x78],0
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x54],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_1
	add esp,0xC
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block88

 Block42:
	cmp eax,6
	jne Block88

 Block43:
	mov edi,dword ptr [esp+0x1C]

 Block44:
	push 0
	push 0
	lea eax,[ebx+0x88]
	push eax
	neg esi
	sbb esi,esi
	push 0
	push ecx
	and esi,0x130A
	mov ecx,esp
	add esi,0x1AC
	mov dword ptr [esp+0x5C],esp
	push esi
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block90

 Block45:
	cmp eax,6
	jne Block90

 Block46:
	mov eax,dword ptr [ebx+0x1A8]
	lea ecx,[eax+4]
	mov dword ptr [ebx+0x1D8],1
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [ebx+0x1B0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x78],7
	xor edi,edi

 Block47:
	mov ecx,dword ptr [ebx+0x1E0]
	cmp dword ptr [ecx+edi+4],0
	lea eax,[ecx+edi]
	je Block49

 Block48:
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov esi,eax
	push esi
	call CItemInfo::GetItemCRC
	push 0xFFFFFFFF
	lea ecx,[esp+0x30]
	mov ebp,eax
	call ZArray<ZPair<long, unsigned long>>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [eax+4],ebp

 Block49:
	add edi,0x10
	cmp edi,0x50
	jl Block47

 Block50:
	push 0x90
	lea ecx,[esp+0x60]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x78],8
	test eax,eax
	jne Block52

 Block51:
	xor edx,edx
	jmp Block53

 Block52:
	mov edx,dword ptr [eax-4]

 Block53:
	mov ecx,dword ptr [esp+0x64]
	inc ecx
	cmp ecx,edx
	jbe Block58

 Block54:
	test eax,eax
	je Block56

 Block55:
	mov eax,dword ptr [eax-4]

 Block56:
	add eax,eax
	cmp ecx,eax
	ja Block56

 Block57:
	lea edx,[esp+0x1B]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x6C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x60]

 Block58:
	mov ecx,dword ptr [esp+0x64]
	mov ebp,dword ptr [esp+0x2C]
	mov esi,1
	mov byte ptr [eax+ecx],0x11
	add dword ptr [esp+0x64],esi
	test ebp,ebp
	jne Block60

 Block59:
	xor ebx,ebx
	jmp Block61

 Block60:
	mov ebx,dword ptr [ebp-4]

 Block61:
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	jne Block63

 Block62:
	xor edx,edx
	jmp Block64

 Block63:
	mov edx,dword ptr [eax-4]

 Block64:
	mov ecx,dword ptr [esp+0x64]
	inc ecx
	cmp ecx,edx
	jbe Block69

 Block65:
	test eax,eax
	je Block67

 Block66:
	mov eax,dword ptr [eax-4]

 Block67:
	add eax,eax
	cmp ecx,eax
	ja Block67

 Block68:
	lea edx,[esp+0x1B]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x6C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x60]

 Block69:
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [eax+ecx],bl
	add dword ptr [esp+0x64],esi
	xor esi,esi
	test ebx,ebx
	jle Block87

 Block70:
	mov eax,dword ptr [esp+0x60]
	mov edi,dword ptr [ebp+esi*8]
	test eax,eax
	jne Block72

 Block71:
	xor edx,edx
	jmp Block73

 Block72:
	mov edx,dword ptr [eax-4]

 Block73:
	mov ecx,dword ptr [esp+0x64]
	add ecx,4
	cmp ecx,edx
	jbe Block78

 Block74:
	test eax,eax
	je Block76

 Block75:
	mov eax,dword ptr [eax-4]

 Block76:
	add eax,eax
	cmp ecx,eax
	ja Block76

 Block77:
	lea edx,[esp+0x1B]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x6C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x60]

 Block78:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+ecx],edi
	add dword ptr [esp+0x64],4
	mov eax,dword ptr [esp+0x60]
	mov edi,dword ptr [ebp+esi*8+4]
	test eax,eax
	jne Block80

 Block79:
	xor edx,edx
	jmp Block81

 Block80:
	mov edx,dword ptr [eax-4]

 Block81:
	mov ecx,dword ptr [esp+0x64]
	add ecx,4
	cmp ecx,edx
	jbe Block86

 Block82:
	test eax,eax
	je Block84

 Block83:
	mov eax,dword ptr [eax-4]

 Block84:
	add eax,eax
	cmp ecx,eax
	ja Block84

 Block85:
	lea edx,[esp+0x1B]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x6C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x60]

 Block86:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+ecx],edi
	add dword ptr [esp+0x64],4
	inc esi
	cmp esi,ebx
	jl Block70

 Block87:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x5C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x78],7
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x78],0
	call ZArray<ZPair<long, unsigned long>>::RemoveAll

 Block88:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test eax,eax
	je Block93

 Block89:
	add eax,0xFFFFFFF4
	push eax
	jmp Block92

 Block90:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test edi,edi
	je Block93

 Block91:
	add edi,0xFFFFFFF4
	push edi

 Block92:
	call ZXString<char>::_Release
	add esp,4

 Block93:
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
// CMiniRoomBaseDlg::CheckAndSendChat
_SUB_EXCEPTION_HANDLER(2382A0)
__SUB_CLASS_THIS(002382A0, __thiscall, 60001,  CMiniRoomBaseDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2382A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x28]
	push eax
	add ecx,0xA0
	mov dword ptr [esp+0x24],0
	call CChatHelper::TryChat
	test eax,eax
	je Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 4
}
}
// CCashTradingRoomDlg::MakeTextMoney
_SUB_EXCEPTION_HANDLER(9DD10)
__SUB_CLASS_THIS(0009DD10, __thiscall, 138394,  CCashTradingRoomDlg, void, long, ZXString<char>&, ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9DD10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x64]
	xor edi,edi
	xor ebp,ebp
	cmp esi,edi
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x24],edi
	jle Block70

 Block1:
	lea ebx,[edi+1]
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0x64]

 Block4:
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x18],edi
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*4]
	add ecx,ecx
	sub esi,ecx
	add ebp,ebx
	mov byte ptr [esp+0x5C],bl
	mov dword ptr [esp+0x64],eax
	cmp dword ptr [esp+0x1C],edi
	jne Block7

 Block5:
	cmp ebp,4
	jg Block7

 Block6:
	lea edx,[esp+0x2C]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x68],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	jmp Block16

 Block7:
	cmp esi,edi
	je Block18

 Block8:
	mov eax,ebp
	and eax,0x80000003
	mov dword ptr [esp+0x20],ebx
	jns Block10

 Block9:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block10:
	cmp eax,3
	ja Block18

 Block11:
	cmp EAX, 0
je Block15
cmp EAX, 1
je Block12
cmp EAX, 2
je Block13
cmp EAX, 3
je Block14


 Block12:
	lea ecx,[esp+0x30]
	push 0xED6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x68],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	jmp Block16

 Block13:
	lea eax,[esp+0x34]
	push 0xED7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x68],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	jmp Block16

 Block14:
	lea edx,[esp+0x38]
	push 0xED8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x68],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	jmp Block16

 Block15:
	lea ecx,[esp+0x3C]
	push 0xED9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x68],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]

 Block16:
	add esp,0xC
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp dword ptr [esp+0x70],edi
	jne Block21

 Block19:
	lea eax,[esp+0x40]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x68],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp ebp,4
	jle Block23

 Block22:
	add dword ptr [esp+0x1C],ebx
	sub ebp,4

 Block23:
	cmp ebp,ebx
	jl Block57

 Block24:
	mov eax,dword ptr [esp+0x1C]
	sub eax,ebx
	je Block35

 Block25:
	sub eax,ebx
	jne Block44

 Block26:
	cmp dword ptr [esp+0x20],ebx
	jne Block44

 Block27:
	cmp dword ptr [esp+0x24],edi
	jne Block44

 Block28:
	cmp esi,edi
	je Block44

 Block29:
	lea edx,[esp+0x44]
	push 0xED4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],9
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax-4]
	jmp Block32

 Block31:
	xor ecx,ecx

 Block32:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x24],ebx
	jmp Block44

 Block35:
	cmp dword ptr [esp+0x20],ebx
	jne Block44

 Block36:
	cmp dword ptr [esp+0x28],edi
	jne Block44

 Block37:
	cmp esi,edi
	je Block44

 Block38:
	lea eax,[esp+0x48]
	push 0xED5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],8
	cmp eax,edi
	je Block40

 Block39:
	mov ecx,dword ptr [eax-4]
	jmp Block41

 Block40:
	xor ecx,ecx

 Block41:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov dword ptr [esp+0x28],ebx

 Block44:
	cmp ebp,ebx
	jne Block57

 Block45:
	cmp dword ptr [esp+0x70],edi
	jne Block57

 Block46:
	mov eax,dword ptr [esp+0x1C]
	sub eax,ebx
	je Block51

 Block47:
	sub eax,ebx
	jne Block57

 Block48:
	lea ecx,[esp+0x4C]
	push 0xED4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],0xB
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x4C]
	jmp Block55

 Block50:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x4C]
	jmp Block55

 Block51:
	lea edx,[esp+0x50]
	push 0xED5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],0xA
	cmp eax,edi
	je Block53

 Block52:
	mov ecx,dword ptr [eax-4]
	jmp Block54

 Block53:
	xor ecx,ecx

 Block54:
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x50]

 Block55:
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov esi,dword ptr [esp+0x68]
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block59

 Block58:
	mov ecx,dword ptr [eax-4]
	jmp Block60

 Block59:
	xor ecx,ecx

 Block60:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	cmp dword ptr [esp+0x70],edi
	jne Block65

 Block61:
	mov esi,dword ptr [esp+0x6C]
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block63

 Block62:
	mov ecx,dword ptr [eax-4]
	jmp Block64

 Block63:
	xor ecx,ecx

 Block64:
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZXString<char>::op_assign

 Block65:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],0
	cmp eax,edi
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,edi
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	cmp dword ptr [esp+0x64],edi
	jg Block3

 Block70:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x10
}
}
// CCashTradingRoomDlg::DrawItems
_SUB_EXCEPTION_HANDLER(9F1B0)
__SUB_CLASS_THIS(0009F1B0, __thiscall, 138398,  CCashTradingRoomDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9F1B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x58],ecx
	xor esi,esi
	mov dword ptr [ebp-4],esi
	call Util::FTGetNow
	mov dword ptr [ebp+0x44],eax
	mov dword ptr [ebp+0x48],edx
	mov dword ptr [ebp+0x60],esi
	mov dword ptr [ebp+0x68],0xB6

 Block1:
	xor edi,edi
	mov dword ptr [ebp+0x5C],edi
	mov eax,dword ptr [ebp+0x58]
	add eax,0x1E0
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x4C],edi
	mov dword ptr [ebp+0x64],0xF4
	mov dword ptr [ebp+0x54],eax

 Block2:
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[eax+ecx+8]
	mov eax,dword ptr [eax]
	cmp edi,eax
	je Block8

 Block3:
	mov esi,edi
	mov dword ptr [ebp+0x5C],eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	test esi,esi
	je Block7

 Block6:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block7:
	mov edi,dword ptr [ebp+0x5C]

 Block8:
	mov eax,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	add eax,dword ptr [ebp+0x60]
	mov ebx,dword ptr [eax+4]
	mov dword ptr [ebp-0x40],ebx
	test ebx,ebx
	je Block10

 Block9:
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	test edi,edi
	sete al
	test al,al
	sete al
	mov byte ptr [ebp-4],2
	test al,al
	je Block74

 Block11:
	test ebx,ebx
	je Block74

 Block12:
	sub esp,8
	mov eax,esp
	lea edx,[ebx+4]
	mov dword ptr [ebp+0x6C],esp
	push edx
	mov dword ptr [eax+4],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	push 2
	push 0
	push eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	push 0
	push 0
	push 0
	mov ecx,ebx
	call edx
	mov edi,dword ptr [ebp+0x64]
	push eax
	mov eax,dword ptr [ebp+0x68]
	push eax
	add edi,0xFFFFFFD8
	lea esi,[ebx+0xC]
	push edi
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x6C],esp
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block19

 Block15:
	cmp eax,3
	je Block19

 Block16:
	cmp eax,4
	je Block19

 Block17:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block19

 Block18:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block24

 Block19:
	mov edx,dword ptr [ebp+0x58]
	mov eax,dword ptr [edx+0x1D4]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ecx+edx+0xC]
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x7C]
	push eax
	add ecx,0xFFFFFFF4
	push ecx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x6C],esp
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	call draw_number_by_image
	add esp,0x18

 Block24:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp+0x50]
	push eax
	call CItemInfo::GetItemName
	mov edi,dword ptr [ebp+0x58]
	mov eax,dword ptr [edi+0x1C8]
	push 0x8C
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	lea eax,[ebp+0x50]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block27:
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block28:
	mov edx,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],5
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x50]
	mov esi,esp
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [edi+0x1C8]
	lea ecx,[ebp+0x20]
	push ecx
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	je Block86

 Block29:
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x64]
	add eax,0xFFFFFFE3
	push eax
	push edx
	mov byte ptr [ebp-4],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x20],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x1C],si
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x18]
	mov ecx,ebx
	xor esi,esi
	call eax
	cmp eax,3
	jne Block39

 Block38:
	mov esi,ebx

 Block39:
	push offset _D_DB_DATE_20790101__36
	lea edi,[ebx+0x20]
	push edi
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block41

 Block40:
	test esi,esi
	je Block71

 Block41:
	lea ecx,[ebp+0x44]
	push ecx
	push edi
	call CompareFileTime
	test eax,eax
	jle Block60

 Block42:
	test esi,esi
	je Block45

 Block43:
	lea edx,[ebp+0x44]
	push edx
	lea edi,[esi+0x59]
	push edi
	call CompareFileTime
	test eax,eax
	jle Block60

 Block44:
	mov ecx,esi
	call GW_ItemSlotPet::IsDead
	test eax,eax
	jne Block60

 Block45:
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x44]
	mov eax,edi
	push edx
	push eax
	call Util::FTSubtract
	add esp,0x18
	mov dword ptr [ebp+0x6C],0
	lea eax,[ebp+0x3C]
	push 0x147A
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x30]
	mov edx,dword ptr [ebp+0x40]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	push edx
	push ecx
	push eax
	lea edx,[ebp+0x6C]
	push edx
	mov byte ptr [ebp-4],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0x14
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block48:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block49:
	mov edi,dword ptr [ebp+0x6C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+0x1D0]
	mov esi,esp
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block86

 Block50:
	mov edx,dword ptr [ebp+0x68]
	mov eax,dword ptr [ebp+0x64]
	add edx,0xFFFFFFF3
	push edx
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x10],si
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [ebp-4],3
	test edi,edi
	je Block71

 Block59:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block71

 Block60:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push edx
	call esi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block61:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],7
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block85

 Block62:
	mov edx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x3C]
	push eax
	mov eax,dword ptr [edx+0x1CC]
	lea ecx,[ebp-0x2C]
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x38],esp
	push 0x1478
	push eax
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	je Block86

 Block63:
	mov edx,dword ptr [ebp+0x68]
	mov eax,dword ptr [ebp+0x64]
	add edx,0xFFFFFFF3
	push edx
	push eax
	mov byte ptr [ebp-4],8
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],si
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x3C],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov edi,dword ptr [ebp+0x5C]

 Block74:
	sub dword ptr [ebp+0x64],0xC1
	mov byte ptr [ebp-4],1
	test ebx,ebx
	je Block78

 Block75:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block76:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block77:
	mov dword ptr [ebp-0x40],0

 Block78:
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [ebp+0x54]
	inc ecx
	add eax,4
	cmp ecx,2
	mov dword ptr [ebp+0x4C],ecx
	mov dword ptr [ebp+0x54],eax
	jl Block2

 Block79:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block81

 Block80:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block81:
	mov eax,dword ptr [ebp+0x68]
	add dword ptr [ebp+0x60],0x10
	add eax,0x28
	cmp eax,0x17E
	mov dword ptr [ebp+0x68],eax
	jl Block1

 Block82:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	lea esp,[ebp-0x54]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4

 Block85:
	push eax
	call _com_issue_error

 Block86:
	push 0x80004003
	call _com_issue_error
}
}
// CMiniRoomBaseDlg::OnPacketBase
// 639EE8
static uint8_t _SUB_239E10_LOOKUP_TABLE_0[16] = {
0, 1, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 3, 141, 73, 0, 
};
__SUB(00239E10, __cdecl, 59981,  void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	movsx edi,al
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	jne Block6

 Block1:
	lea eax,[edi-2]
	cmp eax,0xC
	ja Block16

 Block2:
	movzx eax,byte ptr [eax+_SUB_239E10_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block10
cmp EAX, 2
je Block3
cmp EAX, 3
je Block5
cmp EAX, 4
je Block16


 Block3:
	push esi
	call CMiniRoomBaseDlg::OnEnterResultStatic
	add esp,4
	pop edi
	pop esi
	ret

 Block4:
	push esi
	call CMiniRoomBaseDlg::OnInviteStatic
	add esp,4
	pop edi
	pop esi
	ret

 Block5:
	push esi
	call CMiniRoomBaseDlg::OnCheckSSN2Static
	add esp,4
	pop edi
	pop esi
	ret

 Block6:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CMiniRoomBaseDlg::ms_RTTI_CMiniRoomBaseDlg
	call eax
	test eax,eax
	je Block16

 Block7:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	je Block16

 Block8:
	lea eax,[edi-3]
	cmp eax,7
	ja Block15

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block11
cmp EAX, 2
je Block15
cmp EAX, 3
je Block12
cmp EAX, 4
je Block15
cmp EAX, 5
je Block15
cmp EAX, 6
je Block13
cmp EAX, 7
je Block14


 Block10:
	push esi
	call CMiniRoomBaseDlg::OnInviteResultStatic
	add esp,4
	pop edi
	pop esi
	ret

 Block11:
	push esi
	call CMiniRoomBaseDlg::OnEnterBase
	pop edi
	pop esi
	ret

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x50]
	push esi
	call eax
	pop edi
	pop esi
	ret

 Block13:
	push esi
	call CMiniRoomBaseDlg::OnAvatar
	pop edi
	pop esi
	ret

 Block14:
	push esi
	call CMiniRoomBaseDlg::OnLeaveBase
	pop edi
	pop esi
	ret

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	push esi
	push edi
	call eax

 Block16:
	pop edi
	pop esi
	ret
}
}
// CMiniRoomBaseDlg::OnCheckSSN2Static
_SUB_EXCEPTION_HANDLER(237F70)
__SUB(00237F70, __cdecl, 59981,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_237F70
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
	mov esi,dword ptr [esp+0x4C]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jne Block13

 Block1:
	lea eax,[esp+0x10]
	push eax
	call ask_SPW
	add esp,4
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x44],0
	test eax,eax
	je Block11

 Block2:
	mov ecx,dword ptr [eax-4]
	cmp ecx,6
	jl Block11

 Block3:
	cmp ecx,0x10
	jg Block11

 Block4:
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0xE
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x48],1
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	test edi,edi
	je Block8

 Block5:
	cmp edi,4
	jne Block9

 Block6:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode1
	push ebp
	lea ecx,[esp+0x20]
	movzx edi,al
	call COutPacket::Encode4
	push edi
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	test edi,edi
	je Block9

 Block7:
	mov ecx,esi
	call CInPacket::Decode2
	movzx edi,ax
	push 8
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	push edi
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	push 8
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	call COutPacket::EncodeBuffer
	jmp Block9

 Block8:
	mov ecx,esi
	call CInPacket::Decode4
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4

 Block9:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x44],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block20

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x38
	ret

 Block11:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block20

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x38
	ret

 Block13:
	test edi,edi
	je Block18

 Block14:
	cmp edi,4
	jne Block20

 Block15:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode1
	push 0x90
	lea ecx,[esp+0x30]
	movzx edi,al
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x48],3
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	test edi,edi
	je Block17

 Block16:
	mov ecx,esi
	call CInPacket::Decode2
	movzx edi,ax
	push 8
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	push edi
	lea ecx,[esp+0x30]
	call COutPacket::Encode2
	push 8
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x34]
	call COutPacket::EncodeBuffer

 Block17:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	jmp Block19

 Block18:
	mov ecx,esi
	call CInPacket::Decode4
	push 0x90
	lea ecx,[esp+0x20]
	mov esi,eax
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x48],2
	call COutPacket::Encode1
	push 6
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push 0
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::Init_1
	push 2
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]

 Block19:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block20:
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
// CMiniRoomBaseDlg::MiniRoomFactory
_SUB_EXCEPTION_HANDLER(237280)
__SUB(00237280, __cdecl, 60012,  CMiniRoomBaseDlg*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_237280
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	dec eax
	cmp eax,5
	ja Block14

 Block1:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block12
cmp EAX, 2
je Block2
cmp EAX, 3
je Block6
cmp EAX, 4
je Block8
cmp EAX, 5
je Block4


 Block2:
	push 0xC40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],0
	test eax,eax
	je Block14

 Block3:
	mov ecx,eax
	call CTradingRoomDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block4:
	push 0xC54
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],1
	test eax,eax
	je Block14

 Block5:
	mov ecx,eax
	call CCashTradingRoomDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block6:
	push 0xCE8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],2
	test eax,eax
	je Block14

 Block7:
	mov ecx,eax
	call CPersonalShopDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block8:
	push 0xD18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],3
	test eax,eax
	je Block14

 Block9:
	mov ecx,eax
	call CEntrustedShopDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block10:
	push 0x1074
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],4
	test eax,eax
	je Block14

 Block11:
	mov ecx,eax
	call COmokDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block12:
	push 0xD88
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xC],5
	test eax,eax
	je Block14

 Block13:
	mov ecx,eax
	call CMemoryGameDlg::_ctor_default
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret
}
}
// CCashTradingRoomDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(0009C640, __thiscall, 138399,  CCashTradingRoomDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov dword ptr [esp+0x24],0
	mov esi,0x96
	lea esp,[esp]

 Block1:
	lea edi,[esi+0x20]
	push edi
	push 0xEC
	push esi
	push 0xCB
	lea eax,[esp+0x20]
	push eax
	call SetRect
	push ebp
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	call PtInRect
	test eax,eax
	jne Block5

 Block2:
	push edi
	push 0x2B
	push esi
	push 0xA
	lea edx,[esp+0x20]
	push edx
	call SetRect
	push ebp
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block6

 Block3:
	inc dword ptr [esp+0x24]
	add esi,0x28
	cmp esi,0x15E
	jl Block1

 Block4:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	mov eax,dword ptr [esp+0x24]
	pop edi
	pop esi
	pop ebp
	inc eax
	pop ebx
	add esp,0x10
	ret 8

 Block6:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	sub eax,dword ptr [esp+0x1C]
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CMiniRoomBaseDlg::OnInviteStatic
_SUB_EXCEPTION_HANDLER(237A40)
__SUB(00237A40, __cdecl, 59981,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_237A40
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
	mov esi,dword ptr [esp+0x30]
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebp,al
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CInPacket::Decode4
	lea ecx,[edi+0x2038]
	mov ebx,eax
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block4

 Block1:
	mov eax,dword ptr [edi+0x209C]
	xor esi,esi
	cmp eax,esi
	jne Block4

 Block2:
	cmp dword ptr [edi+0x20B0],esi
	jne Block4

 Block3:
	cmp eax,esi
	je Block5

 Block4:
	push 4
	push ebx
	call CMiniRoomBaseDlg::SendInviteResult
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	test eax,eax
	jmp Block14

 Block5:
	mov dword ptr [esp+0x18],esi
	mov byte ptr [esp+0x28],1
	cmp ebp,3
	je Block7

 Block6:
	cmp ebp,6
	jne Block12

 Block7:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [ecx+0x2C],esi
	je Block13

 Block8:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsInBlackList
	cmp eax,esi
	jne Block13

 Block9:
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x28],2
	cmp eax,esi
	je Block11

 Block10:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov esi,eax

 Block11:
	xor eax,eax
	cmp ebp,6
	sete al
	lea edx,[esp+0x14]
	mov byte ptr [esp+0x28],1
	push eax
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIFadeYesNo::CreateTradeInvite
	push esi
	mov ecx,edi
	call CWvsContext::SetNewFadeWnd

 Block12:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jmp Block14

 Block13:
	push 4
	push ebx
	call CMiniRoomBaseDlg::SendInviteResult
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	cmp eax,esi

 Block14:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CCashTradingRoomDlg::GetPeerGender
__SUB_CLASS_THIS0(0009CC00, __thiscall, 138397,  CCashTradingRoomDlg, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,1
	sub eax,dword ptr [ecx+0xDC]
	push ebx
	push eax
	lea edx,[esp+8]
	push edx
	call CMiniRoomBaseDlg::GetAvatar
	mov eax,dword ptr [eax+4]
	movzx ebx,byte ptr [eax+0x10]
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block5

 Block1:
	push esi
	push edi
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
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	add esp,8
	ret

 Block5:
	mov eax,ebx
	pop ebx
	add esp,8
	ret
}
}
// CMiniRoomBaseDlg::GetUserID
__SUB_CLASS_THIS(0009D680, __thiscall, 59996,  CMiniRoomBaseDlg, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	lea ecx,[ecx+eax*4+0x130]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CCashTradingRoomDlg::PutMoney
_SUB_EXCEPTION_HANDLER(9D480)
__SUB_CLASS_THIS0(0009D480, __thiscall, 138377,  CCashTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9D480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	xor esi,esi
	cmp dword ptr [ecx+0x1D8],esi
	jne Block16

 Block1:
	mov ecx,dword ptr [ecx+0xE4]
	cmp ecx,1
	jle Block16

 Block2:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],esi
	jne Block16

 Block3:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block16

 Block4:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block16

 Block5:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x3C],esi
	cmp eax,esi
	je Block13

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,esi
	je Block13

 Block7:
	add eax,8
	cmp eax,esi
	je Block13

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AB
	push ecx
	mov dword ptr [esp+0x50],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edx,dword ptr [ebp+0xBD]
	push edx
	add ebp,0xB5
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push 0xA
	push 0
	push eax
	push 1
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block14

 Block11:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test esi,esi
	je Block16

 Block12:
	jmp Block15

 Block13:
	mov dword ptr [esp+0x18],esi
	jmp Block10

 Block14:
	push 0x90
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 0x10
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],2
	call COutPacket::Encode1
	mov esi,dword ptr [esi+0xF4]
	push esi
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [edi+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x28]
	mov dword ptr [edi+0x20BC],eax
	mov byte ptr [esp+0x3C],1
	call ZArray<unsigned char>::RemoveAll
	mov dword ptr [esp+0x3C],0xFFFFFFFF

 Block15:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret
}
}
// CMiniRoomBaseDlg::GetAvatar
__SUB_CLASS_THIS(0009CB50, __thiscall, 59993,  CMiniRoomBaseDlg, ZRef<CAvatar>*, ZRef<CAvatar>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [ecx+eax*8+0xF4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CCashTradingRoomDlg::OnLeave
_SUB_EXCEPTION_HANDLER(9D6F0)
__SUB_CLASS_THIS(0009D6F0, __thiscall, 138388,  CCashTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9D6F0
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
	mov esi,ecx
	mov ecx,dword ptr [esp+0x34]
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movsx eax,al
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x38],eax
	xor ebx,ebx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0xBD]
	push ecx
	add eax,0xB5
	push eax
	mov dword ptr [esp+0x30],ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block4

 Block1:
	lea ebp,[eax-0x10]
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block4:
	mov ebp,dword ptr [esp+0x34]
	cmp ebp,7
	jne Block8

 Block5:
	mov ecx,dword ptr [esi+0x1F4]
	cmp edi,ecx
	jle Block8

 Block6:
	mov eax,edi
	sub eax,ecx
	mov ecx,dword ptr [esi+0x1EC]
	sub ecx,dword ptr [esi+0x1E8]
	cmp eax,ecx
	jge Block8

 Block7:
	mov ebx,eax

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 8
	mov ecx,esi
	call eax
	lea eax,[ebp-2]
	cmp eax,0xB
	ja Block25

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block25
cmp EAX, 2
je Block25
cmp EAX, 3
je Block25
cmp EAX, 4
je Block25
cmp EAX, 5
je Block11
cmp EAX, 6
je Block17
cmp EAX, 7
je Block18
cmp EAX, 8
je Block19
cmp EAX, 9
je Block20
cmp EAX, 10
je Block21
cmp EAX, 11
je Block22


 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A5
	push ecx
	jmp Block24

 Block11:
	test ebx,ebx
	jle Block16

 Block12:
	mov dword ptr [esp+0x34],0
	lea edx,[esp+0x14]
	push 0x1A7
	push edx
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x48]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x48]
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block25

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block25

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A6
	jmp Block23

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A8
	push ecx
	jmp Block24

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A9
	push edx
	jmp Block24

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x14B8
	jmp Block23

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x14B7
	push ecx
	jmp Block24

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1AA
	push edx
	jmp Block24

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A67

 Block23:
	push eax

 Block24:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block25:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CMiniRoomBaseDlg::GetActionPosition
__SUB_CLASS_THIS(00238860, __thiscall, 59986,  CMiniRoomBaseDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	ret 0xC
}
}
// CMiniRoomBaseDlg::OnPacket
__SUB_CLASS_THIS(0009FA70, __thiscall, 59987,  CMiniRoomBaseDlg, void, long, CInPacket&) {
__asm {

 Block0:
	ret 8
}
}
// CCashTradingRoomDlg::Draw
_SUB_EXCEPTION_HANDLER(A0300)
__SUB_CLASS_THIS(000A0300, __thiscall, 138384,  CCashTradingRoomDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A0300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CMiniRoomBaseDlg::Draw
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x3C],ebx
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block2

 Block1:
	lea edx,[eax+4]
	jmp Block3

 Block2:
	xor edx,edx

 Block3:
	mov dword ptr [ebp-0x40],ebx
	cmp edx,ebx
	je Block7

 Block4:
	mov eax,edx
	lea edi,[eax+1]

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,edi
	mov edi,eax
	push edi
	push edx
	push ebx
	push edi
	lea ecx,[ebp-0x40]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[ebp-0x40]
	call ZXString<char>::ReleaseBuffer

 Block7:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],2
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
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
	mov edx,dword ptr [ebp-0x40]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,3
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x40]
	mov edi,esp
	lea eax,[ebp-0x38]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1BC]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp eax,0x55
	mov dword ptr [ebp-0x28],eax
	jl Block13

 Block12:
	mov dword ptr [ebp-0x28],0x55

 Block13:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],2
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edi,dword ptr [esi+0x1BC]
	test edi,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esi+0x1BC]
	push 0x55
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	lea eax,[ebp-0x40]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x24]
	push ecx
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],5
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edx,dword ptr [ebp-0x40]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,6
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x40]
	mov edi,esp
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0x1BC]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [ebp-0x28]
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x13A
	push 0x7A
	sub edx,eax
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x24],di
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ecx,dword ptr [esi+0x1E8]
	push 1
	push ecx
	lea edx,[ebp-0x3C]
	push edx
	call format_integer
	add esp,0xC
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov edx,dword ptr [ebp-0x3C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],8
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x3C]
	mov edi,esp
	lea eax,[ebp-0x24]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1C0]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov byte ptr [ebp-4],8
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],2
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov edi,dword ptr [esi+0x1C0]
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push ecx
	call edi
	lea edx,[ebp-0x38]
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
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0xA
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov edx,dword ptr [ebp-0x3C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0xB
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x3C]
	mov edi,esp
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[ebp-0x24]
	push ecx
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x44]
	mov eax,0x184
	sub eax,dword ptr [ebp-0x28]
	push 0x15C
	mov byte ptr [ebp-4],0xC
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xA
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],2
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov dword ptr [ebp-0x4C],0
	mov eax,dword ptr [esi+0x1F0]
	mov ecx,dword ptr [esi+0x1E8]
	lea edx,[ebp-0x4C]
	push edx
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call CCashTradingRoomDlg::GetTextMoney
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov ebx,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xE
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea ecx,[ebp-0x24]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1C4]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov byte ptr [ebp-4],0xE
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0xD
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push ecx
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x10
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0x11
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0x1C4]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,0x184
	sub ecx,dword ptr [ebp-0x28]
	push 0x16C
	push ecx
	mov ecx,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x12
	mov byte ptr [ebp-4],0x11
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x10
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xD
	jne Block80

 Block78:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [esi+0xE4]
	cmp eax,1
	jle Block158

 Block82:
	mov eax,dword ptr [esi+0xDC]
	mov ecx,1
	sub ecx,eax
	push ecx
	lea edx,[ebp-0x48]
	push edx
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x13
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov edx,dword ptr [ebp-0x48]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x14
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x48]
	mov edi,esp
	lea eax,[ebp-0x24]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1BC]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp eax,0x55
	mov dword ptr [ebp-0x28],eax
	jl Block88

 Block87:
	mov dword ptr [ebp-0x28],0x55

 Block88:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x13
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov edi,dword ptr [esi+0x1BC]
	test edi,edi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block96

 Block95:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block96:
	mov eax,dword ptr [esi+0x1BC]
	push 0x55
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block98:
	lea eax,[ebp-0x48]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x38]
	push ecx
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x16
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov edx,dword ptr [ebp-0x48]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x17
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x48]
	mov edi,esp
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [esi+0x1BC]
	lea ecx,[ebp-0x24]
	push ecx
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x28]
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x55
	sub ecx,eax
	push 0x7A
	push ecx
	mov ecx,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x18
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x16
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block106:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x13
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [esi+0x1EC]
	push 1
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	call format_integer
	add esp,0xC
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ecx,dword ptr [ebp-0x3C]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x19
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x3C]
	mov edi,esp
	lea edx,[ebp-0x24]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1C0]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0x13
	jne Block117

 Block115:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov edi,dword ptr [esi+0x1C0]
	test edi,edi
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block122

 Block121:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block122:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x1B
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	mov ecx,dword ptr [ebp-0x3C]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x1C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x3C]
	mov edi,esp
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0x1C0]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x44]
	mov edx,0xC3
	sub edx,dword ptr [ebp-0x28]
	push 0x15C
	mov byte ptr [ebp-4],0x1D
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x1B
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x13
	jne Block133

 Block131:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov dword ptr [ebp-0x14],0
	mov edx,dword ptr [esi+0x1F0]
	mov eax,dword ptr [esi+0x1EC]
	lea ecx,[ebp-0x14]
	push ecx
	add edx,4
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call CCashTradingRoomDlg::GetTextMoney
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	mov ebx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0x1F
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea eax,[ebp-0x24]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x1C4]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	mov byte ptr [ebp-4],0x1F
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0x1E
	jne Block141

 Block139:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x21
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0x22
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x1C4]
	mov edi,esp
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x44]
	mov eax,0xC3
	sub eax,dword ptr [ebp-0x28]
	push 0x16C
	mov byte ptr [ebp-4],0x23
	push eax
	mov byte ptr [ebp-4],0x22
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x21
	jne Block149

 Block147:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x1E
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov byte ptr [ebp-4],0x13
	test ebx,ebx
	je Block156

 Block155:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block156:
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block158:
	mov edi,dword ptr [ebp-0x44]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x50],esp
	push edi
	call eax
	mov ecx,esi
	call CCashTradingRoomDlg::DrawItems
	cmp dword ptr [esi+0x1D8],0
	je Block161

 Block159:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x8C]
	push 0x80FFFFFF
	push 0xC3
	push 0xBA
	push 0x96
	push 0xCB
	push edi
	call edx
	test eax,eax
	jge Block161

 Block160:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block161:
	cmp dword ptr [esi+0x1DC],0
	je Block164

 Block162:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x8C]
	push 0x80FFFFFF
	push 0xC3
	push 0xBA
	push 0x96
	push 0xA
	push edi
	call ecx
	test eax,eax
	jge Block164

 Block163:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block164:
	cmp dword ptr [esi+0xE4],1
	jle Block167

 Block165:
	cmp dword ptr [esi+0x1D8],0
	jne Block167

 Block166:
	push 1
	jmp Block168

 Block167:
	push 0

 Block168:
	mov esi,dword ptr [esi+0x1A8]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	call eax
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block170:
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block172

 Block171:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block172:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block174:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x60]
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
	ret 4
}
}
// CCashTradingRoomDlg::GetActionPosition
__SUB_CLASS_THIS(0009C5A0, __thiscall, 138387,  CCashTradingRoomDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0xDC]
	mov eax,dword ptr [esp+0xC]
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov dword ptr [ecx],5
	mov dword ptr [eax],0x139
	mov dword ptr [eax+4],0x71
	ret 0xC

 Block2:
	mov dword ptr [eax],0x57
	mov dword ptr [eax+4],0x71
	ret 0xC
}
}
// CMiniRoomBaseDlg::OnSelfAvatarChanged
__SUB_CLASS_THIS(00237240, __thiscall, 59980,  CMiniRoomBaseDlg, void, const AvatarLook&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xDC]
	test eax,eax
	jl Block4

 Block1:
	jne Block3

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x5C]
	call edx
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0xDC]
	mov ecx,dword ptr [esi+ecx*8+0xF4]
	push eax
	call CAvatar::SetAvatarLook

 Block4:
	pop esi
	ret 4
}
}
// CMiniRoomBaseDlg::GetRTTI
__SUB_CLASS_THIS0(00227E10, __thiscall, 60013,  CMiniRoomBaseDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CMiniRoomBaseDlg::ms_RTTI_CMiniRoomBaseDlg
	ret
}
}
// CMiniRoomBaseDlg::OnChildNotify
__SUB_CLASS_THIS(00237190, __thiscall, 59979,  CMiniRoomBaseDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3E8
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block4

 Block2:
	cmp edx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block4:
	cmp edx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block6:
	ret 0xC
}
}
// CMiniRoomBaseDlg::SendCashInviteResult
_SUB_EXCEPTION_HANDLER(237BC0)
__SUB(00237BC0, __cdecl, 59982,  void, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_237BC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0xC]
	push eax
	call ask_SPW
	add esp,4
	mov eax,dword ptr [esp+0xC]
	xor ebx,ebx
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebx
	je Block6

 Block1:
	mov eax,dword ptr [eax-4]
	cmp eax,6
	jl Block6

 Block2:
	cmp eax,0x10
	jg Block6

 Block3:
	mov esi,dword ptr [esp+0x48]
	push 0x90
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	cmp esi,ebx
	jne Block5

 Block4:
	push 0xE
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],2
	call COutPacket::Encode1
	push 4
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	push 6
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x44]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	jmp Block7

 Block5:
	push 3
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],3
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x44]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push esi
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	jmp Block7

 Block6:
	push 0x90
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],1
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x44]
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	push 3
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]

 Block7:
	mov byte ptr [esp+0x3C],bl
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret
}
}
// CMiniRoomBaseDlg::OnEnterResultStatic
_SUB_EXCEPTION_HANDLER(239500)
__SUB(00239500, __cdecl, 59981,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_239500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	je Block2

 Block1:
	push 0x21000003
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x10]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],eax
	call _CxxThrowException

 Block2:
	mov edi,dword ptr [esp+0x80]
	mov ecx,edi
	call CInPacket::Decode1
	movsx esi,al
	cmp esi,ebx
	jne Block35

 Block3:
	mov ecx,edi
	call CInPacket::Decode1
	xor esi,esi
	movzx eax,al
	mov dword ptr [esp+0x10],esi
	dec eax
	mov dword ptr [esp+0x78],ebx
	cmp eax,0x18
	ja Block33

 Block4:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block6
cmp EAX, 2
je Block7
cmp EAX, 3
je Block8
cmp EAX, 4
je Block9
cmp EAX, 5
je Block10
cmp EAX, 6
je Block11
cmp EAX, 7
je Block33
cmp EAX, 8
je Block14
cmp EAX, 9
je Block13
cmp EAX, 10
je Block24
cmp EAX, 11
je Block25
cmp EAX, 12
je Block12
cmp EAX, 13
je Block17
cmp EAX, 14
je Block18
cmp EAX, 15
je Block19
cmp EAX, 16
je Block22
cmp EAX, 17
je Block23
cmp EAX, 18
je Block21
cmp EAX, 19
je Block15
cmp EAX, 20
je Block16
cmp EAX, 21
je Block20
cmp EAX, 22
je Block33
cmp EAX, 23
je Block26
cmp EAX, 24
je Block27


 Block5:
	lea edx,[esp+0x14]
	push 0x199
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block28

 Block6:
	lea eax,[esp+0x18]
	push 0x19A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block28

 Block7:
	lea ecx,[esp+0x1C]
	push 0x19B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block28

 Block8:
	lea edx,[esp+0x20]
	push 0x19C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block28

 Block9:
	lea eax,[esp+0x24]
	push 0x19D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block28

 Block10:
	lea ecx,[esp+0x28]
	push 0x19E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block28

 Block11:
	lea edx,[esp+0x2C]
	push 0x19F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block28

 Block12:
	lea eax,[esp+0x30]
	push 0x1A0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block28

 Block13:
	lea ecx,[esp+0x34]
	push 0xDB5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block28

 Block14:
	lea edx,[esp+0x38]
	push 0x1A1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	jmp Block28

 Block15:
	lea eax,[esp+0x3C]
	push 0x19F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block28

 Block16:
	lea ecx,[esp+0x40]
	push 0x1C0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block28

 Block17:
	lea edx,[esp+0x44]
	push 0x1C1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block28

 Block18:
	lea eax,[esp+0x48]
	push 0x1C2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block28

 Block19:
	lea ecx,[esp+0x4C]
	push 0x1C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block28

 Block20:
	lea edx,[esp+0x50]
	push 0x1A68
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x10
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block28

 Block21:
	lea eax,[esp+0x54]
	push 0x1E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x11
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	jmp Block28

 Block22:
	lea ecx,[esp+0x58]
	push 0x1BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	jmp Block28

 Block23:
	lea edx,[esp+0x5C]
	push 0xDAE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x13
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	jmp Block28

 Block24:
	lea eax,[esp+0x60]
	push 0x1C1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x14
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	jmp Block28

 Block25:
	lea ecx,[esp+0x64]
	push 0x14A2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x15
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x64]
	jmp Block28

 Block26:
	lea edx,[esp+0x68]
	push 0x14DB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x68]
	jmp Block28

 Block27:
	lea eax,[esp+0x6C]
	push 0x116
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x7C],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]

 Block28:
	mov byte ptr [esp+0x78],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	je Block33

 Block31:
	cmp byte ptr [esi],bl
	je Block33

 Block32:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x80],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block33:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp esi,ebx
	je Block38

 Block34:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x6C
	ret

 Block35:
	push esi
	call CMiniRoomBaseDlg::MiniRoomFactory
	add esp,4
	cmp eax,ebx
	jne Block37

 Block36:
	push 0x21000003
	lea ecx,[esp+0x70]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x6C]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x6C]
	push ecx
	mov dword ptr [esp+0x70],eax
	call _CxxThrowException

 Block37:
	push edi
	mov ecx,eax
	mov dword ptr [eax+0xEC],esi
	call CMiniRoomBaseDlg::OnEnterResultBase

 Block38:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx

 Block39:
	add esp,0x6C
	ret
}
}
// CCashTradingRoomDlg::DelTextLeadingZeroes
_SUB_EXCEPTION_HANDLER(9FF60)
__SUB_CLASS_THIS(0009FF60, __thiscall, 138395,  CCashTradingRoomDlg, void, ZXString<char>&, ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9FF60
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block2

 Block1:
	mov ebp,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor ebp,ebp

 Block3:
	cmp dword ptr [esp+0x34],ebx
	jne Block6

 Block4:
	cmp ebp,4
	jle Block6

 Block5:
	lea eax,[esp+0x18]
	push 0xEDC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	push 0xFFFFFFFF
	lea ecx,[ebp-4]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x20],1
	call ZXString<char>::Substring
	mov esi,dword ptr [esi]
	push esi
	mov ecx,eax
	mov ebx,3
	call ZXString<char>::Compare
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block7

 Block6:
	mov byte ptr [esp+0x30],0

 Block7:
	test bl,2
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x24],esi
	test bl,1
	je Block13

 Block11:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	cmp byte ptr [esp+0x30],0
	je Block16

 Block14:
	add ebp,0xFFFFFFFC
	push ebp
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call ZXString<char>::Left
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x28],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],esi
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block30

 Block17:
	mov ebp,dword ptr [eax-4]
	cmp ebp,4
	jle Block19

 Block18:
	lea ecx,[esp+0x2C]
	push 0xEDC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	push 0xFFFFFFFF
	lea edx,[ebp-4]
	push edx
	lea eax,[esp+0x3C]
	or ebx,4
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x30],2
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::Substring
	mov esi,dword ptr [esi]
	push esi
	mov ecx,eax
	or ebx,8
	call ZXString<char>::Compare
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block20

 Block19:
	mov byte ptr [esp+0x30],0

 Block20:
	test bl,8
	je Block23

 Block21:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x24],esi
	test bl,4
	je Block26

 Block24:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	cmp byte ptr [esp+0x30],0
	je Block29

 Block27:
	add ebp,0xFFFFFFFC
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call ZXString<char>::Left
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x28],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],esi
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC

 Block30:
	xor ebp,ebp
	jmp Block19
}
}
// CCashTradingRoomDlg::GetPeerJob
__SUB_CLASS_THIS0(0009C610, __thiscall, 138397,  CCashTradingRoomDlg, long) {
__asm {

 Block0:
	mov eax,0xA9
	sub eax,dword ptr [ecx+0xDC]
	movsx eax,word ptr [ecx+eax*2]
	ret
}
}
// CCashTradingRoomDlg::OnKey
_SUB_EXCEPTION_HANDLER(9DBF0)
__SUB_CLASS_THIS(0009DBF0, __thiscall, 138380,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9DBF0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edx,edx
	test dword ptr [esp+0x24],0x80000000
	mov dword ptr [esp+0xC],edx
	jne Block16

 Block1:
	cmp dword ptr [esp+0x20],0xD
	jne Block16

 Block2:
	mov ecx,dword ptr [esi+0x1B4]
	test ecx,ecx
	je Block6

 Block3:
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block6

 Block4:
	cmp byte ptr [eax],0
	je Block6

 Block5:
	xor bl,bl
	jmp Block7

 Block6:
	mov bl,1

 Block7:
	test dl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test bl,bl
	jne Block16

 Block11:
	mov ecx,dword ptr [esi+0x1B4]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x1B4]
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x1B4]
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCashTradingRoomDlg::OnTrade
_SUB_EXCEPTION_HANDLER(9CFD0)
__SUB_CLASS_THIS(0009CFD0, __thiscall, 138389,  CCashTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9CFD0
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x38],ebp

 Block1:
	mov eax,dword ptr [ebx+0x1E4]
	add eax,ebp
	cmp dword ptr [eax+4],0
	je Block3

 Block2:
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov esi,eax
	push esi
	call CItemInfo::GetItemCRC
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov edi,eax
	call ZArray<ZPair<long, unsigned long>>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [eax+4],edi

 Block3:
	add ebp,0x10
	cmp ebp,0x50
	jl Block1

 Block4:
	push 0x90
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x38],1
	test eax,eax
	jne Block6

 Block5:
	xor edx,edx
	jmp Block7

 Block6:
	mov edx,dword ptr [eax-4]

 Block7:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block12

 Block8:
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block10:
	add eax,eax
	cmp ecx,eax
	ja Block10

 Block11:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block12:
	mov edx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x18]
	mov edi,1
	mov byte ptr [eax+edx],0x14
	add dword ptr [esp+0x28],edi
	test ebp,ebp
	jne Block14

 Block13:
	xor ebx,ebx
	jmp Block15

 Block14:
	mov ebx,dword ptr [ebp-4]

 Block15:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block17

 Block16:
	xor edx,edx
	jmp Block18

 Block17:
	mov edx,dword ptr [eax-4]

 Block18:
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	cmp ecx,edx
	jbe Block23

 Block19:
	test eax,eax
	je Block21

 Block20:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block21:
	add eax,eax
	cmp ecx,eax
	ja Block21

 Block22:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block23:
	mov edx,dword ptr [esp+0x28]
	mov byte ptr [eax+edx],bl
	add dword ptr [esp+0x28],edi
	xor esi,esi
	test ebx,ebx
	jle Block42

 Block24:
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [ebp+esi*8]
	test eax,eax
	jne Block26

 Block25:
	xor edx,edx
	jmp Block27

 Block26:
	mov edx,dword ptr [eax-4]

 Block27:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	cmp ecx,edx
	jbe Block32

 Block28:
	test eax,eax
	je Block30

 Block29:
	mov eax,dword ptr [eax-4]

 Block30:
	add eax,eax
	cmp ecx,eax
	ja Block30

 Block31:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block32:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x28],4
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [ebp+esi*8+4]
	test eax,eax
	jne Block34

 Block33:
	xor edx,edx
	jmp Block35

 Block34:
	mov edx,dword ptr [eax-4]

 Block35:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	cmp ecx,edx
	jbe Block40

 Block36:
	test eax,eax
	je Block38

 Block37:
	mov eax,dword ptr [eax-4]

 Block38:
	add eax,eax
	cmp ecx,eax
	ja Block38

 Block39:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x30]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x24]

 Block40:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x28],4
	inc esi
	cmp esi,ebx
	jl Block24

 Block41:
	mov edi,1

 Block42:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0x1C]
	push 0
	mov dword ptr [ecx+0x1DC],edi
	call CWnd::InvalidateRect
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x38],0
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<ZPair<long, unsigned long>>::RemoveAll
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CCashTradingRoomDlg::GetRectIndexFromPoint
__SUB_CLASS_THIS(0009C840, __thiscall, 138399,  CCashTradingRoomDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,dword ptr [esp+0x24]
	push 0x17A
	push 0x184
	push 0x16C
	push 0xDD
	lea eax,[esp+0x1C]
	push eax
	mov ebx,ecx
	call SetRect
	push edi
	push esi
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [ebx+0x1F0]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block2:
	cmp byte ptr [eax],0
	je Block4

 Block3:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	push 0x17A
	push 0xC3
	push 0x16C
	push 0x1C
	lea edx,[esp+0x1C]
	push edx
	call SetRect
	push edi
	push esi
	lea eax,[esp+0x14]
	push eax
	call PtInRect
	test eax,eax
	je Block8

 Block5:
	mov eax,dword ptr [ebx+0x1F0]
	add eax,4
	mov eax,dword ptr [eax]
	test eax,eax
	je Block8

 Block6:
	cmp byte ptr [eax],0
	je Block8

 Block7:
	pop edi
	pop esi
	mov eax,2
	pop ebx
	add esp,0x10
	ret 8

 Block8:
	push 0x88
	push 0x165
	push 0x78
	push 0x110
	lea ecx,[esp+0x1C]
	push ecx
	call SetRect
	push edi
	push esi
	lea edx,[esp+0x14]
	push edx
	call PtInRect
	test eax,eax
	je Block10

 Block9:
	pop edi
	pop esi
	mov eax,3
	pop ebx
	add esp,0x10
	ret 8

 Block10:
	push 0x88
	push 0x80
	push 0x78
	push 0x2A
	lea eax,[esp+0x1C]
	push eax
	call SetRect
	push edi
	push esi
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	test eax,eax
	je Block13

 Block11:
	cmp dword ptr [ebx+0xE4],1
	jle Block13

 Block12:
	pop edi
	pop esi
	mov eax,4
	pop ebx
	add esp,0x10
	ret 8

 Block13:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCashTradingRoomDlg::SetRet
_SUB_EXCEPTION_HANDLER(9CD10)
__SUB_CLASS_THIS(0009CD10, __thiscall, 138378,  CCashTradingRoomDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9CD10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x2C]
	cmp edi,2
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	cmp dword ptr [esi+0x84],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block5

 Block4:
	mov ecx,esi
	call CWnd::Destroy

 Block5:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CMiniRoomBaseDlg::ChatTextInfo::~ChatTextInfo
__SUB_CLASS_THIS0(002378B0, __thiscall, 60029,  CMiniRoomBaseDlg::ChatTextInfo, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	pop ecx

 Block2:
	ret
}
}
// CMiniRoomBaseDlg::OnInviteResultStatic
_SUB_EXCEPTION_HANDLER(237D70)
__SUB(00237D70, __cdecl, 59981,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_237D70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	call CInPacket::Decode1
	movsx eax,al
	test eax,eax
	je Block16

 Block1:
	mov dword ptr [esp+0xC],0
	dec eax
	mov dword ptr [esp+0x30],0
	cmp eax,3
	ja Block12

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6


 Block3:
	lea eax,[esp+0x14]
	push 0x17B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block10

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	lea edx,[esp+0x18]
	push 0x1A2
	mov bl,2
	push edx
	mov byte ptr [esp+0x38],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	jmp Block7

 Block5:
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	lea ecx,[esp+0x1C]
	push 0x1A3
	mov bl,4
	push ecx
	mov byte ptr [esp+0x38],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x3C],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	jmp Block7

 Block6:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	lea edx,[esp+0x20]
	push 0x1A4
	mov bl,6
	push edx
	mov byte ptr [esp+0x38],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]

 Block7:
	add esp,0xC
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x10]

 Block10:
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov esi,dword ptr [esp+0xC]
	je Block14

 Block13:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block14:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block16

 Block15:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x28
	ret
}
}
// CCashTradingRoomDlg::OnMouseEnter
__SUB_CLASS_THIS(0009C5F0, __thiscall, 138382,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x1F4]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CMiniRoomBaseDlg::IsEntrusted
__SUB_CLASS_THIS0(0009FA80, __thiscall, 59989,  CMiniRoomBaseDlg, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CCashTradingRoomDlg::GetRTTI
__SUB_CLASS_THIS0(0009FAD0, __thiscall, 138403,  CCashTradingRoomDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCashTradingRoomDlg::ms_RTTI_CCashTradingRoomDlg
	ret
}
}
// CMiniRoomBaseDlg::~CMiniRoomBaseDlg
__SUB_CLASS_THIS0(0009FAA0, __thiscall, 59974,  CMiniRoomBaseDlg, void) {
__asm {

 Block0:
	ret
}
}
// CMiniRoomBaseDlg::OnEnterBase
__SUB_CLASS_THIS(0009FA60, __thiscall, 59983,  CMiniRoomBaseDlg, void, CInPacket&) {
__asm {

 Block0:
	ret 4
}
}
// CMiniRoomBaseDlg::IsKindOf
__SUB_CLASS_THIS(00227E30, __thiscall, 60014,  CMiniRoomBaseDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CMiniRoomBaseDlg::ms_RTTI_CMiniRoomBaseDlg
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
// CCashTradingRoomDlg::CompressTextMoney
_SUB_EXCEPTION_HANDLER(9FCE0)
__SUB_CLASS_THIS(0009FCE0, __thiscall, 138392,  CCashTradingRoomDlg, int32_t, long, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9FCE0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x2C]
	push edi
	lea eax,[esp+0x18]
	push offset _S_D__1
	push eax
	mov dword ptr [esp+0x30],ebx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	cmp eax,ebx
	je Block2

 Block1:
	mov ebp,dword ptr [eax-4]
	cmp ebp,8
	jg Block5

 Block2:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	jmp Block29

 Block5:
	mov eax,0x55E63B89
	imul edi
	sar edx,0x19
	mov ecx,edx
	shr ecx,0x1F
	add edx,ecx
	imul edx,0x5F5E100
	mov ecx,edi
	sub ecx,edx
	mov eax,0x6B5FCA6B
	imul ecx
	sar edx,0x16
	mov esi,edx
	add ebp,0xFFFFFFF8
	push ebp
	lea eax,[esp+0x30]
	shr esi,0x1F
	push eax
	lea ecx,[esp+0x1C]
	add esi,edx
	call ZXString<char>::Left
	mov ebp,dword ptr [esp+0x34]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x28],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x2C],ebx
	lea ecx,[esp+0x34]
	push 0xED4
	push ecx
	mov byte ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,8
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp esi,ebx
	jle Block17

 Block10:
	mov dword ptr [esp+0x34],ebx
	lea eax,[esp+0x18]
	push 0xEDA
	push eax
	mov byte ptr [esp+0x2C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x30],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],4
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov esi,dword ptr [esp+0x34]
	cmp esi,ebx
	je Block14

 Block13:
	mov eax,dword ptr [esi-4]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	push esi
	lea ecx,[esp+0x34]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x24],2
	cmp esi,ebx
	je Block17

 Block16:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,0x6B5FCA6B
	imul edi
	sar edx,0x16
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x989680
	sub edi,eax
	je Block23

 Block18:
	lea ecx,[esp+0x34]
	push 0xEDB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x24],6
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax-4]
	jmp Block21

 Block20:
	xor ecx,ecx

 Block21:
	push ecx
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebx
	je Block25

 Block24:
	mov eax,dword ptr [esi-4]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	push eax
	push esi
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block28

 Block27:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov edx,dword ptr [esp+0x14]
	add edx,0xFFFFFFF4
	push edx
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov eax,1

 Block29:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
