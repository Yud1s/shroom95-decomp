#include "regen.hpp"
// UIMessenger.ipp
#include "UIMessenger.hpp"

// CUIMessenger::OnInvite
_SUB_EXCEPTION_HANDLER(3F2CB0)
__SUB(003F2CB0, __cdecl, 56064,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F2CB0
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
	mov esi,dword ptr [esp+0x3C]
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x34],0
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jne Block11

 Block1:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [ecx+0x28],eax
	je Block3

 Block2:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],eax
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::IsInBlackList
	test eax,eax
	je Block11

 Block3:
	push 0x8F
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	mov edi,dword ptr [edi+0x20CC]
	test edi,edi
	je Block5

 Block4:
	lea ecx,[edi+4]
	jmp Block6

 Block5:
	xor ecx,ecx

 Block6:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block10

 Block7:
	mov eax,ecx
	lea esi,[eax+1]

 Block8:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block8

 Block9:
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

 Block10:
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	push 1
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],0
	call ZArray<unsigned char>::RemoveAll
	jmp Block15

 Block11:
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x34],2
	test eax,eax
	je Block13

 Block12:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov esi,eax
	jmp Block14

 Block13:
	xor esi,esi

 Block14:
	push ebx
	push ebp
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x24],esp
	push edx
	mov byte ptr [esp+0x44],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIFadeYesNo::CreateMSMInvite
	push esi
	mov ecx,edi
	call CWvsContext::SetNewFadeWnd

 Block15:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
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
// CUIMessenger::OnPacket
__SUB(003F5E40, __cdecl, 56064,  void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,3
	jne Block2

 Block1:
	push esi
	call CUIMessenger::OnInvite
	add esp,4
	pop esi
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block3:
	cmp eax,8
	ja Block13

 Block4:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block5
cmp EAX, 2
je Block7
cmp EAX, 3
je Block13
cmp EAX, 4
je Block8
cmp EAX, 5
je Block9
cmp EAX, 6
je Block10
cmp EAX, 7
je Block11
cmp EAX, 8
je Block12


 Block5:
	push esi
	call CUIMessenger::OnSelfEnterResult
	pop esi
	ret

 Block6:
	push esi
	call CUIMessenger::OnEnter_1
	pop esi
	ret

 Block7:
	push esi
	call CUIMessenger::OnLeave_1
	pop esi
	ret

 Block8:
	push esi
	call CUIMessenger::OnInviteResult
	pop esi
	ret

 Block9:
	push esi
	call CUIMessenger::OnBlocked
	pop esi
	ret

 Block10:
	push esi
	call CUIMessenger::OnChat
	pop esi
	ret

 Block11:
	push esi
	call CUIMessenger::OnAvatar
	pop esi
	ret

 Block12:
	push esi
	call CUIMessenger::OnMigrated

 Block13:
	pop esi
	ret
}
}
// CUIMessenger::CHARACTER::~CHARACTER
__SUB_CLASS_THIS0(003F0590, __thiscall, 56166,  CUIMessenger::CHARACTER, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x1C]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x1C],0

 Block2:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block11

 Block7:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block10:
	pop edi
	mov dword ptr [esi+4],0
	pop ebx

 Block11:
	pop esi
	ret
}
}
// CUIMessenger::OnChat
_SUB_EXCEPTION_HANDLER(3F52D0)
__SUB_CLASS_THIS(003F52D0, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F52D0
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
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	mov ecx,dword ptr [esp+0x60]
	lea eax,[esp+0x60]
	push eax
	call CInPacket::DecodeStr
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x18],ebx
	push ebx
	push ebx
	push offset _S___6
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x64],1
	xor esi,esi
	call ZXString<char>::Find__0
	cmp eax,ebx
	mov dword ptr [esp+0x14],eax
	jge Block7

 Block1:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	dec eax
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x68]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x58],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push 1
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x68]
	call ZXString<char>::Right
	push offset _S_0__1
	mov ecx,eax
	call ZXString<char>::Compare
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	jmp Block8

 Block7:
	push eax
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x68]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],3
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x58],1

 Block8:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	add ebp,0xF8

 Block11:
	cmp dword ptr [ebp-0xC],0
	je Block18

 Block12:
	mov edi,dword ptr [ebp]
	test edi,edi
	je Block16

 Block13:
	cmp dword ptr [edi+4],0
	jne Block15

 Block14:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block15:
	mov edi,dword ptr [edi+4]
	jmp Block17

 Block16:
	xor edi,edi

 Block17:
	push edi
	lea ecx,[esp+0x1C]
	call ZXString<char>::Compare
	test eax,eax
	je Block20

 Block18:
	inc ebx
	add ebp,0x20
	cmp ebx,3
	jl Block11

 Block19:
	mov dword ptr [esp+0x1C],ebx
	jmp Block40

 Block20:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	shl ebx,5
	lea ebp,[ebx+eax]
	mov dword ptr [ebp+0xF0],esi
	mov eax,dword ptr [eax+0x80]
	test eax,eax
	je Block22

 Block21:
	cmp eax,1
	jne Block40

 Block22:
	mov edi,dword ptr [ebp+0xE8]
	test edi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xE0]
	mov eax,esi
	neg eax
	sbb eax,eax
	and eax,0xCFFFFFFF
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x30]
	mov bl,4
	push ecx
	mov byte ptr [esp+0x5C],bl
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [ebp+0xE8]
	mov byte ptr [esp+0x58],5
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x40]
	neg esi
	push eax
	lea edx,[esp+0x34]
	sbb esi,esi
	push edx
	and esi,0x20
	push esi
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block36:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x40],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block40:
	cmp dword ptr [esp+0x14],0
	push 0
	jl Block52

 Block41:
	push 0
	push offset _S___6
	lea ecx,[esp+0x6C]
	call ZXString<char>::Find__0
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x68]
	call ZXString<char>::Left
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],6
	test eax,eax
	je Block43

 Block42:
	mov esi,dword ptr [eax-4]
	jmp Block44

 Block43:
	xor esi,esi

 Block44:
	push 0
	push 0
	push offset _S___6
	lea ecx,[esp+0x6C]
	call ZXString<char>::Find__0
	sub esi,eax
	sub esi,3
	push esi
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x68]
	call ZXString<char>::Right
	push 1
	push 0
	push 1
	mov bl,7
	push 0x400
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x68],bl
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x1C]
	push eax
	push offset _S___6
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esp+0x30]
	call ZXString<char>::op_add_0
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x64],8
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push eax
	mov byte ptr [esp+0x68],9
	mov dword ptr [ecx],0
	call ZXString16::AssignCharStr
	mov esi,dword ptr [esp+0x28]
	mov ecx,esi
	call CUIMessenger::AddChatText
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],8
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	push 1
	mov ecx,esi
	call CUIMessenger::StartBlink
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],6
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x58],1
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block52:
	mov ecx,dword ptr [esp+0x24]
	call CWnd::InvalidateRect

 Block53:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 4
}
}
// CUIMessenger::SetLayer
_SUB_EXCEPTION_HANDLER(3F1920)
__SUB_CLASS_THIS0(003F1920, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F1920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x80],edi
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFFFFFFFE
	lea ecx,[esp+0x18]
	push ecx
	xor esi,esi
	mov ecx,edi
	mov dword ptr [esp+0xC4],esi
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xC0],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],0
	cmp eax,esi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [edi+0x80]
	sub eax,esi
	je Block15

 Block11:
	sub eax,1
	je Block14

 Block12:
	sub eax,1
	jne Block18

 Block13:
	push esi
	push esi
	push 1
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov dword ptr [edi+0x24],0xD1
	mov dword ptr [edi+0x28],0x14
	push offset _S_UIUIWINDOW2IMGME__6
	jmp Block17

 Block14:
	push esi
	push esi
	push 1
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov dword ptr [edi+0x28],0xF3
	push offset _S_UIUIWINDOW2IMGME__5
	jmp Block16

 Block15:
	push esi
	push esi
	push 1
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov dword ptr [edi+0x28],0x163
	push offset _S_UIUIWINDOW2IMGME__4

 Block16:
	mov dword ptr [edi+0x24],0x127

 Block17:
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd

 Block18:
	mov dword ptr [esp+0x4C],esi
	lea edx,[esp+0x14]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xC8],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x50]
	push ecx
	push eax
	mov byte ptr [esp+0xCC],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xC0],2
	cmp eax,esi
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea ecx,[esp+0x1C]
	mov bl,4
	push ecx
	mov byte ptr [esp+0xC4],bl
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xC0],5
	cmp ecx,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x28]
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [edi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xC0],bl
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xC0],2
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x4C]
	cmp eax,esi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	lea eax,[esp+0x2C]
	push eax
	call ebp
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0xC4],6
	call ebp
	lea eax,[esp+0x50]
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
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xC4],7
	call ebp
	lea edx,[esp+0x70]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC4],8
	call ebp
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xC4],9
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x14]
	push ecx
	mov bl,0xA
	mov ecx,edi
	mov byte ptr [esp+0xC4],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xC0],0xB
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x5C]
	lea edx,[esp+0x4C]
	push edx
	push eax
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x60],8
	jne Block63

 Block55:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block57:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],bl
	test eax,eax
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xC0],9
	jne Block64

 Block61:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block65

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block63:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x60]
	push ecx
	call esi
	jmp Block58

 Block64:
	lea edx,[esp+0x3C]
	push edx
	call esi

 Block65:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xC0],8
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block69:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xC0],7
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block73:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xC0],6
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block77:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xC0],2
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block81:
	lea edx,[esp+0x50]
	push edx
	call ebp
	lea eax,[esp+0x50]
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
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xC0],0xD
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA0]
	cmp esi,eax
	je Block90

 Block86:
	mov dword ptr [edi+0xA0],eax
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block88:
	test esi,esi
	je Block90

 Block89:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block90:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block92:
	mov esi,8
	mov byte ptr [esp+0xC0],0xC
	cmp word ptr [esp+0x2C],si
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0xC0],2
	cmp word ptr [esp+0x50],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xE
	mov ecx,0xD
	mov byte ptr [esp+0xC0],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block102:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0xC0],0xF
	test esi,esi
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
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
	test eax,eax
	jge Block106

 Block105:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block106:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xC0],bl
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],2
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x10
	mov ecx,0xD
	mov byte ptr [esp+0xC0],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block114

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block114:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0xC0],0x11
	test esi,esi
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
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
	test eax,eax
	jge Block118

 Block117:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block118:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xC0],bl
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],2
	test eax,eax
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block128

 Block127:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block128:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block132:
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [esp+0x80]
	mov eax,dword ptr [ecx+0x80]
	sub eax,edi
	mov byte ptr [esp+0xC0],0x12
	je Block177

 Block133:
	sub eax,1
	je Block156

 Block134:
	sub eax,1
	jne Block201

 Block135:
	lea edx,[esp+0x50]
	push edx
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xC4],0x1B
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	push 0
	push 0
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x1C
	push offset _S_UIUIWINDOW2IMGME__3
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD4],0x1D
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	lea edx,[esp+0xAC]
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block144

 Block142:
	cmp eax,0x80004002
	je Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	cmp word ptr [esp+0x98],8
	mov byte ptr [esp+0xC0],bl
	jne Block151

 Block145:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block147:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block148:
	mov edi,8
	mov byte ptr [esp+0xC0],0x1B
	cmp word ptr [esp+0x2C],di
	jne Block152

 Block149:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block153

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block151:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x98]
	push ecx
	call esi
	jmp Block148

 Block152:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block153:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x50],di
	jne Block155

 Block154:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	jmp Block197

 Block155:
	lea edx,[esp+0x50]
	push edx
	call esi
	mov edi,dword ptr [esp+0x18]
	jmp Block202

 Block156:
	lea eax,[esp+0x3C]
	push eax
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0xC4],0x17
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x18
	push offset _S_UIUIWINDOW2IMGME__2
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD4],0x19
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea eax,[esp+0xBC]
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block165

 Block163:
	cmp eax,0x80004002
	je Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xC0],bl
	jne Block172

 Block166:
	mov eax,dword ptr [esp+0xB0]
	xor ecx,ecx
	mov word ptr [esp+0xA8],cx
	test eax,eax
	je Block168

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block168:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block169:
	mov edi,8
	mov byte ptr [esp+0xC0],0x17
	cmp word ptr [esp+0x70],di
	jne Block173

 Block170:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block174

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block172:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xA8]
	push edx
	call esi
	jmp Block169

 Block173:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block174:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x3C],di
	jne Block176

 Block175:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	jmp Block197

 Block176:
	lea eax,[esp+0x3C]
	push eax
	call esi
	mov edi,dword ptr [esp+0x18]
	jmp Block202

 Block177:
	lea ecx,[esp+0x60]
	push ecx
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea eax,[esp+0x1C]
	mov bl,0x13
	push eax
	mov byte ptr [esp+0xC4],bl
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	push 0
	push 0
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGME__1
	mov byte ptr [esp+0xD8],0x14
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD4],0x15
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0xD8],0x14
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block186

 Block184:
	cmp eax,0x80004002
	je Block186

 Block185:
	push eax
	call _com_issue_error

 Block186:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xC0],0x14
	jne Block193

 Block187:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block189:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block190:
	mov edi,8
	mov byte ptr [esp+0xC0],bl
	cmp word ptr [esp+0x1C],di
	jne Block194

 Block191:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block195

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block193:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x88]
	push eax
	call esi
	jmp Block190

 Block194:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block195:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x60],di
	jne Block200

 Block196:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]

 Block197:
	test eax,eax
	je Block199

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block199:
	mov edi,dword ptr [esp+0x18]
	jmp Block202

 Block200:
	lea ecx,[esp+0x60]
	push ecx
	call esi
	mov edi,dword ptr [esp+0x18]
	jmp Block202

 Block201:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block202:
	lea edx,[esp+0x3C]
	push edx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block204

 Block203:
	push eax
	call _com_issue_error

 Block204:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xC4],0x1F
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xC4],0x20
	call ebp
	lea ecx,[esp+0x50]
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
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xC4],0x21
	call ebp
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x60]
	mov bl,0x22
	push ecx
	mov byte ptr [esp+0xC4],bl
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	mov eax,dword ptr [esp+0x80]
	mov ecx,dword ptr [eax+0xA0]
	mov byte ptr [esp+0xC0],0x23
	test ecx,ecx
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x70]
	push edx
	push edi
	lea eax,[esp+0xA0]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x88],8
	jne Block217

 Block215:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea edx,[esp+0x88]
	push edx
	call esi

 Block218:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xC0],bl
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block222:
	mov ebx,8
	mov byte ptr [esp+0xC0],0x21
	cmp word ptr [esp+0x2C],bx
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block226:
	mov byte ptr [esp+0xC0],0x20
	cmp word ptr [esp+0x50],bx
	jne Block229

 Block227:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block230:
	mov byte ptr [esp+0xC0],0x1F
	cmp word ptr [esp+0x70],bx
	jne Block233

 Block231:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block234:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x3C],bx
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block238:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block240

 Block239:
	push eax
	call _com_issue_error

 Block240:
	lea eax,[esp+0x60]
	mov bl,0x24
	push eax
	mov byte ptr [esp+0xC4],bl
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block242

 Block241:
	push eax
	call _com_issue_error

 Block242:
	mov byte ptr [esp+0xC0],0x25
	test edi,edi
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x84]
	push eax
	push edi
	mov dword ptr [esp+0x8C],0
	call ecx
	test eax,eax
	jge Block246

 Block245:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block246:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [esp+0x84]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block248

 Block247:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block248:
	mov ebp,dword ptr [esp+0x80]
	mov ecx,dword ptr [ebp+0xA0]
	test ecx,ecx
	jne Block250

 Block249:
	push 0x80004003
	call _com_issue_error

 Block250:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x64]
	push eax
	neg esi
	push esi
	neg edx
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xC0],bl
	cmp word ptr [esp+0x60],si
	jne Block253

 Block251:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x2C],si
	jne Block257

 Block255:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block258:
	xor esi,esi

 Block259:
	push esi
	mov ecx,ebp
	call CUIMessenger::SetShowState
	inc esi
	cmp esi,3
	jl Block259

 Block260:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0xC4],2
	call edx
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	test eax,eax
	je Block262

 Block261:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block262:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret
}
}
// CUIMessenger::DrawTextA
_SUB_EXCEPTION_HANDLER(3F2A90)
__SUB_CLASS_THIS(003F2A90, __thiscall, 56073,  CUIMessenger, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F2A90
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
	mov eax,dword ptr [esi+0xD8]
	mov ecx,dword ptr [eax+0x38]
	xor ebp,ebp
	cmp dword ptr [esi+0x84],ebp
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x14],ebp
	jle Block22

 Block1:
	lea edi,[ecx*8]
	mov bl,2
	jmp Block3

 Block3:
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block22

 Block4:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax-4]
	add edx,ecx
	cmp edx,eax
	jae Block22

 Block5:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block20

 Block6:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block20

 Block7:
	mov eax,dword ptr [esp+0x54]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push eax
	mov eax,dword ptr [esi+0x94]
	push ecx
	add eax,edi
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [esi+0x94]
	mov ecx,dword ptr [eax+edi+4]
	add eax,edi
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x64],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],4
	test ecx,ecx
	je Block21

 Block8:
	mov eax,dword ptr [esi+0x80]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFA1
	add eax,0x9B
	add eax,ebp
	push eax
	push 0xC
	mov byte ptr [esp+0x64],5
	call IWzFont::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],1
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],0
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add edi,8
	add ebp,0x10
	cmp eax,dword ptr [esi+0x84]
	mov dword ptr [esp+0x14],eax
	jge Block22

 Block19:
	mov ecx,dword ptr [esp+0x1C]
	jmp Block3

 Block20:
	push eax
	call _com_issue_error

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
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
// CUIMessenger::ProcessChat
_SUB_EXCEPTION_HANDLER(3F6140)
__SUB_CLASS_THIS0(003F6140, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F6140
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0xD0]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block21

 Block1:
	cmp byte ptr [eax],0
	je Block21

 Block2:
	cmp dword ptr [esi+0x13C],0
	jl Block21

 Block3:
	mov ecx,dword ptr [esi+0xD0]
	push 0
	call CCtrlEdit::SetText
	mov ecx,dword ptr [esp+0xC]
	cmp byte ptr [ecx],0x2F
	jne Block6

 Block4:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIMessenger::HandleSlashCommand
	test eax,eax
	je Block16

 Block5:
	jmp Block20

 Block6:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esi+0x140]
	mov dword ptr [esi+0x88],0
	call CChatHelper::TryChat
	test eax,eax
	je Block16

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x20CC]
	test edx,edx
	je Block9

 Block8:
	add edx,4
	jmp Block10

 Block9:
	xor edx,edx

 Block10:
	mov dword ptr [esp+0x10],0
	test edx,edx
	je Block14

 Block11:
	mov eax,edx
	lea edi,[eax+1]
	lea esp,[esp]

 Block12:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block12

 Block13:
	sub eax,edi
	mov edi,eax
	push edi
	push edx
	push 0
	push edi
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer

 Block14:
	lea edx,[esp+0xC]
	push edx
	push offset _S___6
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],1
	call ZXString<char>::op_add_assign_t_1
	mov ecx,eax
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esi+0x13C]
	push eax
	mov eax,dword ptr [esp+0x14]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xFFFFFFFF
	push eax
	mov dword ptr [ecx],0
	call ZXString16::AssignCharStr
	mov ecx,esi
	call CUIMessenger::AddChatText
	push 0x8F
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],1
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0xD0]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	add eax,4
	push eax
	call CWndMan::SetFocus

 Block18:
	mov esi,dword ptr [esi+0xC0]
	test esi,esi
	je Block20

 Block19:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax

 Block20:
	mov eax,dword ptr [esp+0xC]

 Block21:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x28
	ret
}
}
// CUIMessenger::OnBlocked
_SUB_EXCEPTION_HANDLER(3F51A0)
__SUB_CLASS_THIS(003F51A0, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F51A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x24]
	lea eax,[esp+8]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x24],0
	mov byte ptr [esp+0x1C],1
	lea ecx,[esp+0xC]
	test eax,eax
	je Block2

 Block1:
	push 0x31A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],2
	jmp Block3

 Block2:
	push 0x31B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],3

 Block3:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFFFFFFFF
	push esi
	mov dword ptr [ecx],0
	call ZXString16::AssignCharStr
	mov ecx,dword ptr [TSingleton<CUIMessenger>::ms_pInstance]
	call CUIMessenger::AddChatText
	mov byte ptr [esp+0x1C],0
	test esi,esi
	je Block7

 Block6:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret 4
}
}
// CUIMessenger::SetAvatar
_SUB_EXCEPTION_HANDLER(3F0880)
__SUB_CLASS_THIS(003F0880, __thiscall, 56072,  CUIMessenger, void, long, const AvatarLook&, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x60]
	sub esp,0x60
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F0880
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x5C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+4],ecx
	mov eax,dword ptr [ebp+0x68]
	shl eax,5
	cmp dword ptr [eax+ecx+0xE0],0
	lea eax,[eax+ecx+0xDC]
	mov dword ptr [ebp+0x44],eax
	je Block2

 Block1:
	cmp dword ptr [ebp+0x70],0
	je Block266

 Block2:
	cmp dword ptr [eax+0x10],0
	je Block266

 Block3:
	mov esi,dword ptr [ebp+0x44]
	mov ecx,esi
	call ZRef<CAvatar>::_Alloc
	mov ecx,dword ptr [ebp+0x68]
	mov ebx,dword ptr [ebp+4]
	imul ecx,0x5C
	push 0
	push 0x64
	push 0x75
	add ecx,0x3A
	push ecx
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [ebp],esp
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	lea eax,[ebp+0x58]
	push eax
	mov ecx,ebx
	mov dword ptr [ebp-4],0
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+8],esp
	push eax
	mov byte ptr [ebp-4],1
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [ebp+0x6C]
	push 5
	push edx
	mov byte ptr [ebp-4],2
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
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
	mov eax,dword ptr [esi+0x1C]
	lea edx,[ebp+0x48]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-4],3
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block9

 Block8:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [ebx+0x9C]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov byte ptr [ebp-4],3
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x48],8
	lea edi,[eax+5]
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov esi,dword ptr [ebx+0x9C]
	test esi,esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[ebp+0x58]
	push eax
	xor ebx,ebx
	push esi
	mov dword ptr [ebp+0x58],ebx
	call ecx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov dword ptr [ebp+0x10],ebx
	lea edx,[ebp+0x58]
	push 0x3D0
	push edx
	mov dword ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp+0x10]
	push ecx
	push eax
	mov byte ptr [ebp-4],6
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov dword ptr [ebp+8],ebx
	lea edx,[ebp+0x58]
	push 0x19AF
	push edx
	mov byte ptr [ebp-4],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+8]
	push edx
	mov byte ptr [ebp-4],8
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],7
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[ebp-0x50]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp-0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [ebp+8]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0xA
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+8]
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x30]
	push edx
	lea eax,[ebp-0x50]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0xC]
	mov dword ptr [ebp+0xC],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x60],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x50],si
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x30],si
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	call esi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[ebp+0x48]
	mov bl,0x11
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov esi,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x12
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp]
	push edx
	push esi
	mov dword ptr [ebp],0
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [ebp]
	lea edx,[ebp+0x58]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block54

 Block53:
	mov ecx,dword ptr [ebp+0xC]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block54:
	mov ecx,dword ptr [ebp+0x10]
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[ebp+0x34]
	push edx
	mov edx,dword ptr [ebp+0x58]
	lea eax,[ebp+0x48]
	push eax
	push esi
	push edx
	call IWzCanvas::Create
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],bl
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov esi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x34],si
	jne Block63

 Block61:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov ecx,3
	mov word ptr [ebp+0x34],cx
	mov dword ptr [ebp+0x3C],0xFF
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov eax,dword ptr [ebp+0xC]
	lea edx,[ebp+0x34]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x34],si
	jne Block69

 Block67:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call esi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea edx,[ebp+0x34]
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x34]
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
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x9C]
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	mov edx,dword ptr [ebp+0x44]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block76

 Block75:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x2D
	push 2
	sub edx,eax
	push edx
	mov byte ptr [ebp-4],0x15
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],bl
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x10
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	lea ecx,[ebp+0x48]
	push ecx
	call esi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov eax,3
	mov word ptr [ebp+0x34],ax
	mov dword ptr [ebp+0x3C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x58]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ebp+0x44]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+8]
	cmp esi,eax
	je Block95

 Block91:
	mov dword ptr [edi+8],eax
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block93:
	test esi,esi
	je Block95

 Block94:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block95:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x34],si
	jne Block100

 Block98:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x48],si
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov ecx,dword ptr [ebp+4]
	lea edx,[ebp+0x58]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x19
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block107:
	mov esi,dword ptr [edi+8]
	mov byte ptr [ebp-4],0x1A
	test esi,esi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block111:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],bl
	jne Block114

 Block112:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	mov esi,dword ptr [edi+8]
	test esi,esi
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 5
	push esi
	call ecx
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	mov ecx,dword ptr [edi+4]
	lea edx,[ebp+0x58]
	push edx
	call CAvatar::GetOrigin
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block123

 Block122:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block123:
	mov esi,dword ptr [edi+8]
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block127

 Block126:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block127:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],bl
	jne Block130

 Block128:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	mov esi,dword ptr [edi+8]
	test esi,esi
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block137:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push edx
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call edi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0x1E
	call edi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea ecx,[ebp+0x34]
	mov bl,0x20
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax+8]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x14]
	push eax
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [ebp+0x10]
	lea edx,[ebp+0x34]
	push edx
	push eax
	lea edx,[ebp-0x1C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x1C],8
	jne Block156

 Block150:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block152:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block153:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],bl
	jne Block157

 Block154:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block158

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block156:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	jmp Block153

 Block157:
	lea eax,[ebp+0x34]
	push eax
	call esi

 Block158:
	mov ebx,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x48],bx
	jne Block161

 Block159:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[ebp+0x48]
	push edx
	call esi

 Block162:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x40],bx
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[ebp-0x40]
	push ecx
	call esi

 Block166:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x14],bx
	jne Block169

 Block167:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[ebp+0x14]
	push eax
	call esi

 Block170:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x24],bx
	jne Block173

 Block171:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea edx,[ebp+0x24]
	push edx
	call esi

 Block174:
	lea eax,[ebp+0x14]
	push eax
	call edi
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	lea edx,[ebp+0x24]
	mov bl,0x22
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	mov ecx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ecx+8]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp+0x24]
	push eax
	push 3
	push 0xFFFFFFD1
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],bl
	jne Block183

 Block181:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[ebp+0x24]
	push edx
	call esi

 Block184:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x10
	jne Block187

 Block185:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea ecx,[ebp+0x14]
	push ecx
	call esi

 Block188:
	lea edx,[ebp+0x14]
	push edx
	call edi
	lea eax,[ebp+0x14]
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
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x24
	call edi
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block192

 Block191:
	push eax
	call _com_issue_error

 Block192:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x64],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x14]
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	mov bl,0x27
	push offset _S_UIUIWINDOW2IMGME
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x28
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block197

 Block195:
	cmp eax,0x80004002
	je Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x2A
	call CAnimationDisplayer::LoadLayer_0
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0xC]
	add esp,0x28
	cmp esi,eax
	je Block202

 Block198:
	mov dword ptr [ecx+0xC],eax
	test eax,eax
	je Block200

 Block199:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block200:
	test esi,esi
	je Block202

 Block201:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block202:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block204

 Block203:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block204:
	mov esi,8
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x1C],si
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp+0x24],si
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x14],si
	jne Block215

 Block213:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block216:
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,dword ptr [ebp+4]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x2B
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x48],dx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block218

 Block217:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block218:
	mov eax,dword ptr [ebp+0x44]
	mov esi,dword ptr [eax+0xC]
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block222

 Block221:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block222:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],bl
	jne Block225

 Block223:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block228

 Block227:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block228:
	mov ebx,dword ptr [ebp+0x44]
	mov esi,dword ptr [ebx+0xC]
	test esi,esi
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 5
	push esi
	call ecx
	test eax,eax
	jge Block232

 Block231:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block232:
	mov ecx,dword ptr [ebx+4]
	lea edx,[ebp+0x58]
	push edx
	call CAvatar::GetOrigin
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x2D
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block234

 Block233:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block234:
	mov esi,dword ptr [ebx+0xC]
	mov byte ptr [ebp-4],0x2E
	test esi,esi
	jne Block236

 Block235:
	push 0x80004003
	call _com_issue_error

 Block236:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block238

 Block237:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block238:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x2D
	jne Block241

 Block239:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	mov esi,dword ptr [ebx+0xC]
	test esi,esi
	jne Block246

 Block245:
	push 0x80004003
	call _com_issue_error

 Block246:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block248

 Block247:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block248:
	lea edx,[ebp+0x14]
	push edx
	call edi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block250

 Block249:
	push eax
	call _com_issue_error

 Block250:
	lea ecx,[ebp+0x24]
	mov bl,0x2F
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block252

 Block251:
	push eax
	call _com_issue_error

 Block252:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [ebp-4],0x30
	test ecx,ecx
	jne Block254

 Block253:
	push 0x80004003
	call _com_issue_error

 Block254:
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp+0x24]
	push eax
	push 0xFFFFFF9C
	push 0xFFFFFFD3
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x24],si
	jne Block257

 Block255:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block258:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x14],si
	jne Block261

 Block259:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block262:
	mov eax,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block264

 Block263:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block264:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block266

 Block265:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block266:
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebp+4]
	push eax
	call CUIMessenger::SetShowState
	lea esp,[ebp-0x74]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x5C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x60
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CUIMessenger::OnMouseMove
_SUB_EXCEPTION_HANDLER(3F0600)
__SUB_CLASS_THIS(003F0600, __thiscall, 56057,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F0600
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
	mov esi,ecx
	cmp dword ptr [esi+0x7C],0
	jne Block16

 Block1:
	lea eax,[esi+0xDC]
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x14],eax

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block14

 Block3:
	push 1
	lea edx,[esp+0x30]
	push edx
	call CAvatar::GetBodyRect
	lea eax,[esp+0x28]
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov ebp,eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x48],0
	call CWnd::GetLayer
	mov ebx,eax
	mov edi,dword ptr [ebp]
	mov byte ptr [esp+0x44],1
	test edi,edi
	je Block18

 Block4:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push edi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [ebx]
	mov ebp,dword ptr [esp+0x1C]
	test edi,edi
	je Block18

 Block7:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x20]
	push eax
	push edi
	mov dword ptr [esp+0x28],0
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov edx,dword ptr [esp+0x20]
	neg ebp
	push ebp
	neg edx
	push edx
	lea eax,[esp+0x34]
	push eax
	call OffsetRect
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov ebp,dword ptr [esp+0x50]
	mov edi,dword ptr [esp+0x4C]
	push ebp
	push edi
	lea eax,[esp+0x34]
	push eax
	call PtInRect
	test eax,eax
	jne Block19

 Block14:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0x20
	inc eax
	cmp eax,3
	mov dword ptr [esp+0x18],eax
	jl Block2

 Block15:
	lea ecx,[esi+0x168]
	call CUIToolTip::ClearToolTip

 Block16:
	xor eax,eax

 Block17:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 8

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	xor ebx,ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x44],2
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x50],ebx
	mov eax,dword ptr [esp+0x18]
	shl eax,5
	mov ecx,dword ptr [eax+esi+0xF0]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0x48],4
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x50]
	call ZXString<char>::AssignCStr
	push 1
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x5C]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call separate_channelName
	mov eax,dword ptr [esp+0x60]
	mov edx,dword ptr [esi]
	add esp,0x10
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0x168]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],3
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,1
	jmp Block17
}
}
// CUIMessenger::StartBlink
__SUB_CLASS_THIS(003EFBA0, __thiscall, 56075,  CUIMessenger, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block3

 Block1:
	cmp dword ptr [ecx+0x90],0
	jg Block5

 Block2:
	mov dword ptr [ecx+0x90],0x1E
	ret 4

 Block3:
	cmp dword ptr [ecx+0x90],0
	jle Block5

 Block4:
	mov dword ptr [ecx+0x90],0

 Block5:
	ret 4
}
}
// CUIMessenger::OnButtonClicked
__SUB_CLASS_THIS(003F6380, __thiscall, 56055,  CUIMessenger, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	cmp eax,4
	ja Block7

 Block1:
	push esi
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


 Block2:
	call CUIMessenger::TryDelete
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [ecx+0x80]
	inc eax
	cdq
	mov esi,3
	idiv esi
	pop esi
	mov dword ptr [esp+4],edx
	jmp  CUIMessenger::SetState

 Block4:
	mov eax,dword ptr [ecx+0x80]
	dec eax
	cdq
	mov esi,3
	idiv esi
	pop esi
	mov dword ptr [esp+4],edx
	jmp  CUIMessenger::SetState

 Block5:
	call CUIMessenger::ProcessChat
	pop esi
	ret 4

 Block6:
	call CUIMessenger::SendClaim
	pop esi

 Block7:
	ret 4
}
}
// CUIMessenger::HitTest
__SUB_CLASS_THIS(003EFAD0, __thiscall, 56056,  CUIMessenger, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	push edi
	push ebx
	push eax
	mov esi,ecx
	call CWnd::HitTest
	test eax,eax
	je Block6

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block6

 Block3:
	test ebx,ebx
	jl Block5

 Block4:
	mov ecx,dword ptr [esi+0x80]
	sub ecx,2
	neg ecx
	sbb ecx,ecx
	and ecx,0x25
	add ecx,0xD
	cmp ebx,ecx
	mov eax,1
	jl Block6

 Block5:
	mov eax,2

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIMessenger::CUIMessenger
_SUB_EXCEPTION_HANDLER(3F3DE0)
__SUB_CLASS_THIS(003F3DE0, __thiscall, 56048,  CUIMessenger, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F3DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea ebx,[esi+0x80]
	mov dword ptr [esp+0x24],edi
	cmp ebx,edi
	je Block2

 Block1:
	lea eax,[ebx-0x80]
	mov dword ptr [TSingleton<CUIMessenger>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMessenger>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMessenger::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMessenger::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMessenger::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD8],edi
	push offset CUIMessenger::CHARACTER::~CHARACTER
	push offset CUIMessenger::CHARACTER::_ctor_default
	push 3
	push 0x20
	lea ecx,[esi+0xDC]
	push ecx
	mov byte ptr [esp+0x38],0xC
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0x140]
	mov byte ptr [esp+0x24],0xD
	call CChatHelper::_ctor_default
	lea ecx,[esi+0x16C]
	mov byte ptr [esp+0x24],0xE
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xBB4],edi
	mov dword ptr [esi+0xBB8],edi
	mov dword ptr [esi+0xBBC],edi
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esi+0xBC4],edi
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebx
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 8
	mov byte ptr [esp+0x34],0x10
	call CConfig::GetUIWndPos
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x14]
	push edi
	push 1
	push ecx
	push 1
	push 0xA
	push edi
	push edi
	push edx
	push eax
	mov ecx,esi
	mov dword ptr [ebx],edi
	call CWnd::CreateWnd
	mov dword ptr [esi+0x88],edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUIMessenger::TryDelete
