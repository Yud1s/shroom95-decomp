#include "regen.hpp"
// TradingRoomDlg.ipp
#include "TradingRoomDlg.hpp"

// CTradingRoomDlg::OnExceedLimit
__SUB_CLASS_THIS(00364160, __thiscall, 88322,  CTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFB2
	push eax
	mov esi,ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esi+0x1A8]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x1C8],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	add esp,0x14
	push 1
	call eax
	mov eax,dword ptr [esi+0x1B0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ecx
	ret 4
}
}
// CTradingRoomDlg::PutMoney
_SUB_EXCEPTION_HANDLER(364450)
__SUB_CLASS_THIS0(00364450, __thiscall, 88310,  CTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_364450
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
	cmp dword ptr [ecx+0x1C8],0
	jne Block19

 Block1:
	mov ecx,dword ptr [ecx+0xE4]
	cmp ecx,1
	jle Block19

 Block2:
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebp+0x20B8],0
	jne Block19

 Block3:
	mov eax,dword ptr [ebp+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block19

 Block4:
	call get_update_time
	sub eax,dword ptr [ebp+0x20BC]
	cmp eax,0x1F4
	jl Block19

 Block5:
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x40],0
	test eax,eax
	je Block13

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block13

 Block7:
	add eax,8
	je Block13

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
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
	mov dword ptr [esp+0x20],esp
	push 0x1AB
	push ecx
	mov dword ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edx,dword ptr [edi+0xBD]
	push edx
	lea eax,[edi+0xB5]
	push eax
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
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test esi,esi
	je Block19

 Block12:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block13:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block10

 Block14:
	mov ecx,dword ptr [edi+0x35]
	mov ebx,dword ptr [esi+0xF4]
	push ecx
	add edi,0x33
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	ja Block17

 Block15:
	cmp ebx,0xF4240
	jle Block17

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xFB2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block18

 Block17:
	push 0x90
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push 0x10
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],2
	call COutPacket::Encode1
	mov esi,dword ptr [esi+0xF4]
	push esi
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	push 1
	mov ecx,ebp
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],1
	call ZArray<unsigned char>::RemoveAll

 Block18:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block19:
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
// CTradingRoomDlg::OnKey
_SUB_EXCEPTION_HANDLER(364E00)
__SUB_CLASS_THIS(00364E00, __thiscall, 88314,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_364E00
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
// CTradingRoomDlg::OnPutMoney
__SUB_CLASS_THIS(00363950, __thiscall, 88322,  CTradingRoomDlg, void, CInPacket&) {
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
	mov dword ptr [esi+ebx*4+0x1D8],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CTradingRoomDlg::OnEnter
__SUB_CLASS_THIS(00363720, __thiscall, 88321,  CTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0
	call CWnd::InvalidateRect
	ret 8
}
}
// CTradingRoomDlg::OnMouseEnter
__SUB_CLASS_THIS(003637B0, __thiscall, 88316,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x1E0]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CTradingRoomDlg::SetRet
_SUB_EXCEPTION_HANDLER(3639A0)
__SUB_CLASS_THIS(003639A0, __thiscall, 88311,  CTradingRoomDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3639A0
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
// CTradingRoomDlg::GetActionPosition
__SUB_CLASS_THIS(003636E0, __thiscall, 88320,  CTradingRoomDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0xDC]
	mov eax,dword ptr [esp+0xC]
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov dword ptr [ecx],5
	mov dword ptr [eax],0xDB
	mov dword ptr [eax+4],0x73
	ret 0xC

 Block2:
	mov dword ptr [eax],0x31
	mov dword ptr [eax+4],0x73
	ret 0xC
}
}
// CTradingRoomDlg::OnLeave
_SUB_EXCEPTION_HANDLER(364A10)
__SUB_CLASS_THIS(00364A10, __thiscall, 88321,  CTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_364A10
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
	mov ecx,dword ptr [esi+0x1E0]
	cmp edi,ecx
	jle Block8

 Block6:
	mov eax,edi
	sub eax,ecx
	mov ecx,dword ptr [esi+0x1DC]
	sub ecx,dword ptr [esi+0x1D8]
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
	ja Block23

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block23
cmp EAX, 2
je Block23
cmp EAX, 3
je Block23
cmp EAX, 4
je Block23
cmp EAX, 5
je Block11
cmp EAX, 6
je Block17
cmp EAX, 7
je Block18
cmp EAX, 8
je Block23
cmp EAX, 9
je Block23
cmp EAX, 10
je Block19
cmp EAX, 11
je Block20


 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A5
	jmp Block21

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
	je Block23

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block23

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A6
	push eax
	jmp Block22

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A8
	jmp Block21

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
	jmp Block22

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1AA
	push eax
	jmp Block22

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A67

 Block21:
	push ecx

 Block22:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block23:
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
// CTradingRoomDlg::OnTrade
_SUB_EXCEPTION_HANDLER(363F20)
__SUB_CLASS_THIS(00363F20, __thiscall, 88322,  CTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_363F20
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
	mov eax,dword ptr [ebx+0x1D4]
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
	cmp ebp,0x90
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
	lea ecx,[ecx]

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
	mov dword ptr [ecx+0x1CC],edi
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
// CTradingRoomDlg::OnCreate
_SUB_EXCEPTION_HANDLER(365AB0)
__SUB_CLASS_THIS(00365AB0, __thiscall, 88312,  CTradingRoomDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_365AB0
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
	xor ebx,ebx
	push ebx
	push ebx
	lea ebp,[esi+0xC2C]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea ecx,[esp+0x4C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x50],eax
	lea eax,[esp+0x14]
	xor ecx,ecx
	push 0x1A25
	push eax
	mov dword ptr [esp+0x98],ebx
	mov dword ptr [esp+0x78],0xFFFFFFFF
	mov dword ptr [esp+0x70],0xFF555555
	mov dword ptr [esp+0x5C],ecx
	mov dword ptr [esp+0x60],edx
	mov dword ptr [esp+0x64],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x60]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x60],edi
	cmp edi,ebx
	je Block5

 Block4:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x90],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x90],0
	cmp eax,ebx
	je Block36

 Block11:
	add eax,8
	cmp eax,ebx
	je Block36

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x1B8]
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x1B8]
	lea edx,[esp+0x4C]
	push edx
	push 0xF
	push 0xAC
	push 0x116
	push 0x119
	mov dword ptr [esp+0x90],0x100
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	push 0x3EE
	push esi
	call eax
	mov eax,dword ptr [esi+0x1B8]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	push ebx
	push ebx
	push ebx
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGTR__15
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block18

 Block17:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	push ebx
	push ebx
	push ebx
	push 0x3ED
	push offset _S_UIUIWINDOW2IMGTR__14
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block20:
	push ebx
	push ebx
	push ebx
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGTR__13
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
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
	mov ecx,dword ptr [ebx+4]
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
	push offset _S_UIUIWINDOW2IMGTR__12
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
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
	mov eax,dword ptr [ebx+4]
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
	push offset _S_UIUIWINDOW2IMGTR__11
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block34

 Block33:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block34:
	push 0
	push 0xF0
	push 0xC9
	push 0xC
	push 0x127
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
	je Block60

 Block39:
	add eax,8
	je Block60

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
	push 0xED
	push 0x10
	push 0x1F8
	push 3
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [eax+0x34],0xE2
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
	jge Block61

 Block59:
	push eax
	call _com_issue_error

 Block60:
	xor edi,edi
	jmp Block42

 Block61:
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
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
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
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xA8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x1C4]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block68

 Block66:
	cmp eax,0x80004002
	je Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov edi,8
	mov byte ptr [esp+0x90],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x3C],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x3C]
	push eax
	call ebx

 Block72:
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x1C],di
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block76:
	mov byte ptr [esp+0x90],0
	cmp word ptr [esp+0x2C],di
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block80:
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
	mov dword ptr [esi+0x1E0],eax
	mov esi,dword ptr [esp+0x20]
	add esp,8
	mov byte ptr [esp+0x90],0
	test esi,esi
	je Block85

 Block81:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
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
	mov dword ptr [esp+0x18],0

 Block85:
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
// CTradingRoomDlg::Trade
_SUB_EXCEPTION_HANDLER(3646B0)
__SUB_CLASS_THIS0(003646B0, __thiscall, 88310,  CTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3646B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	xor ebx,ebx
	xor ebp,ebp
	nop

 Block1:
	mov eax,dword ptr [esi+0x1D4]
	test eax,eax
	je Block7

 Block2:
	cmp ebx,dword ptr [eax-4]
	jae Block7

 Block3:
	mov ecx,dword ptr [eax+ebp+4]
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x14]
	call eax
	test eax,eax
	jne Block6

 Block5:
	inc ebx
	add ebp,0x10
	jmp Block1

 Block6:
	mov edi,1

 Block7:
	push 0
	push 0
	lea ecx,[esi+0x88]
	push ecx
	neg edi
	sbb edi,edi
	push 0
	push ecx
	and edi,0x109B
	mov edx,esp
	add edi,0x1AC
	mov dword ptr [esp+0x34],esp
	push edi
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block53

 Block8:
	mov eax,dword ptr [esi+0x1A8]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x1C8],1
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	xor ebx,ebx
	push ebx
	call edx
	mov eax,dword ptr [esi+0x1B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x18],ebx
	add esi,0x1D0
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x20],esi

 Block9:
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],2

 Block10:
	mov eax,dword ptr [ebp]
	add eax,ebx
	cmp dword ptr [eax+4],0
	je Block12

 Block11:
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

 Block12:
	add ebp,4
	sub dword ptr [esp+0x1C],1
	jne Block10

 Block13:
	add ebx,0x10
	cmp ebx,0x90
	jl Block9

 Block14:
	push 0x90
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x3C],1
	test eax,eax
	jne Block16

 Block15:
	xor edx,edx
	jmp Block17

 Block16:
	mov edx,dword ptr [eax-4]

 Block17:
	mov ecx,dword ptr [esp+0x2C]
	inc ecx
	cmp ecx,edx
	jbe Block22

 Block18:
	test eax,eax
	je Block20

 Block19:
	mov eax,dword ptr [eax-4]

 Block20:
	add eax,eax
	cmp ecx,eax
	ja Block20

 Block21:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block22:
	mov edx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x18]
	mov esi,1
	mov byte ptr [eax+edx],0x11
	add dword ptr [esp+0x2C],esi
	test ebp,ebp
	jne Block24

 Block23:
	xor ebx,ebx
	jmp Block25

 Block24:
	mov ebx,dword ptr [ebp-4]

 Block25:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	jne Block27

 Block26:
	xor edx,edx
	jmp Block28

 Block27:
	mov edx,dword ptr [eax-4]

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	inc ecx
	cmp ecx,edx
	jbe Block34

 Block29:
	test eax,eax
	je Block32

 Block30:
	mov eax,dword ptr [eax-4]
	jmp Block32

 Block32:
	add eax,eax
	cmp ecx,eax
	ja Block32

 Block33:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block34:
	mov edx,dword ptr [esp+0x2C]
	mov byte ptr [eax+edx],bl
	add dword ptr [esp+0x2C],esi
	xor esi,esi
	test ebx,ebx
	jle Block52

 Block35:
	mov eax,dword ptr [esp+0x28]
	mov edi,dword ptr [ebp+esi*8]
	test eax,eax
	jne Block37

 Block36:
	xor edx,edx
	jmp Block38

 Block37:
	mov edx,dword ptr [eax-4]

 Block38:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	cmp ecx,edx
	jbe Block43

 Block39:
	test eax,eax
	je Block41

 Block40:
	mov eax,dword ptr [eax-4]

 Block41:
	add eax,eax
	cmp ecx,eax
	ja Block41

 Block42:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block43:
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x2C],4
	mov eax,dword ptr [esp+0x28]
	mov edi,dword ptr [ebp+esi*8+4]
	test eax,eax
	jne Block45

 Block44:
	xor edx,edx
	jmp Block46

 Block45:
	mov edx,dword ptr [eax-4]

 Block46:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	cmp ecx,edx
	jbe Block51

 Block47:
	test eax,eax
	je Block49

 Block48:
	mov eax,dword ptr [eax-4]

 Block49:
	add eax,eax
	cmp ecx,eax
	ja Block49

 Block50:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x34]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x28]

 Block51:
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x2C],4
	inc esi
	cmp esi,ebx
	jl Block35

 Block52:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x3C],0
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<ZPair<long, unsigned long>>::RemoveAll

 Block53:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CTradingRoomDlg::HitTest
