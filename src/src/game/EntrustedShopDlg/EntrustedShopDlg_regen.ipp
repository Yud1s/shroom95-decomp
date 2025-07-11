#include "regen.hpp"
// EntrustedShopDlg.ipp
#include "EntrustedShopDlg.hpp"

// CEntrustedShopDlg::CBlackListDlg::AddBlackList
_SUB_EXCEPTION_HANDLER(120310)
__SUB_CLASS_THIS0(00120310, __thiscall, 60403,  CEntrustedShopDlg::CBlackListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_120310
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x1F0]
	cmp eax,0x14
	jae Block35

 Block1:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	cmp eax,ebp
	je Block14

 Block2:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebp
	je Block14

 Block3:
	add eax,8
	cmp eax,ebp
	je Block14

 Block4:
	lea edi,[eax-8]
	mov dword ptr [esp+0x24],edi
	cmp edi,ebp
	je Block6

 Block5:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	push ebp
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x2E5
	push ecx
	mov dword ptr [esp+0x44],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebp
	push 3
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	push ebp
	push ebp
	push 0xC
	push 4
	push offset _S_
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	jne Block12

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CUtilDlgEx::GetInputStr_Result
	push ebp
	push ebp
	mov ecx,eax
	mov byte ptr [esp+0x38],2
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],4
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea eax,[esp+0x10]
	push 1
	push eax
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block15

 Block10:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp edi,ebp
	je Block35

 Block13:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret

 Block14:
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	jmp Block6

 Block15:
	mov dword ptr [esp+0x14],ebp
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edx+0x19EC]
	lea ecx,[esp+0x10]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push offset _S_S__1
	push edx
	mov byte ptr [esp+0x40],5
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov ebp,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],4
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	test ebp,ebp
	je Block22

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test edi,edi
	je Block35

 Block21:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret

 Block22:
	mov eax,dword ptr [esi+0x1F4]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block25

 Block23:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZXString<char>>::GetNext
	mov eax,dword ptr [eax]
	add esp,4
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block29

 Block24:
	cmp dword ptr [esp+0x18],0
	jne Block23

 Block25:
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esi+0x1E8]
	call ZList<ZXString<char>>::Insert
	push ecx
	lea edx,[esp+0x14]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [esi+0x1D4]
	call CEntrustedShopDlg::AddBlackList
	mov edi,dword ptr [esi+0x1F0]
	mov eax,dword ptr [esi+0x1DC]
	xor edx,edx
	cmp edi,0x14
	setl dl
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	test edi,edi
	jle Block30

 Block26:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,edi
	jge Block30

 Block27:
	test eax,eax
	jl Block30

 Block28:
	mov edx,1
	jmp Block31

 Block29:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x2E8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block32

 Block30:
	xor edx,edx

 Block31:
	mov eax,dword ptr [esi+0x1E4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block32:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block35:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret
}
}
// CEntrustedShopDlg::OnBlackListResult
_SUB_EXCEPTION_HANDLER(120D50)
__SUB_CLASS_THIS(00120D50, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_120D50
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
	mov ebp,ecx
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov edi,dword ptr [esp+0x3C]
	mov ecx,edi
	mov dword ptr [esp+0x34],ebx
	call CInPacket::Decode2
	movzx eax,ax
	cmp eax,ebx
	jle Block5

 Block1:
	mov dword ptr [esp+0x3C],eax
	lea esp,[esp]

 Block2:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov esi,eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],1
	call ZList<ZXString<char>>::AddTail_
	push esi
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	sub dword ptr [esp+0x3C],1
	jne Block2

 Block5:
	mov eax,dword ptr [ebp+0x258]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	push 0x210
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block7

 Block6:
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov ecx,eax
	call CEntrustedShopDlg::CBlackListDlg::_ctor_0
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block17

 Block9:
	add eax,8
	cmp eax,ebx
	je Block17

 Block10:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block12

 Block11:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block12:
	mov eax,dword ptr [ebp+0xD08]
	mov dword ptr [ebp+0xD08],esi
	cmp eax,ebx
	je Block16

 Block13:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	lea ecx,[esi+4]
	push ecx
	call edi
	cmp esi,ebx
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block16:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block17:
	xor esi,esi
	jmp Block12
}
}
// CEntrustedShopDlg::DeleteBlackList
_SUB_EXCEPTION_HANDLER(11EE20)
__SUB_CLASS_THIS(0011EE20, __thiscall, 60380,  CEntrustedShopDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11EE20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block4

 Block1:
	cmp byte ptr [eax],0
	je Block3

 Block2:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x31
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x28]

 Block3:
	test eax,eax

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 4
}
}
// CEntrustedShopDlg::CBlackListDlg::OnButtonClicked
__SUB_CLASS_THIS(00120CF0, __thiscall, 60405,  CEntrustedShopDlg::CBlackListDlg, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0xBB8
	je Block4

 Block1:
	sub eax,1
	jne Block5

 Block2:
	call CEntrustedShopDlg::CBlackListDlg::DeleteBlackList

 Block3:
	ret 4

 Block4:
	call CEntrustedShopDlg::CBlackListDlg::AddBlackList
	ret 4

 Block5:
	cmp edx,1
	jne Block7

 Block6:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block7:
	cmp edx,2
	jne Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block9:
	cmp edx,8
	jne Block3

 Block10:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx
}
}
// CEntrustedShopDlg::OnRefresh
__SUB_CLASS_THIS(0011CC30, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
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
	mov dword ptr [esi+0xCF0],eax
	call CPersonalShopDlg::OnRefresh
	pop edi
	pop esi
	ret 4
}
}
// CEntrustedShopDlg::SetRet
_SUB_EXCEPTION_HANDLER(11E480)
__SUB_CLASS_THIS(0011E480, __thiscall, 60376,  CEntrustedShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11E480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	cmp eax,2
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x1BC],0
	jne Block3

 Block2:
	mov eax,8

 Block3:
	cmp dword ptr [ecx+0xDC],0
	jne Block10

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	call CEntrustedShopDlg::OnGoOut
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 4

 Block6:
	cmp eax,8
	jne Block10

 Block7:
	cmp dword ptr [ecx+0x1BC],0
	je Block9

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0xDAC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block11

 Block9:
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x29
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	lea ecx,[esp+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 4

 Block10:
	push 2
	call CPersonalShopDlg::SetRet

 Block11:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 4
}
}
// CEntrustedShopDlg::GetMiniRoomType
__SUB_CLASS_THIS0(0011D9B0, __thiscall, 60384,  CEntrustedShopDlg, unsigned char) {
__asm {

 Block0:
	mov al,5
	ret
}
}
// CEntrustedShopDlg::RegisterEmployer
_SUB_EXCEPTION_HANDLER(11F960)
__SUB_CLASS_THIS(0011F960, __thiscall, 60379,  CEntrustedShopDlg, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11F960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x14]
	push 0xDA0
	push eax
	mov dword ptr [esp+0x68],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x6C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x64],2
	call esi
	lea eax,[esp+0x18]
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
	mov eax,dword ptr [esp+0x10]
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],4
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x6C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x60],8
	cmp word ptr [esp+0x18],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov bl,9
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0xDA7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],0xA
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xCEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],bl
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x64],0
	call ecx
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CEntrustedShopDlg::CBlackListDlg::OnMouseButton
__SUB_CLASS_THIS(0011C7F0, __thiscall, 60406,  CEntrustedShopDlg::CBlackListDlg, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x202
	push esi
	mov esi,ecx
	jne Block10

 Block1:
	mov eax,dword ptr [esi+0x1E0]
	push ebp
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x1CC],0xFFFFFFFF
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	push 0
	call edx
	xor edi,edi
	cmp dword ptr [esi+0x1EC],edi
	jbe Block9

 Block2:
	push ebx
	lea ebx,[esi+0x8C]

 Block3:
	cmp edi,0x14
	jge Block8

 Block4:
	mov eax,dword ptr [esp+0x20]
	push eax
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	jne Block7

 Block5:
	inc edi
	add ebx,0x10
	cmp edi,dword ptr [esi+0x1EC]
	jb Block3

 Block6:
	pop ebx
	push eax
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop ebp
	pop esi
	ret 0x10

 Block7:
	mov eax,dword ptr [esi+0x1E0]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x1CC],edi
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block8:
	pop ebx

 Block9:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop ebp

 Block10:
	pop esi
	ret 0x10
}
}
// CEntrustedShopDlg::AddBlackList
_SUB_EXCEPTION_HANDLER(11ED50)
__SUB_CLASS_THIS(0011ED50, __thiscall, 60380,  CEntrustedShopDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11ED50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block4

 Block1:
	cmp byte ptr [eax],0
	je Block3

 Block2:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x30
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x28]

 Block3:
	test eax,eax

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 4
}
}
// CEntrustedShopDlg::OnWithdrawMoneyResult
__SUB_CLASS_THIS(0011C7A0, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	mov dword ptr [ecx+0xCF0],0
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect
}
}
// CEntrustedShopDlg::CVisitListDlg::CVisitListDlg
_SUB_EXCEPTION_HANDLER(1206A0)
__SUB_CLASS_THIS(001206A0, __thiscall, 60427,  CEntrustedShopDlg::CVisitListDlg, void, CEntrustedShopDlg*, const ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1206A0
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
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x28]
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x130],0xFFFFFFFF
	mov dword ptr [esi+0x134],eax
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esi+0x13C],ebp
	lea edi,[esi+0x140]
	mov ecx,edi
	mov byte ptr [esp+0x20],1
	int 3// TODO: 	mov dword ptr [edi],offset ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::`vftable'
	mov dword ptr [edi+8],ebp
	mov dword ptr [edi+0xC],ebp
	mov dword ptr [edi+0x10],ebp
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	mov ecx,edi
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::AddTail_List
	mov dword ptr [esi+0x154],ebp
	mov dword ptr [esi+0x158],ebp
	mov dword ptr [esi+0x15C],ebp
	mov dword ptr [esi+0x160],ebp
	mov dword ptr [esi+0x164],ebp
	mov byte ptr [esp+0x20],3
	mov edi,0x2D
	lea ebx,[esi+0x90]
	nop

 Block1:
	lea edx,[edi+0x12]
	push edx
	push 0xC9
	push edi
	push 0xC
	push ebx
	call SetRect
	add edi,0x15
	add ebx,0x10
	cmp edi,0xFF
	jl Block1

 Block2:
	push 1
	push ebp
	push 1
	push offset _S_UIUIWINDOW2IMGPE__25
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CEntrustedShopDlg::CEntrustedShopDlg
_SUB_EXCEPTION_HANDLER(11D8F0)
__SUB_CLASS_THIS0(0011D8F0, __thiscall, 60372,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11D8F0
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
	call CPersonalShopDlg::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xCE8],eax
	mov dword ptr [esi+0xCEC],eax
	mov dword ptr [esi+0xCF0],eax
	mov dword ptr [esi+0xD08],eax
	mov dword ptr [esi+0xD10],eax
	mov byte ptr [esp+0x14],4
	call timeGetTime
	mov dword ptr [esi+0xCFC],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CEntrustedShopDlg::~CEntrustedShopDlg
