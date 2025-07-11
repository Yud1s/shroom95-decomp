#include "regen.hpp"
// TrunkDlg.ipp
#include "TrunkDlg.hpp"

// CTrunkDlg::SendPutMoneyRequest
_SUB_EXCEPTION_HANDLER(3689E0)
__SUB_CLASS_THIS0(003689E0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3689E0
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
	mov dword ptr [esp+0x14],ecx
	xor ebp,ebp
	cmp dword ptr [ecx+0xE8],ebp
	jne Block11

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block6

 Block2:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	mov dword ptr [esp+0x20],ebp

 Block6:
	lea ecx,[esp+0x18]
	push 0x372
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov edx,dword ptr [esi+0xBD]
	push edx
	lea edi,[esi+0xB5]
	push edi
	mov dword ptr [esp+0x44],ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esi+0xBD]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebx]
	add esp,0x10
	push ebp
	mov ebp,dword ptr [esp+0x18]
	push eax
	push ebx
	mov ecx,ebp
	call CTrunkDlg::AskItemCount
	mov ebx,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	test ebx,ebx
	jle Block11

 Block9:
	mov ecx,dword ptr [esi+0xBD]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp ebx,eax
	jg Block11

 Block10:
	push 0x43
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	mov esi,1
	push 7
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x40],esi
	call COutPacket::Encode1
	neg ebx
	push ebx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov dword ptr [ebp+0xE8],esi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block11:
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
// CTrunkDlg::CTrunkDlg
_SUB_EXCEPTION_HANDLER(36A050)
__SUB_CLASS_THIS0(0036A050, __thiscall, 88202,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36A050
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
	int 3// TODO: 	mov dword ptr [esi],offset CTrunkDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTrunkDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTrunkDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x18],0xC
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGTR__10
	mov ecx,esi
	mov byte ptr [esp+0x28],0xE
	call CDialog::CreateDlg_2
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
// CTrunkDlg::ITEM::~ITEM
_SUB_EXCEPTION_HANDLER(367500)
__SUB_CLASS_THIS0(00367500, __thiscall, 88243,  CTrunkDlg::ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367500
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
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x18]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x18],0

 Block5:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTrunkDlg::AskItemCount
_SUB_EXCEPTION_HANDLER(3673A0)
__SUB_CLASS_THIS(003673A0, __thiscall, 88224,  CTrunkDlg, long, const char*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3673A0
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
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	lea edi,[eax+8]
	test edi,edi
	je Block11

 Block3:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x18],edi
	test edi,edi
	je Block5

 Block4:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 1
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ebx],0
	test edx,edx
	je Block9

 Block6:
	mov eax,edx
	lea esi,[eax+1]
	mov edi,edi

 Block7:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block7

 Block8:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block9:
	push 0
	push 2
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	push 0
	push 0xA
	push 0
	push ecx
	push 1
	push edx
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,1
	jne Block12

 Block10:
	mov edi,dword ptr [edi+0xF4]
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 0xC

 Block11:
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	jmp Block5

 Block12:
	test edi,edi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// CTrunkDlg::OnCreate
