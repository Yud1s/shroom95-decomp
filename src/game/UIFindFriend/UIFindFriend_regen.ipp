#include "regen.hpp"
// UIFindFriend.ipp
#include "UIFindFriend.hpp"

// CUIFindFriend::OnCreate
_SUB_EXCEPTION_HANDLER(3BA180)
__SUB_CLASS_THIS(003BA180, __thiscall, 71735,  CUIFindFriend, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BA180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0xBC]
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
	mov dword ptr [esp+0x30],esp
	push 0x16B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	lea ecx,[esp+0x58]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xB8],ebx
	mov dword ptr [esp+0x5C],0xFFEEEEEE
	mov dword ptr [esp+0x60],0xFFA5A198
	mov dword ptr [esp+0x64],0xFF999999
	mov dword ptr [esp+0xAC],0xFFFFFFFE
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB4],1
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
	mov byte ptr [esp+0xB4],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

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
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xB0C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x58]
	push edx
	push 0x12
	push 0x5D
	push 0x3A
	push 0x55
	push ebx
	push 0x7D5
	push esi
	call eax
	mov ecx,dword ptr [esi+0xB0C]
	push ebx
	push offset _S_VIEWALL
	call CCtrlComboBox::AddItem
	mov ecx,dword ptr [esi+0xB0C]
	push 1
	push offset _S_LEVEL
	call CCtrlComboBox::AddItem
	mov ecx,dword ptr [esi+0xB0C]
	push 2
	push offset _S_JOB
	call CCtrlComboBox::AddItem
	mov ecx,dword ptr [esi+0xB0C]
	push 3
	push offset _S_PLAYSTYLE
	call CCtrlComboBox::AddItem
	mov ecx,dword ptr [esi+0xB0C]
	push 4
	push offset _S_FIELD
	call CCtrlComboBox::AddItem
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	lea ecx,[esp+0x14]
	push 0x16B2
	push ecx
	mov byte ptr [esp+0xBC],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB8],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB4],4
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block25

 Block16:
	add eax,8
	cmp eax,ebx
	je Block25

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block19:
	mov eax,dword ptr [esi+0xB14]
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xB14]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebx
	push 0x39
	push 7
	push 0x7D1
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x16B3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB8],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],2
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB4],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block19

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block37

 Block28:
	add eax,8
	cmp eax,ebx
	je Block37

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block31:
	mov eax,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0xB1C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebx
	push 0x11C
	push 6
	push 0x7D2
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x16B4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB8],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov ebp,8
	mov byte ptr [esp+0xB4],8
	cmp eax,ebx
	je Block38

 Block36:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block39

 Block37:
	xor edi,edi
	jmp Block31

 Block38:
	xor eax,eax

 Block39:
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block49

 Block40:
	add eax,8
	cmp eax,ebx
	je Block49

 Block41:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block43

 Block42:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov eax,dword ptr [esi+0xB24]
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block45

 Block44:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [esi+0xB24]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebx
	push 0x11C
	push 0x33
	push 0x7D3
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x16B5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB8],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB4],0xA
	cmp eax,ebx
	je Block50

 Block48:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block51

 Block49:
	xor edi,edi
	jmp Block43

 Block50:
	xor eax,eax

 Block51:
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block59

 Block52:
	add eax,8
	cmp eax,ebx
	je Block59

 Block53:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block55

 Block54:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	mov eax,dword ptr [esi+0xB2C]
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block57

 Block56:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block57:
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebx
	push 0x11C
	push 0x88
	push 0x7D4
	push esi
	call eax
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB4],0xB
	cmp eax,ebx
	je Block60

 Block58:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block61

 Block59:
	xor edi,edi
	jmp Block55

 Block60:
	xor eax,eax

 Block61:
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block72

 Block62:
	add eax,8
	cmp eax,ebx
	je Block72

 Block63:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block65

 Block64:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	mov eax,dword ptr [esi+0xB34]
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block67

 Block66:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block67:
	mov ecx,dword ptr [esi+0xB34]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0xBC
	push 0x4E
	push 0xA0
	push 3
	push 1
	push 0x7D6
	push esi
	call eax
	mov eax,dword ptr [esi+0xB34]
	push ebx
	push 0xFF
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push ecx
	mov ecx,esi
	mov dword ptr [eax+0x34],0x9C
	call CWnd::GetLayer
	push 0x93
	push 0x2F
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xD0],0xC
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [edi],ebx
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD4],0xD
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block69:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebx
	jge Block73

 Block70:
	cmp eax,0x80004002
	je Block73

 Block71:
	push eax
	call _com_issue_error

 Block72:
	xor edi,edi
	jmp Block65

 Block73:
	lea eax,[esp+0x58]
	push 0x1412
	push eax
	mov byte ptr [esp+0xD8],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0xF
	push ebx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xDC],0x11
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB38]
	add esp,0x28
	cmp edi,eax
	je Block78

 Block74:
	mov dword ptr [esi+0xB38],eax
	cmp eax,ebx
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block76:
	cmp edi,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block78:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB4],0x10
	cmp eax,ebx
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block82:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],2
	cmp eax,ebx
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xB8],0x12
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [esi+0xB38]
	mov byte ptr [esp+0xB4],0x13
	cmp ecx,ebx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB4],0x12
	cmp word ptr [esp+0x1C],bp
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block94:
	mov byte ptr [esp+0xB4],2
	cmp word ptr [esp+0x40],bp
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block98:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov ecx,esi
	mov dword ptr [eax],esi
	call CUIFindFriend::SendMyInfoRequest
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB4],bl
	cmp eax,ebx
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	mov ecx,dword ptr [esp+0xA4]
	cmp ecx,ebx
	je Block102

 Block101:
	call _xbstr_t::Data_t::Release

 Block102:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CUIFindFriendDetail::GetRTTI
