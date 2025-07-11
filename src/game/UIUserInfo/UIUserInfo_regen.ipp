#include "regen.hpp"
// UIUserInfo.ipp
#include "UIUserInfo.hpp"

// CUIItemSearch::OnChildNotify
__SUB_CLASS_THIS(004AA7D0, __thiscall, 56506,  CUIItemSearch, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	push eax
	call CWnd::InvalidateRect
	ret 0xC

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block4:
	ret 0xC
}
}
// CUIUserInfoExceptionList::CUIUserInfoExceptionList
_SUB_EXCEPTION_HANDLER(4AD7E0)
__SUB_CLASS_THIS(004AD7E0, __thiscall, 56600,  CUIUserInfoExceptionList, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AD7E0
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
	mov dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoExceptionList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoExceptionList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoExceptionList::`vftable'{for `ZRefCounted'}
	mov dword ptr [ecx+4],eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],eax
	mov dword ptr [esi+0xC8],eax
	mov dword ptr [esi+0xCC],eax
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	push eax
	push 1
	push eax
	mov eax,dword ptr [esp+0x28]
	push 1
	push 0xA
	push 0x9D
	push 0xAB
	push edx
	mov dword ptr [esi+0xB8],ecx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x38],8
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUIItemSearchResult::OnMouseEnter
__SUB_CLASS_THIS(004AA780, __thiscall, 56472,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jne Block2

 Block1:
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip

 Block2:
	push edi
	mov ecx,esi
	call CWnd::OnMouseEnter
	pop edi
	pop esi
	ret 4
}
}
// CUIItemSearchResult::Draw
_SUB_EXCEPTION_HANDLER(4ADF40)
__SUB_CLASS_THIS(004ADF40, __thiscall, 56473,  CUIItemSearchResult, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ADF40
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x4C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov eax,dword ptr [ebp+0x84]
	mov edi,dword ptr [eax+0x38]
	mov esi,dword ptr [esp+0x4C]
	mov ecx,edi
	add ecx,5
	cmp edi,ecx
	mov dword ptr [esp+0x44],0
	jge Block27

 Block1:
	mov ecx,dword ptr [ebp+0x88]
	test ecx,ecx
	je Block27

 Block2:
	cmp edi,dword ptr [ecx-4]
	jae Block27

 Block3:
	cmp edi,dword ptr [ebp+0x90]
	jne Block6

 Block4:
	mov ecx,dword ptr [eax+0x38]
	test esi,esi
	je Block30

 Block5:
	push 0xFF5B7B9E
	jmp Block9

 Block6:
	cmp edi,dword ptr [ebp+0x8C]
	jne Block11

 Block7:
	mov ecx,dword ptr [eax+0x38]
	test esi,esi
	je Block30

 Block8:
	push 0xFFBBC9D9

 Block9:
	mov edx,dword ptr [esi]
	mov eax,edi
	sub eax,ecx
	lea ecx,[eax*8]
	push 0xD
	sub ecx,eax
	push 0xA9
	lea eax,[ecx+ecx+0xF]
	mov ecx,dword ptr [edx+0x8C]
	push eax
	push 0xE
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
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block31

 Block12:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x48],1
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block31

 Block13:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 1
	push edx
	mov byte ptr [esp+0x54],2
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x88]
	mov ecx,dword ptr [eax+edi*4]
	lea eax,[eax+edi*4]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x58],3
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x58],4
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x84]
	mov ecx,dword ptr [eax+0x38]
	mov byte ptr [esp+0x54],5
	test esi,esi
	je Block30

 Block14:
	mov eax,edi
	sub eax,ecx
	lea ecx,[eax*8]
	sub ecx,eax
	lea edx,[ecx+ecx+0xF]
	push edx
	push 0xE
	mov ecx,esi
	mov byte ptr [esp+0x5C],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],1
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],0
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [ebp+0x84]
	mov ecx,dword ptr [eax+0x38]
	inc edi
	add ecx,5
	cmp edi,ecx
	jl Block1

 Block27:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test esi,esi
	je Block29

 Block28:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block29:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x38
	ret 4

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	push eax
	call _com_issue_error
}
}
// CUIUserInfo::IsLocalUserInfo
__SUB_CLASS_THIS0(004AAA40, __thiscall, 56794,  CUIUserInfo, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [ecx+0xBA4]
	cmp ecx,dword ptr [eax+0x19E8]
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIUserInfoWishList::OnCreate
_SUB_EXCEPTION_HANDLER(4B0060)
__SUB_CLASS_THIS(004B0060, __thiscall, 56731,  CUIUserInfoWishList, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B0060
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
	xor ebp,ebp
	push ebp
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__100
	call _xbstr_t::_ctor_1
	mov ecx,ebx
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x34],ebp
	push offset _S_UIUIWINDOW2IMGUS__99
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x48],ebp
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x14],ebp
	lea edi,[ebp+0x2D]
	lea esi,[ebx+0x8C]
	jmp Block3

 Block2:
	xor ebp,ebp

 Block3:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x44],1
	cmp eax,ebp
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov byte ptr [esp+0x44],0
	cmp eax,ebp
	je Block10

 Block7:
	add eax,8
	cmp eax,ebp
	je Block10

 Block8:
	lea ebp,[eax-8]
	test ebp,ebp
	je Block10

 Block9:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],ebp
	test eax,eax
	je Block14

 Block11:
	lea ebp,[eax+8]
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block14

 Block13:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block14:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push 1
	push edi
	push 0x5D
	lea edx,[ebp+0xBB8]
	push edx
	push ebx
	call eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	inc ebp
	add edi,0x2A
	add esi,8
	cmp edi,0xAB
	mov dword ptr [esp+0x14],ebp
	jl Block2

 Block15:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block17

 Block16:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block30

 Block19:
	add eax,8
	je Block30

 Block20:
	lea esi,[eax-8]
	test esi,esi
	je Block22

 Block21:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov eax,dword ptr [ebx+0x84]
	mov dword ptr [ebx+0x84],esi
	test eax,eax
	je Block26

 Block23:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block26

 Block25:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block26:
	mov ecx,dword ptr [ebx+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x79
	push 0x1A
	push 0x97
	push 8
	push 1
	push 0x3E8
	push ebx
	call eax
	mov eax,dword ptr [ebx+0x84]
	lea ecx,[esp+0x18]
	mov dword ptr [eax+0x34],0x8E
	push ecx
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x44],3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x48],4
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],5
	test esi,esi
	jne Block31

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	xor esi,esi
	jmp Block22

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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],4
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],3
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block41:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],6
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push esi
	call eax
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ecx,ebx
	call CUIUserInfoWishList::ResetAvatar
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CUIItemSearch::~CUIItemSearch
_SUB_EXCEPTION_HANDLER(4AB670)
__SUB_CLASS_THIS0(004AB670, __thiscall, 56504,  CUIItemSearch, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AB670
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemSearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemSearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemSearch::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB18]
	mov dword ptr [esp+0x18],3
	call CLayoutMan::~CLayoutMan
	cmp dword ptr [esi+0xB14],0
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x18],2
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CUIItemSearchResult>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0xB0C],0
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x18],1
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIItemSearch>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIItemSearchResult::OnChildNotify
__SUB_CLASS_THIS(004AA750, __thiscall, 56474,  CUIItemSearchResult, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	jne Block2

 Block1:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block4:
	ret 0xC
}
}
// CUIUserInfoDetail::OnDestroy
__SUB_CLASS_THIS0(004ADB00, __thiscall, 56695,  CUIUserInfoDetail, void) {
__asm {

 Block0:
	ret
}
}
// CUIUserInfo::OnCreate
_SUB_EXCEPTION_HANDLER(4B2BB0)
__SUB_CLASS_THIS(004B2BB0, __thiscall, 56772,  CUIUserInfo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B2BB0
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call ebp
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x70]
	push edx
	mov dword ptr [esp+0xBC],ebx
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x125B
	push eax
	mov byte ptr [esp+0xD4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xCC],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xA4]
	push ecx
	mov byte ptr [esp+0xD0],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [esp+0xB8],5
	cmp word ptr [esp+0x90],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0xB8],6
	cmp word ptr [esp+0x70],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x50],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x3C]
	push edx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB8],9
	cmp ecx,ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x48]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xC30]
	cmp esi,eax
	je Block30

 Block26:
	mov dword ptr [edi+0xC30],eax
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	cmp esi,ebx
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block30:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov esi,8
	mov byte ptr [esp+0xB8],8
	cmp word ptr [esp+0x1C],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x3C],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xA
	mov ecx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block42:
	mov esi,dword ptr [edi+0xC30]
	mov byte ptr [esp+0xB8],0xB
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
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
	jge Block46

 Block45:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov esi,8
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x1C],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],7
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x3C]
	mov bl,0xC
	push edx
	mov byte ptr [esp+0xBC],bl
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [edi+0xC30]
	mov byte ptr [esp+0xB8],0xD
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x10B
	push 0x2C
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x1C],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp dword ptr [edi+0xBA0],1
	jne Block69

 Block67:
	cmp dword ptr [edi+0xBC4],0
	jne Block69

 Block68:
	or eax,0xFFFFFFFF
	jmp Block70

 Block69:
	mov eax,0xFFFFFF

 Block70:
	mov esi,dword ptr [edi+0xC30]
	test esi,esi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xE0]
	push esi
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xE
	mov edx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block76:
	mov esi,dword ptr [edi+0xC30]
	mov byte ptr [esp+0xB8],0xF
	test esi,esi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
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
	jge Block80

 Block79:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB8],bl
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],7
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov esi,dword ptr [edi+0xC30]
	test esi,esi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	mov esi,dword ptr [edi+0xC30]
	test esi,esi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	test eax,eax
	jge Block94

 Block93:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block94:
	lea ecx,[esp+0x60]
	push ecx
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0xBC],0x10
	call ebp
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xBC],0x11
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xBC],0x12
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	lea eax,[esp+0x3C]
	mov bl,0x13
	push eax
	mov byte ptr [esp+0xBC],bl
	call ebp
	lea ecx,[esp+0x3C]
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
	mov ecx,dword ptr [edi+0xC30]
	mov byte ptr [esp+0xB8],0x14
	test ecx,ecx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x84]
	push eax
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x5C]
	lea edx,[esp+0x4C]
	push edx
	push eax
	lea edx,[esp+0xB8]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0xA0],bp
	jne Block113

 Block107:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block109:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block114

 Block111:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block115

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block113:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xA0]
	push ecx
	call esi
	jmp Block110

 Block114:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block115:
	mov byte ptr [esp+0xB8],0x12
	cmp word ptr [esp+0x1C],bp
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block119:
	mov byte ptr [esp+0xB8],0x11
	cmp word ptr [esp+0x2C],bp
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block123:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x80],bp
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x80]
	push eax
	call esi

 Block127:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x60],bp
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block131:
	mov ecx,edi
	call CUIUserInfo::SetLayer
	mov eax,dword ptr [esp+0xC0]
	push eax
	mov ecx,edi
	call CUIWnd::OnCreate_0
	push 0
	push 0
	lea esi,[edi+0x1698]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGUS__115
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x30],0
	je Block133

 Block132:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block133:
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGUS__114
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x30],0
	je Block135

 Block134:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block135:
	push 0
	push 0
	push 0
	push 0x7DA
	push offset _S_UIUIWINDOW2IMGUS__113
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x30],0
	je Block137

 Block136:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block137:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGUS__112
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov ebx,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB8],0x15
	lea edi,[ebx+0xB08]
	test eax,eax
	je Block139

 Block138:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block139:
	cmp dword ptr [edi+4],0
	je Block141

 Block140:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block141:
	cmp dword ptr [esp+0x30],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB8],7
	je Block143

 Block142:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block143:
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGUS__111
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x16
	lea edi,[ebx+0xB10]
	test eax,eax
	je Block145

 Block144:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block145:
	cmp dword ptr [edi+4],0
	je Block147

 Block146:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block147:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0xB8],7
	je Block149

 Block148:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block149:
	push 0
	push 0
	push 0
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGUS__110
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x17
	lea edi,[ebx+0xB18]
	test eax,eax
	je Block151

 Block150:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block151:
	cmp dword ptr [edi+4],0
	je Block153

 Block152:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block153:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xB8],7
	je Block155

 Block154:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block155:
	push 0
	push 0
	push 0
	push 0x7D5
	push offset _S_UIUIWINDOW2IMGUS__109
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x18
	lea edi,[ebx+0xB20]
	test eax,eax
	je Block157

 Block156:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block157:
	cmp dword ptr [edi+4],0
	je Block159

 Block158:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block159:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB8],7
	je Block161

 Block160:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block161:
	push 0
	push 0
	push 0
	push 0x7D6
	push offset _S_UIUIWINDOW2IMGUS__108
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x19
	lea edi,[ebx+0xB28]
	test eax,eax
	je Block163

 Block162:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block163:
	cmp dword ptr [edi+4],0
	je Block165

 Block164:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block165:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0xB8],7
	je Block167

 Block166:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block167:
	push 0
	push 0
	push 0
	push 0x7D7
	push offset _S_UIUIWINDOW2IMGUS__107
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x1A
	lea edi,[ebx+0xB30]
	test eax,eax
	je Block169

 Block168:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block169:
	cmp dword ptr [edi+4],0
	je Block171

 Block170:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block171:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xB8],7
	je Block173

 Block172:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block173:
	push 0
	push 0
	push 0
	push 0x7D8
	push offset _S_UIUIWINDOW2IMGUS__106
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB8],0x1B
	lea edi,[ebx+0xB38]
	test eax,eax
	je Block175

 Block174:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block175:
	cmp dword ptr [edi+4],0
	je Block177

 Block176:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block177:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB8],7
	je Block179

 Block178:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block179:
	xor ebp,ebp
	push ebp
	push ebp
	push ebp
	push 0x7D9
	push offset _S_UIUIWINDOW2IMGUS__105
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB8],0x1C
	lea esi,[ebx+0xB40]
	cmp eax,ebp
	je Block181

 Block180:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block181:
	cmp dword ptr [esi+4],ebp
	je Block183

 Block182:
	push ebp
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],ebp

 Block183:
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [esp+0xB8],7
	cmp dword ptr [esp+0x30],ebp
	je Block185

 Block184:
	push ebp
	lea ecx,[esp+0x30]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x30],ebp

 Block185:
	mov ecx,ebx
	call CUIUserInfo::SetCtrl
	mov eax,dword ptr [ebx+0xAFC]
	cmp eax,ebp
	je Block200

 Block186:
	and eax,3
	sub eax,1
	je Block194

 Block187:
	sub eax,1
	jne Block200

 Block188:
	cmp dword ptr [ebx+0xB74],ebp
	jne Block193

 Block189:
	push 0xAE8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0xB8],0x1E
	cmp edi,ebp
	je Block191

 Block190:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[ebx+4]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x10F
	push eax
	mov ecx,edi
	call CUIUserInfoWishList::_ctor_0
	jmp Block192

 Block191:
	xor eax,eax

 Block192:
	push eax
	lea ecx,[ebx+0xB70]
	mov byte ptr [esp+0xBC],7
	call ZRef<CUIUserInfoWishList>::op_assign_ptr

 Block193:
	mov dword ptr [ebx+0xAFC],2
	jmp Block200

 Block194:
	cmp dword ptr [ebx+0xB6C],ebp
	jne Block199

 Block195:
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0xB8],0x1D
	cmp edi,ebp
	je Block197

 Block196:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[ebx+4]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x10F
	push eax
	mov ecx,edi
	call CUIUserInfoDetail::_ctor_0
	jmp Block198

 Block197:
	xor eax,eax

 Block198:
	push eax
	lea ecx,[ebx+0xB68]
	mov byte ptr [esp+0xBC],7
	call ZRef<CUIUserInfoDetail>::op_assign_ptr

 Block199:
	mov dword ptr [ebx+0xAFC],1

 Block200:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],ebx
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	cmp eax,ebp
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block202:
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
// CUIUserInfo::CreatePetAvatar
_SUB_EXCEPTION_HANDLER(4ABA40)
__SUB_CLASS_THIS(004ABA40, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ABA40
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
	mov ebp,ecx
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x80],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x8C],ebx
	mov dword ptr [esp+0x90],ebx
	mov edi,dword ptr [esp+0xA4]
	mov ecx,dword ptr [ebp+edi*4+0xBF0]
	mov edx,dword ptr [ebp+edi*4+0xBC8]
	lea eax,[esp+0x80]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	push edx
	mov dword ptr [esp+0xAC],ebx
	call CActionMan::LoadPetAction
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x9C],2
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x24]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+edi*4+0xC34]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+edi*4+0xC34],eax
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,ebx
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x9C],1
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x9C],0
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x9C],3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [ebp+edi*4+0xC34]
	mov byte ptr [esp+0x9C],4
	cmp esi,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x9C],3
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],0
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x30]
	mov bl,5
	push edx
	mov byte ptr [esp+0xA0],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp+edi*4+0xC34]
	mov byte ptr [esp+0x9C],6
	test ecx,ecx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x12B
	push 0x35
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x30],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x9C],0
	cmp word ptr [esp+0x20],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp dword ptr [ebp+0xBA0],1
	jne Block48

 Block46:
	cmp edi,dword ptr [ebp+0xBC4]
	jne Block48

 Block47:
	or eax,0xFFFFFFFF
	jmp Block49

 Block48:
	mov eax,0xFFFFFF

 Block49:
	mov esi,dword ptr [ebp+edi*4+0xC34]
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xE0]
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,7
	mov edx,0xD
	mov byte ptr [esp+0x9C],bl
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	mov esi,dword ptr [ebp+edi*4+0xC34]
	mov byte ptr [esp+0x9C],8
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x9C],bl
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],0
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,dword ptr [ebp+edi*4+0xC34]
	test esi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov esi,dword ptr [ebp+edi*4+0xC34]
	test esi,esi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block115

 Block74:
	mov ebx,dword ptr [ZImports::_VariantInit]
	jmp Block76

 Block76:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x1C]
	push ecx
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	lea edx,[esp+0x60]
	push edx
	call ebx
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block77:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xA0],9
	call ebx
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block78:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0xA0],0xA
	call ebx
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block79:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xA0],0xB
	call ebx
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block80:
	mov eax,dword ptr [edi+0x40]
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	mov edx,dword ptr [esp+0xA4]
	mov ecx,dword ptr [ebp+edx*4+0xC34]
	mov eax,dword ptr [edi+0xC]
	mov byte ptr [esp+0x9C],0xD
	test ecx,ecx
	je Block3

 Block81:
	lea edx,[esp+0x60]
	push edx
	lea edx,[esp+0x54]
	push edx
	lea edx,[esp+0x48]
	push edx
	lea edx,[esp+0x2C]
	push edx
	lea edx,[esp+0x40]
	push edx
	push eax
	lea eax,[esp+0x88]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x70],8
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block85:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x9C],0xC
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block89:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x9C],0xB
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x20]
	push eax
	call esi

 Block93:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x9C],0xA
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block97:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x9C],9
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x50]
	push ecx
	call esi

 Block101:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x9C],0
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x60]
	push eax
	call esi

 Block105:
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block3

 Block106:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block108

 Block107:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block108:
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [esp+0x14],ecx
	jbe Block113

 Block109:
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block3

 Block110:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block112

 Block111:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block112:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],edx

 Block113:
	cmp dword ptr [esp+0x1C],0
	jne Block76

 Block114:
	mov edi,dword ptr [esp+0xA4]

 Block115:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea edx,[esp+0x60]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0xA0],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	mov ecx,dword ptr [ebp+edi*4+0xC34]
	mov byte ptr [esp+0x9C],0xF
	test ecx,ecx
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x64]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x60],si
	jne Block124

 Block122:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [esp+0x9C],0
	cmp word ptr [esp+0x50],si
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	test edi,edi
	jne Block152

 Block130:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	lea ecx,[esp+0x60]
	mov bl,0x10
	push ecx
	mov byte ptr [esp+0xA0],bl
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	mov ecx,dword ptr [ebp+0xC30]
	mov byte ptr [esp+0x9C],0x11
	test ecx,ecx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x64]
	push edx
	push 0xD1
	push 0x2C
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x60],si
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [esp+0x9C],0
	cmp word ptr [esp+0x50],si
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block144:
	cmp dword ptr [ebp+0xBA0],1
	jne Block147

 Block145:
	cmp dword ptr [ebp+0xBC4],0
	jne Block147

 Block146:
	or eax,0xFFFFFFFF
	jmp Block148

 Block147:
	mov eax,0xFFFFFF

 Block148:
	mov esi,dword ptr [ebp+0xC30]
	test esi,esi
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block152

 Block151:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block152:
	lea ecx,[esp+0x80]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x80],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::RemoveAll
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
// CUIUserInfo::SetPetInfo
_SUB_EXCEPTION_HANDLER(4AD710)
__SUB_CLASS_THIS(004AD710, __thiscall, 56785,  CUIUserInfo, void, long, unsigned long, NakedParam<ZXString<char>>, unsigned char, short, unsigned char, uint16_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AD710
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x18],0
	call CPetTemplate::GetPetTemplate
	mov edi,dword ptr [esp+0x20]
	add esp,4
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+edi*4+0xBD4]
	mov dword ptr [esi+edi*4+0xBC8],eax
	call ZXString<char>::op_assign
	mov dl,byte ptr [esp+0x28]
	mov ax,word ptr [esp+0x2C]
	mov cl,byte ptr [esp+0x30]
	mov byte ptr [edi+esi+0xBE0],dl
	mov dx,word ptr [esp+0x34]
	mov word ptr [esi+edi*2+0xBE4],ax
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [edi+esi+0xBEA],cl
	mov word ptr [esi+edi*2+0xBFC],dx
	push edi
	mov ecx,esi
	mov dword ptr [esi+edi*4+0xBF0],eax
	call CUIUserInfo::CreatePetAvatar
	push edi
	mov ecx,esi
	call CUIUserInfo::SetPetItemList
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x20
}
}
// CUIUserInfo::SetLayer
_SUB_EXCEPTION_HANDLER(4B0BB0)
__SUB_CLASS_THIS0(004B0BB0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B0BB0
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
	mov esi,ecx
	cmp dword ptr [esi+0xBA0],1
	jne Block3

 Block1:
	cmp dword ptr [esi+0xBC4],0
	jne Block3

 Block2:
	or eax,0xFFFFFFFF
	jmp Block4

 Block3:
	mov eax,0xFFFFFF

 Block4:
	mov edi,dword ptr [esi+0xC30]
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push eax
	push edi
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFFFFFFFE
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x9C],0
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esi+0xBA0]
	mov dword ptr [esi+0x24],0x10F
	cmp eax,3
	ja Block61

 Block19:
	cmp EAX, 0