_SUB_EXCEPTION_HANDLER(368C00)
__SUB_CLASS_THIS(00368C00, __thiscall, 88207,  CTrunkDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_368C00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x2C],ebx
	xor edi,edi
	push edi
	push edi
	lea esi,[ebx+0xB40]
	push ebx
	mov ecx,esi
	call CLayoutMan::Init
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x5C]
	push edx
	mov dword ptr [ebp-4],edi
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push edi
	push edi
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTR__9
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0xCC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp+0x5C],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x5C],ax
	mov eax,dword ptr [ebp+0x64]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[ebp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x48]
	push eax
	mov dword ptr [ebp-4],4
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push edi
	push edi
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTR__8
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0xD0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],5
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],4
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x5C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x5C],ax
	mov eax,dword ptr [ebp+0x64]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push edi
	push edi
	push edi
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGTR__7
	lea edx,[ebp+0x64]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block44

 Block43:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block44:
	push edi
	push edi
	push edi
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGTR__6
	lea eax,[ebp+0x64]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block46

 Block45:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block46:
	push edi
	push edi
	push edi
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGTR__5
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block48

 Block47:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	push edi
	push edi
	push edi
	push 2
	push offset _S_UIUIWINDOW2IMGTR__4
	lea edx,[ebp+0x64]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block50

 Block49:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block50:
	push edi
	push edi
	push edi
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGTR__3
	lea eax,[ebp+0x64]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block52

 Block51:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block52:
	push edi
	push edi
	push edi
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGTR__2
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x68],edi
	je Block54

 Block53:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block54:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x34],edi
	mov dword ptr [ebp-0x30],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov dword ptr [ebp-4],8
	cmp eax,edi
	je Block56

 Block55:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block65

 Block58:
	add eax,8
	cmp eax,edi
	je Block65

 Block59:
	lea esi,[eax-8]
	cmp esi,edi
	je Block61

 Block60:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block61:
	mov eax,dword ptr [ebx+0x98]
	mov dword ptr [ebx+0x98],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block63

 Block62:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block63:
	mov ecx,dword ptr [ebx+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x34]
	push edx
	push 0x13
	push 0xD6
	push 0x68
	push 0xF1
	push 8
	push 0x3ED
	push ebx
	call eax
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push ecx
	call ebx
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block66

 Block64:
	push eax
	call _com_issue_error

 Block65:
	xor esi,esi
	jmp Block61

 Block66:
	lea eax,[ebp+0x48]
	push eax
	mov dword ptr [ebp-4],9
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	push edi
	push edi
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTR__1
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block73

 Block71:
	cmp eax,0x80004002
	je Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0xE
	jne Block80

 Block74:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block76

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block76:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block77:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xF
	jne Block81

 Block78:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,edi
	je Block82

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block80:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x54]
	push eax
	call esi
	jmp Block77

 Block81:
	lea edx,[ebp+0x48]
	push edx
	call esi

 Block82:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x10
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block86:
	lea edx,[ebp+0x30]
	push edx
	call ebx
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x11
	call ebx
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	push edi
	push edi
	lea eax,[ebp+0x30]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIUIWINDOW2IMGTR
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	cmp dword ptr [_D_G_RM],edi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[ebp-0x44]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ebx,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x44],bx
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x44]
	push ecx
	call esi

 Block99:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x2C],bx
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block103:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x30],bx
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp+0x30]
	push edx
	call esi

 Block107:
	mov dword ptr [ebp+0x40],edi
	jmp Block109

 Block109:
	mov edi,dword ptr [ebp+0x44]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x24],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x19
	test edi,edi
	je Block5

 Block110:
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block115

 Block111:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp]
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block115

 Block114:
	cmp edi,0x80004002
	jne Block173

 Block115:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [ebp+0x40]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x1B
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block5

 Block116:
	lea edx,[ebp+4]
	push edx
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x24],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block121

 Block117:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
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
	and ebx,dword ptr [ebp+0x58]
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block121

 Block120:
	cmp edi,0x80004002
	jne Block173

 Block121:
	mov esi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [esi+0x98]
	mov byte ptr [ebp-4],0x1E
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+4],di
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x14],di
	jne Block128

 Block126:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov eax,dword ptr [ebp+0x40]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x40],eax
	jl Block109

 Block130:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block132

 Block131:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block133

 Block132:
	xor eax,eax

 Block133:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block137

 Block134:
	add eax,8
	je Block137

 Block135:
	lea edi,[eax-8]
	test edi,edi
	je Block138

 Block136:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[edi+0xC]
	push ecx
	call ebx
	jmp Block139

 Block137:
	xor edi,edi

 Block138:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block139:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	test eax,eax
	je Block143

 Block140:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block143

 Block141:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block143

 Block142:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block143:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCC
	push 0x5C
	push 0xD6
	push 8
	push 1
	push 0x3EE
	push esi
	call eax
	mov eax,dword ptr [esi+0xA0]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0xCF
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block145

 Block144:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block146

 Block145:
	xor eax,eax

 Block146:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block163

 Block147:
	add eax,8
	je Block163

 Block148:
	lea edi,[eax-8]
	test edi,edi
	je Block150

 Block149:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block150:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	test eax,eax
	je Block154

 Block151:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block154

 Block152:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block154

 Block153:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block154:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xA2
	push 0x86
	push 0x1BD
	push 8
	push 1
	push 0x3EF
	push esi
	call eax
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[ebp+0x2C]
	push 0x31
	push ecx
	mov dword ptr [eax+0x34],0x92
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC4]
	add esp,8
	cmp edi,eax
	je Block159

 Block155:
	mov dword ptr [esi+0xC4],eax
	test eax,eax
	je Block157

 Block156:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block157:
	test edi,edi
	je Block159

 Block158:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block159:
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+4]
	push eax
	call edi
	lea ecx,[ebp+4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block162:
	push eax
	call _com_issue_error

 Block163:
	xor edi,edi
	jmp Block150

 Block164:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x21
	call edi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	push 0
	push 0
	lea ecx,[ebp+4]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x23
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],0x22
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block174

 Block169:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi+0xC8]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	test eax,eax
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block171:
	mov dword ptr [esi+0xC8],ebx
	test edi,edi
	jge Block176

 Block172:
	cmp edi,0x80004002
	je Block176

 Block173:
	push edi
	call _com_issue_error

 Block174:
	mov eax,dword ptr [esi+0xC8]
	test eax,eax
	je Block176

 Block175:
	mov dword ptr [esi+0xC8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],0x22
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x14],di
	jne Block183

 Block181:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+4],di
	jne Block187

 Block185:
	mov eax,dword ptr [ebp+0xC]
	xor ecx,ecx
	mov word ptr [ebp+4],cx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov eax,dword ptr [ebp+0x44]
	or edi,0xFFFFFFFF
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xE8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x10
	call edx
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],edi
	call edx
	lea esp,[ebp-0x74]
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
// CTrunkDlg::~CTrunkDlg
_SUB_EXCEPTION_HANDLER(36A1A0)
__SUB_CLASS_THIS0(0036A1A0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36A1A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CTrunkDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTrunkDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTrunkDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB40]
	mov dword ptr [esp+0x20],0xD
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x20],0xC
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xF4]
	xor ebx,ebx
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebx
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block6:
	mov dword ptr [esi+0xF0],ebx

 Block7:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x20],9
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xCC]
	mov byte ptr [esp+0x20],8
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xC8]
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xC4]
	mov byte ptr [esp+0x20],6
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x20],5
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x20],4
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x20],3
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x20],bl
	cmp dword ptr [edi+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
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
// CTrunkDlg::DrawPutItem
_SUB_EXCEPTION_HANDLER(367DC0)
__SUB_CLASS_THIS(00367DC0, __thiscall, 88221,  CTrunkDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367DC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0xA8]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov edx,eax
	add ecx,ecx
	mov dword ptr [esp+0x70],0
	mov dword ptr [esp+0x28],edx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x14],0xA9

 Block1:
	mov eax,dword ptr [ebp+0xBC]
	test eax,eax
	je Block65

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block65

 Block3:
	mov edi,eax
	add edi,ecx
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x70],1
	cmp dword ptr [ebp+0xD8],edx
	jne Block12

 Block4:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],edx
	mov ecx,dword ptr [esp+0x78]
	mov esi,dword ptr [ebp+0xCC]
	mov byte ptr [esp+0x70],2
	test ecx,ecx
	je Block69

 Block5:
	mov ebp,dword ptr [esp+0x38]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x24]
	push esi
	add eax,0xFFFFFFDE
	push eax
	push 0x116
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],1
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov ebp,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x20]

 Block12:
	mov eax,dword ptr [edi+0x18]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
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
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov esi,eax
	mov eax,dword ptr [edx+0x18]
	call eax
	cmp eax,1
	jne Block19

 Block15:
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block19

 Block16:
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x78]
	push ebx
	push 0x113
	lea ecx,[ebx-0x20]
	push ecx
	push 0xF3
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x38],esp
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
	jmp Block20

 Block19:
	mov ebx,dword ptr [esp+0x14]

 Block20:
	mov ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	push 2
	push 0
	push esi
	push 0
	push 0
	push 0
	call edx
	push eax
	mov eax,dword ptr [edi]
	push ebx
	push 0xF3
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xA4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block26

 Block23:
	cmp dword ptr [esi+4],0
	jne Block25

 Block24:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block25:
	mov ecx,dword ptr [esi+4]
	jmp Block27

 Block26:
	xor ecx,ecx

 Block27:
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	test ecx,ecx
	je Block31

 Block28:
	mov eax,ecx
	lea esi,[eax+1]

 Block29:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block29

 Block30:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x20]

 Block31:
	xor edx,edx
	mov dword ptr [esp+0x30],edx
	mov esi,dword ptr [edi+0xC]
	mov byte ptr [esp+0x70],4
	cmp esi,edx
	je Block35

 Block32:
	cmp dword ptr [esi+4],edx
	jne Block34

 Block33:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block34:
	mov edx,dword ptr [esi+4]

 Block35:
	mov dword ptr [esp+0x18],0
	test edx,edx
	je Block39

 Block36:
	mov eax,edx
	lea esi,[eax+1]

 Block37:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block37

 Block38:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer

 Block39:
	mov eax,dword ptr [ebp+0xC4]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x78],5
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x58]
	push ecx
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block70

 Block42:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x74],6
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block70

 Block43:
	mov ecx,dword ptr [esp+0x78]
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x4C]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x84],7
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x80],8
	test ecx,ecx
	je Block69

 Block44:
	mov eax,dword ptr [esp+0x24]
	add eax,0xFFFFFFDF
	push eax
	push 0x119
	mov byte ptr [esp+0x88],7
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x70],6
	cmp word ptr [esp+0x48],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x70],5
	cmp word ptr [esp+0x58],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov ecx,dword ptr [edi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block55

 Block53:
	cmp eax,3
	je Block55

 Block54:
	cmp eax,4
	jne Block60

 Block55:
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xC8]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	mov eax,dword ptr [esp+0x1C]
	add eax,0xFFFFFFF2
	push esi
	push eax
	push 0xF1
	push ecx
	mov ecx,dword ptr [esp+0x90]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block59:
	call draw_number_by_image
	add esp,0x18

 Block60:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],4
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov byte ptr [esp+0x70],1
	test ebx,ebx
	je Block64

 Block63:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov ecx,dword ptr [esp+0x24]

 Block65:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x28]
	add eax,0x2A
	add ecx,0x1C
	inc edx
	cmp eax,0x151
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],edx
	jl Block1

 Block66:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	push eax
	call _com_issue_error
}
}
// CTrunkDlg::OnMouseMove
__SUB_CLASS_THIS(00366800, __thiscall, 88211,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	push edi
	push ebx
	lea ecx,[esi-4]
	call CTrunkDlg::GetItemIndexFromPoint
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esi+0xF4]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block2:
	cmp dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x14]
	je Block4

 Block3:
	lea edx,[eax*8]
	sub edx,eax
	mov eax,dword ptr [esi+0xB4]
	lea eax,[eax+edx*4+0x14]
	jmp Block5

 Block4:
	mov edx,dword ptr [esi+0xB8]
	lea ecx,[eax*8]
	sub ecx,eax
	lea eax,[edx+ecx*4+0x14]

 Block5:
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
	lea ecx,[esi+0xF4]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8
}
}
// CTrunkDlg::ResetInfo
__SUB_CLASS_THIS0(0036A7A0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esi+0xBC]
	push eax
	push 0
	call CTrunkDlg::SetPutItems
	mov ecx,esi
	call CTrunkDlg::SetScrollBar
	mov ecx,esi
	call CTrunkDlg::SetAvatar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CTrunkDlg::SetPutItems
