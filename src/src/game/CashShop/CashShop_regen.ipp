#include "regen.hpp"
// CashShop.ipp
#include "CashShop.hpp"


// CS_COMMODITY::CS_COMMODITY
_SUB_EXCEPTION_HANDLER(806E0)
__SUB_CLASS_THIS0(000806E0, __thiscall, 5631,  CS_COMMODITY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_806E0
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
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	xor eax,eax
	mov dword ptr [edi+4],eax
	mov dword ptr [edi+8],eax
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x20],eax
	int 3// TODO: 	mov dword ptr [edi],offset CS_COMMODITY::`vftable'
	lea esi,[edi+0x10]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea ebx,[esi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [esi],eax
	call _rand
	mov cl,byte ptr [esi]
	add eax,ebx
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [esi+4]
	mov edx,dword ptr [esi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov dword ptr [edi+0x68],0
	mov dword ptr [edi+0x6C],0
	mov eax,edi
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
// CS_COMMODITY::~CS_COMMODITY
_SUB_EXCEPTION_HANDLER(80790)
__SUB_CLASS_THIS0(00080790, __thiscall, 5633,  CS_COMMODITY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_80790
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
	lea ecx,[esi+0x6C]
	mov dword ptr [esp+0x14],2
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x14],1
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// ZSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_
__SUB(00092990, __cdecl, 145955,  void, ZArray<ZRef<CS_COMMODITY_EX> >&, __POSITION*, __POSITION*, NakedParam<CommMoreFunc>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<ZRef<CS_COMMODITY_EX>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<CS_COMMODITY_EX>>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<ZRef<CS_COMMODITY_EX>, int, CommMoreFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<CS_COMMODITY_EX>, CommMoreFunc>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CConfirmPurchaseDlg::Confirm
_SUB_EXCEPTION_HANDLER(8C2C0)
__SUB(0008C2C0, __cdecl, 145662,  int32_t, NakedParam<ZXString<char>>, long, unsigned long&, NakedParam<ZRef<CS_COMMODITY>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C2C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+8],0
	lea eax,[esp+0x1C]
	push eax
	push 1
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x1C],2
	call ZArray<ZRef<CS_COMMODITY>>::_Alloc
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call ZRef<CS_COMMODITY>::op_assign_copy
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0xC]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x30]
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CConfirmPurchaseDlg::Confirm_0
	add esp,0x14
	lea ecx,[esp+8]
	mov esi,eax
	mov byte ptr [esp+0x14],1
	call ZArray<ZRef<CS_COMMODITY>>::RemoveAll
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
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CConfirmPurchaseDlg::SetRet
__SUB_CLASS_THIS(00089440, __thiscall, 145666,  CConfirmPurchaseDlg, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	push esi
	jne Block15

 Block1:
	mov esi,dword ptr [esp+8]
	cmp esi,1
	jne Block13

 Block2:
	mov edx,dword ptr [ecx+0xBC]
	mov edx,dword ptr [edx+0x48]
	xor eax,eax
	test edx,edx
	je Block4

 Block3:
	lea eax,[esi+1]

 Block4:
	mov edx,dword ptr [ecx+0xCC]
	cmp dword ptr [edx+0x48],0
	je Block6

 Block5:
	or eax,1

 Block6:
	mov edx,dword ptr [ecx+0xC4]
	mov edx,dword ptr [edx+0x48]
	test edx,edx
	je Block8

 Block7:
	or eax,4

 Block8:
	cmp dword ptr [ecx+0xD0],0
	jne Block13

 Block9:
	cmp eax,2
	je Block13

 Block10:
	cmp eax,1
	je Block13

 Block11:
	cmp eax,4
	je Block13

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xFFFFFFFF
	push offset _S_YOUSHOULDCHOOSEO
	call ZXString<char>::CreateFromCharStr
	call CUtilDlg::Notice
	add esp,0x14
	pop esi
	ret 4

 Block13:
	cmp dword ptr [ecx+0x14],0
	mov dword ptr [ecx+0x80],esi
	mov dword ptr [ecx+0x84],1
	je Block15

 Block14:
	call CWnd::Destroy

 Block15:
	pop esi
	ret 4
}
}
// CCouponUseSelectDlg::OnCreate
_SUB_EXCEPTION_HANDLER(8C810)
__SUB_CLASS_THIS(0008C810, __thiscall, 145738,  CCouponUseSelectDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xCC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea ebp,[esi+0xB8]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea ecx,[esp+0x5C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,1
	mov ecx,eax
	mov dword ptr [esp+0x68],eax
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esp+0xDC],ebx
	mov dword ptr [esp+0x74],ecx
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x80],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x70]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x70],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x70],edi
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
	mov byte ptr [esp+0xD4],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0xD4],0
	cmp eax,ebx
	je Block26

 Block11:
	add eax,8
	cmp eax,ebx
	je Block26

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	push offset _S_
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x90],0x20
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x5C]
	push edx
	push 0xF
	push 0xC8
	push 0x35
	push 0xC
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x98]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGCO__17
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xEC],2
	mov dword ptr [esp+0xB4],ebx
	mov dword ptr [esp+0xCC],0xB4
	mov dword ptr [esp+0xD0],0xE
	mov dword ptr [esp+0xD4],ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xD4],3
	lea ebp,[esi+0xA0]
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	cmp dword ptr [ebp+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block20:
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebp+4],edx
	mov byte ptr [esp+0xD4],2
	cmp dword ptr [esp+0x18],ebx
	je Block22

 Block21:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block22:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGCO__16
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0xB8]
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block24

 Block23:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x54],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xD8],4
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block27

 Block25:
	push eax
	call _com_issue_error

 Block26:
	xor edi,edi
	jmp Block14

 Block27:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xD8],5
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIUIWINDOW2IMGCO__15
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xE8],7
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xEC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xA8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov ebp,8
	mov byte ptr [esp+0xD4],bl
	cmp word ptr [esp+0x3C],bp
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0xD4],5
	cmp word ptr [esp+0x1C],bp
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0xD4],4
	cmp word ptr [esp+0x2C],bp
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xD8],9
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push 0
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UIUIWINDOW2IMGCO__14
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xE8],0xB
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0xE8],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xAC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov byte ptr [esp+0xD4],bl
	cmp word ptr [esp+0x3C],bp
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0xD4],9
	cmp word ptr [esp+0x2C],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0xD4],4
	cmp word ptr [esp+0x1C],bp
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	lea eax,[esp+0x14]
	push 0x1A
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB0]
	add esp,8
	cmp edi,eax
	je Block72

 Block68:
	mov dword ptr [esi+0xB0],eax
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block70:
	test edi,edi
	je Block72

 Block71:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block72:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block74:
	lea ecx,[esp+0x14]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB4]
	add esp,8
	cmp edi,eax
	je Block79

 Block75:
	mov dword ptr [esi+0xB4],eax
	test eax,eax
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block77:
	test edi,edi
	je Block79

 Block78:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block79:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov eax,dword ptr [esi+0x94]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ecx,dword ptr [esp+0xA4]
	mov byte ptr [esp+0xD4],0
	test ecx,ecx
	je Block83

 Block82:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA4],0

 Block83:
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0xCC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC4
	ret 4
}
}
// CCouponUseSelectDlg::~CCouponUseSelectDlg
_SUB_EXCEPTION_HANDLER(84570)
__SUB_CLASS_THIS0(00084570, __thiscall, 145737,  CCouponUseSelectDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84570
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
	int 3// TODO: 	mov dword ptr [esi],offset CCouponUseSelectDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCouponUseSelectDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCouponUseSelectDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB8]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push 2
	push 4
	lea eax,[esi+0xB0]
	push eax
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea ecx,[esi+0xA8]
	push ecx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xA0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
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
// CCSWnd_ItemSearch::~CCSWnd_ItemSearch
_SUB_EXCEPTION_HANDLER(81070)
__SUB_CLASS_THIS0(00081070, __thiscall, 48720,  CCSWnd_ItemSearch, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81070
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
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_ItemSearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_ItemSearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_ItemSearch::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x88],0
	lea edi,[esi+0x84]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x18],0
	call ZArray<tagPOINT>::RemoveAll
	mov ecx,esi
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
// CConfirmPurchaseDlg::Confirm
_SUB_EXCEPTION_HANDLER(8C100)
__SUB(0008C100, __cdecl, 145664,  int32_t, NakedParam<ZXString<char>>, long, unsigned long&, ZArray<ZRef<CS_COMMODITY> >&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C100
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov ebp,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x24],1
	test esi,esi
	je Block19

 Block1:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x38]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x38]
	push edx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CConfirmPurchaseDlg::_ctor_1
	test eax,eax
	je Block19

 Block2:
	add eax,8
	je Block19

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov byte ptr [esp+0x24],2
	call CDialog::DoModal
	mov edi,eax
	cmp edi,1
	jne Block21

 Block6:
	mov ecx,dword ptr [esi+0xBC]
	xor eax,eax
	cmp dword ptr [ecx+0x48],eax
	je Block8

 Block7:
	lea eax,[edi+1]

 Block8:
	mov ecx,dword ptr [esi+0xCC]
	cmp dword ptr [ecx+0x48],0
	je Block10

 Block9:
	or eax,1

 Block10:
	mov ecx,dword ptr [esi+0xC4]
	mov ecx,dword ptr [ecx+0x48]
	test ecx,ecx
	je Block12

 Block11:
	or eax,4

 Block12:
	test ebp,ebp
	jne Block20

 Block13:
	cmp eax,2
	je Block20

 Block14:
	cmp eax,1
	je Block20

 Block15:
	cmp eax,4
	je Block20

 Block16:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push offset _S_YOUSHOULDCHOOSEO
	call ZXString<char>::CreateFromCharStr
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x24],0
	call ZRef<CConfirmPurchaseDlg>::~ZRef<CConfirmPurchaseDlg>
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,2
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret

 Block19:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block20:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx],eax

 Block21:
	mov byte ptr [esp+0x24],0
	test esi,esi
	je Block23

 Block22:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CConfirmPurchaseDlg>::_ReleaseRaw

 Block23:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// _ZtlSecureFuse_unsignedchar_
