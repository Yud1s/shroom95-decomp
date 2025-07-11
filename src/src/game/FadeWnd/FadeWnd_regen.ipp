#include "regen.hpp"
// FadeWnd.ipp
#include "FadeWnd.hpp"

// CFadeWnd::Delete
__SUB_CLASS_THIS0(00123A70, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	ret
}
}
// CFadeWnd::GetInviterID
__SUB_CLASS_THIS0(00123A80, __thiscall, 38080,  CFadeWnd, unsigned long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUIFadeYesNo::SendCloseMessage
_SUB_EXCEPTION_HANDLER(126B30)
__SUB_CLASS_THIS0(00126B30, __thiscall, 37651,  CUIFadeYesNo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_126B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xD8]
	sub eax,0xC
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,2
	je Block4

 Block3:
	call CFadeWnd::SendCloseMessage
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret

 Block4:
	push 0x94
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x56
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	push 0xE
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x108]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret

 Block5:
	mov edx,dword ptr [esi+0xFC]
	push 0
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	add esi,0xDC
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendFamilyInviteResult
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CUIFadeYesNo::CreateGuildInvite
_SUB_EXCEPTION_HANDLER(128480)
__SUB_CLASS_THIS(00128480, __thiscall, 37663,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_128480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	mov ebp,8
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],ebp
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0xE0],ecx
	mov ecx,dword ptr [esp+0x60]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esi+0xFC],eax
	mov dword ptr [esi+0x104],ecx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x4C],1
	call edi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x534
	push edx
	mov byte ptr [esp+0x64],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x5C],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x30],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x10]
	push ecx
	call edi

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],bp
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 0x14
}
}
// CUIFadeYesNo::TryShowMemoListDlg
_SUB_EXCEPTION_HANDLER(129B10)
__SUB_CLASS_THIS(00129B10, __thiscall, 37681,  CUIFadeYesNo, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_129B10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x4C]
	push ecx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x24],0x1BC
	mov dword ptr [esp+0x28],0x5A
	mov dword ptr [esp+0x2C],0x1DC
	mov dword ptr [esp+0x30],0x68
	call PtInRect
	test eax,eax
	je Block10

 Block1:
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<GW_Memo>::`vftable'
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x44],ebx
	call ZList<GW_Memo>::RemoveAll
	add esi,0x3F2C
	push esi
	lea ecx,[esp+0x2C]
	call ZList<GW_Memo>::AddTail_List
	mov ecx,esi
	call ZList<GW_Memo>::RemoveAll
	cmp dword ptr [esp+0x30],ebx
	je Block9

 Block2:
	push ebx
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0xD8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block11

 Block3:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,eax
	call CMemoListDlg::_ctor_0
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	cmp esi,ebx
	je Block7

 Block6:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,esi
	mov byte ptr [esp+0x44],2
	call CDialog::DoModal
	mov byte ptr [esp+0x44],bl
	cmp esi,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CMemoListDlg>::_ReleaseRaw

 Block9:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<GW_Memo>::`vftable'
	call ZList<GW_Memo>::RemoveAll

 Block10:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 8

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block7
}
}
// CFadeWnd::SetOption
__SUB_CLASS_THIS(00122C40, __thiscall, 38074,  CFadeWnd, void, long, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<tagPOINT>, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0x90],eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [ecx+0x94],edx
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [ecx+0x98],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [ecx+0xA8],edx
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0xAC],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [ecx+0xB0],edx
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [ecx+0xB4],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [ecx+0xB8],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [ecx+0xBC],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [ecx+0x9C],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [ecx+0xA0],eax
	mov dword ptr [ecx+0xA4],edx
	ret 0x30
}
}
// CUIFadeYesNo::OnCreate
_SUB_EXCEPTION_HANDLER(1244C0)
__SUB_CLASS_THIS(001244C0, __thiscall, 37652,  CUIFadeYesNo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1244C0
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
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [edi+0xD8]
	mov esi,eax
	sub esi,3
	neg esi
	sbb esi,esi
	and esi,0xFFFFFFFB
	add esi,0x8D
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x20],ebx
	lea ebp,[ebx+7]
	mov dword ptr [esp+0x14],0x14
	cmp eax,5
	je Block12

 Block1:
	cmp eax,0xC
	je Block12

 Block2:
	cmp eax,8
	je Block12

 Block3:
	cmp eax,1
	je Block12

 Block4:
	cmp eax,0xD
	je Block12

 Block5:
	cmp eax,0xF
	je Block12

 Block6:
	cmp eax,ebx
	je Block12

 Block7:
	cmp eax,2
	je Block12

 Block8:
	cmp eax,6
	je Block12

 Block9:
	cmp eax,0x10
	je Block12

 Block10:
	cmp eax,0xE
	jne Block14

 Block11:
	mov esi,0xE4
	jmp Block13

 Block12:
	mov esi,0xBC

 Block13:
	mov dword ptr [esp+0x14],0x1F
	mov ebp,0xC

 Block14:
	lea eax,[esp+0x18]
	push 0x52D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x4C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [edi+0xD8]
	cmp eax,9
	je Block23

 Block17:
	cmp eax,0xA
	jne Block19

 Block18:
	cmp dword ptr [edi+0x120],ebx
	je Block23

 Block19:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x48],2
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	push eax
	lea ecx,[edi+0x124]
	mov byte ptr [esp+0x4C],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 1
	push ebp
	push esi
	push 0x7D0
	push edi
	call edx

 Block23:
	lea eax,[esp+0x18]
	push 0x52E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x4C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x48],4
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block39

 Block29:
	add eax,8
	cmp eax,ebx
	je Block39

 Block30:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block32

 Block31:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	mov eax,dword ptr [edi+0x130]
	mov dword ptr [edi+0x130],ebp
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block34

 Block33:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block34:
	mov ecx,dword ptr [edi+0x130]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x18]
	push 1
	push eax
	push esi
	push 0x7D1
	push edi
	call edx
	lea eax,[esp+0x18]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea esi,[edi+0x138]
	push esi
	push eax
	mov byte ptr [esp+0x54],5
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov edi,dword ptr [edi+0xD8]
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp edi,9
	jne Block43

 Block37:
	cmp eax,ebx
	jge Block40

 Block38:
	push eax
	call _com_issue_error

 Block39:
	xor ebp,ebp
	jmp Block32

 Block40:
	lea eax,[esp+0x30]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x60],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x58],7
	cmp esi,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov byte ptr [esp+0x58],6
	jmp Block54

 Block43:
	cmp edi,0xB
	jne Block49

 Block44:
	cmp eax,ebx
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea eax,[esp+0x30]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x60],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x58],9
	cmp esi,ebx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov byte ptr [esp+0x58],8
	jmp Block54

 Block49:
	cmp eax,ebx
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[esp+0x30]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x60],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x58],0xB
	cmp esi,ebx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov byte ptr [esp+0x58],0xA

 Block54:
	mov ecx,esi
	call IWzFont::Create
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebx
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUIFadeYesNo::GetFriendID
__SUB_CLASS_THIS0(00123BA0, __thiscall, 37675,  CUIFadeYesNo, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xFC]
	ret
}
}
// CFadeWnd::~CFadeWnd
_SUB_EXCEPTION_HANDLER(123AA0)
__SUB_CLASS_THIS0(00123AA0, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_123AA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CFadeWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CFadeWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CFadeWnd::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIFadeYesNo::OnButtonClicked
_SUB_EXCEPTION_HANDLER(129C60)
__SUB_CLASS_THIS(00129C60, __thiscall, 37654,  IUIMsgHandler, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_129C60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x3850]
	test eax,eax
	jne Block39

 Block1:
	cmp dword ptr [esi+0x140],eax
	jne Block39

 Block2:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,4
	je Block4

 Block3:
	mov dword ptr [esi+0x140],1

 Block4:
	mov ecx,dword ptr [esp+0x34]
	sub ecx,0x7D0
	je Block9

 Block5:
	sub ecx,1
	jne Block39

 Block6:
	cmp eax,0x10
	jne Block8

 Block7:
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendFollowRequestApply

 Block8:
	push 0
	jmp Block38

 Block9:
	cmp eax,0x11
	ja Block35

 Block10:
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block12
cmp EAX, 2
je Block13
cmp EAX, 3
je Block14
cmp EAX, 4
je Block15
cmp EAX, 5
je Block16
cmp EAX, 6
je Block24
cmp EAX, 7
je Block20
cmp EAX, 8
je Block22
cmp EAX, 9
je Block35
cmp EAX, 10
je Block25
cmp EAX, 11
je Block28
cmp EAX, 12
je Block29
cmp EAX, 13
je Block19
cmp EAX, 14
je Block33
cmp EAX, 15
je Block19
cmp EAX, 16
je Block34
cmp EAX, 17
je Block27


 Block11:
	mov ecx,dword ptr [esi+0xEC]
	push ecx
	call CUIMessenger::TryNew
	add esp,4
	jmp Block35

 Block12:
	mov edx,dword ptr [esi+0xF0]
	push edx
	call get_field
	mov ecx,eax
	call CField::SendAcceptFriendMsg
	jmp Block35

 Block13:
	mov eax,dword ptr [esi+0xEC]
	push 0
	push eax
	call CMiniRoomBaseDlg::SendInviteResult
	add esp,8
	jmp Block35

 Block14:
	mov ecx,dword ptr [esi+0xEC]
	push 0
	push ecx
	call CMiniRoomBaseDlg::SendCashInviteResult
	add esp,8
	jmp Block35

 Block15:
	push 0x5C
	push 0x1BE
	mov ecx,esi
	call CUIFadeYesNo::TryShowMemoListDlg
	jmp Block35

 Block16:
	cmp dword ptr [esi+0x100],0
	je Block35

 Block17:
	push 0x92
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0x1B
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0
	call COutPacket::Encode1
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	mov ecx,esi
	call eax
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea ecx,[esp+0x14]
	push ecx

 Block18:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block35

 Block19:
	push 0x94
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0x56
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],1
	call COutPacket::Encode1
	push 0xD
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x108]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea eax,[esp+0x14]
	push eax
	jmp Block18

 Block20:
	movzx ecx,word ptr [esi+0x110]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestState
	cmp eax,1
	jne Block35

 Block21:
	movzx edx,word ptr [esi+0x110]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	push eax
	call CWvsContext::ShowQuestInfoDetail
	jmp Block35

 Block22:
	cmp dword ptr [esi+0x104],0
	je Block35

 Block23:
	push 0x95
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],2
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xFC]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20B4]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea edx,[esp+0x14]
	push edx
	jmp Block18

 Block24:
	push 0xA7
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],3
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xFC]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetGuildName
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	lea edx,[esp+0x14]
	push edx
	jmp Block18

 Block25:
	cmp dword ptr [esi+0x120],0
	je Block35

 Block26:
	push 0x46
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],4
	call COutPacket::Encode1
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push 2
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea eax,[esp+0x14]
	push eax
	jmp Block18

 Block27:
	push 0xB7
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],5
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+0xEC]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	lea edx,[esp+0x14]
	push edx
	jmp Block18

 Block28:
	movzx eax,word ptr [esi+0x110]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	push 0
	call CWvsContext::ShowQuestInfoDetail
	jmp Block35

 Block29:
	mov dword ptr [esp+0x34],0
	lea ecx,[esp+0xC]
	push 0x1216
	push ecx
	mov dword ptr [esp+0x34],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	lea edi,[esi+0xDC]
	push edx
	mov ecx,edx
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0x10
	mov byte ptr [esp+0x2C],6
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea eax,[esp+0x48]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	mov edx,dword ptr [esi+0xFC]
	add esp,0x14
	xor ecx,ecx
	cmp eax,6
	sete cl
	mov eax,ecx
	push eax
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendFamilyInviteResult
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block35

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block35

 Block33:
	push 1
	push ecx
	lea eax,[esi+0xDC]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::SendResponseInvitePacket
	jmp Block35

 Block34:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	call CWvsContext::SendFollowRequestApply

 Block35:
	cmp dword ptr [esi+0xD8],4
	jne Block37

 Block36:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x3F34],0
	jne Block39

 Block37:
	push 1

 Block38:
	mov ecx,esi
	call CFadeWnd::Close

 Block39:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 4
}
}
// CUIFadeYesNo::CreateFriendReg
_SUB_EXCEPTION_HANDLER(126F00)
__SUB_CLASS_THIS(00126F00, __thiscall, 37661,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_126F00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xF8]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],1
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE0],ecx
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0xF0],eax
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
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
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x530
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CUIFadeYesNo::CreatePartyInvite
_SUB_EXCEPTION_HANDLER(127BA0)
__SUB_CLASS_THIS(00127BA0, __thiscall, 37663,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_127BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],5
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0xE0],ecx
	mov ecx,dword ptr [esp+0x60]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esi+0xFC],eax
	mov dword ptr [esi+0x100],ecx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x4C],1
	call edi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x534
	mov bl,2
	push edx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x30]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x10]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x14
}
}
// CUIFadeYesNo::CreateAllianceInvite
_SUB_EXCEPTION_HANDLER(128750)
__SUB_CLASS_THIS(00128750, __thiscall, 37668,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_128750
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],6
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esi+0xFC],ecx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x4C],1
	call edi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x534
	mov bl,2
	push edx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x30]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x10]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CFadeWnd::ResetTime