__SUB_CLASS_THIS0(003F02A0, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	push esi
	push edi
	mov esi,ecx
	mov edi,eax
	jne Block5

 Block1:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block5

 Block2:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	js Block5

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax

 Block5:
	pop edi
	pop esi
	ret
}
}
// CUIMessenger::CHARACTER::CHARACTER
_SUB_EXCEPTION_HANDLER(3F2F90)
__SUB_CLASS_THIS0(003F2F90, __thiscall, 56164,  CUIMessenger::CHARACTER, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F2F90
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0x14],3
	call CUIMessenger::CHARACTER::Clear
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMessenger::OnLeave
__SUB_CLASS_THIS(003F5E20, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CUIMessenger::OnLeave_0
	pop esi
	ret 4
}
}
// CUIMessenger::OnDestroy
_SUB_EXCEPTION_HANDLER(3F03F0)
__SUB_CLASS_THIS0(003F03F0, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F03F0
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
	mov edi,ecx
	cmp dword ptr [TSingleton<CClientSocket>::ms_pInstance],0
	je Block2

 Block1:
	push 0x8F
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [edi+0x80]
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	mov ebx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	lea esi,[edi+4]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	push eax
	push 8
	mov ecx,ebx
	call CConfig::SetUIWndPos_0
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
// CUIMessenger::TryNew
_SUB_EXCEPTION_HANDLER(3F4140)
__SUB(003F4140, __cdecl, 56051,  int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4140
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov esi,eax
	jne Block3

 Block1:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block3

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	jns Block4

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block4:
	cmp dword ptr [TSingleton<CUIMessenger>::ms_pInstance],0
	jne Block3

 Block5:
	push 0xBC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [esp+0x1C]
	push edx
	mov ecx,eax
	call CUIMessenger::_ctor_0

 Block7:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMessenger::SendClaim
_SUB_EXCEPTION_HANDLER(3F3320)
__SUB_CLASS_THIS0(003F3320, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F3320
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	xor ecx,ecx
	mov dword ptr [ebp-0x18],ecx
	mov dword ptr [ebp-4],ecx

 Block1:
	mov eax,dword ptr [ebx+0x94]
	mov dword ptr [ebp-0x1C],ecx
	test eax,eax
	je Block13

 Block2:
	cmp ecx,dword ptr [eax-4]
	jae Block13

 Block3:
	lea edi,[ecx*8]
	mov ecx,dword ptr [eax+edi+4]
	add eax,edi
	cmp ecx,0xB
	je Block6

 Block4:
	cmp ecx,6
	je Block6

 Block5:
	cmp ecx,0xD
	jne Block12

 Block6:
	mov eax,dword ptr [eax]
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
	mov eax,dword ptr [ebx+0x94]
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	add eax,edi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	xor edi,edi
	mov dword ptr [ebp-0x14],edi
	test esi,esi
	je Block10

 Block7:
	mov eax,esi
	lea edx,[eax+1]
	lea esp,[esp]

 Block8:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block8

 Block9:
	sub eax,edx
	mov edi,eax
	push edi
	push esi
	push 0
	push edi
	lea ecx,[ebp-0x14]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [ebp-0x14]

 Block10:
	lea ecx,[ebp-0x14]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[ebp-0x18]
	mov byte ptr [ebp-4],1
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block12

 Block11:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [ebp-0x1C]
	inc ecx
	jmp Block1

 Block13:
	push ecx
	mov eax,esp
	lea edx,[ebp-0x18]
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::SendClaimRequest
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	lea esp,[ebp-0x2C]
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
// CUIMessenger::OnSelfEnter
_SUB_EXCEPTION_HANDLER(3F4960)
__SUB_CLASS_THIS(003F4960, __thiscall, 56069,  CUIMessenger, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x214
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x224]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x234]
	test eax,eax
	jge Block2

 Block1:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x334
	push eax
	mov dword ptr [edi+0x13C],0
	xor ebx,ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,edi
	call CUIMessenger::AddChatText
	jmp Block3

 Block2:
	mov ebx,dword ptr [esp+0x238]
	mov dword ptr [edi+0x13C],eax

 Block3:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x23]
	mov dword ptr [esp+0x230],0
	call AvatarLook::_ctor_0
	mov ecx,dword ptr [esi+0x2060]
	mov esi,dword ptr [esi+0x20CC]
	mov byte ptr [esp+0x22C],1
	test esi,esi
	je Block5

 Block4:
	lea edx,[esi+4]
	jmp Block6

 Block5:
	xor edx,edx

 Block6:
	push ebx
	push ecx
	push edx
	mov edx,dword ptr [edi+0x13C]
	push eax
	push edx
	mov ecx,edi
	call CUIMessenger::OnEnter_0
	mov eax,dword ptr [esp+0x14]
	int 3// TODO: 	mov dword ptr [esp+0x1F],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x22C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block7:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	mov ecx,dword ptr [esp+0x224]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x220
	ret 8
}
}
// CUIMessenger::OnLeave
_SUB_EXCEPTION_HANDLER(3F4A90)
__SUB_CLASS_THIS(003F4A90, __thiscall, 56061,  CUIMessenger, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4A90
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,2
	ja Block10

 Block1:
	shl eax,5
	lea edi,[eax+esi+0xDC]
	mov dword ptr [esp+0x24],0
	lea eax,[esp+0xC]
	push 0x335
	push eax
	mov dword ptr [esp+0x24],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov byte ptr [esp+0x1C],1
	test ecx,ecx
	je Block3

 Block2:
	mov ecx,dword ptr [ecx]
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,esi
	call CUIMessenger::AddChatText
	cmp dword ptr [esi+0x80],2
	jne Block8

 Block7:
	push 1
	mov ecx,esi
	call CUIMessenger::StartBlink

 Block8:
	mov ecx,edi
	call CUIMessenger::CHARACTER::Clear
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUIMessenger::CHARACTER::Clear
__SUB_CLASS_THIS0(003F0380, __thiscall, 56166,  CUIMessenger::CHARACTER, void) {
__asm {

 Block0:
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	xor ebp,ebp
	mov dword ptr [esi+0x10],ebp
	cmp eax,ebp
	je Block5

 Block1:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	pop edi
	mov dword ptr [esi+4],ebp
	pop ebx

 Block5:
	mov eax,dword ptr [esi+8]
	cmp eax,ebp
	je Block7

 Block6:
	mov dword ptr [esi+8],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebp
	je Block9

 Block8:
	mov dword ptr [esi+0xC],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	pop esi
	pop ebp
	ret
}
}
// CUIMessenger::OnKey
_SUB_EXCEPTION_HANDLER(3F6400)
// 7F6730
static uint8_t _SUB_3F6400_LOOKUP_TABLE_0[28] = {
0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 2, 3, 2, 4, 
};
__SUB_CLASS_THIS(003F6400, __thiscall, 56053,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F6400
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
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov ecx,dword ptr [esi+0xCC]
	cmp ecx,ebp
	je Block2

 Block1:
	lea eax,[ecx+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edi,dword ptr [edx+0xA0]
	xor edx,edx
	cmp edi,eax
	sete dl
	test dword ptr [esp+0x38],0x80000000
	mov edi,edx
	jne Block26

 Block4:
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x2C],ebp
	cmp ecx,ebp
	je Block6

 Block5:
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov byte ptr [esp+0x2C],1
	mov ebx,1
	jmp Block7

 Block6:
	push ebp
	push offset _S_
	push ebp
	push ebp
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov ebx,2
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x2C],ebx

 Block7:
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x3C],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x2C],4
	test bl,2
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov byte ptr [esp+0x2C],5
	test bl,1
	je Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x34]
	add eax,0xFFFFFFF3
	cmp eax,0x1B
	ja Block23

 Block14:
	movzx ecx,byte ptr [eax+_SUB_3F6400_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block15
cmp ECX, 1
je Block27
cmp ECX, 2
je Block30
cmp ECX, 3
je Block35
cmp ECX, 4
je Block44
cmp ECX, 5
je Block23


 Block15:
	cmp edi,ebp
	je Block17

 Block16:
	lea ecx,[esi-4]
	call CUIMessenger::ProcessChat
	jmp Block23

 Block17:
	cmp dword ptr [esi+0x7C],2
	je Block23

 Block18:
	mov eax,dword ptr [esi+0xCC]
	push eax
	lea ecx,[esi-4]
	call CWnd::SetFocusChild
	mov esi,dword ptr [esi+0xCC]
	cmp esi,ebp
	je Block20

 Block19:
	lea eax,[esi+4]
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push eax

 Block22:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::SetFocus

 Block23:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],0
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFF4
	push eax

 Block25:
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8

 Block27:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0xE21
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block29

 Block28:
	lea ecx,[esi-4]
	call CUIMessenger::TryDelete
	jmp Block23

 Block29:
	push ebp
	jmp Block22

 Block30:
	mov esi,dword ptr [esp+0x38]
	cmp esi,ebp
	je Block32

 Block31:
	cmp byte ptr [esi],0
	jne Block33

 Block32:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebp
	call CWndMan::SetFocus

 Block33:
	mov byte ptr [esp+0x2C],0
	cmp esi,ebp
	je Block26

 Block34:
	add esi,0xFFFFFFF4
	push esi
	jmp Block25

 Block35:
	cmp edi,ebp
	je Block23

 Block36:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esi+0x13C]
	call CChatHelper::HistoryUp
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],5
	cmp eax,ebp
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	jne Block40

 Block39:
	mov ecx,dword ptr [esi+0xCC]
	push edi
	call CCtrlEdit::SetText

 Block40:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],0
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebp
	je Block26

 Block43:
	add edi,0xFFFFFFF4
	push edi
	jmp Block25

 Block44:
	cmp edi,ebp
	je Block23

 Block45:
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+0x13C]
	call CChatHelper::HistoryDown
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],5
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	jne Block49

 Block48:
	mov ecx,dword ptr [esi+0xCC]
	push edi
	call CCtrlEdit::SetText

 Block49:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],0
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebp
	je Block26

 Block52:
	add edi,0xFFFFFFF4
	push edi
	jmp Block25
}
}
// CUIMessenger::SetState
__SUB_CLASS_THIS(003F4200, __thiscall, 56061,  CUIMessenger, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,dword ptr [esi+0x80]
	je Block2

 Block1:
	mov dword ptr [esi+0x80],eax
	call CUIMessenger::SetLayer
	mov ecx,esi
	call CUIMessenger::SetCtrl
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block2:
	pop esi
	ret 4
}
}
// CUIMessenger::OnEnter
_SUB_EXCEPTION_HANDLER(3F5D30)
__SUB_CLASS_THIS(003F5D30, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x220]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x230]
	mov ecx,esi
	call CInPacket::Decode1
	push esi
	lea ecx,[esp+0x1C]
	movzx ebp,al
	call AvatarLook::_ctor_3
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x22C],0
	call CInPacket::DecodeStr
	mov ecx,esi
	mov byte ptr [esp+0x228],1
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+0x14]
	movzx eax,al
	push eax
	push ebx
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ebp
	mov ecx,edi
	call CUIMessenger::OnEnter_0
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x228],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x220]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x218
	ret 4
}
}
// CUIMessenger::OnSelfAvatarChanged
__SUB_CLASS_THIS(003F3490, __thiscall, 56062,  CUIMessenger, void, const AvatarLook&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x13C]
	test eax,eax
	jl Block3

 Block1:
	cmp dword ptr [ecx+0x80],0
	jne Block3

 Block2:
	mov edx,dword ptr [esp+4]
	push 1
	push edx
	push eax
	call CUIMessenger::SetAvatar

 Block3:
	ret 4
}
}
// CUIMessenger::Update
_SUB_EXCEPTION_HANDLER(3F2FF0)
__SUB_CLASS_THIS0(003F2FF0, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F2FF0
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea edi,[esi+0xE0]
	lea ebp,[ebx+3]

 Block1:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block3

 Block2:
	call CAvatar::Update

 Block3:
	add edi,0x20
	sub ebp,1
	jne Block1

 Block4:
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	jle Block6

 Block5:
	add eax,0xFFFFFFE2
	mov dword ptr [esi+0x8C],eax
	jmp Block44

 Block6:
	mov ecx,dword ptr [esi+0xD0]
	test ecx,ecx
	je Block37

 Block7:
	cmp dword ptr [esi+0x88],ebx
	je Block11

 Block8:
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,1
	test eax,eax
	je Block10

 Block9:
	cmp byte ptr [eax],0
	jne Block11

 Block10:
	mov byte ptr [esp+0x17],bl
	jmp Block12

 Block11:
	mov byte ptr [esp+0x17],0

 Block12:
	test bl,1
	je Block15

 Block13:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp byte ptr [esp+0x17],0
	je Block22

 Block16:
	push 0x8F
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	xor edi,edi
	push 6
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x4C],edi
	call COutPacket::Encode1
	push edi
	push 1
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],edi
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S_0__1]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	mov byte ptr [esp+0x48],1
	cmp eax,edi
	je Block18

 Block17:
	add eax,4
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ecx
	call __op_add_char_char
	add esp,0xC
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],0
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xC0]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x88],edi
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	lea ecx,[esp+0x24]
	jmp Block36

 Block22:
	cmp dword ptr [esi+0x88],0
	jne Block25

 Block23:
	mov ecx,dword ptr [esi+0xD0]
	lea edx,[esp+0x18]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	test eax,eax
	je Block25

 Block24:
	cmp byte ptr [eax],0
	mov byte ptr [esp+0x17],1
	jne Block26

 Block25:
	mov byte ptr [esp+0x17],0

 Block26:
	test bl,2
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	cmp byte ptr [esp+0x17],0
	je Block37

 Block30:
	push 0x8F
	lea ecx,[esp+0x34]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x4C],2
	call COutPacket::Encode1
	push 0
	push 1
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S_1__1]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	mov byte ptr [esp+0x48],3
	test eax,eax
	je Block32

 Block31:
	add eax,4
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ecx
	call __op_add_char_char
	add esp,0xC
	lea ecx,[esp+0x34]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],2
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xC0]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x88],1
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea ecx,[esp+0x34]

 Block36:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	mov dword ptr [esi+0x8C],0xBB8
	call ZArray<unsigned char>::RemoveAll

 Block37:
	cmp dword ptr [esi+0x80],2
	jne Block43

 Block38:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	jle Block43

 Block39:
	dec eax
	mov dword ptr [esi+0x90],eax
	test eax,eax
	jg Block41

 Block40:
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x90],0x1E
	call CUIMessenger::ToggleBlink
	jmp Block44

 Block41:
	cmp eax,0xF
	jne Block44

 Block42:
	push 0
	mov ecx,esi
	call CUIMessenger::ToggleBlink
	jmp Block44

 Block43:
	push 0
	mov ecx,esi
	call CUIMessenger::StartBlink

 Block44:
	mov ecx,esi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret
}
}
// CUIMessenger::OnSelfEnterResult
__SUB_CLASS_THIS(003F5E00, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movsx eax,al
	push 1
	push eax
	mov ecx,esi
	call CUIMessenger::OnSelfEnter
	pop esi
	ret 4
}
}
// CUIMessenger::OnAvatar
_SUB_EXCEPTION_HANDLER(3F2EA0)
__SUB_CLASS_THIS(003F2EA0, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F2EA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x208
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x218]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x228]
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edi,al
	cmp edi,2
	ja Block4

 Block1:
	mov eax,edi
	shl eax,5
	cmp dword ptr [eax+esi+0xEC],0
	lea eax,[eax+esi+0xDC]
	je Block4

 Block2:
	push ebx
	lea ecx,[esp+0x14]
	call AvatarLook::_ctor_3
	cmp dword ptr [esi+0x80],0
	mov dword ptr [esp+0x220],0
	jne Block4

 Block3:
	push 1
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov ecx,esi
	call CUIMessenger::SetAvatar

 Block4:
	mov ecx,dword ptr [esp+0x218]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x214
	ret 4
}
}
// CUIMessenger::SetShowState
_SUB_EXCEPTION_HANDLER(3EFCF0)
__SUB_CLASS_THIS(003EFCF0, __thiscall, 56061,  CUIMessenger, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EFCF0
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
	mov eax,ecx
	mov ecx,dword ptr [esp+0xA4]
	shl ecx,5
	lea ebp,[ecx+eax+0xDC]
	mov ecx,dword ptr [ebp+4]
	test ecx,ecx
	je Block85

 Block1:
	mov eax,dword ptr [eax+0x80]
	sub eax,0
	je Block47

 Block2:
	sub eax,1
	je Block12

 Block3:
	sub eax,1
	jne Block85

 Block4:
	push 0xFFFFFF
	call CAvatar::SetLayerColor
	mov esi,dword ptr [ebp+8]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [ebp+0xC]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block85

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex
	jmp Block85

 Block12:
	push 0xFFFFFF
	call CAvatar::SetLayerColor
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x14]
	mov ebx,4
	push edx
	mov dword ptr [esp+0xA0],ebx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [esp+0x9C],5
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFA6
	push 0xFFFFFFD1
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov esi,dword ptr [ebp+8]
	test esi,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov esi,dword ptr [ebp+0xC]
	test esi,esi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	neg eax
	sbb eax,eax
	and eax,0xCFFFFFFF
	push eax
	push esi
	call edx
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	lea eax,[esp+0x44]
	push eax
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea edx,[esp+0x34]
	mov ebx,6
	push edx
	mov dword ptr [esp+0xA0],ebx
	call edi
	lea eax,[esp+0x34]
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
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x9C],7
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0xFFFFFF85
	push 0xFFFFFFD3
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x34],si
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block46

 Block45:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	jmp Block81

 Block46:
	lea ecx,[esp+0x44]
	jmp Block84

 Block47:
	push 0xFFFFFFFF
	call CAvatar::SetLayerColor
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push edx
	call edi
	lea eax,[esp+0x64]
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
	lea ecx,[esp+0x54]
	push ecx
	mov dword ptr [esp+0xA0],0
	call edi
	lea edx,[esp+0x54]
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
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [esp+0x9C],1
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 3
	push 0xFFFFFFD1
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],0
	cmp word ptr [esp+0x54],si
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x64],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov esi,dword ptr [ebp+8]
	test esi,esi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebp+0xC]
	test esi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	neg eax
	sbb eax,eax
	and eax,0xCFFFFFFF
	push eax
	push esi
	call edx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	lea eax,[esp+0x84]
	push eax
	call edi
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[esp+0x74]
	mov ebx,2
	push edx
	mov dword ptr [esp+0xA0],ebx
	call edi
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x9C],3
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x78]
	push eax
	push 0xFFFFFF9C
	push 0xFFFFFFD3
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x74],si
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x84],si
	jne Block83

 Block80:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]

 Block81:
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	lea ecx,[esp+0x84]

 Block84:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4
}
}
// CUIMessenger::SetCtrl
_SUB_EXCEPTION_HANDLER(3F34C0)
__SUB_CLASS_THIS0(003F34C0, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F34C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA8]
	xor ebx,ebx
	cmp ecx,ebx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xA8],ebx
	lea edi,[esi+0xA4]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov ecx,dword ptr [esi+0xB0]
	cmp ecx,ebx
	je Block6

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xB0],ebx
	lea edi,[esi+0xAC]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,dword ptr [esi+0xB8]
	cmp ecx,ebx
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xB8],ebx
	lea edi,[esi+0xB4]
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	mov ecx,dword ptr [esi+0xD8]
	cmp ecx,ebx
	je Block12

 Block10:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xD8],ebx
	lea edi,[esi+0xD4]
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,dword ptr [esi+0xD0]
	cmp ecx,ebx
	je Block15

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xD0],ebx
	lea edi,[esi+0xCC]
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	mov ecx,dword ptr [esi+0xC8]
	cmp ecx,ebx
	je Block18

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xC8],ebx
	lea edi,[esi+0xC4]
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	mov ecx,dword ptr [esi+0xC0]
	cmp ecx,ebx
	je Block21

 Block19:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xC0],ebx
	lea edi,[esi+0xBC]
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	mov eax,dword ptr [esi+0x80]
	mov edi,eax
	sub edi,2
	neg edi
	sbb edi,edi
	sub eax,2
	and edi,0x55
	add edi,0xBF
	neg eax
	sbb eax,eax
	and eax,3
	add eax,3
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x68],1
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x20]
	push 0x1962
	push eax
	mov dword ptr [esp+0xC8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0xC4],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0xC0],2
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block40

 Block27:
	add eax,8
	cmp eax,ebx
	je Block40

 Block28:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block30

 Block29:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],ebp
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block32

 Block31:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 2
	push eax
	push edi
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x80]
	sub eax,ebx
	je Block50

 Block33:
	sub eax,1
	je Block41

 Block34:
	sub eax,1
	jne Block60

 Block35:
	push ebx
	push ebx
	push ebx
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGME__16
	lea eax,[esp+0x2C]
	lea edi,[esi+0xBB4]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0xC4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x1C],ebx
	je Block37

 Block36:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block37:
	push ebx
	push ebx
	push ebx
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGME__15
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0xC4],0xC
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x24],ebx
	je Block39

 Block38:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x24],ebx

 Block39:
	mov ecx,dword ptr [esi+0xB0]
	add ecx,4
	jmp Block59

 Block40:
	xor ebp,ebp
	jmp Block30

 Block41:
	push ebx
	push ebx
	push ebx
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGME__14
	lea ecx,[esp+0x5C]
	lea edi,[esi+0xBB4]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0xC4],7
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x4C],ebx
	je Block43

 Block42:
	push ebx
	lea ecx,[esp+0x4C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x4C],ebx

 Block43:
	push ebx
	push ebx
	push ebx
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGME__13
	lea edx,[esp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0xC4],8
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x54],ebx
	je Block45

 Block44:
	push ebx
	lea ecx,[esp+0x54]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x54],ebx

 Block45:
	push ebx
	push ebx
	push ebx
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGME__12
	lea eax,[esp+0x6C]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0xC4],9
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x5C],ebx
	je Block47

 Block46:
	push ebx
	lea ecx,[esp+0x5C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x5C],ebx

 Block47:
	push ebx
	push ebx
	push ebx
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGME__11
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0xC4],0xA
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x34],ebx
	je Block49

 Block48:
	push ebx
	lea ecx,[esp+0x34]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x34],ebx

 Block49:
	mov ecx,dword ptr [esi+0xC0]
	add ecx,4
	jmp Block59

 Block50:
	push ebx
	push ebx
	push ebx
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGME__10
	lea ecx,[esp+0x74]
	lea edi,[esi+0xBB4]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0xC4],3
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x64],ebx
	je Block52

 Block51:
	push ebx
	lea ecx,[esp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x64],ebx

 Block52:
	push ebx
	push ebx
	push ebx
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGME__9
	lea edx,[esp+0x4C]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0xC4],4
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x3C],ebx
	je Block54

 Block53:
	push ebx
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x3C],ebx

 Block54:
	push ebx
	push ebx
	push ebx
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGME__8
	lea eax,[esp+0x54]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0xC4],5
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x44],ebx
	je Block56

 Block55:
	push ebx
	lea ecx,[esp+0x44]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x44],ebx

 Block56:
	push ebx
	push ebx
	push ebx
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGME__7
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0xC4],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0xC0],bl
	cmp dword ptr [esp+0x2C],ebx
	je Block58

 Block57:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x2C],ebx

 Block58:
	mov eax,dword ptr [esi+0xB8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xC0]
	lea ecx,[eax+4]

 Block59:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block60:
	lea ecx,[esp+0x78]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x20]
	push 0x1A25
	or ebp,0xFFFFFFFF
	push ecx
	mov byte ptr [esp+0xC8],0xD
	mov dword ptr [esp+0xA4],ebp
	mov dword ptr [esp+0x9C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x8C]
	cmp edx,edi
	je Block65

 Block61:
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,ebx
	je Block63

 Block62:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x8C],ebx

 Block63:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x8C],eax
	cmp eax,ebx
	je Block65

 Block64:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebx
	je Block67

 Block66:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],ebx

 Block67:
	mov eax,2
	mov edx,eax
	mov dword ptr [esp+0x7C],eax
	mov eax,dword ptr [esi+0x80]
	sub eax,ebx
	mov ecx,ebp
	mov edi,1
	mov dword ptr [esp+0x80],ecx
	mov dword ptr [esp+0x84],edx
	mov dword ptr [esp+0x88],edi
	mov dword ptr [esp+0xA8],0x100
	je Block81

 Block68:
	sub eax,edi
	je Block71

 Block69:
	sub eax,edi
	jne Block91

 Block70:
	mov dword ptr [esi+0x84],ebx
	jmp Block91

 Block71:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0x84],8
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xC0],0x10
	cmp eax,ebx
	je Block73

 Block72:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	push eax
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0xC4],0xD
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push ebx
	push 0x81
	push 0x39
	push 0x113
	push 8
	push 1
	push 0x3EE
	push esi
	call edx
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block76

 Block75:
	xor eax,eax
	jmp Block77

 Block76:
	mov eax,dword ptr [eax-4]

 Block77:
	sub eax,dword ptr [esi+0x84]
	mov ecx,dword ptr [esi+0xD8]
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xD8]
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0xFA
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xC0],0x11
	cmp eax,ebx
	je Block79

 Block78:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block80

 Block79:
	xor eax,eax

 Block80:
	push eax
	lea ecx,[esi+0xCC]
	mov byte ptr [esp+0xC4],0xD
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x78]
	push edx
	push 0xD
	push 0xD4
	push 0xC3
	push 0xB
	push 0x3ED
	push esi
	call eax
	jmp Block91

 Block81:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0x84],9
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xC0],0xE
	cmp eax,ebx
	je Block83

 Block82:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block84

 Block83:
	xor eax,eax

 Block84:
	push eax
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0xC4],0xD
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x94
	push 0x96
	push 0x113
	push 8
	push 1
	push 0x3EE
	push esi
	call eax
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block86

 Block85:
	xor eax,eax
	jmp Block87

 Block86:
	mov eax,dword ptr [eax-4]

 Block87:
	sub eax,dword ptr [esi+0x84]
	mov ecx,dword ptr [esi+0xD8]
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xD8]
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0xFA
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xC0],0xF
	cmp eax,ebx
	je Block89

 Block88:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block90

 Block89:
	xor eax,eax

 Block90:
	push eax
	lea ecx,[esi+0xCC]
	mov byte ptr [esp+0xC4],0xD
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x78]
	push eax
	push 0xD
	push 0xD4
	push 0x133
	push 0xB
	push 0x3ED
	push esi
	call edx

 Block91:
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0xC0],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0xC0],ebp
	cmp eax,ebx
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block93:
	mov ecx,dword ptr [esp+0xB8]
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
// CUIMessenger::DrawStatusBar
_SUB_EXCEPTION_HANDLER(3F4BA0)
__SUB_CLASS_THIS(003F4BA0, __thiscall, 56073,  CUIMessenger, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0x6C],1
	lea edi,[esi+0xF8]
	mov dword ptr [esp+0x1C],3
	lea esp,[esp]

 Block1:
	cmp dword ptr [edi-0xC],ebx
	je Block16

 Block2:
	cmp dword ptr [edi-8],ebx
	je Block16

 Block3:
	cmp ebp,ebx
	je Block10

 Block4:
	cmp word ptr [ebp],bx
	je Block10

 Block5:
	push 0xFFFFFFFF
	push offset _S___31
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString16::AssignCharStr
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],2
	cmp esi,ebx
	je Block7

 Block6:
	mov eax,dword ptr [esi-4]
	shr eax,1
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push eax
	push esi
	lea ecx,[esp+0x1C]
	call ZXString16::_Cat
	mov byte ptr [esp+0x6C],1
	cmp esi,ebx
	je Block10

 Block9:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	jmp Block13

 Block12:
	xor edx,edx

 Block13:
	mov eax,edx
	lea esi,[eax+2]

 Block14:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block14

 Block15:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::_Cat
	mov ebp,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x24]

 Block16:
	add edi,0x20
	sub dword ptr [esp+0x1C],1
	jne Block1

 Block17:
	cmp ebp,ebx
	je Block68

 Block18:
	cmp word ptr [ebp],bx
	je Block68

 Block19:
	lea eax,[esp+0x20]
	push 0x338
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x6C],3
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block22

 Block21:
	xor ecx,ecx

 Block22:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],1
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	lea ecx,[esp+0x18]
	push 0x14
	push ecx
	call get_basic_font
	add esp,8
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x6C],5
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x34],bx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[esp+0x44]
	push ecx
	push 0xFC
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x7C],8
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],9
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov byte ptr [esp+0x78],8
	call IWzFont::CalcLongestText
	mov edi,eax
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x44],bx
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[esp+0x54]
	push ecx
	call esi
	lea edx,[esp+0x54]
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
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],0xA
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	push edi
	lea edx,[esp+0x3C]
	push edx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x80],0xB
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0x7C],0xD
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x2C]
	push ecx
	push esi
	mov dword ptr [esp+0x34],0
	call edx
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x2C]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	mov ecx,dword ptr [esp+0x84]
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov eax,0x11
	sub eax,dword ptr [esp+0x30]
	neg edi
	push edi
	push eax
	mov byte ptr [esp+0x84],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],0xB
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	mov edi,8
	mov byte ptr [esp+0x6C],0xA
	cmp word ptr [esp+0x44],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x54],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,dword ptr [esp+0x24]
	push 1
	call CUIMessenger::ToggleBlink
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x70],4
	call eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	xor ebx,ebx

 Block63:
	mov byte ptr [esp+0x6C],0
	cmp ebp,ebx
	je Block65

 Block64:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4

 Block68:
	push ebx
	mov ecx,esi
	call CUIMessenger::ToggleBlink
	jmp Block63
}
}
// CUIMessenger::OnMigrated
_SUB_EXCEPTION_HANDLER(3F5720)
__SUB_CLASS_THIS(003F5720, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5720
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x210
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x220]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [esp+0x230]
	lea eax,[ebp+0xDC]
	xor edi,edi
	mov dword ptr [esp+0x10],eax

 Block1:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jne Block3

 Block2:
	mov ecx,dword ptr [esp+0x10]
	call CUIMessenger::CHARACTER::Clear
	jmp Block7

 Block3:
	cmp eax,1
	je Block7

 Block4:
	push esi
	lea ecx,[esp+0x1C]
	call AvatarLook::_ctor_3
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x22C],0
	call CInPacket::DecodeStr
	mov ecx,esi
	mov byte ptr [esp+0x228],1
	call CInPacket::Decode1
	mov edx,dword ptr [esp+0x14]
	movzx eax,al
	push 0
	push eax
	push edx
	lea eax,[esp+0x24]
	push eax
	push edi
	mov ecx,ebp
	call CUIMessenger::OnEnter_0
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x228],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x228],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZRefCounted::`vftable'

 Block7:
	add dword ptr [esp+0x10],0x20
	inc edi
	cmp edi,3
	jl Block1

 Block8:
	mov ecx,dword ptr [esp+0x220]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x21C
	ret 4
}
}
// CUIMessenger::~CUIMessenger
_SUB_EXCEPTION_HANDLER(3F3F70)
__SUB_CLASS_THIS0(003F3F70, __thiscall, 56050,  CUIMessenger, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F3F70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMessenger::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMessenger::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMessenger::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xBB4]
	mov dword ptr [esp+0x1C],0xF
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x16C]
	mov byte ptr [esp+0x1C],0xE
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x140]
	mov byte ptr [esp+0x1C],0xD
	call CChatHelper::~CChatHelper
	push offset CUIMessenger::CHARACTER::~CHARACTER
	push 3
	push 0x20
	lea eax,[esi+0xDC]
	push eax
	mov byte ptr [esp+0x2C],0xC
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xD4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0xB
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xCC]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x1C],1
	call ZArray<CUIMessenger::ChatTextInfo>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMessenger>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIMessenger::OnMouseEnter
__SUB_CLASS_THIS(003EFB30, __thiscall, 56058,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CWnd::OnMouseEnter
	test edi,edi
	jne Block2

 Block1:
	lea ecx,[esi+0x168]
	call CUIToolTip::ClearToolTip

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CUIMessenger::AddChatText
_SUB_EXCEPTION_HANDLER(3F4250)
__SUB_CLASS_THIS(003F4250, __thiscall, 56079,  CUIMessenger, void, NakedParam<ZXString16>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4250
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esi+0xD8]
	xor ebx,ebx
	mov dword ptr [esp+0x50],ebx
	cmp eax,ebx
	je Block5

 Block1:
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	sub eax,dword ptr [esi+0x84]
	mov dword ptr [esp+0x20],1
	cmp ecx,eax
	jae Block6

 Block5:
	mov dword ptr [esp+0x20],ebx

 Block6:
	mov eax,dword ptr [esp+0x5C]
	inc eax
	cmp eax,3
	ja Block11

 Block7:
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10


 Block8:
	mov dword ptr [esp+0x5C],0x20
	jmp Block12

 Block9:
	mov dword ptr [esp+0x5C],0x22
	jmp Block12

 Block10:
	mov dword ptr [esp+0x5C],0x2A
	jmp Block12

 Block11:
	mov dword ptr [esp+0x5C],0x14

 Block12:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x20],1
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S___30
	mov byte ptr [esp+0x5C],1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x98]
	mov byte ptr [esp+0x58],2
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov byte ptr [esp+0x58],1
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x50],bl
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block69

 Block21:
	jmp Block23

 Block22:
	mov esi,dword ptr [esp+0x14]

 Block23:
	mov edx,dword ptr [esp+0x1C]
	neg edx
	sbb edx,edx
	not edx
	and edx,dword ptr [esp+0x28]
	lea ecx,[esp+0x38]
	push ecx
	mov eax,0xF0
	sub eax,edx
	mov edx,dword ptr [esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x60],3
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x98]
	mov byte ptr [esp+0x5C],4
	cmp ecx,ebx
	je Block15

 Block24:
	mov byte ptr [esp+0x5C],3
	call IWzFont::CalcLongestTextForGlobal
	cmp word ptr [esp+0x38],8
	mov ebp,eax
	mov dword ptr [esp+0x24],ebp
	mov byte ptr [esp+0x50],bl
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	lea ecx,[esi+0x94]
	push 0xFFFFFFFF
	call ZArray<CUIMessenger::ChatTextInfo>::InsertBefore
	mov edi,eax
	cmp dword ptr [esp+0x1C],ebx
	jne Block45

 Block29:
	push ebx
	push 4
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString16::GetBuffer
	mov edx,dword ptr [_S___30]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S___30+4]
	mov dword ptr [eax+4],ecx
	push 4
	lea ecx,[esp+0x1C]
	call ZXString16::ReleaseBuffer
	push ebp
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x58],5
	call ZXString16::Left
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x50],6
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block32

 Block31:
	xor ecx,ecx

 Block32:
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x50],5
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	jne Block37

 Block35:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block40

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [edi],ebx
	jmp Block40

 Block37:
	mov eax,ebp
	lea edx,[eax+2]

 Block38:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block38

 Block39:
	sub eax,edx
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push ebp
	push ebx
	push esi
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString16::ReleaseBuffer

 Block40:
	mov byte ptr [esp+0x50],bl
	cmp ebp,ebx
	je Block42

 Block41:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x24]

 Block43:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr [edi+4],ecx
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block53

 Block44:
	xor eax,eax
	jmp Block54

 Block45:
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x60]
	call ZXString16::Left
	mov edx,dword ptr [eax]
	mov byte ptr [esp+0x50],7
	cmp edx,ebx
	jne Block48

 Block46:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block51

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [edi],ebx
	jmp Block51

 Block48:
	mov eax,edx
	lea esi,[eax+2]

 Block49:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block49

 Block50:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push ebx
	push esi
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block51:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block43

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block43

 Block53:
	mov eax,dword ptr [eax-4]

 Block54:
	cmp eax,dword ptr [esi+0x84]
	jne Block56

 Block55:
	mov dword ptr [esp+0x20],1

 Block56:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block58

 Block57:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block59

 Block58:
	xor eax,eax

 Block59:
	sub eax,ebp
	push eax
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esp+0x60]
	call ZXString16::Right
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block62

 Block60:
	cmp word ptr [eax],bx
	je Block62

 Block61:
	xor esi,esi
	jmp Block63

 Block62:
	mov esi,1

 Block63:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	cmp esi,ebx
	jne Block70

 Block66:
	cmp dword ptr [esp+0x1C],ebx
	je Block68

 Block67:
	mov dword ptr [esp+0x1C],ebx

 Block68:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0xD8]
	cmp ecx,ebx
	je Block77

 Block71:
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block73

 Block72:
	xor eax,eax
	jmp Block74

 Block73:
	mov eax,dword ptr [eax-4]

 Block74:
	sub eax,dword ptr [esi+0x84]
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	cmp dword ptr [esp+0x20],ebx
	je Block77

 Block75:
	mov ecx,dword ptr [esi+0xD8]
	cmp dword ptr [ecx+0x3C],1
	jle Block77

 Block76:
	mov eax,dword ptr [ecx+0x3C]
	dec eax
	push eax
	call CCtrlScrollBar::SetCurPos

 Block77:
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
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
// CUIMessenger::OnCreate
_SUB_EXCEPTION_HANDLER(3F59D0)
__SUB_CLASS_THIS(003F59D0, __thiscall, 56052,  CUIMessenger, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F59D0
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
	mov esi,ecx
	push 0
	push 0
	push esi
	lea ecx,[esi+0xBB4]
	call CLayoutMan::Init
	mov ecx,esi
	call CUIMessenger::SetLayer
	mov ecx,esi
	call CUIMessenger::SetCtrl
	lea eax,[esp+0x10]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x98]
	add esp,8
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x98],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	lea ecx,[esp+0x10]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x9C]
	push edi
	push eax
	mov dword ptr [esp+0x48],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x3C],ebp
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	push ebp
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x4C],2
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov byte ptr [esp+0x4C],1
	call IWzFont::Create
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x3C],ebp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x330
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CUIMessenger::AddChatText
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x76C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CUIMessenger::AddChatText
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x331
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CUIMessenger::AddChatText
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x332
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CUIMessenger::AddChatText
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x76C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CUIMessenger::AddChatText
	mov edi,dword ptr [esp+0x44]
	test edi,edi
	jne Block19

 Block18:
	push edi
	push edi
	mov ecx,esi
	call CUIMessenger::OnSelfEnter
	jmp Block20

 Block19:
	mov dword ptr [esi+0x13C],ebp

 Block20:
	push 0x8F
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x40],3
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],ebp
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret 4
}
}
// CUIMessenger::SendInviteMsg
_SUB_EXCEPTION_HANDLER(3F5820)
__SUB_CLASS_THIS(003F5820, __thiscall, 56063,  CUIMessenger, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax+4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	cmp ecx,ebx
	je Block7

 Block4:
	mov eax,ecx
	lea esi,[eax+1]

 Block5:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block5

 Block6:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x10]

 Block7:
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block13

 Block8:
	cmp byte ptr [esi],bl
	je Block13

 Block9:
	mov ecx,dword ptr [esp+0x38]
	push ecx
	push esi
	call lstrcmpiA
	test eax,eax
	je Block13

 Block10:
	lea edx,[esp+0x38]
	push ebx
	push edx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block12

 Block11:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x337
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,edi
	call CUIMessenger::AddChatText
	mov byte ptr [esp+0x30],bl
	jmp Block14

 Block12:
	push 0x8F
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],1
	call ZArray<unsigned char>::RemoveAll
	mov byte ptr [esp+0x30],bl
	jmp Block14

 Block13:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x336
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,edi
	call CUIMessenger::AddChatText
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUIMessenger::ClearToolTip
__SUB_CLASS_THIS0(003F3F50, __thiscall, 56060,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x168
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIMessenger::OnInviteResult
_SUB_EXCEPTION_HANDLER(3F5030)
__SUB_CLASS_THIS(003F5030, __thiscall, 56067,  CUIMessenger, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5030
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0xC],0
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+0x10]
	push 0x318
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x20],2
	jmp Block9

 Block2:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block8

 Block3:
	cmp byte ptr [eax],0
	je Block8

 Block4:
	push 1
	push 0
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esp+0x2C]
	add esp,4
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer

 Block8:
	lea ecx,[esp+0x10]
	push 0x319
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x20],3

 Block9:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov esi,dword ptr [esp+0xC]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xFFFFFFFF
	push esi
	mov dword ptr [ecx],0
	call ZXString16::AssignCharStr
	mov ecx,edi
	call CUIMessenger::AddChatText
	mov byte ptr [esp+0x20],0
	test esi,esi
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// CUIMessenger::OnChildNotify
__SUB_CLASS_THIS(003EFB60, __thiscall, 56054,  CUIMessenger, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EE
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
// CUIMessenger::HandleSlashCommand
_SUB_EXCEPTION_HANDLER(3F5EE0)
__SUB_CLASS_THIS(003F5EE0, __thiscall, 56074,  CUIMessenger, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5EE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x20]
	push 0x774
	push eax
	mov byte ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	mov ebx,1
	push edx
	mov byte ptr [esp+0x3C],2
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	add esp,8
	test eax,eax
	jne Block2

 Block1:
	lea eax,[esp+0x1C]
	push 0x775
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov ebx,3
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check
	add esp,8
	mov byte ptr [esp+0x13],0
	test eax,eax
	je Block3

 Block2:
	mov byte ptr [esp+0x13],1

 Block3:
	mov dword ptr [esp+0x30],2
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x30],1
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x13],0
	je Block15

 Block10:
	mov ecx,ebp
	call CUIMessenger::TryDelete
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block15:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x24]
	push 0x93
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x40],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call slashcmd_check_with_subcmd
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	test esi,esi
	je Block19

 Block18:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call CUIMessenger::SendInviteMsg

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUIMessenger::Draw
_SUB_EXCEPTION_HANDLER(3F5C70)
__SUB_CLASS_THIS(003F5C70, __thiscall, 56059,  CUIMessenger, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F5C70
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x20]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0x80]
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	cmp eax,1
	jne Block7

 Block2:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block4:
	mov ecx,edi
	call CUIMessenger::DrawTextA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	mov ecx,edi
	call CUIMessenger::DrawStatusBar

 Block7:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIMessenger::OnEnter
_SUB_EXCEPTION_HANDLER(3F4730)
__SUB_CLASS_THIS(003F4730, __thiscall, 56066,  CUIMessenger, void, long, const AvatarLook&, const char*, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F4730
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,2
	ja Block24

 Block1:
	shl eax,5
	lea esi,[eax+edi+0xDC]
	mov ecx,esi
	call CUIMessenger::CHARACTER::Clear
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0x10],1
	call _xbstr_t::_ctor_0
	lea ebp,[esi+0x1C]
	lea ecx,[esp+0x2C]
	xor ebx,ebx
	cmp ebp,ecx
	je Block6

 Block2:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp],ebx

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [ebp],eax
	cmp eax,ebx
	je Block8

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x18],edx
	mov dword ptr [esi+0x14],ebx
	cmp dword ptr [edi+0x80],2
	jne Block10

 Block9:
	push 1
	mov ecx,edi
	call CUIMessenger::StartBlink

 Block10:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push ebx
	push eax
	push ecx
	mov ecx,edi
	call CUIMessenger::SetAvatar
	cmp dword ptr [esp+0x34],ebx
	je Block24

 Block11:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x30],ebx
	mov edx,dword ptr [esi+0x18]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	mov byte ptr [esp+0x20],2
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::AssignCStr
	push 1
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call separate_channelName
	add esp,0x10
	lea eax,[esp+0x34]
	push 0x333
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	mov ebp,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x1C],3
	mov dword ptr [esp+0x2C],ecx
	cmp ebp,ebx
	je Block15

 Block12:
	cmp dword ptr [ebp+4],ebx
	jne Block14

 Block13:
	mov edx,dword ptr [ebp]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [ebp+4],eax

 Block14:
	mov ebp,dword ptr [ebp+4]
	jmp Block16

 Block15:
	xor ebp,ebp

 Block16:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi]
	push ecx
	push ebp
	push eax
	lea edx,[esp+0x30]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov esi,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push esi
	mov dword ptr [ecx],ebx
	call ZXString16::AssignCharStr
	mov ecx,edi
	call CUIMessenger::AddChatText
	xor eax,eax
	cmp dword ptr [edi+0x88],ebx
	mov dword ptr [edi+0x8C],ebx
	sete al
	mov byte ptr [esp+0x1C],1
	mov dword ptr [edi+0x88],eax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp esi,ebx
	je Block24

 Block23:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x14
}
}
// CUIMessenger::ToggleBlink
__SUB_CLASS_THIS(003EFC00, __thiscall, 56075,  CUIMessenger, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xA0]
	je Block9

 Block1:
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	cmp dword ptr [esp+0xC],0xFFFFFFFF
	je Block19

 Block6:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	jmp Block17

 Block9:
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xDC]
	lea eax,[esp+0xC]
	push eax
	push esi
	mov dword ptr [esp+0x14],0
	call ecx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	cmp dword ptr [esp+0xC],0xFFFFFF
	je Block19

 Block14:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax

 Block17:
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	pop edi
	pop esi
	ret 4
}
}