__SUB(0007D4D0, __cdecl, 145931,  unsigned char, const unsigned char*, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	movzx edx,byte ptr [eax+1]
	movzx ecx,byte ptr [eax]
	mov al,dl
	xor al,cl
	xor ecx,0xBAADF00D
	ror ecx,5
	add ecx,edx
	cmp ecx,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	ret
}
}
// CCSWnd_ItemSearch::OnButtonClicked
_SUB_EXCEPTION_HANDLER(CD640)
__SUB_CLASS_THIS(000CD640, __thiscall, 48722,  CCSWnd_ItemSearch, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CD640
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
	mov dword ptr [esp+0x20],esi
	cmp dword ptr [esp+0x50],0x3E8
	jne Block25

 Block1:
	push 0xB4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x50],eax
	xor ebx,ebx
	mov dword ptr [esp+0x48],ebx
	cmp eax,ebx
	je Block26

 Block2:
	sub esi,0xFFFFFF80
	push esi
	mov ecx,eax
	call CItemSearchDlg::_ctor_0
	cmp eax,ebx
	je Block26

 Block3:
	add eax,8
	cmp eax,ebx
	je Block26

 Block4:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block6

 Block5:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	lea ecx,[esp+0x50]
	push 0x12FB
	push ecx
	mov dword ptr [esp+0x50],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x58],2
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],1
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block23

 Block9:
	mov dword ptr [esp+0x14],ebx
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x54],3
	call CItemSearchDlg::GetResult
	int 3// TODO: 	mov dword ptr [esp+0x2C],offset ZList<ZRef<CS_COMMODITY_EX>>::`vftable'
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	mov byte ptr [esp+0x48],4
	call CWvsCommodityEx::GetCommodityEx
	mov edi,eax
	mov ecx,edi
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	test eax,eax
	jbe Block21

 Block10:
	lea ecx,[ecx]

 Block11:
	mov edx,dword ptr [edi]
	mov esi,dword ptr [edx+ebx*8+4]
	cmp dword ptr [esi+0x4C],0
	lea ebp,[ebx*8]
	je Block19

 Block12:
	cmp dword ptr [esi+0x3C],0
	jg Block19

 Block13:
	mov ecx,esi
	call CS_COMMODITY_EX::GetMinPrice
	cmp eax,dword ptr [esp+0x18]
	jg Block19

 Block14:
	mov ecx,esi
	call CS_COMMODITY_EX::GetMaxPrice
	cmp eax,dword ptr [esp+0x1C]
	jl Block19

 Block15:
	lea ecx,[esi+0x10]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x54]
	push eax
	call CItemInfo::GetItemName
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x48],5
	call ZXString<char>::MakeLower
	mov ecx,dword ptr [esp+0x14]
	push 0
	push 0
	push ecx
	lea ecx,[esp+0x5C]
	call ZXString<char>::Find__0
	test eax,eax
	jl Block17

 Block16:
	mov edx,dword ptr [edi]
	add edx,ebp
	push edx
	lea ecx,[esp+0x30]
	call ZList<ZRef<CS_COMMODITY_EX>>::Insert

 Block17:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,edi
	inc ebx
	call ZArray<ZRef<CS_COMMODITY_EX>>::GetCount
	cmp ebx,eax
	jb Block11

 Block20:
	mov esi,dword ptr [esp+0x28]
	xor ebx,ebx

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov ecx,dword ptr [ecx+0x8C]
	lea eax,[esp+0x2C]
	push eax
	call CCashShop::SetSearchResult
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x48],3
	int 3// TODO: 	mov dword ptr [esp+0x2C],offset ZList<ZRef<CS_COMMODITY_EX>>::`vftable'
	call ZList<ZRef<CS_COMMODITY_EX>>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CItemSearchDlg>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4

 Block26:
	mov dword ptr [esp+0x28],ebx
	mov esi,ebx
	jmp Block6
}
}
// Median_ZRef_CS_COMMODITY_EX__CommMoreFunc_
__SUB(00083370, __cdecl, 145948,  const ZRef<CS_COMMODITY_EX>&, const ZRef<CS_COMMODITY_EX>&, const ZRef<CS_COMMODITY_EX>&, const ZRef<CS_COMMODITY_EX>&, CommMoreFunc&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+4]
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call edi

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call edi

 Block4:
	mov ebp,dword ptr [esp+0x34]
	mov ecx,ebp
	call CommMoreFunc::operator()
	mov esi,dword ptr [esp+0x20]
	sub esp,8
	test eax,eax
	mov eax,dword ptr [esi+4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	je Block14

 Block5:
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call edi

 Block7:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call edi

 Block9:
	mov ecx,ebp
	call CommMoreFunc::operator()
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block11:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call edi

 Block13:
	sub esp,8
	mov dword ptr [esp+0x2C],esp
	jmp Block22

 Block14:
	test eax,eax
	je Block16

 Block15:
	add eax,4
	push eax
	call edi

 Block16:
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call edi

 Block18:
	mov ecx,ebp
	call CommMoreFunc::operator()
	test eax,eax
	jne Block25

 Block19:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block21

 Block20:
	add eax,4
	push eax
	call edi

 Block21:
	mov ebx,dword ptr [esp+0x24]
	sub esp,8
	mov dword ptr [esp+0x28],esp

 Block22:
	mov eax,dword ptr [ebx+4]
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block24

 Block23:
	add eax,4
	push eax
	call edi

 Block24:
	mov ecx,ebp
	call CommMoreFunc::operator()
	test eax,eax
	mov eax,esi
	jne Block26

 Block25:
	mov eax,ebx

 Block26:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CConfirmPurchaseDlg::DrawBackgrnd
_SUB_EXCEPTION_HANDLER(89560)
__SUB_CLASS_THIS0(00089560, __thiscall, 145652,  CConfirmPurchaseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_89560
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xFC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],ecx
	lea eax,[esp+0x28]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x8C]
	xor ebp,ebp
	push ecx
	mov dword ptr [esp+0x108],ebp
	call esi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x108],1
	call esi
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[esp+0x94]
	push edx
	lea eax,[esp+0xA8]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xAB0
	mov bl,2
	push ecx
	mov byte ptr [esp+0x120],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x118],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0xC0]
	mov byte ptr [esp+0x118],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x10C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x104],6
	cmp word ptr [esp+0xAC],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0xAC]
	push ecx
	call edi

 Block13:
	mov byte ptr [esp+0x104],7
	cmp word ptr [esp+0x9C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x9C]
	push eax
	call edi

 Block17:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x8C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x8C]
	push edx
	call edi

 Block21:
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_0
	mov byte ptr [esp+0x114],9
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x110],0xA
	cmp ecx,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x114],9
	call IWzProperty::Getitem
	mov bl,0xB
	mov ecx,eax
	mov byte ptr [esp+0x10C],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov edi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x104],0xC
	cmp edi,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esp+0x3C]
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push ebp
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	call eax
	cmp eax,ebp
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov byte ptr [esp+0x104],bl
	cmp esi,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block34:
	mov esi,8
	mov byte ptr [esp+0x104],9
	cmp word ptr [esp+0x4C],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x3C],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x94]
	cmp eax,4
	ja Block132

 Block43:
	cmp EAX, 0