__SUB_CLASS_THIS0(00122CC0, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xC0],0
	call get_update_time
	add eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xC8],eax
	pop esi
	ret
}
}
// CUIFadeYesNo::CreatePartyQuestAlarm
_SUB_EXCEPTION_HANDLER(129840)
__SUB_CLASS_THIS(00129840, __thiscall, 37669,  CUIFadeYesNo, void, uint16_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_129840
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
	mov word ptr [esi+0x110],ax
	push eax
	lea eax,[ebp-0x18]
	mov dword ptr [esi+0xD8],0xB
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetPartyQuestIconPath
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push ecx
	mov dword ptr [ebp-4],0
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],1
	call edi
	lea ecx,[ebp-0x28]
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
	mov edx,dword ptr [ebp-0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,2
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x18]
	mov edi,esp
	push 0
	push 0
	lea eax,[ebp-0x38]
	push eax
	lea ecx,[ebp-0x28]
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
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [ebp-4],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [ebp-0x48],di
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x48]
	push edx
	call ebx

 Block13:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x28],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x28]
	push ecx
	call ebx

 Block17:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x38],di
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x38]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF95
	sub eax,edx
	push eax
	mov ecx,0x1B8
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[ebp-0x14]
	push 0x53C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x33
	push 0x9B
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[ebp-0x14]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],6
	call play_ui_sound
	mov eax,dword ptr [ebp-0x14]
	add esp,4
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
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
// CUIFadeYesNo::CreateParcelAlarm
_SUB_EXCEPTION_HANDLER(128D50)
__SUB_CLASS_THIS(00128D50, __thiscall, 37671,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_128D50
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
	mov edi,ecx
	lea eax,[esp+0x54]
	push eax
	lea ecx,[edi+0x11C]
	mov dword ptr [esp+0x50],0
	mov dword ptr [edi+0xD8],0xA
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x58]
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [edi+0x120],esi
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x50],1
	call ebp
	lea ecx,[esp+0x14]
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
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0xF71
	mov bl,2
	push ecx
	mov byte ptr [esp+0x68],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x134]
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
	mov byte ptr [esp+0x4C],bl
	mov ebx,8
	cmp word ptr [esp+0x34],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x34]
	push ecx
	call ebp

 Block13:
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x14],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x14]
	push eax
	call ebp

 Block17:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x24],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x24]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	lea eax,[eax+eax*4]
	mov edx,eax
	push 0x3E8
	mov eax,0xFFFFFF9F
	sub eax,edx
	neg esi
	sbb esi,esi
	and esi,0x7FFFE88F
	add esi,0x1770
	push esi
	push 0x3E8
	push eax
	mov ecx,0x1B8
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,edi
	call CFadeWnd::SetOption
	lea eax,[esp+0x58]
	push 0x53B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x2C
	push 0x9B
	mov ecx,edi
	mov byte ptr [esp+0x6C],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x58]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x50],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x5C]
	add esp,4
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CUIFadeYesNo::CUIFadeYesNo
__SUB_CLASS_THIS0(00123B20, __thiscall, 37649,  CUIFadeYesNo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CFadeWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIFadeYesNo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFadeYesNo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFadeYesNo::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xF8],eax
	mov dword ptr [esi+0x108],eax
	mov dword ptr [esi+0x10C],eax
	mov dword ptr [esi+0x118],eax
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esi+0x128],eax
	mov dword ptr [esi+0x130],eax
	mov dword ptr [esi+0x134],eax
	mov dword ptr [esi+0x138],eax
	mov dword ptr [esi+0x13C],eax
	push offset CUIFadeYesNo::ms_dwAlarmCounter
	mov dword ptr [esi+0x140],eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,esi
	pop esi
	ret
}
}
// CUIFadeYesNo::CreateFamilyInvite
_SUB_EXCEPTION_HANDLER(1292E0)
__SUB_CLASS_THIS(001292E0, __thiscall, 37661,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1292E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0xC
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE0],ecx
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0xFC],eax
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
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
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x537
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CUIFadeYesNo::CreateExpedtionApply
_SUB_EXCEPTION_HANDLER(127600)
__SUB_CLASS_THIS(00127600, __thiscall, 37661,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_127600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0x10C]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0xF
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE0],ecx
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0x108],eax
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
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
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x52F
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x15A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CFadeWnd::CFadeWnd
__SUB_CLASS_THIS0(00123A20, __thiscall, 38070,  CFadeWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CDialog::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xCC],eax
	int 3// TODO: 	mov dword ptr [esi],offset CFadeWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CFadeWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CFadeWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xD4],1
	mov dword ptr [esi+0xD8],0xFFFFFFFF
	mov dword ptr [esi+0xDC],eax
	mov eax,esi
	pop esi
	ret
}
}
// CUIFadeYesNo::OnKey
__SUB_CLASS_THIS(00122D80, __thiscall, 37657,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3850],0
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx]
	add ecx,4
	jmp edx

 Block2:
	ret 8
}
}
// CUIFadeYesNo::CreatePartyApply
_SUB_EXCEPTION_HANDLER(127E80)
__SUB_CLASS_THIS(00127E80, __thiscall, 37661,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_127E80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0x10C]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0xD
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE0],ecx
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0x108],eax
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
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
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x534
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x15A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CFadeWnd::OnPostFadeOut
__SUB_CLASS_THIS0(00122D30, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0xC0],5
	ret
}
}
// CUIFadeYesNo::CreateNewMemo
_SUB_EXCEPTION_HANDLER(1274E0)
__SUB_CLASS_THIS0(001274E0, __thiscall, 37651,  CUIFadeYesNo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1274E0
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
	push 0x3E8
	push 0x7FFFFFFF
	push 0x3E8
	mov ecx,0xFFFFFF95
	push ecx
	mov eax,0x1B7
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xD8],4
	call CFadeWnd::SetOption
	lea eax,[esp+8]
	push 0x53A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x2C
	push 0x9B
	mov ecx,esi
	mov dword ptr [esp+0x38],0
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0xC]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],1
	call play_ui_sound
	mov eax,dword ptr [esp+0x10]
	add esp,4
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUIFadeYesNo::~CUIFadeYesNo
_SUB_EXCEPTION_HANDLER(123BC0)
__SUB_CLASS_THIS0(00123BC0, __thiscall, 37651,  CUIFadeYesNo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_123BC0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIFadeYesNo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFadeYesNo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFadeYesNo::`vftable'{for `ZRefCounted'}
	push offset CUIFadeYesNo::ms_dwAlarmCounter
	mov dword ptr [esp+0x1C],8
	call dword ptr [ZImports::_InterlockedDecrement]
	mov eax,dword ptr [esi+0x13C]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x138]
	mov byte ptr [esp+0x18],7
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x134]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp dword ptr [esi+0x130],0
	lea edi,[esi+0x12C]
	mov byte ptr [esp+0x18],5
	je Block8

 Block7:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block8:
	cmp dword ptr [esi+0x128],0
	lea edi,[esi+0x124]
	mov byte ptr [esp+0x18],4
	je Block10

 Block9:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block10:
	mov eax,dword ptr [esi+0x11C]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0x118]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIFadeYesNo::OnMouseButton