je Block54
cmp EAX, 1
je Block20
cmp EAX, 2
je Block38
cmp EAX, 3
je Block46


 Block20:
	push 0xC4
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__104
	mov dword ptr [esi+0x28],0x182
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 1
	push 0xBE
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	push 0x4C
	push offset _S_UIUIWINDOW2IMGUS__103
	push 0
	push 0x26
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	xor ebx,ebx
	lea ebp,[esi+0xC34]
	jmp Block22

 Block22:
	mov edi,dword ptr [ebp]
	test edi,edi
	je Block28

 Block23:
	cmp ebx,dword ptr [esi+0xBC4]
	jne Block25

 Block24:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	jmp Block26

 Block25:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx

 Block26:
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	inc ebx
	add ebp,4
	cmp ebx,3
	jl Block22

 Block29:
	cmp dword ptr [esi+0xBC4],0
	mov edi,dword ptr [esi+0xC30]
	jne Block33

 Block30:
	test edi,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	jmp Block36

 Block33:
	test edi,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push edi
	call eax

 Block36:
	test eax,eax
	jge Block59

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex
	jmp Block59

 Block38:
	push 0xB2
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__104
	mov dword ptr [esi+0x28],0x170
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 1
	push 0xBE
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	push 0x4E
	push offset _S_UIUIWINDOW2IMGUS__102
	push 0
	push 0x27
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x27
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	mov ecx,dword ptr [esi+0xB9C]
	test ecx,ecx
	je Block40

 Block39:
	push 1
	call CAvatar::SetVisibleTamingMob

 Block40:
	xor ebx,ebx
	lea ebp,[esi+0xC34]

 Block41:
	mov edi,dword ptr [ebp]
	test edi,edi
	je Block44

 Block42:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	inc ebx
	add ebp,4
	cmp ebx,3
	jl Block41

 Block45:
	jmp Block61

 Block46:
	push 0xC4
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__104
	mov dword ptr [esi+0x28],0x182
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 1
	push 0xBE
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	push 0x54
	push offset _S_UIUIWINDOW2IMGUS__101
	push 0
	push 0x2A
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2A
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	mov ecx,dword ptr [esi+0xB9C]
	test ecx,ecx
	je Block48

 Block47:
	push 0
	call CAvatar::SetVisibleTamingMob

 Block48:
	xor ebx,ebx
	lea ebp,[esi+0xC34]

 Block49:
	mov edi,dword ptr [ebp]
	test edi,edi
	je Block52

 Block50:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	inc ebx
	add ebp,4
	cmp ebx,3
	jl Block49

 Block53:
	jmp Block61

 Block54:
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__104
	mov dword ptr [esi+0x28],0xBE
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	xor ebp,ebp
	lea ebx,[esi+0xC34]
	mov edi,edi

 Block55:
	mov edi,dword ptr [ebx]
	test edi,edi
	je Block58

 Block56:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	inc ebp
	add ebx,4
	cmp ebp,3
	jl Block55

 Block59:
	mov ecx,dword ptr [esi+0xB9C]
	test ecx,ecx
	je Block61

 Block60:
	push 0
	call CAvatar::SetVisibleTamingMob

 Block61:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x1C]
	push 0x3D0
	mov ebx,2
	push ecx
	mov dword ptr [esp+0xA0],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0xA4],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x9C],4
	call edi
	lea eax,[esp+0x20]
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
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],5
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov ebp,dword ptr [esp+0x30]
	mov edx,dword ptr [esi+0x28]
	mov edi,dword ptr [esi+0x24]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],ebp
	mov ebp,dword ptr [esp+0x30]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x48]
	push edx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	push edi
	mov dword ptr [esp+0x44],ecx
	push ecx
	mov ecx,dword ptr [ebx+0x2C]
	mov dword ptr [eax+0xC],ebp
	call ecx
	test eax,eax
	jge Block71

 Block70:
	mov edx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block71:
	mov edi,8
	mov byte ptr [esp+0x98],4
	cmp word ptr [esp+0x20],di
	jne Block78

 Block72:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block74:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x98],2
	cmp word ptr [esp+0x30],di
	jne Block79

 Block76:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block80

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block78:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x20]
	push ecx
	call ebp
	jmp Block75

 Block79:
	lea eax,[esp+0x30]
	push eax
	call ebp

 Block80:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block84:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block88

 Block87:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block88:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x70]
	push eax
	call edi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x9C],6
	call edi
	lea eax,[esp+0x60]
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
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],7
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x9C],8
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x9C],9
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea ecx,[esp+0x18]
	push ecx
	mov bl,0xA
	mov ecx,esi
	mov byte ptr [esp+0x9C],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],0xB
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x30]
	push edx
	push eax
	lea edx,[esp+0x98]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [esp+0x80],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0x80]
	push ecx
	call ebp

 Block104:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block106:
	mov byte ptr [esp+0x98],9
	cmp word ptr [esp+0x20],si
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x20]
	push edx
	call ebp

 Block110:
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x40],si
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x40]
	push ecx
	call ebp

 Block114:
	mov byte ptr [esp+0x98],7
	cmp word ptr [esp+0x50],si
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block118:
	mov byte ptr [esp+0x98],6
	cmp word ptr [esp+0x60],si
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x60]
	push edx
	call ebp

 Block122:
	mov byte ptr [esp+0x98],2
	cmp word ptr [esp+0x70],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x70]
	push ecx
	call ebp

 Block126:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block128

 Block127:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block128:
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
// CUIItemSearch::OnDestroy
__SUB_CLASS_THIS0(004AB7B0, __thiscall, 56504,  CUIItemSearch, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB14]
	test ecx,ecx
	je Block4

 Block1:
	push esi
	call CWnd::Destroy
	cmp dword ptr [edi+0xB14],0
	lea esi,[edi+0xB10]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIItemSearchResult>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	mov ecx,edi
	pop edi
	jmp  CUIWnd::OnDestroy
}
}
// CUIUserInfo::ResetInfo_TamingMob
__SUB_CLASS_THIS0(004AA9F0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [edx+0x19E8]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,dword ptr [ecx+0xBA4]
	jne Block2

 Block1:
	mov edx,dword ptr [eax+0x4080]
	mov dword ptr [ecx+0xC18],edx
	mov edx,dword ptr [eax+0x4084]
	mov dword ptr [ecx+0xC1C],edx
	mov eax,dword ptr [eax+0x4088]
	push 0
	mov dword ptr [ecx+0xC20],eax
	call CWnd::InvalidateRect

 Block2:
	ret
}
}
// CUIItemSearch::IsMyAddon
__SUB_CLASS_THIS(004AB760, __thiscall, 56514,  CUIItemSearch, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIItemSearchResult>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block2:
	mov eax,1
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CUIUserInfoExceptionList::Draw
_SUB_EXCEPTION_HANDLER(4AE850)
__SUB_CLASS_THIS(004AE850, __thiscall, 56605,  CUIUserInfoExceptionList, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AE850
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x5C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	xor ecx,ecx
	mov dword ptr [esp+0x54],ecx
	mov dword ptr [esp+0x5C],ecx
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov byte ptr [esp+0x54],1
	cmp eax,ecx
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ecx
	je Block40

 Block2:
	mov edx,dword ptr [eax]
	push eax
	jmp Block39

 Block3:
	mov edx,dword ptr [ebx+0xB8]
	mov eax,dword ptr [eax+0x2E44]
	mov eax,dword ptr [eax+edx*8+4]
	cmp eax,ecx
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ecx
	je Block40

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block40

 Block6:
	mov edi,dword ptr [ebx+0xA4]
	mov ebp,dword ptr [edi+0x38]
	mov esi,dword ptr [esp+0x14]
	add eax,0x8C
	mov dword ptr [esp+0x18],eax
	mov eax,ebp
	add eax,7
	cmp ebp,eax
	jge Block35

 Block7:
	mov ecx,dword ptr [esp+0x18]
	call ZArray<long>::GetCount
	cmp ebp,eax
	jae Block35

 Block8:
	cmp ebp,dword ptr [ebx+0xB4]
	jne Block11

 Block9:
	mov edi,dword ptr [edi+0x38]
	test esi,esi
	je Block41

 Block10:
	push 0xFFFDC100
	jmp Block14

 Block11:
	cmp ebp,dword ptr [ebx+0xB0]
	jne Block16

 Block12:
	mov edi,dword ptr [edi+0x38]
	test esi,esi
	je Block41

 Block13:
	push 0xFFFDE480

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x8C]
	mov ecx,ebp
	sub ecx,edi
	imul ecx,0xD
	push 0xA
	push 0x8A
	add ecx,0x1E
	push ecx
	push 0xA
	push esi
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	cmp dword ptr [ecx+ebp*4],0x7FFFFFFF
	lea eax,[ecx+ebp*4]
	jne Block18

 Block17:
	lea edx,[esp+0x1C]
	push 0x1A10
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x58],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block19

 Block18:
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x58],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]

 Block19:
	mov byte ptr [esp+0x54],1
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	push 0
	push 0
	lea ecx,[esp+0x64]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x58],4
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block23:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x2C]
	push 0x1A
	push edx
	mov byte ptr [esp+0x64],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x68]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x68],6
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebx+0xA4]
	mov eax,dword ptr [eax+0x38]
	mov byte ptr [esp+0x64],7
	test esi,esi
	je Block41

 Block24:
	mov ecx,ebp
	sub ecx,eax
	imul ecx,0xD
	add ecx,0x1E
	push ecx
	push 0xC
	mov ecx,esi
	mov byte ptr [esp+0x6C],6
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],5
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	mov edi,8
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x2C],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x3C],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edi,dword ptr [ebx+0xA4]
	mov eax,dword ptr [edi+0x38]
	inc ebp
	add eax,7
	cmp ebp,eax
	jl Block7

 Block35:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test esi,esi
	je Block40

 Block38:
	mov edx,dword ptr [esi]
	push esi

 Block39:
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push eax
	call _com_issue_error
}
}
// CUIUserInfoExceptionList::OnMouseMove
__SUB_CLASS_THIS(004AAF30, __thiscall, 56608,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIUserInfoExceptionList::GetIndexFromPt
	cmp dword ptr [esi+0xAC],eax
	je Block2

 Block1:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xAC],eax
	call CWnd::InvalidateRect

 Block2:
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CUIUserInfoExceptionList::AddToList
_SUB_EXCEPTION_HANDLER(4AEBC0)
__SUB_CLASS_THIS(004AEBC0, __thiscall, 56610,  CUIUserInfoExceptionList, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AEBC0
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
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [edx+eax*8+4]
	xor ebp,ebp
	cmp eax,ebp
	je Block26

 Block1:
	lea esi,[eax+0x8C]
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block3

 Block2:
	cmp dword ptr [eax-4],0xA
	jae Block26

 Block3:
	mov ebx,dword ptr [esp+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetItemName
	mov dword ptr [esp+0x2C],ebp
	cmp ebx,0x7FFFFFFF
	jne Block6

 Block4:
	lea ecx,[esp+0x14]
	push 0x1A10
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x30],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],0
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov ecx,esi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block18

 Block7:
	mov bl,2
	jmp Block9

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edi,[ebp*4]
	mov edx,dword ptr [eax+edi]
	add eax,edi
	push edx
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemName
	mov ecx,dword ptr [esi]
	cmp dword ptr [edi+ecx],0x7FFFFFFF
	mov byte ptr [esp+0x2C],bl
	jne Block12

 Block10:
	lea edx,[esp+0x20]
	push 0x1A10
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	push 0
	push 0
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edi,dword ptr [esp+0x1C]
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jg Block20

 Block13:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_eq_0
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],0
	jne Block22

 Block14:
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,esi
	inc ebp
	call ZArray<long>::GetCount
	cmp ebp,eax
	jb Block9

 Block17:
	mov edi,dword ptr [esp+0x18]

 Block18:
	push ebp
	mov ecx,esi
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block28

 Block19:
	jmp Block29

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block17

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block17

 Block22:
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov edi,dword ptr [esp+0x20]
	add esp,4

 Block24:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test edi,edi
	je Block26

 Block25:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block26:
	xor eax,eax

 Block27:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block28:
	mov eax,dword ptr [eax-4]

 Block29:
	mov ecx,dword ptr [edi+0xA4]
	add eax,0xFFFFFFFA
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [edi+0xB4]
	cmp eax,ebp
	jl Block31

 Block30:
	inc eax
	mov dword ptr [edi+0xB4],eax

 Block31:
	mov ebp,dword ptr [esi]
	test ebp,ebp
	je Block38

 Block32:
	cmp dword ptr [ebp-4],0xA
	jne Block38

 Block33:
	mov ecx,esi
	xor edi,edi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block36

 Block34:
	cmp dword ptr [ebp],0x7FFFFFFF
	je Block37

 Block35:
	mov ecx,esi
	inc edi
	add ebp,4
	call ZArray<long>::GetCount
	cmp edi,eax
	jb Block34

 Block36:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block37:
	mov edi,dword ptr [esp+0x18]

 Block38:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx+0x2E44]
	mov ecx,dword ptr [edx+eax*8+4]
	push esi
	call CPet::SendUpdateExceptionListRequest
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,1
	jmp Block27
}
}
// CUIUserInfoDetail::~CUIUserInfoDetail
_SUB_EXCEPTION_HANDLER(4ADB70)
__SUB_CLASS_THIS0(004ADB70, __thiscall, 56695,  CUIUserInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ADB70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoDetail::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x90]
	mov dword ptr [esp+0x18],3
	call CLayoutMan::~CLayoutMan
	cmp dword ptr [esi+0x8C],0
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x18],2
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],1
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIUserInfoDetail>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIUserInfoExceptionList::GetIndexFromPt
__SUB_CLASS_THIS(004AAD30, __thiscall, 56611,  CUIUserInfoExceptionList, long, long, long) {
__asm {

 Block0:
	sub esp,0x18
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp],ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [edx+eax*8+4]
	test eax,eax
	jne Block2

 Block1:
	or eax,0xFFFFFFFF
	add esp,0x18
	ret 8

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0x20]
	push ebp
	mov ebp,dword ptr [esp+0x28]
	push esi
	add eax,0x8C
	push edi
	xor edi,edi
	mov dword ptr [esp+0x14],eax
	lea esi,[edi+0x2B]

 Block3:
	mov ecx,dword ptr [esp+0x14]
	call ZArray<long>::GetCount
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+0xA4]
	mov ecx,dword ptr [edx+0x38]
	add ecx,edi
	cmp ecx,eax
	jae Block6

 Block4:
	push ebp
	push ebx
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x28],0x1E
	mov dword ptr [esp+0x2C],0x8A
	mov dword ptr [esp+0x30],esi
	call PtInRect
	test eax,eax
	jne Block7

 Block5:
	add esi,0xD
	inc edi
	cmp esi,0x86
	jl Block3

 Block6:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x18
	ret 8

 Block7:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0xA4]
	mov eax,dword ptr [ecx+0x38]
	add eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUIItemSearch::OnMoveWnd
__SUB_CLASS_THIS(004AACE0, __thiscall, 56511,  CUIItemSearch, void, long, long) {
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
	mov edi,dword ptr [esi+0xB14]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x60
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUIUserInfoExceptionList::OnSetFocus
__SUB_CLASS_THIS(004AD8D0, __thiscall, 56604,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIUserInfo::ToggleAddOn
_SUB_EXCEPTION_HANDLER(4B15D0)
__SUB_CLASS_THIS(004B15D0, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B15D0
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
	mov eax,dword ptr [esp+0x20]
	and eax,3
	xor edi,edi
	sub eax,edi
	je Block19

 Block1:
	sub eax,1
	je Block11

 Block2:
	sub eax,1
	jne Block20

 Block3:
	cmp dword ptr [esi+0xB74],edi
	je Block7

 Block4:
	push edi
	call CUIUserInfo::SetAddOnOption
	mov ecx,dword ptr [esi+0xB74]
	cmp ecx,edi
	je Block20

 Block5:
	call CWnd::Destroy
	add esi,0xB70
	cmp dword ptr [esi+4],edi
	je Block20

 Block6:
	push edi
	mov ecx,esi
	call ZRef<CUIUserInfoWishList>::_ReleaseRaw
	mov dword ptr [esi+4],edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block7:
	call CUIUserInfo::AddOnClear
	push 2
	mov ecx,esi
	call CUIUserInfo::SetAddOnOption
	push 0xAE8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x18],1
	cmp ebx,edi
	je Block9

 Block8:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add eax,0x10F
	push eax
	mov ecx,ebx
	call CUIUserInfoWishList::_ctor_0
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esi+0xB70]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUIUserInfoWishList>::op_assign_ptr
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block11:
	cmp dword ptr [esi+0xB6C],edi
	je Block15

 Block12:
	push edi
	call CUIUserInfo::SetAddOnOption
	mov ecx,dword ptr [esi+0xB6C]
	cmp ecx,edi
	je Block20

 Block13:
	call CWnd::Destroy
	add esi,0xB68
	cmp dword ptr [esi+4],edi
	je Block20

 Block14:
	push edi
	mov ecx,esi
	call ZRef<CUIUserInfoDetail>::_ReleaseRaw
	mov dword ptr [esi+4],edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block15:
	call CUIUserInfo::AddOnClear
	push 1
	mov ecx,esi
	call CUIUserInfo::SetAddOnOption
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x18],edi
	cmp ebx,edi
	je Block17

 Block16:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add eax,0x10F
	push eax
	mov ecx,ebx
	call CUIUserInfoDetail::_ctor_0
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push eax
	lea ecx,[esi+0xB68]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUIUserInfoDetail>::op_assign_ptr
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block19:
	call CUIUserInfo::AddOnClear

 Block20:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUIUserInfoWishList::OnSetFocus