je Block44
cmp EAX, 1
je Block44
cmp EAX, 2
je Block44
cmp EAX, 3
je Block116
cmp EAX, 4
je Block44


 Block44:
	mov ebp,dword ptr [esp+0x28]
	mov edx,ecx
	cmp dword ptr [edx+0x9C],0
	mov dword ptr [esp+0x24],0
	jle Block62

 Block45:
	mov edi,0x15
	mov bl,0xD
	nop

 Block46:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block47:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_1
	mov byte ptr [esp+0x114],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0xF8]
	mov byte ptr [esp+0x110],0xE
	push edx
	mov byte ptr [esp+0x114],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x10C],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block49

 Block48:
	cmp eax,0x80004002
	jne Block1

 Block49:
	mov edx,dword ptr [esp+0x3C]
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push edi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push ebp
	mov byte ptr [esp+0x124],0x10
	call eax
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block51:
	mov byte ptr [esp+0x104],0xF
	test esi,esi
	je Block53

 Block52:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block53:
	cmp word ptr [esp+0xEC],8
	mov byte ptr [esp+0x104],bl
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0xEC],ax
	mov eax,dword ptr [esp+0xF4]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x104],8
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x1C]
	inc eax
	add edi,0x28
	cmp eax,dword ptr [ecx+0x9C]
	mov dword ptr [esp+0x24],eax
	jl Block46

 Block62:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_2
	mov byte ptr [esp+0x114],bl
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xE8]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x114],0x12
	mov byte ptr [esp+0x114],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x10C],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi+0x9C]
	mov esi,dword ptr [esp+0x7C]
	mov edx,dword ptr [ebp]
	sub esp,0x10
	lea ecx,[eax+eax*4]
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x90]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x94]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x98]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0x80]
	push esi
	lea ecx,[ecx*8+0x15]
	push ecx
	push 0
	push ebp
	mov byte ptr [esp+0x124],0x14
	call eax
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block69:
	mov byte ptr [esp+0x104],0x13
	test esi,esi
	je Block71

 Block70:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block71:
	cmp word ptr [esp+0xDC],8
	mov byte ptr [esp+0x104],bl
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0xDC],ax
	mov eax,dword ptr [esp+0xE4]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0xDC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x104],8
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_3__1
	mov byte ptr [esp+0x114],0x15
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0xC8]
	mov byte ptr [esp+0x110],0x16
	push eax
	mov byte ptr [esp+0x114],0x15
	call IWzProperty::Getitem
	mov bl,0x17
	mov ecx,eax
	mov byte ptr [esp+0x10C],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block84

 Block82:
	cmp eax,0x80004002
	je Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov eax,dword ptr [edi+0x9C]
	mov esi,dword ptr [esp+0x6C]
	mov edx,dword ptr [ebp]
	sub esp,0x10
	lea ecx,[eax+eax*4]
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x80]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x84]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x88]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0x80]
	push esi
	lea ecx,[ecx*8+0x1A]
	push ecx
	push 0
	push ebp
	mov byte ptr [esp+0x124],0x18
	call eax
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block86:
	mov byte ptr [esp+0x104],bl
	test esi,esi
	je Block88

 Block87:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block88:
	mov esi,8
	mov byte ptr [esp+0x104],0x15
	cmp word ptr [esp+0xBC],si
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[esp+0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x6C],si
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block96:
	cmp dword ptr [edi+0xA0],0
	mov dword ptr [esp+0x24],0
	jle Block132

 Block97:
	mov ebp,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x1C]
	xor edi,edi

 Block98:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block99:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_3__1
	mov byte ptr [esp+0x114],0x19
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0xD8]
	mov byte ptr [esp+0x110],0x1A
	push eax
	mov byte ptr [esp+0x114],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x10C],0x1B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	test eax,eax
	je Block102

 Block100:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x14]
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	test eax,eax
	jge Block102

 Block101:
	cmp eax,0x80004002
	jne Block1

 Block102:
	mov eax,dword ptr [ebx+0x9C]
	mov ebx,dword ptr [esp+0x2C]
	sub esp,0x10
	lea edx,[eax+eax*4]
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x44]
	push esi
	lea ecx,[edi+edx*8+0x2D]
	mov edx,dword ptr [ebp]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x4C]
	push ecx
	push 0
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push ebp
	mov byte ptr [esp+0x124],0x1C
	call eax
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block104:
	mov byte ptr [esp+0x104],0x1B
	test esi,esi
	je Block106

 Block105:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block106:
	mov esi,8
	mov byte ptr [esp+0x104],0x19
	cmp word ptr [esp+0xCC],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0xCC],ax
	mov eax,dword ptr [esp+0xD4]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x2C],si
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov eax,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x1C]
	inc eax
	add edi,0x13
	cmp eax,dword ptr [ebx+0xA0]
	mov dword ptr [esp+0x24],eax
	jl Block98

 Block115:
	jmp Block132

 Block116:
	xor ebp,ebp
	cmp dword ptr [ecx+0xA0],ebp
	jle Block132

 Block117:
	lea edi,[ebp+0x15]
	mov bl,0x1D

 Block118:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block119:
	lea ecx,[esp+0x4C]
	push ecx
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_3__1
	mov byte ptr [esp+0x118],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x114],0x1E
	push edx
	mov byte ptr [esp+0x118],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x110],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block121

 Block120:
	cmp eax,0x80004002
	jne Block1

 Block121:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x2C]
	push esi
	push edi
	push 0
	mov byte ptr [esp+0x114],0x20
	call IWzCanvas::Copy
	mov byte ptr [esp+0x104],0x1F
	test esi,esi
	je Block123

 Block122:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block123:
	mov esi,8
	mov byte ptr [esp+0x104],bl
	cmp word ptr [esp+0x5C],si
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x4C],si
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov eax,dword ptr [esp+0x1C]
	inc ebp
	add edi,0x13
	cmp ebp,dword ptr [eax+0xA0]
	jl Block118

 Block132:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
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
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x21
	push offset _S_4__1
	mov byte ptr [esp+0x114],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x110],0x22
	push eax
	mov byte ptr [esp+0x114],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x10C],0x23
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block138

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block138

 Block136:
	cmp eax,0x80004002
	je Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+0x28]
	mov edi,dword ptr [esp+0x28]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x44]
	push esi
	sub ecx,0x6F
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x4C]
	push ecx
	push 0
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push edi
	mov byte ptr [esp+0x124],0x24
	call eax
	test eax,eax
	jge Block140

 Block139:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block140:
	mov byte ptr [esp+0x104],0x23
	test esi,esi
	je Block142

 Block141:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block142:
	mov esi,8
	mov byte ptr [esp+0x104],bl
	cmp word ptr [esp+0x5C],si
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [esp+0x104],8
	cmp word ptr [esp+0x2C],si
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x108],0
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x108],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0xFC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xF4
	ret
}
}
// CConfirmPurchaseDlg::OnCreate
_SUB_EXCEPTION_HANDLER(8ACC0)
__SUB_CLASS_THIS(0008ACC0, __thiscall, 145653,  CConfirmPurchaseDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8ACC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebx
	call CConfirmPurchaseDlg::SetLayer
	lea ecx,[esp+0x48]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xDC],ebp
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x68],0xA0
	mov dword ptr [esp+0x6C],0xE
	mov dword ptr [esp+0x70],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],1
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block17

 Block4:
	add eax,8
	cmp eax,ebp
	je Block17

 Block5:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esi+0x28]
	sub eax,0x5F
	push eax
	push 0x19
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0xBC]
	xor eax,eax
	cmp dword ptr [esi+0x98],2
	sete al
	push eax
	call CCtrlCheckBox::SetChecked
	test byte ptr [esi+0x98],2
	jne Block11

 Block10:
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax

 Block11:
	cmp dword ptr [esi+0x9C],1
	jne Block68

 Block12:
	cmp dword ptr [esi+0x94],1
	je Block68

 Block13:
	mov eax,dword ptr [esi+0xA4]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExIndexBySN
	test eax,eax
	jl Block68

 Block14:
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CWvsCommodityEx::GetCommodityExByIndex
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD8],2
	call CS_COMMODITY_EX::IsMulti
	test eax,eax
	je Block64

 Block15:
	lea ecx,[esp+0x7C]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xDC],3
	mov dword ptr [esp+0x80],0xFFEEEEEE
	mov dword ptr [esp+0x84],0xFFA5A198
	mov dword ptr [esp+0x88],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],4
	test eax,eax
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block19

 Block17:
	xor edi,edi
	jmp Block7

 Block18:
	xor eax,eax

 Block19:
	push eax
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0xDC],3
	call ZRef<CCtrlComboBox>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x7C]
	push edx
	push 0x12
	push 0x96
	push 0x2A
	push 0x3E
	push 0
	push 0x3EB
	push esi
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x7C]
	mov eax,dword ptr [edx+4]
	mov ebp,dword ptr [eax+0x1C]
	mov edi,1
	mov dword ptr [esp+0x28],edi
	call CS_COMMODITY_EX::GetPackedCount
	cmp eax,edi
	jbe Block24

 Block20:
	jmp Block22

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x7C]
	mov eax,dword ptr [eax+edi*8+4]
	cmp ebp,dword ptr [eax+0x1C]
	jne Block30

 Block23:
	inc edi
	call CS_COMMODITY_EX::GetPackedCount
	cmp edi,eax
	jb Block22

 Block24:
	mov ecx,dword ptr [esp+0x1C]

 Block25:
	xor edi,edi
	mov dword ptr [esp+0x2C],edi
	mov byte ptr [esp+0xD8],5
	xor ebp,ebp
	call CS_COMMODITY_EX::GetPackedCount
	test eax,eax
	jbe Block54

 Block26:
	lea ecx,[esp+0x20]
	push 0xAAE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x10
	mov byte ptr [esp+0xD8],6
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,8
	je Block50

 Block27:
	push 3
	push offset _S___21
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x7C]
	mov eax,dword ptr [eax+ebp*8+4]
	cmp dword ptr [eax+0x2C],0
	jne Block33

 Block28:
	lea ecx,[esp+0x44]
	push 0x16BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD8],7
	test eax,eax
	je Block31

 Block29:
	mov ecx,dword ptr [eax-4]
	jmp Block32

 Block30:
	mov dword ptr [esp+0x28],0
	jmp Block25

 Block31:
	xor ecx,ecx

 Block32:
	push ecx
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xD8],6
	jmp Block44

 Block33:
	cmp dword ptr [esp+0x28],0
	je Block35

 Block34:
	lea edx,[esp+0x14]
	push 0x1A17
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0xD8],8
	or ebx,1
	jmp Block36

 Block35:
	lea eax,[esp+0x30]
	push 0x16BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xD8],9
	or ebx,2

 Block36:
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x24],ebx
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
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	mov dword ptr [esp+0xD8],8
	test bl,2
	je Block42

 Block40:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x24],ebx
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov dword ptr [esp+0xD8],6
	test bl,1
	je Block46

 Block43:
	mov eax,dword ptr [esp+0x14]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x24],ebx

 Block44:
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	cmp dword ptr [esp+0x28],0
	je Block48

 Block47:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x7C]
	mov eax,dword ptr [edx+ebp*8+4]
	mov ecx,dword ptr [eax+0x2C]
	jmp Block49

 Block48:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x7C]
	mov eax,dword ptr [ecx+ebp*8+4]
	mov ecx,dword ptr [eax+0x1C]

 Block49:
	mov edx,dword ptr [eax+0x20]
	mov eax,dword ptr [esp+0x20]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	jmp Block51

 Block50:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x7C]
	mov eax,dword ptr [eax+ebp*8+4]
	mov ecx,dword ptr [eax+0x20]
	mov edx,dword ptr [esp+0x20]
	push ecx
	push edx
	lea eax,[esp+0x34]
	push eax
	call ZXString<char>::Format
	add esp,0xC

 Block51:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x7C]
	mov eax,dword ptr [edx+ebp*8+4]
	mov eax,dword ptr [eax+0xC]
	mov edi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi+0xD8]
	push eax
	push edi
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xD8],5
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ecx,dword ptr [esp+0x1C]
	inc ebp
	call CS_COMMODITY_EX::GetPackedCount
	cmp ebp,eax
	jb Block26

 Block54:
	mov byte ptr [esp+0xD8],3
	test edi,edi
	je Block56

 Block55:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov edi,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xD8],2
	test edi,edi
	je Block64

 Block57:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block58:
	test edi,edi
	je Block64

 Block59:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block61:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block63

 Block62:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block63:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD8],0
	test eax,eax
	je Block68

 Block65:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block68

 Block66:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block68

 Block67:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block68:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x68],0xE6
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xA
	test eax,eax
	je Block70

 Block69:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block71

 Block70:
	xor eax,eax

 Block71:
	mov byte ptr [esp+0xD8],0
	test eax,eax
	je Block75

 Block72:
	add eax,8
	je Block75

 Block73:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block74:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[edi+0xC]
	push eax
	call ebx
	jmp Block77

 Block75:
	xor edi,edi

 Block76:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block77:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	test eax,eax
	je Block81

 Block78:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block81

 Block79:
	lea edx,[edi+4]
	push edx
	call ebx
	test edi,edi
	je Block81

 Block80:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block81:
	mov ecx,dword ptr [esi+0xC4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esi+0x28]
	sub edx,0x50
	push edx
	push 0x19
	push 0x3E9
	push esi
	call eax
	mov ecx,dword ptr [esi+0xC4]
	xor edx,edx
	cmp dword ptr [esi+0x98],4
	sete dl
	push edx
	call CCtrlCheckBox::SetChecked
	test byte ptr [esi+0x98],4
	jne Block83

 Block82:
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block83:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xB
	test eax,eax
	je Block85

 Block84:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	mov byte ptr [esp+0xD8],0
	test eax,eax
	je Block100

 Block87:
	add eax,8
	je Block100

 Block88:
	lea edi,[eax-8]
	test edi,edi
	je Block90

 Block89:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block90:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	test eax,eax
	je Block94

 Block91:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block94

 Block92:
	lea edx,[edi+4]
	push edx
	call ebx
	test edi,edi
	je Block94

 Block93:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block94:
	mov ecx,dword ptr [esi+0xCC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esi+0x28]
	sub edx,0x41
	push edx
	push 0x19
	push 0x3EA
	push esi
	call eax
	mov ecx,dword ptr [esi+0xCC]
	xor edx,edx
	cmp dword ptr [esi+0x98],1
	sete dl
	push edx
	call CCtrlCheckBox::SetChecked
	test byte ptr [esi+0x98],1
	jne Block96

 Block95:
	mov eax,dword ptr [esi+0xCC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block96:
	xor ebp,ebp
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x34],1
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x3C],ebp
	lea eax,[esp+0x14]
	push 0x512
	mov bl,0xC
	push eax
	mov byte ptr [esp+0xE0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xDC],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xE
	cmp eax,ebp
	je Block101

 Block99:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block102

 Block100:
	xor edi,edi
	jmp Block90

 Block101:
	xor eax,eax

 Block102:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block114

 Block103:
	add eax,8
	cmp eax,ebp
	je Block114

 Block104:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block106

 Block105:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block106:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	cmp eax,ebp
	je Block110

 Block107:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block110

 Block108:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block110

 Block109:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block110:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x25
	push eax
	push 0x9D
	push 1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xDC],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block112:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0xD8],0x10
	cmp eax,ebp
	je Block115

 Block113:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block116

 Block114:
	xor edi,edi
	jmp Block106

 Block115:
	xor eax,eax

 Block116:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block138

 Block117:
	add eax,8
	cmp eax,ebp
	je Block138

 Block118:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block120

 Block119:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block120:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	cmp eax,ebp
	je Block124

 Block121:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block124

 Block122:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block124

 Block123:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block124:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x25
	push eax
	push 0xCF
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block126:
	mov esi,dword ptr [esp+0x54]
	mov dword ptr [esp+0xD8],0x11
	cmp esi,ebp
	je Block135

 Block127:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block134

 Block128:
	cmp esi,ebp
	je Block134

 Block129:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block131

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block131:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block133

 Block132:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block133:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block134:
	mov dword ptr [esp+0x54],ebp

 Block135:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	cmp eax,ebp
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	mov ecx,dword ptr [esp+0xD0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC8
	ret 4

 Block138:
	xor edi,edi
	jmp Block120
}
}
// CS_COMMODITY::Decode
__SUB_CLASS_THIS(0009AA40, __thiscall, 5627,  CS_COMMODITY, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode4
	mov ebx,eax
	test bl,1
	je Block2

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	push eax
	lea ecx,[edi+0x10]
	call TSecType<long>::SetData

 Block2:
	test bl,2
	je Block4

 Block3:
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [edi+0x1C],eax

 Block4:
	test bl,0x10
	je Block6

 Block5:
	mov ecx,esi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [edi+0x28],ecx

 Block6:
	test bl,4
	je Block8

 Block7:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0x20],eax

 Block8:
	test bl,8
	je Block10

 Block9:
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	mov dword ptr [edi+0x24],edx

 Block10:
	test bl,0x20
	je Block12

 Block11:
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [edi+0x2C],eax

 Block12:
	test ebx,0x20000
	je Block14

 Block13:
	mov ecx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [edi+0x30],ecx

 Block14:
	test ebx,0x40000
	je Block16

 Block15:
	mov ecx,esi
	call CInPacket::Decode2
	movzx edx,ax
	mov dword ptr [edi+0x34],edx

 Block16:
	test bl,0x40
	je Block18

 Block17:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0x38],eax

 Block18:
	test bl,bl
	jns Block20

 Block19:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0x3C],eax

 Block20:
	test ebx,0x100
	je Block22

 Block21:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [edi+0x40],eax

 Block22:
	test ebx,0x200
	je Block24

 Block23:
	mov ecx,esi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [edi+0x48],ecx

 Block24:
	test ebx,0x400
	je Block26

 Block25:
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	mov dword ptr [edi+0x4C],edx

 Block26:
	test ebx,0x800
	je Block28

 Block27:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [edi+0x50],eax

 Block28:
	test ebx,0x1000
	je Block30

 Block29:
	mov ecx,esi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [edi+0x54],ecx

 Block30:
	test ebx,0x2000
	je Block32

 Block31:
	mov ecx,esi
	call CInPacket::Decode2
	movzx edx,ax
	mov dword ptr [edi+0x58],edx

 Block32:
	test ebx,0x4000
	je Block34

 Block33:
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [edi+0x5C],eax

 Block34:
	test ebx,0x8000
	je Block36

 Block35:
	mov ecx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [edi+0x60],ecx

 Block36:
	test ebx,0x10000
	je Block41

 Block37:
	lea ebx,[edi+0x68]
	push ebp
	mov ecx,ebx
	call ZArray<long>::RemoveAll
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebp,al
	test ebp,ebp
	jle Block40

 Block38:
	mov edi,edi

 Block39:
	mov ecx,esi
	call CInPacket::Decode4
	push 0xFFFFFFFF
	mov ecx,ebx
	mov edi,eax
	call ZArray<long>::InsertBefore
	sub ebp,1
	mov dword ptr [eax],edi
	jne Block39

 Block40:
	pop ebp

 Block41:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CConfirmPurchaseDlg::Confirm