__SUB_CLASS_THIS(00123900, __thiscall, 37655,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3850],0
	push ebx
	push esi
	push edi
	mov esi,ecx
	jne Block20

 Block1:
	cmp dword ptr [esp+0x10],0x202
	jne Block20

 Block2:
	cmp dword ptr [esi+0xD4],7
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	jne Block13

 Block3:
	sub esp,8
	lea edi,[esi-4]
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	test edi,edi
	je Block6

 Block4:
	lea eax,[edi+8]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF8
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,0xC
	push eax
	call ebx

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::IsTopFadeWnd
	test eax,eax
	je Block13

 Block10:
	movzx ecx,word ptr [esi+0x10C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestState
	cmp eax,1
	jne Block12

 Block11:
	movzx edx,word ptr [esi+0x10C]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	push eax
	call CWvsContext::ShowQuestInfoDetail

 Block12:
	push 1
	mov ecx,edi
	call CFadeWnd::Close

 Block13:
	sub esp,8
	lea eax,[esi-4]
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	test eax,eax
	je Block16

 Block14:
	add eax,8
	je Block16

 Block15:
	add eax,0xFFFFFFF8
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block19

 Block18:
	add eax,0xC
	push eax
	call ebx

 Block19:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetTopFadeWnd

 Block20:
	pop edi
	pop esi
	pop ebx
	ret 0x10
}
}
// CUIFadeYesNo::Draw
_SUB_EXCEPTION_HANDLER(1248B0)
__SUB_CLASS_THIS(001248B0, __thiscall, 37653,  CUIFadeYesNo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1248B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x35C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x370]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x380]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor edi,edi
	mov dword ptr [esp+0x378],edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [esp+0x20]
	mov ebx,1
	mov byte ptr [esp+0x378],bl
	cmp eax,0x11
	ja Block38

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block8
cmp EAX, 2
je Block17
cmp EAX, 3
je Block20
cmp EAX, 4
je Block124
cmp EAX, 5
je Block43
cmp EAX, 6
je Block81
cmp EAX, 7
je Block48
cmp EAX, 8
je Block75
cmp EAX, 9
je Block84
cmp EAX, 10
je Block96
cmp EAX, 11
je Block119
cmp EAX, 12
je Block126
cmp EAX, 13
je Block136
cmp EAX, 14
je Block25
cmp EAX, 15
je Block131
cmp EAX, 16
je Block141
cmp EAX, 17
je Block114


 Block2:
	lea edx,[esp+0x70]
	push 0x30B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x7C]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0xD
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x30C

 Block5:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x1A

 Block6:
	push 0x67
	push ecx
	mov dword ptr [esp+0x34],esp

 Block7:
	lea edx,[esp+0x38]
	mov ecx,esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	jmp Block38

 Block8:
	cmp dword ptr [esi+0xE0],0
	jle Block14

 Block9:
	lea eax,[esp+0xAC]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],3
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xC0]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esi+0x138]
	push ebx
	push eax
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0xB4]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xF8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xC0]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x30D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x21
	jmp Block6

 Block14:
	lea eax,[esp+0xBC]
	push 0x30B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xF8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xC8]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0xD
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x30D
	jmp Block5

 Block17:
	lea eax,[esp+0xA0]
	push 0x30B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xAC]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0xD
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x30E
	jmp Block5

 Block20:
	lea eax,[esp+0x50]
	push 0x30B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push offset _D_VTMISSING
	lea ecx,[esp+0xC4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x314]
	mov byte ptr [esp+0x37C],8
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0xC0]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x314]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov byte ptr [esp+0x38C],9
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0x388],0xA
	test ebp,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	push 7
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],9
	call IWzCanvas::DrawText
	lea ecx,[esp+0x310]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC0]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x234]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xF4]
	mov byte ptr [esp+0x37C],0xB
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x230]
	push edx
	lea eax,[esp+0xF4]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1483
	push ecx
	mov byte ptr [esp+0x390],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x14
	mov byte ptr [esp+0x38C],0xD
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],0xC
	call IWzCanvas::DrawText
	lea ecx,[esp+0xF0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x230]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block25:
	mov dword ptr [esp+0x24],0
	mov edx,dword ptr [esi+0xE8]
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	push edx
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x380],0xE
	call CPartyQuestInfoManager::Get
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x34]
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	lea ecx,[esp+0x88]
	push 0x1598
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x94]
	add esp,0xC
	mov byte ptr [esp+0x378],0xE
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::op_assign
	lea edx,[esp+0x58]
	push 0x30B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x378],0xE
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0xB4]
	push offset _S___2
	push ecx
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x37C],0x11
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x378],0xE
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea edx,[esp+0x60]
	push 0x1597
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esi+0xE4]
	push eax
	mov byte ptr [esp+0x37C],0x12
	call get_job_name
	mov ecx,dword ptr [esi+0xE0]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edi
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x74]
	add esp,0x14
	mov byte ptr [esp+0x378],0xE
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x94]
	push offset _S___20
	push ecx
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x37C],0x13
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x378],0xE
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 6
	push edx
	call get_basic_font
	add esp,4
	lea eax,[esi+0x138]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call _x_com_ptr<IWzFont>::_ctor_copy
	mov ecx,dword ptr [esp+0x34]
	push ecx
	push ebx
	push 7
	push 0xE1
	push 0x19
	push ecx
	lea edx,[esp+0x48]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call DrawTextSepartedLine
	mov eax,dword ptr [esp+0x4C]
	add esp,0x28
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov edi,dword ptr [esp+0x14]

 Block38:
	cmp dword ptr [esi+0x134],0
	lea eax,[esi+0x134]
	mov dword ptr [esp+0x1C],eax
	sete al
	test al,al
	je Block146

 Block39:
	mov byte ptr [esp+0x378],0
	test edi,edi
	je Block41

 Block40:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov dword ptr [esp+0x378],0xFFFFFFFF
	test ebp,ebp
	je Block171

 Block42:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx
	jmp Block171

 Block43:
	lea eax,[esp+0x68]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x14
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x7C]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esi+0x138]
	push ebx
	push eax
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0xA8]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB4]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esi+0x138]
	push ebx
	push eax
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	push 0x14
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x30F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x21
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	jmp Block37

 Block48:
	movzx eax,word ptr [esi+0x110]
	test ax,ax
	jne Block50

 Block49:
	lea eax,[esp+0x44]
	push 0x312
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x37C],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block53

 Block50:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::IsMedalQuest
	test eax,eax
	je Block52

 Block51:
	lea ecx,[esp+0x98]
	push 0x14DD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x37C],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x98]
	jmp Block53

 Block52:
	lea edx,[esp+0x78]
	push 0x313
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x37C],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x78]

 Block53:
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2D4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x114]
	mov byte ptr [esp+0x37C],0x19
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x2D0]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x114]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov byte ptr [esp+0x38C],0x1A
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0x388],0x1B
	test ebp,ebp
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	movzx edx,word ptr [esi+0x110]
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFF9
	add edx,0xE
	push edx
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x1A
	call IWzCanvas::DrawText
	lea ecx,[esp+0x110]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2D0]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp word ptr [esi+0x110],0
	je Block38

 Block58:
	push offset _D_VTMISSING
	lea ecx,[esp+0x254]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x134]
	mov byte ptr [esp+0x37C],0x1C
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[esp+0x258]
	push eax
	lea ecx,[esp+0x13C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0xCC1
	push edx
	mov byte ptr [esp+0x394],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x38C],0x1E
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[esp+0x354]
	mov byte ptr [esp+0x38C],0x1D
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x380],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x340]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x130]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x250]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x24],0
	lea ecx,[esp+0xB8]
	push 0x1A14
	push ecx
	mov byte ptr [esp+0x380],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx edx,word ptr [esi+0x110]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x384],0x25
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xC4]
	add esp,0xC
	mov byte ptr [esp+0x378],0x24
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov edx,dword ptr [esp+0x24]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call Ztl_bstr_t::_ctor_1
	cmp dword ptr [esp+0x38],0
	mov byte ptr [esp+0x384],0x26
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x35C]
	push eax
	mov byte ptr [esp+0x388],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x380],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x350]
	mov byte ptr [esp+0x378],0x29
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esp+0x28],0
	sete al
	test al,al
	je Block70

 Block65:
	cmp dword ptr [esp+0x28],0
	mov byte ptr [esp+0x378],0x24
	je Block67

 Block66:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0x378],0x23
	je Block69

 Block68:
	mov eax,dword ptr [esp+0x24]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x37C],bl
	call edx
	jmp Block38

 Block70:
	push 0xFFFFFFFF
	push offset _S___3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [esp+0x34],0
	mov byte ptr [esp+0x384],0x2A
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea ecx,[esp+0x36C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x388],0x29
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x384],0x2B
	call get_string
	add esp,8
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CreateFromCStr
	lea ecx,[esp+0x360]
	mov byte ptr [esp+0x378],0x2D
	call Ztl_variant_t::~Ztl_variant_t
	push 0x64
	push ecx
	lea eax,[esi+0x138]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x24]
	push edx
	call format_string_1
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[esp+0x334]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x154]
	mov byte ptr [esp+0x37C],0x2E
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x330]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x154]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x38C],0x2F
	call Ztl_bstr_t::_ctor_1
	push 0x14
	mov byte ptr [esp+0x38C],0x30
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x2F
	call IWzCanvas::DrawText
	lea ecx,[esp+0x150]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x330]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x378],0x29
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov byte ptr [esp+0x378],0x24
	jmp Block66

 Block75:
	lea eax,[esp+0x80]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x31
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x94]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esi+0x138]
	mov edx,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edx
	call ZXString<char>::CreateFromCharStr
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0x48]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x32
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x310

 Block80:
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x21
	push 0x67
	push ecx
	mov dword ptr [esp+0x30],esp
	jmp Block7

 Block81:
	lea eax,[esp+0x4C]
	push 0x30B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x33
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0xD
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1895
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x1A
	push 0x67
	push ecx
	mov dword ptr [esp+0x30],esp
	jmp Block7

 Block84:
	mov eax,dword ptr [esi+0x114]
	test eax,eax
	jne Block90

 Block85:
	lea eax,[esp+0x54]
	push 0x2DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x118]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x34
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	push offset _D_VTMISSING
	lea ecx,[esp+0x274]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x174]
	mov byte ptr [esp+0x37C],0x35
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x270]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x174]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov byte ptr [esp+0x38C],0x36
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0x388],0x37
	test ebp,ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	push 7
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x36
	call IWzCanvas::DrawText
	lea ecx,[esp+0x170]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x270]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x2F4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x194]
	mov byte ptr [esp+0x37C],0x38
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x2F0]
	push edx
	lea eax,[esp+0x194]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x2DC
	push ecx
	mov byte ptr [esp+0x390],0x39
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x14
	mov byte ptr [esp+0x38C],0x3A
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x39
	call IWzCanvas::DrawText
	lea ecx,[esp+0x190]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2F0]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block90:
	cmp eax,ebx
	jne Block38

 Block91:
	push offset _D_VTMISSING
	lea ecx,[esp+0x294]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1B4]
	mov byte ptr [esp+0x37C],0x3B
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x290]
	push edx
	lea eax,[esp+0x1B4]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x2DD
	push ecx
	mov byte ptr [esp+0x390],0x3C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x388],0x3D
	test ebp,ebp
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	push 7
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x3C
	call IWzCanvas::DrawText
	lea ecx,[esp+0x1B0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x290]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	lea edx,[esp+0x5C]
	push 0x2DE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x118]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x3E
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	push offset _D_VTMISSING
	lea ecx,[esp+0x324]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1D4]
	mov byte ptr [esp+0x37C],0x3F
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x320]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x1D4]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov byte ptr [esp+0x38C],0x40
	call Ztl_bstr_t::_ctor_1
	push 0x14
	mov byte ptr [esp+0x38C],0x41
	push 0x19
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x40
	call IWzCanvas::DrawText
	lea ecx,[esp+0x1D0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x320]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block96:
	lea ecx,[esi+0x11C]
	push offset _S_
	call ZXString<char>::Compare
	push offset _D_VTMISSING
	test eax,eax
	je Block107

 Block97:
	cmp dword ptr [esi+0x120],0
	je Block101

 Block98:
	lea ecx,[esp+0x2B4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1F4]
	mov byte ptr [esp+0x37C],0x42
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x2B0]
	push edx
	lea eax,[esp+0x1F4]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF4E
	push ecx
	mov byte ptr [esp+0x390],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x388],0x44
	test ebp,ebp
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	push 7
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x43
	call IWzCanvas::DrawText
	lea ecx,[esp+0x1F0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2B0]
	jmp Block104

 Block101:
	lea ecx,[esp+0xD4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x214]
	mov byte ptr [esp+0x37C],0x45
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0xD0]
	push edx
	lea eax,[esp+0x214]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF4D
	push ecx
	mov byte ptr [esp+0x390],0x46
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x388],0x47
	test ebp,ebp
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	push 7
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x46
	call IWzCanvas::DrawText
	lea ecx,[esp+0x210]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xD0]

 Block104:
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	lea edx,[esp+0x64]
	push 0xF4F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x11C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x48
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x70]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	push offset _D_VTMISSING
	lea ecx,[esp+0x104]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xE4]
	mov byte ptr [esp+0x37C],0x49
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x100]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0xE4]
	push ecx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov byte ptr [esp+0x38C],0x4A
	call Ztl_bstr_t::_ctor_1
	push 0x14
	mov byte ptr [esp+0x38C],0x4B
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x4A
	call IWzCanvas::DrawText
	lea ecx,[esp+0xE0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x100]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block107:
	cmp dword ptr [esi+0x120],0
	je Block111

 Block108:
	lea ecx,[esp+0x144]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x124]
	mov byte ptr [esp+0x37C],0x4C
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x140]
	push edx
	lea eax,[esp+0x124]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF4B
	push ecx
	mov byte ptr [esp+0x390],0x4D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x388],0x4E
	test ebp,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	push 7
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x4D
	call IWzCanvas::DrawText
	lea ecx,[esp+0x120]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x140]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x184]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x164]
	mov byte ptr [esp+0x37C],0x4F
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x180]
	push edx
	lea eax,[esp+0x164]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF4C
	push ecx
	mov byte ptr [esp+0x390],0x50
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x14
	mov byte ptr [esp+0x38C],0x51
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x50
	call IWzCanvas::DrawText
	lea ecx,[esp+0x160]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x180]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block111:
	lea ecx,[esp+0x1C4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1A4]
	mov byte ptr [esp+0x37C],0x52
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x1C0]
	push edx
	lea eax,[esp+0x1A4]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF4D
	push ecx
	mov byte ptr [esp+0x390],0x53
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x388],0x54
	test ebp,ebp
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	push 0xE
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x53
	call IWzCanvas::DrawText
	lea ecx,[esp+0x1A0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C0]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block114:
	lea edx,[esp+0x6C]
	push 0x30B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x11C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x384],0x55
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	push offset _D_VTMISSING
	lea ecx,[esp+0x204]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1E4]
	mov byte ptr [esp+0x37C],0x56
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x200]
	push eax
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x1E4]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_NEWYEARCARDARRIV
	mov byte ptr [esp+0x38C],0x57
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x388],0x58
	test ebp,ebp
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	push 7
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x57
	call IWzCanvas::DrawText
	lea ecx,[esp+0x1E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x200]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x244]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x224]
	mov byte ptr [esp+0x37C],0x59
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x14]
	lea edx,[esp+0x240]
	push edx
	lea eax,[esp+0x224]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov byte ptr [esp+0x38C],0x5A
	call Ztl_bstr_t::_ctor_1
	push 0x14
	mov byte ptr [esp+0x38C],0x5B
	push 0x1B
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x5A
	call IWzCanvas::DrawText
	lea ecx,[esp+0x220]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x240]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block38

 Block119:
	push offset _D_VTMISSING
	lea ecx,[esp+0x264]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x134]
	mov byte ptr [esp+0x378],0x5C
	test ebp,ebp
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	lea ecx,[esp+0x260]
	push ecx
	push eax
	push 4
	push 4
	mov ecx,ebp
	call IWzCanvas::Copy
	lea ecx,[esp+0x260]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x2A4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x284]
	mov byte ptr [esp+0x37C],0x5D
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x2A0]
	push edx
	lea eax,[esp+0x284]
	push eax
	mov eax,dword ptr [esi+0x138]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x11A0
	push ecx
	mov byte ptr [esp+0x390],0x5E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 9
	mov byte ptr [esp+0x38C],0x5F
	push 0x2F
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x5E
	call IWzCanvas::DrawText
	lea ecx,[esp+0x280]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2A0]
	mov byte ptr [esp+0x378],bl
	call Ztl_variant_t::~Ztl_variant_t
	movzx eax,word ptr [esi+0x110]
	test ax,ax
	je Block38

 Block122:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	lea edx,[esp+0x20]
	push edx
	call CQuestMan::GetQuestName
	push 0x50
	push ecx
	lea eax,[esi+0x138]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov byte ptr [esp+0x384],0x60
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea eax,[esp+0x24]
	push eax
	call format_string_1
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[esp+0x2E4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C4]
	mov byte ptr [esp+0x37C],0x61
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x138]
	lea ecx,[esp+0x2E0]
	push ecx
	lea edx,[esp+0x2C4]
	push edx
	push eax
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov byte ptr [esp+0x38C],0x62
	call Ztl_bstr_t::_ctor_1
	push 0x1A
	mov byte ptr [esp+0x38C],0x63
	push 0x2F
	mov ecx,ebp
	mov byte ptr [esp+0x390],0x62
	call IWzCanvas::DrawText
	lea ecx,[esp+0x2C0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2E0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block38

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block38

 Block124:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x378],0xFFFFFFFF
	test eax,eax
	je Block171

 Block125:
	mov ecx,dword ptr [eax]
	push eax
	jmp Block170

 Block126:
	lea eax,[esp+0x74]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x64
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x88]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [esi+0x138]
	mov edx,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edx
	call ZXString<char>::CreateFromCharStr
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0x7C]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x65
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x88]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x311
	jmp Block80

 Block131:
	lea eax,[esp+0x84]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x66
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x98]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block133:
	mov eax,dword ptr [esi+0x138]
	mov edx,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edx
	call ZXString<char>::CreateFromCharStr
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0x8C]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x10C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x67
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x98]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1658
	jmp Block80

 Block136:
	lea eax,[esp+0x94]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x68
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA8]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	mov eax,dword ptr [esi+0x138]
	mov edx,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edx
	call ZXString<char>::CreateFromCharStr
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0x9C]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x10C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x69
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA8]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x159A
	jmp Block80

 Block141:
	lea eax,[esp+0xA4]
	push 0x1597
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xE4]
	mov edi,dword ptr [eax]
	push ecx
	mov byte ptr [esp+0x37C],0x6A
	call get_job_name
	mov edx,dword ptr [esi+0xE0]
	push eax
	push edx
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB8]
	add esp,0x14
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	mov eax,dword ptr [esi+0x138]
	mov edx,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edx
	call ZXString<char>::CreateFromCharStr
	push 7
	push 0x67
	push ecx
	lea eax,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	add esp,0x18
	lea ecx,[esp+0x30]
	push 0x30B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x13C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x384],0x6B
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x378],bl
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [esi+0x138]
	mov edi,dword ptr [esp+0x14]
	push ebx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	push 0x14
	push 0x67
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call __DrawTextA
	mov eax,dword ptr [esi+0x138]
	add esp,0x18
	push ebx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1599
	jmp Block80

 Block146:
	mov esi,dword ptr [esi+0xD8]
	cmp esi,5
	je Block154

 Block147:
	cmp esi,0xC
	je Block154

 Block148:
	cmp esi,8
	je Block154

 Block149:
	cmp esi,ebx
	je Block154

 Block150:
	cmp esi,0xB
	je Block166

 Block151:
	push offset _D_VTMISSING
	lea ecx,[esp+0x304]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx]
	mov byte ptr [esp+0x378],0x6D
	test ebp,ebp
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	lea edx,[esp+0x300]
	push edx
	push eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov ecx,0x25
	sub ecx,eax
	shr ecx,1
	push ecx
	push 6
	mov ecx,ebp
	call IWzCanvas::Copy
	lea ecx,[esp+0x300]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block166

 Block154:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov esi,ecx
	mov byte ptr [esp+0x378],0x6C
	test esi,esi
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block160

 Block159:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	test ebp,ebp
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea edx,[esp+0x34]
	push edx
	mov ecx,0x35
	sub ecx,dword ptr [esp+0x20]
	mov eax,esi
	push eax
	shr ecx,1
	push ecx
	push 6
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x378],bl
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [esp+0x378],0
	test edi,edi
	je Block168

 Block167:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block168:
	mov dword ptr [esp+0x378],0xFFFFFFFF
	test ebp,ebp
	je Block171

 Block169:
	mov ecx,dword ptr [ebp]
	push ebp

 Block170:
	mov edx,dword ptr [ecx+8]
	call edx

 Block171:
	mov ecx,dword ptr [esp+0x370]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x368
	ret 4
}
}
// CUIFadeYesNo::CreateExpedtionInvite
_SUB_EXCEPTION_HANDLER(1278D0)
__SUB_CLASS_THIS(001278D0, __thiscall, 37665,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1278D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0xE
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xE0],ecx
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi+0xE4],edx
	mov dword ptr [esi+0xE8],eax
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
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
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x52F
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x15D
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x15A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xF6
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CFadeWnd::CreateFadeWnd
_SUB_EXCEPTION_HANDLER(123F90)
__SUB_CLASS_THIS(00123F90, __thiscall, 38076,  CFadeWnd, void, long, long, const wchar_t*, long, int32_t, void*, int32_t, CWnd::UIOrigin) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_123F90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd

 Block2:
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x54]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x50]
	push ecx
	mov ecx,dword ptr [esi+0xAC]
	push edx
	mov edx,dword ptr [esi+0xA8]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CWnd::CreateWnd
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x3C],0
	call edi
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x3C],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],3
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x90]
	lea edx,[esp+0x14]
	push edx
	push 0
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x10],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x38],0
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x10]
	push ecx
	call edi

 Block18:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x38],0xFFFFFFFF
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block22:
	mov ecx,esi
	call CFadeWnd::ResetTime
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 0x20
}
}
// CUIFadeYesNo::CreateTradeInvite
_SUB_EXCEPTION_HANDLER(1271D0)
__SUB_CLASS_THIS(001271D0, __thiscall, 37666,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, unsigned long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1271D0
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
	mov ebx,ecx
	mov esi,dword ptr [esp+0x5C]
	xor eax,eax
	test esi,esi
	setne al
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[ebx+0xDC]
	mov dword ptr [esp+0x50],0
	add eax,2
	mov dword ptr [ebx+0xD8],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x58]
	mov edi,esi
	neg edi
	sbb edi,edi
	and edi,0xFFFFFFD2
	mov ebp,esi
	add edi,0xCE
	neg ebp
	sbb ebp,ebp
	lea eax,[esp+0x24]
	and ebp,0xFFFFFFF0
	push eax
	mov dword ptr [ebx+0xEC],edx
	add ebp,0x3C
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x50],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x2C]
	push ecx
	mov eax,esi
	neg eax
	lea edx,[esp+0x20]
	push edx
	sbb eax,eax
	push ecx
	and eax,0xF12
	add eax,0x531
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	push eax
	push ecx
	mov byte ptr [esp+0x68],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0x134]
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
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],2
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x4C],1
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],0
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF9F
	sub eax,edx
	mov ecx,0x1B8
	test esi,esi
	jne Block23

 Block22:
	mov eax,0xFFFFFF8F
	mov ecx,0x185
	sub eax,edx

 Block23:
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,ebx
	call CFadeWnd::SetOption
	neg esi
	sbb esi,esi
	and esi,0xF0A
	add esi,0x538
	lea eax,[esp+0x5C]
	push esi
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push ebp
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x6C],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	lea ecx,[esp+0x5C]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x50],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x60]
	add esp,4
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// CUIFadeYesNo::CreateMSMInvite
_SUB_EXCEPTION_HANDLER(126C40)
__SUB_CLASS_THIS(00126C40, __thiscall, 37659,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_126C40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x58]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esi+0xF4],ecx
	mov dword ptr [esi+0xEC],edx
	call edi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x4C],1
	call edi
	lea eax,[esp+0x10]
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
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x52F
	mov bl,2
	push eax
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x10]
	push edx
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x538
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// CFadeWnd::SendCloseMessage
_SUB_EXCEPTION_HANDLER(124180)
// 5244AC
static uint8_t _SUB_124180_LOOKUP_TABLE_0[15] = {
0, 1, 2, 2, 7, 3, 4, 7, 5, 7, 7, 7, 7, 7, 6, 
};
__SUB_CLASS_THIS0(00124180, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_124180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xD8]
	cmp eax,0xE
	ja Block25

 Block1:
	movzx eax,byte ptr [eax+_SUB_124180_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block12
cmp EAX, 2
je Block13
cmp EAX, 3
je Block14
cmp EAX, 4
je Block23
cmp EAX, 5
je Block15
cmp EAX, 6
je Block24
cmp EAX, 7
je Block25


 Block2:
	push 0x8F
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],0
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	add esi,0xDC
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20CC]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax+4]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block9

 Block6:
	mov eax,ecx
	lea esi,[eax+1]

 Block7:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block7

 Block8:
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

 Block9:
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	push 0
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	lea edx,[esp+0x10]
	push edx

 Block10:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]

 Block11:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block12:
	mov eax,dword ptr [esi+0xF0]
	push eax
	call get_field
	mov ecx,eax
	call CField::SendDeleteFriendMsg
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block13:
	mov ecx,dword ptr [esi+0xEC]
	push 3
	push ecx
	call CMiniRoomBaseDlg::SendInviteResult
	add esp,8
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block14:
	push 0x92
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x1A
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],1
	call COutPacket::Encode1
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	mov ecx,esi
	call eax
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	lea ecx,[esp+0x10]
	push ecx
	jmp Block10

 Block15:
	push 0x96
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x39
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],2
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	add esi,0xDC
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	test eax,eax
	je Block17

 Block16:
	lea ecx,[eax+4]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block22

 Block19:
	mov eax,ecx
	lea esi,[eax+1]
	lea esp,[esp]

 Block20:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block20

 Block21:
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

 Block22:
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	lea eax,[esp+0x10]
	push eax
	jmp Block10

 Block23:
	push 0xA8
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 0x16
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],3
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	add esi,0xDC
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetGuildName
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	jmp Block11

 Block24:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	add esi,0xDC
	push esi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::SendResponseInvitePacket

 Block25:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CUIFadeYesNo::CreateQuestClear