__SUB_CLASS_THIS(00363730, __thiscall, 88313,  CTradingRoomDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,dword ptr [esp+0x28]
	push edi
	push ebx
	push esi
	call CWnd::HitTest
	cmp eax,2
	jne Block4

 Block1:
	cmp esi,0x10F
	jl Block5

 Block2:
	cmp ebx,0x126
	jl Block5

 Block3:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0xC

 Block4:
	test eax,eax
	je Block8

 Block5:
	test edi,edi
	je Block7

 Block6:
	cmp dword ptr [edi],0
	jne Block8

 Block7:
	push 0xB4
	push 0x10F
	push 0x96
	push 0
	lea eax,[esp+0x1C]
	push eax
	call SetRect
	push ebx
	push esi
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	neg eax
	sbb eax,eax
	neg eax
	inc eax

 Block8:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CTradingRoomDlg::OnPacket
__SUB_CLASS_THIS(003649A0, __thiscall, 88321,  CTradingRoomDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFF1
	cmp eax,6
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block6
cmp EAX, 4
je Block6
cmp EAX, 5
je Block6
cmp EAX, 6
je Block5


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CTradingRoomDlg::OnPutItem
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CTradingRoomDlg::OnPutMoney
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	call CTradingRoomDlg::OnTrade
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	call CTradingRoomDlg::OnExceedLimit

 Block6:
	ret 8
}
}
// CTradingRoomDlg::DrawItems
_SUB_EXCEPTION_HANDLER(363BB0)
__SUB_CLASS_THIS(00363BB0, __thiscall, 88325,  CTradingRoomDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_363BB0
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
	mov dword ptr [esp+0x24],ecx
	xor edi,edi
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x20],edi
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x20]

 Block4:
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*2]
	imul eax,0x25
	mov esi,edi
	sub esi,ecx
	imul esi,0x27
	add eax,0xB6
	xor ecx,ecx
	add esi,0x97
	mov ebx,eax
	mov dword ptr [esp+0x14],ecx
	mov ebp,dword ptr [esp+0x24]
	lea edx,[esi+0x1F]
	shl edi,4
	mov byte ptr [esp+0x38],1
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x18],edx
	add ebp,0x1D0
	nop

 Block5:
	mov eax,dword ptr [ebp]
	lea eax,[eax+edi+8]
	mov eax,dword ptr [eax]
	cmp ecx,eax
	je Block11

 Block6:
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x28]

 Block8:
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block10:
	mov ecx,dword ptr [esp+0x14]

 Block11:
	test ecx,ecx
	je Block30

 Block12:
	mov eax,dword ptr [ebp]
	add eax,edi
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block14

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+edi+4]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp eax,1
	jne Block19

 Block15:
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+edi+4]
	test eax,eax
	je Block19

 Block16:
	mov edx,dword ptr [esp+0x18]
	lea ecx,[ebx+2]
	push ecx
	push edx
	xor edx,edx
	cmp dword ptr [esp+0x24],edx
	lea ecx,[ebx-0x21]
	sete dl
	push ecx
	mov ecx,esi
	sub ecx,edx
	mov edx,dword ptr [esp+0x4C]
	sub ecx,2
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame

 Block19:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+edi+4]
	mov eax,dword ptr [ecx]
	push 2
	push 0
	push edx
	mov edx,dword ptr [eax+4]
	push 0
	push 0
	push 0
	call edx
	push eax
	mov eax,dword ptr [ebp]
	add eax,edi
	mov eax,dword ptr [eax+4]
	push ebx
	push esi
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x58],esp
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebp]
	add eax,edi
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block24

 Block22:
	cmp eax,3
	je Block24

 Block23:
	cmp eax,4
	jne Block29

 Block24:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0x1C4]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+edi+0xC]
	push ecx
	lea edx,[ebx-0xC]
	push edx
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x58]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	call draw_number_by_image
	add esp,0x18

 Block29:
	mov ecx,dword ptr [esp+0x14]

 Block30:
	mov eax,dword ptr [esp+0x1C]
	sub dword ptr [esp+0x18],0x8B
	inc eax
	sub esi,0x8B
	add ebp,4
	cmp eax,2
	mov dword ptr [esp+0x1C],eax
	jl Block5

 Block31:
	mov byte ptr [esp+0x38],0
	test ecx,ecx
	je Block33

 Block32:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block33:
	mov eax,dword ptr [esp+0x20]
	inc eax
	cmp eax,9
	mov dword ptr [esp+0x20],eax
	jl Block3

 Block34:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
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
// CTradingRoomDlg::Draw
_SUB_EXCEPTION_HANDLER(364F20)
__SUB_CLASS_THIS(00364F20, __thiscall, 88318,  CTradingRoomDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_364F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
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
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x28],ebx
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
	mov dword ptr [ebp-0x34],ebx
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
	lea ecx,[ebp-0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[ebp-0x34]
	call ZXString<char>::ReleaseBuffer

 Block7:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],2
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
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
	mov edx,dword ptr [ebp-0x34]
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
	mov ecx,dword ptr [ebp-0x34]
	mov edi,esp
	lea eax,[ebp-0x44]
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
	cmp eax,0x53
	mov dword ptr [ebp-0x30],eax
	jl Block13

 Block12:
	mov dword ptr [ebp-0x30],0x53

 Block13:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],2
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x44]
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
	lea edx,[ebp-0x2C]
	push edx
	push edi
	mov dword ptr [ebp-0x2C],0
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
	push 0x53
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
	lea eax,[ebp-0x34]
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
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],5
	call edi
	lea ecx,[ebp-0x44]
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
	mov edx,dword ptr [ebp-0x34]
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
	mov edx,dword ptr [ebp-0x34]
	mov edi,esp
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0x1BC]
	lea ecx,[ebp-0x44]
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
	mov ecx,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [ebp-0x30]
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0xDA
	push 0x7B
	sub edx,eax
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x44],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x44]
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
	mov ecx,dword ptr [esi+0x1D8]
	push 1
	push ecx
	lea edx,[ebp-0x28]
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
	mov edx,dword ptr [ebp-0x28]
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
	mov ecx,dword ptr [ebp-0x28]
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
	mov dword ptr [ebp-0x30],eax
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
	lea edx,[ebp-0x2C]
	push edx
	push edi
	mov dword ptr [ebp-0x2C],0
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x44]
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
	mov bl,0xA
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
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
	mov edx,dword ptr [ebp-0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],0xB
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x28]
	mov edi,esp
	lea eax,[ebp-0x44]
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
	mov ecx,dword ptr [ebp-0x48]
	mov eax,0x106
	sub eax,dword ptr [ebp-0x30]
	push 0x107
	mov byte ptr [ebp-4],0xC
	push eax
	mov byte ptr [ebp-4],0xB
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
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
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],2
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp dword ptr [esi+0xE4],1
	jle Block116

 Block62:
	mov eax,dword ptr [esi+0xDC]
	mov edx,1
	sub edx,eax
	push edx
	lea eax,[ebp-0x2C]
	push eax
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0xD
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov eax,dword ptr [ebp-0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0xE
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x2C]
	mov edi,esp
	lea ecx,[ebp-0x24]
	push ecx
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
	mov ecx,dword ptr [esi+0x1BC]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp eax,0x53
	mov dword ptr [ebp-0x30],eax
	jl Block68

 Block67:
	mov dword ptr [ebp-0x30],0x53

 Block68:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xD
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov edi,dword ptr [esi+0x1BC]
	test edi,edi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[ebp-0x14]
	push eax
	push edi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [esi+0x1BC]
	push 0x53
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block78:
	lea ecx,[ebp-0x2C]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[ebp-0x44]
	push edx
	call edi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x10
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov eax,dword ptr [ebp-0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0x11
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x1BC]
	mov edi,esp
	lea ecx,[ebp-0x44]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push eax
	mov eax,dword ptr [ebp-0x2C]
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
	mov eax,dword ptr [ebp-0x30]
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x37
	sub ecx,eax
	push 0x7B
	push ecx
	mov ecx,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],0x12
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x10
	jne Block85

 Block83:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xD
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov eax,dword ptr [esi+0x1DC]
	push 1
	push eax
	lea ecx,[ebp-0x28]
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
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [ebp-0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x13
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x28]
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
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x30],eax
	mov byte ptr [ebp-4],0xD
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov edi,dword ptr [esi+0x1C0]
	test edi,edi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block102

 Block101:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block102:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x44]
	push eax
	call edi
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x15
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov ecx,dword ptr [ebp-0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x16
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x28]
	mov edi,esp
	lea edx,[ebp-0x44]
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
	mov ecx,dword ptr [ebp-0x48]
	mov edx,0x7C
	sub edx,dword ptr [ebp-0x30]
	push 0x107
	mov byte ptr [ebp-4],0x17
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x15
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xD
	jne Block113

 Block111:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	mov edi,dword ptr [ebp-0x48]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x14],esp
	push edi
	call edx
	mov ecx,esi
	call CTradingRoomDlg::DrawItems
	cmp dword ptr [esi+0x1C8],0
	je Block119

 Block117:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x8C]
	push 0x80FFFFFF
	push 0x6D
	push 0x71
	push 0x96
	push 0x96
	push edi
	call ecx
	test eax,eax
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block119:
	cmp dword ptr [esi+0x1CC],0
	je Block122

 Block120:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x8C]
	push 0x80FFFFFF
	push 0x6D
	push 0x71
	push 0x96
	push 0xB
	push edi
	call eax
	test eax,eax
	jge Block122

 Block121:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block122:
	cmp dword ptr [esi+0xE4],1
	jle Block125

 Block123:
	cmp dword ptr [esi+0x1C8],0
	jne Block125

 Block124:
	push 1
	jmp Block126

 Block125:
	push 0

 Block126:
	mov esi,dword ptr [esi+0x1A8]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	call eax
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x58]
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
// CTradingRoomDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(003637D0, __thiscall, 88326,  CTradingRoomDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	xor edi,edi
	lea esp,[esp]

 Block1:
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*2]
	imul eax,0x25
	mov esi,edi
	sub esi,ecx
	imul esi,0x27
	lea ebx,[eax+0xB8]
	push ebx
	lea edx,[esi+0xB8]
	push edx
	lea ebp,[eax+0x98]
	push ebp
	lea eax,[esi+0x98]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	jne Block5

 Block2:
	push ebx
	lea eax,[esi+0x31]
	push eax
	push ebp
	add esi,0x11
	push esi
	lea ecx,[esp+0x20]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	jne Block6

 Block3:
	inc edi
	cmp edi,9
	jl Block1

 Block4:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	lea eax,[edi+1]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block6:
	or eax,0xFFFFFFFF
	sub eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CTradingRoomDlg::GetRTTI