_SUB_EXCEPTION_HANDLER(8C3C0)
__SUB(0008C3C0, __cdecl, 145660,  int32_t, NakedParam<ZXString<char>>, long, unsigned long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C3C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+8],0
	lea eax,[esp+0x1C]
	push eax
	push 0
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x1C],1
	call ZArray<ZRef<CS_COMMODITY>>::_Alloc
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push 0
	lea ecx,[esp+0xC]
	push ecx
	push edx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CConfirmPurchaseDlg::Confirm_0
	add esp,0x14
	lea ecx,[esp+8]
	mov esi,eax
	mov byte ptr [esp+0x14],0
	call ZArray<ZRef<CS_COMMODITY>>::RemoveAll
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCouponUseSelectDlg::SetRet
__SUB_CLASS_THIS(000846E0, __thiscall, 145740,  CCouponUseSelectDlg, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// Partition_ZRef_CS_COMMODITY_EX__CommMoreFunc_
__SUB(000834B0, __cdecl, 145950,  int32_t, ZArray<ZRef<CS_COMMODITY_EX> >&, int32_t, int32_t, const ZRef<CS_COMMODITY_EX>&, CommMoreFunc&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+4],eax
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,ebp

 Block1:
	cmp esi,ebp
	jge Block8

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [ebx]
	lea eax,[ecx+esi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block6

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	call CommMoreFunc::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi
	cmp esi,ebp
	jl Block2

 Block8:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jge Block15

 Block9:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block11

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x3C]
	call CommMoreFunc::operator()
	test eax,eax
	je Block15

 Block14:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jl Block9

 Block15:
	cmp esi,edi
	jge Block17

 Block16:
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [eax+edi*8]
	mov ecx,dword ptr [eax+esi*8]
	mov edx,dword ptr [eax+esi*8+4]
	mov dword ptr [eax+esi*8],ebp
	mov ebp,dword ptr [eax+edi*8+4]
	mov dword ptr [eax+esi*8+4],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+edi*8],ecx
	mov dword ptr [eax+edi*8+4],edx
	inc esi
	jmp Block1

 Block17:
	mov ecx,dword ptr [esp+0x14]
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,8
	ret
}
}
// InsertionSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_
_SUB_EXCEPTION_HANDLER(83180)
__SUB(00083180, __cdecl, 145946,  void, ZArray<ZRef<CS_COMMODITY_EX> >&, int32_t, int32_t, CommMoreFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_83180
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
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov edi,dword ptr [esp+0x38]
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x14],edi
	jg Block29

 Block1:
	mov ebx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea esi,[eax+edi*8]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block3

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	test ebp,ebp
	je Block7

 Block4:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block5:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block6:
	mov ebx,dword ptr [esp+0x34]

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp dword ptr [esp+0x14],ecx
	mov ebp,dword ptr [esi+4]
	mov dword ptr [esp+0x20],ebp
	jle Block21

 Block8:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],ebp
	test ebp,ebp
	je Block12

 Block11:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov ecx,dword ptr [esp+0x50]
	call CommMoreFunc::operator()
	test eax,eax
	je Block21

 Block13:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+edi*8-4]
	lea esi,[ecx+edi*8]
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block20

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block19:
	mov dword ptr [esi+4],0

 Block20:
	mov ecx,dword ptr [esi-4]
	dec edi
	cmp edi,dword ptr [esp+0x38]
	mov dword ptr [esi+4],ecx
	jg Block8

 Block21:
	mov edx,dword ptr [ebx]
	lea esi,[edx+edi*8]
	test ebp,ebp
	je Block23

 Block22:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esi+4],0

 Block28:
	mov edi,dword ptr [esp+0x14]
	inc edi
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x14],edi
	jle Block1

 Block29:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block32

 Block30:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block31:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CConfirmPurchaseDlg::Draw