_SUB_EXCEPTION_HANDLER(369AB0)
__SUB_CLASS_THIS(00369AB0, __thiscall, 88220,  CTrunkDlg, void, long, ZArray<CTrunkDlg::ITEM>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_369AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x20],ecx
	cmp dword ptr [ebp+8],0
	jne Block8

 Block1:
	mov eax,dword ptr [ecx+0x98]
	mov eax,dword ptr [eax+0x44]
	inc eax
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block7

 Block2:
	cmp eax,3
	jne Block4

 Block3:
	mov eax,4
	mov dword ptr [ebp+8],eax
	jmp Block8

 Block4:
	cmp eax,4
	jne Block6

 Block5:
	mov eax,3

 Block6:
	mov dword ptr [ebp+8],eax
	jmp Block8

 Block7:
	mov dword ptr [ebp+8],0xFFFFFFFF

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x3C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
	je Block13

 Block9:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block12

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block12:
	mov dword ptr [ebp-0x38],0

 Block13:
	mov ecx,dword ptr [ebp+0xC]
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	mov ebx,dword ptr [ebp+8]
	mov edi,1
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp eax,edi
	jl Block47

 Block14:
	push edi
	push ebx
	lea eax,[ebp-0x28]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block19

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	mov ecx,dword ptr [ebp-0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x24]
	test ecx,ecx
	je Block18

 Block17:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block18:
	mov dword ptr [ebp-0x24],0

 Block19:
	test edi,edi
	je Block45

 Block20:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block45

 Block21:
	mov ecx,dword ptr [edi+0x18]
	or ecx,dword ptr [edi+0x1C]
	jne Block45

 Block22:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block45

 Block24:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block45

 Block26:
	mov ecx,dword ptr [ebp+0xC]
	push 0xFFFFFFFF
	call ZArray<CTrunkDlg::ITEM>::InsertBefore
	mov ecx,ebx
	mov esi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [esi],eax
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	push edi
	lea ecx,[esi+0x14]
	mov dword ptr [esi+4],eax
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov ecx,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x30]
	push edx
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov dword ptr [ebp-4],0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi]
	mov edi,esp
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],1
	call MultiByteToWideChar
	push edi
	lea ecx,[ebp-0x14]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp-0x14]
	lea edi,[esi+0xC]
	lea edx,[ebp-0x14]
	cmp edi,edx
	je Block31

 Block27:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block29

 Block28:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block29:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block33

 Block30:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	test ebx,ebx
	je Block33

 Block32:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],0

 Block33:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esi]
	push 0
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x34]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block42

 Block38:
	mov dword ptr [esi+0x10],eax
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block40:
	test edi,edi
	je Block42

 Block41:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block42:
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov esi,dword ptr [ebp-0x1C]

 Block45:
	mov edi,dword ptr [ebp-0x18]
	mov ebx,dword ptr [ebp+8]
	inc edi
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp edi,eax
	jle Block14

 Block46:
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ecx+0xD8],0xFFFFFFFF
	jmp Block48

 Block47:
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [edx+0xD8],0xFFFFFFFF

 Block48:
	lea esp,[ebp-0x4C]
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
	ret 8
}
}
// CTrunkDlg::SetAvatar
_SUB_EXCEPTION_HANDLER(3675A0)
__SUB_CLASS_THIS0(003675A0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3675A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x220
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x22C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0xEC]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x4B
	push 0x120
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x250],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x254],1
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x47]
	mov byte ptr [esp+0x254],3
	call AvatarLook::_ctor_0
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x250],4
	push 5
	push eax
	mov byte ptr [esp+0x258],7
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	int 3// TODO: 	mov dword ptr [esp+0x27],offset ZRefCounted::`vftable'
	mov byte ptr [esp+0x234],5
	test eax,eax
	je Block10

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x14],0

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x234],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [esp+0x22C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x22C
	ret
}
}
// CTrunkDlg::SetScrollBar
__SUB_CLASS_THIS0(003664D0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xDC]
	cmp eax,5
	jle Block2

 Block1:
	add eax,0xFFFFFFFC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [esi+0xA0]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xBC]
	test eax,eax
	je Block8

 Block4:
	cmp dword ptr [eax-4],4
	jbe Block8

 Block5:
	test eax,eax
	jne Block7

 Block6:
	mov ecx,dword ptr [esi+0xA8]
	mov eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block7:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xA8]
	add eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block8:
	mov ecx,dword ptr [esi+0xA8]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CTrunkDlg::SendSortItemRequest