__SUB_CLASS_THIS(004AB400, __thiscall, 56732,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIItemSearch::OnButtonClicked
_SUB_EXCEPTION_HANDLER(4B2A30)
__SUB_CLASS_THIS(004B2A30, __thiscall, 56508,  CUIItemSearch, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B2A30
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x1C]
	mov eax,edi
	sub eax,0
	je Block8

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,0x3E7
	jne Block7

 Block3:
	mov ecx,dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block4:
	call CUIUserInfoExceptionList::CloseItemSearch
	jmp Block7

 Block5:
	mov ecx,dword ptr [esi+0xB0C]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	mov ecx,esi
	call CUIItemSearch::OpenSearchResult
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CUIUserInfo::SetPetItemList
_SUB_EXCEPTION_HANDLER(4ACFB0)
__SUB_CLASS_THIS(004ACFB0, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ACFB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x208
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x21C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x22C]
	lea edi,[esi+ebx*4+0xB80]
	mov ecx,edi
	call ZArray<long>::RemoveAll
	xor ebp,ebp
	cmp dword ptr [esi+ebx*4+0xBF0],ebp
	je Block2

 Block1:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esi+ebx*4+0xBF0]
	mov dword ptr [eax],ecx

 Block2:
	xor eax,eax
	push 0xF0
	lea edx,[esp+0x31]
	push ebp
	mov dword ptr [esp+0x1C],eax
	push edx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	int 3// TODO: 	mov dword ptr [esp+0x20],offset AvatarLook::`vftable'
	mov byte ptr [esp+0x2C],al
	mov dword ptr [esp+0x2D],ebp
	mov dword ptr [esp+0x31],ebp
	mov dword ptr [esp+0x35],ebp
	call _memset
	xor eax,eax
	add esp,0xC
	mov dword ptr [esp+0x20D],eax
	mov dword ptr [esp+0x211],eax
	mov dword ptr [esp+0x215],eax
	mov esi,dword ptr [esi+0xB94]
	mov dword ptr [esp+0x224],ebp
	cmp esi,ebp
	je Block4

 Block3:
	add esi,4
	push esi
	lea ecx,[esp+0x18]
	call AvatarLook::operator=
	nop

 Block4:
	mov esi,dword ptr [esp+ebp*4+0x2D]
	test esi,esi
	jle Block12

 Block5:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xB5
	je Block8

 Block6:
	cmp esi,0x1BCD30
	je Block8

 Block7:
	cmp esi,0x1BF440
	jne Block12

 Block8:
	cmp esi,0x1BA623
	je Block11

 Block9:
	cmp esi,0x1BA622
	je Block11

 Block10:
	push ebp
	call to_pet_index_from_pet_ability_item_index
	add esp,4
	cmp eax,ebx
	jne Block12

 Block11:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi

 Block12:
	inc ebp
	cmp ebp,0x3C
	jl Block4

 Block13:
	mov ecx,dword ptr [esp+0x21C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x214
	ret 4
}
}
// CUIItemSearchResult::~CUIItemSearchResult
_SUB_EXCEPTION_HANDLER(4B1E50)
__SUB_CLASS_THIS0(004B1E50, __thiscall, 56467,  CUIItemSearchResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B1E50
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemSearchResult::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xADC]
	mov dword ptr [esp+0x18],4
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x18],3
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],2
	call ZArray<long>::RemoveAll
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIItemSearchResult>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIUserInfo::Update
__SUB_CLASS_THIS0(004AA9C0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	mov ecx,dword ptr [esi+0xB94]
	test ecx,ecx
	je Block2

 Block1:
	call CAvatar::Update

 Block2:
	mov ecx,dword ptr [esi+0xB9C]
	pop esi
	test ecx,ecx
	je Block4

 Block3:
	jmp  CAvatar::Update

 Block4:
	ret
}
}
// CUIUserInfoWishList::OnMouseMove
_SUB_EXCEPTION_HANDLER(4AC870)
__SUB_CLASS_THIS(004AC870, __thiscall, 56736,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AC870
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov ebp,dword ptr [esp+0x7C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [eax+0xC48]
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]
	cmp eax,3
	mov dword ptr [esp+0x14],3
	jg Block4

 Block3:
	mov dword ptr [esp+0x14],eax

 Block4:
	xor edi,edi
	cmp dword ptr [esp+0x14],ebx
	jle Block32

 Block5:
	mov eax,0x1C
	mov dword ptr [esp+0x7C],eax
	jmp Block9

 Block8:
	mov eax,dword ptr [esp+0x7C]

 Block9:
	cmp dword ptr [esp+0x18],ebx
	jne Block33

 Block10:
	mov dword ptr [esp+0x34],eax
	add eax,0x20
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x80]
	push eax
	push ebp
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [esp+0x3C],0xB
	mov dword ptr [esp+0x44],0x2B
	call PtInRect
	test eax,eax
	je Block30

 Block11:
	mov eax,dword ptr [esi+0x80]
	mov eax,dword ptr [eax+0x38]
	add eax,edi
	lea edx,[eax+eax*2]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0xC48]
	lea ecx,[ecx+edx*4]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea edx,[esp+0x24]
	push edx
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x74],ebx
	cmp eax,ebx
	jne Block13

 Block12:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	jmp Block30

 Block13:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x2C]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x10
	mov byte ptr [esp+0x74],1
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	jne Block17

 Block14:
	mov edx,dword ptr [esp+0x24]
	push ebx
	push ebx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],esp
	cmp eax,ebx
	je Block16

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x84],2
	call edx
	mov ecx,dword ptr [esp+0x90]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	lea eax,[eax+ebp+0x14]
	push eax
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x8C],1
	call CUIToolTip::SetToolTip_Package
	jmp Block20

 Block17:
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block19

 Block18:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x74],bl
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	jmp Block30

 Block19:
	mov ecx,dword ptr [_D_DB_DATE_19000101__49]
	mov edx,dword ptr [_D_DB_DATE_19000101__49+4]
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x58],ecx
	mov dword ptr [esp+0x5C],edx
	mov dword ptr [esp+0x68],ebx
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x2C]
	push ebx
	push ebx
	push ebx
	push ebx
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x8C],3
	mov dword ptr [esp+0x64],1
	mov dword ptr [esp+0x68],ebx
	call edx
	mov ecx,dword ptr [esp+0x98]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	lea eax,[eax+ebp+0x14]
	push eax
	lea ecx,[esi+0x9C]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x74],1
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam

 Block20:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [esp+0x2C],ebx

 Block25:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,ebx
	je Block30

 Block26:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	mov ecx,dword ptr [esp+0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block29

 Block28:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block29:
	mov dword ptr [esp+0x24],ebx

 Block30:
	add dword ptr [esp+0x7C],0x2A
	inc edi
	cmp edi,dword ptr [esp+0x14]
	jl Block8

 Block31:
	cmp dword ptr [esp+0x18],ebx
	jne Block33

 Block32:
	lea ecx,[esi+0x9C]
	call CUIToolTip::ClearToolTip

 Block33:
	xor eax,eax
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 8
}
}
// CUIItemSearch::OnMouseMove
__SUB_CLASS_THIS(004AA800, __thiscall, 56509,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	add ecx,0x84
	call CUIToolTip::ClearToolTip
	xor eax,eax
	ret 8
}
}
// CUIUserInfoExceptionList::OnChildNotify
__SUB_CLASS_THIS(004AA840, __thiscall, 56606,  CUIUserInfoExceptionList, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	jne Block2

 Block1:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block4:
	ret 0xC
}
}
// CUIUserInfo::OnMoveWnd
__SUB_CLASS_THIS(004AAE40, __thiscall, 56774,  CUIUserInfo, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov ebx,dword ptr [esi+0xB6C]
	test ebx,ebx
	jne Block2

 Block1:
	mov ebx,dword ptr [esi+0xB74]
	test ebx,ebx
	je Block3

 Block2:
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
	add eax,0x10F
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd

 Block3:
	mov ebx,dword ptr [esi+0xB7C]
	test ebx,ebx
	je Block5

 Block4:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,0xBE
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0xBA0]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF55
	add ecx,0xAB
	mov edx,0x10F
	sub edx,ecx
	add eax,edx
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIUserInfo::OnButtonClicked
__SUB_CLASS_THIS(004B6D80, __thiscall, 56775,  CUIUserInfo, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,ecx
	cmp eax,0x7D0
	ja Block5

 Block1:
	je Block4

 Block2:
	cmp eax,0x3E8
	jne Block31

 Block3:
	push 0xA
	mov ecx,edi
	call CWvsContext::UI_Close
	pop edi
	pop esi
	ret 4

 Block4:
	push 1
	call CUIUserInfo::ToggleAddOn
	pop edi
	pop esi
	ret 4

 Block5:
	lea ecx,[eax-0x7D1]
	cmp ecx,0xD
	ja Block31

 Block6:
	cmp ECX, 0
je Block7
cmp ECX, 1
je Block11
cmp ECX, 2
je Block15
cmp ECX, 3
je Block17
cmp ECX, 4
je Block18
cmp ECX, 5
je Block19
cmp ECX, 6
je Block22
cmp ECX, 7
je Block24
cmp ECX, 8
je Block26
cmp ECX, 9
je Block8
cmp ECX, 10
je Block31
cmp ECX, 11
je Block27
cmp ECX, 12
je Block27
cmp ECX, 13
je Block27


 Block7:
	push 2
	mov ecx,esi
	call CUIUserInfo::ToggleAddOn
	pop edi
	pop esi
	ret 4

 Block8:
	mov ecx,edi
	add esi,0xBA8
	call CWvsContext::GetCharacterName
	push eax
	mov ecx,esi
	call ZXString<char>::Compare
	push 0xFFFFFFFF
	mov ecx,edi
	test eax,eax
	jne Block10

 Block9:
	push 0x1A
	call CWvsContext::UI_Toggle
	pop edi
	pop esi
	ret 4

 Block10:
	push 0x1B
	call CWvsContext::UI_Open
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push esi
	call ZXString<char>::_ctor_copy
	mov ecx,edi
	call CWvsContext::SendFamilyChartRequest
	pop edi
	pop esi
	ret 4

 Block11:
	cmp dword ptr [edi+0x3604],0
	je Block32

 Block12:
	mov ecx,edi
	call CWvsContext::AmIPartyBoss
	test eax,eax
	je Block32

 Block13:
	call get_field
	test eax,eax
	je Block32

 Block14:
	add esi,0xBA8
	push esi
	call get_field
	mov ecx,eax
	call CField::SendJoinPartyMsg
	pop edi
	pop esi
	ret 4

 Block15:
	call get_field
	test eax,eax
	je Block32

 Block16:
	push 0
	add esi,0xBA8
	push esi
	call get_field
	mov ecx,eax
	call CField::SendInviteTradingRoomMsg
	pop edi
	pop esi
	ret 4

 Block17:
	mov eax,dword ptr [esi+0xBA8]
	push 1
	push eax
	mov ecx,edi
	call CWvsContext::SendGivePopularityRequest
	pop edi
	pop esi
	ret 4

 Block18:
	mov ecx,dword ptr [esi+0xBA8]
	push 0
	push ecx
	mov ecx,edi
	call CWvsContext::SendGivePopularityRequest
	pop edi
	pop esi
	ret 4

 Block19:
	cmp dword ptr [esi+0xBA0],1
	mov ecx,esi
	jne Block21

 Block20:
	push 0
	call CUIUserInfo::SetState
	pop edi
	pop esi
	ret 4

 Block21:
	push 1
	call CUIUserInfo::SetState
	pop edi
	pop esi
	ret 4

 Block22:
	cmp dword ptr [esi+0xBA0],2
	mov ecx,esi
	je Block20

 Block23:
	push 2
	call CUIUserInfo::SetState
	pop edi
	pop esi
	ret 4

 Block24:
	cmp dword ptr [esi+0xBA0],3
	mov ecx,esi
	je Block20

 Block25:
	push 3
	call CUIUserInfo::SetState
	pop edi
	pop esi
	ret 4

 Block26:
	mov ecx,esi
	call CUIUserInfo::ToggleExceptionList
	pop edi
	pop esi
	ret 4

 Block27:
	mov ecx,dword ptr [esi+0xB7C]
	add eax,0xFFFFF824
	mov dword ptr [esi+0xBC4],eax
	test ecx,ecx
	je Block30

 Block28:
	cmp dword ptr [ecx+0xB8],eax
	je Block30

 Block29:
	mov ecx,esi
	call CUIUserInfo::ToggleExceptionList

 Block30:
	push 1
	mov ecx,esi
	call CUIUserInfo::SetState
	pop edi
	pop esi
	ret 4

 Block31:
	push eax
	mov ecx,esi
	call CUIWnd::OnButtonClicked

 Block32:
	pop edi
	pop esi
	ret 4
}
}
// CUIUserInfoDetail::GetRTTI
__SUB_CLASS_THIS0(004ADB20, __thiscall, 56701,  CUIUserInfoDetail, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIUserInfoDetail::ms_RTTI_CUIUserInfoDetail
	ret
}
}
// CUIUserInfoWishList::ClearToolTip
__SUB_CLASS_THIS0(004AB410, __thiscall, 56737,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x9C
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIItemSearchResult::OnSetFocus
__SUB_CLASS_THIS(004B1E30, __thiscall, 56469,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIItemSearch::IsKindOf
__SUB_CLASS_THIS(004AB780, __thiscall, 56519,  CUIItemSearch, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIItemSearch::ms_RTTI_CUIItemSearch
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
// CUIUserInfoExceptionList::~CUIUserInfoExceptionList
_SUB_EXCEPTION_HANDLER(4AD8F0)
__SUB_CLASS_THIS0(004AD8F0, __thiscall, 56602,  CUIUserInfoExceptionList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AD8F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoExceptionList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoExceptionList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoExceptionList::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x1C],7
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xA8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CUIItemSearch>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance],ebx
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
// CUIUserInfo::~CUIUserInfo
_SUB_EXCEPTION_HANDLER(4AD2B0)
__SUB_CLASS_THIS0(004AD2B0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AD2B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfo::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x1698]
	mov dword ptr [esp+0x20],0x1F
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xC4C]
	mov byte ptr [esp+0x20],0x1E
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xC48]
	mov byte ptr [esp+0x20],0x1D
	call ZArray<TSecType<long>>::RemoveAll
	lea ecx,[esi+0xC44]
	mov byte ptr [esp+0x20],0x1C
	call ZArray<TSecType<long>>::RemoveAll
	lea ecx,[esi+0xC40]
	mov byte ptr [esp+0x20],0x1B
	call ZArray<TSecType<long>>::RemoveAll
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0xC34]
	push eax
	mov byte ptr [esp+0x30],0x1A
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xC30]
	xor ebp,ebp
	mov byte ptr [esp+0x20],0x19
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xC2C]
	mov byte ptr [esp+0x20],0x18
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xC28]
	mov byte ptr [esp+0x20],0x17
	cmp eax,ebp
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xC28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xC28]
	cmp ecx,ebp
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0xC28],ebp

 Block9:
	mov eax,dword ptr [esi+0xC04]
	mov byte ptr [esp+0x20],0x16
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push offset ZXString<char>::~ZXString<char>
	push 3
	push 4
	lea eax,[esi+0xBD4]
	push eax
	mov byte ptr [esp+0x30],0x15
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xBB8]
	mov byte ptr [esp+0x20],0x14
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esi+0xBB4]
	mov byte ptr [esp+0x20],0x13
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esi+0xBA8]
	mov byte ptr [esp+0x20],0x12
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov edi,dword ptr [esi+0xB9C]
	mov byte ptr [esp+0x20],0x11
	cmp edi,ebp
	je Block22

 Block18:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block21

 Block20:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block21:
	mov dword ptr [esi+0xB9C],ebp

 Block22:
	mov edi,dword ptr [esi+0xB94]
	mov byte ptr [esp+0x20],0x10
	cmp edi,ebp
	je Block27

 Block23:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block26

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block26:
	mov dword ptr [esi+0xB94],ebp

 Block27:
	lea ecx,[esi+0xB8C]
	mov byte ptr [esp+0x20],0xF
	call ZArray<long>::RemoveAll
	push offset ZArray<long>::~ZArray<long>
	push 3
	push 4
	lea ecx,[esi+0xB80]
	push ecx
	mov byte ptr [esp+0x30],0xE
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB78]
	mov byte ptr [esp+0x20],0xD
	cmp dword ptr [edi+4],ebp
	je Block29

 Block28:
	push ebp
	mov ecx,edi
	call ZRef<CUIUserInfoExceptionList>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block29:
	lea edi,[esi+0xB70]
	mov byte ptr [esp+0x20],0xC
	cmp dword ptr [edi+4],ebp
	je Block31

 Block30:
	push ebp
	mov ecx,edi
	call ZRef<CUIUserInfoWishList>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block31:
	lea edi,[esi+0xB68]
	mov byte ptr [esp+0x20],0xB
	cmp dword ptr [edi+4],ebp
	je Block33

 Block32:
	push ebp
	mov ecx,edi
	call ZRef<CUIUserInfoDetail>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block33:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea edx,[esi+0xB50]
	push edx
	mov byte ptr [esp+0x30],0xA
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB48]
	mov byte ptr [esp+0x20],9
	cmp dword ptr [edi+4],ebp
	je Block35

 Block34:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block35:
	lea edi,[esi+0xB40]
	mov byte ptr [esp+0x20],8
	cmp dword ptr [edi+4],ebp
	je Block37

 Block36:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block37:
	lea edi,[esi+0xB38]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebp
	je Block39

 Block38:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block39:
	lea edi,[esi+0xB30]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebp
	je Block41

 Block40:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block41:
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebp
	je Block43

 Block42:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block43:
	lea edi,[esi+0xB20]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebp
	je Block45

 Block44:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block45:
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebp
	je Block47

 Block46:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block47:
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebp
	je Block49

 Block48:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block49:
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebp
	je Block51

 Block50:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block51:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIUserInfo>::ms_pInstance],ebp
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
// CUIUserInfoExceptionList::CloseItemSearch
__SUB_CLASS_THIS0(004AB2E0, __thiscall, 56602,  CUIUserInfoExceptionList, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xAC]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0xA8
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIItemSearch>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CUIUserInfoWishList::IsKindOf
__SUB_CLASS_THIS(004AB440, __thiscall, 56740,  CUIUserInfoWishList, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIUserInfoWishList::ms_RTTI_CUIUserInfoWishList
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
// CUIUserInfoExceptionList::OpenItemSearch
_SUB_EXCEPTION_HANDLER(4B1C60)
__SUB_CLASS_THIS0(004B1C60, __thiscall, 56602,  CUIUserInfoExceptionList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B1C60
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
	mov ebx,ecx
	push 0xB2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x10],edi
	mov dword ptr [esp+0x20],0
	test edi,edi
	je Block2

 Block1:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[ebx+4]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	push eax
	mov ecx,edi
	call CUIItemSearch::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block4:
	add eax,8
	je Block10

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [ebx+0xAC]
	mov dword ptr [ebx+0xAC],esi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUIItemSearch>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	jmp Block7
}
}
// CUIUserInfo::SetTamingMobInfo
__SUB_CLASS_THIS(004B67C0, __thiscall, 56788,  CUIUserInfo, void, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC0C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	add eax,0x10
	push eax
	lea ecx,[esi+0xC04]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+0xC20],eax
	mov eax,dword ptr [esi+0xB34]
	mov dword ptr [esi+0xC18],ecx
	lea ecx,[eax+4]
	mov dword ptr [esi+0xC1C],edx
	mov dword ptr [esi+0xC08],1
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	push 2
	mov ecx,esi
	call CUIUserInfo::SetState
	mov ecx,esi
	call CUIUserInfo::SetTamingMobItemList
	pop esi
	ret 0xC
}
}
// CUIItemSearch::GetRTTI
__SUB_CLASS_THIS0(004AB740, __thiscall, 56518,  CUIItemSearch, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIItemSearch::ms_RTTI_CUIItemSearch
	ret
}
}
// CUIItemSearchResult::OnMouseButton
__SUB_CLASS_THIS(004AAEF0, __thiscall, 56471,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIItemSearchResult::GetIndexFromPt
	cmp dword ptr [esp+0xC],0x202
	jne Block3

 Block1:
	cmp dword ptr [esi+0x8C],eax
	je Block3

 Block2:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x8C],eax
	call CWnd::InvalidateRect

 Block3:
	pop edi
	pop esi
	ret 0x10
}
}
// CUIItemSearchResult::CUIItemSearchResult
_SUB_EXCEPTION_HANDLER(4B1D30)
__SUB_CLASS_THIS(004B1D30, __thiscall, 56465,  CUIItemSearchResult, void, long, long, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B1D30
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
	mov dword ptr [TSingleton<CUIItemSearchResult>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIItemSearchResult>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemSearchResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x88],edi
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x18],3
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xADC],edi
	mov dword ptr [esi+0xAE0],edi
	mov dword ptr [esi+0xAE4],edi
	mov dword ptr [esi+0xAE8],edi
	mov dword ptr [esi+0xAEC],edi
	mov edx,dword ptr [esp+0x28]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1C],5
	call CUIItemSearchResult::Search
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x74
	push 0xD1
	push eax
	push ecx
	mov ecx,esi
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
// CUIItemSearch::OnMouseEnter
__SUB_CLASS_THIS(004AA7B0, __thiscall, 56510,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIUserInfo::CUIUserInfo
_SUB_EXCEPTION_HANDLER(4B0990)
__SUB_CLASS_THIS0(004B0990, __thiscall, 56769,  CUIUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B0990
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
	push edi
	push 6
	push 0xFA
	push 5
	push 0xA
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIUserInfo>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIUserInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB4C],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea edx,[esi+0xB50]
	push edx
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB74],edi
	mov dword ptr [esi+0xB7C],edi
	push offset ZArray<long>::~ZArray<long>
	push offset ZArray<long>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xB80]
	push eax
	mov byte ptr [esp+0x2C],0xE
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB8C],edi
	mov dword ptr [esi+0xB94],edi
	mov dword ptr [esi+0xB9C],edi
	mov dword ptr [esi+0xBA0],edi
	mov dword ptr [esi+0xBA8],edi
	mov dword ptr [esi+0xBB4],edi
	mov dword ptr [esi+0xBB8],edi
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 3
	push 4
	lea ecx,[esi+0xBD4]
	push ecx
	mov byte ptr [esp+0x2C],0x15
	mov dword ptr [esi+0xBBC],edi
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esi+0xBC4],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC04],edi
	mov dword ptr [esi+0xC08],edi
	mov dword ptr [esi+0xC28],edi
	mov dword ptr [esi+0xC2C],edi
	mov dword ptr [esi+0xC30],edi
	mov byte ptr [esp+0x18],0x1A
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea edx,[esi+0xC34]
	push edx
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC40],edi
	mov dword ptr [esi+0xC44],edi
	mov dword ptr [esi+0xC48],edi
	lea ecx,[esi+0xC4C]
	mov byte ptr [esp+0x18],0x1E
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x1694],edi
	mov dword ptr [esi+0x1698],edi
	mov dword ptr [esi+0x169C],edi
	mov dword ptr [esi+0x16A0],edi
	mov dword ptr [esi+0x16A4],edi
	mov dword ptr [esi+0x16A8],edi
	push 0xA
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x24],0x20
	call CUIWnd::CreateUIWndPosSaved
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
// CUIUserInfo::NotifyGivePopResult
__SUB_CLASS_THIS(004AA920, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	mov ax,word ptr [esp+4]
	mov word ptr [ecx+0xBB0],ax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect
}
}
// CUIUserInfo::ResetInfo
__SUB_CLASS_THIS0(004B6CD0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	mov edx,dword ptr [eax+0x19E8]
	cmp edx,dword ptr [ecx+0xBA4]
	jne Block3

 Block2:
	add eax,0x8C
	push eax
	call CUIUserInfo::SetAvatarInfo

 Block3:
	ret
}
}
// CUIUserInfo::SetState
__SUB_CLASS_THIS(004B39D0, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xBA0],eax
	call CUIUserInfo::SetLayer
	mov ecx,esi
	call CUIUserInfo::SetCtrl
	mov ebx,dword ptr [esi+0xB7C]
	test ebx,ebx
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	push edi
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,0xBE
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0xBA0]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFF55
	add ecx,0xAB
	mov edx,0x10F
	sub edx,ecx
	add eax,edx
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd
	pop edi

 Block2:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ebx
	ret 4
}
}
// CUIUserInfoDetail::OnChildNotify
__SUB_CLASS_THIS(004AA870, __thiscall, 56699,  CUIUserInfoDetail, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	je Block4

 Block1:
	cmp eax,0x3E9
	je Block4

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block5

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	ret 0xC

 Block4:
	push 0
	call CWnd::InvalidateRect

 Block5:
	ret 0xC
}
}
// CUIUserInfoDetail::OnSetFocus
__SUB_CLASS_THIS(004ADB10, __thiscall, 56697,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIUserInfo::SetChairItemInfo
__SUB_CLASS_THIS(004ACDA0, __thiscall, 56789,  CUIUserInfo, void, ZArray<long>&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	lea ebx,[edi+0xC44]
	mov ecx,ebx
	mov dword ptr [esp+0x10],edi
	call ZArray<TSecType<long>>::RemoveAll
	mov ebp,dword ptr [esp+0x18]
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea esi,[eax-1]
	test esi,esi
	jl Block6

 Block3:
	lea ecx,[ecx]

 Block4:
	mov eax,dword ptr [ebp]
	mov edi,dword ptr [eax+esi*4]
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<TSecType<long>>::InsertBefore
	push edi
	mov ecx,eax
	call TSecType<long>::SetData
	sub esi,1
	jns Block4

 Block5:
	mov edi,dword ptr [esp+0x10]

 Block6:
	mov ecx,dword ptr [edi+0xB6C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	test ecx,ecx
	je Block8

 Block7:
	call CUIUserInfoDetail::ResetAvatar

 Block8:
	pop ecx
	ret 4
}
}
// CUIUserInfo::ResetInfo_Pet
__SUB_CLASS_THIS0(004ACE10, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ebp+0x19E8]
	mov ebx,ecx
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+8],ebp
	cmp eax,dword ptr [ebx+0xBA4]
	jne Block26

 Block1:
	push esi
	push edi
	lea esi,[ebx+0xC34]
	mov edi,3

 Block2:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	add esi,4
	sub edi,1
	jne Block2

 Block5:
	xor esi,esi
	jmp Block9

 Block8:
	mov ebp,dword ptr [esp+0x10]

 Block9:
	mov eax,dword ptr [ebp+0x2E44]
	mov ecx,dword ptr [eax+esi*8+4]
	test ecx,ecx
	je Block25

 Block10:
	call CPet::GetItemSlot
	mov edi,eax
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	call CPetTemplate::GetPetTemplate
	add esp,4
	test eax,eax
	je Block25

 Block11:
	lea ecx,[edi+0x28]
	mov dword ptr [ebx+esi*4+0xBC8],eax
	lea ebp,[ebx+esi*4+0xBD4]
	test ecx,ecx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block17

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebp],0
	jmp Block17

 Block14:
	mov eax,ecx
	lea ebx,[eax+1]
	lea esp,[esp]

 Block15:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block15

 Block16:
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
	mov ebx,dword ptr [esp+0x14]

 Block17:
	mov ecx,dword ptr [edi+0x37]
	push ecx
	lea edx,[edi+0x35]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov byte ptr [esi+ebx+0xBE0],al
	mov eax,dword ptr [edi+0x3F]
	push eax
	lea ecx,[edi+0x3B]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	mov word ptr [ebx+esi*2+0xBE4],ax
	mov edx,dword ptr [edi+0x45]
	push edx
	add edi,0x43
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,0x18
	mov byte ptr [esi+ebx+0xBEA],al
	test esi,esi
	jne Block19

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+0xDD]
	jmp Block24

 Block19:
	cmp esi,1
	jne Block21

 Block20:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx+0x11D]
	jmp Block24

 Block21:
	cmp esi,2
	jne Block23

 Block22:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx+0x13D]
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	push esi
	mov ecx,ebx
	mov dword ptr [ebx+esi*4+0xBF0],eax
	call CUIUserInfo::CreatePetAvatar
	inc esi
	cmp esi,3
	jl Block8

 Block25:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	pop edi
	pop esi

 Block26:
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// CUIUserInfo::IsMyAddon
__SUB_CLASS_THIS(004AD6A0, __thiscall, 56780,  CUIUserInfo, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIUserInfoDetail>::ms_pInstance]
	mov ecx,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	cmp eax,ecx
	je Block6

 Block2:
	mov eax,dword ptr [TSingleton<CUIUserInfoWishList>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	cmp eax,ecx
	je Block6

 Block4:
	mov eax,dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance]
	test eax,eax
	je Block7

 Block5:
	cmp eax,ecx
	jne Block7

 Block6:
	mov eax,1
	ret 4

 Block7:
	xor eax,eax
	ret 4
}
}
// CUIUserInfo::GetRTTI
__SUB_CLASS_THIS0(004AD680, __thiscall, 56809,  CUIUserInfo, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIUserInfo::ms_RTTI_CUIUserInfo
	ret
}
}
// CUIUserInfoExceptionList::OnDestroy
__SUB_CLASS_THIS0(004AB7F0, __thiscall, 56602,  CUIUserInfoExceptionList, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xAC]
	test ecx,ecx
	je Block4

 Block1:
	push esi
	call CWnd::Destroy
	cmp dword ptr [edi+0xAC],0
	lea esi,[edi+0xA8]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIItemSearch>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block7

 Block5:
	mov ecx,dword ptr [edi+0xB8]
	mov edx,dword ptr [eax+0x2E44]
	mov ecx,dword ptr [edx+ecx*8+4]
	test ecx,ecx
	je Block7

 Block6:
	lea eax,[ecx+0x8C]
	push eax
	call CPet::SendUpdateExceptionListRequest

 Block7:
	pop edi
	ret
}
}
// CUIUserInfo::SetCtrl
_SUB_EXCEPTION_HANDLER(4B22B0)
__SUB_CLASS_THIS0(004B22B0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B22B0
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
	mov ecx,dword ptr [esi+0xB34]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [esi+0xC08]
	mov eax,dword ptr [eax+0x1C]
	add ecx,4
	push edx
	call eax
	mov ecx,dword ptr [esi+0xB3C]
	mov eax,dword ptr [esi+0xC28]
	mov edx,dword ptr [ecx+4]
	xor ebx,ebx
	add ecx,4
	xor ebp,ebp
	cmp eax,ebp
	mov eax,dword ptr [edx+0x1C]
	setne bl
	push ebx
	call eax
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x40],ebp
	lea edi,[esi+0xB54]
	lea ebx,[ebp+3]

 Block1:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	je Block4

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [edi],ebp
	je Block4

 Block3:
	push ebp
	lea ecx,[edi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi],ebp

 Block4:
	add edi,8
	sub ebx,1
	jne Block1

 Block5:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,dword ptr [eax+0x2E44]
	mov eax,dword ptr [eax+0x19E8]
	mov edi,dword ptr [ecx+4]
	cmp dword ptr [esi+0xBA4],eax
	jne Block10

 Block6:
	cmp edi,ebp
	je Block9

 Block7:
	cmp dword ptr [esi+0xBBC],ebp
	je Block9

 Block8:
	lea eax,[ebx+1]
	jmp Block11

 Block9:
	xor eax,eax
	jmp Block11

 Block10:
	mov eax,dword ptr [esi+0xBBC]

 Block11:
	mov ecx,dword ptr [esi+0xB2C]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx+0x19E8]
	cmp dword ptr [esi+0xBA4],eax
	jne Block16

 Block12:
	cmp edi,ebp
	je Block16

 Block13:
	cmp dword ptr [esi+0xBBC],ebp
	je Block16

 Block14:
	mov edx,dword ptr [edi+0x184]
	push edx
	lea eax,[edi+0x17C]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block16

 Block15:
	mov eax,1
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov ecx,dword ptr [esi+0xB44]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ebx,1
	cmp dword ptr [esi+0xBA0],ebx
	jne Block22

 Block18:
	cmp edi,ebp
	je Block22

 Block19:
	cmp dword ptr [esi+0xBBC],ebp
	je Block22

 Block20:
	mov ecx,dword ptr [edi+0x184]
	push ecx
	add edi,0x17C
	push edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block22

 Block21:
	mov ebp,ebx

 Block22:
	mov ecx,dword ptr [esi+0xB44]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push ebp
	call eax
	cmp dword ptr [esi+0xBA0],ebx
	jne Block42

 Block23:
	mov ebp,0x7DC
	mov dword ptr [esp+0x14],0xA8
	lea edi,[esi+0xB54]
	mov dword ptr [esp+0x18],3

 Block24:
	lea ecx,[esp+0x1C]
	push 0x125A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea edx,[ebp-0x7DB]
	push edx
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x4C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block28

 Block27:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block46

 Block30:
	add eax,8
	je Block46

 Block31:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block33

 Block32:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [edi]
	mov dword ptr [edi],ebx
	test eax,eax
	je Block37

 Block34:
	lea ebx,[eax+8]
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block35:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block37

 Block36:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block37:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push 0xBB
	push ebx
	push ebp
	push esi
	call edx
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	add ebx,0x22
	inc ebp
	add edi,8
	sub dword ptr [esp+0x18],1
	mov dword ptr [esp+0x14],ebx
	jne Block24

 Block38:
	lea edi,[esi+0xB54]
	lea ebx,[esi+0xC34]
	mov ebp,3
	mov edi,edi

 Block39:
	cmp dword ptr [ebx],0
	je Block41

 Block40:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 1
	call edx

 Block41:
	add ebx,4
	add edi,8
	sub ebp,1
	jne Block39

 Block42:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block49

 Block43:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block44:
	push ebx
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	call ebx
	test edi,edi
	je Block48

 Block45:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	mov dword ptr [esp+0x20],0
	jmp Block50

 Block46:
	xor ebx,ebx
	jmp Block33

 Block47:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	mov dword ptr [esp+0x20],0
	jmp Block50

 Block49:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov ecx,dword ptr [ebp+0x35]
	push ecx
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	jae Block52

 Block51:
	mov eax,dword ptr [esi+0xB1C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xB24]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block52:
	mov ecx,dword ptr [esi+0xB4C]
	test ecx,ecx
	je Block62

 Block53:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov eax,dword ptr [esi+0xB4C]
	test eax,eax
	je Block62

 Block54:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	add eax,0xC
	push eax
	call ebp
	test eax,eax
	jne Block61

 Block55:
	mov eax,dword ptr [esi+0xB4C]
	test eax,eax
	je Block57

 Block56:
	add eax,8
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	add eax,4
	push eax
	call ebx
	mov eax,dword ptr [esi+0xB4C]
	test eax,eax
	je Block61

 Block59:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block61

 Block60:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block61:
	mov dword ptr [esi+0xB4C],0
	jmp Block63

 Block62:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block63:
	mov eax,dword ptr [esi+0xBA0]
	cmp eax,1
	je Block65

 Block64:
	cmp eax,2
	jne Block83

 Block65:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x40],3
	test eax,eax
	je Block67

 Block66:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block79

 Block69:
	add eax,8
	je Block79

 Block70:
	lea edi,[eax-8]
	test edi,edi
	je Block72

 Block71:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block72:
	mov eax,dword ptr [esi+0xB4C]
	mov dword ptr [esi+0xB4C],edi
	test eax,eax
	je Block76

 Block73:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call ebp
	test eax,eax
	jne Block76

 Block74:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block76

 Block75:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block76:
	mov eax,dword ptr [esi+0xBA0]
	mov ecx,dword ptr [esi+0xB4C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	dec eax
	push 0
	neg eax
	push 0x75
	sbb eax,eax
	and eax,0xFFFFFFEF
	add eax,0xDC
	push eax
	push 0xFA
	push 8
	push 1
	push 0x7DF
	push esi
	call edx
	mov eax,dword ptr [esi+0xB4C]
	mov dword ptr [eax+0x34],0xD7
	cmp dword ptr [esi+0xBA0],1
	jne Block80

 Block77:
	mov eax,dword ptr [esi+0xBC4]
	lea eax,[esi+eax*4+0xB80]
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block81

 Block78:
	jmp Block82

 Block79:
	xor edi,edi
	jmp Block72

 Block80:
	mov eax,dword ptr [esi+0xB8C]
	test eax,eax
	je Block82

 Block81:
	mov eax,dword ptr [eax-4]

 Block82:
	mov ecx,dword ptr [esi+0xB4C]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange

 Block83:
	cmp dword ptr [esi+0xBA0],3
	jne Block101

 Block84:
	cmp dword ptr [esi+0xC28],0
	je Block101

 Block85:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block87

 Block86:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block88

 Block87:
	xor eax,eax

 Block88:
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block98

 Block89:
	add eax,8
	je Block98

 Block90:
	lea edi,[eax-8]
	test edi,edi
	je Block92

 Block91:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block92:
	mov eax,dword ptr [esi+0xB4C]
	mov dword ptr [esi+0xB4C],edi
	test eax,eax
	je Block96

 Block93:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call ebp
	test eax,eax
	jne Block96

 Block94:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block96

 Block95:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block96:
	mov ecx,dword ptr [esi+0xB4C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x78
	push 0xFE
	push 0xFB
	push 8
	push 1
	push 0x7DF
	push esi
	call eax
	mov eax,dword ptr [esi+0xB4C]
	mov dword ptr [eax+0x34],0xBF
	mov eax,dword ptr [esi+0xC28]
	mov eax,dword ptr [eax+0x10]
	test eax,eax
	jne Block99

 Block97:
	jmp Block100

 Block98:
	xor edi,edi
	jmp Block92

 Block99:
	mov eax,dword ptr [eax-4]

 Block100:
	mov esi,dword ptr [esi+0xB4C]
	add eax,0xFFFFFFFB
	push eax
	mov ecx,esi
	call CCtrlScrollBar::SetScrollRange

 Block101:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block103:
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
// CUIItemSearchResult::Search
_SUB_EXCEPTION_HANDLER(4AE1E0)
__SUB_CLASS_THIS(004AE1E0, __thiscall, 56476,  CUIItemSearchResult, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AE1E0
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x34]
	mov eax,dword ptr [esi]
	xor ebx,ebx
	cmp eax,ebx
	je Block6

 Block1:
	cmp byte ptr [eax],bl
	je Block6

 Block2:
	push 1
	push ebx
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esi]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block6:
	mov ebp,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add ebp,0x23C
	mov dword ptr [esp+0x14],ebx
	lea ecx,[edi+0x88]
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x18],ecx
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block33

 Block7:
	cmp byte ptr [eax],bl
	je Block33

 Block8:
	mov ecx,esi
	xor edi,edi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block33

 Block9:
	mov eax,dword ptr [esi]
	mov al,byte ptr [edi+eax]
	cmp al,0x20
	je Block11

 Block10:
	push 1
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x3C],al
	call ZXString<char>::_Cat

 Block11:
	mov ecx,esi
	inc edi
	call ZXString<char>::GetLength
	cmp edi,eax
	jl Block9

 Block12:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebx
	je Block34

 Block13:
	cmp byte ptr [edi],bl
	je Block34

 Block14:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x34],eax
	cmp eax,ebx
	je Block34

 Block15:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea esp,[esp]

 Block16:
	lea edx,[esp+0x34]
	push edx
	call ZList<ZRef<ITEMNAME>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block18

 Block17:
	lea eax,[esi-0xC]
	push eax
	call ebp

 Block18:
	mov eax,dword ptr [esi]
	mov byte ptr [esp+0x2C],1
	cmp eax,ebx
	je Block24

 Block19:
	cmp byte ptr [eax],bl
	je Block24

 Block20:
	push 1
	push ebx
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esi]
	add esp,4
	cmp eax,ebx
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	push eax
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block24:
	push 1
	push ebx
	push edi
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	jl Block28

 Block25:
	mov ecx,dword ptr [esi+4]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsScannableItem
	test eax,eax
	je Block28

 Block26:
	mov edx,dword ptr [esi+4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block28

 Block27:
	mov ecx,dword ptr [esp+0x18]
	push 0xFFFFFFFF
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esi+4]
	mov dword ptr [eax],ecx

 Block28:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x30],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block29:
	push edi
	call ebp
	cmp esi,ebx
	je Block31

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block31:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],ebx
	cmp dword ptr [esp+0x34],ebx
	jne Block16

 Block32:
	jmp Block34

 Block33:
	mov edi,dword ptr [esp+0x14]

 Block34:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebx
	je Block36

 Block35:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIUserInfo::ToggleExceptionList