__SUB_CLASS_THIS0(00366240, __thiscall, 88330,  CTradingRoomDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CTradingRoomDlg::ms_RTTI_CTradingRoomDlg
	ret
}
}
// CTradingRoomDlg::OnMouseMove
__SUB_CLASS_THIS(003638B0, __thiscall, 88315,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	push edi
	push ebx
	lea ecx,[esi-4]
	call CTradingRoomDlg::GetItemIndexFromPoint
	test eax,eax
	je Block7

 Block1:
	jle Block3

 Block2:
	mov ecx,dword ptr [esi+0x1CC]
	shl eax,4
	lea eax,[ecx+eax-0x10]
	jmp Block4

 Block3:
	inc eax
	shl eax,4
	mov edx,eax
	mov eax,dword ptr [esi+0x1D0]
	sub eax,edx

 Block4:
	test eax,eax
	je Block7

 Block5:
	cmp dword ptr [eax+0xC],0
	jl Block7

 Block6:
	mov eax,dword ptr [eax+4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
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
	add eax,ebx
	push eax
	lea ecx,[esi+0x1E0]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8

 Block7:
	lea ecx,[esi+0x1E0]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CTradingRoomDlg::PutItem
_SUB_EXCEPTION_HANDLER(3641D0)
__SUB_CLASS_THIS(003641D0, __thiscall, 88324,  CTradingRoomDlg, int32_t, NakedParam<ZRef<GW_ItemSlotBase>>, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3641D0
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
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	cmp dword ptr [esi+0x1C8],ebx
	jne Block19

 Block1:
	cmp dword ptr [esi+0xE4],1
	jle Block19

 Block2:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov ecx,esi
	call CTradingRoomDlg::GetItemIndexFromPoint
	mov ebp,eax
	cmp ebp,ebx
	jle Block15

 Block3:
	mov eax,dword ptr [esi+0x1D0]
	mov edx,ebp
	shl edx,4
	cmp dword ptr [eax+edx-4],ebx
	jge Block15

 Block4:
	cmp dword ptr [esp+0x40],ebx
	je Block15

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push 0x1F4
	mov dword ptr [esp+0x58],ecx
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block15

 Block6:
	mov ecx,dword ptr [esp+0x40]
	push ecx
	lea esi,[ebx+1]
	call is_treat_singly_1
	add esp,4
	test eax,eax
	jne Block18

 Block7:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov edi,eax
	cmp edi,esi
	jle Block18

 Block8:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block16

 Block9:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebx
	je Block16

 Block10:
	add eax,8
	cmp eax,ebx
	je Block16

 Block11:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block13

 Block12:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	push ebx
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x58],esp
	push 0x38C
	push edx
	mov byte ptr [esp+0x48],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebx
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push ebx
	push 0xA
	push ebx
	push edi
	push 1
	push edi
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov byte ptr [esp+0x34],bl
	lea ecx,[esp+0x14]
	cmp eax,1
	je Block17

 Block14:
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block15:
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block23

 Block16:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block13

 Block17:
	mov esi,dword ptr [esi+0xF4]
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block18:
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0xF
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x44]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x48]
	push ecx
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	push esi
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	push ebp
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0x50]
	push 1
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],bl
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,1
	jmp Block24

 Block19:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block20:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x40]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	je Block23

 Block22:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block23:
	xor eax,eax

 Block24:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x18
}
}
// CTradingRoomDlg::CTradingRoomDlg
_SUB_EXCEPTION_HANDLER(366120)
__SUB_CLASS_THIS0(00366120, __thiscall, 88308,  CTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_366120
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
	int 3// TODO: 	mov dword ptr [esi],offset CTradingRoomDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTradingRoomDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTradingRoomDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	push offset ZArray<CTradingRoomDlg::ITEM>::~ZArray<CTradingRoomDlg::ITEM>
	push offset ZArray<CTradingRoomDlg::ITEM>::_ctor_default
	push 2
	push 4
	lea ebx,[esi+0x1D0]
	push ebx
	mov byte ptr [esp+0x38],6
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1CC],edi
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0x1E4]
	mov byte ptr [esp+0x24],7
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xC2C],edi
	mov dword ptr [esi+0xC30],edi
	mov dword ptr [esi+0xC34],edi
	mov dword ptr [esi+0xC38],edi
	mov dword ptr [esi+0xC3C],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push edi
	mov byte ptr [esp+0x2C],9
	call CWvsContext::UI_Open
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGTR__16
	mov ecx,esi
	call CDialog::CreateDlg_2
	lea ebp,[edi+2]

 Block1:
	lea eax,[esp+0x17]
	push eax
	push 9
	mov ecx,ebx
	mov dword ptr [ebx+8],edi
	call ZArray<CTradingRoomDlg::ITEM>::_Alloc
	add ebx,4
	sub ebp,1
	jne Block1

 Block2:
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
// CTradingRoomDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(364C80)
__SUB_CLASS_THIS(00364C80, __thiscall, 88317,  CTradingRoomDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_364C80
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
	call CTradingRoomDlg::PutMoney
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block19:
	mov ecx,esi
	call CTradingRoomDlg::Trade

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
// CTradingRoomDlg::OnPutItem
_SUB_EXCEPTION_HANDLER(363A60)
__SUB_CLASS_THIS(00363A60, __thiscall, 88322,  CTradingRoomDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_363A60
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
	mov ecx,dword ptr [ebx+esi*4+0x1D0]
	shl edi,4
	lea ebp,[edi+ecx-0x10]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	mov dword ptr [esp+0x24],0
	call eax
	mov dword ptr [ebp+0xC],eax
	mov edx,dword ptr [ebx+esi*4+0x1D0]
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
	mov ecx,dword ptr [ebx+esi*4+0x1D0]
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
// CTradingRoomDlg::IsKindOf
__SUB_CLASS_THIS(00366260, __thiscall, 88331,  CTradingRoomDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CTradingRoomDlg::ms_RTTI_CTradingRoomDlg
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
// CTradingRoomDlg::~CTradingRoomDlg
_SUB_EXCEPTION_HANDLER(366290)
__SUB_CLASS_THIS0(00366290, __thiscall, 88310,  CTradingRoomDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_366290
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
	int 3// TODO: 	mov dword ptr [esi],offset CTradingRoomDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTradingRoomDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTradingRoomDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC2C]
	mov dword ptr [esp+0x1C],8
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x1E4]
	mov byte ptr [esp+0x1C],7
	call CUIToolTip::~CUIToolTip
	push offset ZArray<CTradingRoomDlg::ITEM>::~ZArray<CTradingRoomDlg::ITEM>
	push 2
	push 4
	lea eax,[esi+0x1D0]
	push eax
	mov byte ptr [esp+0x2C],6
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x1C4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1C0]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1BC]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea edi,[esi+0x1B4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x1AC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x1A4]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
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