__SUB_CLASS_THIS0(003B9980, __thiscall, 71613,  CUIFindFriendDetail, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIFindFriendDetail::ms_RTTI_CUIFindFriendDetail
	ret
}
}
// CUIFindFriend::GetRTTI
__SUB_CLASS_THIS0(003B7C40, __thiscall, 71747,  CUIFindFriend, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIFindFriend::ms_RTTI_CUIFindFriend
	ret
}
}
// CUIFindFriend::OnAddBuddy
_SUB_EXCEPTION_HANDLER(3BB690)
__SUB_CLASS_THIS0(003BB690, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BB690
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
	mov eax,dword ptr [ecx+0xB44]
	cmp eax,0xFFFFFFFF
	je Block25

 Block1:
	push eax
	add ecx,0xB48
	call ZList<ZRef<SearchInfo>>::FindIndex
	mov ebp,dword ptr [eax+4]
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebp
	cmp ebp,ebx
	je Block3

 Block2:
	lea eax,[ebp-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x58],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block26

 Block4:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block26

 Block5:
	lea esi,[eax+8]
	cmp esi,ebx
	je Block26

 Block6:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebx
	je Block8

 Block7:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [esi+0x90],ebx
	mov edi,1
	push 0x2D8
	mov dword ptr [esi+0xA4],edi
	push edx
	mov byte ptr [esp+0x70],2
	mov dword ptr [esi+0xA0],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x3EA
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push ecx
	mov ecx,esp
	lea eax,[ebp+4]
	mov dword ptr [esp+0x20],esp
	push eax
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
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0x58],3
	call CWvsContext::GetFriendGroups
	int 3// TODO: 	mov dword ptr [esp+0x38],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebx
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x54],4
	xor edi,edi
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block13

 Block9:
	jmp Block11

 Block11:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x38]
	lea ebp,[edx+edi*4]
	call ZList<ZXString<char>>::AddTail_
	push ebp
	mov ecx,eax
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	inc edi
	call ZArray<ZXString<char>>::GetCount
	cmp edi,eax
	jb Block11

 Block12:
	mov ebp,dword ptr [esp+0x34]

 Block13:
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_COMBOBOX
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block21

 Block14:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CUtilDlg::GetComboBoxStr
	push 1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push edx
	mov byte ptr [esp+0x60],5
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],6
	call CUtilDlg::GetInputResult
	push ebx
	push ebx
	mov ecx,eax
	mov byte ptr [esp+0x64],7
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
	mov byte ptr [esp+0x60],8
	cmp esi,ebx
	je Block16

 Block15:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block17

 Block16:
	xor esi,esi

 Block17:
	mov ecx,esi
	mov byte ptr [esp+0x60],9
	call CField::SendSetFriendMsg
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],5
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],4
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x54],3
	int 3// TODO: 	mov dword ptr [esp+0x38],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x54],2
	call ZArray<ZXString<char>>::RemoveAll
	push ebx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x58],bl
	call ZRef<CUtilDlg>::_ReleaseRaw
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp ebp,ebx
	je Block25

 Block22:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block23:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block26:
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	jmp Block8
}
}
// CUIFindFriend::IsKindOf
__SUB_CLASS_THIS(003B7C80, __thiscall, 71748,  CUIFindFriend, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIFindFriend::ms_RTTI_CUIFindFriend
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
// CUIFindFriendDetail::OnCreate
_SUB_EXCEPTION_HANDLER(3B9D80)
__SUB_CLASS_THIS(003B9D80, __thiscall, 71604,  CUIFindFriendDetail, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B9D80
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x16AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	lea ecx,[esp+0x10]
	push 0x16B0
	push ecx
	mov dword ptr [esp+0x4C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x48],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block13

 Block6:
	add eax,8
	cmp eax,ebx
	je Block13

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebx
	push 6
	push 0xF9
	push 0x7D0
	push esi
	call eax
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x44],3
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block9

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block23

 Block16:
	add eax,8
	cmp eax,ebx
	je Block23

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x21
	push 0x64
	push 0xF7
	push 3
	push 1
	push 0x7D1
	push esi
	call eax
	mov eax,dword ptr [esi+0xA4]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0x1E
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x44],4
	cmp eax,ebx
	je Block24

 Block22:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block25

 Block23:
	xor edi,edi
	jmp Block19

 Block24:
	xor eax,eax

 Block25:
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block35

 Block26:
	add eax,8
	cmp eax,ebx
	je Block35

 Block27:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block29

 Block28:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block31

 Block30:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block31:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x21
	push 0x88
	push 0xF7
	push 3
	push 1
	push 0x7D2
	push esi
	call eax
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [eax+0x34],0x1E
	mov ecx,dword ptr [esi+0xA4]
	push 0x1E
	call CCtrlScrollBar::SetScrollBarSize
	mov ecx,dword ptr [esi+0xAC]
	push 0x1E
	call CCtrlScrollBar::SetScrollBarSize
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIFindFriend>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x44],5
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],6
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x44],7
	cmp edi,ebx
	jne Block36

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	xor edi,edi
	jmp Block29

 Block36:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],6
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],5
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block46

 Block45:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block46:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],8
	cmp esi,ebx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block50

 Block49:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUIFindFriend::SendMyInfoRequest