_SUB_EXCEPTION_HANDLER(4B14C0)
__SUB_CLASS_THIS0(004B14C0, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B14C0
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
	cmp dword ptr [esi+0x1694],0
	je Block4

 Block1:
	mov ecx,dword ptr [esi+0xB7C]
	test ecx,ecx
	je Block8

 Block2:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB7C],0
	lea edi,[esi+0xB78]
	je Block8

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoExceptionList>::_ReleaseRaw
	mov dword ptr [edi+4],0
	jmp Block8

 Block4:
	push 0xD0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block6

 Block5:
	mov eax,dword ptr [esi+0xBC4]
	mov edx,dword ptr [esi+4]
	lea edi,[esi+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0xBA0]
	mov edx,dword ptr [edi]
	neg ecx
	sbb ecx,ecx
	and ecx,0xA2
	add ecx,0x22
	add eax,ecx
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,0x10E
	push eax
	mov ecx,ebx
	call CUIUserInfoExceptionList::_ctor_0
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	lea ecx,[esi+0xB78]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIUserInfoExceptionList>::op_assign_ptr

 Block8:
	xor ecx,ecx
	cmp dword ptr [esi+0x1694],ecx
	sete cl
	mov dword ptr [esi+0x1694],ecx
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
// CUIUserInfo::IsKindOf
__SUB_CLASS_THIS(004AD6E0, __thiscall, 56810,  CUIUserInfo, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIUserInfo::ms_RTTI_CUIUserInfo
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
// CUIUserInfo::OnMouseMove
_SUB_EXCEPTION_HANDLER(4B17D0)
__SUB_CLASS_THIS(004B17D0, __thiscall, 56779,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B17D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xB9C]
	mov ebx,1
	cmp eax,ebx
	je Block2

 Block1:
	cmp eax,2
	jne Block32

 Block2:
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	mov ebp,0xDA
	lea esp,[esp]

 Block3:
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x6C]
	lea eax,[ebp-0x10]
	push ecx
	mov dword ptr [esp+0x54],eax
	push edx
	lea eax,[esp+0x54]
	push eax
	mov dword ptr [esp+0x58],0x93
	mov dword ptr [esp+0x60],0xF7
	mov dword ptr [esp+0x64],ebp
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block31

 Block4:
	mov eax,dword ptr [esi+0xB48]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x1C]
	add eax,ecx
	cmp dword ptr [esi+0xB9C],ebx
	jne Block17

 Block5:
	mov edx,dword ptr [esi+0xBC0]
	lea ecx,[esi+edx*4+0xB7C]
	mov edx,dword ptr [ecx]
	cmp edx,edi
	je Block33

 Block6:
	cmp eax,dword ptr [edx-4]
	jae Block33

 Block7:
	mov ecx,edx
	mov edx,dword ptr [ecx+eax*4]
	lea eax,[ecx+eax*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemName
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x68],edi
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block34

 Block8:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x70],1
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x28]
	push ebx
	push eax
	mov byte ptr [esp+0x74],2
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],3
	cmp ecx,edi
	je Block35

 Block9:
	mov byte ptr [esp+0x6C],4
	call IWzFont::CalcTextWidth
	cmp eax,0x64
	mov eax,dword ptr [esp+0x20]
	seta bl
	mov byte ptr [esp+0x64],1
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	test bl,bl
	jne Block36

 Block16:
	mov eax,dword ptr [esp+0x14]
	jmp Block29

 Block17:
	mov ecx,dword ptr [esi+0xB88]
	cmp ecx,edi
	je Block33

 Block18:
	cmp eax,dword ptr [ecx-4]
	jae Block33

 Block19:
	mov edx,ecx
	lea eax,[edx+eax*4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x68],7
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block34

 Block20:
	mov edx,dword ptr [esp+0x18]
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x70],8
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x2C]
	push ebx
	push eax
	mov byte ptr [esp+0x74],9
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xA
	cmp ecx,edi
	je Block35

 Block21:
	mov byte ptr [esp+0x6C],0xB
	call IWzFont::CalcTextWidth
	cmp eax,0x64
	mov eax,dword ptr [esp+0x24]
	seta bl
	mov byte ptr [esp+0x64],8
	cmp eax,edi
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],7
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	test bl,bl
	jne Block42

 Block28:
	mov eax,dword ptr [esp+0x18]

 Block29:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,edi
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ebx,1
	add dword ptr [esp+0x1C],ebx
	add ebp,0x2A
	cmp ebp,0x158
	jl Block3

 Block32:
	lea ecx,[esi+0xC48]
	call CUIToolTip::ClearToolTip

 Block33:
	xor eax,eax
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 8

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x24]
	push 0x1A19
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x70],6
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0xC48]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],5
	cmp eax,edi
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0
	cmp eax,edi
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,edi
	je Block33

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block33

 Block42:
	lea eax,[esp+0x24]
	push 0x1A19
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x70],0xD
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0xC48]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],0xC
	cmp eax,edi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],7
	cmp eax,edi
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,edi
	je Block33

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block33
}
}
// CUIUserInfoWishList::GetRTTI
__SUB_CLASS_THIS0(004AB420, __thiscall, 56739,  CUIUserInfoWishList, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIUserInfoWishList::ms_RTTI_CUIUserInfoWishList
	ret
}
}
// CUIItemSearchResult::GetIndexFromPt
__SUB_CLASS_THIS(004AAC40, __thiscall, 56477,  CUIItemSearchResult, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	push edi
	xor edi,edi
	mov ebx,ecx
	lea esi,[edi+0x1D]
	jmp Block3

 Block3:
	mov eax,dword ptr [ebx+0x84]
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [ebx+0x88]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	add ecx,edi
	cmp ecx,eax
	jae Block8

 Block6:
	mov eax,dword ptr [esp+0x28]
	push eax
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],0xE
	mov dword ptr [esp+0x20],0xF
	mov dword ptr [esp+0x24],0xA9
	mov dword ptr [esp+0x28],esi
	call PtInRect
	test eax,eax
	jne Block9

 Block7:
	add esi,0xE
	inc edi
	cmp esi,0x63
	jl Block3

 Block8:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block9:
	mov edx,dword ptr [ebx+0x84]
	mov eax,dword ptr [edx+0x38]
	add eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIUserInfo::SetWishItemInfo