_SUB_EXCEPTION_HANDLER(367310)
__SUB_CLASS_THIS0(00367310, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xE8],0
	jne Block2

 Block1:
	push 0x43
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0xE8],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CTrunkDlg::SetGetItems
_SUB_EXCEPTION_HANDLER(36A390)
__SUB_CLASS_THIS(0036A390, __thiscall, 88205,  CTrunkDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36A390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
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
	mov dword ptr [ebp-0x1C],esi
	mov edi,dword ptr [ebp+8]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push 8
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0xDC],eax
	call CInPacket::DecodeBuffer
	mov eax,dword ptr [ebp-0x58]
	and eax,2
	xor ecx,ecx
	xor ebx,ebx
	or eax,ecx
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0xE0],eax

 Block2:
	mov dword ptr [ebp-0x14],ebx
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],ebx
	add esi,0xB8
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	mov edx,dword ptr [esi]
	mov eax,1
	mov dword ptr [ebp-0x14],edx
	mov dword ptr [esi],ebx
	mov dword ptr [ebp-0x18],eax
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp+8]

 Block4:
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block11

 Block5:
	dec eax
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9
cmp EAX, 4
je Block10


 Block6:
	mov eax,4
	jmp Block12

 Block7:
	mov eax,8
	jmp Block12

 Block8:
	mov eax,0x10
	jmp Block12

 Block9:
	mov eax,0x20
	jmp Block12

 Block10:
	mov eax,0x40
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	and eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	and ecx,dword ptr [ebp-0x54]
	or eax,ecx
	jne Block20

 Block13:
	xor edi,edi
	mov esi,edx
	jmp Block15

 Block15:
	cmp edx,ebx
	je Block62

 Block16:
	cmp edi,dword ptr [edx-4]
	jae Block62

 Block17:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,dword ptr [ebp-0x18]
	jne Block19

 Block18:
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0xFFFFFFFF
	add ecx,0xB8
	call ZArray<CTrunkDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CTrunkDlg::ITEM::operator=

 Block19:
	mov edx,dword ptr [ebp-0x14]
	inc edi
	add esi,0x1C
	jmp Block15

 Block20:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	mov dword ptr [ebp-0x5C],eax
	mov dword ptr [ebp-0x20],ebx
	jle Block61

 Block21:
	mov dword ptr [ebp-0x30],ebx
	mov dword ptr [ebp-0x2C],ebx
	mov dword ptr [ebp-0x24],ebx
	mov ecx,dword ptr [ebp+8]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],1
	call GW_ItemSlotBase::Decode
	add esp,8
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,4
	push eax
	call edi

 Block23:
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x24]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp-0x24]
	cmp ecx,ebx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [ebp-0x24],ebx

 Block28:
	mov eax,dword ptr [ebp-0x44]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebp-0x24],ecx
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block33

 Block29:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	mov edx,dword ptr [ebp-0x44]
	add edx,4
	push edx
	call edi
	mov ecx,dword ptr [ebp-0x44]
	cmp ecx,ebx
	je Block32

 Block31:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block32:
	mov dword ptr [ebp-0x44],ebx

 Block33:
	mov ecx,dword ptr [ebp-0x24]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x3C],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,dword ptr [ebp-0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov dword ptr [ebp-0x38],eax
	mov eax,dword ptr [ebp-0x20]
	lea edx,[ebp-0x50]
	push edx
	mov dword ptr [ebp-0x34],eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x3C]
	mov esi,esp
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp-0x40]
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x30]
	cmp eax,ebx
	je Block41

 Block34:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block41

 Block35:
	cmp esi,ebx
	je Block41

 Block36:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block41:
	mov edi,dword ptr [ebp-0x40]
	mov dword ptr [ebp-0x30],edi
	cmp edi,ebx
	je Block49

 Block42:
	lea esi,[edi+8]
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block48

 Block43:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block47

 Block46:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block48:
	mov dword ptr [ebp-0x40],ebx

 Block49:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov edx,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push 1
	push edx
	lea eax,[ebp-0x60]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x2C]
	cmp ecx,eax
	je Block58

 Block54:
	mov esi,ecx
	mov dword ptr [ebp-0x2C],eax
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	cmp esi,ebx
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block58:
	mov eax,dword ptr [ebp-0x60]
	cmp eax,ebx
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	push 0xFFFFFFFF
	add ecx,0xB8
	call ZArray<CTrunkDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CTrunkDlg::ITEM::operator=
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	call CTrunkDlg::ITEM::~ITEM
	mov eax,dword ptr [ebp-0x20]
	inc eax
	cmp eax,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-0x20],eax
	jl Block21

 Block61:
	mov edx,dword ptr [ebp-0x14]

 Block62:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	cmp eax,5
	mov dword ptr [ebp-0x18],eax
	jle Block3

 Block63:
	mov edx,dword ptr [ebp-0x1C]
	or eax,0xFFFFFFFF
	lea ecx,[ebp-0x14]
	mov dword ptr [edx+0xD4],eax
	mov dword ptr [ebp-4],eax
	call ZArray<CTrunkDlg::ITEM>::RemoveAll
	lea esp,[ebp-0x70]
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
// CTrunkDlg::SetNPC
_SUB_EXCEPTION_HANDLER(366950)
__SUB_CLASS_THIS0(00366950, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_366950
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
	mov ebp,ecx
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov dword ptr [esp+0x98],edi
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x98],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xF4]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+0xF4],eax
	cmp eax,edi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,edi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x98],0
	cmp word ptr [esp+0x1C],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block19:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x98],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,edi
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [ebp+0xF4]
	mov byte ptr [esp+0x98],3
	cmp esi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
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
	cmp eax,edi
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x98],bl
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x2C]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x9C],ebx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp+0xF4]
	mov byte ptr [esp+0x98],5
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x4C
	push 0x35
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x2C],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov esi,dword ptr [ebp+0xF4]
	cmp esi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x98],ebx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [ebp+0xF4]
	mov byte ptr [esp+0x98],7
	cmp esi,edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
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
	cmp eax,edi
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x98],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [ebp+0xF4]
	cmp esi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,edi
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebp+0xF4]
	cmp esi,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	cmp eax,edi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [ebp+0xAC]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	mov ecx,eax
	add esp,4
	mov dword ptr [esp+0x18],ecx
	int 3// TODO: 	mov dword ptr [esp+0x7C],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	mov dword ptr [esp+0x8C],edi
	mov eax,dword ptr [ecx+0x34]
	mov esi,8
	mov dword ptr [esp+0x98],esi
	cmp eax,edi
	jne Block71

 Block70:
	mov eax,1

 Block71:
	push 0xFFFFFFFE
	lea edx,[esp+0x80]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadNpcAction
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0xF4]
	mov byte ptr [esp+0x98],9
	cmp ecx,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x2C],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x88]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block111

 Block80:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x5C]
	push eax
	call ebx
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block81:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x9C],0xA
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block82:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x9C],0xB
	call ebx
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block83:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x9C],0xC
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block84:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	mov ecx,dword ptr [ebp+0xF4]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x98],0xE
	cmp ecx,edi
	je Block3

 Block85:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push esi
	lea edx,[esp+0x84]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],8
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,edi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x98],0xD
	jne Block96

 Block90:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block92

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block92:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block93:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x98],0xC
	jne Block97

 Block94:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block98

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block96:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x2C]
	push eax
	call esi
	jmp Block93

 Block97:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block98:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x98],0xB
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block102:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x98],0xA
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block106:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x98],8
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block110:
	cmp dword ptr [esp+0x14],edi
	jne Block80

 Block111:
	lea eax,[esp+0x4C]
	push eax
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea edx,[esp+0x5C]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x9C],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov ecx,dword ptr [ebp+0xF4]
	mov byte ptr [esp+0x98],0x10
	cmp ecx,edi
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x5C],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x4C],si
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,edi
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax+0x38]
	mov dword ptr [ebp+0xB0],edx
	mov eax,dword ptr [eax+0x3C]
	lea ecx,[esp+0x7C]
	mov dword ptr [ebp+0xB4],eax
	mov dword ptr [esp+0x98],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x7C],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
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
// CTrunkDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(00366540, __thiscall, 88223,  CTrunkDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xA0]
	mov ecx,dword ptr [eax+0x38]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov edi,0x5D
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp+0xB8]
	test eax,eax
	je Block12

 Block3:
	mov edx,dword ptr [esp+0x10]
	cmp edx,dword ptr [eax-4]
	jae Block12

 Block4:
	mov esi,dword ptr [ebp+0xCC]
	test esi,esi
	je Block24

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov esi,dword ptr [ebp+0xCC]
	mov ebx,dword ptr [esp+0x14]
	test esi,esi
	je Block24

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[edi+ebx]
	push eax
	add ecx,0xA
	push ecx
	push edi
	push 0xA
	lea edx,[esp+0x2C]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	lea eax,[esp+0x24]
	push eax
	call PtInRect
	test eax,eax
	jne Block25

 Block11:
	inc dword ptr [esp+0x10]
	add edi,0x2A
	cmp edi,0x12F
	jl Block2

 Block12:
	mov ecx,dword ptr [ebp+0xA8]
	mov edx,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x10],edx
	mov edi,0x87

 Block13:
	mov eax,dword ptr [ebp+0xBC]
	test eax,eax
	je Block23

 Block14:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,dword ptr [eax-4]
	jae Block23

 Block15:
	mov esi,dword ptr [ebp+0xCC]
	test esi,esi
	je Block24

 Block16:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov esi,dword ptr [ebp+0xCC]
	mov ebx,dword ptr [esp+0x18]
	test esi,esi
	je Block24

 Block19:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esp+0x14]
	lea edx,[edi+ebx]
	push edx
	add eax,0xF1
	push eax
	push edi
	push 0xF1
	lea ecx,[esp+0x2C]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	lea edx,[esp+0x24]
	push edx
	call PtInRect
	test eax,eax
	jne Block26

 Block22:
	inc dword ptr [esp+0x10]
	add edi,0x2A
	cmp edi,0x12F
	jl Block13

 Block23:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x1C
	ret 0x10

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x3C]
	pop edi
	pop esi
	mov dword ptr [ecx],1
	pop ebp
	mov dword ptr [edx],eax
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0x10

 Block26:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x10]
	pop edi
	pop esi
	mov dword ptr [eax],0
	pop ebp
	mov dword ptr [ecx],edx
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CTrunkDlg::SetRet
_SUB_EXCEPTION_HANDLER(367250)
__SUB_CLASS_THIS(00367250, __thiscall, 88206,  CTrunkDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x43
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [esi+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],0
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	je Block3

 Block2:
	mov ecx,esi
	call CWnd::Destroy

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CTrunkDlg::ClearToolTip
__SUB_CLASS_THIS0(0036A140, __thiscall, 88215,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xF4
	jmp  CUIToolTip::ClearToolTip
}
}
// CTrunkDlg::CmpPutItem
__SUB_CLASS_THIS0(00366770, __thiscall, 88225,  CTrunkDlg, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC0]
	push esi
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [ebx+0xBC]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	push eax
	mov ebp,eax
	push ecx
	sub ebp,ecx
	xor esi,esi
	call _zmin_long
	add esp,8
	test eax,eax
	jle Block11

 Block6:
	mov edi,dword ptr [ebx+0xC0]
	mov ecx,dword ptr [ebx+0xBC]
	lea edx,[edi+4]
	sub edi,ecx
	lea esp,[esp]

 Block7:
	mov ebx,dword ptr [edi+ecx]
	cmp ebx,dword ptr [ecx]
	jne Block13

 Block8:
	mov ebx,dword ptr [edx+4]
	cmp ebx,dword ptr [ecx+8]
	jne Block13

 Block9:
	mov ebx,dword ptr [edx]
	cmp ebx,dword ptr [ecx+4]
	jne Block13

 Block10:
	inc esi
	add edx,0x1C
	add ecx,0x1C
	cmp esi,eax
	jl Block7

 Block11:
	test ebp,ebp
	jne Block14

 Block12:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block13:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret

 Block14:
	mov eax,esi
	jg Block16

 Block15:
	lea eax,[esi-1]

 Block16:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CTrunkDlg::HitTest