_SUB_EXCEPTION_HANDLER(3B8000)
__SUB_CLASS_THIS0(003B8000, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B8000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0xC2
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 5
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
// CUIFindFriendDetail::OnSetFocus
__SUB_CLASS_THIS(003B9970, __thiscall, 71608,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIFindFriend::OnKey
__SUB_CLASS_THIS(003B72B0, __thiscall, 71740,  IUIMsgHandler, void, uint32_t, uint32_t) {
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
// CUIFindFriend::CUIFindFriend
_SUB_EXCEPTION_HANDLER(3B7AD0)
__SUB_CLASS_THIS0(003B7AD0, __thiscall, 71732,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B7AD0
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 7
	push 0xA2
	push 3
	push 0x29
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x20],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIFindFriend>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIFindFriend>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIFindFriend::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFindFriend::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFindFriend::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB44],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esi+0xB48],offset ZList<ZRef<SearchInfo>>::`vftable'
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB60],edi
	lea edx,[esi+0xAFC]
	push edx
	mov edx,dword ptr [esi+0xAD0]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	mov byte ptr [esp+0x30],0xB
	call CConfig::GetUIWndPos
	mov ecx,dword ptr [esp+0xC]
	cmp ecx,edi
	jge Block5

 Block4:
	xor ecx,ecx
	jmp Block7

 Block5:
	cmp ecx,0x26B
	jle Block8

 Block6:
	mov ecx,0x26B

 Block7:
	mov dword ptr [esp+0xC],ecx

 Block8:
	mov eax,dword ptr [esp+0x10]
	cmp eax,edi
	jge Block10

 Block9:
	xor eax,eax
	jmp Block12

 Block10:
	cmp eax,0x123
	jle Block13

 Block11:
	mov eax,0x123

 Block12:
	mov dword ptr [esp+0x10],eax

 Block13:
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x135
	push 0xB5
	push eax
	push ecx
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CUIFindFriend::SendSearchRequest
_SUB_EXCEPTION_HANDLER(3BB4C0)
__SUB_CLASS_THIS0(003BB4C0, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BB4C0
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
	lea ecx,[esi+0xB48]
	mov dword ptr [esi+0xB44],0xFFFFFFFF
	call ZList<ZRef<SearchInfo>>::RemoveAll
	mov ecx,esi
	call CUIFindFriend::OnToggleDetail
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0xB38]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+8]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x24],0
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0xFF
	push 0xFF
	push esi
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	push 0xC2
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
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
}
}
// CUIFindFriend::OnRequestError
__SUB_CLASS_THIS(003B8080, __thiscall, 71744,  CUIFindFriend, void, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0xC
	jne Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A5E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block2:
	ret 4
}
}
// CUIFindFriend::OnWhisper
_SUB_EXCEPTION_HANDLER(3BA9B0)
__SUB_CLASS_THIS0(003BA9B0, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BA9B0
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
	mov eax,dword ptr [ecx+0xB44]
	cmp eax,0xFFFFFFFF
	je Block17

 Block1:
	push eax
	add ecx,0xB48
	call ZList<ZRef<SearchInfo>>::FindIndex
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block3

 Block2:
	lea eax,[edi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x30],0
	je Block13

 Block4:
	mov dword ptr [esp+0x10],0
	mov ecx,dword ptr [edi+4]
	lea ebp,[edi+4]
	push ecx
	lea edx,[esp+0x14]
	push offset _S_CHANGEHASBEENMAD
	push edx
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Format
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add esp,0xC
	push 0
	call CConfig::GetDialogVisible
	test eax,eax
	je Block11

 Block5:
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block18

 Block6:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	test eax,eax
	je Block18

 Block7:
	add eax,8
	je Block18

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
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x28],esp
	mov dword ptr [esi+0xA8],1
	push edx
	mov byte ptr [esp+0x48],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x3E9
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push 0
	push 1
	push 0
	push 0
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	mov esi,dword ptr [esi+0xEC]
	mov esi,dword ptr [esi+0x48]
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	xor eax,eax
	test esi,esi
	sete al
	push eax
	push 0
	call CConfig::SetDialogVisible
	push 0
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],1
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block11:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ebp
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CUIStatusBar::StartChat
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test edi,edi
	je Block17

 Block14:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block17

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret

 Block18:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block10
}
}
// CUIFindFriend::OnButtonClicked
__SUB_CLASS_THIS(003BB980, __thiscall, 71737,  CUIFindFriend, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x7D0]
	mov esi,ecx
	cmp eax,4
	ja Block7

 Block1:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block2
cmp EAX, 2
je Block3
cmp EAX, 3
je Block4
cmp EAX, 4
je Block5


 Block2:
	call CUIFindFriend::OnAddBuddy
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block3:
	call CUIFindFriend::OnWhisper
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block4:
	call CUIFindFriend::SendSearchRequest
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block5:
	call CUIFindFriend::OnToggleDetail
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block6:
	mov eax,dword ptr [esi+0xAD0]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::UI_Close

 Block7:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIFindFriendDetail::CUIFindFriendDetail
_SUB_EXCEPTION_HANDLER(3B98A0)
__SUB_CLASS_THIS(003B98A0, __thiscall, 71601,  CUIFindFriendDetail, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B98A0
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
	call CWnd::_ctor_default
	xor eax,eax
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-0x80]
	mov dword ptr [TSingleton<CUIFindFriendDetail>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIFindFriendDetail>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIFindFriendDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFindFriendDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFindFriendDetail::`vftable'{for `ZRefCounted'}
	mov dword ptr [ecx+4],eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xAC],eax
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push 1
	push eax
	mov eax,dword ptr [esp+0x2C]
	push 1
	push 0xA
	push 0xBE
	push 0x123
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],8
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIFindFriendDetail::OnDetailInfoResult
_SUB_EXCEPTION_HANDLER(3B9340)
__SUB_CLASS_THIS(003B9340, __thiscall, 71611,  CUIFindFriendDetail, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B9340
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
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [esi+0x8C]
	cmp dword ptr [ecx],eax
	jne Block6

 Block1:
	mov eax,ecx
	mov dword ptr [eax+0x18],1
	mov eax,dword ptr [esi+0x8C]
	push edi
	lea ecx,[eax+0x1C]
	call AvatarLook::Decode
	lea ecx,[esi+0x80]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x7E
	push 0x34
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x38],0
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [esi+0x84]
	push 5
	add eax,0x1C
	push eax
	mov byte ptr [esp+0x40],2
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUIFindFriend::OnSearchResult
_SUB_EXCEPTION_HANDLER(3BBB50)
__SUB_CLASS_THIS(003BBB50, __thiscall, 71745,  CUIFindFriend, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BBB50
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [ebx+0xB38]
	xor ebp,ebp
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x30],ebp
	cmp esi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push ebp
	push ebp
	push esi
	call edx
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x30],esi
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[ebx+0xB48]
	mov dword ptr [ebx+0xB44],esi
	call ZList<ZRef<SearchInfo>>::RemoveAll
	mov ecx,ebx
	call CUIFindFriend::OnToggleDetail
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	call CInPacket::Decode2
	movzx eax,ax
	cmp eax,ebp
	mov dword ptr [esp+0x38],eax
	jle Block22

 Block9:
	jmp Block11

 Block11:
	mov esi,1
	sub dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x24],ebp
	push ebp
	mov dword ptr [esp+0x34],esi
	call ZRefCounted_AllocHelper<ZRefCountedDummy<SearchInfo>>::call
	mov dword ptr [eax+4],esi
	lea esi,[eax+0x10]
	add esp,4
	mov ecx,edi
	mov dword ptr [esp+0x24],esi
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+4]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+8],al
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+0xA],ax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],ebp
	lea ecx,[ebx+0xB48]
	mov dword ptr [esi+0x18],ebp
	call ZList<ZRef<SearchInfo>>::AddTail_
	lea ebp,[esi-0x10]
	lea ecx,[ebp+4]
	push ecx
	mov ebx,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block18

 Block14:
	add eax,0xFFFFFFF0
	mov dword ptr [esp+0x14],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block17

 Block16:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block17:
	mov dword ptr [ebx+4],0

 Block18:
	mov dword ptr [ebx+4],esi
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block21

 Block20:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block21:
	mov ebx,dword ptr [esp+0x18]
	xor ebp,ebp
	cmp dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x24],0
	jg Block11

 Block22:
	mov ecx,dword ptr [ebx+0xB50]
	sub ecx,8
	push ecx
	mov ecx,dword ptr [ebx+0xB34]
	call CCtrlScrollBar::SetScrollRange
	push ebp
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUIFindFriend::IsMyAddon
__SUB_CLASS_THIS(003B7C60, __thiscall, 71743,  CUIFindFriend, int32_t, CWnd*) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB60]
	xor eax,eax
	cmp ecx,dword ptr [esp+4]
	sete al
	ret 4
}
}
// CUIFindFriendDetail::OnButtonClicked
__SUB_CLASS_THIS(003B7FC0, __thiscall, 71606,  CUIFindFriendDetail, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x7D0
	jne Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CUIFindFriend>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block2:
	call CUIFindFriend::OnToggleDetailClose

 Block3:
	ret 4
}
}
// CUIFindFriendDetail::~CUIFindFriendDetail
_SUB_EXCEPTION_HANDLER(3B99D0)
__SUB_CLASS_THIS0(003B99D0, __thiscall, 71603,  CUIFindFriendDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B99D0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIFindFriendDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFindFriendDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFindFriendDetail::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xA8]
	xor ebx,ebx
	mov dword ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x20],4
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x20],3
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x8C]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block11

 Block7:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call ebp
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
	mov dword ptr [esi+0x8C],0
	xor ebx,ebx

 Block11:
	mov edi,dword ptr [esi+0x84]
	mov byte ptr [esp+0x20],1
	cmp edi,ebx
	je Block16

 Block12:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call ebp
	test eax,eax
	jne Block15

 Block13:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block15:
	mov dword ptr [esi+0x84],0
	xor ebx,ebx

 Block16:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIFindFriendDetail>::ms_pInstance],ebx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CUIFindFriendDetail::OnChildNotify