_SUB_EXCEPTION_HANDLER(8B6A0)
__SUB_CLASS_THIS(0008B6A0, __thiscall, 145654,  CConfirmPurchaseDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8B6A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x48],esi
	mov eax,dword ptr [ebp+0x70]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp+0x4C],ebx
	call CWnd::Draw
	mov ecx,esi
	call CConfirmPurchaseDlg::DrawBackgrnd
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [ebp-4],ebx
	cmp eax,4
	ja Block110

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block2
cmp EAX, 2
je Block2
cmp EAX, 3
je Block105
cmp EAX, 4
je Block2


 Block2:
	cmp dword ptr [esi+0x9C],ebx
	mov dword ptr [ebp+0x54],ebx
	jle Block98

 Block3:
	mov dword ptr [ebp+0x60],0x2B
	jmp Block7

 Block6:
	mov ebx,dword ptr [ebp+0x4C]

 Block7:
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [edx+0xA4]
	mov ecx,dword ptr [ebp+0x54]
	mov edi,dword ptr [eax+ecx*8+4]
	lea eax,[eax+ecx*8]
	xor esi,esi
	mov dword ptr [ebp-0x4C],edi
	cmp edi,esi
	je Block9

 Block8:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov dword ptr [ebp+0x40],esi
	mov dword ptr [ebp+0x34],esi
	mov dword ptr [ebp+0x58],esi
	mov eax,dword ptr [edi+0xC]
	add eax,0xFB3B4C00
	mov byte ptr [ebp-4],4
	cmp eax,0x98967F
	ja Block11

 Block10:
	lea eax,[ebp-0x2C]
	push 0x25D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],5
	or ebx,1
	jmp Block12

 Block11:
	lea ecx,[ebp-0x34]
	push 0xAAE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],6
	or ebx,2

 Block12:
	mov edx,dword ptr [edi+0x20]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x40]
	push eax
	mov dword ptr [ebp+0x4C],ebx
	call ZXString<char>::Format
	add esp,0xC
	mov dword ptr [ebp-4],5
	test bl,2
	je Block15

 Block13:
	mov eax,dword ptr [ebp-0x34]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x4C],ebx
	cmp eax,esi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [ebp-4],4
	test bl,1
	je Block18

 Block16:
	mov eax,dword ptr [ebp-0x2C]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp+0x4C],ebx
	cmp eax,esi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [edi+0xC]
	add eax,0xFB3B4C00
	cmp eax,0x98967F
	jbe Block33

 Block19:
	lea esi,[edi+0x10]
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,8
	je Block33

 Block20:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	jne Block33

 Block21:
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [edi+0x2C]
	mov byte ptr [ebp-4],7
	test eax,eax
	jne Block27

 Block22:
	push offset _S___21
	lea ecx,[ebp+0x5C]
	call ZXString<char>::AssignCStr
	lea ecx,[ebp-0x20]
	push 0x16BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax-4]
	jmp Block25

 Block24:
	xor ecx,ecx

 Block25:
	push ecx
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block27:
	push eax
	lea edx,[ebp+0x5C]
	push offset _S_DDAYS
	push edx
	call ZXString<char>::Format
	add esp,0xC

 Block28:
	mov esi,dword ptr [ebp+0x5C]
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi-4]
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push eax
	push esi
	lea ecx,[ebp+0x40]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block33

 Block32:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block33:
	cmp dword ptr [edi+0x1C],1
	jle Block41

 Block34:
	mov dword ptr [ebp+0x5C],0
	lea eax,[ebp-0x28]
	push 0x24D
	push eax
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x28]
	add esp,0xC
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov esi,dword ptr [ebp+0x5C]
	test esi,esi
	je Block38

 Block37:
	mov eax,dword ptr [esi-4]
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	push eax
	push esi
	lea ecx,[ebp+0x40]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block41

 Block40:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block41:
	lea esi,[edi+0x10]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov ecx,esi
	cmp eax,0x5B
	jne Block47

 Block42:
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetSpecialIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	mov dword ptr [ebp+0x58],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov eax,dword ptr [ebp-0x24]
	mov edi,dword ptr [ebp+0x58]
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp-0x30]
	push eax
	call CItemInfo::GetSpecialName
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x30]
	jmp Block52

 Block47:
	call TSecType<long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	mov dword ptr [ebp+0x58],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov eax,dword ptr [ebp-0x38]
	mov edi,dword ptr [ebp+0x58]
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp+0x3C]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x3C]

 Block52:
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov ecx,3
	mov word ptr [ebp-0x1C],cx
	mov dword ptr [ebp-0x14],0xFF
	mov byte ptr [ebp-4],0xD
	test edi,edi
	je Block100

 Block55:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp+0x5C]
	push eax
	push edi
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x50]
	push eax
	push edi
	mov dword ptr [ebp+0x50],0
	call ecx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block59:
	mov edi,dword ptr [ebp+0x44]
	test edi,edi
	je Block100

 Block60:
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	sub ecx,esi
	add ecx,0xE
	push ecx
	mov ecx,dword ptr [edx+0x80]
	mov eax,0x15
	sub eax,dword ptr [ebp+0x50]
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block62:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],4
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push ecx
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block67:
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block68:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp+0x30]
	push 0
	push ecx
	mov byte ptr [ebp-4],0xF
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [ebp+0x34]
	push eax
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x10
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x60]
	add edx,0xFFFFFFF0
	push edx
	mov byte ptr [ebp-4],0x11
	push 0x3F
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov edi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x48],di
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x10],di
	jne Block77

 Block75:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	lea ecx,[ebp+0x20]
	push ecx
	call esi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block79:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x12
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block80:
	mov edi,dword ptr [ebp+0x40]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x13
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp+0x20]
	push edx
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x38]
	push 0
	push ecx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x14
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x15
	push 0x3F
	mov byte ptr [ebp-4],0x14
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp],si
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x20],si
	jne Block89

 Block87:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],3
	call edx
	mov byte ptr [ebp-4],2
	test ebx,ebx
	je Block92

 Block91:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block94

 Block93:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block94:
	mov edi,dword ptr [ebp-0x4C]
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block96

 Block95:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block96:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x48]
	add dword ptr [ebp+0x60],0x28
	inc eax
	cmp eax,dword ptr [ecx+0x9C]
	mov dword ptr [ebp-0x4C],0
	mov dword ptr [ebp+0x54],eax
	jl Block6

 Block97:
	mov esi,ecx

 Block98:
	mov eax,dword ptr [esi+0x94]
	xor ebx,ebx
	cmp eax,ebx
	jne Block102

 Block99:
	mov eax,dword ptr [esi+0xA0]
	mov ecx,dword ptr [esi+0x28]
	imul eax,0x13
	add eax,0x68
	sub ecx,eax
	mov dword ptr [ebp+0x60],ecx
	jmp Block110

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	push eax
	call _com_issue_error

 Block102:
	cmp eax,2
	jne Block104

 Block103:
	mov ecx,dword ptr [esi+0x28]
	mov eax,0x9E
	sub ecx,eax
	mov dword ptr [ebp+0x60],ecx
	jmp Block110

 Block104:
	mov ecx,dword ptr [esi+0x28]
	sub eax,4
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFF0
	add eax,0x9E
	sub ecx,eax
	mov dword ptr [ebp+0x60],ecx
	jmp Block110

 Block105:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	je Block108

 Block106:
	cmp dword ptr [eax-4],3
	jne Block108

 Block107:
	mov eax,dword ptr [esi+0x28]
	sub eax,0x98
	jmp Block109

 Block108:
	mov eax,dword ptr [esi+0x28]
	sub eax,0x90

 Block109:
	mov dword ptr [ebp+0x60],eax

 Block110:
	xor ecx,ecx
	mov dword ptr [ebp+0x54],ecx
	jmp Block112

 Block112:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block138

 Block113:
	cmp ecx,dword ptr [eax-4]
	jae Block138

 Block114:
	mov edx,eax
	lea eax,[edx+ecx*4]
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call ZXString<char>::op_assign
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],0x16
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block115:
	mov edi,dword ptr [ebp+0x50]
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0x17
	call _xbstr_t::_ctor_0
	lea eax,[ebp+0x38]
	push 0
	push eax
	mov byte ptr [ebp-4],0x18
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block100

 Block116:
	mov byte ptr [ebp-4],0x1A
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0x16
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov eax,esi
	cdq
	sub eax,edx
	lea edx,[ebp+0x10]
	sar eax,1
	mov esi,0x8F
	push edx
	sub esi,eax
	call ebx
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block123:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x1B
	call ebx
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block101

 Block124:
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x30]
	push 0
	push edx
	mov byte ptr [ebp-4],0x1C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0x1D
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	je Block100

 Block125:
	mov eax,dword ptr [ebp+0x60]
	push eax
	push esi
	mov byte ptr [ebp-4],0x1D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block127

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block127:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp],si
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x10],si
	jne Block134

 Block132:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	add dword ptr [ebp+0x60],0x10
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block137

 Block136:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block137:
	inc dword ptr [ebp+0x54]
	mov esi,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x54]
	jmp Block112

 Block138:
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	lea esp,[ebp-0x60]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CConfirmPurchaseDlg::SetLayer
_SUB_EXCEPTION_HANDLER(8A2B0)
__SUB_CLASS_THIS0(0008A2B0, __thiscall, 145652,  CConfirmPurchaseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8A2B0
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
	mov ebp,ecx
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x90],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x94],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x88],0
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [ebp+0x94]
	mov dword ptr [ebp+0x24],0x11E
	cmp eax,4
	ja Block10

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8


 Block4:
	mov eax,dword ptr [ebp+0x9C]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebp+0xA0]
	imul eax,0x13
	lea ecx,[eax+edx*8+0x89]
	jmp Block9

 Block5:
	mov eax,dword ptr [ebp+0x9C]
	lea edx,[eax+eax*4]
	lea eax,[edx*8+0xAF]
	mov dword ptr [ebp+0x28],eax
	jmp Block10

 Block6:
	mov eax,dword ptr [ebp+0x9C]
	lea ecx,[eax+eax*4]
	lea edx,[ecx*8+0xC2]
	mov dword ptr [ebp+0x28],edx
	jmp Block10

 Block7:
	mov dword ptr [ebp+0x28],0xAA
	jmp Block10

 Block8:
	mov eax,dword ptr [ebp+0x9C]
	lea eax,[eax+eax*4]
	lea ecx,[eax*8+0xC2]

 Block9:
	mov dword ptr [ebp+0x28],ecx

 Block10:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x20]
	mov bl,2
	push ecx
	mov byte ptr [esp+0x8C],bl
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],3
	cmp ecx,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov byte ptr [esp+0x88],bl
	mov ebx,8
	cmp word ptr [esp+0x20],bx
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,esi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [esp+0x88],0
	cmp word ptr [esp+0x30],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,esi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	lea eax,[esp+0x60]
	push eax
	call edi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x8C],4
	call edi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x8C],5
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x8C],6
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0x30]
	mov bl,7
	push edx
	mov byte ptr [esp+0x8C],bl
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x8C],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x88],9
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x40]
	push edx
	push eax
	lea edx,[esp+0x88]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x70],8
	jne Block53

 Block45:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block48:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x88],8
	test eax,eax
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block50:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x88],bl
	jne Block54

 Block51:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x70]
	push ecx
	call esi
	jmp Block48

 Block54:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block55:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x88],6
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block59:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],5
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x40]
	push eax
	call esi

 Block63:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],4
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block67:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],0
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block71:
	lea edx,[esp+0x50]
	push edx
	call edi
	lea eax,[esp+0x50]
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
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x8C],0xA
	call edi
	lea edx,[esp+0x60]
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
	mov ecx,ebp
	mov byte ptr [esp+0x8C],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0x88],bl
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x88],0xD
	test ecx,ecx
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea edx,[esp+0x64]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [ebp+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x88],bl
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x88],0xB
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov edi,8
	mov byte ptr [esp+0x88],0xA
	cmp word ptr [esp+0x60],di
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block87:
	mov byte ptr [esp+0x88],0
	cmp word ptr [esp+0x50],di
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block91:
	mov ecx,ebp
	call CConfirmPurchaseDlg::DrawBackgrnd
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret
}
}
// CCouponUseSelectDlg::Draw
__SUB_CLASS_THIS(000844F0, __thiscall, 145742,  CCouponUseSelectDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ecx
	push esi
	push 0
	mov esi,ecx
	call CWnd::Draw
	lea eax,[esp+4]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esp+4]
	pop esi
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+4],eax
	mov edx,dword ptr [ecx+8]
	jmp edx

 Block2:
	pop ecx
	ret 4
}
}
// is_dual_job_born
__SUB(0007CB40, __cdecl, 145929,  int32_t, long, short) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	jne Block2

 Block1:
	mov eax,1
	cmp word ptr [esp+8],ax
	je Block3

 Block2:
	xor eax,eax

 Block3:
	ret
}
}
// CConfirmPurchaseDlg::~CConfirmPurchaseDlg
_SUB_EXCEPTION_HANDLER(8AB90)
__SUB_CLASS_THIS0(0008AB90, __thiscall, 145652,  CConfirmPurchaseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8AB90
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
	int 3// TODO: 	mov dword ptr [esi],offset CConfirmPurchaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConfirmPurchaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConfirmPurchaseDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xD4]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x1C],1
	call ZArray<ZRef<CS_COMMODITY_EX>>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	call ZArray<ZXString<char>>::RemoveAll
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
// get_inven_redundant_inc
__SUB(0007E420, __cdecl, 145941,  long, CharacterData&, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+8]
	push esi
	mov esi,eax
	mov eax,dword ptr [esi+0x3D]
	push edi
	push eax
	lea edi,[esi+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,8
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,5
	ja Block23

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block10
cmp EAX, 2
je Block17
cmp EAX, 3
je Block17
cmp EAX, 4
je Block20
cmp EAX, 5
je Block10


 Block2:
	cmp ebx,1
	jne Block6

 Block3:
	push ebx

 Block4:
	mov ecx,esi
	call CharacterData::GetItemSlotCount
	add eax,ebp
	cmp eax,0x5C
	jle Block23

 Block5:
	pop edi
	pop esi
	mov eax,4
	pop ebp
	ret

 Block6:
	cmp ebx,2
	je Block8

 Block7:
	cmp ebx,4
	jne Block23

 Block8:
	push ebx
	mov ecx,esi
	call CharacterData::GetItemSlotCount
	add eax,ebp
	cmp eax,0x58
	jle Block23

 Block9:
	pop edi
	pop esi
	mov eax,8
	pop ebp
	ret

 Block10:
	mov edx,dword ptr [esi+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0xA
	idiv ecx
	add esp,8
	test edx,edx
	jne Block23

 Block11:
	cmp ebx,2
	je Block13

 Block12:
	cmp ebx,4
	jne Block23

 Block13:
	mov esi,dword ptr [esi+ebx*4+0x501]
	test esi,esi
	je Block15

 Block14:
	mov esi,dword ptr [esi-4]

 Block15:
	lea edx,[esi+ebp-1]
	cmp edx,0x5C
	jle Block23

 Block16:
	pop edi
	pop esi
	mov eax,4
	pop ebp
	ret

 Block17:
	mov eax,dword ptr [esi+0x3D]
	push eax
	push edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0xA
	idiv ecx
	add esp,8
	test edx,edx
	jne Block23

 Block18:
	cmp ebx,4
	jne Block23

 Block19:
	push ebx
	jmp Block4

 Block20:
	mov edx,dword ptr [esi+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0xA
	idiv ecx
	add esp,8
	test edx,edx
	jne Block23

 Block21:
	cmp ebx,2
	jne Block23

 Block22:
	push ebx
	jmp Block4

 Block23:
	pop edi
	pop esi
	xor eax,eax
	pop ebp
	ret
}
}
// CConfirmPurchaseDlg::Confirm
_SUB_EXCEPTION_HANDLER(8C480)
__SUB(0008C480, __cdecl, 145658,  int32_t, NakedParam<ZXString<char>>, long, unsigned long&, ZArray<ZRef<CS_COMMODITY_EX> >&, long*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov edi,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],1
	test esi,esi
	je Block19

 Block1:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x30]
	push 0
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CConfirmPurchaseDlg::_ctor_0
	test eax,eax
	je Block19

 Block2:
	add eax,8
	je Block19

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov byte ptr [esp+0x24],2
	call CDialog::DoModal
	mov ebp,eax
	cmp ebp,1
	jne Block22

 Block6:
	mov ecx,dword ptr [esi+0xBC]
	xor eax,eax
	cmp dword ptr [ecx+0x48],eax
	je Block8

 Block7:
	lea eax,[ebp+1]

 Block8:
	mov ecx,dword ptr [esi+0xCC]
	cmp dword ptr [ecx+0x48],0
	je Block10

 Block9:
	or eax,1

 Block10:
	mov ecx,dword ptr [esi+0xC4]
	mov ecx,dword ptr [ecx+0x48]
	test ecx,ecx
	je Block12

 Block11:
	or eax,4

 Block12:
	cmp dword ptr [esp+0x40],0
	jne Block20

 Block13:
	cmp eax,2
	je Block20

 Block14:
	cmp eax,1
	je Block20

 Block15:
	cmp eax,4
	je Block20

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push offset _S_YOUSHOULDCHOOSEO
	call ZXString<char>::CreateFromCharStr
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x24],0
	call ZRef<CConfirmPurchaseDlg>::~ZRef<CConfirmPurchaseDlg>
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,2
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret

 Block19:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block20:
	mov dword ptr [edi],eax
	mov edi,dword ptr [esp+0x3C]
	test edi,edi
	je Block22

 Block21:
	mov ecx,dword ptr [esi+0xD8]
	mov eax,dword ptr [ecx+0x68]
	push eax
	call CCtrlComboBox::GetItemParam
	mov dword ptr [edi],eax

 Block22:
	mov byte ptr [esp+0x24],0
	test esi,esi
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CConfirmPurchaseDlg>::_ReleaseRaw

 Block24:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// CommMoreFunc::operator()