_SUB_EXCEPTION_HANDLER(4ACC90)
__SUB_CLASS_THIS(004ACC90, __thiscall, 56789,  CUIUserInfo, void, ZArray<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ACC90
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
	mov dword ptr [esp+0x14],esi
	lea ebx,[esi+0xC48]
	mov ecx,ebx
	call ZArray<TSecType<long>>::RemoveAll
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ebp,[eax-1]
	test ebp,ebp
	jl Block12

 Block3:
	mov eax,dword ptr [edi]
	lea esi,[ebp*4]
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	add eax,esi
	mov esi,dword ptr [eax]
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<TSecType<long>>::InsertBefore
	push esi
	mov ecx,eax
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x1C]

 Block5:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esp+0x1C],0

 Block10:
	sub ebp,1
	jns Block3

 Block11:
	mov esi,dword ptr [esp+0x14]

 Block12:
	mov ecx,dword ptr [esi+0xB74]
	test ecx,ecx
	je Block14

 Block13:
	call CUIUserInfoWishList::ResetAvatar

 Block14:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUIUserInfo::AddOnClear
__SUB_CLASS_THIS0(004AB900, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB6C],0
	je Block5

 Block1:
	push 0
	call CUIUserInfo::SetAddOnOption
	mov ecx,dword ptr [esi+0xB6C]
	test ecx,ecx
	je Block5

 Block2:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xB6C],0
	lea edi,[esi+0xB68]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoDetail>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	pop edi

 Block5:
	cmp dword ptr [esi+0xB74],0
	je Block9

 Block6:
	push 0
	mov ecx,esi
	call CUIUserInfo::SetAddOnOption
	mov ecx,dword ptr [esi+0xB74]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	add esi,0xB70
	cmp dword ptr [esi+4],0
	je Block9

 Block8:
	push 0
	mov ecx,esi
	call ZRef<CUIUserInfoWishList>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block9:
	pop esi
	ret
}
}
// CUIUserInfoWishList::OnDestroy
__SUB_CLASS_THIS0(004AB3F0, __thiscall, 56730,  CUIUserInfoWishList, void) {
__asm {

 Block0:
	ret
}
}
// CUIItemSearch::Update
__SUB_CLASS_THIS0(004AA820, __thiscall, 56504,  CUIItemSearch, void) {
__asm {

 Block0:
	ret
}
}
// CUIUserInfo::SetMultiPetInfo
_SUB_EXCEPTION_HANDLER(4B66A0)
__SUB_CLASS_THIS(004B66A0, __thiscall, 56787,  CUIUserInfo, void, int32_t, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B66A0
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
	cmp dword ptr [esp+0x30],0
	mov dword ptr [esp+0x14],0
	je Block6

 Block1:
	mov esi,dword ptr [esp+0x34]

 Block2:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x18],al
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebx,ax
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x34],al
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebp,ax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x18]
	push eax
	push ebp
	push ecx
	push ebx
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	push edi
	mov edi,dword ptr [esp+0x30]
	push edi
	call CUIUserInfo::SetPetInfo
	inc edi
	mov ecx,esi
	mov dword ptr [esp+0x14],edi
	call CInPacket::Decode1
	movzx edi,al
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	test edi,edi
	jne Block2

 Block5:
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	push 1
	call CUIUserInfo::SetState

 Block6:
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
// CUIUserInfoExceptionList::OnMouseButton
__SUB_CLASS_THIS(004AAF70, __thiscall, 56609,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIUserInfoExceptionList::GetIndexFromPt
	cmp dword ptr [esp+0xC],0x202
	jne Block3

 Block1:
	cmp dword ptr [esi+0xB0],eax
	je Block3

 Block2:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xB0],eax
	call CWnd::InvalidateRect

 Block3:
	pop edi
	pop esi
	ret 0x10
}
}
// CUIUserInfo::SetAvatarInfo
_SUB_EXCEPTION_HANDLER(4B6840)
// 8B6CA0
static uint8_t _SUB_4B6840_LOOKUP_TABLE_0[41] = {
0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 2, 2, 
3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 4, 4, 
};
__SUB_CLASS_THIS(004B6840, __thiscall, 56783,  CUIUserInfo, int32_t, const AvatarLook&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B6840
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
	lea ebp,[esi+0xC40]
	mov ecx,ebp
	mov dword ptr [esp+0x14],1
	call ZArray<TSecType<long>>::RemoveAll
	xor ebx,ebx

 Block1:
	test ebx,ebx
	je Block23

 Block2:
	cmp ebx,0xE
	je Block23

 Block3:
	cmp ebx,0x12
	jne Block5

 Block4:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax+0x61]
	mov dword ptr [esi+0xC0C],ecx
	jmp Block23

 Block5:
	cmp ebx,0x13
	jne Block7

 Block6:
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [edx+0x65]
	mov dword ptr [esi+0xC10],eax
	jmp Block23

 Block7:
	cmp ebx,0x14
	jne Block9

 Block8:
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [ecx+0x69]
	mov dword ptr [esi+0xC14],edx
	jmp Block23

 Block9:
	cmp ebx,8
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x58]
	cmp dword ptr [eax+0x39],0x108396
	je Block23

 Block11:
	jmp Block16

 Block12:
	cmp ebx,0xB
	jne Block16

 Block13:
	mov ecx,dword ptr [esp+0x58]
	mov ecx,dword ptr [ecx+0x15]
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	jne Block16

 Block14:
	push ecx
	lea ecx,[esp+0x28]
	call TSecType<long>::_ctor_1
	push 0xFFFFFFFF
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x58],0
	call ZArray<TSecType<long>>::Insert
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
	mov edi,dword ptr [esp+0x58]
	mov eax,dword ptr [edi+ebx*4+0x109]
	test eax,eax
	jle Block19

 Block17:
	push eax
	lea ecx,[esp+0x34]
	call TSecType<long>::_ctor_1
	push 0xFFFFFFFF
	lea edx,[esp+0x34]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x58],1
	call ZArray<TSecType<long>>::Insert
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block19:
	mov edi,dword ptr [edi+ebx*4+0x19]
	test edi,edi
	jle Block23

 Block20:
	push edi
	call is_petabil_item
	add esp,4
	test eax,eax
	jne Block23

 Block21:
	push edi
	lea ecx,[esp+0x40]
	call TSecType<long>::_ctor_1
	push 0xFFFFFFFF
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x58],2
	call ZArray<TSecType<long>>::Insert
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block23:
	inc ebx
	cmp ebx,0x3C
	jl Block1

 Block24:
	mov eax,dword ptr [esi+0xB94]
	test eax,eax
	je Block29

 Block25:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block28

 Block27:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block28:
	mov dword ptr [esi+0xB94],0

 Block29:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CAvatar>>::call
	add esp,4
	push 0
	push 0x64
	push 0x7F
	push 0x3C
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x34],esp
	add eax,0x10
	push ecx
	mov ecx,esi
	mov dword ptr [esi+0xB94],eax
	call CWnd::GetLayer
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x6C],3
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],4
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [esi+0xB94]
	mov edi,dword ptr [esp+0x74]
	push 5
	push edi
	mov byte ptr [esp+0x74],5
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x18]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	cmp dword ptr [esi+0xC0C],0
	je Block54

 Block37:
	mov eax,dword ptr [esi+0xC10]
	test eax,eax
	je Block54

 Block38:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block53

 Block39:
	mov ecx,dword ptr [esi+0xC0C]
	push ecx
	mov ecx,eax
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	je Block53

 Block40:
	lea ecx,[esi+0xB98]
	call ZRef<CAvatar>::_Alloc
	mov eax,dword ptr [esi+0xC0C]
	lea ecx,[eax-0x1D05B2]
	cmp ecx,0x28
	ja Block47

 Block41:
	movzx edx,byte ptr [ecx+_SUB_4B6840_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block45
cmp EDX, 1
je Block42
cmp EDX, 2
je Block43
cmp EDX, 3
je Block44
cmp EDX, 4
je Block46
cmp EDX, 5
je Block47


 Block42:
	mov ecx,0x50
	xor edx,edx
	lea eax,[ecx-0x5C]
	jmp Block50

 Block43:
	mov ecx,0x50
	lea edx,[ecx-0x55]
	lea eax,[ecx-0x5F]
	jmp Block50

 Block44:
	mov ecx,0x4B
	lea edx,[ecx-0x50]
	lea eax,[ecx-0x5F]
	jmp Block50

 Block45:
	mov edx,0xFFFFFFE7
	mov ecx,0x46
	mov eax,edx
	jmp Block50

 Block46:
	mov ecx,0x46
	lea edx,[ecx-0x5F]
	lea eax,[ecx-0x69]
	jmp Block50

 Block47:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	jne Block49

 Block48:
	lea ecx,[eax+0x64]
	xor edx,edx
	jmp Block50

 Block49:
	mov ecx,dword ptr [eax+0x1E4]
	mov edx,dword ptr [eax+0x1E8]
	mov eax,dword ptr [eax+0x1EC]

 Block50:
	push 0
	push ecx
	add eax,0x123
	push eax
	add edx,0x3B
	push edx
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x6C],6
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x70],7
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov ecx,dword ptr [esi+0xB9C]
	push 5
	push edi
	mov byte ptr [esp+0x74],8
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov ecx,dword ptr [esi+0xC0C]
	push 0
	push ecx
	mov ecx,dword ptr [esi+0xB9C]
	call CAvatar::SetRidingVehicle
	mov ecx,dword ptr [esi+0xB9C]
	push 0
	call CAvatar::SetVisibleMan
	mov edx,dword ptr [esi+0xBA0]
	push edx
	mov ecx,esi
	call CUIUserInfo::SetState
	jmp Block54

 Block53:
	mov dword ptr [esp+0x14],0

 Block54:
	mov ecx,dword ptr [esi+0xB6C]
	test ecx,ecx
	je Block56

 Block55:
	call CUIUserInfoDetail::ResetAvatar

 Block56:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CUIUserInfo::OnDestroy
__SUB_CLASS_THIS0(004AB850, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,dword ptr [esi+0xB6C]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB6C],0
	lea edi,[esi+0xB68]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoDetail>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	mov ecx,dword ptr [esi+0xB74]
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB74],0
	lea edi,[esi+0xB70]
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoWishList>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,dword ptr [esi+0xB7C]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB7C],0
	lea edi,[esi+0xB78]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoExceptionList>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block9:
	pop edi
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIUserInfoWishList::OnChildNotify
__SUB_CLASS_THIS(004AD280, __thiscall, 56734,  CUIUserInfoWishList, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	jne Block2

 Block1:
	call CUIUserInfoWishList::ResetAvatar
	ret 0xC

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block4:
	ret 0xC
}
}
// CUIUserInfo::OnMouseEnter
__SUB_CLASS_THIS(004AA8A0, __thiscall, 56773,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xC48]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIItemSearchResult::OnMouseMove
_SUB_EXCEPTION_HANDLER(4AB550)
__SUB_CLASS_THIS(004AB550, __thiscall, 56470,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AB550
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
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x2C]
	push ebx
	lea edi,[esi-4]
	push ebp
	mov ecx,edi
	call CUIItemSearchResult::GetIndexFromPt
	cmp dword ptr [esi+0x88],eax
	je Block2

 Block1:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x88],eax
	call CWnd::InvalidateRect

 Block2:
	mov eax,dword ptr [esi+0x88]
	test eax,eax
	jl Block9

 Block3:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx+eax*4]
	lea eax,[ecx+eax*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,ebx
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	lea ecx,[eax+ebp+0x14]
	push ecx
	lea ecx,[esi+0x90]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x18]

 Block5:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block7:
	mov edx,dword ptr [esp+0x18]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block10

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	jmp Block10

 Block9:
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip

 Block10:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIUserInfo::SetMedalAchievementInfo
