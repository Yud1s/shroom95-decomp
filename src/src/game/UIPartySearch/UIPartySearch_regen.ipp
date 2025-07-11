#include "regen.hpp"
// UIPartySearch.ipp
#include "UIPartySearch.hpp"

// CUIPartySearch::~CUIPartySearch
_SUB_EXCEPTION_HANDLER(417BF0)
__SUB_CLASS_THIS0(00417BF0, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_417BF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIPartySearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPartySearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPartySearch::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB10]
	mov dword ptr [esp+0x18],2
	call ZArray<ZRef<TabDlgInterface>>::RemoveAll
	cmp dword ptr [esi+0xB0C],0
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIPartySearch>::ms_pInstance],0
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
// CUIPartySearch::GetCurTabDlg
__SUB_CLASS_THIS0(00416FE0, __thiscall, 41138,  CUIPartySearch, TabDlgInterface*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB0C]
	mov edx,dword ptr [eax+0x44]
	mov eax,dword ptr [ecx+0xB10]
	mov eax,dword ptr [eax+edx*8+4]
	ret
}
}
// CPartySearch_RemoCon::OnMouseButton
__SUB_CLASS_THIS(00417070, __thiscall, 41100,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	sub edx,0x202
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x37A8]
	je Block3

 Block1:
	sub edx,3
	jne Block7

 Block2:
	call CWvsContext::StopPartySearch
	ret 0x10

 Block3:
	sub eax,1
	je Block6

 Block4:
	sub eax,1
	jne Block7

 Block5:
	call CWvsContext::StartPartyMemberSearch
	ret 0x10

 Block6:
	call CWvsContext::HoldPartyMemberSearch

 Block7:
	ret 0x10
}
}
// CUIPartySearch::OnTabChanged
__SUB_CLASS_THIS(00417160, __thiscall, 41130,  CUIPartySearch, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB18]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	mov ecx,dword ptr [esi+0xB14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	mov ecx,esi
	call CUIPartySearch::GetCurTabDlg
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CUIPartySearch::OnCreate
_SUB_EXCEPTION_HANDLER(417DE0)
__SUB_CLASS_THIS(00417DE0, __thiscall, 41115,  CUIPartySearch, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_417DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x68],esi
	mov eax,dword ptr [ebp+0x78]
	push eax
	call CUIWnd::OnCreate_0
	xor ebx,ebx
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp],ebx
	mov dword ptr [ebp+4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [ebp-4],0xFFFFFFFF
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
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xB0C]
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [ebp+0x54],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[ebp+0x50]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xB0C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp]
	push eax
	push 0x13
	push 0xFC
	push 0x19
	push 0xA
	push 8
	push ebx
	push esi
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x28]
	push eax
	call esi
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	lea edx,[ebp+0x38]
	push edx
	mov dword ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push ebx
	push ebx
	lea ecx,[ebp+0x28]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__123
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [ebp-0x3C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],6
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x3C]
	push edx
	call edi

 Block23:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],7
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp+0x38]
	push ecx
	call edi

 Block27:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp+0x28]
	push eax
	call edi

 Block31:
	lea ecx,[ebp+0x18]
	push ecx
	call esi
	lea edx,[ebp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[ebp+8]
	push eax
	mov byte ptr [ebp-4],9
	call esi
	lea ecx,[ebp+8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push ebx
	push ebx
	lea edx,[ebp+0x18]
	push edx
	lea eax,[ebp+8]
	push eax
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUS__122
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x1C],si
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,ebx
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block44:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+8],si
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x10]
	xor ecx,ecx
	mov word ptr [ebp+8],cx
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp+8]
	push edx
	call edi

 Block48:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x18],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[ebp+0x18]
	push ecx
	call edi

 Block52:
	mov dword ptr [ebp+0x64],ebx
	jmp Block54

 Block54:
	mov edi,dword ptr [ebp+0x60]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x58],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block15

 Block55:
	lea eax,[ebp-0x4C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block60

 Block56:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x48]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block60

 Block59:
	cmp edi,0x80004002
	jne Block77

 Block60:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x13
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block15

 Block61:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block66

 Block62:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x5C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x5C]
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block66

 Block65:
	cmp edi,0x80004002
	jne Block77

 Block66:
	mov edi,dword ptr [ebp+0x68]
	mov ecx,dword ptr [edi+0xB0C]
	mov byte ptr [ebp-4],0x16
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x2C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x4C],si
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [ebp+0x64]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x64],eax
	jl Block54

 Block75:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block78

 Block76:
	push edi
	mov ecx,eax
	call TabPartyAdver::_ctor_0
	mov esi,eax
	jmp Block79

 Block77:
	push edi
	call _com_issue_error

 Block78:
	xor esi,esi

 Block79:
	mov dword ptr [edi+0xB14],esi
	mov dword ptr [ebp+0x54],esi
	test esi,esi
	je Block81

 Block80:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block81:
	mov ebx,dword ptr [ebp+0x68]
	add ebx,0xB10
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [ebp-4],0x18
	call ZArray<ZRef<TabDlgInterface>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block83

 Block82:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block83:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block88

 Block84:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block87

 Block85:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block87

 Block86:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block87:
	mov dword ptr [edi+4],0

 Block88:
	mov dword ptr [edi+4],esi
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block91

 Block89:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block90:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block91:
	push 0x6C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [ebp+0x68]
	push ecx
	mov ecx,eax
	call TabPartySearch::_ctor_0
	mov esi,eax
	jmp Block94

 Block93:
	xor esi,esi

 Block94:
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [edx+0xB18],esi
	mov dword ptr [ebp+0x54],esi
	test esi,esi
	je Block96

 Block95:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block96:
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1A
	call ZArray<ZRef<TabDlgInterface>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block98

 Block97:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block98:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block103

 Block99:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block102

 Block100:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block102

 Block101:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block102:
	mov dword ptr [edi+4],0

 Block103:
	mov dword ptr [edi+4],esi
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block106

 Block104:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block106

 Block105:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block106:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+4]
	mov edx,dword ptr [ecx]
	mov esi,dword ptr [ebp+0x78]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	mov esi,dword ptr [ebp+0x68]
	mov ecx,dword ptr [esi+0xB18]
	call TabPartySearch::SetControl_As_Setting
	push 0
	mov ecx,esi
	call CUIPartySearch::OnTabChanged
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIPartySearch::CUIPartySearch
_SUB_EXCEPTION_HANDLER(417A60)
__SUB_CLASS_THIS(00417A60, __thiscall, 41112,  CUIPartySearch, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_417A60
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
	mov dword ptr [esp+0x1C],esi
	push 1
	xor ebx,ebx
	push ebx
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__121
	push 7
	push 0xF4
	push 5
	push 0x15
	call CUIWnd::_ctor_1
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIPartySearch>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIPartySearch>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIPartySearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPartySearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPartySearch::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],ebx
	mov dword ptr [esi+0xB10],ebx
	mov edi,dword ptr [esi+0x78]
	mov byte ptr [esp+0x28],3
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	push 0xA
	push ebp
	push edx
	push eax
	push ecx
	push eax
	push ecx
	mov ecx,esi
	call CUIWnd::CreateUIWndPosForced
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi+0xB0C]
	push eax
	call CCtrlTab::SetTab
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// CUIPartySearch::CUIPartySearch
_SUB_EXCEPTION_HANDLER(417CB0)
__SUB_CLASS_THIS(00417CB0, __thiscall, 41111,  CUIPartySearch, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_417CB0
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
	mov dword ptr [esp+0x1C],esi
	push 1
	xor ebx,ebx
	push ebx
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__121
	push 7
	push 0xF4
	push 5
	push 0x15
	call CUIWnd::_ctor_1
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIPartySearch>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIPartySearch>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIPartySearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPartySearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPartySearch::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],ebx
	mov dword ptr [esi+0xB10],ebx
	mov edi,dword ptr [esi+0x78]
	mov byte ptr [esp+0x28],3
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [esp+0x18]
	push 0xA
	push ebp
	push edx
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0xB0C]
	push eax
	call CCtrlTab::SetTab
	mov eax,esi
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
// CUIPartySearch::OnChildNotify
__SUB_CLASS_THIS(00417620, __thiscall, 41119,  CUIPartySearch, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test ebx,ebx
	jne Block3

 Block1:
	cmp edi,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CUIPartySearch::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block3:
	call CUIPartySearch::GetCurTabDlg
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x10]
	push ecx
	push edi
	push ebx
	mov ecx,eax
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	cmp edi,0x64
	jne Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov ecx,esi
	call edx

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIPartySearch::OnMouseButton
__SUB_CLASS_THIS(00418630, __thiscall, 41120,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB08]
	mov eax,dword ptr [eax+0x44]
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0xB0C]
	mov ecx,dword ptr [ecx+4]
	mov edx,dword ptr [ecx]
	pop esi
	mov edx,dword ptr [edx+0x1C]
	jmp edx

 Block2:
	cmp eax,1
	jne Block6

 Block3:
	lea ecx,[esi-4]
	call CUIPartySearch::GetIdx_Of_FocusedEdit
	mov dword ptr [esp+0xC],eax
	mov eax,dword ptr [esi+0xB14]
	push 0
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[eax+0x40]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	cmp dword ptr [eax+0x10],0
	je Block6

 Block4:
	mov eax,dword ptr [esi+0xB14]
	push 0
	lea edx,[esp+0x10]
	push edx
	lea ecx,[eax+0x40]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x18]
	push edx
	mov edx,dword ptr [esp+0x14]
	push edx
	call eax
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esi+0x70],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus

 Block6:
	pop esi
	ret 0x10
}
}
// CUIPartySearch::OnMoveWnd
__SUB_CLASS_THIS(00417020, __thiscall, 41122,  CUIPartySearch, void, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push ebx
	mov esi,ecx
	call CWnd::OnMoveWnd
	mov ecx,esi
	call CUIPartySearch::GetCurTabDlg
	mov edx,dword ptr [eax]
	push edi
	mov ecx,eax
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIPartySearch::StopSearch
__SUB_CLASS_THIS0(00416F80, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB18]
	jmp  TabPartySearch::StopSearch
}
}
// CUIPartySearch::OnDestroy
__SUB_CLASS_THIS0(00417100, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB0C]
	call CCtrlTab::RemoveAllItems
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIPartySearch::OnButtonClicked
__SUB_CLASS_THIS(00417130, __thiscall, 41121,  CUIPartySearch, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CUIPartySearch::GetCurTabDlg
	mov edx,dword ptr [eax]
	mov edi,dword ptr [esp+0xC]
	mov ecx,eax
	mov eax,dword ptr [edx+0xC]
	push edi
	call eax
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIPartySearch::IsKindOf
__SUB_CLASS_THIS(00417BC0, __thiscall, 41133,  CUIPartySearch, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIPartySearch::ms_RTTI_CUIPartySearch
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
// CUIPartySearch::StartSearch
__SUB_CLASS_THIS0(00416F60, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB18]
	jmp  TabPartySearch::StartSearch
}
}
// CUIPartySearch::GetIdx_Of_FocusedEdit
__SUB_CLASS_THIS0(00418520, __thiscall, 41135,  CUIPartySearch, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	or ebx,0xFFFFFFFF
	xor edi,edi
	mov esi,ecx
	mov dword ptr [esp+0xC],edi
	nop

 Block1:
	mov eax,dword ptr [esi+0xB18]
	push 0
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[eax+0x40]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	cmp dword ptr [eax+0x10],0
	je Block4

 Block2:
	mov eax,dword ptr [esi+0xB18]
	push 0
	lea edx,[esp+0x10]
	push edx
	lea ecx,[eax+0x40]
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov ecx,dword ptr [eax+0x10]
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block4

 Block3:
	mov ebx,edi

 Block4:
	inc edi
	cmp edi,3
	mov dword ptr [esp+0xC],edi
	jl Block1

 Block5:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	pop ecx
	ret
}
}
// CUIPartySearch::HoldSearch
__SUB_CLASS_THIS0(00416F70, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB18]
	jmp  TabPartySearch::HoldSearch
}
}
// CUIPartySearch::Draw
_SUB_EXCEPTION_HANDLER(417570)
__SUB_CLASS_THIS(00417570, __thiscall, 41116,  CUIPartySearch, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_417570
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
	mov eax,dword ptr [esp+0x24]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call CUIPartySearch::GetCurTabDlg
	mov edi,dword ptr [esp+0x24]
	push ecx
	mov ebx,eax
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block2:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	mov ecx,ebx
	call eax
	mov ecx,esi
	call CUIPartySearch::GetCurTabDlg
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block4

 Block3:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIPartySearch::RequestPartyAdverSearch
__SUB_CLASS_THIS(00417050, __thiscall, 41130,  CUIPartySearch, void, long) {
__asm {

 Block0:
	call CUIPartySearch::GetCurTabDlg
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x28]
	push ecx
	push 1
	mov ecx,eax
	call edx
	ret 4
}
}
// CUIPartySearch::OnKey
__SUB_CLASS_THIS(00418580, __thiscall, 41117,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	lea ebx,[edi-4]
	mov ecx,ebx
	call CUIPartySearch::GetIdx_Of_FocusedEdit
	mov ebp,dword ptr [esp+0x18]
	mov esi,eax
	test ebp,ebp
	js Block11

 Block1:
	test esi,esi
	jl Block11

 Block2:
	mov eax,dword ptr [esp+0x14]
	cmp eax,9
	je Block5

 Block3:
	cmp eax,0x1B
	jne Block11

 Block4:
	mov dword ptr [edi+0x70],0
	push 0
	jmp Block10

 Block5:
	cmp esi,3
	jge Block11

 Block6:
	lea eax,[esi+1]
	cdq
	mov ecx,3
	idiv ecx
	mov eax,dword ptr [edi+0xB14]
	push 0
	lea ecx,[eax+0x40]
	mov dword ptr [esp+0x1C],edx
	lea edx,[esp+0x1C]
	push edx
	call ZMap<long, ZRef<CCtrlEdit>, long>::Insert
	mov eax,dword ptr [eax+0x10]
	test eax,eax
	je Block8

 Block7:
	add eax,4
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax

 Block10:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::SetFocus

 Block11:
	mov ecx,ebx
	call CUIPartySearch::GetCurTabDlg
	mov edx,dword ptr [eax]
	mov ebx,dword ptr [esp+0x14]
	push ebp
	mov ecx,eax
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	test esi,esi
	jge Block13

 Block12:
	push ebp
	push ebx
	mov ecx,edi
	call CUIWnd::OnKey

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CUIPartySearch::OnSetFocus
__SUB_CLASS_THIS(00416F40, __thiscall, 41118,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIPartySearch::GetRTTI
__SUB_CLASS_THIS0(00417BA0, __thiscall, 41132,  CUIPartySearch, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIPartySearch::ms_RTTI_CUIPartySearch
	ret
}
}
// CPartySearch_RemoCon::OnSetFocus
__SUB_CLASS_THIS(00417300, __thiscall, 41099,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CPartySearch_RemoCon::CPartySearch_RemoCon
_SUB_EXCEPTION_HANDLER(4171A0)
__SUB_CLASS_THIS0(004171A0, __thiscall, 41096,  CPartySearch_RemoCon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4171A0
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
	mov edi,ecx
	mov dword ptr [esp+0x30],edi
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [edi],offset CPartySearch_RemoCon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CPartySearch_RemoCon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CPartySearch_RemoCon::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x3C],ebx
	call CWvsContext::LoadPartySearch_Remocon_Layer
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetPartySearch_Remocon_Layer
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xC0]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x2C],ecx
	mov ecx,dword ptr [edx+0xB8]
	push esi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0x30],edx
	mov edx,dword ptr [eax+0x70]
	push esi
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	mov ebp,dword ptr [esp+0x1C]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x20]
	push ebx
	push ebx
	push ebx
	push 1
	push ebx
	push eax
	push ecx
	push ebp
	push edx
	mov ecx,edi
	call CWnd::CreateWnd
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x40],bl
	call ecx
	mov eax,edi
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
// CUIPartySearch::ToggleTab
__SUB_CLASS_THIS0(00417000, __thiscall, 41114,  CUIPartySearch, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB0C]
	mov eax,dword ptr [ecx+0x44]
	inc eax
	cdq
	idiv dword ptr [ecx+0x50]
	push edx
	call CCtrlTab::SetTab
	ret
}
}
// CUIPartySearch::OnPacket
__SUB_CLASS_THIS(00416F50, __thiscall, 41123,  CUIPartySearch, void, long, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB14]
	jmp  TabPartyAdver::OnPacket
}
}
