#include "regen.hpp"
// UIFriendGroup.ipp
#include "UIFriendGroup.hpp"

// CUIFriendGroup::OnCreate
_SUB_EXCEPTION_HANDLER(3BBFD0)
__SUB_CLASS_THIS(003BBFD0, __thiscall, 83068,  CUIFriendGroup, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BBFD0
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
	xor edi,edi
	push edi
	push edi
	lea ebp,[esi+0xFC]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	mov dword ptr [esi+0xF8],0x14
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],edi
	lea eax,[esp+0x14]
	push 0x1962
	push eax
	mov dword ptr [esp+0xBC],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB8],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],0
	cmp eax,edi
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
	mov byte ptr [esp+0xB4],2
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0xB4],0
	cmp eax,edi
	je Block17

 Block6:
	add eax,8
	cmp eax,edi
	je Block17

 Block7:
	lea ebx,[eax-8]
	cmp ebx,edi
	je Block9

 Block8:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block11

 Block10:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov eax,dword ptr [esi+0x24]
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	lea ebx,[esp+0x2C]
	push ebx
	push edi
	push 7
	add eax,0xFFFFFFEC
	push eax
	mov eax,dword ptr [edx+0x28]
	push 2
	push esi
	call eax
	push edi
	push edi
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGUS__143
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],edi
	je Block13

 Block12:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block13:
	push edi
	push edi
	push edi
	push 2
	push offset _S_UIUIWINDOW2IMGUS__142
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],edi
	je Block15

 Block14:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block15:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB4],3
	cmp eax,edi
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block19

 Block17:
	xor ebx,ebx
	jmp Block9

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0xB4],0
	cmp eax,edi
	je Block27

 Block20:
	add eax,8
	cmp eax,edi
	je Block27

 Block21:
	lea ebx,[eax-8]
	cmp ebx,edi
	je Block23

 Block22:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block25

 Block24:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block25:
	mov ecx,esi
	call CUIFriendGroup::SetScrollBar
	lea ecx,[esp+0x70]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov ebp,0xB
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xB8],4
	mov dword ptr [esp+0x98],0xFFFFFFFF
	mov dword ptr [esp+0xA4],0x10
	mov dword ptr [esp+0x8C],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB4],5
	cmp eax,edi
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block29

 Block27:
	xor ebx,ebx
	jmp Block23

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0xB4],4
	cmp eax,edi
	je Block39

 Block30:
	add eax,8
	cmp eax,edi
	je Block39

 Block31:
	lea ebx,[eax-8]
	cmp ebx,edi
	je Block33

 Block32:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block35

 Block34:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x70]
	push eax
	push 0xC
	push 0xEF
	push 0x43
	push 0xD
	push 4
	push esi
	call edx
	mov eax,dword ptr [esi+0x94]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x3C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov dword ptr [esp+0x4C],ebp
	mov byte ptr [esp+0xB4],6
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x58],0x5D
	mov dword ptr [esp+0x5C],0xE
	mov dword ptr [esp+0x50],0xFFB5B5B5
	lea ebp,[esi+0xB0]
	jmp Block37

 Block37:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB4],7
	test eax,eax
	je Block40

 Block38:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block41

 Block39:
	xor ebx,ebx
	jmp Block33

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0xB4],6
	test eax,eax
	je Block58

 Block42:
	add eax,8
	je Block58

 Block43:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block45

 Block44:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],ebx
	test eax,eax
	je Block49

 Block46:
	lea ebx,[eax+8]
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block49

 Block48:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block49:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esi+0xF8]
	imul edx,edi
	add edx,0x87
	push edx
	push 0xC
	lea edx,[edi+5]
	push edx
	push esi
	call eax
	inc edi
	add ebp,8
	cmp edi,7
	jl Block37

 Block50:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0xE4]
	push edi
	push eax
	mov byte ptr [esp+0xC0],8
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB4],6
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebx,[esi+0xE8]
	push ebx
	push eax
	mov byte ptr [esp+0xC0],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB4],6
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0xEC]
	push ebp
	push eax
	mov byte ptr [esp+0xC0],0xA
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB4],6
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block57:
	push eax
	call _com_issue_error

 Block58:
	xor ebx,ebx
	jmp Block45

 Block59:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xCC],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xC4],0xC
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov byte ptr [esp+0xC4],0xB
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB4],6
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x1C]
	push eax
	push 0xFF000000
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xCC],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0xC4],0xE
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov byte ptr [esp+0xC4],0xD
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB4],6
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFB5B5B5
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0xCC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xC4],0x10
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0xC4],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB4],6
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov esi,dword ptr [esp+0x48]
	mov byte ptr [esp+0xB4],0x11
	test esi,esi
	je Block90

 Block82:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block83:
	test esi,esi
	je Block89

 Block84:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block86:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block88

 Block87:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block88:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block89:
	mov dword ptr [esp+0x48],0

 Block90:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB4],4
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0xB4],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
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
// CUIFriendGroup::Friend::Friend
_SUB_EXCEPTION_HANDLER(4BE900)
__SUB_CLASS_THIS(004BE900, __thiscall, 83087,  CUIFriendGroup::Friend, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BE900
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
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],1
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	lea ecx,[esi+4]
	push edx
	mov byte ptr [esp+0x18],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUIFriendGroup::SetRet