_SUB_EXCEPTION_HANDLER(4AB990)
__SUB_CLASS_THIS(004AB990, __thiscall, 56792,  CUIUserInfo, void, NakedParam<ZRef<MedalAchievementInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AB990
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
	lea ecx,[esi+0xC24]
	mov dword ptr [esp+0x14],0
	call ZRef<MedalAchievementInfo>::op_assign_copy
	mov eax,dword ptr [esi+0xB3C]
	mov esi,dword ptr [esi+0xC28]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	xor eax,eax
	test esi,esi
	setne al
	push eax
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x1C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIItemSearch::OpenSearchResult
_SUB_EXCEPTION_HANDLER(4B28E0)
__SUB_CLASS_THIS(004B28E0, __thiscall, 56515,  CUIItemSearch, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B28E0
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [edi+0xB14]
	cmp ecx,ebx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [edi+0xB14],ebx
	lea esi,[edi+0xB10]
	je Block3

 Block2:
	push ebx
	mov ecx,esi
	call ZRef<CUIItemSearchResult>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block3:
	push 0xAF0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x2C],0
	test ebp,ebp
	je Block5

 Block4:
	mov ecx,dword ptr [edi+0xB0C]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	push 0
	mov ebx,1
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x34],1
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edx,dword ptr [edi+4]
	lea esi,[edi+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x60
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	push eax
	mov ecx,ebp
	call CUIItemSearchResult::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov dword ptr [esp+0x2C],2
	test eax,eax
	je Block16

 Block7:
	add eax,8
	je Block16

 Block8:
	lea esi,[eax-8]
	test esi,esi
	je Block10

 Block9:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [edi+0xB14]
	mov dword ptr [edi+0xB14],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CUIItemSearchResult>::_ReleaseRaw

 Block12:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test bl,1
	je Block15

 Block13:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block16:
	xor esi,esi
	jmp Block10
}
}
// CUIUserInfoDetail::CUIUserInfoDetail
_SUB_EXCEPTION_HANDLER(4ADA30)
__SUB_CLASS_THIS(004ADA30, __thiscall, 56693,  CUIUserInfoDetail, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ADA30
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
	mov dword ptr [TSingleton<CUIUserInfoDetail>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIUserInfoDetail>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoDetail::`vftable'{for `ZRefCounted'}
	mov dword ptr [ecx+4],eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push 1
	push eax
	mov eax,dword ptr [esp+0x2C]
	push 1
	push 0xA
	push 0xA5
	push 0x198
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],4
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
// CUIUserInfoExceptionList::OnButtonClicked
__SUB_CLASS_THIS(004B21C0, __thiscall, 56607,  CUIUserInfoExceptionList, void, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ebx+0xB8]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [edx+eax*8+4]
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	call CUIUserInfo::ToggleExceptionList
	pop ebx
	ret 4

 Block2:
	push edi
	lea edi,[eax+0x8C]
	mov eax,dword ptr [esp+0xC]
	add eax,0xFFFFF830
	cmp eax,3
	ja Block12

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block7
cmp EAX, 2
je Block5
cmp EAX, 3
je Block14


 Block4:
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	call CUIUserInfo::ToggleExceptionList
	pop edi
	pop ebx
	ret 4

 Block5:
	cmp dword ptr [ebx+0xAC],0
	jne Block12

 Block6:
	mov ecx,ebx
	call CUIUserInfoExceptionList::OpenItemSearch
	pop edi
	pop ebx
	ret 4

 Block7:
	push esi
	mov ecx,edi
	xor esi,esi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block11

 Block8:
	mov ecx,dword ptr [edi]
	lea ecx,[ecx]

 Block9:
	cmp dword ptr [ecx],0x7FFFFFFF
	je Block13

 Block10:
	inc esi
	add ecx,4
	cmp esi,eax
	jb Block9

 Block11:
	push 0x7FFFFFFF
	mov ecx,ebx
	call CUIUserInfoExceptionList::AddToList
	pop esi

 Block12:
	pop edi
	pop ebx
	ret 4

 Block13:
	push 0x7FFFFFFF
	mov ecx,ebx
	call CUIUserInfoExceptionList::RemoveFromList
	pop esi
	pop edi
	pop ebx
	ret 4

 Block14:
	mov eax,dword ptr [ebx+0xB4]
	test eax,eax
	jl Block12

 Block15:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block17

 Block16:
	xor ecx,ecx
	jmp Block18

 Block17:
	mov ecx,dword ptr [edi-4]

 Block18:
	cmp eax,ecx
	jae Block12

 Block19:
	mov eax,dword ptr [edi+eax*4]
	push eax
	mov ecx,ebx
	call CUIUserInfoExceptionList::RemoveFromList
	pop edi
	pop ebx
	ret 4
}
}
// CUIUserInfoWishList::~CUIUserInfoWishList
_SUB_EXCEPTION_HANDLER(4AB470)
__SUB_CLASS_THIS0(004AB470, __thiscall, 56730,  CUIUserInfoWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AB470
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoWishList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoWishList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoWishList::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA0]
	mov dword ptr [esp+0x18],3
	call CUIToolTip::~CUIToolTip
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea eax,[esi+0x88]
	push eax
	mov byte ptr [esp+0x28],2
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIUserInfoWishList>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIUserInfo::SetTamingMobItemList
__SUB_CLASS_THIS0(004AD100, __thiscall, 56771,  CUIUserInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea edi,[esi+0xB8C]
	mov ecx,edi
	call ZArray<long>::RemoveAll
	cmp dword ptr [esi+0xC10],0
	je Block2

 Block1:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esi+0xC10]
	mov dword ptr [eax],ecx

 Block2:
	cmp dword ptr [esi+0xC14],0
	je Block4

 Block3:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [esi+0xC14]
	mov dword ptr [eax],edx

 Block4:
	mov ecx,dword ptr [esi+0xB4C]
	test ecx,ecx
	je Block8

 Block5:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block7

 Block6:
	mov edi,0xFFFFFFFE
	push edi
	call CCtrlScrollBar::SetScrollRange
	pop edi
	pop esi
	ret

 Block7:
	mov edi,dword ptr [edi-4]
	add edi,0xFFFFFFFE
	push edi
	call CCtrlScrollBar::SetScrollRange

 Block8:
	pop edi
	pop esi
	ret
}
}
// CUIItemSearchResult::OnButtonClicked
__SUB_CLASS_THIS(004B1F30, __thiscall, 56475,  CUIItemSearchResult, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x7D0
	je Block7

 Block1:
	sub eax,1
	jne Block12

 Block2:
	mov edx,dword ptr [ecx+0x90]
	test edx,edx
	jl Block12

 Block3:
	mov eax,dword ptr [ecx+0x88]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	cmp edx,eax
	jae Block12

 Block6:
	mov eax,dword ptr [ecx+0x88]
	mov ecx,dword ptr [eax+edx*4]
	mov dword ptr [esp+4],ecx
	mov ecx,dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance]
	jmp  CUIUserInfoExceptionList::RemoveFromList

 Block7:
	mov edx,dword ptr [ecx+0x90]
	test edx,edx
	jl Block12

 Block8:
	mov eax,dword ptr [ecx+0x88]
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]

 Block10:
	cmp edx,eax
	jae Block12

 Block11:
	mov eax,dword ptr [ecx+0x88]
	mov ecx,dword ptr [eax+edx*4]
	mov dword ptr [esp+4],ecx
	mov ecx,dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance]
	jmp  CUIUserInfoExceptionList::AddToList

 Block12:
	ret 4
}
}
// CUIItemSearch::OnCreate
_SUB_EXCEPTION_HANDLER(4B1FB0)
__SUB_CLASS_THIS(004B1FB0, __thiscall, 56505,  CUIItemSearch, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B1FB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	lea edi,[esi+0xB18]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEX__5
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGEX__4
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGEX__3
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	lea ecx,[esp+0x18]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea edx,[esp+0x10]
	push 0x1A25
	push edx
	mov dword ptr [esp+0x64],0
	mov dword ptr [esp+0x44],0xFFFFFFFF
	mov dword ptr [esp+0x3C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea eax,[esp+0x2C]
	cmp eax,edi
	je Block9

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],0

 Block7:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x2C],edi
	test edi,edi
	je Block9

 Block8:
	add edi,8
	push edi
	call ebp

 Block9:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x4C],0x100
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x5C],1
	test eax,eax
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov byte ptr [esp+0x5C],0
	test eax,eax
	je Block21

 Block15:
	add eax,8
	je Block21

 Block16:
	lea edi,[eax-8]
	test edi,edi
	je Block18

 Block17:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block18:
	mov eax,dword ptr [esi+0xB0C]
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block20:
	mov ecx,dword ptr [esi+0xB0C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x18]
	push eax
	push 0xD
	push 0xB4
	push 0x33
	push 0xE
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x64]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_0
	mov eax,dword ptr [esi+0xB0C]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 4

 Block21:
	xor edi,edi
	jmp Block18
}
}
// CUIItemSearchResult::OnDestroy
__SUB_CLASS_THIS0(004B1E20, __thiscall, 56467,  CUIItemSearchResult, void) {
__asm {

 Block0:
	ret
}
}
// CUIUserInfo::SetAddOnOption
__SUB_CLASS_THIS(004AA940, __thiscall, 56793,  CUIUserInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAFC]
	xor eax,dword ptr [esp+4]
	and eax,0xF
	xor dword ptr [ecx+0xAFC],eax
	ret 4
}
}
// CUIUserInfo::Draw
_SUB_EXCEPTION_HANDLER(4B3A50)
__SUB_CLASS_THIS(004B3A50, __thiscall, 56777,  CUIUserInfo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B3A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0xA8]
	push eax
	call CWnd::Draw
	xor ebp,ebp
	mov dword ptr [esp+0x58],ebp
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xA4],ebp
	call CWnd::GetCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA4],1
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xA4],2
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0xA4],3
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x64]
	push ebp
	push ecx
	mov byte ptr [esp+0xB0],4
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0xBA8]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0xBA8]
	push 0x89
	lea edx,[esp+0x80]
	push edx
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],6
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x30]
	push ebp
	push eax
	mov byte ptr [esp+0xC4],7
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xBC],8
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0xBC],9
	call IWzFont::CalcTextWidth
	mov ebp,dword ptr [esp+0xA0]
	test ebp,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	shr eax,1
	mov ecx,0x3D
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xB8],0xA
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],bl
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA0],4
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x6C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xA0],3
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x6C]
	push ecx
	call ebx

 Block18:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],2
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block22:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],1
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block26:
	lea eax,[esp+0x14]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx ecx,byte ptr [edi+0xBAC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xAC],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA4],0xC
	call esi
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push 0x18
	push eax
	mov byte ptr [esp+0xB0],0xD
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x47
	mov byte ptr [esp+0xB4],0xF
	push 0x99
	mov ecx,ebp
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xD
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ebx,8
	mov byte ptr [esp+0xA0],0xC
	cmp word ptr [esp+0x1C],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x30],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	movsx ecx,word ptr [edi+0xBAE]
	push ecx
	call get_job_name
	add esp,4
	push eax
	lea ecx,[esp+0x5C]
	call ZXString<char>::AssignCStr
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
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
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xA4],0x10
	call esi
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	mov byte ptr [esp+0xB0],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x64]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x59
	mov byte ptr [esp+0xB4],0x13
	push 0x99
	mov ecx,ebp
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x11
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x30],bx
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movsx edx,word ptr [edi+0xBB0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0xAC],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x15
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x16
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x17
	push edx
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x6B
	mov byte ptr [esp+0xB4],0x18
	push 0x99
	mov ecx,ebp
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x16
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x15
	cmp word ptr [esp+0x1C],bx
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x30],bx
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	lea ecx,[edi+0xBB4]
	push ecx
	lea ecx,[esp+0x5C]
	call ZXString<char>::op_assign
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push edx
	call get_basic_font
	lea eax,[esp+0x68]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x19
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x1A
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x1B
	push edx
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x7D
	mov byte ptr [esp+0xB4],0x1C
	push 0x99
	mov ecx,ebp
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x1A
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x19
	cmp word ptr [esp+0x1C],bx
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x30],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	lea ecx,[edi+0xBB8]
	push ecx
	lea ecx,[esp+0x5C]
	call ZXString<char>::op_assign
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push edx
	call get_basic_font
	lea eax,[esp+0x68]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x1D
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x1E
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x1F
	push edx
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x8F
	mov byte ptr [esp+0xB4],0x20
	push 0x99
	mov ecx,ebp
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x1E
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x1D
	cmp word ptr [esp+0x1C],bx
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	xor ebp,ebp
	cmp eax,ebp
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor ebp,ebp

 Block96:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x30],bx
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov eax,dword ptr [edi+0xBA0]
	cmp eax,1
	jne Block242

 Block101:
	mov dword ptr [esp+0x18],ebp
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xA4],0x21
	call CWnd::GetCanvas
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xA4],0x22
	call esi
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xA4],0x23
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x24
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x5C]
	push ebp
	push ecx
	mov byte ptr [esp+0xB0],0x25
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0xBC4]
	push eax
	mov eax,dword ptr [edi+edx*4+0xBD4]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x26
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xBC4]
	push 0x13E
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [edi+ecx*4+0xBD4]
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],0x27
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x30]
	push ebp
	push edx
	mov byte ptr [esp+0xC4],0x28
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xBC],0x29
	cmp ecx,ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov byte ptr [esp+0xBC],0x2A
	call IWzFont::CalcTextWidth
	mov ebx,dword ptr [esp+0x70]
	cmp ebx,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	shr eax,1
	mov ecx,0x3D
	sub ecx,eax
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x2B
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x26
	cmp eax,ebp
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block113:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xA0],0x25
	cmp eax,ebp
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x24
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],0x23
	jne Block122

 Block120:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xA0],0x22
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebp
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov eax,dword ptr [edi+0xBC4]
	mov ecx,dword ptr [edi+eax*4+0xBC8]
	add ecx,4
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block133

 Block128:
	cmp byte ptr [eax],0
	je Block133

 Block129:
	push 1
	push ebp
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	cmp eax,ebp
	je Block131

 Block130:
	mov eax,dword ptr [eax-4]
	jmp Block132

 Block131:
	xor eax,eax

 Block132:
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer

 Block133:
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xA4],0x2C
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 1
	push edx
	mov byte ptr [esp+0xB0],0x2D
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0xBC4]
	mov ecx,dword ptr [edi+eax*4+0xBC8]
	mov eax,dword ptr [ecx+4]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x2E
	call _xbstr_t::_ctor_0
	push 0x157
	mov byte ptr [esp+0xB4],0x2F
	push 0x35
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x2E
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x2D
	cmp eax,ebp
	je Block139

 Block138:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block139:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x2C
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],0x22
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	lea edx,[esp+0x14]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0xBC4]
	movzx edx,byte ptr [ecx+edi+0xBE0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xAC],0x30
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x22
	cmp eax,ebp
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block149:
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x31
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0xB0],0x32
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x33
	call _xbstr_t::_ctor_0
	push 0x169
	mov byte ptr [esp+0xB4],0x34
	push 0x35
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x33
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x32
	cmp eax,ebp
	je Block155

 Block154:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block155:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x31
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],0x22
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block163:
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xBC4]
	movzx ecx,byte ptr [edx+edi+0xBEA]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xAC],0x35
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x22
	cmp eax,ebp
	je Block165

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block165:
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA4],0x36
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x37
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x38
	call _xbstr_t::_ctor_0
	push 0x156
	mov byte ptr [esp+0xB4],0x39
	push 0xB4
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x38
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x37
	cmp eax,ebp
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block171:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x36
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],0x22
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xBC4]
	movsx ecx,word ptr [edi+edx*2+0xBE4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xAC],0x3A
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x22
	cmp eax,ebp
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA4],0x3B
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x3C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x3D
	call _xbstr_t::_ctor_0
	push 0x169
	mov byte ptr [esp+0xB4],0x3E
	push 0xB4
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x3D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x3C
	cmp eax,ebp
	je Block187

 Block186:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block187:
	mov esi,8
	mov byte ptr [esp+0xA0],0x3B
	cmp word ptr [esp+0x1C],si
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov byte ptr [esp+0xA0],0x22
	cmp word ptr [esp+0x30],si
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block195:
	mov ecx,dword ptr [edi+0xBC4]
	lea eax,[edi+ecx*4+0xB80]
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block241

 Block196:
	cmp dword ptr [eax-4],0
	je Block241

 Block197:
	mov eax,dword ptr [edi+0xB4C]
	mov ebp,dword ptr [eax+0x38]
	jmp Block199

 Block199:
	mov edx,dword ptr [edi+0xBC4]
	mov eax,dword ptr [edi+edx*4+0xB80]
	lea ecx,[edi+edx*4+0xB80]
	test eax,eax
	je Block241

 Block200:
	cmp ebp,dword ptr [eax-4]
	jae Block241

 Block201:
	mov eax,dword ptr [edi+0xB4C]
	mov edx,dword ptr [eax+0x38]
	add edx,3
	cmp ebp,edx
	jge Block241

 Block202:
	mov eax,dword ptr [eax+0x38]
	push 2
	push 0
	push 0
	mov edx,ebp
	sub edx,eax
	mov eax,dword ptr [ecx]
	imul edx,0x2A
	push 0
	push 0
	push 0
	push 0
	add edx,0xFB
	push edx
	push 0x6F
	lea esi,[ebp*4]
	mov ecx,dword ptr [esi+eax]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x58],esp
	push ebx
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [edi+0xBC4]
	mov eax,dword ptr [edi+ecx*4+0xB80]
	mov edx,dword ptr [eax+esi]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add eax,esi
	push edx
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA4],0x3F
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x22
	test eax,eax
	je Block204

 Block203:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block204:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push ecx
	call get_basic_font
	lea edx,[esp+0x28]
	add esp,8
	push edx
	call format_string_1
	add esp,0xC
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block205:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA4],0x40
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block206:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x6C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x41
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x42
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0xB4C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,ebp
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0xDC
	push ecx
	mov byte ptr [esp+0xB4],0x43
	push 0x93
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x42
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA0],0x41
	test eax,eax
	je Block208

 Block207:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block208:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x40
	cmp word ptr [esp+0x1C],bx
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov byte ptr [esp+0xA0],0x22
	cmp word ptr [esp+0x30],bx
	jne Block215

 Block213:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov edx,dword ptr [edi+0xBC4]
	mov eax,dword ptr [edi+edx*4+0xB80]
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [esp+0x54]
	test ecx,ecx
	sete al
	mov byte ptr [esp+0xA0],0x44
	test al,al
	je Block219

 Block217:
	mov byte ptr [esp+0xA0],0x22
	test ecx,ecx
	je Block240

 Block218:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov ebx,dword ptr [esp+0x5C]
	inc ebp
	jmp Block199

 Block219:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x787
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA8],0x45
	test ecx,ecx
	je Block7

 Block220:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xAC],0x44
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[esp+0x44]
	push 0x1A15
	push eax
	mov byte ptr [esp+0xAC],0x46
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [eax]
	push esi
	mov byte ptr [esp+0xA8],0x47
	call get_int32
	push eax
	lea ecx,[esp+0x24]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]
	add esp,0x14
	mov byte ptr [esp+0xA0],0x46
	test eax,eax
	je Block222

 Block221:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block222:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x44
	cmp word ptr [esp+0x7C],bx
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block227:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0xA4],0x48
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block228:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x70]
	push 1
	push ecx
	mov byte ptr [esp+0xB0],0x49
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x4A
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0xB4C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,ebp
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0xED
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0xB4],0x4B
	push 0xB7
	mov byte ptr [esp+0xB8],0x4A
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xA0],0x49
	test eax,eax
	je Block230

 Block229:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block230:
	mov byte ptr [esp+0xA0],0x48
	cmp word ptr [esp+0x6C],bx
	jne Block233

 Block231:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block234:
	mov byte ptr [esp+0xA0],0x44
	cmp word ptr [esp+0x44],bx
	jne Block237

 Block235:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xA0],0x22
	test eax,eax
	je Block240

 Block239:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block240:
	mov ebx,dword ptr [esp+0x5C]
	inc ebp
	jmp Block199

 Block241:
	mov byte ptr [esp+0xA0],0x21
	jmp Block385

 Block242:
	cmp eax,2
	jne Block387

 Block243:
	mov dword ptr [esp+0x18],ebp
	lea eax,[esp+0x68]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA4],0x4C
	call CWnd::GetCanvas
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xA4],0x4D
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block245

 Block244:
	push eax
	call _com_issue_error

 Block245:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA4],0x4E
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block247

 Block246:
	push eax
	call _com_issue_error

 Block247:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xA4],0x4F
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block249

 Block248:
	push eax
	call _com_issue_error

 Block249:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x6C]
	push 0
	push eax
	mov byte ptr [esp+0xB0],0x50
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0xC04]
	push ecx
	lea ebp,[edi+0xC04]
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x51
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp]
	push 0x12D
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],0x52
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x5C]
	push 0
	push edx
	mov byte ptr [esp+0xC4],0x53
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xBC],0x54
	test ecx,ecx
	jne Block251

 Block250:
	push 0x80004003
	call _com_issue_error

 Block251:
	mov byte ptr [esp+0xBC],0x55
	call IWzFont::CalcTextWidth
	mov ebx,dword ptr [esp+0x7C]
	test ebx,ebx
	jne Block253

 Block252:
	push 0x80004003
	call _com_issue_error

 Block253:
	shr eax,1
	mov ecx,0x3D
	sub ecx,eax
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x56
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x51
	test eax,eax
	je Block255

 Block254:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block255:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA0],0x50
	test eax,eax
	je Block257

 Block256:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block257:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x4F
	jne Block264

 Block258:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block260

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block260:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block261:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x4E
	jne Block265

 Block262:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block266

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block264:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x44]
	push ecx
	call esi
	jmp Block261

 Block265:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block266:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xA0],0x4D
	jne Block269

 Block267:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block270:
	push ebp
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],0
	call ZXString<char>::op_assign
	push 0x4B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x18
	push eax
	mov byte ptr [esp+0xB0],0x57
	call get_basic_font
	lea ecx,[esp+0x64]
	add esp,8
	push ecx
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x1C]
	push edx
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block272

 Block271:
	push eax
	call _com_issue_error

 Block272:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xA4],0x58
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block274

 Block273:
	push eax
	call _com_issue_error

 Block274:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x48]
	push 0x18
	push edx
	mov byte ptr [esp+0xB0],0x59
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x60]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x5A
	call _xbstr_t::_ctor_0
	push 0x146
	mov byte ptr [esp+0xB4],0x5B
	push 0x35
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x5A
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x59
	test eax,eax
	je Block276

 Block275:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block276:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x58
	jne Block279

 Block277:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block280:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x57
	jne Block283

 Block281:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block284:
	lea ecx,[esp+0x40]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xC18]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xAC],0x5C
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x57
	test eax,eax
	je Block286

 Block285:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block286:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block288

 Block287:
	push eax
	call _com_issue_error

 Block288:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA4],0x5D
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block290

 Block289:
	push eax
	call _com_issue_error

 Block290:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x48]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x5E
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x5F
	call _xbstr_t::_ctor_0
	push 0x159
	mov byte ptr [esp+0xB4],0x60
	push 0x35
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x5F
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x5E
	test eax,eax
	je Block292

 Block291:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block292:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x5D
	jne Block295

 Block293:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block296

 Block294:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block296

 Block295:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block296:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x57
	jne Block299

 Block297:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block300:
	lea ecx,[esp+0x40]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xC1C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xAC],0x61
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x57
	test eax,eax
	je Block302

 Block301:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block302:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block304

 Block303:
	push eax
	call _com_issue_error

 Block304:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA4],0x62
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block306

 Block305:
	push eax
	call _com_issue_error

 Block306:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x48]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x63
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x64
	call _xbstr_t::_ctor_0
	push 0x146
	mov byte ptr [esp+0xB4],0x65
	push 0xB4
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x64
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x63
	test eax,eax
	je Block308

 Block307:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block308:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x62
	jne Block311

 Block309:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block312

 Block310:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block312

 Block311:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block312:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x57
	jne Block315

 Block313:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block316

 Block314:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block316

 Block315:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block316:
	lea ecx,[esp+0x40]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xC20]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xAC],0x66
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0xA0],0x57
	test eax,eax
	je Block318

 Block317:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block318:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block320

 Block319:
	push eax
	call _com_issue_error

 Block320:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA4],0x67
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x48]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x68
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x69
	call _xbstr_t::_ctor_0
	push 0x159
	mov byte ptr [esp+0xB4],0x6A
	push 0xB4
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x69
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x68
	test eax,eax
	je Block324

 Block323:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block324:
	mov ebp,8
	mov byte ptr [esp+0xA0],0x67
	cmp word ptr [esp+0x44],bp
	jne Block327

 Block325:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block328:
	mov byte ptr [esp+0xA0],0x57
	cmp word ptr [esp+0x1C],bp
	jne Block331

 Block329:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block332

 Block330:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block332

 Block331:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block332:
	mov eax,dword ptr [edi+0xB8C]
	test eax,eax
	je Block334

 Block333:
	cmp dword ptr [eax-4],0
	jne Block339

 Block334:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xA0],0x4D
	test eax,eax
	je Block336

 Block335:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block336:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xA4],0x4C
	call edx
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block338

 Block337:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block338:
	mov eax,dword ptr [esp+0x8C]
	mov ecx,dword ptr [eax]
	push eax
	jmp Block461

 Block339:
	mov eax,dword ptr [edi+0xB4C]
	mov ebp,dword ptr [eax+0x38]
	lea esp,[esp]

 Block340:
	mov eax,dword ptr [edi+0xB8C]
	test eax,eax
	je Block382

 Block341:
	cmp ebp,dword ptr [eax-4]
	jae Block382

 Block342:
	mov eax,dword ptr [edi+0xB4C]
	mov ecx,dword ptr [eax+0x38]
	add ecx,3
	cmp ebp,ecx
	jge Block382

 Block343:
	mov eax,dword ptr [eax+0x38]
	mov edx,dword ptr [edi+0xB8C]
	push 2
	push 0
	push 0
	mov ecx,ebp
	sub ecx,eax
	mov eax,dword ptr [edx+ebp*4]
	imul ecx,0x2A
	push 0
	push 0
	push 0
	push 0
	add ecx,0xEB
	push ecx
	push 0x6F
	lea esi,[ebp*4]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x40],esp
	push ebx
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [edi+0xB8C]
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA4],0x6B
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x57
	test eax,eax
	je Block345

 Block344:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block345:
	push 0x5A
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A
	push edx
	call get_basic_font
	lea eax,[esp+0x28]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block346:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA4],0x6C
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block347:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x6C]
	push 0x1A
	push ecx
	mov byte ptr [esp+0xB0],0x6D
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x6E
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0xB4C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,ebp
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0xCD
	push ecx
	mov byte ptr [esp+0xB4],0x6F
	push 0x98
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x6E
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA0],0x6D
	test eax,eax
	je Block349

 Block348:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block349:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x6C
	jne Block352

 Block350:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block353:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA0],0x57
	jne Block356

 Block354:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block357:
	mov eax,dword ptr [edi+0xB8C]
	mov edx,dword ptr [eax+esi]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add eax,esi
	push edx
	lea eax,[esp+0x60]
	push eax
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	sete al
	mov byte ptr [esp+0xA0],0x70
	test al,al
	je Block360

 Block358:
	mov byte ptr [esp+0xA0],0x57
	test ecx,ecx
	je Block381

 Block359:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	inc ebp
	jmp Block340

 Block360:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x787
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA8],0x71
	test ecx,ecx
	je Block7

 Block361:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xAC],0x70
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[esp+0x64]
	push 0x1A15
	push eax
	mov byte ptr [esp+0xAC],0x72
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	push esi
	mov byte ptr [esp+0xA8],0x73
	mov dword ptr [esp+0x1C],ecx
	call get_int32
	mov edx,dword ptr [esp+0x1C]
	push eax
	push edx
	lea eax,[esp+0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x74]
	add esp,0x14
	mov byte ptr [esp+0xA0],0x72
	test eax,eax
	je Block363

 Block362:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block363:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0xA0],0x70
	jne Block366

 Block364:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block367

 Block365:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block367

 Block366:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block367:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block368:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xA4],0x74
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block369:
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x34]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x75
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xB4],0x76
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0xB4C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,ebp
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0xDF
	push ecx
	mov byte ptr [esp+0xB4],0x77
	push 0xBB
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x76
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],0x75
	test eax,eax
	je Block371

 Block370:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block371:
	mov esi,8
	mov byte ptr [esp+0xA0],0x74
	cmp word ptr [esp+0x30],si
	jne Block374

 Block372:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block375:
	mov byte ptr [esp+0xA0],0x70
	cmp word ptr [esp+0x6C],si
	jne Block378

 Block376:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block379

 Block377:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block378:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block379:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA0],0x57
	test eax,eax
	je Block381

 Block380:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block381:
	inc ebp
	jmp Block340

 Block382:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xA0],0x4D
	test eax,eax
	je Block384

 Block383:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block384:
	mov byte ptr [esp+0xA0],0x4C

 Block385:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block429

 Block386:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block429

 Block387:
	cmp eax,3
	jne Block429

 Block388:
	mov dword ptr [esp+0x94],ebp
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA4],0x78
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0xC28]
	mov esi,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA0],0x79
	cmp eax,ebp
	je Block427

 Block389:
	mov ebp,dword ptr [eax+0xC]
	test ebp,ebp
	je Block397

 Block390:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xF3
	push 0x13
	push ebp
	push ecx
	lea edx,[esp+0x88]
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xA4],0x7A
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x68]
	push 0x18
	push edx
	mov byte ptr [esp+0xB0],0x7B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push ebp
	lea eax,[esp+0x3C]
	mov bl,0x7C
	push eax
	mov byte ptr [esp+0xB4],bl
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push eax
	mov byte ptr [esp+0xB4],0x7D
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0xB0],0x7E
	test esi,esi
	jne Block392

 Block391:
	push 0x80004003
	call _com_issue_error

 Block392:
	push 0xCC
	push 0x7A
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x7D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],bl
	test eax,eax
	je Block394

 Block393:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block394:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xA0],0x7B
	test eax,eax
	je Block396

 Block395:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block396:
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xA0],0x79
	call Ztl_variant_t::~Ztl_variant_t

 Block397:
	mov eax,dword ptr [edi+0xC28]
	mov dword ptr [esp+0x68],eax
	mov eax,dword ptr [eax+0x10]
	xor ebx,ebx
	cmp eax,ebx
	jne Block399

 Block398:
	xor ebp,ebp
	jmp Block400

 Block399:
	mov ebp,dword ptr [eax-4]

 Block400:
	lea eax,[esp+0x2C]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xAC],0x80
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x82
	cmp eax,ebx
	je Block402

 Block401:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block402:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],0x83
	cmp eax,ebx
	je Block404

 Block403:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block404:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xA4],0x84
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x68]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x85
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0x86
	push edx
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xB0],0x87
	test esi,esi
	jne Block406

 Block405:
	push 0x80004003
	call _com_issue_error

 Block406:
	push 0xDE
	push 0x7A
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xA0],0x85
	test eax,eax
	je Block408

 Block407:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block408:
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xA0],0x83
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi+0xB4C]
	mov ebx,dword ptr [eax+0x38]
	mov ebp,0x104
	lea ebx,[ebx]

 Block409:
	mov eax,dword ptr [edi+0xC28]
	mov eax,dword ptr [eax+0x10]
	test eax,eax
	je Block425

 Block410:
	cmp ebx,dword ptr [eax-4]
	jae Block425

 Block411:
	mov eax,dword ptr [edi+0xB4C]
	mov eax,dword ptr [eax+0x38]
	add eax,6
	cmp ebx,eax
	jge Block425

 Block412:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax+0x10]
	movzx eax,word ptr [ecx+ebx*2]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetQuestDisplayMedal
	test eax,eax
	je Block424

 Block413:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemName
	lea eax,[esp+0x40]
	push 0x11CE
	push eax
	mov byte ptr [esp+0xA8],0x88
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push offset _S_
	push eax
	lea ecx,[esp+0x68]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xAC],0x89
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA4],0x8A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xA0],0x89
	test eax,eax
	je Block415

 Block414:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block415:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x88
	test eax,eax
	je Block417

 Block416:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block417:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block419

 Block418:
	cmp byte ptr [eax],0
	jne Block421

 Block419:
	mov byte ptr [esp+0xA0],0x83
	test eax,eax
	je Block424

 Block420:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	inc ebx
	jmp Block409

 Block421:
	push 0xAF
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x98],esp
	push 0x1A
	push edx
	call get_basic_font
	lea eax,[esp+0x28]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xA4],0x8B
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x80]
	push edx
	lea eax,[esp+0x6C]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x8C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA0],esp
	push edx
	mov byte ptr [esp+0xB4],0x8D
	call Ztl_bstr_t::_ctor_1
	push ebp
	push 0x46
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xB8],0x8E
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x8D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA0],0x8C
	test eax,eax
	je Block423

 Block422:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block423:
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	add ebp,0x14
	mov byte ptr [esp+0xA0],0x83
	call ZXString<char>::~ZXString<char>

 Block424:
	inc ebx
	jmp Block409

 Block425:
	cmp dword ptr [esp+0x54],0
	mov byte ptr [esp+0xA0],0x79
	je Block427

 Block426:
	mov eax,dword ptr [esp+0x54]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block427:
	mov byte ptr [esp+0xA0],0x78
	test esi,esi
	je Block429

 Block428:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block429:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0xA0],0x8F
	cmp dword ptr [edi+0xBC0],esi
	je Block457

 Block430:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block432

 Block431:
	push eax
	call _com_issue_error

 Block432:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xA4],0x90
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block434

 Block433:
	push eax
	call _com_issue_error

 Block434:
	push 0
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0xA4],esp
	mov ecx,esp
	mov bl,0x91
	push offset _S_UIUIWINDOW2IMGUS__116
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xB4],0x92
	jne Block436

 Block435:
	push 0x80004003
	call _com_issue_error

 Block436:
	lea eax,[esp+0x90]
	mov byte ptr [esp+0xB4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],0x93
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block439

 Block437:
	cmp eax,0x80004002
	je Block439

 Block438:
	push eax
	call _com_issue_error

 Block439:
	mov ebp,8
	mov byte ptr [esp+0xA0],bl
	cmp word ptr [esp+0x7C],bp
	jne Block446

 Block440:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block442

 Block441:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block442:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block443:
	mov byte ptr [esp+0xA0],0x90
	cmp word ptr [esp+0x44],bp
	jne Block447

 Block444:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block448

 Block445:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block448

 Block446:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x7C]
	push edx
	call ebx
	jmp Block443

 Block447:
	lea ecx,[esp+0x44]
	push ecx
	call ebx

 Block448:
	mov byte ptr [esp+0xA0],0x8F
	cmp word ptr [esp+0x1C],bp
	jne Block451

 Block449:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block452

 Block450:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block452

 Block451:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block452:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block457

 Block453:
	mov ecx,3
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],0xFF
	mov edi,dword ptr [esp+0x8C]
	lea edx,[esp+0x44]
	push edx
	push esi
	push 0x20
	push 0xF
	mov ecx,edi
	mov byte ptr [esp+0xB0],0x94
	call IWzCanvas::Copy
	mov byte ptr [esp+0xA0],0x8F
	cmp word ptr [esp+0x44],bp
	jne Block456

 Block454:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block458

 Block455:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block458

 Block456:
	lea ecx,[esp+0x44]
	push ecx
	call ebx
	jmp Block458

 Block457:
	mov edi,dword ptr [esp+0x8C]

 Block458:
	mov byte ptr [esp+0xA0],1
	test esi,esi
	je Block460

 Block459:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block460:
	mov ecx,dword ptr [edi]
	push edi

 Block461:
	mov edx,dword ptr [ecx+8]
	mov byte ptr [esp+0xA4],0
	call edx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	test eax,eax
	je Block463

 Block462:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block463:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4
}
}
// CUIItemSearch::OnKey
_SUB_EXCEPTION_HANDLER(4B2AF0)
__SUB_CLASS_THIS(004B2AF0, __thiscall, 56507,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B2AF0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	test dword ptr [esp+0x1C],0x80000000
	jne Block7

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0xD
	je Block5

 Block2:
	cmp eax,0x1B
	jne Block7

 Block3:
	mov ecx,dword ptr [TSingleton<CUIUserInfoExceptionList>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block4:
	call CUIUserInfoExceptionList::CloseItemSearch
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block5:
	mov ecx,dword ptr [esi+0xB08]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esi-4]
	call CUIItemSearch::OpenSearchResult
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIUserInfoDetail::ResetAvatar
__SUB_CLASS_THIS0(004AADF0, __thiscall, 56695,  CUIUserInfoDetail, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov eax,dword ptr [edi+0xC40]
	mov esi,ecx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esi+0x84]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [edi+0xC44]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	mov ecx,dword ptr [esi+0x8C]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret
}
}
// CUIItemSearch::Draw
__SUB_CLASS_THIS(004AA810, __thiscall, 56513,  CUIItemSearch, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIUserInfoDetail::Draw
_SUB_EXCEPTION_HANDLER(4AF1A0)
__SUB_CLASS_THIS(004AF1A0, __thiscall, 56698,  CUIUserInfoDetail, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AF1A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xF8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	mov eax,dword ptr [esp+0x108]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0xA4]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xB8]
	xor ebp,ebp
	push edx
	mov dword ptr [esp+0x104],ebp
	call edi
	lea eax,[esp+0xB8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0x104],1
	call edi
	lea edx,[esp+0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebp
	push ebp
	lea eax,[esp+0xC0]
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x16AD
	push edx
	mov byte ptr [esp+0x11C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x114],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xEC]
	mov byte ptr [esp+0x114],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x108],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x100],6
	cmp word ptr [esp+0xD8],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xE0]
	xor ecx,ecx
	mov word ptr [esp+0xD8],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0xD8]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x100],7
	cmp word ptr [esp+0xA8],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0xA8]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x100],8
	cmp word ptr [esp+0xB8],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0xB8]
	push eax
	call ebx

 Block21:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov esi,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x100],9
	cmp esi,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x3C]
	push eax
	push ebp
	push 0xAB
	push esi
	call ecx
	cmp eax,ebp
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x100],8
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block31:
	lea ecx,[esp+0xC8]
	push ecx
	call edi
	lea edx,[esp+0xC8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x104],0xA
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push ebp
	push ebp
	lea edx,[esp+0xD0]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xA2A
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x11C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x114],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0xFC]
	mov byte ptr [esp+0x114],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x108],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x94],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov edi,8
	mov byte ptr [esp+0x100],0xF
	cmp word ptr [esp+0xE8],di
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0xE8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0x100],0x10
	cmp word ptr [esp+0x30],di
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x100],0x11
	cmp word ptr [esp+0xC8],di
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0xD0]
	xor ecx,ecx
	mov word ptr [esp+0xC8],cx
	cmp eax,ebp
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0xC8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov ebx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+0x84]
	mov edi,dword ptr [eax+0x38]
	mov ecx,edi
	add ecx,3
	cmp edi,ecx
	mov byte ptr [esp+0x100],0x12
	jge Block94

 Block53:
	lea ebp,[edi+edi*2]
	add ebp,ebp
	add ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	lea esp,[esp]

 Block54:
	mov ecx,dword ptr [ebx+0xC40]
	test ecx,ecx
	je Block93

 Block55:
	cmp edi,dword ptr [ecx-4]
	jae Block93

 Block56:
	mov eax,dword ptr [eax+0x38]
	push 2
	push 0
	mov ecx,edi
	sub ecx,eax
	push 0
	imul ecx,0x2A
	push 0
	push 0
	push 0
	add ecx,0x3C
	push 0
	push ecx
	mov ecx,dword ptr [ebx+0xC40]
	push 0xC
	add ecx,ebp
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push esi
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebx+0xC40]
	add ecx,ebp
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x104],0x13
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x100],0x12
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	push 0x5F
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A
	push edx
	call get_basic_font
	lea eax,[esp+0x24]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block59:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x104],0x14
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block60:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x54]
	push 0x1A
	push ecx
	mov byte ptr [esp+0x110],0x15
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x114],0x16
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x30]
	mov eax,dword ptr [eax+0x84]
	mov eax,dword ptr [eax+0x38]
	mov ecx,edi
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0x1F
	push ecx
	mov byte ptr [esp+0x114],0x17
	push 0x33
	mov ecx,esi
	mov byte ptr [esp+0x118],0x16
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x100],0x15
	test eax,eax
	je Block62

 Block61:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block62:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x100],0x14
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x100],0x12
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov ecx,dword ptr [ebx+0xC40]
	add ecx,ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call CItemInfo::GetItemInfo
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x787
	push eax
	mov byte ptr [esp+0x110],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x108],0x19
	test ecx,ecx
	je Block5

 Block71:
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0x10C],0x18
	call IWzProperty::Getitem
	mov ebp,eax
	lea eax,[esp+0x4C]
	push 0x1A15
	push eax
	mov byte ptr [esp+0x10C],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [eax]
	push ebp
	mov byte ptr [esp+0x108],0x1B
	call get_int32
	push eax
	lea ecx,[esp+0x20]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x5C]
	add esp,0x14
	mov byte ptr [esp+0x100],0x1A
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov ebp,8
	mov byte ptr [esp+0x100],0x18
	cmp word ptr [esp+0x94],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push ecx
	call ebx
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block78:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0x104],0x1C
	call ebx
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block79:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x84]
	push eax
	lea ecx,[esp+0x2C]
	push 0x1A
	push ecx
	mov byte ptr [esp+0x110],0x1D
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x114],0x1E
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [esp+0x30]
	mov eax,dword ptr [ebx+0x84]
	mov eax,dword ptr [eax+0x38]
	mov ecx,edi
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0x30
	push ecx
	mov byte ptr [esp+0x114],0x1F
	push 0x57
	mov ecx,esi
	mov byte ptr [esp+0x118],0x1E
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x100],0x1D
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov byte ptr [esp+0x100],0x1C
	cmp word ptr [esp+0x80],bp
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov byte ptr [esp+0x100],0x18
	cmp word ptr [esp+0x70],bp
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x100],0x12
	test eax,eax
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block91:
	mov eax,dword ptr [ebx+0x84]
	mov ecx,dword ptr [eax+0x38]
	add dword ptr [esp+0x1C],0xC
	inc edi
	add ecx,3
	cmp edi,ecx
	jge Block93

 Block92:
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x40]
	jmp Block54

 Block93:
	mov ebx,dword ptr [esp+0x40]

 Block94:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0x8C]
	mov edi,dword ptr [eax+0x38]
	mov ecx,edi
	add ecx,3
	cmp edi,ecx
	jge Block136

 Block95:
	lea ebp,[edi+edi*2]
	add ebp,ebp
	add ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	jmp Block97

 Block97:
	mov ecx,dword ptr [ebx+0xC44]
	test ecx,ecx
	je Block136

 Block98:
	cmp edi,dword ptr [ecx-4]
	jae Block136

 Block99:
	mov eax,dword ptr [eax+0x38]
	push 2
	push 0
	mov edx,edi
	sub edx,eax
	push 0
	imul edx,0x2A
	push 0
	push 0
	push 0
	push 0
	add edx,0x3C
	push edx
	push 0xB7
	add ecx,ebp
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esp
	push esi
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebx+0xC44]
	add ecx,ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x28]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x104],0x20
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x100],0x12
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
	push 0x5F
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A
	push eax
	call get_basic_font
	lea ecx,[esp+0x24]
	add esp,8
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x80]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block102:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x104],0x21
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block103:
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x50]
	push 0x1A
	push edx
	mov byte ptr [esp+0x110],0x22
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x114],0x23
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ecx+0x8C]
	mov eax,dword ptr [eax+0x38]
	mov edx,edi
	sub edx,eax
	imul edx,0x2A
	add edx,0x1F
	push edx
	mov byte ptr [esp+0x114],0x24
	push 0xDE
	mov ecx,esi
	mov byte ptr [esp+0x118],0x23
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x100],0x22
	test eax,eax
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x100],0x21
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x100],0x12
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov ecx,dword ptr [ebx+0xC44]
	add ecx,ebp
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x787
	push edx
	mov byte ptr [esp+0x110],0x25
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x108],0x26
	test ecx,ecx
	je Block5

 Block114:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x10C],0x25
	call IWzProperty::Getitem
	mov ebp,eax
	lea ecx,[esp+0x50]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x10C],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [eax]
	push ebp
	mov byte ptr [esp+0x108],0x28
	call get_int32
	push eax
	lea edx,[esp+0x20]
	push ebx
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0x14
	mov byte ptr [esp+0x100],0x27
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	mov ebp,8
	mov byte ptr [esp+0x100],0x25
	cmp word ptr [esp+0x94],bp
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call ebx
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block121:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x104],0x29
	call ebx
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block122:
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x4C]
	push 0x1A
	push edx
	mov byte ptr [esp+0x110],0x2A
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x114],0x2B
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [esp+0x30]
	mov eax,dword ptr [ebx+0x8C]
	mov eax,dword ptr [eax+0x38]
	mov ecx,edi
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0x30
	push ecx
	mov byte ptr [esp+0x114],0x2C
	push 0x102
	mov ecx,esi
	mov byte ptr [esp+0x118],0x2B
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x100],0x2A
	test eax,eax
	je Block124

 Block123:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block124:
	mov byte ptr [esp+0x100],0x29
	cmp word ptr [esp+0x60],bp
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0x100],0x25
	cmp word ptr [esp+0x50],bp
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x100],0x12
	test eax,eax
	je Block134

 Block133:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block134:
	mov eax,dword ptr [ebx+0x8C]
	mov ecx,dword ptr [eax+0x38]
	add dword ptr [esp+0x1C],0xC
	inc edi
	add ecx,3
	cmp edi,ecx
	jge Block136

 Block135:
	mov ebx,dword ptr [esp+0x40]
	mov ebp,dword ptr [esp+0x1C]
	jmp Block97

 Block136:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x100],0x11
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x100],8
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	mov byte ptr [esp+0x100],0
	test edi,edi
	je Block142

 Block141:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block142:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x104],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0xF8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xF0
	ret 4
}
}
// CUIUserInfoWishList::CUIUserInfoWishList
_SUB_EXCEPTION_HANDLER(4AB310)
__SUB_CLASS_THIS(004AB310, __thiscall, 56728,  CUIUserInfoWishList, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AB310
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
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIUserInfoWishList>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIUserInfoWishList>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIUserInfoWishList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUserInfoWishList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUserInfoWishList::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],0
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea edx,[esi+0x88]
	push edx
	mov byte ptr [esp+0x28],2
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x14],3
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0x9D
	push 0xAB
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],4
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
// CUIUserInfo::SetUserInfo
__SUB_CLASS_THIS(004ACBB0, __thiscall, 56782,  CUIUserInfo, void, unsigned long, const char*, unsigned char, short, short, const char*, const char*, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push ecx
	lea ecx,[esi+0xBA8]
	mov dword ptr [esi+0xBA4],eax
	call ZXString<char>::AssignCStr
	mov dl,byte ptr [esp+0x10]
	mov cx,word ptr [esp+0x18]
	mov ax,word ptr [esp+0x14]
	mov byte ptr [esi+0xBAC],dl
	mov edx,dword ptr [esp+0x1C]
	mov word ptr [esi+0xBB0],cx
	push edx
	lea ecx,[esi+0xBB4]
	mov word ptr [esi+0xBAE],ax
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[esi+0xBB8]
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esi+0xBA4]
	mov dword ptr [esi+0xBBC],ecx
	mov dword ptr [esi+0xBC0],edx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x19E8]
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0xB0C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xB14]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xB1C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0xB24]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax

 Block2:
	pop esi
	ret 0x24
}
}
// CUIUserInfoDetail::OnCreate
_SUB_EXCEPTION_HANDLER(4AEEB0)
__SUB_CLASS_THIS(004AEEB0, __thiscall, 56696,  CUIUserInfoDetail, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AEEB0
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
	push edi
	push edi
	push esi
	lea ecx,[esi+0x90]
	call CLayoutMan::Init
	push edi
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__98
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x3C],edi
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x3C],ebp
	cmp eax,edi
	je Block7

 Block4:
	add eax,8
	cmp eax,edi
	je Block7

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block7:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x79
	push 0x1A
	push 0x97
	push 8
	push 1
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0x84]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0x8E
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x3C],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov dword ptr [esp+0x3C],ebp
	test eax,eax
	je Block22

 Block13:
	add eax,8
	je Block22

 Block14:
	lea edi,[eax-8]
	test edi,edi
	je Block16

 Block15:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block16:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block18

 Block17:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block18:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x78
	push 0x1E
	push 0x182
	push 8
	push 1
	push 0x3E9
	push esi
	call eax
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[esp+0x18]
	mov dword ptr [eax+0x34],0xD7
	push ecx
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x3C],2
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	lea eax,[esp+0x14]
	mov bl,3
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x40],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x3C],4
	test edi,edi
	jne Block23

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	xor edi,edi
	jmp Block16

 Block23:
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
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],2
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],ebp
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x3C],5
	test edi,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x3C],ebp
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov ecx,esi
	call CUIUserInfoDetail::ResetAvatar
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CUIItemSearchResult::OnCreate
_SUB_EXCEPTION_HANDLER(4ADC60)
__SUB_CLASS_THIS(004ADC60, __thiscall, 56468,  CUIItemSearchResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ADC60
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
	push 0
	push 0
	lea edi,[esi+0xADC]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEX__2
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGEX__1
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGEX
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x38],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block15

 Block8:
	add eax,8
	je Block15

 Block9:
	lea edi,[eax-8]
	test edi,edi
	je Block11

 Block10:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block13

 Block12:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x46
	push 0xD
	push 0xBB
	push 8
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [eax+0x34],0xD7
	mov eax,dword ptr [esi+0x88]
	test eax,eax
	jne Block16

 Block14:
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block11

 Block16:
	mov eax,dword ptr [eax-4]

 Block17:
	mov ecx,dword ptr [esi+0x84]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [TSingleton<CUIItemSearch>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x38],1
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x38],3
	test edi,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block23:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],1
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
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x38],4
	test esi,esi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push esi
	call eax
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 4
}
}
// CUIUserInfoDetail::IsKindOf
__SUB_CLASS_THIS(004ADB40, __thiscall, 56702,  CUIUserInfoDetail, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIUserInfoDetail::ms_RTTI_CUIUserInfoDetail
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
// CUIUserInfo::OnChildNotify
__SUB_CLASS_THIS(004AA8C0, __thiscall, 56776,  CUIUserInfo, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7DF
	jne Block2

 Block1:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block4:
	ret 0xC
}
}
// CUIUserInfoWishList::Draw
_SUB_EXCEPTION_HANDLER(4B03E0)
__SUB_CLASS_THIS(004B03E0, __thiscall, 56733,  CUIUserInfoWishList, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B03E0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov edx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ecx,ecx
	mov dword ptr [esp+0x68],ecx
	mov dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x70],ecx
	mov eax,dword ptr [ebp+0x84]
	mov ebx,dword ptr [eax+0x38]
	mov edi,dword ptr [esp+0x1C]
	mov eax,ebx
	add eax,3
	cmp ebx,eax
	mov byte ptr [esp+0x68],1
	jge Block53

 Block1:
	lea esi,[ebx+ebx*2]
	add esi,esi
	add esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block3

 Block3:
	mov eax,dword ptr [edx+0xC48]
	test eax,eax
	je Block52

 Block4:
	cmp ebx,dword ptr [eax-4]
	jae Block52

 Block5:
	mov ecx,eax
	add ecx,esi
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x3C]
	xor esi,esi
	mov byte ptr [esp+0x68],2
	cmp eax,esi
	je Block43

 Block6:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	test eax,eax
	je Block42

 Block7:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x5B
	mov eax,dword ptr [ebp+0x84]
	mov eax,dword ptr [eax+0x38]
	jne Block11

 Block8:
	mov ecx,ebx
	sub ecx,eax
	imul ecx,0x2A
	push esi
	add ecx,0x3C
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push 0xC
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],edi
	cmp edi,esi
	je Block10

 Block9:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block10:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawSpecialIconForSlot
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetSpecialName
	push eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x6C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block14

 Block11:
	mov ecx,dword ptr [esp+0x3C]
	push 2
	push esi
	mov edx,ebx
	sub edx,eax
	push esi
	imul edx,0x2A
	push esi
	push esi
	push esi
	push esi
	add edx,0x3C
	push edx
	push 0xC
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],edi
	cmp edi,esi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block13:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x6C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]

 Block14:
	mov byte ptr [esp+0x68],2
	cmp eax,esi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x3C]
	cmp dword ptr [eax+0x1C],1
	jle Block24

 Block17:
	mov dword ptr [esp+0x14],esi
	lea ecx,[esp+0x2C]
	push 0x24D
	push ecx
	mov byte ptr [esp+0x70],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [edx+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x74],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x68],5
	cmp eax,esi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block21

 Block20:
	mov eax,dword ptr [esi-4]
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	push eax
	push esi
	lea ecx,[esp+0x78]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x68],2
	test esi,esi
	je Block24

 Block23:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block24:
	push 0x5F
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A
	push eax
	call get_basic_font
	lea ecx,[esp+0x80]
	add esp,8
	push ecx
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x50]
	push edx
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block25:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],7
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block26:
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push 0x1A
	push edx
	mov byte ptr [esp+0x78],8
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x7C]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],9
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x84]
	mov eax,dword ptr [eax+0x38]
	mov byte ptr [esp+0x78],0xA
	test edi,edi
	je Block51

 Block27:
	mov ecx,ebx
	sub ecx,eax
	imul ecx,0x2A
	add ecx,0x1F
	push ecx
	push 0x33
	mov ecx,edi
	mov byte ptr [esp+0x80],9
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x68],8
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov esi,8
	mov byte ptr [esp+0x68],7
	cmp word ptr [esp+0x40],si
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x68],2
	cmp word ptr [esp+0x50],si
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block48

 Block38:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block39:
	mov edx,dword ptr [esp+0x3C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	je Block41

 Block40:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block41:
	mov dword ptr [esp+0x3C],0
	jmp Block48

 Block42:
	mov eax,dword ptr [esp+0x3C]

 Block43:
	mov byte ptr [esp+0x68],1
	cmp eax,esi
	je Block48

 Block44:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x3C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,esi
	je Block47

 Block46:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block47:
	mov dword ptr [esp+0x3C],esi

 Block48:
	mov eax,dword ptr [ebp+0x84]
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x38]
	inc ebx
	add esi,0xC
	add eax,3
	cmp ebx,eax
	mov dword ptr [esp+0x18],esi
	jge Block52

 Block49:
	mov edx,dword ptr [esp+0x34]
	jmp Block3

 Block50:
	push eax
	call _com_issue_error

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esp+0x70]

 Block53:
	mov byte ptr [esp+0x68],0
	test ecx,ecx
	je Block55

 Block54:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test edi,edi
	je Block57

 Block56:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block57:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CUIItemSearch::CUIItemSearch