__SUB_CLASS_THIS(003663F0, __thiscall, 88208,  CTrunkDlg, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0x40
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CTrunkDlg::OnPacket
_SUB_EXCEPTION_HANDLER(36A990)
__SUB(0036A990, __cdecl, 88226,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36A990
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
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	call CInPacket::Decode1
	movzx ebx,al
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CTrunkDlg::ms_RTTI_CTrunkDlg
	call edx
	mov esi,eax
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	neg esi
	sbb esi,esi
	and esi,eax
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	cmp ebx,0x15
	je Block9

 Block4:
	cmp ebx,0x16
	je Block9

 Block5:
	cmp esi,ebp
	je Block41

 Block6:
	cmp dword ptr [esi+0xE8],ebp
	jne Block8

 Block7:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block8:
	mov dword ptr [esi+0xE8],ebp
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]

 Block9:
	lea ecx,[ebx-9]
	cmp ecx,0xF
	ja Block38

 Block10:
	cmp ECX, 0
je Block18
cmp ECX, 1
je Block29
cmp ECX, 2
je Block31
cmp ECX, 3
je Block30
cmp ECX, 4
je Block28
cmp ECX, 5
je Block38
cmp ECX, 6
je Block28
cmp ECX, 7
je Block31
cmp ECX, 8
je Block32
cmp ECX, 9
je Block38
cmp ECX, 10
je Block28
cmp ECX, 11
je Block38
cmp ECX, 12
je Block38
cmp ECX, 13
je Block11
cmp ECX, 14
je Block33
cmp ECX, 15
je Block34


 Block11:
	cmp esi,ebp
	je Block13

 Block12:
	push 0x21000003
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x20]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x2C],edx
	call _CxxThrowException

 Block13:
	cmp eax,ebp
	jne Block41

 Block14:
	push 0xB54
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x30],ebp
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,eax
	call CTrunkDlg::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push edi
	mov ecx,eax
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call CTrunkDlg::SetTrunkDlg
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block18:
	mov eax,dword ptr [esi+0xE4]
	cmp eax,ebp
	jle Block41

 Block19:
	cmp eax,5
	jg Block41

 Block20:
	push eax
	call get_tab_from_item_typeindex
	add esp,4
	cmp eax,4
	ja Block23

 Block21:
	mov ecx,dword ptr [esi+0x98]
	cmp dword ptr [ecx+0x44],eax
	je Block23

 Block22:
	push eax
	call CCtrlTab::SetTab

 Block23:
	mov ebx,dword ptr [esi+0xA8]
	mov ebp,dword ptr [ebx+0x38]
	mov ecx,esi
	call CTrunkDlg::CmpPutItem
	mov edi,eax
	cmp edi,ebp
	jge Block25

 Block24:
	push edi
	mov ecx,ebx
	call CCtrlScrollBar::SetCurPos

 Block25:
	add ebp,4
	cmp edi,ebp
	jle Block27

 Block26:
	lea ecx,[edi-4]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	call CCtrlScrollBar::SetCurPos

 Block27:
	mov dword ptr [esi+0xD8],edi
	mov edi,dword ptr [esp+0x38]

 Block28:
	push edi
	mov ecx,esi
	call CTrunkDlg::SetGetItems
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block29:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x366
	push edx
	jmp Block40

 Block30:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x374
	push eax
	jmp Block40

 Block31:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A8B
	jmp Block39

 Block32:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x373
	push edx
	jmp Block40

 Block33:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x16ED
	push eax
	jmp Block40

 Block34:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	je Block37

 Block35:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [esp+0x48],1
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block37:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x369
	push eax
	jmp Block40

 Block38:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x369

 Block39:
	push ecx

 Block40:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block41:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CTrunkDlg::OnChildNotify