_SUB_EXCEPTION_HANDLER(826B0)
__SUB_CLASS_THIS(000826B0, __thiscall, 145924,  CommMoreFunc, int32_t, NakedParam<ZRef<CS_COMMODITY_EX>>, NakedParam<ZRef<CS_COMMODITY_EX>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_826B0
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
	mov eax,dword ptr [esp+0x24]
	xor ebx,ebx
	mov dword ptr [esp+0x18],1
	cmp eax,ebx
	je Block21

 Block1:
	mov edx,dword ptr [esp+0x2C]
	cmp edx,ebx
	je Block13

 Block2:
	mov esi,dword ptr [edx+0x4C]
	mov ecx,dword ptr [eax+0x4C]
	cmp ecx,esi
	jg Block21

 Block3:
	jge Block5

 Block4:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x18],bl
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block5:
	mov edi,dword ptr [eax+0xC]
	add edi,0xFB3B4C00
	cmp edi,0x98967F
	jbe Block21

 Block6:
	mov edi,dword ptr [edx+0xC]
	add edi,0xFB3B4C00
	cmp edi,0x98967F
	jbe Block21

 Block7:
	cmp ecx,ebx
	je Block12

 Block8:
	cmp esi,ebx
	je Block12

 Block9:
	mov ecx,dword ptr [edx+0x28]
	mov edx,dword ptr [eax+0x28]
	cmp edx,ecx
	jg Block21

 Block10:
	jl Block4

 Block11:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x2C]
	add ecx,0x10
	mov esi,eax
	call TSecType<long>::GetData
	xor ecx,ecx
	cmp esi,eax
	setle cl
	mov byte ptr [esp+0x18],bl
	mov esi,ecx
	lea ecx,[esp+0x20]
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block12:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x2C]
	add ecx,0x10
	mov esi,eax
	call TSecType<long>::GetData
	xor edx,edx
	cmp esi,eax
	setle dl
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x18],bl
	mov esi,edx
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block13:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	add eax,4
	push eax
	mov byte ptr [esp+0x1C],bl
	call edi
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block16

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block16:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block17:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block20

 Block18:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block20

 Block19:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block20:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block21:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x18],bl
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// CS_COMMODITY::operator=
__SUB_CLASS_THIS(00082290, __thiscall, 5636,  CS_COMMODITY, CS_COMMODITY&, CS_COMMODITY&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi+0xC]
	mov esi,ecx
	lea ecx,[edi+0x10]
	mov dword ptr [esi+0xC],eax
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x10]
	call TSecType<long>::SetData
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],eax
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],ecx
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],ecx
	mov edx,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],edx
	mov eax,dword ptr [edi+0x54]
	mov dword ptr [esi+0x54],eax
	mov ecx,dword ptr [edi+0x58]
	mov dword ptr [esi+0x58],ecx
	mov edx,dword ptr [edi+0x5C]
	mov dword ptr [esi+0x5C],edx
	mov eax,dword ptr [edi+0x60]
	mov dword ptr [esi+0x60],eax
	mov ecx,dword ptr [edi+0x64]
	lea edx,[edi+0x68]
	mov dword ptr [esi+0x64],ecx
	push edx
	lea ecx,[esi+0x68]
	call ZArray<long>::operator=
	lea eax,[edi+0x6C]
	push eax
	lea ecx,[esi+0x6C]
	call ZArray<long>::operator=
	mov ecx,dword ptr [edi+0x70]
	mov dword ptr [esi+0x70],ecx
	mov edx,dword ptr [edi+0x74]
	pop edi
	mov dword ptr [esi+0x74],edx
	mov eax,esi
	pop esi
	ret 4
}
}
// CCouponUseSelectDlg::OnChildNotify
_SUB_EXCEPTION_HANDLER(84440)
__SUB_CLASS_THIS(00084440, __thiscall, 145739,  CCouponUseSelectDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84440
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	cmp eax,0x3E8
	jne Block4

 Block1:
	cmp ecx,0xC8
	jne Block4

 Block2:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x14],0
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block4:
	cmp ecx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CConfirmPurchaseDlg::CConfirmPurchaseDlg