_SUB_EXCEPTION_HANDLER(11DA00)
__SUB_CLASS_THIS0(0011DA00, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DA00
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
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [esi+0xD08]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],4
	cmp ecx,ebx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0xD08],ebx
	lea edi,[esi+0xD04]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CEntrustedShopDlg::CBlackListDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov ecx,dword ptr [esi+0xD10]
	cmp ecx,ebx
	je Block6

 Block4:
	call CWnd::Destroy
	cmp dword ptr [esi+0xD10],ebx
	lea edi,[esi+0xD0C]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CEntrustedShopDlg::CVisitListDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xD0C]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CEntrustedShopDlg::CVisitListDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xD04]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CEntrustedShopDlg::CBlackListDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov eax,dword ptr [esi+0xCEC]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xCE8]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CPersonalShopDlg::~CPersonalShopDlg
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
// CEntrustedShopDlg::OnCorrectSSN2
_SUB_EXCEPTION_HANDLER(11DB30)
__SUB_CLASS_THIS(0011DB30, __thiscall, 60376,  CEntrustedShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DB30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x38]
	cmp eax,0xB
	je Block3

 Block1:
	cmp eax,0x27
	jne Block5

 Block2:
	push 0x90
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 0x27
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0x1C]
	jmp Block4

 Block3:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x34],0
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0xC]

 Block4:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block5:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret 4
}
}
// CEntrustedShopDlg::OnEnterResult
_SUB_EXCEPTION_HANDLER(11FDC0)
__SUB_CLASS_THIS(0011FDC0, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11FDC0
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
	mov ebx,dword ptr [esp+0x48]
	mov ecx,ebx
	call CInPacket::Decode2
	xor ecx,ecx
	movzx eax,ax
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	mov dword ptr [esp+0x40],ecx
	jle Block24

 Block1:
	mov dword ptr [esp+0x24],eax
	lea ecx,[ecx]

 Block2:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,ebx
	call CInPacket::Decode1
	push 0
	push 0
	push offset _S___6
	lea ecx,[esp+0x20]
	mov bl,al
	call ZXString<char>::Find__0
	push eax
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block6

 Block5:
	mov edi,dword ptr [eax-4]
	jmp Block7

 Block6:
	xor edi,edi

 Block7:
	push 0
	push 0
	push offset _S___6
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	sub edi,eax
	sub edi,3
	push edi
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Right
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x50],3
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	push offset _S___6
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x48],4
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x40],3
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	movzx eax,bl
	cmp eax,3
	ja Block17

 Block12:
	cmp EAX, 0