__SUB_CLASS_THIS(00366470, __thiscall, 88213,  CTrunkDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EE
	je Block5

 Block1:
	cmp eax,0x3EF
	je Block5

 Block2:
	cmp eax,0x3ED
	jne Block8

 Block3:
	cmp edx,0x1F4
	jne Block8

 Block4:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CTrunkDlg::OnTabChanged
	ret 0xC

 Block5:
	cmp edx,0x12C
	jb Block8

 Block6:
	cmp edx,0x130
	ja Block8

 Block7:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block8:
	cmp edx,0x64
	jne Block10

 Block9:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block10:
	ret 0xC
}
}
// CTrunkDlg::IsKindOf
__SUB_CLASS_THIS(0036A170, __thiscall, 88229,  CTrunkDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CTrunkDlg::ms_RTTI_CTrunkDlg
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
// CTrunkDlg::SendGetMoneyRequest
_SUB_EXCEPTION_HANDLER(3688E0)
__SUB_CLASS_THIS0(003688E0, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3688E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xE8],0
	jne Block6

 Block1:
	lea eax,[esp+0xC]
	push 0x371
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+0xE0]
	push eax
	push eax
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x34],0
	call CTrunkDlg::AskItemCount
	mov edi,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	test edi,edi
	jle Block6

 Block4:
	cmp edi,dword ptr [esi+0xE0]
	jg Block6

 Block5:
	push 0x43
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],1
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esi+0xE8],1
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block6:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CTrunkDlg::OnMouseEnter
__SUB_CLASS_THIS(00366440, __thiscall, 88212,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xF4]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CTrunkDlg::OnButtonClicked
__SUB_CLASS_THIS(0036A7D0, __thiscall, 88214,  CTrunkDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3E8]
	cmp edx,4
	ja Block8

 Block1:
	cmp EDX, 0