__SUB_CLASS_THIS(003BCE80, __thiscall, 83066,  CUIFriendGroup, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,edi
	sub eax,1
	mov esi,ecx
	jne Block2

 Block1:
	call CUIFriendGroup::OnOK
	test eax,eax
	je Block5

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
	pop edi
	pop esi
	ret 4
}
}
// CUIFriendGroup::HitTest
__SUB_CLASS_THIS(003BBD90, __thiscall, 83070,  CUIFriendGroup, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
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
	mov ecx,0x18
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIFriendGroup::Draw
_SUB_EXCEPTION_HANDLER(3BC770)
__SUB_CLASS_THIS(003BC770, __thiscall, 83067,  CUIFriendGroup, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BC770
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
	mov eax,dword ptr [esp+0x54]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov edi,dword ptr [esp+0x1C]
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__148
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],0
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block2:
	lea ebp,[ebx+0xFC]
	mov ecx,ebp
	call CLayoutMan::CopyToCanvas_1
	push 0x5C
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__147
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block4

 Block3:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block4:
	mov ecx,ebp
	call CLayoutMan::CopyToCanvas_1
	push 0x5F
	push 0xC
	push offset _S_UIUIWINDOW2IMGUS__53
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block6:
	mov ecx,ebp
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [ebx+0xF8]
	add eax,0x5C
	push eax
	push 0xA
	push offset _S_UIUIWINDOW2IMGUS__146
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block8:
	mov ecx,ebp
	call CLayoutMan::CopyToCanvas_1
	mov esi,0x84
	mov dword ptr [esp+0x54],0

 Block9:
	cmp dword ptr [esp+0x54],6
	push esi
	push 0xA
	jne Block12

 Block10:
	push offset _S_UIUIWINDOW2IMGUS__145
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block14

 Block11:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	jmp Block14

 Block12:
	push offset _S_UIUIWINDOW2IMGUS__144
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block14

 Block13:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block14:
	mov ecx,ebp
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esp+0x54]
	add esi,dword ptr [ebx+0xF8]
	inc eax
	cmp eax,7
	mov dword ptr [esp+0x54],eax
	jl Block9

 Block15:
	mov eax,dword ptr [ebx+0xA0]
	mov edx,dword ptr [eax+0x38]
	lea eax,[edx+edx*2]
	xor ecx,ecx
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x20],edx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x18],eax
	lea ebp,[ebx+0xB0]
	jmp Block19

 Block18:
	mov edx,dword ptr [esp+0x20]

 Block19:
	mov eax,dword ptr [ebx+0x98]
	test eax,eax
	je Block21

 Block20:
	mov eax,dword ptr [eax-4]
	add ecx,edx
	cmp ecx,eax
	jb Block22

 Block21:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	jmp Block35

 Block22:
	mov esi,dword ptr [ebx+0x98]
	add esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x54]
	push esi
	mov dword ptr [esp+0x58],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[eax+0x44]
	mov byte ptr [esp+0x50],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edx,dword ptr [esi+8]
	mov ecx,dword ptr [ebp]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [ebp]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block37

 Block25:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],2
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block37

 Block26:
	mov eax,dword ptr [ebx+0xEC]
	mov esi,dword ptr [esi+4]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0x60],3
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x5C],4
	test edi,edi
	je Block41

 Block27:
	mov eax,dword ptr [ebx+0xF8]
	imul eax,dword ptr [esp+0x24]
	add eax,0x89
	push eax
	push 0x81
	mov ecx,edi
	mov byte ptr [esp+0x64],3
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x24],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x34],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov ecx,dword ptr [esp+0x14]
	add dword ptr [esp+0x18],0xC
	inc ecx
	add ebp,8
	cmp ecx,7
	mov dword ptr [esp+0x14],ecx
	jl Block18

 Block36:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x50],5
	call esi
	lea edx,[esp+0x34]
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
	mov ebx,dword ptr [ebx+0xE8]
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x64],esp
	push 0x18C9
	push edx
	mov byte ptr [esp+0x64],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x5C],7
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push 0x118
	push 0xE
	mov ecx,edi
	mov byte ptr [esp+0x64],6
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x4C],5
	cmp word ptr [esp+0x34],si
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x24],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call edx
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
// CUIFriendGroup::SetScrollBar
__SUB_CLASS_THIS0(003BBE60, __thiscall, 83065,  CUIFriendGroup, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xB4
	push 0x5C
	push 0xF2
	push 8
	push 1
	push 3
	push esi
	call edx
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [eax+0x34],0xEB
	mov eax,dword ptr [esi+0x98]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ecx,[eax+eax*8-0x3F]
	add ecx,ecx
	test ecx,ecx
	jg Block4

 Block3:
	mov ecx,dword ptr [esi+0xA0]
	push 0
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block4:
	mov eax,0x38E38E39
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+1]
	mov ecx,dword ptr [esi+0xA0]
	push edx
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CUIFriendGroup::GetRTTI
__SUB_CLASS_THIS0(003BD0A0, __thiscall, 83074,  CUIFriendGroup, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIFriendGroup::ms_RTTI_CUIFriendGroup
	ret
}
}
// CUIFriendGroup::~CUIFriendGroup
_SUB_EXCEPTION_HANDLER(3BCF50)
__SUB_CLASS_THIS0(003BCF50, __thiscall, 83065,  CUIFriendGroup, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BCF50
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIFriendGroup::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFriendGroup::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFriendGroup::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xFC]
	mov dword ptr [esp+0x1C],9
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xF0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push 7
	push 8
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	call ZArray<CUIFriendGroup::Friend>::RemoveAll
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CUIFriendGroup::CUIFriendGroup
_SUB_EXCEPTION_HANDLER(3BD0F0)
__SUB_CLASS_THIS(003BD0F0, __thiscall, 83063,  CUIFriendGroup, void, long, long, NakedParam<ZXString<char>>, const ZArray<CUIFriendGroup::Friend>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BD0F0
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
	mov dword ptr [esp+0x18],edi
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIFriendGroup::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFriendGroup::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFriendGroup::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],edi
	mov eax,dword ptr [esp+0x2C]
	lea ecx,[esi+0x98]
	push eax
	mov byte ptr [esp+0x1C],2
	mov dword ptr [ecx],edi
	call ZArray<CUIFriendGroup::Friend>::operator=
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	push offset ZRef<CCtrlCheckBox>::~ZRef<CCtrlCheckBox>
	push offset ZRef<CCtrlCheckBox>::_ctor_default
	push 7
	push 8
	lea ecx,[esi+0xAC]
	push ecx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	lea edx,[esp+0x28]
	lea ecx,[esi+0xF0]
	push edx
	mov byte ptr [esp+0x1C],9
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push ecx
	push edx
	push offset _S_UIUIWINDOW2IMGUS__149
	mov ecx,esi
	mov byte ptr [esp+0x24],0xB
	call CDialog::CreateDlg2
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x94]
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CUIFriendGroup::OnChildNotify
__SUB_CLASS_THIS(003BBDD0, __thiscall, 83069,  CUIFriendGroup, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,3
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0xC8
	jne Block7

 Block5:
	lea ecx,[edi-5]
	test ecx,ecx
	jl Block7

 Block6:
	mov eax,dword ptr [esi+0xA0]
	mov eax,dword ptr [eax+0x38]
	mov edx,dword ptr [esi+ecx*8+0xB0]
	mov edx,dword ptr [edx+0x48]
	add eax,ecx
	lea ecx,[eax+eax*2]
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [eax+ecx*4+8],edx

 Block7:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	cmp ebx,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIFriendGroup::OnOK
_SUB_EXCEPTION_HANDLER(3BCBE0)
__SUB_CLASS_THIS0(003BCBE0, __thiscall, 83071,  CUIFriendGroup, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BCBE0
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
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov edi,dword ptr [esp+0x14]
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	cmp edi,ebx
	je Block2

 Block1:
	cmp byte ptr [edi],bl
	jne Block5

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x189F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp edi,ebx
	je Block4

 Block3:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block5:
	xor ecx,ecx
	xor edx,edx

 Block6:
	mov eax,dword ptr [esi+0x98]
	cmp eax,ebx
	je Block10

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block10

 Block8:
	cmp dword ptr [edx+eax+8],ebx
	jne Block11

 Block9:
	inc ecx
	add edx,0xC
	jmp Block6

 Block10:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x18AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add edi,0xFFFFFFF4
	push edi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,0x18
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block11:
	cmp dword ptr [esi+0xF4],ebx
	jne Block13

 Block12:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esi+0xF0]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block20

 Block13:
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x2C],1
	call CWvsContext::GetFriendGroups
	mov ebp,dword ptr [esp+0x18]
	xor esi,esi
	mov edi,ebp
	lea ebx,[ebx]

 Block14:
	cmp ebp,ebx
	je Block19

 Block15:
	cmp esi,dword ptr [ebp-4]
	jae Block19

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block18

 Block17:
	inc esi
	add edi,4
	jmp Block14

 Block18:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x18DB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],bl
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block19:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],bl
	call ZArray<ZXString<char>>::RemoveAll
	mov edi,dword ptr [esp+0x14]

 Block20:
	add edi,0xFFFFFFF4
	push edi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov eax,1
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
// CUIFriendGroup::IsKindOf
__SUB_CLASS_THIS(003BD0C0, __thiscall, 83075,  CUIFriendGroup, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIFriendGroup::ms_RTTI_CUIFriendGroup
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
// CUIFriendGroup::Friend::~Friend
_SUB_EXCEPTION_HANDLER(3BBEF0)
__SUB_CLASS_THIS0(003BBEF0, __thiscall, 83090,  CUIFriendGroup::Friend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BBEF0
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
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi]
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
// CUIFriendGroup::Friend::Friend
_SUB_EXCEPTION_HANDLER(3BBF60)
__SUB_CLASS_THIS(003BBF60, __thiscall, 83086,  CUIFriendGroup::Friend, void, const CUIFriendGroup::Friend&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BBF60
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
	push edi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	lea eax,[edi+4]
	lea ecx,[esi+4]
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
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