_SUB_EXCEPTION_HANDLER(128150)
__SUB_CLASS_THIS(00128150, __thiscall, 37669,  CUIFadeYesNo, void, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_128150
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block37

 Block1:
	mov ax,word ptr [esp+0x60]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esi+0xD8],7
	mov word ptr [esi+0x110],ax
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x5C],ebp
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esi+0x110],bp
	jne Block7

 Block6:
	lea edx,[esp+0x18]
	push 0x535
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block8

 Block7:
	lea eax,[esp+0x60]
	push 0x536
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block8:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block10

 Block9:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov dword ptr [esp+0x6C],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x54]
	mov bl,3
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov dword ptr [esp+0x60],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ebp,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block22

 Block20:
	mov ecx,dword ptr [esp+0x60]
	and ebx,0xFFFFFFFD
	test ecx,ecx
	je Block22

 Block21:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],0

 Block22:
	mov dword ptr [esp+0x58],1
	test bl,1
	je Block25

 Block23:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],0

 Block25:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x20],bp
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x58],edi
	cmp word ptr [esp+0x30],bp
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x7530
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF9F
	sub eax,edx
	push eax
	mov ecx,0x1B8
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x60]
	push 0x53B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x2C
	push 0x9B
	mov ecx,esi
	mov dword ptr [esp+0x78],6
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],edi
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	lea ecx,[esp+0x14]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x5C],7
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0x58],edi
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
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
// CUIFadeYesNo::CreateUserAlarm
_SUB_EXCEPTION_HANDLER(128A10)
__SUB_CLASS_THIS(00128A10, __thiscall, 37670,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_128A10
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esi+0x118]
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esi+0xD8],9
	call ZXString<char>::op_assign
	mov ebp,dword ptr [esp+0x64]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esi+0x114],ebp
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x5C],1
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x58],2
	cmp ebp,ebx
	jne Block6

 Block5:
	lea edx,[esp+0x18]
	push 0x532
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block7

 Block6:
	lea eax,[esp+0x64]
	push 0x533
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block7:
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block9

 Block8:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov dword ptr [esp+0x6C],5
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x54]
	mov bl,4
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov dword ptr [esp+0x60],6
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	xor edi,edi
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ebp,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block21

 Block19:
	mov ecx,dword ptr [esp+0x64]
	and ebx,0xFFFFFFFD
	cmp ecx,edi
	je Block21

 Block20:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],edi

 Block21:
	mov dword ptr [esp+0x58],2
	test bl,1
	je Block24

 Block22:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block24

 Block23:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block24:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x20],bp
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x30],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x1770
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF9F
	sub eax,edx
	push eax
	mov ecx,0x1B8
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push edi
	push 0xFF
	push edi
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x64]
	push 0x539
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push edi
	push edi
	push 1
	push 0xA
	push eax
	push 0x2C
	push 0x9B
	mov ecx,esi
	mov byte ptr [esp+0x78],7
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],0
	cmp eax,edi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	lea ecx,[esp+0x64]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x5C],8
	call play_ui_sound
	mov eax,dword ptr [esp+0x68]
	add esp,4
	mov byte ptr [esp+0x58],0
	cmp eax,edi
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,edi
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 8
}
}
// CUIFadeYesNo::CreateNewYearCardArrived
_SUB_EXCEPTION_HANDLER(129020)
__SUB_CLASS_THIS(00129020, __thiscall, 37668,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_129020
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0x11C]
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0xD8],0x11
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x54]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esi+0xEC],ecx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x4C],1
	call edi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x536
	mov bl,2
	push edx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x134]
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
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x30]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x10]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	push 0x2BF20
	push 0x3E8
	lea edx,[eax+eax*4]
	mov eax,0xFFFFFF9F
	sub eax,edx
	push eax
	mov ecx,0x1B8
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x54]
	push 0x539
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x2C
	push 0x9B
	mov ecx,esi
	mov byte ptr [esp+0x68],5
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x54]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x4C],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CUIFadeYesNo::CreateFollowRequest
_SUB_EXCEPTION_HANDLER(1295B0)
__SUB_CLASS_THIS(001295B0, __thiscall, 37673,  CUIFadeYesNo, void, NakedParam<ZXString<char>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1295B0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+0x13C]
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi+0xD8],0x10
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push 0x3E8
	push 0x2BF20
	mov dword ptr [esi+0xE0],ecx
	mov dword ptr [esi+0xE4],edx
	mov eax,dword ptr [CUIFadeYesNo::ms_dwAlarmCounter]
	push 0x3E8
	lea eax,[eax+eax*4]
	mov edx,eax
	mov eax,0xFFFFFF8F
	sub eax,edx
	push eax
	mov ecx,0x185
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	lea eax,[esp+0x20]
	push 0x15A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x3C
	push 0xCE
	mov ecx,esi
	mov byte ptr [esp+0x30],1
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x20]
	push 0x4FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x14],2
	call play_ui_sound
	mov eax,dword ptr [esp+0x24]
	add esp,4
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CFadeWnd::HitTest
__SUB_CLASS_THIS(00122D00, __thiscall, 38079,  CFadeWnd, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	mov eax,2

 Block4:
	pop esi
	ret 0xC
}
}
// CFadeWnd::OnPreFadeIn
__SUB_CLASS_THIS0(00123500, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	push 0
	call CFadeWnd::Fade
	ret
}
}
// CFadeWnd::Fade
_SUB_EXCEPTION_HANDLER(1230A0)
__SUB_CLASS_THIS(001230A0, __thiscall, 38077,  CFadeWnd, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1230A0
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
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetLayer
	mov dword ptr [esp+0x3C],0
	call get_update_time
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esi+0xC4],eax
	call edi
	cmp dword ptr [esp+0x44],0
	je Block28

 Block1:
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block9

 Block2:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3850],0
	jne Block9

 Block3:
	add dword ptr [esi+0xC4],eax
	mov eax,dword ptr [esi+0xC4]
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x44],2
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],1
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ebp,dword ptr [esp+0x10]
	mov byte ptr [esp+0x3C],3
	test ebp,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esi+0xBC]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0xB8]
	lea eax,[esp+0x18]
	push eax
	push ecx
	push edx
	mov ecx,ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],1
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x40],4
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],5
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0x98]
	lea eax,[esp+0x18]
	push eax
	push 0
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],4
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov edi,8
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [esi+0xC0],3
	jmp Block54

 Block26:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esi+0xC0],3
	jmp Block54

 Block28:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x3C],6
	test eax,eax
	je Block35

 Block29:
	add dword ptr [esi+0xC4],eax
	mov eax,dword ptr [esi+0xC4]
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],7
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],6
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov ebp,dword ptr [esp+0x10]
	mov byte ptr [esp+0x3C],8
	test ebp,ebp
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [esi+0xB4]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0xB0]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	push eax
	mov ecx,ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],6
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[esp+0x44]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x40],9
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],0xA
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x94]
	lea edx,[esp+0x18]
	push edx
	push 0
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],9
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov edi,8
	mov byte ptr [esp+0x3C],6
	cmp word ptr [esp+0x24],di
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov dword ptr [esi+0xC0],1

 Block54:
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x14],di
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call edx
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
// CUIFadeYesNo::MoveWndPosition
__SUB_CLASS_THIS0(00123510, __thiscall, 37651,  CUIFadeYesNo, void) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xAC]
	mov eax,5
	add dword ptr [ecx+0xB4],eax
	add dword ptr [ecx+0xBC],eax
	add edx,eax
	mov eax,dword ptr [ecx+0xA8]
	push edx
	push eax
	call CWnd::MoveWnd
	ret
}
}
// CUIFadeYesNo::GetRelatedName
__SUB_CLASS_THIS(00129710, __thiscall, 37678,  CUIFadeYesNo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [esp+0xC],0xE
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],0
	je Block2

 Block1:
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
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
	ret 8

 Block2:
	add ecx,0xDC
	push ecx
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUIFadeYesNo::GetRelatedValue
__SUB_CLASS_THIS(00122D40, __thiscall, 37677,  CUIFadeYesNo, unsigned long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,5
	je Block5

 Block1:
	sub eax,8
	je Block4

 Block2:
	sub eax,2
	je Block4

 Block3:
	xor eax,eax
	ret 4

 Block4:
	mov eax,dword ptr [ecx+0x108]
	ret 4

 Block5:
	mov eax,dword ptr [ecx+0xFC]
	ret 4
}
}
// CUIFadeYesNo::OnSetFocus
__SUB_CLASS_THIS(00123B90, __thiscall, 37656,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CFadeWnd::Update
__SUB_CLASS_THIS0(001236C0, __thiscall, 38072,  CFadeWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esi+0xC0]
	cmp ecx,5
	ja Block4

 Block1:
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block5
cmp ECX, 2
je Block7
cmp ECX, 3
je Block15
cmp ECX, 4
je Block17
cmp ECX, 5
je Block18


 Block2:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3850],0
	jne Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x3C]
	mov ecx,esi
	call eax

 Block4:
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block5:
	sub eax,dword ptr [esi+0xC4]
	test eax,eax
	jle Block4

 Block6:
	mov dword ptr [esi+0xC0],2
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x3850],0
	je Block9

 Block8:
	push 1
	mov ecx,esi
	call CFadeWnd::Fade
	mov ecx,esi
	call CFadeWnd::ResetTime
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block9:
	cmp dword ptr [esi+0xCC],0
	jne Block12

 Block10:
	cmp dword ptr [esi+0xA0],0
	je Block4

 Block11:
	sub eax,dword ptr [esi+0xC8]
	test eax,eax
	jle Block4

 Block12:
	cmp dword ptr [esi+0xD4],0
	jne Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x44]
	mov ecx,esi
	call eax

 Block14:
	push 1
	mov ecx,esi
	call CFadeWnd::Fade
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block15:
	sub eax,dword ptr [esi+0xC4]
	test eax,eax
	jle Block4

 Block16:
	mov dword ptr [esi+0xC0],4
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x38]
	mov ecx,esi
	pop esi
	jmp eax
}
}
// CFadeWnd::Close
__SUB_CLASS_THIS(00122CE0, __thiscall, 38077,  CFadeWnd, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xCC],1
	mov dword ptr [ecx+0xD4],eax
	ret 4
}
}
// CUIFadeYesNo::Delete
__SUB_CLASS_THIS0(00123DB0, __thiscall, 37651,  CUIFadeYesNo, void) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0xD8],0x11
	jne Block2

 Block1:
	mov eax,dword ptr [edi+0xEC]
	push eax
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x10],esp
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
	mov ecx,dword ptr [edi+0xD8]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::DeleteFadeWnd_1
	pop edi
	pop esi
	pop ecx
	ret

 Block2:
	sub esp,8
	lea eax,[edi+8]
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF8
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block7

 Block6:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::DeleteFadeWnd_0
	pop edi
	pop esi
	pop ecx
	ret
}
}