_SUB_EXCEPTION_HANDLER(88A70)
__SUB_CLASS_THIS(00088A70, __thiscall, 145650,  CConfirmPurchaseDlg, void, NakedParam<ZXString<char>>, long, unsigned long, ZArray<ZRef<CS_COMMODITY_EX> >&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88A70
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
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CConfirmPurchaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConfirmPurchaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConfirmPurchaseDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],ebp
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],ecx
	mov eax,dword ptr [edx]
	cmp eax,ebp
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea ecx,[esi+0xA4]
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [ecx],ebp
	mov dword ptr [esi+0xAC],ebp
	mov dword ptr [esi+0xB4],ebp
	mov dword ptr [esi+0xBC],ebp
	mov dword ptr [esi+0xC4],ebp
	mov dword ptr [esi+0xCC],ebp
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD8],ebp
	cmp dword ptr [esi+0x94],3
	mov byte ptr [esp+0x20],9
	je Block14

 Block4:
	mov eax,dword ptr [esi+0x9C]
	lea edx,[esp+0x34]
	push edx
	push eax
	call ZArray<ZRef<CS_COMMODITY_EX>>::_Alloc
	cmp dword ptr [esi+0x9C],ebp
	jle Block14

 Block5:
	mov ecx,dword ptr [esp+0x34]
	mov ebx,dword ptr [ecx]
	mov edi,dword ptr [esi+0xA4]
	lea eax,[ebp*8]
	add ebx,eax
	add edi,eax
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [edi+4],0

 Block12:
	mov ecx,dword ptr [ebx+4]
	inc ebp
	mov dword ptr [edi+4],ecx
	cmp ebp,dword ptr [esi+0x9C]
	jl Block5

 Block13:
	xor ebp,ebp

 Block14:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	lea edi,[esi+0x90]
	push edi
	call separate_string_by_line
	mov edi,dword ptr [edi]
	add esp,8
	cmp edi,ebp
	jne Block16

 Block15:
	xor eax,eax
	jmp Block17

 Block16:
	mov eax,dword ptr [edi-4]

 Block17:
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov dword ptr [esp+0x34],ecx
	fild dword ptr [esp+0x34]
	test ecx,ecx
	jge Block19

 Block18:
	fadd qword ptr [__real_41f0000000000000]

 Block19:
	fdiv qword ptr [__real_4033000000000000]
	sub esp,8
	fstp qword ptr [esp]
	call _ceil
	add esp,8
	call __ftol2_sse
	push ebp
	push 1
	push ebp
	push ebp
	mov ecx,esi
	mov dword ptr [esi+0xA0],eax
	call CDialog::CreateDlg_1
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x14
}
}
// CCouponUseSelectDlg::Update
_SUB_EXCEPTION_HANDLER(8CE70)
__SUB_CLASS_THIS0(0008CE70, __thiscall, 145737,  CCouponUseSelectDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8CE70
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [edi+0x94]
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [edi+0x94]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,1
	test eax,eax
	je Block3

 Block2:
	cmp byte ptr [eax],0
	mov byte ptr [esp+0x13],bl
	jne Block4

 Block3:
	mov byte ptr [esp+0x13],0

 Block4:
	test bl,1
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp byte ptr [esp+0x13],0
	je Block22

 Block8:
	mov ecx,dword ptr [edi+0x94]
	lea edx,[esp+0x18]
	push edx
	call CCtrlEdit::GetText
	push 1
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x38],0
	call ZXString<char>::Right
	push offset _S___28
	mov ecx,eax
	call ZXString<char>::Compare
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	neg esi
	sbb esi,esi
	inc esi
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test esi,esi
	je Block22

 Block13:
	mov ecx,dword ptr [edi+0x94]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov esi,eax
	mov ecx,dword ptr [edi+0x94]
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x34],1
	call CCtrlEdit::GetText
	mov edx,dword ptr [esi]
	mov bl,2
	mov byte ptr [esp+0x30],bl
	test edx,edx
	je Block15

 Block14:
	mov edx,dword ptr [edx-4]
	jmp Block16

 Block15:
	xor edx,edx

 Block16:
	dec edx
	push edx
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x94]
	push eax
	mov byte ptr [esp+0x34],3
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,edi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// CCouponUseSelectDlg::CCouponUseSelectDlg
_SUB_EXCEPTION_HANDLER(842F0)
__SUB_CLASS_THIS0(000842F0, __thiscall, 145735,  CCouponUseSelectDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_842F0
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
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CCouponUseSelectDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCouponUseSelectDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCouponUseSelectDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xA8]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0xB0]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
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
// CCouponUseSelectDlg::Confirm
_SUB_EXCEPTION_HANDLER(84740)
__SUB(00084740, __cdecl, 145741,  int32_t, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84740
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
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block13

 Block1:
	mov ecx,eax
	call CCouponUseSelectDlg::_ctor_default
	test eax,eax
	je Block13

 Block2:
	add eax,8
	je Block13

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[esp+0xC]
	push 0x4F8
	push ecx
	mov dword ptr [esp+0x28],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x24],2
	call play_ui_sound
	mov eax,dword ptr [esp+0x10]
	add esp,4
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGCO__13
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov ecx,esi
	call CDialog::DoModal
	mov edi,eax
	cmp edi,1
	jne Block10

 Block8:
	mov ecx,dword ptr [esi+0x94]
	lea edx,[esp+0xC]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x28]
	push eax
	mov byte ptr [esp+0x24],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCouponUseSelectDlg>::_ReleaseRaw

 Block12:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret

 Block13:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5
}
}
// DownHeap_ZRef_CS_COMMODITY_EX__CommMoreFunc_
_SUB_EXCEPTION_HANDLER(835D0)
__SUB(000835D0, __cdecl, 145952,  void, ZArray<ZRef<CS_COMMODITY_EX> >&, int32_t, int32_t, int32_t, CommMoreFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_835D0
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
	mov edi,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebx]
	lea eax,[edi+ebp]
	mov esi,dword ptr [ecx+eax*8-4]
	lea eax,[ecx+eax*8-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block2

 Block1:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esp+0x38]
	cdq
	sub eax,edx
	sar eax,1
	cmp ebp,eax
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	jg Block25

 Block3:
	nop

 Block4:
	mov ebp,dword ptr [esp+0x34]
	add ebp,ebp
	cmp ebp,dword ptr [esp+0x38]
	jge Block11

 Block5:
	mov eax,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [ebx]
	sub esp,8
	lea eax,[eax+esi-8]
	mov eax,dword ptr [eax+4]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [esp+0x50]
	call CommMoreFunc::operator()
	test eax,eax
	je Block11

 Block10:
	inc ebp

 Block11:
	mov ecx,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[ecx+esi-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov eax,dword ptr [esp+0x24]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov ecx,dword ptr [esp+0x50]
	call CommMoreFunc::operator()
	test eax,eax
	je Block24

 Block16:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [esp+0x34]
	add edx,edi
	lea esi,[esi+eax-4]
	lea edi,[eax+edx*8-8]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block23

 Block19:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block22:
	mov dword ptr [edi+4],0

 Block23:
	cmp ebp,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	mov dword ptr [edi+4],eax
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],ebp
	jle Block4

 Block24:
	mov esi,dword ptr [esp+0x1C]

 Block25:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea ecx,[esp+0x18]
	add edx,edi
	push ecx
	lea ecx,[eax+edx*8-8]
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block28

 Block26:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
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
// CConfirmPurchaseDlg::Confirm
_SUB_EXCEPTION_HANDLER(8C660)
__SUB(0008C660, __cdecl, 145656,  int32_t, NakedParam<ZXString<char>>, long, unsigned long&, NakedParam<ZRef<CS_COMMODITY_EX>>, long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8C660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x18],1
	call CS_COMMODITY_EX::IsMulti
	mov dword ptr [esp+8],0
	test eax,eax
	je Block2

 Block1:
	lea eax,[esp+0x2C]
	push eax
	push 1
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],2
	call ZArray<ZRef<CS_COMMODITY_EX>>::_Alloc
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x28]
	push 0
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0x10]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x38]
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CConfirmPurchaseDlg::Confirm_3
	add esp,0x18
	lea ecx,[esp+8]
	mov esi,eax
	mov byte ptr [esp+0x18],1
	call ZArray<ZRef<CS_COMMODITY_EX>>::RemoveAll
	jmp Block5

 Block2:
	lea ecx,[esp+0x2C]
	push ecx
	push 1
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],3
	call ZArray<ZRef<CS_COMMODITY>>::_Alloc
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+8]
	push edx
	call ZRef<CS_COMMODITY>::op_assign_ptr
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx+0xC]
	mov dword ptr [eax],edx

 Block4:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	push 0
	lea eax,[esp+0xC]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CConfirmPurchaseDlg::Confirm_0
	add esp,0x14
	lea ecx,[esp+8]
	mov esi,eax
	mov byte ptr [esp+0x18],1
	call ZArray<ZRef<CS_COMMODITY>>::RemoveAll

 Block5:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block11

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov ecx,dword ptr [esp+0x30]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CConfirmPurchaseDlg::CConfirmPurchaseDlg
_SUB_EXCEPTION_HANDLER(8A940)
__SUB_CLASS_THIS(0008A940, __thiscall, 145648,  CConfirmPurchaseDlg, void, NakedParam<ZXString<char>>, long, unsigned long, ZArray<ZRef<CS_COMMODITY> >&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_8A940
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
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CConfirmPurchaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConfirmPurchaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConfirmPurchaseDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],ebx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],ecx
	mov eax,dword ptr [edx]
	cmp eax,ebx
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea ecx,[esi+0xA4]
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [ecx],ebx
	mov dword ptr [esi+0xAC],ebx
	mov dword ptr [esi+0xB4],ebx
	mov dword ptr [esi+0xBC],ebx
	mov dword ptr [esi+0xC4],ebx
	mov dword ptr [esi+0xCC],ebx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD8],ebx
	cmp dword ptr [esi+0x94],3
	mov byte ptr [esp+0x20],9
	je Block16

 Block4:
	mov eax,dword ptr [esi+0x9C]
	lea edx,[esp+0x34]
	push edx
	push eax
	call ZArray<ZRef<CS_COMMODITY_EX>>::_Alloc
	cmp dword ptr [esi+0x9C],ebx
	mov dword ptr [esp+0x30],ebx
	jle Block16

 Block5:
	jmp Block7

 Block7:
	push 0x80
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CS_COMMODITY_EX::_ctor_default
	mov dword ptr [esp+0x2C],eax
	jmp Block10

 Block9:
	mov dword ptr [esp+0x2C],ebx
	mov eax,ebx

 Block10:
	mov ebp,dword ptr [esp+0x30]
	mov edi,dword ptr [esi+0xA4]
	add ebp,ebp
	add ebp,ebp
	add ebp,ebp
	add edi,ebp
	mov byte ptr [esp+0x20],9
	cmp eax,ebx
	je Block12

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov ebx,dword ptr [edi+4]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [edi+4],eax
	test ebx,ebx
	je Block15

 Block13:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block14:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [edx+ebp+4]
	mov ebp,dword ptr [ecx+ebp+4]
	push eax
	mov ecx,ebp
	call CS_COMMODITY::operator=
	mov eax,dword ptr [esp+0x30]
	inc eax
	xor ebx,ebx
	cmp eax,dword ptr [esi+0x9C]
	mov dword ptr [esp+0x30],eax
	jl Block7

 Block16:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea edi,[esi+0x90]
	push edi
	call separate_string_by_line
	mov edi,dword ptr [edi]
	add esp,8
	cmp edi,ebx
	jne Block18

 Block17:
	xor eax,eax
	jmp Block19

 Block18:
	mov eax,dword ptr [edi-4]

 Block19:
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov dword ptr [esp+0x34],ecx
	fild dword ptr [esp+0x34]
	test ecx,ecx
	jge Block21

 Block20:
	fadd qword ptr [__real_41f0000000000000]

 Block21:
	fdiv qword ptr [__real_4033000000000000]
	sub esp,8
	fstp qword ptr [esp]
	call _ceil
	add esp,8
	call __ftol2_sse
	push ebx
	push 1
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xA0],eax
	call CDialog::CreateDlg_1
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x14
}
}
// _ZtlSecureFuse_short_
__SUB(0007D510, __cdecl, 145933,  short, const short*, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	lea ecx,[edi+2]
	lea ebp,[esp+0x18]
	sub edi,ecx
	mov esi,0xBAADF00D
	sub ebp,ecx
	mov dword ptr [esp+0x10],2

 Block1:
	movzx edx,byte ptr [ecx]
	movzx eax,byte ptr [edi+ecx]
	mov bl,dl
	xor bl,al
	xor eax,esi
	ror eax,5
	mov byte ptr [ecx+ebp],bl
	add eax,edx
	inc ecx
	sub dword ptr [esp+0x10],1
	mov esi,eax
	jne Block1

 Block2:
	cmp esi,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	je Block4

 Block3:
	push offset ZException::THROW_INFO
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x10],5
	call _CxxThrowException

 Block4:
	mov ax,word ptr [esp+8]
	pop ecx
	ret
}
}
// CCSWnd_ItemSearch::OnCreate
_SUB_EXCEPTION_HANDLER(C8980)
__SUB_CLASS_THIS(000C8980, __thiscall, 48721,  CCSWnd_ItemSearch, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C8980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+0x7C]
	xor ebx,ebx
	mov dword ptr [edi+0x8C],eax
	mov dword ptr [ebp+0x54],ebx
	mov dword ptr [ebp+0x48],1
	mov dword ptr [ebp+0x4C],ebx
	mov dword ptr [ebp+0x50],ebx
	lea ecx,[ebp+0x6C]
	push 0x12FA
	push ecx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],1
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],bl
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
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block13

 Block6:
	add eax,8
	cmp eax,ebx
	je Block13

 Block7:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block9

 Block8:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [edi+0x88]
	mov dword ptr [edi+0x88],esi
	mov dword ptr [ebp+0x24],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[ebp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x48]
	push edx
	push ebx
	push ebx
	push ebx
	push 0x3E8
	push edi
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x28]
	push ecx
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block12:
	push eax
	call _com_issue_error

 Block13:
	xor esi,esi
	jmp Block9

 Block14:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	push 0
	push 0
	lea edx,[ebp+0x28]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,4
	push offset _S_UICASHSHOPIMGCSI
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1C],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x38],si
	jne Block28

 Block26:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x28],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov esi,dword ptr [ebp+0x64]
	xor ebx,ebx
	cmp esi,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x6C]
	push eax
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call ecx
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [ebp+0x6C]
	lea edx,[ebp+0x63]
	push edx
	push 1
	lea ecx,[edi+0x80]
	push eax
	mov dword ptr [ebp+0x5C],ecx
	call ZArray<tagPOINT>::_Realloc
	nop

 Block38:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x6C]
	push edx
	push esi
	mov dword ptr [ebp+0x6C],0
	call eax
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	cmp ebx,dword ptr [ebp+0x6C]
	jae Block58

 Block41:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0xB
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	je Block44

 Block42:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x58]
	mov esi,ecx
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	jge Block44

 Block43:
	cmp eax,0x80004002
	jne Block12

 Block44:
	mov edi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x10],di
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block17

 Block49:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp],di
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	push 0
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push offset _S_1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x11
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x2C],8
	mov edi,eax
	mov byte ptr [ebp-4],0xE
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [ecx+ebx*8],edx
	mov eax,dword ptr [eax]
	mov dword ptr [eax+ebx*8+4],edi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call edx
	mov esi,dword ptr [ebp+0x64]
	inc ebx
	jmp Block38

 Block58:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x54]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	lea esp,[ebp-0x3C]
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
}
}