je Block13
cmp EAX, 1
je Block14
cmp EAX, 2
je Block15
cmp EAX, 3
je Block16


 Block13:
	mov dword ptr [esp+0x18],1
	jmp Block17

 Block14:
	mov dword ptr [esp+0x18],0xB
	jmp Block17

 Block15:
	mov dword ptr [esp+0x18],0xC
	jmp Block17

 Block16:
	mov dword ptr [esp+0x18],0xD

 Block17:
	mov eax,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x14]
	push eax
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block19

 Block18:
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	mov edi,eax
	shr edi,1
	push 0
	dec edi
	push edi
	mov ecx,ebp
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push edi
	mov ecx,ebp
	call ZXString16::ReleaseBuffer

 Block19:
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	sub dword ptr [esp+0x24],1
	mov ebx,dword ptr [esp+0x48]
	jne Block2

 Block24:
	lea edi,[esi+0x228]
	mov ebp,3

 Block25:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	add edi,8
	sub ebp,1
	jne Block25

 Block26:
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea ebp,[esi+0xCE8]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x44],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	cmp dword ptr [esi+0xDC],0
	push 0
	jne Block32

 Block29:
	mov eax,dword ptr [esi+0x220]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov eax,dword ptr [esi+0x208]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x200]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	call timeGetTime
	mov ecx,ebx
	mov dword ptr [esi+0xCF8],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0xCF4],eax
	call CInPacket::Decode1
	movzx eax,al
	push 0
	test eax,eax
	je Block31

 Block30:
	mov eax,dword ptr [esi+0x250]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	push ebx
	mov ecx,esi
	call CEntrustedShopDlg::DecodeSoldItemList
	jmp Block33

 Block31:
	mov eax,dword ptr [esi+0x218]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0x1BC],1
	call CEntrustedShopDlg::DecodeSoldItemList
	jmp Block33

 Block32:
	mov eax,dword ptr [esi+0x218]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov eax,dword ptr [esi+0x1F8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x208]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x210]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x250]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x240]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x248]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov dword ptr [esi+0x1BC],1

 Block33:
	mov eax,dword ptr [esi+0x258]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x48],ebx
	xor ebx,ebx
	test eax,eax
	mov eax,dword ptr [edx+0x1C]
	sete bl
	push ebx
	call eax
	mov eax,dword ptr [esi+0x260]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xDC]
	xor ebx,ebx
	test eax,eax
	mov eax,dword ptr [edx+0x1C]
	sete bl
	push ebx
	call eax
	mov ebx,dword ptr [esp+0x48]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea edi,[esi+0x1D4]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea edx,[esp+0x48]
	push 0xDA8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esi+0x1D8]
	push eax
	mov byte ptr [esp+0x50],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x58]
	add esp,0x10
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	push 0x1F0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x45
	push ecx
	call get_basic_font
	add esp,8
	push edi
	call format_string_1
	add esp,0xC
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edx,al
	mov eax,dword ptr [esi]
	mov dword ptr [esi+0x1E4],edx
	mov edx,dword ptr [eax+0x70]
	push ebx
	mov ecx,esi
	call edx
	cmp dword ptr [esi+0xDC],0
	jne Block39

 Block38:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0
	call CWvsContext::UI_Open

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
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
// CEntrustedShopDlg::GetMoney
__SUB_CLASS_THIS0(0011D380, __thiscall, 60383,  CEntrustedShopDlg, long) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [ecx+0xDC],0
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0xCF0]
	add esp,8
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	lea eax,[esp+4]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block7

 Block3:
	push esi
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	pop edi
	mov dword ptr [esp+0xC],0
	pop esi

 Block7:
	mov ecx,dword ptr [ebx+0xBD]
	push ecx
	add ebx,0xB5
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop ebx
	add esp,8
	ret
}
}
// CEntrustedShopDlg::OnBlackList
_SUB_EXCEPTION_HANDLER(11DF10)
__SUB_CLASS_THIS0(0011DF10, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xD08]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x2F
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

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CEntrustedShopDlg::DecodeSoldItemList
_SUB_EXCEPTION_HANDLER(11FC70)
__SUB_CLASS_THIS(0011FC70, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11FC70
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
	mov dword ptr [esp+0x14],esi
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ebx,al
	lea eax,[esp+0x2C]
	push eax
	push 1
	lea edi,[esi+0x1C8]
	push ebx
	mov ecx,edi
	call ZArray<CPersonalShopDlg::SOLD_ITEM>::_Realloc
	xor eax,eax
	cmp ebx,eax
	mov dword ptr [esi+0x1A8],eax
	mov dword ptr [esi+0x1AC],eax
	jle Block6

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x2C],ebx
	lea esp,[esp]

 Block2:
	mov ebx,dword ptr [edi]
	mov ecx,ebp
	add ebx,esi
	call CInPacket::Decode4
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ebx,dword ptr [edi]
	mov ecx,ebp
	add ebx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [ebx+0xC],ecx
	mov ebx,dword ptr [edi]
	mov ecx,ebp
	add ebx,esi
	call CInPacket::Decode4
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	mov dword ptr [ebx+0x10],eax
	call CInPacket::DecodeStr
	push eax
	mov eax,dword ptr [edi]
	lea ecx,[eax+esi+0x14]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+esi+0x10]
	mov ecx,dword ptr [esp+0x14]
	cdq
	add dword ptr [ecx+0x1A8],eax
	adc dword ptr [ecx+0x1AC],edx
	add esi,0x18
	sub dword ptr [esp+0x2C],1
	jne Block2

 Block5:
	mov esi,ecx

 Block6:
	push 8
	add esi,0x1B0
	push esi
	mov ecx,ebp
	call CInPacket::DecodeBuffer
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
// CEntrustedShopDlg::OnButtonClicked
__SUB_CLASS_THIS(0011E400, __thiscall, 60375,  CEntrustedShopDlg, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xDC],0
	mov edx,dword ptr [esp+4]
	jne Block8

 Block1:
	lea eax,[edx-0x3F2]
	cmp eax,8
	ja Block8

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block8
cmp EAX, 2
je Block8
cmp EAX, 3
je Block8
cmp EAX, 4
je Block8
cmp EAX, 5
je Block4
cmp EAX, 6
je Block5
cmp EAX, 7
je Block6
cmp EAX, 8
je Block7


 Block3:
	call CEntrustedShopDlg::OnGoOut
	ret 4

 Block4:
	call CEntrustedShopDlg::OnArrange
	ret 4

 Block5:
	call CEntrustedShopDlg::OnWithdrawMoney
	ret 4

 Block6:
	call CEntrustedShopDlg::OnBlackList
	ret 4

 Block7:
	call CEntrustedShopDlg::OnVisitList
	ret 4

 Block8:
	mov dword ptr [esp+4],edx
	jmp  CPersonalShopDlg::OnButtonClicked
}
}
// CEntrustedShopDlg::DestroyBlackListDlg
__SUB_CLASS_THIS0(0011D400, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xD08]
	test ecx,ecx
	je Block4

 Block1:
	push esi
	call CWnd::Destroy
	cmp dword ptr [edi+0xD08],0
	lea esi,[edi+0xD04]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CEntrustedShopDlg::CBlackListDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	mov edi,dword ptr [edi+0x258]
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[edi+4]
	push 1
	call edx

 Block6:
	pop edi
	ret
}
}
// CEntrustedShopDlg::OnVisitListResult
_SUB_EXCEPTION_HANDLER(120890)
__SUB_CLASS_THIS(00120890, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_120890
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
	mov dword ptr [esp+0x1C],esi
	mov ebx,dword ptr [esp+0x4C]
	mov ecx,ebx
	call CInPacket::Decode2
	xor ecx,ecx
	movzx eax,ax
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::`vftable'
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x38],ecx
	cmp eax,ecx
	mov dword ptr [esp+0x44],ecx
	jle Block14

 Block1:
	mov dword ptr [esp+0x14],eax

 Block2:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x24],esi
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x48],1
	call CInPacket::DecodeStr
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,ebx
	call CInPacket::Decode4
	lea ecx,[esp+0x28]
	mov dword ptr [esi+4],eax
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::AddTail_
	lea edi,[esi-0x10]
	lea ecx,[edi+4]
	push ecx
	mov ebp,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block9

 Block5:
	lea ebx,[eax-0x10]
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block8

 Block7:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block8:
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [ebp+4],0

 Block9:
	mov dword ptr [ebp+4],esi
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x48],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block12

 Block11:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block12:
	sub dword ptr [esp+0x14],1
	mov dword ptr [esp+0x24],0
	jne Block2

 Block13:
	mov esi,dword ptr [esp+0x1C]

 Block14:
	mov eax,dword ptr [esi+0x260]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	push 0x168
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block16

 Block15:
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov ecx,eax
	call CEntrustedShopDlg::CVisitListDlg::_ctor_0
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block26

 Block18:
	add eax,8
	je Block26

 Block19:
	lea edi,[eax-8]
	test edi,edi
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xD10]
	mov dword ptr [esi+0xD10],edi
	test eax,eax
	je Block25

 Block22:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block23:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::`vftable'
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::RemoveAll
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4

 Block26:
	xor edi,edi
	jmp Block21
}
}
// CEntrustedShopDlg::CVisitListDlg::~CVisitListDlg
_SUB_EXCEPTION_HANDLER(1207C0)
__SUB_CLASS_THIS0(001207C0, __thiscall, 60429,  CEntrustedShopDlg::CVisitListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1207C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::CVisitListDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x154]
	mov dword ptr [esp+0x18],2
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x140]
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::`vftable'
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::RemoveAll
	cmp dword ptr [esi+0x13C],0
	lea edi,[esi+0x138]
	mov byte ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CEntrustedShopDlg::CBlackListDlg::~CBlackListDlg
_SUB_EXCEPTION_HANDLER(120C00)
__SUB_CLASS_THIS0(00120C00, __thiscall, 60403,  CEntrustedShopDlg::CBlackListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_120C00
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
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x1FC]
	mov dword ptr [esp+0x18],3
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x1E8]
	mov byte ptr [esp+0x18],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	cmp dword ptr [esi+0x1E4],0
	lea edi,[esi+0x1E0]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x1DC],0
	lea edi,[esi+0x1D8]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CEntrustedShopDlg::CVisitListDlg::SetRet
__SUB_CLASS_THIS(0011D710, __thiscall, 60434,  CEntrustedShopDlg::CVisitListDlg, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x134]
	test ecx,ecx
	je Block2

 Block1:
	call CEntrustedShopDlg::DestroyVisitListDlg

 Block2:
	ret 4
}
}
// CEntrustedShopDlg::OnArrange
_SUB_EXCEPTION_HANDLER(11DDD0)
__SUB_CLASS_THIS0(0011DDD0, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DDD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x1C0],0
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xDB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x28
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CEntrustedShopDlg::Update
__SUB_CLASS_THIS0(0011E920, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CMiniRoomBaseDlg::Update
	cmp dword ptr [esi+0xDC],0
	jne Block3

 Block1:
	call timeGetTime
	sub eax,dword ptr [esi+0xCFC]
	cmp eax,0x4E20
	jle Block3

 Block2:
	mov ecx,esi
	pop esi
	jmp  CEntrustedShopDlg::DrawRemainingTime

 Block3:
	pop esi
	ret
}
}
// CEntrustedShopDlg::CVisitListDlg::Draw
_SUB_EXCEPTION_HANDLER(11F260)
__SUB_CLASS_THIS(0011F260, __thiscall, 60433,  CEntrustedShopDlg::CVisitListDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11F260
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
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [esp+0x98]
	push eax
	mov dword ptr [esp+0x18],0
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov eax,dword ptr [ebx+0x14C]
	mov dword ptr [esp+0x90],0
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block51

 Block1:
	lea ebp,[ebx+0x94]
	lea esp,[esp]

 Block2:
	lea edx,[esp+0x28]
	push edx
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x44],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov byte ptr [esp+0x90],1
	test esi,esi
	je Block50

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x1C]
	cmp ecx,dword ptr [ebx+0x130]
	jne Block10

 Block6:
	test edi,edi
	je Block54

 Block7:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [ebp-4]
	mov ecx,dword ptr [ebp+4]
	mov ebx,dword ptr [edi]
	push 0xFF999999
	sub eax,edx
	push eax
	sub ecx,esi
	push ecx
	push edx
	mov edx,dword ptr [ebx+0x8C]
	push esi
	push edi
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov ebx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x44]

 Block10:
	mov eax,dword ptr [esp+0x18]
	cmp eax,dword ptr [ebx+0x130]
	jne Block12

 Block11:
	lea ecx,[esp+0x30]
	push 0x16
	push ecx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],1
	mov byte ptr [esp+0x90],2
	jmp Block13

 Block12:
	lea edx,[esp+0x2C]
	push 0x18
	push edx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],2

 Block13:
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0x38],ebx
	test ebx,ebx
	je Block15

 Block14:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block15:
	test byte ptr [esp+0x14],2
	mov dword ptr [esp+0x90],3
	je Block18

 Block16:
	mov eax,dword ptr [esp+0x2C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	test byte ptr [esp+0x14],1
	mov byte ptr [esp+0x90],4
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x30]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block55

 Block22:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0xFF
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x4C]
	push ecx
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xA4],6
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xA0],7
	test edi,edi
	je Block54

 Block23:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [ebp-4]
	add edx,4
	push edx
	add eax,3
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA8],6
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x48],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x90],4
	cmp word ptr [esp+0x58],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [esi+4]
	xor edx,edx
	mov ecx,0x36EE80
	div ecx
	mov dword ptr [esp+0x24],0
	mov edi,eax
	mov eax,0x45E7B273
	imul edx
	sar edx,0xE
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	lea edx,[esp+0x34]
	push 0x186A
	push edx
	mov byte ptr [esp+0x98],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push edi
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xA0],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0x90],8
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block55

 Block34:
	mov eax,3
	mov word ptr [esp+0x68],ax
	mov dword ptr [esp+0x70],0xFF
	mov esi,dword ptr [esp+0x24]
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	push ebx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xA4],0xB
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [ebp-4]
	add eax,4
	add ecx,0x89
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xA8],0xC
	mov byte ptr [esp+0xA8],0xB
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x90],0xA
	cmp word ptr [esp+0x68],di
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x90],8
	cmp word ptr [esp+0x78],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x90],4
	test esi,esi
	je Block44

 Block43:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov byte ptr [esp+0x90],1
	test ebx,ebx
	je Block46

 Block45:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block46:
	mov esi,dword ptr [esp+0x44]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x94],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block49

 Block48:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block49:
	mov ebx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x44],0

 Block50:
	inc dword ptr [esp+0x18]
	add ebp,0x10
	cmp dword ptr [esp+0x28],0
	jne Block2

 Block51:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 4

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	push eax
	call _com_issue_error
}
}
// CEntrustedShopDlg::OnArrangeItemResult
__SUB_CLASS_THIS(0011DC20, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push edi
	call CInPacket::Decode4
	xor ecx,ecx
	xor ebp,ebp
	cmp dword ptr [esi+0x1C0],ecx
	mov dword ptr [esi+0xCF0],eax
	mov dword ptr [esp+0x14],ecx
	jle Block7

 Block1:
	xor ebx,ebx
	xor edi,edi
	lea esp,[esp]

 Block2:
	mov eax,dword ptr [esi+0x1C4]
	cmp dword ptr [edi+eax],0
	je Block6

 Block3:
	cmp ebp,ecx
	je Block5

 Block4:
	mov ecx,dword ptr [edi+eax]
	mov dword ptr [ebx+eax],ecx
	mov edx,dword ptr [edi+eax+4]
	mov dword ptr [ebx+eax+4],edx
	mov ecx,dword ptr [edi+eax+8]
	lea edx,[edi+eax+0xC]
	mov dword ptr [ebx+eax+8],ecx
	push edx
	lea ecx,[ebx+eax+0xC]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov ecx,dword ptr [esp+0x14]

 Block5:
	inc ecx
	mov dword ptr [esp+0x14],ecx
	add ebx,0x14

 Block6:
	inc ebp
	add edi,0x14
	cmp ebp,dword ptr [esi+0x1C0]
	jl Block2

 Block7:
	mov eax,dword ptr [esi+0x1C0]
	dec eax
	cmp eax,ecx
	jl Block15

 Block8:
	lea edi,[eax+eax*4]
	add edi,edi
	sub eax,ecx
	add edi,edi
	inc eax
	mov ebp,eax

 Block9:
	mov eax,dword ptr [esi+0x1C4]
	xor ecx,ecx
	mov dword ptr [edi+eax],ecx
	mov edx,dword ptr [esi+0x1C4]
	mov dword ptr [edx+edi+4],ecx
	mov eax,dword ptr [esi+0x1C4]
	mov dword ptr [eax+edi+8],ecx
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [edx+edi+0x10]
	lea ebx,[edx+edi+0xC]
	cmp eax,ecx
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [ebx+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx+4]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [ebx+4],0

 Block14:
	dec dword ptr [esi+0x1C0]
	sub edi,0x14
	sub ebp,1
	jne Block9

 Block15:
	mov ecx,esi
	call CPersonalShopDlg::SetScrollBar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CEntrustedShopDlg::OnVisitList
_SUB_EXCEPTION_HANDLER(11DF90)
__SUB_CLASS_THIS0(0011DF90, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DF90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xD10]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x2E
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

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CEntrustedShopDlg::CBlackListDlg::OnCreate
_SUB_EXCEPTION_HANDLER(11E010)
__SUB_CLASS_THIS(0011E010, __thiscall, 60404,  CEntrustedShopDlg::CBlackListDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11E010
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
	mov esi,ecx
	push 0
	push 0
	lea ebx,[esi+0x1FC]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0x24]
	push 0
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0xBB8
	push offset _S_UIUIWINDOW2IMGPE__24
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block24

 Block3:
	add eax,8
	je Block24

 Block4:
	lea edi,[eax-8]
	test edi,edi
	je Block6

 Block5:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [esi+0x1DC]
	mov dword ptr [esi+0x1DC],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block8:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block10:
	push 0
	push 0
	push 0
	push 0xBB9
	push offset _S_UIUIWINDOW2IMGPE__23
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block25

 Block11:
	add eax,8
	je Block25

 Block12:
	lea edi,[eax-8]
	test edi,edi
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x1E4]
	mov dword ptr [esi+0x1E4],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block16:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block18

 Block17:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGPE__22
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x14],0

 Block20:
	mov eax,dword ptr [esi+0x1DC]
	mov edi,dword ptr [esi+0x1F0]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	xor eax,eax
	cmp edi,0x14
	setl al
	push eax
	call edx
	test edi,edi
	jle Block26

 Block21:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,edi
	jge Block26

 Block22:
	test eax,eax
	jl Block26

 Block23:
	mov edx,1
	jmp Block27

 Block24:
	xor edi,edi
	jmp Block6

 Block25:
	xor edi,edi
	jmp Block14

 Block26:
	xor edx,edx

 Block27:
	mov eax,dword ptr [esi+0x1E4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	push 0
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CEntrustedShopDlg::CVisitListDlg::OnCreate
_SUB_EXCEPTION_HANDLER(11D4C0)
__SUB_CLASS_THIS(0011D4C0, __thiscall, 60430,  CEntrustedShopDlg::CVisitListDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11D4C0
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
	push 0
	push 0
	lea ebx,[esi+0x154]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0x24]
	push 0
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x20],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0xFA0
	push offset _S_UIUIWINDOW2IMGPE__21
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x2C],0
	lea edi,[esi+0x138]
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	cmp dword ptr [edi+4],0
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	cmp dword ptr [esp+0x20],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGPE__20
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],0

 Block10:
	mov eax,dword ptr [esi+0x148]
	test eax,eax
	jle Block14

 Block11:
	mov ecx,dword ptr [esi+0x130]
	cmp ecx,eax
	jge Block14

 Block12:
	test ecx,ecx
	jl Block14

 Block13:
	mov eax,1
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	mov ecx,dword ptr [esi+0x13C]
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	push 0
	mov ecx,esi
	call eax
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
// CEntrustedShopDlg::CVisitListDlg::OnMouseButton
__SUB_CLASS_THIS(0011C890, __thiscall, 60432,  CEntrustedShopDlg::CVisitListDlg, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x202
	push esi
	mov esi,ecx
	jne Block10

 Block1:
	mov eax,dword ptr [esi+0x138]
	push ebp
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x12C],0xFFFFFFFF
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	push 0
	call edx
	xor edi,edi
	cmp dword ptr [esi+0x144],edi
	jbe Block9

 Block2:
	push ebx
	lea ebx,[esi+0x8C]

 Block3:
	cmp edi,0xA
	jge Block8

 Block4:
	mov eax,dword ptr [esp+0x20]
	push eax
	push ebp
	push ebx
	call PtInRect
	test eax,eax
	jne Block7

 Block5:
	inc edi
	add ebx,0x10
	cmp edi,dword ptr [esi+0x144]
	jb Block3

 Block6:
	pop ebx
	push eax
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop ebp
	pop esi
	ret 0x10

 Block7:
	mov eax,dword ptr [esi+0x138]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x12C],edi
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block8:
	pop ebx

 Block9:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop ebp

 Block10:
	pop esi
	ret 0x10
}
}
// CEntrustedShopDlg::DestroyVisitListDlg
__SUB_CLASS_THIS0(0011D450, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xD10]
	test ecx,ecx
	je Block4

 Block1:
	push esi
	call CWnd::Destroy
	cmp dword ptr [edi+0xD10],0
	lea esi,[edi+0xD0C]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CEntrustedShopDlg::CVisitListDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	mov edi,dword ptr [edi+0x260]
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[edi+4]
	push 1
	call edx

 Block6:
	pop edi
	ret
}
}
// CEntrustedShopDlg::IsEntrusted
__SUB_CLASS_THIS0(0011D9A0, __thiscall, 60378,  CEntrustedShopDlg, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CEntrustedShopDlg::CBlackListDlg::CBlackListDlg
_SUB_EXCEPTION_HANDLER(120AB0)
__SUB_CLASS_THIS(00120AB0, __thiscall, 60401,  CEntrustedShopDlg::CBlackListDlg, void, CEntrustedShopDlg*, const ZList<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_120AB0
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
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x28]
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEntrustedShopDlg::CBlackListDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x1D0],0xFFFFFFFF
	mov dword ptr [esi+0x1D4],eax
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esi+0x1DC],ebp
	mov dword ptr [esi+0x1E4],ebp
	lea edi,[esi+0x1E8]
	mov ecx,edi
	mov byte ptr [esp+0x20],2
	int 3// TODO: 	mov dword ptr [edi],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [edi+8],ebp
	mov dword ptr [edi+0xC],ebp
	mov dword ptr [edi+0x10],ebp
	call ZList<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	mov ecx,edi
	call ZList<ZXString<char>>::AddTail_List
	mov dword ptr [esi+0x1FC],ebp
	mov dword ptr [esi+0x200],ebp
	mov dword ptr [esi+0x204],ebp
	mov dword ptr [esi+0x208],ebp
	mov dword ptr [esi+0x20C],ebp
	mov byte ptr [esp+0x20],4
	xor ebx,ebx
	lea edi,[esi+0x90]

 Block1:
	mov eax,ebx
	shr eax,1
	test bl,1
	jne Block3

 Block2:
	lea edx,[eax+3]
	imul eax,0x15
	imul edx,0x15
	push edx
	push 0x90
	add eax,0x2D
	push eax
	push 0xC
	jmp Block4

 Block3:
	lea ecx,[eax+3]
	imul eax,0x15
	imul ecx,0x15
	push ecx
	push 0x117
	add eax,0x2D
	push eax
	push 0x93

 Block4:
	push edi
	call SetRect
	inc ebx
	add edi,0x10
	cmp ebx,0x14
	jl Block1

 Block5:
	push 1
	push ebp
	push 1
	push offset _S_UIUIWINDOW2IMGPE__26
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CEntrustedShopDlg::CBlackListDlg::SetRet
__SUB_CLASS_THIS(0011D4A0, __thiscall, 60408,  CEntrustedShopDlg::CBlackListDlg, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x1D4]
	test ecx,ecx
	je Block2

 Block1:
	call CEntrustedShopDlg::DestroyBlackListDlg

 Block2:
	ret 4
}
}
// CEntrustedShopDlg::DrawRemainingTime
_SUB_EXCEPTION_HANDLER(11E6B0)
__SUB_CLASS_THIS0(0011E6B0, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11E6B0
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
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	call timeGetTime
	mov edx,dword ptr [ebx+0xCF4]
	sub edx,dword ptr [ebx+0xCF8]
	mov ecx,eax
	add ecx,edx
	mov eax,0x45E7B273
	mul ecx
	shr edx,0xE
	mov ebp,0x59F
	sub ebp,edx
	mov eax,0x88888889
	imul ebp
	add edx,ebp
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp esi,0x17
	ja Block21

 Block1:
	mov eax,esi
	shl eax,4
	sub eax,esi
	add eax,eax
	add eax,eax
	mov edi,ebp
	sub edi,eax
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	lea ecx,[esp+0x18]
	push 0xDB0
	push ecx
	mov dword ptr [esp+0x58],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push esi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x60],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],2
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0xC
	push 0x78
	push 0xC
	push 0x172
	push esi
	call edx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x24]
	push 0x45
	push edx
	mov byte ptr [esp+0x60],4
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,5
	push edi
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	push 0xC
	mov byte ptr [esp+0x64],6
	push 0x172
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],4
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ebx,8
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bx
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x50],2
	cmp word ptr [esp+0x38],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	call timeGetTime
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx+0xCFC],eax
	mov dword ptr [ecx+0xD00],ebp
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x54],0
	call edx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test edi,edi
	je Block21

 Block20:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret
}
}
// CEntrustedShopDlg::OnLeave
_SUB_EXCEPTION_HANDLER(11E950)
// 51EB84
static uint8_t _SUB_11E950_LOOKUP_TABLE_0[15] = {
0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 
};
__SUB_CLASS_THIS(0011E950, __thiscall, 60381,  CEntrustedShopDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11E950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xDC]
	cmp dword ptr [esp+0x30],eax
	je Block2

 Block1:
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block2:
	mov ecx,dword ptr [esp+0x34]
	call CInPacket::Decode1
	xor ebx,ebx
	movzx eax,al
	mov dword ptr [esp+0x30],ebx
	add eax,0xFFFFFFFA
	mov dword ptr [esp+0x28],ebx
	cmp eax,0xE
	ja Block7

 Block3:
	movzx eax,byte ptr [eax+_SUB_11E950_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block13
cmp EAX, 1
je Block4
cmp EAX, 2
je Block11
cmp EAX, 3
je Block12
cmp EAX, 4
je Block14
cmp EAX, 5
je Block7


 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 8
	mov ecx,esi
	call eax
	lea ecx,[esp+0x34]
	push 0xDAE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x28],bl

 Block5:
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block8:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0xC]
	push 0xDA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x28],bl
	jmp Block5

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0x10]
	push 0xDAF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],bl
	jmp Block5

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0x14]
	push 0x1A69
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],bl
	jmp Block5

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0x18]
	push 0xDAA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block8

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block8
}
}
// CEntrustedShopDlg::OnPacket
__SUB_CLASS_THIS(00120EC0, __thiscall, 60381,  CEntrustedShopDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	lea eax,[ebx-0x28]
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	cmp eax,7
	ja Block7

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block7
cmp EAX, 2
je Block3
cmp EAX, 3
je Block7
cmp EAX, 4
je Block4
cmp EAX, 5
je Block7
cmp EAX, 6
je Block6
cmp EAX, 7
je Block5


 Block2:
	push edi
	call CEntrustedShopDlg::OnArrangeItemResult
	push edi
	push ebx
	mov ecx,esi
	call CPersonalShopDlg::OnPacket
	pop edi
	pop esi
	pop ebx
	ret 8

 Block3:
	push edi
	call CEntrustedShopDlg::OnWithdrawAllResult
	push edi
	push ebx
	mov ecx,esi
	call CPersonalShopDlg::OnPacket
	pop edi
	pop esi
	pop ebx
	ret 8

 Block4:
	push edi
	call CEntrustedShopDlg::OnWithdrawMoneyResult
	push edi
	push ebx
	mov ecx,esi
	call CPersonalShopDlg::OnPacket
	pop edi
	pop esi
	pop ebx
	ret 8

 Block5:
	push edi
	call CEntrustedShopDlg::OnBlackListResult
	push edi
	push ebx
	mov ecx,esi
	call CPersonalShopDlg::OnPacket
	pop edi
	pop esi
	pop ebx
	ret 8

 Block6:
	push edi
	call CEntrustedShopDlg::OnVisitListResult

 Block7:
	push edi
	push ebx
	mov ecx,esi
	call CPersonalShopDlg::OnPacket
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CEntrustedShopDlg::OnStart
__SUB_CLASS_THIS0(0011C760, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1C0],0
	je Block4

 Block1:
	push 0xB
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],0
	call CPersonalShopDlg::CheckCashItemInList
	test eax,eax
	je Block4

 Block2:
	cmp dword ptr [esp+4],0
	jne Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x68]
	push 0xB
	mov ecx,esi
	call eax

 Block4:
	pop esi
	pop ecx
	ret
}
}
// CEntrustedShopDlg::OnWithdrawMoney
_SUB_EXCEPTION_HANDLER(11DE80)
__SUB_CLASS_THIS0(0011DE80, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DE80
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
	cmp dword ptr [esi+0xCF0],0
	je Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x2B
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea ecx,[esp+0xC]
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
// CEntrustedShopDlg::Draw
__SUB_CLASS_THIS(0011F930, __thiscall, 60377,  CEntrustedShopDlg, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CPersonalShopDlg::Draw
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x64]
	mov ecx,esi
	call eax
	cmp dword ptr [esi+0xDC],0
	jne Block2

 Block1:
	mov ecx,esi
	call CEntrustedShopDlg::DrawRemainingTime

 Block2:
	pop esi
	ret 4
}
}
// CEntrustedShopDlg::OnWithdrawAllResult
_SUB_EXCEPTION_HANDLER(11EBA0)
__SUB_CLASS_THIS(0011EBA0, __thiscall, 60382,  CEntrustedShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11EBA0
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
	mov esi,ecx
	mov ecx,dword ptr [esp+0x38]
	call CInPacket::Decode1
	xor ebx,ebx
	movzx edi,al
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x34],ebx
	call edx
	cmp edi,5
	ja Block9

 Block1:
	cmp EDI, 0
je Block2
cmp EDI, 1
je Block3
cmp EDI, 2
je Block4
cmp EDI, 3
je Block5
cmp EDI, 4
je Block6
cmp EDI, 5
je Block11


 Block2:
	lea eax,[esp+0x10]
	push 0xDB8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block7

 Block3:
	lea ecx,[esp+0x14]
	push 0xDB9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block7

 Block4:
	lea edx,[esp+0x18]
	push 0xDBA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block7

 Block5:
	lea eax,[esp+0x1C]
	push 0xDBB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block7

 Block6:
	lea ecx,[esp+0x20]
	push 0xDBC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]

 Block7:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x4C]
	add esp,0x14
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
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
// CEntrustedShopDlg::OnGoOut
_SUB_EXCEPTION_HANDLER(11DD40)
__SUB_CLASS_THIS0(0011DD40, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11DD40
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
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x27
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CEntrustedShopDlg::CVisitListDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(11D630)
__SUB_CLASS_THIS(0011D630, __thiscall, 60431,  CEntrustedShopDlg::CVisitListDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11D630
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,0xFA0
	jne Block8

 Block1:
	mov eax,dword ptr [ecx+0x130]
	test eax,eax
	jl Block15

 Block2:
	cmp eax,dword ptr [ecx+0x148]
	jae Block15

 Block3:
	push eax
	add ecx,0x140
	call ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>>::FindIndex
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0xC],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov dword ptr [esp+0x18],0
	test esi,esi
	je Block7

 Block6:
	mov esi,dword ptr [esi]
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push esi
	call CWvsApp::SetClipboardText

 Block7:
	lea ecx,[esp+8]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>::~ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4

 Block8:
	cmp eax,1
	jne Block10

 Block9:
	push eax
	jmp Block14

 Block10:
	cmp eax,2
	jne Block12

 Block11:
	push eax
	jmp Block14

 Block12:
	cmp eax,8
	jne Block15

 Block13:
	push eax

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x34]
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CEntrustedShopDlg::CBlackListDlg::DeleteBlackList
__SUB_CLASS_THIS0(0011EEF0, __thiscall, 60403,  CEntrustedShopDlg::CBlackListDlg, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1D0]
	push edi
	test eax,eax
	jl Block10

 Block1:
	cmp eax,dword ptr [esi+0x1F0]
	jae Block10

 Block2:
	lea edi,[esi+0x1E8]
	push eax
	mov ecx,edi
	call ZList<ZXString<char>>::FindIndex
	push ecx
	mov ebx,eax
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x1D4]
	call CEntrustedShopDlg::DeleteBlackList
	push 0
	push ebx
	mov ecx,edi
	call ZList<ZXString<char>>::Find
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,edi
	call ZList<ZXString<char>>::RemoveAt

 Block4:
	mov edi,dword ptr [esi+0x1F0]
	mov eax,dword ptr [esi+0x1DC]
	xor edx,edx
	cmp edi,0x14
	setl dl
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	test edi,edi
	jle Block8

 Block5:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,edi
	jge Block8

 Block6:
	test eax,eax
	jl Block8

 Block7:
	mov edx,1
	jmp Block9

 Block8:
	xor edx,edx

 Block9:
	mov eax,dword ptr [esi+0x1E4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block10:
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CEntrustedShopDlg::CBlackListDlg::Draw
_SUB_EXCEPTION_HANDLER(11EFB0)
__SUB_CLASS_THIS(0011EFB0, __thiscall, 60407,  CEntrustedShopDlg::CBlackListDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11EFB0
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esp+0x64]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x18],edi
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x1F4]
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x64],edi
	cmp eax,edi
	je Block34

 Block1:
	lea edi,[esi+0x94]
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0x18]

 Block4:
	mov eax,dword ptr [esp+0x64]
	cmp eax,0x14
	jge Block34

 Block5:
	cmp eax,dword ptr [esi+0x1D0]
	jne Block10

 Block6:
	test ebp,ebp
	je Block37

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edi+8]
	mov esi,dword ptr [edi-4]
	mov ecx,dword ptr [edi+4]
	mov ebx,dword ptr [ebp]
	push 0xFF999999
	sub eax,edx
	push eax
	sub ecx,esi
	push ecx
	push edx
	mov edx,dword ptr [ebx+0x8C]
	push esi
	push ebp
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block9:
	mov esi,dword ptr [esp+0x18]

 Block10:
	mov eax,dword ptr [esp+0x64]
	cmp eax,dword ptr [esi+0x1D0]
	jne Block12

 Block11:
	lea ecx,[esp+0x28]
	push 0x16
	push ecx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],1
	mov byte ptr [esp+0x5C],1
	jmp Block13

 Block12:
	lea edx,[esp+0x24]
	push 0x18
	push edx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],2

 Block13:
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0x2C],ebx
	test ebx,ebx
	je Block15

 Block14:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block15:
	test byte ptr [esp+0x14],2
	mov dword ptr [esp+0x5C],2
	je Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	test byte ptr [esp+0x14],1
	mov byte ptr [esp+0x5C],3
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x28]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	lea eax,[esp+0x1C]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	lea ecx,[esp+0x44]
	push ecx
	mov esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block38

 Block22:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],0xFF
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ebx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],5
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x6C],6
	test ebp,ebp
	je Block37

 Block23:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [edi-4]
	add eax,4
	add ecx,3
	push eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x74],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x5C],4
	cmp word ptr [esp+0x34],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x5C],3
	cmp word ptr [esp+0x44],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x5C],0
	test ebx,ebx
	je Block33

 Block32:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block33:
	inc dword ptr [esp+0x64]
	add edi,0x10
	cmp dword ptr [esp+0x1C],0
	jne Block3

 Block34:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test ebp,ebp
	je Block36

 Block35:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block36:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	push eax
	call _com_issue_error
}
}
// CEntrustedShopDlg::DrawEmployee
_SUB_EXCEPTION_HANDLER(11CE60)
__SUB_CLASS_THIS0(0011CE60, __thiscall, 60374,  CEntrustedShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11CE60
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
	xor ebx,ebx
	cmp dword ptr [esi+0xCEC],ebx
	sete al
	cmp al,bl
	jne Block16

 Block1:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x3C]
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x28],4
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	call eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov dword ptr [esp+0x44],ebx
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0xFF
	mov ebp,dword ptr [esi+0xCEC]
	mov edi,ebp
	mov byte ptr [esp+0x44],1
	cmp edi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [esi+0xCEC]
	mov edi,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x28]
	push ebp
	sub ecx,edi
	shr edx,1
	push ecx
	sub eax,edx
	push eax
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ecx

 Block16:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