_SUB_EXCEPTION_HANDLER(4AE3F0)
__SUB_CLASS_THIS(004AE3F0, __thiscall, 56502,  CUIItemSearch, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AE3F0
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
	push edi
	push 0x63
	push 0xD1
	push 3
	push 0x12
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIItemSearch>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIItemSearch>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemSearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemSearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemSearch::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	push 0xA
	push 0x63
	push 0xD1
	push eax
	push ecx
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x34],4
	call CUIWnd::CreateUIWndPosForced
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIUserInfo::HitTest
__SUB_CLASS_THIS(004AA8F0, __thiscall, 56778,  CUIUserInfo, int32_t, long, long, CCtrlWnd**) {
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
	xor eax,eax
	test edi,edi
	setl al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIItemSearch::OnSetFocus
__SUB_CLASS_THIS(004AA830, __thiscall, 56512,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	jmp  CWnd::OnSetFocus
}
}
// CUIUserInfoExceptionList::OnCreate
_SUB_EXCEPTION_HANDLER(4AE4D0)
__SUB_CLASS_THIS(004AE4D0, __thiscall, 56603,  CUIUserInfoExceptionList, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AE4D0
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
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xBC]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebx
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__97
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push ebx
	push ebx
	push ebx
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGUS__96
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x40],ebx
	cmp eax,ebx
	je Block4

 Block1:
	add eax,8
	cmp eax,ebx
	je Block4

 Block2:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block4

 Block3:
	lea ecx,[ebx+0xC]
	push ecx
	call ebp

 Block4:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],ebx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	or ebx,0xFFFFFFFF
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x40],ebx
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGUS__95
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block10:
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGUS__94
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block12:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x40],1
	test eax,eax
	je Block14

 Block13:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block25

 Block16:
	add eax,8
	je Block25

 Block17:
	lea edi,[eax-8]
	test edi,edi
	je Block19

 Block18:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block19:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block21

 Block20:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x60
	push 0x1B
	push 0x98
	push 8
	push 1
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0xA4]
	lea ecx,[esp+0x18]
	mov dword ptr [eax+0x34],0x90
	push ecx
	mov ecx,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x40],2
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	lea eax,[esp+0x14]
	mov bl,3
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x44],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x40],4
	test edi,edi
	jne Block26

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	xor edi,edi
	jmp Block19

 Block26:
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
	jge Block28

 Block27:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],2
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x18]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x40],5
	test edi,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block40:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xB4],ebx
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block47

 Block43:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [eax+0x2E44]
	mov eax,dword ptr [edx+ecx*8+4]
	test eax,eax
	je Block47

 Block44:
	mov eax,dword ptr [eax+0x8C]
	test eax,eax
	jne Block46

 Block45:
	mov eax,0xFFFFFFFA
	push eax
	jmp Block48

 Block46:
	mov eax,dword ptr [eax-4]
	add eax,0xFFFFFFFA
	push eax
	jmp Block48

 Block47:
	push 0

 Block48:
	mov ecx,dword ptr [esi+0xA4]
	call CCtrlScrollBar::SetScrollRange
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
// CUIUserInfoExceptionList::RemoveFromList
__SUB_CLASS_THIS(004AAFB0, __thiscall, 56610,  CUIUserInfoExceptionList, int32_t, long) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [edx+eax*8+4]
	test eax,eax
	jne Block2

 Block1:
	pop edi
	ret 4

 Block2:
	push ebx
	push ebp
	lea ebx,[eax+0x8C]
	push esi
	mov ecx,ebx
	xor esi,esi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block6

 Block3:
	mov edx,dword ptr [ebx]
	mov ebp,dword ptr [esp+0x14]
	mov ecx,edx
	nop

 Block4:
	cmp dword ptr [ecx],ebp
	je Block7

 Block5:
	inc esi
	add ecx,4
	cmp esi,eax
	jb Block4

 Block6:
	pop esi
	pop ebp
	pop ebx
	xor eax,eax
	pop edi
	ret 4

 Block7:
	lea eax,[edx+esi*4]
	push eax
	mov ecx,ebx
	call ZArray<long>::RemoveAt
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	mov ecx,dword ptr [edi+0xA4]
	add eax,0xFFFFFFFA
	push eax
	call CCtrlScrollBar::SetScrollRange
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	mov eax,dword ptr [edi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov eax,dword ptr [edi+0xB4]
	cmp eax,esi
	jne Block11

 Block10:
	mov dword ptr [edi+0xB4],0xFFFFFFFF
	jmp Block13

 Block11:
	jle Block13

 Block12:
	dec eax
	mov dword ptr [edi+0xB4],eax

 Block13:
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,dword ptr [edi+0xB8]
	mov eax,dword ptr [edx+0x2E44]
	mov ecx,dword ptr [eax+ecx*8+4]
	push ebx
	call CPet::SendUpdateExceptionListRequest
	pop esi
	pop ebp
	pop ebx
	mov eax,1
	pop edi
	ret 4
}
}
// CUIUserInfo::OnClosePet
__SUB_CLASS_THIS(004B6D00, __thiscall, 56795,  CUIUserInfo, void, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xBA4]
	cmp eax,dword ptr [esp+8]
	jne Block10

 Block1:
	cmp dword ptr [esi+0xBA0],1
	jne Block10

 Block2:
	mov ecx,dword ptr [esi+0xB7C]
	test ecx,ecx
	je Block6

 Block3:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xB7C],0
	lea edi,[esi+0xB78]
	je Block5

 Block4:
	push 0
	mov ecx,edi
	call ZRef<CUIUserInfoExceptionList>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block5:
	pop edi

 Block6:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	je Block10

 Block7:
	cmp dword ptr [esi+0xC08],0
	mov ecx,esi
	je Block9

 Block8:
	push 2
	call CUIUserInfo::SetState
	pop esi
	ret 4

 Block9:
	push 0
	call CUIUserInfo::SetState

 Block10:
	pop esi
	ret 4
}
}
// CUIUserInfoWishList::OnButtonClicked
_SUB_EXCEPTION_HANDLER(4B08D0)
__SUB_CLASS_THIS(004B08D0, __thiscall, 56735,  CUIUserInfoWishList, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4B08D0
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
	mov ebx,dword ptr [esp+0x24]
	cmp ebx,0xBB8
	jb Block3

 Block1:
	cmp ebx,0xBBA
	ja Block3

 Block2:
	mov edi,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ecx
	mov ecx,esp
	lea eax,[edi+0xBA8]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x84]
	mov eax,dword ptr [eax+0x38]
	mov edx,dword ptr [edi+0xC48]
	lea eax,[eax+ebx-0xBB8]
	lea ecx,[eax+eax*2]
	lea ecx,[edx+ecx*4]
	mov dword ptr [esp+0x20],0
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call CWvsContext::SetPresentInfo
	push 1
	mov ecx,esi
	call CWvsContext::SendMigrateToShopRequest

 Block3:
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
// CUIUserInfoWishList::ResetAvatar
_SUB_EXCEPTION_HANDLER(4AC670)
__SUB_CLASS_THIS0(004AC670, __thiscall, 56730,  CUIUserInfoWishList, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AC670
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
	mov ebp,ecx
	mov edi,dword ptr [TSingleton<CUIUserInfo>::ms_pInstance]
	mov eax,dword ptr [edi+0xC48]
	xor esi,esi
	mov dword ptr [esp+0x18],edi
	cmp eax,esi
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	mov ecx,dword ptr [ebp+0x84]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [edi+0xC48]
	cmp eax,esi
	jne Block5

 Block4:
	mov dword ptr [esp+0x14],esi
	jmp Block6

 Block5:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax

 Block6:
	mov ecx,edi
	call CUIUserInfo::IsLocalUserInfo
	test eax,eax
	jne Block26

 Block7:
	lea ebx,[ebp+0x8C]
	jmp Block10

 Block9:
	mov edi,dword ptr [esp+0x18]

 Block10:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [ebp+0x84]
	mov ecx,dword ptr [eax+0x38]
	add ecx,esi
	cmp dword ptr [esp+0x14],ecx
	jle Block25

 Block11:
	mov eax,dword ptr [eax+0x38]
	mov edx,dword ptr [edi+0xC48]
	add eax,esi
	lea ecx,[eax+eax*2]
	lea ecx,[edx+ecx*4]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x20]
	xor edi,edi
	mov dword ptr [esp+0x30],edi
	cmp eax,edi
	je Block20

 Block12:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	jne Block19

 Block13:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x22B
	je Block19

 Block14:
	mov edi,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi+0xC]
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD2
	je Block16

 Block15:
	cmp ecx,0x560F40
	jne Block17

 Block16:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	jmp Block25

 Block17:
	lea ecx,[edi+0x10]
	call TSecType<long>::GetData
	cmp eax,0x5269A8
	je Block16

 Block18:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	jmp Block16

 Block19:
	mov eax,dword ptr [esp+0x20]

 Block20:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,edi
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,edi
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [esp+0x20],edi

 Block25:
	inc esi
	add ebx,8
	cmp esi,3
	jl Block9

 Block26:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
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
}
}