je Block2
cmp EDX, 1
je Block4
cmp EDX, 2
je Block5
cmp EDX, 3
je Block6
cmp EDX, 4
je Block7


 Block2:
	call CTrunkDlg::SendGetItemRequest

 Block3:
	ret 4

 Block4:
	call CTrunkDlg::SendPutItemRequest
	ret 4

 Block5:
	call CTrunkDlg::SendSortItemRequest
	ret 4

 Block6:
	call CTrunkDlg::SendGetMoneyRequest
	ret 4

 Block7:
	call CTrunkDlg::SendPutMoneyRequest
	ret 4

 Block8:
	cmp eax,1
	jne Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block10:
	cmp eax,2
	jne Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block12:
	cmp eax,8
	jne Block3

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx
}
}
// CTrunkDlg::OnMouseButton
__SUB_CLASS_THIS(0036A860, __thiscall, 88210,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block5

 Block1:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CTrunkDlg::GetItemIndexFromPoint
	test eax,eax
	je Block12

 Block2:
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xD0],ecx
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xD4],0xFFFFFFFF
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block4:
	mov edx,dword ptr [esp+0x18]
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xD0],0xFFFFFFFF
	mov dword ptr [esi+0xD4],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block5:
	cmp eax,0x203
	jne Block12

 Block6:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CTrunkDlg::GetItemIndexFromPoint
	test eax,eax
	je Block12

 Block7:
	cmp dword ptr [esp+0x14],0
	je Block10

 Block8:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [esi+0xD0]
	jne Block12

 Block9:
	mov ecx,edi
	call CTrunkDlg::SendGetItemRequest
	pop edi
	pop esi
	ret 0x10

 Block10:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [esi+0xD4]
	jne Block12

 Block11:
	mov ecx,edi
	call CTrunkDlg::SendPutItemRequest

 Block12:
	pop edi
	pop esi
	ret 0x10
}
}
// CTrunkDlg::SendPutItemRequest
_SUB_EXCEPTION_HANDLER(368570)
__SUB_CLASS_THIS0(00368570, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_368570
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
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xD8]
	xor edi,edi
	cmp eax,edi
	mov dword ptr [esp+0x28],edi
	jl Block31

 Block1:
	mov ecx,dword ptr [ebp+0xBC]
	cmp ecx,edi
	jne Block3

 Block2:
	xor ecx,ecx
	jmp Block4

 Block3:
	mov ecx,dword ptr [ecx-4]

 Block4:
	cmp eax,ecx
	jae Block31

 Block5:
	cmp dword ptr [ebp+0xE8],edi
	jne Block31

 Block6:
	mov edx,dword ptr [ebp+0xBC]
	lea ecx,[eax*8]
	sub ecx,eax
	mov ebx,dword ptr [edx+ecx*4+0x18]
	lea esi,[edx+ecx*4]
	mov dword ptr [esp+0x30],ebx
	cmp ebx,edi
	je Block8

 Block7:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esi]
	mov esi,dword ptr [esi+4]
	mov eax,0x431BDE83
	imul ecx
	mov dword ptr [esp+0x54],edi
	sar edx,0x12
	mov edi,edx
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	shr edi,0x1F
	push ebx
	add edi,edx
	call CItemInfo::IsSharableOnceItem_1
	mov ecx,ebx
	test eax,eax
	je Block13

 Block9:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x14]
	call eax
	push 0
	push 1
	push 0
	push 0
	push ecx
	test eax,eax
	je Block11

 Block10:
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x169E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block30

 Block11:
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x169D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block15

 Block12:
	jmp Block30

 Block13:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	call edx
	test eax,eax
	je Block15

 Block14:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1245
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block30

 Block15:
	push ebx
	mov dword ptr [esp+0x1C],1
	call is_treat_singly_1
	add esp,4
	test eax,eax
	jne Block20

 Block16:
	lea ecx,[esp+0x14]
	push 0x370
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push esi
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x60],1
	call CTrunkDlg::AskItemCount
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x54],0
	test ecx,ecx
	je Block18

 Block17:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x1C]
	add esp,4

 Block18:
	test eax,eax
	jle Block30

 Block19:
	cmp eax,esi
	jg Block30

 Block20:
	mov dword ptr [esp+0x14],0
	cmp dword ptr [ebp+0xB4],0
	mov byte ptr [esp+0x54],2
	jle Block22

 Block21:
	lea edx,[esp+0x20]
	push 0x36F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0xB4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x60],3
	call ZXString<char>::Format
	add esp,0xC
	jmp Block23

 Block22:
	lea eax,[esp+0x20]
	push 0x36E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x58],4
	call ZXString<char>::op_assign

 Block23:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block28

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	push edi
	lea edx,[esp+0x3C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	cmp dword ptr [eax+4],ebx
	lea ecx,[esp+0x34]
	setne bl
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test bl,bl
	jne Block28

 Block27:
	push 0x43
	lea ecx,[esp+0x40]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],5
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x40]
	call COutPacket::Encode2
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+0x40]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x18]
	push edx
	lea ecx,[esp+0x40]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x3C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x40]
	mov dword ptr [ebp+0xE8],1
	mov byte ptr [esp+0x54],2
	call ZArray<unsigned char>::RemoveAll

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block31:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CTrunkDlg::Draw
_SUB_EXCEPTION_HANDLER(369850)
__SUB_CLASS_THIS(00369850, __thiscall, 88209,  CTrunkDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_369850
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x30]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov dword ptr [esp+0x1C],0

 Block5:
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x30]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block7:
	mov ecx,edi
	call CTrunkDlg::DrawGetItem
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block9

 Block8:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block9:
	mov ecx,edi
	call CTrunkDlg::DrawPutItem
	mov eax,dword ptr [edi+0xE0]
	push 0xC1
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block11:
	mov ecx,edi
	call CTrunkDlg::DrawMoney
	mov eax,dword ptr [ebp+0xBD]
	push 0x1A8
	push eax
	add ebp,0xB5
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block13:
	mov ecx,edi
	call CTrunkDlg::DrawMoney
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block15

 Block14:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block15:
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
// CTrunkDlg::GetRTTI
__SUB_CLASS_THIS0(0036A150, __thiscall, 88228,  CTrunkDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CTrunkDlg::ms_RTTI_CTrunkDlg
	ret
}
}
// CTrunkDlg::SendGetItemRequest
_SUB_EXCEPTION_HANDLER(369E00)
__SUB_CLASS_THIS0(00369E00, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_369E00
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
	mov eax,dword ptr [esi+0xD4]
	test eax,eax
	jl Block19

 Block1:
	mov ecx,dword ptr [esi+0xB8]
	test ecx,ecx
	je Block3

 Block2:
	mov ecx,dword ptr [ecx-4]

 Block3:
	cmp eax,ecx
	jae Block19

 Block4:
	cmp dword ptr [esi+0xE8],0
	jne Block19

 Block5:
	mov edx,dword ptr [esi+0xB8]
	lea ecx,[eax*8]
	sub ecx,eax
	mov ebp,dword ptr [edx+ecx*4+0x18]
	lea ebx,[edx+ecx*4]
	mov ecx,dword ptr [ebx]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov dword ptr [esp+0x24],ebp
	test ebp,ebp
	je Block7

 Block6:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebp
	mov dword ptr [esp+0x40],0
	call eax
	test eax,eax
	je Block9

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1246
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block18

 Block9:
	mov dword ptr [esp+0x14],0
	cmp dword ptr [esi+0xB0],0
	mov byte ptr [esp+0x40],1
	jle Block11

 Block10:
	lea edx,[esp+0x18]
	push 0x36D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::Format
	add esp,0xC
	jmp Block12

 Block11:
	lea eax,[esp+0x18]
	push 0x36C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],3
	call ZXString<char>::op_assign

 Block12:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x40],1
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
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block16

 Block15:
	push 0x43
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],4
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	movzx eax,byte ptr [ebx+8]
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea edx,[esi+0xC0]
	push edx
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xE8],1
	mov dword ptr [esi+0xE4],edi
	call CTrunkDlg::SetPutItems
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],1
	call ZArray<unsigned char>::RemoveAll

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

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
// CTrunkDlg::OnTabChanged
__SUB_CLASS_THIS(00366430, __thiscall, 88206,  CTrunkDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x38]
	call edx
	ret 4
}
}
// CTrunkDlg::DrawMoney
_SUB_EXCEPTION_HANDLER(3682F0)
__SUB_CLASS_THIS(003682F0, __thiscall, 88222,  CTrunkDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3682F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x48]
	push 1
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x48],1
	call format_integer
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x14]
	push edx
	call esi
	lea eax,[esp+0x14]
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
	mov edx,dword ptr [esp+0xC]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x50]
	push 0x37
	push eax
	mov byte ptr [esp+0x4C],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x44],5
	call IWzFont::CalcTextWidth
	mov edi,dword ptr [esp+0x4C]
	sub edi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x40],6
	call esi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x50]
	push 0x38
	push edx
	mov byte ptr [esp+0x4C],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x18]
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],9
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x130
	push edi
	mov byte ptr [esp+0x54],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],7
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,8
	mov byte ptr [esp+0x3C],6
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret 0xC
}
}
// CTrunkDlg::DrawGetItem
_SUB_EXCEPTION_HANDLER(367710)
__SUB_CLASS_THIS(00367710, __thiscall, 88221,  CTrunkDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_367710
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
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [ebp+0xA0]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov edx,eax
	add ecx,ecx
	mov ebx,0x7F
	mov dword ptr [esp+0x88],0
	mov dword ptr [esp+0x24],edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x1C],ebx

 Block1:
	cmp dword ptr [ebp+0xD4],edx
	jne Block33

 Block2:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],edx
	mov ecx,dword ptr [esp+0x90]
	mov edi,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x88],1
	test ecx,ecx
	je Block83

 Block3:
	mov ebp,dword ptr [esp+0x30]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	push edi
	mov dword ptr [eax+4],ebp
	lea esi,[ebx-0x22]
	mov ebx,dword ptr [ecx]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	push esi
	push 0xA
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x48],ecx
	call eax
	test eax,eax
	jge Block5

 Block4:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block5:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x88],0
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],edx
	mov ecx,dword ptr [esp+0x90]
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0xCC]
	mov byte ptr [esp+0x88],2
	test ecx,ecx
	je Block83

 Block10:
	mov ebp,dword ptr [esp+0x40]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x54]
	push edi
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	push esi
	push 0x2F
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x48],ecx
	call eax
	test eax,eax
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block12:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],0
	jne Block32

 Block13:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block15:
	mov ebx,dword ptr [esp+0x1C]

 Block16:
	mov ebp,dword ptr [esp+0x14]

 Block17:
	mov eax,dword ptr [ebp+0xB8]
	test eax,eax
	je Block79

 Block18:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,dword ptr [eax-4]
	jae Block79

 Block19:
	mov edi,eax
	add edi,dword ptr [esp+0x20]
	sub esp,8
	mov eax,dword ptr [edi+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block21

 Block20:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov esi,eax
	mov eax,dword ptr [edx+0x18]
	call eax
	cmp eax,1
	jne Block26

 Block22:
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block26

 Block23:
	mov edx,dword ptr [esp+0x90]
	push ebx
	push 0x2C
	lea ecx,[ebx-0x20]
	push ecx
	push 0xC
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x40],esp
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame

 Block26:
	mov ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	push 2
	push 0
	push esi
	push 0
	push 0
	push 0
	call edx
	push eax
	mov eax,dword ptr [edi]
	push ebx
	push 0xC
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xBC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block41

 Block29:
	cmp dword ptr [esi+4],0
	jne Block31

 Block30:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block31:
	mov ecx,dword ptr [esi+4]
	jmp Block42

 Block32:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block15

 Block33:
	cmp edx,dword ptr [ebp+0xDC]
	jge Block17

 Block34:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],edx
	mov esi,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x88],cl
	mov ecx,dword ptr [esp+0x90]
	test ecx,ecx
	je Block83

 Block35:
	mov ebx,dword ptr [esp+0x50]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x64]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	push esi
	mov dword ptr [eax+0xC],edx
	lea eax,[ebx-0x22]
	push eax
	push 0xA
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x80]
	call ecx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block16

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block40:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block16

 Block41:
	xor ecx,ecx

 Block42:
	mov dword ptr [esp+0x1C],0
	test ecx,ecx
	je Block46

 Block43:
	mov eax,ecx
	lea esi,[eax+1]

 Block44:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block44

 Block45:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer

 Block46:
	xor edx,edx
	mov dword ptr [esp+0x28],edx
	mov esi,dword ptr [edi+0xC]
	mov byte ptr [esp+0x88],5
	cmp esi,edx
	je Block50

 Block47:
	cmp dword ptr [esi+4],edx
	jne Block49

 Block48:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block49:
	mov edx,dword ptr [esi+4]

 Block50:
	mov dword ptr [esp+0x18],0
	test edx,edx
	je Block54

 Block51:
	mov eax,edx
	lea esi,[eax+1]

 Block52:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block52

 Block53:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer

 Block54:
	mov eax,dword ptr [ebp+0xC4]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x90],6
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block57:
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0x8C],7
	call esi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block58:
	mov ecx,dword ptr [esp+0x90]
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x64]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x9C],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x98],9
	test ecx,ecx
	je Block83

 Block59:
	lea eax,[ebx-0x21]
	push eax
	push 0x32
	mov byte ptr [esp+0xA0],8
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x88],7
	cmp word ptr [esp+0x60],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x88],6
	cmp word ptr [esp+0x70],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [edi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block70

 Block68:
	cmp eax,3
	je Block70

 Block69:
	cmp eax,4
	jne Block75

 Block70:
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xC8]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	push esi
	lea eax,[ebx-0xE]
	push eax
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0xA8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block74:
	call draw_number_by_image
	add esp,0x18

 Block75:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x88],5
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x88],0
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov edx,dword ptr [esp+0x24]
	add dword ptr [esp+0x20],0x1C
	add ebx,0x2A
	inc edx
	cmp ebx,0x151
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],edx
	jl Block1

 Block80:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 4

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	push eax
	call _com_issue_error
}
}
// CTrunkDlg::ITEM::operator=
__SUB_CLASS_THIS(00368B50, __thiscall, 88245,  CTrunkDlg::ITEM, CTrunkDlg::ITEM&, const CTrunkDlg::ITEM&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	mov eax,dword ptr [ebx]
	push ebp
	push esi
	mov esi,ecx
	mov dword ptr [esi],eax
	mov ecx,dword ptr [ebx+4]
	push edi
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [ebx+8]
	lea ebp,[ebx+0xC]
	lea edi,[esi+0xC]
	mov dword ptr [esi+8],edx
	cmp edi,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [ebx+0x10]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x10],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	add ebx,0x14
	push ebx
	lea ecx,[esi+0x14]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CTrunkDlg::Update
__SUB_CLASS_THIS0(00366460, __thiscall, 88204,  CTrunkDlg, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xF0]
	jmp  CAvatar::Update
}
}
// CTrunkDlg::SetTrunkDlg
__SUB_CLASS_THIS(0036A940, __thiscall, 88205,  CTrunkDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xAC],eax
	call CTrunkDlg::SetGetItems
	lea eax,[esi+0xBC]
	push eax
	push 0
	mov ecx,esi
	call CTrunkDlg::SetPutItems
	mov ecx,esi
	call CTrunkDlg::SetScrollBar
	mov ecx,esi
	call CTrunkDlg::SetAvatar
	mov ecx,esi
	call CTrunkDlg::SetNPC
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