__SUB_CLASS_THIS(003B7230, __thiscall, 71607,  CUIFindFriendDetail, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D1
	jb Block5

 Block1:
	cmp eax,0x7D2
	ja Block5

 Block2:
	mov eax,dword ptr [esp+8]
	cmp eax,0x12C
	jb Block7

 Block3:
	cmp eax,0x130
	ja Block7

 Block4:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block5:
	cmp dword ptr [esp+8],0x64
	jne Block7

 Block6:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block7:
	ret 0xC
}
}
// CUIFindFriend::~CUIFindFriend
_SUB_EXCEPTION_HANDLER(3B7CB0)
__SUB_CLASS_THIS0(003B7CB0, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B7CB0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIFindFriend::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFindFriend::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFindFriend::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xB5C]
	xor ebp,ebp
	mov dword ptr [esp+0x20],0xA
	cmp dword ptr [edi+4],ebp
	je Block2

 Block1:
	push ebp
	mov ecx,edi
	call ZRef<CUIFindFriendDetail>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block2:
	lea ecx,[esi+0xB48]
	mov byte ptr [esp+0x20],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<SearchInfo>>::`vftable'
	call ZList<ZRef<SearchInfo>>::RemoveAll
	mov eax,dword ptr [esi+0xB40]
	mov byte ptr [esp+0x20],8
	cmp eax,ebp
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block6:
	mov dword ptr [esi+0xB40],ebp

 Block7:
	mov eax,dword ptr [esi+0xB38]
	mov byte ptr [esp+0x20],7
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea edi,[esi+0xB30]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebp
	je Block11

 Block10:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block11:
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebp
	je Block13

 Block12:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block13:
	lea edi,[esi+0xB20]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebp
	je Block15

 Block14:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block15:
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebp
	je Block17

 Block16:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block17:
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebp
	je Block19

 Block18:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block19:
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebp
	je Block21

 Block20:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block21:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIFindFriend>::ms_pInstance],ebp
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CUIFindFriend::OnMouseButton
__SUB_CLASS_THIS(003BAD00, __thiscall, 71738,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB30]
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0xB4C]
	sub eax,ecx
	push edi
	mov edi,dword ptr [esp+0x28]
	add eax,4
	lea ecx,[eax+eax*4]
	mov eax,dword ptr [esp+0x24]
	push edi
	add ecx,ecx
	push eax
	lea edx,[esp+0x10]
	add ecx,ecx
	push edx
	mov dword ptr [esp+0x14],0xA
	mov dword ptr [esp+0x18],0x50
	mov dword ptr [esp+0x1C],0x9B
	mov dword ptr [esp+0x20],ecx
	call PtInRect
	test eax,eax
	je Block5

 Block1:
	lea ecx,[edi-0x50]
	mov eax,0x66666667
	imul ecx
	mov ecx,dword ptr [esi+0xB30]
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [ecx+0x38]
	cmp dword ptr [esi+0xB40],eax
	je Block3

 Block2:
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0xB40],eax
	call CWnd::InvalidateRect

 Block3:
	cmp dword ptr [esp+0x1C],0x201
	jne Block5

 Block4:
	lea ecx,[esi-4]
	call CUIFindFriend::OnToggleDetail

 Block5:
	pop edi
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CUIFindFriend::OnMyInfoResult
__SUB_CLASS_THIS(003BBA20, __thiscall, 71745,  CUIFindFriend, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0xB3C]
	call ZRef<SearchInfo>::_Alloc
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea ebx,[eax-0x10]
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
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
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,dword ptr [edi+0x35]
	push ecx
	lea edx,[edi+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [esi+0xB40]
	mov byte ptr [ecx+8],al
	mov eax,dword ptr [edi+0x3D]
	push eax
	add edi,0x39
	push edi
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0xB40]
	mov ebx,dword ptr [esp+0x2C]
	movzx eax,ax
	mov word ptr [ecx+0xA],ax
	mov edi,dword ptr [esi+0xB40]
	add esp,0x10
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [edi+0xC],eax
	mov edi,dword ptr [esi+0xB40]
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [edi+0x10],eax
	mov eax,dword ptr [esi+0xB40]
	cmp dword ptr [eax+0xC],0
	je Block7

 Block6:
	cmp dword ptr [eax+0x10],0
	jne Block9

 Block7:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x16B9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x28
	call CWvsContext::UI_Open
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	mov dword ptr [esp+4],0x29
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	jmp  CWvsContext::UI_Close

 Block9:
	mov ecx,esi
	call CUIFindFriend::SendSearchRequest
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CUIFindFriend::OnDestroy
__SUB_CLASS_THIS0(003B7E50, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB60]
	test ecx,ecx
	je Block4

 Block1:
	push esi
	call CWnd::Destroy
	cmp dword ptr [edi+0xB60],0
	lea esi,[edi+0xB5C]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIFindFriendDetail>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,edi
	pop edi
	jmp  CUIWnd::OnDestroy
}
}
// CUIFindFriendDetail::SetDetailInfo
_SUB_EXCEPTION_HANDLER(3B8A80)
__SUB_CLASS_THIS(003B8A80, __thiscall, 71610,  CUIFindFriendDetail, void, NakedParam<ZRef<SearchInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B8A80
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
	mov esi,ecx
	lea eax,[esp+0x90]
	xor ebx,ebx
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x8C],ebx
	call ZRef<SearchInfo>::op_assign_copy
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0x18],ebx
	je Block5

 Block1:
	lea ecx,[esi+0x80]
	call ZRef<CAvatar>::_Alloc
	push ebx
	push 0x64
	push 0x80
	push 0x3C
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA4],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xA0],2
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [esi+0x84]
	push 5
	add eax,0x1C
	push eax
	mov byte ptr [esp+0xAC],3
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],bl
	cmp eax,ebx
	je Block6

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block6

 Block5:
	push 0xC2
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x8C],4
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x8C]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x88],bl
	call ZArray<unsigned char>::RemoveAll

 Block6:
	lea ecx,[esi+0x90]
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0x10],ebx
	je Block13

 Block7:
	push ebx
	push 6
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_QUESTS]
	mov dword ptr [eax],edx
	mov cx,word ptr [_S_QUESTS+4]
	mov word ptr [eax+4],cx
	push 6
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xB
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x90],5
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_EXPEDITIONS]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_EXPEDITIONS+4]
	mov dword ptr [eax+4],ecx
	movzx edx,word ptr [_S_EXPEDITIONS+8]
	mov word ptr [eax+8],dx
	movzx ecx,byte ptr [_S_EXPEDITIONS+10]
	mov byte ptr [eax+0xA],cl
	push 0xB
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xD
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x90],6
	mov dword ptr [esp+0x30],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_CHATHANGOUT]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_CHATHANGOUT+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [_S_CHATHANGOUT+8]
	mov dword ptr [eax+8],edx
	movzx ecx,byte ptr [_S_CHATHANGOUT+12]
	mov byte ptr [eax+0xC],cl
	push 0xD
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xB
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x90],7
	mov dword ptr [esp+0x34],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_PARTYQUEST]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_PARTYQUEST+4]
	mov dword ptr [eax+4],ecx
	movzx edx,word ptr [_S_PARTYQUEST+8]
	mov word ptr [eax+8],dx
	movzx ecx,byte ptr [_S_PARTYQUEST+10]
	mov byte ptr [eax+0xA],cl
	push 0xB
	lea ecx,[esp+0x30]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0x13
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x90],8
	mov dword ptr [esp+0x38],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_HUNTMONSTERSTRAI]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_HUNTMONSTERSTRAI+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [_S_HUNTMONSTERSTRAI+8]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [_S_HUNTMONSTERSTRAI+12]
	mov dword ptr [eax+0xC],ecx
	movzx edx,word ptr [_S_HUNTMONSTERSTRAI+16]
	mov word ptr [eax+0x10],dx
	movzx ecx,byte ptr [_S_HUNTMONSTERSTRAI+18]
	mov byte ptr [eax+0x12],cl
	push 0x13
	lea ecx,[esp+0x34]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [esp+0x88],9
	xor edi,edi
	lea ebp,[esp+0x20]
	jmp Block9

 Block9:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+0xC]
	mov ecx,edi
	shr edx,cl
	test dl,1
	je Block11

 Block10:
	push ebp
	push 0xFFFFFFFF
	lea ecx,[esi+0x90]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block11:
	inc edi
	add ebp,4
	cmp edi,5
	jl Block9

 Block12:
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x98],bl
	call __eh_vector_dtor_iterator

 Block13:
	lea ecx,[esi+0x94]
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0x10],ebx
	je Block19

 Block14:
	push ebx
	push 7
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_HENESYS]
	mov dword ptr [eax],ecx
	movzx edx,word ptr [_S_HENESYS+4]
	mov word ptr [eax+4],dx
	movzx ecx,byte ptr [_S_HENESYS+6]
	mov byte ptr [eax+6],cl
	push 7
	lea ecx,[esp+0x38]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 6
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x90],0xA
	mov dword ptr [esp+0x40],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_ELNATH]
	mov dword ptr [eax],edx
	movzx ecx,word ptr [_S_ELNATH+4]
	mov word ptr [eax+4],cx
	push 6
	lea ecx,[esp+0x3C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xB
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x90],0xB
	mov dword ptr [esp+0x44],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_MULUNGDOJO]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_MULUNGDOJO+4]
	mov dword ptr [eax+4],ecx
	movzx edx,word ptr [_S_MULUNGDOJO+8]
	mov word ptr [eax+8],dx
	movzx ecx,byte ptr [_S_MULUNGDOJO+10]
	mov byte ptr [eax+0xA],cl
	push 0xB
	lea ecx,[esp+0x40]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 7
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x90],0xC
	mov dword ptr [esp+0x48],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_MASERIA]
	mov dword ptr [eax],edx
	movzx ecx,word ptr [_S_MASERIA+4]
	mov word ptr [eax+4],cx
	movzx edx,byte ptr [_S_MASERIA+6]
	push 7
	lea ecx,[esp+0x44]
	mov byte ptr [eax+6],dl
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 7
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x90],0xD
	mov dword ptr [esp+0x4C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_ELLINIA]
	mov dword ptr [eax],ecx
	movzx edx,word ptr [_S_ELLINIA+4]
	mov word ptr [eax+4],dx
	movzx ecx,byte ptr [_S_ELLINIA+6]
	mov byte ptr [eax+6],cl
	push 7
	lea ecx,[esp+0x48]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [esp+0x88],0xE
	mov dword ptr [esp+0x48],ebx
	push ebx
	push 8
	lea ecx,[esp+0x50]
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_AQUARIUM]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_AQUARIUM+4]
	mov dword ptr [eax+4],ecx
	push 8
	lea ecx,[esp+0x4C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 6
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x90],0xF
	mov dword ptr [esp+0x54],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_ARIANT]
	mov dword ptr [eax],edx
	movzx ecx,word ptr [_S_ARIANT+4]
	mov word ptr [eax+4],cx
	push 6
	lea ecx,[esp+0x50]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 6
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x90],0x10
	mov dword ptr [esp+0x58],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_PERION]
	mov dword ptr [eax],edx
	movzx ecx,word ptr [_S_PERION+4]
	mov word ptr [eax+4],cx
	push 6
	lea ecx,[esp+0x54]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 9
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x90],0x11
	mov dword ptr [esp+0x5C],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_LUDIBRIUM]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_LUDIBRIUM+4]
	mov dword ptr [eax+4],ecx
	movzx edx,byte ptr [_S_LUDIBRIUM+8]
	push 9
	lea ecx,[esp+0x58]
	mov byte ptr [eax+8],dl
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 7
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x90],0x12
	mov dword ptr [esp+0x60],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_MAGATIA]
	mov dword ptr [eax],ecx
	movzx edx,word ptr [_S_MAGATIA+4]
	mov word ptr [eax+4],dx
	movzx ecx,byte ptr [_S_MAGATIA+6]
	mov byte ptr [eax+6],cl
	push 7
	lea ecx,[esp+0x5C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xC
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x90],0x13
	mov dword ptr [esp+0x64],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_KERNINGCITY]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_KERNINGCITY+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [_S_KERNINGCITY+8]
	push 0xC
	lea ecx,[esp+0x60]
	mov dword ptr [eax+8],edx
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xC
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x90],0x14
	mov dword ptr [esp+0x68],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_OMEGASECTOR]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_OMEGASECTOR+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_OMEGASECTOR+8]
	mov dword ptr [eax+8],ecx
	push 0xC
	lea ecx,[esp+0x64]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xE
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x90],0x15
	mov dword ptr [esp+0x6C],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_TEMPLEOFTIME]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_TEMPLEOFTIME+4]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [_S_TEMPLEOFTIME+8]
	mov dword ptr [eax+8],edx
	movzx ecx,word ptr [_S_TEMPLEOFTIME+12]
	mov word ptr [eax+0xC],cx
	push 0xE
	lea ecx,[esp+0x68]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xA
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x90],0x16
	mov dword ptr [esp+0x70],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_SLEEPYWOOD]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [_S_SLEEPYWOOD+4]
	mov dword ptr [eax+4],ecx
	movzx edx,word ptr [_S_SLEEPYWOOD+8]
	push 0xA
	lea ecx,[esp+0x6C]
	mov word ptr [eax+8],dx
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0x10
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x90],0x17
	mov dword ptr [esp+0x74],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_KOREANFOLKTOWN]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_KOREANFOLKTOWN+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_KOREANFOLKTOWN+8]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [_S_KOREANFOLKTOWN+12]
	push 0x10
	lea ecx,[esp+0x70]
	mov dword ptr [eax+0xC],edx
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 0xC
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x90],0x18
	mov dword ptr [esp+0x78],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_ELLINFOREST]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_ELLINFOREST+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_ELLINFOREST+8]
	mov dword ptr [eax+8],ecx
	push 0xC
	lea ecx,[esp+0x74]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 5
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x90],0x19
	mov dword ptr [esp+0x7C],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_ORBIS]
	mov dword ptr [eax],edx
	movzx ecx,byte ptr [_S_ORBIS+4]
	mov byte ptr [eax+4],cl
	push 5
	lea ecx,[esp+0x78]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 6
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x90],0x1A
	mov dword ptr [esp+0x80],ebx
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_LEAFRE]
	mov dword ptr [eax],edx
	movzx ecx,word ptr [_S_LEAFRE+4]
	mov word ptr [eax+4],cx
	push 6
	lea ecx,[esp+0x7C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 3
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0x90],0x1B
	mov dword ptr [esp+0x84],ebx
	call ZXString<char>::GetBuffer
	movzx edx,word ptr [_S_NLC]
	mov word ptr [eax],dx
	movzx ecx,byte ptr [_S_NLC+2]
	mov byte ptr [eax+2],cl
	push 3
	lea ecx,[esp+0x80]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [esp+0x88],0x1C
	xor edi,edi
	lea ebp,[esp+0x34]
	lea esp,[esp]

 Block15:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+0x10]
	mov ecx,edi
	shr edx,cl
	test dl,1
	je Block17

 Block16:
	push ebp
	push 0xFFFFFFFF
	lea ecx,[esi+0x94]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block17:
	inc edi
	add ebp,4
	cmp edi,0x13
	jl Block15

 Block18:
	push offset ZXString<char>::~ZXString<char>
	push 0x13
	push 4
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x98],bl
	call __eh_vector_dtor_iterator

 Block19:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	jne Block21

 Block20:
	xor eax,eax
	jmp Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	mov ecx,dword ptr [esi+0xA4]
	dec eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	jne Block24

 Block23:
	xor eax,eax
	jmp Block25

 Block24:
	mov eax,dword ptr [eax-4]

 Block25:
	mov ecx,dword ptr [esi+0xAC]
	dec eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x94]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block26:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 8
}
}
// CUIFindFriendDetail::Draw
_SUB_EXCEPTION_HANDLER(3B8290)
__SUB_CLASS_THIS(003B8290, __thiscall, 71605,  CUIFindFriendDetail, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B8290
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
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
	mov dword ptr [ebp-0x54],esi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	xor ebx,ebx
	cmp dword ptr [esi+0x8C],ebx
	je Block105

 Block1:
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[ebp-0x50]
	push 1
	push edx
	mov dword ptr [ebp-4],ebx
	call get_basic_font
	lea eax,[ebp-0x44]
	push 0x4C
	push eax
	mov byte ptr [ebp-4],1
	call get_basic_font
	lea ecx,[ebp-0x4C]
	push ebx
	push ecx
	mov byte ptr [ebp-4],2
	call get_basic_font
	add esp,0x18
	mov eax,dword ptr [esi+0x8C]
	add eax,4
	push eax
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp-0x48],ebx
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp-0x4C]
	push 0x55
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp-0x18],esp
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	lea eax,[ebp-0x48]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x28]
	push ecx
	call edi
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],5
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[ebp-0x68]
	push edx
	mov byte ptr [ebp-4],6
	call edi
	lea eax,[ebp-0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [ebp-0x4C]
	lea ecx,[ebp-0x28]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x48]
	push eax
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	mov bl,7
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp-0x48]
	push 0x87
	lea eax,[ebp-0x68]
	push eax
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov byte ptr [ebp-4],8
	call IWzFont::CalcTextWidth
	cmp dword ptr [ebp-0x40],0
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,0x55
	sub ecx,eax
	shr ecx,1
	add ecx,0x10
	push ecx
	mov ecx,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x28],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	lea edx,[ebp-0x38]
	push edx
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0xA
	call edi
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov bl,0xB
	mov eax,0x20
	mov byte ptr [ebp-4],bl
	call __chkstk
	mov eax,esp
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,dword ptr [ebp-0x50]
	lea edx,[ebp-0x28]
	push edx
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	movzx ecx,byte ptr [ecx+8]
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x40]
	push 0x1D
	mov byte ptr [ebp-4],0xC
	push 0x9B
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0xA
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],4
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	lea eax,[ebp-0x38]
	push eax
	call edi
	lea ecx,[ebp-0x38]
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
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0xD
	call edi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov eax,dword ptr [ebp-0x50]
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push eax
	mov eax,dword ptr [esi+0x8C]
	movsx ecx,word ptr [eax+0xA]
	mov bl,0xE
	push ecx
	mov byte ptr [ebp-4],bl
	call get_job_name
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x2F
	mov byte ptr [ebp-4],0xF
	push 0x9B
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x28],di
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x38],di
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block73

 Block50:
	cmp dword ptr [eax-4],0
	jbe Block73

 Block51:
	mov eax,dword ptr [esi+0xA4]
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block53

 Block52:
	mov eax,dword ptr [eax-4]

 Block53:
	sub eax,ecx
	cmp eax,2
	jl Block55

 Block54:
	mov eax,2

 Block55:
	xor edi,edi
	mov dword ptr [ebp-0x3C],eax
	test eax,eax
	jle Block73

 Block56:
	lea ebx,[edi+0x67]
	lea esi,[ecx*4]

 Block57:
	mov eax,dword ptr [ebp-0x54]
	mov eax,dword ptr [eax+0x90]
	add eax,esi
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::op_assign
	push 0x63
	push ecx
	mov ecx,dword ptr [ebp-0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp-0x18],esp
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block59:
	lea ecx,[ebp-0x14]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block60:
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0x11
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block61:
	mov edx,dword ptr [ebp-0x44]
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x28]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x12
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push ebx
	mov byte ptr [ebp-4],0x13
	push 0x96
	mov byte ptr [ebp-4],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0x11
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x10
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	inc edi
	add esi,4
	add ebx,0x12
	cmp edi,dword ptr [ebp-0x3C]
	jl Block57

 Block72:
	mov esi,dword ptr [ebp-0x54]

 Block73:
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block96

 Block74:
	cmp dword ptr [eax-4],0
	jbe Block96

 Block75:
	mov eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block77

 Block76:
	mov eax,dword ptr [eax-4]

 Block77:
	sub eax,ecx
	cmp eax,2
	mov dword ptr [ebp-0x3C],eax
	jl Block79

 Block78:
	mov dword ptr [ebp-0x3C],2

 Block79:
	cmp dword ptr [ebp-0x3C],0
	mov dword ptr [ebp-0x18],0
	jle Block96

 Block80:
	mov ebx,0x8B
	lea esi,[ecx*4]
	xor edi,edi
	lea ecx,[ecx]

 Block81:
	mov edx,dword ptr [ebp-0x54]
	mov eax,dword ptr [edx+0x94]
	add eax,esi
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call ZXString<char>::op_assign
	push 0x63
	push ecx
	mov ecx,dword ptr [ebp-0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp-0x58],esp
	cmp eax,edi
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block83:
	lea ecx,[ebp-0x14]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block4

 Block84:
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0x15
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block4

 Block85:
	mov edx,dword ptr [ebp-0x44]
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x28]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x16
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push ebx
	mov byte ptr [ebp-4],0x17
	push 0x96
	mov byte ptr [ebp-4],0x16
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0x15
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	cmp eax,edi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x14
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	cmp eax,edi
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	add esi,4
	add ebx,0x12
	cmp eax,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-0x18],eax
	jl Block81

 Block96:
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block100

 Block99:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block100:
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [ebp-0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block105:
	lea esp,[ebp-0x78]
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
// CUIFindFriend::OnChildNotify
__SUB_CLASS_THIS(003BB630, __thiscall, 71736,  CUIFindFriend, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x7D5
	push esi
	mov esi,dword ptr [esp+0xC]
	je Block5

 Block1:
	sub eax,1
	jne Block7

 Block2:
	mov eax,esi
	cmp eax,0x12C
	jb Block9

 Block3:
	cmp eax,0x130
	ja Block9

 Block4:
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 0xC

 Block5:
	cmp esi,0x258
	jne Block7

 Block6:
	mov eax,dword ptr [esp+0x10]
	push eax
	call CUIFindFriend::ListSorting
	pop esi
	ret 0xC

 Block7:
	cmp esi,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x20]
	call edx

 Block9:
	pop esi
	ret 0xC
}
}
// CUIFindFriend::OnToggleDetailClose
__SUB_CLASS_THIS0(003B7EA0, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0xB5C
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIFindFriendDetail>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CUIFindFriend::OnToggleDetail
_SUB_EXCEPTION_HANDLER(3BABC0)
__SUB_CLASS_THIS0(003BABC0, __thiscall, 71734,  CUIFindFriend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BABC0
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
	mov eax,dword ptr [esi+0xB44]
	cmp eax,0xFFFFFFFF
	jne Block5

 Block1:
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block4

 Block2:
	call CWnd::Destroy
	add esi,0xB5C
	cmp dword ptr [esi+4],0
	je Block13

 Block3:
	push 0
	mov ecx,esi
	call ZRef<CUIFindFriendDetail>::_ReleaseRaw
	mov dword ptr [esi+4],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block4:
	cmp eax,0xFFFFFFFF
	je Block13

 Block5:
	cmp dword ptr [esi+0xB60],0
	jne Block10

 Block6:
	push 0xB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	add eax,0x75
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add eax,0xB5
	push eax
	mov ecx,ebx
	call CUIFindFriendDetail::_ctor_0
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax
	lea ecx,[esi+0xB5C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIFindFriendDetail>::op_assign_ptr

 Block10:
	mov eax,dword ptr [esi+0xB44]
	sub esp,8
	mov dword ptr [esp+0x18],esp
	mov edi,esp
	push eax
	lea ecx,[esi+0xB48]
	call ZList<ZRef<SearchInfo>>::FindIndex
	mov eax,dword ptr [eax+4]
	mov dword ptr [edi+4],eax
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov ecx,dword ptr [esi+0xB60]
	call CUIFindFriendDetail::SetDetailInfo

 Block13:
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
// CUIFindFriend::ListSorting
_SUB_EXCEPTION_HANDLER(3BADB0)
__SUB_CLASS_THIS(003BADB0, __thiscall, 71744,  CUIFindFriend, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BADB0
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
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esi+0xB44],0xFFFFFFFF
	call CUIFindFriend::OnToggleDetail
	mov eax,dword ptr [esi+0xB50]
	test eax,eax
	je Block132

 Block1:
	mov eax,dword ptr [esp+0x50]
	mov ebx,3
	cmp eax,4
	ja Block82

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block12
cmp EAX, 2
je Block25
cmp EAX, 3
je Block38
cmp EAX, 4
je Block61


 Block3:
	mov eax,esi
	mov eax,dword ptr [eax+0xB54]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block82

 Block4:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	xor ebp,ebp
	nop

 Block5:
	lea ecx,[esp+0x50]
	push ecx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	cmp esi,ebp
	je Block7

 Block6:
	lea edx,[esi-0xC]
	push edx
	call ebx

 Block7:
	mov dword ptr [esi+0x14],ebp
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call ebx
	cmp esi,ebp
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	cmp dword ptr [esp+0x50],ebp
	jne Block5

 Block11:
	jmp Block82

 Block12:
	mov eax,esi
	mov eax,dword ptr [eax+0xB54]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block82

 Block13:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	lea ecx,[esp+0x50]
	push ecx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block16

 Block15:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xB40]
	movzx edi,byte ptr [esi+8]
	movzx edx,byte ptr [ecx+8]
	mov eax,edi
	sub eax,edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,ebx
	jg Block18

 Block17:
	mov dword ptr [esi+0x14],ebx
	jmp Block20

 Block18:
	movzx ecx,byte ptr [ecx+8]
	mov eax,edi
	sub eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,5
	jg Block20

 Block19:
	mov dword ptr [esi+0x14],1

 Block20:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block21:
	push edi
	call ebp
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block23:
	cmp dword ptr [esp+0x50],0
	jne Block14

 Block24:
	jmp Block82

 Block25:
	mov ecx,esi
	mov eax,dword ptr [ecx+0xB54]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block82

 Block26:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	lea edx,[esp+0x50]
	push edx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block29

 Block28:
	lea eax,[esi-0xC]
	push eax
	call ebp

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0xB40]
	movsx edx,word ptr [ecx+0xA]
	movsx eax,word ptr [esi+0xA]
	sub eax,edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,ebx
	jg Block31

 Block30:
	mov dword ptr [esi+0x14],ebx
	jmp Block33

 Block31:
	movzx eax,byte ptr [esi+8]
	movsx ecx,word ptr [ecx+0xA]
	sub eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,5
	jg Block33

 Block32:
	mov dword ptr [esi+0x14],1

 Block33:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	push edi
	call ebp
	test esi,esi
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	cmp dword ptr [esp+0x50],0
	jne Block27

 Block37:
	jmp Block82

 Block38:
	mov ecx,esi
	mov eax,dword ptr [ecx+0xB54]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block82

 Block39:
	mov ebp,ecx
	mov edi,edi

 Block40:
	lea edx,[esp+0x50]
	push edx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block42

 Block41:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	mov eax,2
	mov dword ptr [esi+0x14],0
	lea edx,[eax+6]
	lea ecx,[ecx]

 Block43:
	mov ecx,dword ptr [ebp+0xB40]
	mov ebx,dword ptr [ecx+0xC]
	lea edi,[eax-2]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block46

 Block44:
	mov ebx,dword ptr [esi+0xC]
	shr ebx,cl
	test bl,1
	je Block46

 Block45:
	inc dword ptr [esi+0x14]

 Block46:
	mov ecx,dword ptr [ebp+0xB40]
	mov ebx,dword ptr [ecx+0xC]
	lea edi,[eax-1]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block49

 Block47:
	mov ebx,dword ptr [esi+0xC]
	shr ebx,cl
	test bl,1
	je Block49

 Block48:
	inc dword ptr [esi+0x14]

 Block49:
	mov ecx,dword ptr [ebp+0xB40]
	mov ebx,dword ptr [ecx+0xC]
	mov ecx,eax
	shr ebx,cl
	test bl,1
	je Block52

 Block50:
	mov ebx,dword ptr [esi+0xC]
	shr ebx,cl
	test bl,1
	je Block52

 Block51:
	inc dword ptr [esi+0x14]

 Block52:
	mov ecx,dword ptr [ebp+0xB40]
	mov ebx,dword ptr [ecx+0xC]
	lea edi,[eax+1]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block55

 Block53:
	mov ebx,dword ptr [esi+0xC]
	shr ebx,cl
	test bl,1
	je Block55

 Block54:
	inc dword ptr [esi+0x14]

 Block55:
	add eax,4
	sub edx,1
	jne Block43

 Block56:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block57:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block59

 Block58:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block59:
	cmp dword ptr [esp+0x50],0
	jne Block40

 Block60:
	jmp Block82

 Block61:
	mov ecx,esi
	mov eax,dword ptr [ecx+0xB54]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block82

 Block62:
	lea edx,[esp+0x50]
	push edx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block64

 Block63:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block64:
	mov edx,dword ptr [esp+0x14]
	mov eax,2
	mov dword ptr [esi+0x14],0
	lea ebp,[eax+6]
	lea esp,[esp]

 Block65:
	mov ecx,dword ptr [edx+0xB40]
	mov ebx,dword ptr [ecx+0x10]
	lea edi,[eax-2]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block68

 Block66:
	mov ebx,dword ptr [esi+0x10]
	shr ebx,cl
	test bl,1
	je Block68

 Block67:
	inc dword ptr [esi+0x14]

 Block68:
	mov ecx,dword ptr [edx+0xB40]
	mov ebx,dword ptr [ecx+0x10]
	lea edi,[eax-1]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block71

 Block69:
	mov ebx,dword ptr [esi+0x10]
	shr ebx,cl
	test bl,1
	je Block71

 Block70:
	inc dword ptr [esi+0x14]

 Block71:
	mov ecx,dword ptr [edx+0xB40]
	mov ebx,dword ptr [ecx+0x10]
	mov ecx,eax
	shr ebx,cl
	test bl,1
	je Block74

 Block72:
	mov ebx,dword ptr [esi+0x10]
	shr ebx,cl
	test bl,1
	je Block74

 Block73:
	inc dword ptr [esi+0x14]

 Block74:
	mov ecx,dword ptr [edx+0xB40]
	mov ebx,dword ptr [ecx+0x10]
	lea edi,[eax+1]
	mov ecx,edi
	shr ebx,cl
	test bl,1
	je Block77

 Block75:
	mov ebx,dword ptr [esi+0x10]
	shr ebx,cl
	test bl,1
	je Block77

 Block76:
	inc dword ptr [esi+0x14]

 Block77:
	add eax,4
	sub ebp,1
	jne Block65

 Block78:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block81

 Block79:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block81

 Block80:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block81:
	cmp dword ptr [esp+0x50],0
	jne Block62

 Block82:
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esp+0x2C],offset ZList<ZRef<SearchInfo>>::`vftable'
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],eax
	cmp dword ptr [ecx+0xB50],eax
	jbe Block114

 Block83:
	lea esp,[esp]

 Block84:
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0xB54]
	mov byte ptr [esp+0x48],1
	mov dword ptr [esp+0x50],0xFFFFFF9C
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block98

 Block85:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	nop

 Block86:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block88

 Block87:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block88:
	mov eax,dword ptr [esi+0x14]
	cmp dword ptr [esp+0x50],eax
	mov byte ptr [esp+0x48],2
	jge Block94

 Block89:
	lea edx,[esi-0xC]
	push edx
	mov dword ptr [esp+0x54],eax
	call ebx
	test ebp,ebp
	je Block93

 Block90:
	lea edi,[ebp-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block91:
	push ebp
	call ebx
	test edi,edi
	je Block93

 Block92:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block93:
	mov ebp,esi
	mov dword ptr [esp+0x20],ebp

 Block94:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x4C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block97

 Block95:
	push edi
	call ebx
	test esi,esi
	je Block97

 Block96:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block97:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x28],0
	jne Block86

 Block98:
	mov esi,dword ptr [esp+0x14]
	push 0
	lea eax,[esp+0x20]
	add esi,0xB48
	push eax
	mov ecx,esi
	call ZList<ZRef<SearchInfo>>::Find
	test eax,eax
	je Block100

 Block99:
	push eax
	mov ecx,esi
	call ZList<ZRef<SearchInfo>>::RemoveAt
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call ZList<ZRef<SearchInfo>>::Find
	test eax,eax
	jne Block99

 Block100:
	lea ecx,[esp+0x2C]
	call ZList<ZRef<SearchInfo>>::AddTail_
	mov ebx,eax
	test ebp,ebp
	je Block102

 Block101:
	lea edx,[ebp-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block107

 Block103:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block106

 Block104:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block106

 Block105:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block106:
	mov dword ptr [ebx+4],0

 Block107:
	mov dword ptr [ebx+4],ebp
	mov byte ptr [esp+0x48],0
	test ebp,ebp
	je Block112

 Block108:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block111

 Block109:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block111

 Block110:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block111:
	mov dword ptr [esp+0x20],0

 Block112:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0xB50],0
	ja Block84

 Block113:
	mov eax,dword ptr [esp+0x38]

 Block114:
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block131

 Block115:
	lea ebx,[ebx]

 Block116:
	lea ecx,[esp+0x50]
	push ecx
	call ZList<ZRef<SearchInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block118

 Block117:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block118:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xB48
	mov byte ptr [esp+0x48],3
	call ZList<ZRef<SearchInfo>>::AddTail_
	mov ebx,eax
	test esi,esi
	je Block120

 Block119:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block120:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block125

 Block121:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block124

 Block122:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block124

 Block123:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block124:
	mov dword ptr [ebx+4],0

 Block125:
	mov dword ptr [ebx+4],esi
	mov byte ptr [esp+0x48],0
	test esi,esi
	je Block130

 Block126:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block129

 Block127:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block129

 Block128:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block129:
	mov dword ptr [esp+0x28],0

 Block130:
	cmp dword ptr [esp+0x50],0
	jne Block116

 Block131:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x2C],offset ZList<ZRef<SearchInfo>>::`vftable'
	call ZList<ZRef<SearchInfo>>::RemoveAll

 Block132:
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
// CUIFindFriend::OnMoveWnd
__SUB_CLASS_THIS(003B7520, __thiscall, 71742,  CUIFindFriend, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xB60]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x75
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xB5
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUIFindFriend::OnSetFocus
__SUB_CLASS_THIS(003B7C30, __thiscall, 71739,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIFindFriend::Draw
_SUB_EXCEPTION_HANDLER(3B9450)
__SUB_CLASS_THIS(003B9450, __thiscall, 71741,  CUIFindFriend, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B9450
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
	mov edi,ecx
	mov dword ptr [esp+0x20],edi
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0xB34]
	mov ebp,dword ptr [eax+0x38]
	mov eax,dword ptr [edi+0xB50]
	sub eax,ebp
	xor ecx,ecx
	cmp eax,9
	mov dword ptr [esp+0x80],ecx
	mov dword ptr [esp+0x14],eax
	jl Block2

 Block1:
	mov dword ptr [esp+0x14],9

 Block2:
	cmp dword ptr [esp+0x14],ecx
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],ecx
	jle Block43

 Block3:
	mov dword ptr [esp+0x88],ebp
	mov ebx,0x53
	jmp Block5

 Block4:
	mov edi,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x88]

 Block5:
	push ebp
	lea ecx,[edi+0xB48]
	call ZList<ZRef<SearchInfo>>::FindIndex
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov byte ptr [esp+0x80],1
	cmp dword ptr [edi+0xB44],ebp
	jne Block22

 Block8:
	test esi,esi
	je Block46

 Block9:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFF9FB5CE
	push 0x14
	push 0x91
	lea eax,[ebx-3]
	push eax
	push 0xA
	push esi
	call ecx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block47

 Block12:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],2
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block47

 Block13:
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x2C]
	push 0
	push edx
	mov byte ptr [esp+0x90],3
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x40]
	mov eax,dword ptr [eax+4]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],4
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0x94],5
	push 0xD
	mov ecx,esi
	mov byte ptr [esp+0x98],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov edi,8
	mov byte ptr [esp+0x80],2
	cmp word ptr [esp+0x38],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x48],di
	jne Block21

 Block20:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	jmp Block35

 Block21:
	lea eax,[esp+0x48]
	jmp Block38

 Block22:
	test esi,esi
	je Block46

 Block23:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0x14
	push 0x91
	lea edx,[ebx-3]
	push edx
	push 0xA
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call edi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block47

 Block26:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x84],6
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block47

 Block27:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x30]
	push 1
	push ecx
	mov byte ptr [esp+0x90],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [edx+4]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],8
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0x94],9
	push 0xD
	mov ecx,esi
	mov byte ptr [esp+0x98],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov edi,8
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x58],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x68],di
	jne Block37

 Block34:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx

 Block35:
	test eax,eax
	je Block39

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block37:
	lea eax,[esp+0x68]

 Block38:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov edi,dword ptr [esp+0x34]
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x84],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block42

 Block41:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block42:
	mov eax,dword ptr [esp+0x18]
	inc dword ptr [esp+0x88]
	inc eax
	add ebx,0x14
	cmp eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x18],eax
	jl Block4

 Block43:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test esi,esi
	je Block45

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block45:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	push eax
	call _com_issue_error
}
}
// CUIFindFriendDetail::IsKindOf
__SUB_CLASS_THIS(003B99A0, __thiscall, 71614,  CUIFindFriendDetail, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIFindFriendDetail::ms_RTTI_CUIFindFriendDetail
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
