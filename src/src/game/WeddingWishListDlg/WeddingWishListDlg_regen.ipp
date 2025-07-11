#include "regen.hpp"
// WeddingWishListDlg.ipp
#include "WeddingWishListDlg.hpp"

// CWishListGiveDlg::OnPacket
_SUB_EXCEPTION_HANDLER(5AC660)
__SUB(005AC660, __cdecl, 59901,  void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AC660
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
	mov eax,dword ptr [esp+0x34]
	add eax,0xFFFFFFF7
	cmp eax,5
	ja Block22

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block22
cmp EAX, 2
je Block8
cmp EAX, 3
je Block14
cmp EAX, 4
je Block15
cmp EAX, 5
je Block15


 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block4

 Block3:
	push 0x21000003
	lea ecx,[esp+0x38]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x34]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x14],eax
	call _CxxThrowException

 Block4:
	push 0xB64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CWishListGiveDlg::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x3C]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block8:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block22

 Block9:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CWishListGiveDlg::ms_RTTI_CWishListGiveDlg
	call edx
	test eax,eax
	je Block22

 Block10:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test esi,esi
	je Block22

 Block11:
	cmp dword ptr [esi+0xF0],0
	jne Block13

 Block12:
	push 0x21000003
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x10]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],eax
	call _CxxThrowException

 Block13:
	mov edi,dword ptr [esp+0x38]
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xF0],0
	call CWishListGiveDlg::SetWishList
	push edi
	mov ecx,esi
	call CWishListGiveDlg::SetGetItems
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x10C1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	add esp,0x14
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block14:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1098
	push ecx
	jmp Block21

 Block15:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block22

 Block16:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CWishListGiveDlg::ms_RTTI_CWishListGiveDlg
	call eax
	test eax,eax
	je Block22

 Block17:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block22

 Block18:
	cmp dword ptr [eax+0xF0],0
	jne Block20

 Block19:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x24],ecx
	call _CxxThrowException

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [eax+0xF0],0
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x10C2
	push eax

 Block21:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block22:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CWishListGiveDlg::IsKindOf
__SUB_CLASS_THIS(005AC170, __thiscall, 59904,  CWishListGiveDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CWishListGiveDlg::ms_RTTI_CWishListGiveDlg
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
// CWishListRecvDlg::OnMouseButton
__SUB_CLASS_THIS(005ACF30, __thiscall, 59925,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block5

 Block1:
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x4C]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block10

 Block2:
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xDC],ecx
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xE0],0xFFFFFFFF
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block4:
	mov edx,dword ptr [esp+0x18]
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xDC],0xFFFFFFFF
	mov dword ptr [esi+0xE0],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block5:
	cmp eax,0x203
	jne Block10

 Block6:
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x4C]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block10

 Block7:
	cmp dword ptr [esp+0x18],0
	je Block10

 Block8:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esi+0xDC]
	jne Block10

 Block9:
	mov ecx,edi
	call CWishListRecvDlg::SendGetItemRequest

 Block10:
	pop edi
	pop esi
	ret 0x10
}
}
// CWishListInputDlg::OnChildNotify
__SUB_CLASS_THIS(005A60F0, __thiscall, 62243,  CWishListInputDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	push 0
	mov esi,ecx
	call CWnd::InvalidateRect
	cmp dword ptr [esp+0xC],0x64
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ecx
	mov ecx,esi
	call edx

 Block2:
	pop esi
	ret 0xC
}
}
// CWeddingWishListDlg::ITEM::~ITEM
_SUB_EXCEPTION_HANDLER(5A7990)
__SUB_CLASS_THIS0(005A7990, __thiscall, 59827,  CWeddingWishListDlg::ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A7990
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
// CWishListRecvDlg::OnButtonClicked
__SUB_CLASS_THIS(005AD000, __thiscall, 59926,  CWishListRecvDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	je Block7

 Block1:
	cmp eax,1
	jne Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block5:
	cmp eax,8
	jne Block8

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block7:
	call CWishListRecvDlg::SendGetItemRequest

 Block8:
	ret 4
}
}
// CWishListGiveDlg::OnCreate
_SUB_EXCEPTION_HANDLER(5A9A50)
__SUB_CLASS_THIS(005A9A50, __thiscall, 59894,  CWishListGiveDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A9A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
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
	mov dword ptr [ebp+0x28],edi
	xor esi,esi
	push esi
	push esi
	lea ecx,[edi+0xB3C]
	push edi
	call CLayoutMan::Init
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push eax
	call ebx
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x5C]
	push edx
	mov dword ptr [ebp-4],esi
	call ebx
	lea eax,[ebp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[ebp+0x44]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19D4
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp+0x2C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp+0x5C],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x64]
	xor ecx,ecx
	mov word ptr [ebp+0x5C],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp+0x44],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x5C]
	push edx
	call ebx
	lea eax,[ebp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x44]
	push ecx
	mov dword ptr [ebp-4],4
	call ebx
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push esi
	push esi
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19D5
	push edx
	mov byte ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],esi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x2C]
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x2C],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x44],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,esi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x5C],bx
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x64]
	xor edx,edx
	mov word ptr [ebp+0x5C],dx
	cmp eax,esi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp-0x68],esi
	mov dword ptr [ebp-0x74],1
	mov dword ptr [ebp-0x70],esi
	mov dword ptr [ebp-0x6C],esi
	lea ecx,[ebp+0x6C]
	push 0x19D6
	push ecx
	mov dword ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push esi
	push esi
	push 2
	push eax
	lea edx,[ebp+0x64]
	mov bl,9
	push edx
	lea ecx,[edi+0xB3C]
	mov byte ptr [ebp-4],bl
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xA
	cmp eax,esi
	je Block64

 Block43:
	add eax,8
	cmp eax,esi
	je Block64

 Block44:
	lea esi,[eax-8]
	test esi,esi
	je Block46

 Block45:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov eax,dword ptr [edi+0x98]
	mov dword ptr [edi+0x98],esi
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block48

 Block47:
	push 0
	lea ecx,[ebp+0x54]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block48:
	cmp dword ptr [ebp+0x68],0
	mov byte ptr [ebp-4],bl
	je Block50

 Block49:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x68],0

 Block50:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	lea ecx,[ebp+0x6C]
	push 0x19D7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push 0x7D0
	push eax
	lea edx,[ebp+0x64]
	push edx
	lea ecx,[edi+0xB3C]
	mov byte ptr [ebp-4],0xB
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xC
	cmp eax,ebx
	je Block65

 Block53:
	add eax,8
	cmp eax,ebx
	je Block65

 Block54:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block56

 Block55:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov eax,dword ptr [edi+0xB54]
	mov dword ptr [edi+0xB54],esi
	mov dword ptr [ebp+0x58],eax
	cmp eax,ebx
	je Block58

 Block57:
	push ebx
	lea ecx,[ebp+0x54]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block58:
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [ebp+0x68],ebx
	je Block60

 Block59:
	push ebx
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x68],ebx

 Block60:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],8
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x30],ebx
	mov dword ptr [ebp-0x34],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block66

 Block63:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block67

 Block64:
	xor esi,esi
	jmp Block46

 Block65:
	xor esi,esi
	jmp Block56

 Block66:
	xor eax,eax

 Block67:
	mov byte ptr [ebp-4],8
	cmp eax,ebx
	je Block75

 Block68:
	add eax,8
	cmp eax,ebx
	je Block75

 Block69:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block71

 Block70:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	mov eax,dword ptr [edi+0xA8]
	mov dword ptr [edi+0xA8],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,ebx
	je Block73

 Block72:
	push ebx
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block73:
	mov ecx,dword ptr [edi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x34]
	push eax
	push 0x13
	push 0xC8
	push 0x37
	push 0xD8
	push 8
	push 0x3E8
	push edi
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block76

 Block74:
	push eax
	call _com_issue_error

 Block75:
	xor esi,esi
	jmp Block71

 Block76:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xE
	call esi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	push 0
	push 0
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19D8
	mov bl,0xF
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x10
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea ecx,[ebp-0x44]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block83

 Block81:
	cmp eax,0x80004002
	je Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x44],si
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x44],si
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x2C],si
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push edx
	call esi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x16
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	xor esi,esi
	push esi
	push esi
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19D9
	mov bl,0x17
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x18
	cmp dword ptr [_D_G_RM],esi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	lea eax,[ebp-0x64]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block104

 Block102:
	cmp eax,0x80004002
	je Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	mov edi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x64],di
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,esi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x1C],di
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x2C],di
	jne Block115

 Block113:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,esi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov dword ptr [ebp+0x3C],esi
	jmp Block118

 Block118:
	mov edi,dword ptr [ebp+0x40]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov ecx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x24],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ecx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1E
	test edi,edi
	je Block5

 Block119:
	lea edx,[ebp+4]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block124

 Block120:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
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
	and ebx,dword ptr [ebp]
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block124

 Block123:
	cmp edi,0x80004002
	jne Block141

 Block124:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [ebp+0x3C]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x20
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block5

 Block125:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x24],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block130

 Block126:
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
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block130

 Block129:
	cmp edi,0x80004002
	jne Block141

 Block130:
	mov edi,dword ptr [ebp+0x28]
	mov ecx,dword ptr [edi+0xA8]
	mov byte ptr [ebp-4],0x23
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x14],si
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+4],si
	jne Block137

 Block135:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov eax,dword ptr [ebp+0x3C]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x3C],eax
	jl Block118

 Block139:
	mov eax,dword ptr [edi+0xA8]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block142

 Block140:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block143

 Block141:
	push edi
	call _com_issue_error

 Block142:
	xor eax,eax

 Block143:
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block147

 Block144:
	add eax,8
	je Block147

 Block145:
	lea esi,[eax-8]
	test esi,esi
	je Block148

 Block146:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esi+0xC]
	push ecx
	call ebx
	jmp Block149

 Block147:
	xor esi,esi

 Block148:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block149:
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [edi+0xB0],esi
	test eax,eax
	je Block153

 Block150:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block151:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block153

 Block152:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block153:
	mov ecx,dword ptr [edi+0xB0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x55
	push 0xAF
	push 0xC4
	push 8
	push 1
	push 0x3E9
	push edi
	call eax
	mov eax,dword ptr [edi+0xB0]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0x46
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block155

 Block154:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block156

 Block155:
	xor eax,eax

 Block156:
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block166

 Block157:
	add eax,8
	je Block166

 Block158:
	lea esi,[eax-8]
	test esi,esi
	je Block160

 Block159:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block160:
	mov eax,dword ptr [edi+0xB8]
	mov dword ptr [edi+0xB8],esi
	test eax,eax
	je Block164

 Block161:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block164

 Block162:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block164

 Block163:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block164:
	mov ecx,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xA1
	push 0x4F
	push 0x194
	push 8
	push 1
	push 0x3EA
	push edi
	call eax
	mov eax,dword ptr [edi+0xB8]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0x92
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block167

 Block165:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block168

 Block166:
	xor esi,esi
	jmp Block160

 Block167:
	xor eax,eax

 Block168:
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block185

 Block169:
	add eax,8
	je Block185

 Block170:
	lea esi,[eax-8]
	test esi,esi
	je Block172

 Block171:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block172:
	mov eax,dword ptr [edi+0xB5C]
	mov dword ptr [edi+0xB5C],esi
	test eax,eax
	je Block176

 Block173:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block176

 Block174:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block176

 Block175:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block176:
	mov ecx,dword ptr [edi+0xB5C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x59
	push 0x37
	push 0xC4
	push 8
	push 1
	push 0x7D1
	push edi
	call eax
	mov eax,dword ptr [edi+0xB5C]
	lea ecx,[ebp+0x28]
	push 0x13
	push ecx
	mov dword ptr [eax+0x34],0x5A
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xD0]
	add esp,8
	cmp esi,eax
	je Block181

 Block177:
	mov dword ptr [edi+0xD0],eax
	test eax,eax
	je Block179

 Block178:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block179:
	test esi,esi
	je Block181

 Block180:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block181:
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block183

 Block182:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block183:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call esi
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block186

 Block184:
	push eax
	call _com_issue_error

 Block185:
	xor esi,esi
	jmp Block172

 Block186:
	lea edx,[ebp+4]
	push edx
	mov byte ptr [ebp-4],0x27
	call esi
	lea eax,[ebp+4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block188

 Block187:
	push eax
	call _com_issue_error

 Block188:
	push 0
	push 0
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+4]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x28
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x29
	jne Block190

 Block189:
	push 0x80004003
	call _com_issue_error

 Block190:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0x28
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block196

 Block191:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xD4]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	test eax,eax
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block193:
	mov dword ptr [edi+0xD4],ebx
	test esi,esi
	jge Block198

 Block194:
	cmp esi,0x80004002
	je Block198

 Block195:
	push esi
	call _com_issue_error

 Block196:
	mov eax,dword ptr [edi+0xD4]
	test eax,eax
	je Block198

 Block197:
	mov dword ptr [edi+0xD4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block198:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x28
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov esi,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+4],si
	jne Block205

 Block203:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x14],si
	jne Block209

 Block207:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0xE4],eax
	mov dword ptr [edi+0xE0],eax
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [edi+0xF0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x15
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	lea esp,[ebp-0x84]
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
// CWishListGiveDlg::OnMouseButton
__SUB_CLASS_THIS(005A7A30, __thiscall, 59896,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block5

 Block1:
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x4C]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block10

 Block2:
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xDC],ecx
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xE0],0xFFFFFFFF
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block4:
	mov edx,dword ptr [esp+0x18]
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xDC],0xFFFFFFFF
	mov dword ptr [esi+0xE0],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block5:
	cmp eax,0x203
	jne Block10

 Block6:
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x4C]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block10

 Block7:
	cmp dword ptr [esp+0x18],0
	jne Block10

 Block8:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esi+0xE0]
	jne Block10

 Block9:
	mov ecx,edi
	call CWishListGiveDlg::SendPutItemRequest

 Block10:
	pop edi
	pop esi
	ret 0x10
}
}
// CWishListInputDlg::Update
__SUB_CLASS_THIS0(005A6190, __thiscall, 62236,  CWishListInputDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xBC],0
	jl Block4

 Block1:
	mov ecx,dword ptr [esi+0xB0]
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block3

 Block2:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xBC],0xFFFFFFFF
	call CWnd::InvalidateRect

 Block3:
	cmp dword ptr [esi+0xBC],0
	jge Block6

 Block4:
	mov eax,dword ptr [esi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [esi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block6:
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CWeddingWishListDlg::Draw
_SUB_EXCEPTION_HANDLER(5A6B40)
__SUB_CLASS_THIS(005A6B40, __thiscall, 59792,  CWeddingWishListDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6B40
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x18]
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
	mov dword ptr [esp+0x18],0

 Block5:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x2C]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x44]
	mov ecx,edi
	call eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block9

 Block8:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	mov ecx,edi
	call edx
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
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
// CWeddingWishListDlg::OnButtonClicked
__SUB_CLASS_THIS(005ABCD0, __thiscall, 59797,  CWeddingWishListDlg, void, uint32_t) {
__asm {

 Block0:
	ret 4
}
}
// CWeddingWishListDlg::CmpPutItem
__SUB_CLASS_THIS0(005A6430, __thiscall, 59808,  CWeddingWishListDlg, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xCC]
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
	mov eax,dword ptr [ebx+0xC8]
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
	mov edi,dword ptr [ebx+0xCC]
	mov ecx,dword ptr [ebx+0xC8]
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
// CWishListInputDlg::OnButtonClicked
__SUB_CLASS_THIS(005AB680, __thiscall, 62241,  CWishListInputDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x7D0
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	call CWishListInputDlg::OnEnter
	ret 4

 Block4:
	call CWishListInputDlg::OnDelete
	ret 4

 Block5:
	call CWishListInputDlg::OnOK

 Block6:
	ret 4
}
}
// CWishListRecvDlg::DrawPutItem
_SUB_EXCEPTION_HANDLER(5A8AE0)
__SUB_CLASS_THIS(005A8AE0, __thiscall, 59927,  CWishListRecvDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A8AE0
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
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0xB8]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov edx,eax
	add ecx,ecx
	mov ebx,0x64
	mov dword ptr [esp+0x68],0
	mov dword ptr [esp+0x28],edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx

 Block1:
	mov eax,dword ptr [ebp+0xC8]
	test eax,eax
	je Block49

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block49

 Block3:
	mov edi,eax
	add edi,ecx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x68],1
	cmp dword ptr [ebp+0xE4],edx
	jne Block12

 Block4:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],edx
	mov ecx,dword ptr [esp+0x70]
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x68],2
	test ecx,ecx
	je Block53

 Block5:
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push esi
	mov dword ptr [eax+0xC],edx
	lea eax,[ebx-3]
	push eax
	push 0xFE
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x80]
	call ecx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],1
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov edi,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x1C]

 Block12:
	mov eax,dword ptr [edi+0x18]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
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
	push 2
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	call eax
	mov edx,dword ptr [edi]
	push eax
	lea ecx,[ebx+0x1F]
	push ecx
	push 0xDB
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block20

 Block17:
	cmp dword ptr [esi+4],0
	jne Block19

 Block18:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block19:
	mov edx,dword ptr [esi+4]
	jmp Block21

 Block20:
	xor edx,edx

 Block21:
	mov dword ptr [esp+0x14],0
	test edx,edx
	je Block25

 Block22:
	mov eax,edx
	lea esi,[eax+1]
	lea ebx,[ebx]

 Block23:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block23

 Block24:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block25:
	mov eax,dword ptr [ebp+0xD0]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ecx,[esp+0x1C]
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
	jl Block54

 Block28:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],4
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block54

 Block29:
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x44]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x78],6
	test ecx,ecx
	je Block53

 Block30:
	push ebx
	push 0x104
	mov byte ptr [esp+0x80],5
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x40],si
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x50],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [edi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block41

 Block39:
	cmp eax,3
	je Block41

 Block40:
	cmp eax,4
	jne Block46

 Block41:
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xD4]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	push esi
	lea eax,[ebx+0x11]
	push eax
	push 0xD9
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	call draw_number_by_image
	add esp,0x18

 Block46:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ecx,dword ptr [esp+0x20]

 Block49:
	mov edx,dword ptr [esp+0x28]
	add ebx,0x2A
	add ecx,0x1C
	inc edx
	cmp ebx,0x10C
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],edx
	jl Block1

 Block50:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	push eax
	call _com_issue_error
}
}
// CWishListGiveDlg::SetWeddingWishListDlg
__SUB_CLASS_THIS(005ABA10, __thiscall, 59892,  CWishListGiveDlg, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWishListGiveDlg::SetWishList
	lea ecx,[esi+0xC8]
	push ecx
	push 0
	mov ecx,esi
	call CWeddingWishListDlg::SetPutItems
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CWeddingWishListDlg::OnChildNotify
__SUB_CLASS_THIS(005A6200, __thiscall, 59796,  CWeddingWishListDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3E9
	je Block5

 Block1:
	cmp eax,0x3EA
	je Block5

 Block2:
	cmp eax,0x3E8
	jne Block8

 Block3:
	cmp edx,0x1F4
	jne Block8

 Block4:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CWeddingWishListDlg::OnTabChanged
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
// CWeddingWishListDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(005ABD00, __thiscall, 59806,  CWeddingWishListDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	mov eax,1
	ret 0x10
}
}
// CWishListRecvDlg::IsKindOf
__SUB_CLASS_THIS(005ACA70, __thiscall, 59932,  CWishListRecvDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CWishListRecvDlg::ms_RTTI_CWishListRecvDlg
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
// CWishListInputDlg::OnMouseButton
__SUB_CLASS_THIS(005A6A50, __thiscall, 62242,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	call CWndMan::SetFocus
	cmp dword ptr [esp+8],0x201
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push eax
	add esi,0xFFFFFFFC
	push ecx
	mov ecx,esi
	call CWishListInputDlg::GetIndexFromPoint
	test eax,eax
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	pop esi
	ret 0x10
}
}
// CWishListRecvDlg::DrawGetItem
_SUB_EXCEPTION_HANDLER(5A86B0)
__SUB_CLASS_THIS(005A86B0, __thiscall, 59927,  CWishListRecvDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A86B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0xB0]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	add ecx,ecx
	mov ebx,0x3A
	mov dword ptr [esp+0x60],0
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [ebp+0xE0],eax
	jne Block10

 Block2:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edx
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x60],1
	test ecx,ecx
	je Block52

 Block3:
	mov ebx,dword ptr [esp+0x28]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	push esi
	mov dword ptr [eax+0xC],edx
	lea eax,[ebx-3]
	push eax
	push 0x2F
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x80]
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebp,dword ptr [esp+0x1C]

 Block10:
	mov eax,dword ptr [ebp+0xC4]
	test eax,eax
	je Block48

 Block11:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [eax-4]
	jae Block48

 Block12:
	mov esi,eax
	add esi,dword ptr [esp+0x20]
	sub esp,8
	mov eax,dword ptr [esi+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
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
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx]
	push 2
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	call eax
	mov edx,dword ptr [esi]
	push eax
	lea ecx,[ebx+0x1F]
	push ecx
	push 0xC
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x94]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x94]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov edi,dword ptr [esi+0xC]
	test edi,edi
	je Block20

 Block17:
	cmp dword ptr [edi+4],0
	jne Block19

 Block18:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block19:
	mov edx,dword ptr [edi+4]
	jmp Block21

 Block20:
	xor edx,edx

 Block21:
	mov dword ptr [esp+0x14],0
	test edx,edx
	je Block25

 Block22:
	mov eax,edx
	lea edi,[eax+1]

 Block23:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block23

 Block24:
	sub eax,edi
	mov edi,eax
	push edi
	push edx
	push 0
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block25:
	mov eax,dword ptr [ebp+0xD0]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x68],2
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x48]
	push edx
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block53

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],3
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block53

 Block29:
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x74],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x70],5
	test ecx,ecx
	je Block52

 Block30:
	push ebx
	push 0x35
	mov byte ptr [esp+0x78],4
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x60],3
	cmp word ptr [esp+0x38],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x48],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block41

 Block39:
	cmp eax,3
	je Block41

 Block40:
	cmp eax,4
	jne Block46

 Block41:
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xD4]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	push esi
	lea eax,[ebx+0x11]
	push eax
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	call draw_number_by_image
	add esp,0x18

 Block46:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	add dword ptr [esp+0x20],0x1C
	inc dword ptr [esp+0x18]
	add ebx,0x2A
	cmp ebx,0x10C
	mov dword ptr [esp+0x24],ebx
	jl Block1

 Block49:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	push eax
	call _com_issue_error
}
}
// CWishListGiveDlg::GetRTTI
__SUB_CLASS_THIS0(005AC150, __thiscall, 59903,  CWishListGiveDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CWishListGiveDlg::ms_RTTI_CWishListGiveDlg
	ret
}
}
// CWishListInputDlg::Draw
_SUB_EXCEPTION_HANDLER(5A73C0)
__SUB_CLASS_THIS(005A73C0, __thiscall, 62240,  CWishListInputDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A73C0
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x90]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0xB8]
	xor ecx,ecx
	mov dword ptr [esp+0x88],ecx
	cmp eax,ecx
	je Block2

 Block1:
	mov edx,dword ptr [eax+0x38]
	mov dword ptr [esp+0x20],edx
	jmp Block3

 Block2:
	mov dword ptr [esp+0x20],ecx

 Block3:
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[edx+5]
	mov ecx,eax
	shl ecx,4
	add ecx,eax
	lea eax,[edi+edx*4+0xC4]
	mov dword ptr [esp+0x14],edx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x1C],0x56
	mov dword ptr [esp+0x18],eax
	mov edi,edi

 Block4:
	lea eax,[edx+0xA]
	cmp eax,0xA
	jl Block6

 Block5:
	mov eax,0xA

 Block6:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,eax
	jge Block50

 Block7:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block47

 Block8:
	cmp dword ptr [eax-4],0
	je Block47

 Block9:
	cmp ecx,dword ptr [edi+0xBC]
	jne Block18

 Block10:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [edi+0xEC]
	mov byte ptr [esp+0x88],1
	test esi,esi
	je Block48

 Block11:
	mov ebp,dword ptr [esp+0x30]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebx+0x80]
	push edx
	lea edx,[eax+eax*8]
	mov eax,dword ptr [esp+0x38]
	add edx,edx
	sub eax,edx
	push eax
	push 0xC
	push esi
	call ecx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x88],0
	jne Block27

 Block14:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block16:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block17:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block18:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x94],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0xF0]
	push 0x9E
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x90],2
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	lea ecx,[esp+0x98]
	push ecx
	call format_string_1
	mov edx,dword ptr [esp+0x20]
	add esp,0xC
	cmp edx,dword ptr [edi+0xBC]
	jne Block32

 Block21:
	lea eax,[esp+0x50]
	push eax
	call ebp
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block22:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x8C],3
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block23:
	mov eax,dword ptr [esp+0x90]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push esi
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x9C],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xF4]
	mov byte ptr [esp+0x98],5
	test ecx,ecx
	je Block48

 Block24:
	mov edx,dword ptr [esp+0x2C]
	push edx
	push 0xE
	mov byte ptr [esp+0xA0],4
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],3
	jne Block28

 Block25:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x30]
	push eax
	call ebx
	jmp Block17

 Block28:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block29:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],2
	jne Block31

 Block30:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	jmp Block41

 Block31:
	lea eax,[esp+0x50]
	push eax
	jmp Block44

 Block32:
	lea ecx,[esp+0x70]
	push ecx
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block33:
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0x8C],6
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block34:
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x94]
	lea eax,[esp+0x64]
	push eax
	push esi
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x9C],7
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xF0]
	mov byte ptr [esp+0x98],8
	test ecx,ecx
	je Block48

 Block35:
	mov eax,dword ptr [esp+0x2C]
	push eax
	push 0xE
	mov byte ptr [esp+0xA0],7
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],6
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x60]
	push edx
	call ebx

 Block39:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x88],2
	jne Block43

 Block40:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]

 Block41:
	test eax,eax
	je Block45

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block43:
	lea ecx,[esp+0x70]
	push ecx

 Block44:
	call ebx

 Block45:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x88],0
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],4
	mov edx,dword ptr [esp+0x20]
	mov eax,0x11
	add dword ptr [esp+0x24],eax
	add dword ptr [esp+0x1C],eax
	jmp Block4

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test esi,esi
	je Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block52:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 4
}
}
// CWishListInputDlg::OnKey
__SUB_CLASS_THIS(005A9920, __thiscall, 62245,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xD
	je Block3

 Block1:
	cmp eax,0x1B
	je Block4

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey

 Block3:
	add ecx,0xFFFFFFFC
	call CWishListInputDlg::OnEnter

 Block4:
	ret 8
}
}
// CWishListGiveDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(005A6570, __thiscall, 59900,  CWishListGiveDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xB0]
	mov ecx,dword ptr [eax+0x38]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov edi,0xB3
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp+0xC4]
	test eax,eax
	je Block12

 Block3:
	mov edx,dword ptr [esp+0x10]
	cmp edx,dword ptr [eax-4]
	jae Block12

 Block4:
	mov esi,dword ptr [ebp+0xD8]
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
	mov esi,dword ptr [ebp+0xD8]
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
	cmp edi,0x107
	jl Block2

 Block12:
	mov ecx,dword ptr [ebp+0xB8]
	mov edx,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x10],edx
	mov edi,0x4F

 Block13:
	mov eax,dword ptr [ebp+0xC8]
	test eax,eax
	je Block23

 Block14:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,dword ptr [eax-4]
	jae Block23

 Block15:
	mov esi,dword ptr [ebp+0xD8]
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
	mov esi,dword ptr [ebp+0xD8]
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
	add eax,0xD9
	push eax
	push edi
	push 0xD9
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
	cmp edi,0xF7
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
// CWishListGiveDlg::CWishListGiveDlg
_SUB_EXCEPTION_HANDLER(5ABFC0)
__SUB_CLASS_THIS0(005ABFC0, __thiscall, 59889,  CWishListGiveDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ABFC0
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
	mov dword ptr [esp+0x28],esi
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	call CWeddingWishListDlg::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CWishListGiveDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListGiveDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListGiveDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esi+0xB54],ebp
	mov dword ptr [esi+0xB5C],ebp
	mov dword ptr [esi+0xB60],ebp
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x2034]
	mov byte ptr [esp+0x34],4
	cmp eax,ebp
	jne Block2

 Block1:
	lea ecx,[esp+0x24]
	push 0x1095
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],5
	lea ebx,[ebp+1]
	jmp Block3

 Block2:
	lea edx,[esp+0x20]
	push 0x1096
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x34],6
	mov ebx,2

 Block3:
	mov edi,dword ptr [eax]
	lea eax,[esp+0x1C]
	push 0x19A4
	push eax
	mov dword ptr [esp+0x1C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x40],7
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov dword ptr [esp+0x34],5
	test bl,2
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x34],4
	test bl,1
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov edi,dword ptr [esp+0x18]
	push 1
	push ebp
	push 1
	push edi
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov byte ptr [esp+0x34],3
	cmp edi,ebp
	je Block13

 Block12:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,esi
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
// CWishListGiveDlg::OnButtonClicked
__SUB_CLASS_THIS(005A7B00, __thiscall, 59898,  CWishListGiveDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	je Block7

 Block1:
	cmp eax,1
	jne Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block5:
	cmp eax,8
	jne Block8

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block7:
	call CWishListGiveDlg::SendPutItemRequest

 Block8:
	ret 4
}
}
// CWishListGiveDlg::OnChildNotify
__SUB_CLASS_THIS(005A6300, __thiscall, 59897,  CWishListGiveDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x7D1
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
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push edx
	push eax
	call CWeddingWishListDlg::OnChildNotify
	pop esi
	ret 0xC
}
}
// CWeddingWishListDlg::SetWeddingWishListDlg
__SUB_CLASS_THIS(005ABC90, __thiscall, 59788,  CWeddingWishListDlg, void, CInPacket&) {
__asm {

 Block0:
	ret 4
}
}
// CWishListInputDlg::~CWishListInputDlg
_SUB_EXCEPTION_HANDLER(5A6C40)
__SUB_CLASS_THIS0(005A6C40, __thiscall, 62236,  CWishListInputDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6C40
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
	int 3// TODO: 	mov dword ptr [esi],offset CWishListInputDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListInputDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListInputDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xFC]
	mov dword ptr [esp+0x1C],0xA
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xF8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	push offset ZXString<char>::~ZXString<char>
	push 0xA
	push 4
	lea eax,[esi+0xC4]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
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
// CWishListRecvDlg::SetScrollBar
__SUB_CLASS_THIS0(005A67A0, __thiscall, 59921,  CWishListRecvDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	je Block5

 Block1:
	cmp dword ptr [eax-4],5
	jbe Block5

 Block2:
	test eax,eax
	jne Block4

 Block3:
	mov eax,0xFFFFFFFC
	jmp Block6

 Block4:
	mov eax,dword ptr [eax-4]
	add eax,0xFFFFFFFC
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esi+0xB0]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xC8]
	test eax,eax
	je Block11

 Block7:
	cmp dword ptr [eax-4],4
	jbe Block11

 Block8:
	test eax,eax
	jne Block10

 Block9:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block10:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xB8]
	add eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block11:
	mov ecx,dword ptr [esi+0xB8]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CWishListGiveDlg::SetRet
_SUB_EXCEPTION_HANDLER(5A6DE0)
__SUB_CLASS_THIS(005A6DE0, __thiscall, 59893,  CWishListGiveDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6DE0
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
	push 0xA2
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
// CWeddingWishListDlg::CWeddingWishListDlg
_SUB_EXCEPTION_HANDLER(5ABBB0)
__SUB_CLASS_THIS0(005ABBB0, __thiscall, 59785,  CWeddingWishListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ABBB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWeddingWishListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWeddingWishListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWeddingWishListDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	lea ecx,[esi+0xF4]
	mov byte ptr [esp+0x18],0xD
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
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
// CWeddingWishListDlg::ITEM::operator=
__SUB_CLASS_THIS(005A8F30, __thiscall, 59829,  CWeddingWishListDlg::ITEM, CWeddingWishListDlg::ITEM&, const CWeddingWishListDlg::ITEM&) {
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
// CWishListRecvDlg::SendGetItemRequest
_SUB_EXCEPTION_HANDLER(5ABA50)
__SUB_CLASS_THIS0(005ABA50, __thiscall, 59921,  CWishListRecvDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ABA50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [edi+0xE0]
	test ecx,ecx
	jl Block7

 Block1:
	mov eax,dword ptr [edi+0xC4]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	cmp ecx,eax
	jae Block7

 Block4:
	cmp dword ptr [edi+0xF0],0
	jne Block7

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x36C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block7

 Block6:
	mov eax,dword ptr [edi+0xE0]
	mov edx,dword ptr [edi+0xC4]
	lea ecx,[eax*8]
	sub ecx,eax
	lea ebx,[edx+ecx*4]
	mov ecx,dword ptr [ebx]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	push 0xA2
	lea ecx,[esp+0x18]
	add esi,edx
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	movzx eax,byte ptr [ebx+8]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea edx,[edi+0xCC]
	push edx
	push esi
	mov ecx,edi
	mov dword ptr [edi+0xF0],1
	mov dword ptr [edi+0xEC],esi
	call CWeddingWishListDlg::SetPutItems
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret
}
}
// CWishListInputDlg::OnCreate
_SUB_EXCEPTION_HANDLER(5A91F0)
__SUB_CLASS_THIS(005A91F0, __thiscall, 62239,  CWishListInputDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A91F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	lea ebp,[esi+0xFC]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x13
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	add esp,8
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xF0],eax
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
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	lea ecx,[esp+0x14]
	push 0x16
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF8]
	add esp,8
	cmp edi,eax
	je Block12

 Block8:
	mov dword ptr [esi+0xF8],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	test edi,edi
	je Block12

 Block11:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block12:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea eax,[esp+0x14]
	push 0
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF4]
	add esp,8
	cmp edi,eax
	je Block19

 Block15:
	mov dword ptr [esi+0xF4],eax
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	test edi,edi
	je Block19

 Block18:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block19:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x90],0
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x19D0
	push ecx
	mov byte ptr [esp+0xA8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA0],2
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0xA0],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x8C],1
	cmp word ptr [esp+0x38],bx
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block34:
	mov byte ptr [esp+0x8C],0
	cmp word ptr [esp+0x28],bx
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block38:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block42:
	lea eax,[esp+0x14]
	push 0x19D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0xFFFFFFF3
	push 0xDC
	push 0x7D0
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,4
	mov ecx,ebp
	mov dword ptr [esp+0xA4],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x8C],5
	test eax,eax
	je Block74

 Block43:
	add eax,8
	je Block74

 Block44:
	lea edi,[eax-8]
	test edi,edi
	je Block46

 Block45:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block48:
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x8C],bl
	je Block50

 Block49:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block50:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	lea eax,[esp+0x14]
	push 0x19D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0xFFFFFFF3
	push 0xDC
	push 0x7D1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ebx,6
	mov ecx,ebp
	mov dword ptr [esp+0xA4],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x8C],7
	test eax,eax
	je Block75

 Block53:
	add eax,8
	je Block75

 Block54:
	lea edi,[eax-8]
	test edi,edi
	je Block56

 Block55:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block58

 Block57:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block58:
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x8C],bl
	je Block60

 Block59:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block60:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	lea eax,[esp+0x14]
	push 0x19D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0xDC
	push 0x7D2
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0xA4],8
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x8C],9
	test eax,eax
	je Block76

 Block63:
	add eax,8
	je Block76

 Block64:
	lea edi,[eax-8]
	test edi,edi
	je Block66

 Block65:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block68

 Block67:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block68:
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x8C],8
	je Block70

 Block69:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block70:
	mov eax,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x8C],edi
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x8C],0xA
	test eax,eax
	je Block77

 Block73:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block78

 Block74:
	xor edi,edi
	jmp Block46

 Block75:
	xor edi,edi
	jmp Block56

 Block76:
	xor edi,edi
	jmp Block66

 Block77:
	xor eax,eax

 Block78:
	mov dword ptr [esp+0x8C],edi
	test eax,eax
	je Block93

 Block79:
	add eax,8
	je Block93

 Block80:
	lea edi,[eax-8]
	test edi,edi
	je Block82

 Block81:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block82:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block84

 Block83:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block84:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xA5
	push 0x4B
	push 0x190
	push 8
	push 1
	push 0xBB8
	push esi
	call eax
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [eax+0x34],0xA0
	mov ecx,dword ptr [esi+0xB8]
	push 0
	call CCtrlScrollBar::SetScrollRange
	lea ecx,[esp+0x48]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor ecx,ecx
	mov dword ptr [esp+0x50],ecx
	lea ecx,[esp+0x14]
	xor eax,eax
	push 0x1A25
	mov ebx,0xB
	or ebp,0xFFFFFFFF
	push ecx
	mov dword ptr [esp+0x94],ebx
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x74],ebp
	mov dword ptr [esp+0x6C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x5C]
	cmp edx,edi
	je Block89

 Block85:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block87

 Block86:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x5C],0

 Block87:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x5C],edi
	test edi,edi
	je Block89

 Block88:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block89:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block91

 Block90:
	call _xbstr_t::Data_t::Release

 Block91:
	push offset _S_
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x7C],0x17
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x8C],0xC
	test eax,eax
	je Block94

 Block92:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block95

 Block93:
	xor edi,edi
	jmp Block82

 Block94:
	xor eax,eax

 Block95:
	mov byte ptr [esp+0x8C],bl
	test eax,eax
	je Block102

 Block96:
	add eax,8
	je Block102

 Block97:
	lea edi,[eax-8]
	test edi,edi
	je Block99

 Block98:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block99:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block101

 Block100:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block101:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x48]
	push eax
	push 0xD
	push 0x80
	push 0x3B
	push 0xD
	push 0x3E8
	push esi
	call edx
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x8C],ebp
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 4

 Block102:
	xor edi,edi
	jmp Block99
}
}
// CWeddingWishListDlg::IsKindOf
__SUB_CLASS_THIS(005ABD30, __thiscall, 59812,  CWeddingWishListDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CWeddingWishListDlg::ms_RTTI_CWeddingWishListDlg
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
// CWishListRecvDlg::OnPacket
_SUB_EXCEPTION_HANDLER(5AD050)
__SUB(005AD050, __cdecl, 59929,  void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD050
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
	mov eax,dword ptr [esp+0x3C]
	add eax,0xFFFFFFF6
	cmp eax,7
	ja Block32

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block32
cmp EAX, 2
je Block32
cmp EAX, 3
je Block32
cmp EAX, 4
je Block32
cmp EAX, 5
je Block8
cmp EAX, 6
je Block22
cmp EAX, 7
je Block28


 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block4

 Block3:
	push 0x21000003
	lea ecx,[esp+0x40]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x3C]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],eax
	call _CxxThrowException

 Block4:
	push 0xB58
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CWishListRecvDlg::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x3C]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block8:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block32

 Block9:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CWishListRecvDlg::ms_RTTI_CWishListRecvDlg
	call edx
	test eax,eax
	je Block32

 Block10:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test esi,esi
	je Block32

 Block11:
	cmp dword ptr [esi+0xF0],0
	jne Block13

 Block12:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block13:
	mov eax,dword ptr [esi+0xEC]
	mov dword ptr [esi+0xF0],0
	test eax,eax
	jle Block32

 Block14:
	cmp eax,5
	jg Block32

 Block15:
	mov ecx,dword ptr [esi+0xA8]
	cmp dword ptr [ecx+0x44],eax
	je Block17

 Block16:
	dec eax
	push eax
	call CCtrlTab::SetTab

 Block17:
	mov ebx,dword ptr [esi+0xB8]
	mov ebp,dword ptr [ebx+0x38]
	mov ecx,esi
	call CWeddingWishListDlg::CmpPutItem
	mov edi,eax
	cmp edi,ebp
	jge Block19

 Block18:
	push edi
	mov ecx,ebx
	call CCtrlScrollBar::SetCurPos

 Block19:
	add ebp,4
	cmp edi,ebp
	jle Block21

 Block20:
	mov ecx,dword ptr [esi+0xB8]
	lea edx,[edi-4]
	push edx
	call CCtrlScrollBar::SetCurPos

 Block21:
	mov eax,dword ptr [esp+0x40]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xE4],edi
	call CWishListRecvDlg::SetGetItems
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block22:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block32

 Block23:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CWishListRecvDlg::ms_RTTI_CWishListRecvDlg
	call eax
	test eax,eax
	je Block32

 Block24:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block32

 Block25:
	cmp dword ptr [eax+0xF0],0
	jne Block27

 Block26:
	push 0x21000003
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x2C],ecx
	call _CxxThrowException

 Block27:
	mov dword ptr [eax+0xF0],0
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block28:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block32

 Block29:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CWishListRecvDlg::ms_RTTI_CWishListRecvDlg
	call edx
	test eax,eax
	je Block32

 Block30:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block32

 Block31:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x374
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block32:
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
// CWishListGiveDlg::Draw
_SUB_EXCEPTION_HANDLER(5AA830)
__SUB_CLASS_THIS(005AA830, __thiscall, 59895,  CWishListGiveDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AA830
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
	call CWeddingWishListDlg::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x20]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block2

 Block1:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block2:
	mov ecx,edi
	call CWishListGiveDlg::DrawWishList
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CWeddingWishListDlg::OnMouseButton
__SUB_CLASS_THIS(005ABCC0, __thiscall, 59793,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CWeddingWishListDlg::SetPutItems
_SUB_EXCEPTION_HANDLER(5AB700)
__SUB_CLASS_THIS(005AB700, __thiscall, 59803,  CWeddingWishListDlg, void, long, ZArray<CWeddingWishListDlg::ITEM>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AB700
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
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0xA8]
	mov eax,dword ptr [eax+0x44]
	inc eax
	mov dword ptr [ebp+8],eax

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x3C]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
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
	test edi,edi
	je Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block6:
	mov dword ptr [ebp-0x38],0

 Block7:
	mov ecx,dword ptr [ebp+0xC]
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	mov ebx,dword ptr [ebp+8]
	mov edi,1
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp eax,edi
	jl Block38

 Block8:
	lea ecx,[ecx]

 Block9:
	push edi
	push ebx
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov edx,dword ptr [ebp-0x24]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x24]
	test ecx,ecx
	je Block13

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block13:
	mov dword ptr [ebp-0x24],0

 Block14:
	test edi,edi
	je Block36

 Block15:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block36

 Block16:
	mov eax,dword ptr [edi+0x18]
	or eax,dword ptr [edi+0x1C]
	jne Block36

 Block17:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block36

 Block19:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block36

 Block21:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::IsAccountSharableItem_1
	test eax,eax
	jne Block36

 Block22:
	mov ecx,dword ptr [ebp+0xC]
	push 0xFFFFFFFF
	call ZArray<CWeddingWishListDlg::ITEM>::InsertBefore
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
	xor ebx,ebx
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov dword ptr [ebp-4],ebx
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
	push ebx
	push ebx
	mov byte ptr [ebp-4],1
	call MultiByteToWideChar
	push edi
	lea ecx,[ebp-0x14]
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x14]
	push edx
	lea ecx,[esi+0xC]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp-0x14]
	cmp ecx,ebx
	je Block24

 Block23:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],ebx

 Block24:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esi]
	push ebx
	push 1
	push eax
	lea ecx,[ebp-0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block33

 Block29:
	mov dword ptr [esi+0x10],eax
	cmp eax,ebx
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	cmp edi,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block33:
	mov eax,dword ptr [ebp-0x34]
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov esi,dword ptr [ebp-0x1C]

 Block36:
	mov edi,dword ptr [ebp-0x18]
	mov ebx,dword ptr [ebp+8]
	inc edi
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp edi,eax
	jle Block9

 Block37:
	mov eax,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xE4],0xFFFFFFFF
	jmp Block39

 Block38:
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ecx+0xE4],0xFFFFFFFF

 Block39:
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
// CWishListGiveDlg::DrawPutItem
_SUB_EXCEPTION_HANDLER(5A8260)
__SUB_CLASS_THIS(005A8260, __thiscall, 59899,  CWishListGiveDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A8260
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
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0xB8]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	mov edx,eax
	add ecx,ecx
	mov ebx,0x52
	mov dword ptr [esp+0x68],0
	mov dword ptr [esp+0x28],edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx

 Block1:
	mov eax,dword ptr [ebp+0xC8]
	test eax,eax
	je Block49

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block49

 Block3:
	mov edi,eax
	add edi,ecx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x68],1
	cmp dword ptr [ebp+0xE4],edx
	jne Block12

 Block4:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],edx
	mov ecx,dword ptr [esp+0x70]
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x68],2
	test ecx,ecx
	je Block53

 Block5:
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push esi
	mov dword ptr [eax+0xC],edx
	lea eax,[ebx-3]
	push eax
	push 0xFE
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x80]
	call ecx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],1
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov edi,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x1C]

 Block12:
	mov eax,dword ptr [edi+0x18]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
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
	push 2
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	call eax
	mov edx,dword ptr [edi]
	push eax
	lea ecx,[ebx+0x1F]
	push ecx
	push 0xDB
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	je Block20

 Block17:
	cmp dword ptr [esi+4],0
	jne Block19

 Block18:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block19:
	mov edx,dword ptr [esi+4]
	jmp Block21

 Block20:
	xor edx,edx

 Block21:
	mov dword ptr [esp+0x14],0
	test edx,edx
	je Block25

 Block22:
	mov eax,edx
	lea esi,[eax+1]
	lea ebx,[ebx]

 Block23:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block23

 Block24:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block25:
	mov eax,dword ptr [ebp+0xD0]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ecx,[esp+0x1C]
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
	jl Block54

 Block28:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],4
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block54

 Block29:
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x44]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x78],6
	test ecx,ecx
	je Block53

 Block30:
	push ebx
	push 0x104
	mov byte ptr [esp+0x80],5
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x40],si
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x50],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [edi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block41

 Block39:
	cmp eax,3
	je Block41

 Block40:
	cmp eax,4
	jne Block46

 Block41:
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xD4]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	push esi
	lea eax,[ebx+0x11]
	push eax
	push 0xD9
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	call draw_number_by_image
	add esp,0x18

 Block46:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ecx,dword ptr [esp+0x20]

 Block49:
	mov edx,dword ptr [esp+0x28]
	add ebx,0x2A
	add ecx,0x1C
	inc edx
	cmp ebx,0xFA
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],edx
	jl Block1

 Block50:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	push eax
	call _com_issue_error
}
}
// CWishListGiveDlg::SetGetItems
_SUB_EXCEPTION_HANDLER(5AC280)
__SUB_CLASS_THIS(005AC280, __thiscall, 59892,  CWishListGiveDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AC280
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
	mov ecx,dword ptr [ebp+8]
	push 8
	lea eax,[ebp-0x60]
	push eax
	call CInPacket::DecodeBuffer
	xor ebx,ebx
	mov dword ptr [ebp-0x14],ebx
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],ebx
	add esi,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	mov edx,dword ptr [esi]
	mov eax,1
	mov dword ptr [ebp-0x14],edx
	mov dword ptr [esi],ebx
	mov dword ptr [ebp-0x18],eax
	jmp Block2

 Block1:
	mov eax,dword ptr [ebp-0x18]

 Block2:
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block9

 Block3:
	dec eax
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
	mov eax,4
	jmp Block10

 Block5:
	mov eax,8
	jmp Block10

 Block6:
	mov eax,0x10
	jmp Block10

 Block7:
	mov eax,0x20
	jmp Block10

 Block8:
	mov eax,0x40
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	and eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	and ecx,dword ptr [ebp-0x5C]
	or eax,ecx
	jne Block17

 Block11:
	xor edi,edi
	mov esi,edx
	lea ecx,[ecx]

 Block12:
	cmp edx,ebx
	je Block59

 Block13:
	cmp edi,dword ptr [edx-4]
	jae Block59

 Block14:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,dword ptr [ebp-0x18]
	jne Block16

 Block15:
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0xFFFFFFFF
	add ecx,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CWeddingWishListDlg::ITEM::operator=

 Block16:
	mov edx,dword ptr [ebp-0x14]
	inc edi
	add esi,0x1C
	jmp Block12

 Block17:
	mov ecx,dword ptr [ebp+8]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	mov dword ptr [ebp-0x58],eax
	mov dword ptr [ebp-0x20],ebx
	jle Block58

 Block18:
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
	je Block20

 Block19:
	add eax,4
	push eax
	call edi

 Block20:
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x24]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp-0x24]
	cmp ecx,ebx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [ebp-0x24],ebx

 Block25:
	mov eax,dword ptr [ebp-0x44]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebp-0x24],ecx
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block30

 Block26:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	mov edx,dword ptr [ebp-0x44]
	add edx,4
	push edx
	call edi
	mov ecx,dword ptr [ebp-0x44]
	cmp ecx,ebx
	je Block29

 Block28:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block29:
	mov dword ptr [ebp-0x44],ebx

 Block30:
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
	je Block38

 Block31:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block38

 Block32:
	cmp esi,ebx
	je Block38

 Block33:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block37

 Block36:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block37:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	mov edi,dword ptr [ebp-0x40]
	mov dword ptr [ebp-0x30],edi
	cmp edi,ebx
	je Block46

 Block39:
	lea esi,[edi+8]
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block45

 Block40:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	mov dword ptr [ebp-0x40],ebx

 Block46:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov edx,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push 1
	push edx
	lea eax,[ebp-0x54]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x2C]
	cmp ecx,eax
	je Block55

 Block51:
	mov esi,ecx
	mov dword ptr [ebp-0x2C],eax
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block53:
	cmp esi,ebx
	je Block55

 Block54:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block55:
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	push 0xFFFFFFFF
	add ecx,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CWeddingWishListDlg::ITEM::operator=
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	call CWeddingWishListDlg::ITEM::~ITEM
	mov eax,dword ptr [ebp-0x20]
	inc eax
	cmp eax,dword ptr [ebp-0x58]
	mov dword ptr [ebp-0x20],eax
	jl Block18

 Block58:
	mov edx,dword ptr [ebp-0x14]

 Block59:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	cmp eax,5
	mov dword ptr [ebp-0x18],eax
	jle Block1

 Block60:
	mov edx,dword ptr [ebp-0x1C]
	or eax,0xFFFFFFFF
	lea ecx,[ebp-0x14]
	mov dword ptr [edx+0xE0],eax
	mov dword ptr [ebp-4],eax
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
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
// CWishListRecvDlg::SetWeddingWishListDlg
__SUB_CLASS_THIS(005AD310, __thiscall, 59922,  CWishListRecvDlg, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWishListRecvDlg::SetGetItems
	lea ecx,[esi+0xC8]
	push ecx
	push 0
	mov ecx,esi
	call CWeddingWishListDlg::SetPutItems
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CWeddingWishListDlg::DrawGetItem
__SUB_CLASS_THIS(005ABD60, __thiscall, 59804,  CWeddingWishListDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret 4
}
}
// CWishListGiveDlg::SetScrollBar
__SUB_CLASS_THIS0(005A64C0, __thiscall, 59891,  CWishListGiveDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	je Block5

 Block1:
	cmp dword ptr [eax-4],2
	jbe Block5

 Block2:
	test eax,eax
	jne Block4

 Block3:
	dec eax
	jmp Block6

 Block4:
	mov eax,dword ptr [eax-4]
	dec eax
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esi+0xB0]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xC8]
	test eax,eax
	je Block11

 Block7:
	cmp dword ptr [eax-4],4
	jbe Block11

 Block8:
	test eax,eax
	jne Block10

 Block9:
	mov eax,0xFFFFFFFD
	jmp Block12

 Block10:
	mov eax,dword ptr [eax-4]
	add eax,0xFFFFFFFD
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov ecx,dword ptr [esi+0xB8]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xB60]
	test eax,eax
	je Block17

 Block13:
	cmp dword ptr [eax-4],5
	jbe Block17

 Block14:
	test eax,eax
	jne Block16

 Block15:
	mov ecx,dword ptr [esi+0xB5C]
	mov eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block16:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xB5C]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block17:
	mov ecx,dword ptr [esi+0xB5C]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CWishListRecvDlg::~CWishListRecvDlg
_SUB_EXCEPTION_HANDLER(5ACAA0)
__SUB_CLASS_THIS0(005ACAA0, __thiscall, 59921,  CWishListRecvDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ACAA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWishListRecvDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListRecvDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListRecvDlg::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xB54],0
	lea edi,[esi+0xB50]
	mov dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWeddingWishListDlg::~CWeddingWishListDlg
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CWishListRecvDlg::GetRTTI
__SUB_CLASS_THIS0(005ACA50, __thiscall, 59931,  CWishListRecvDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CWishListRecvDlg::ms_RTTI_CWishListRecvDlg
	ret
}
}
// CWishListGiveDlg::SendPutItemRequest
_SUB_EXCEPTION_HANDLER(5A7140)
__SUB_CLASS_THIS0(005A7140, __thiscall, 59891,  CWishListGiveDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A7140
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
	mov eax,dword ptr [ebp+0xE4]
	xor edi,edi
	cmp eax,edi
	mov dword ptr [esp+0x24],edi
	jl Block25

 Block1:
	mov ecx,dword ptr [ebp+0xC8]
	cmp ecx,edi
	jne Block3

 Block2:
	xor ecx,ecx
	jmp Block4

 Block3:
	mov ecx,dword ptr [ecx-4]

 Block4:
	cmp eax,ecx
	jae Block25

 Block5:
	cmp dword ptr [ebp+0xF0],edi
	jne Block25

 Block6:
	mov ecx,dword ptr [ebp+0xC4]
	cmp ecx,edi
	je Block9

 Block7:
	cmp dword ptr [ecx-4],edi
	jbe Block9

 Block8:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1098
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block9:
	mov edx,dword ptr [ebp+0xC8]
	lea ecx,[eax*8]
	sub ecx,eax
	lea esi,[edx+ecx*4]
	lea eax,[esi+0x14]
	push eax
	lea ecx,[esp+0x30]
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi]
	mov esi,dword ptr [esi+4]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov dword ptr [esp+0x54],edi
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,dword ptr [esp+0x30]
	push edx
	mov dword ptr [esp+0x2C],ecx
	mov ebx,1
	call is_treat_singly_1
	add esp,4
	test eax,eax
	jne Block14

 Block10:
	lea eax,[esp+0x1C]
	push 0x370
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push esi
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x60],bl
	call CWeddingWishListDlg::AskItemCount
	mov ebx,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test ebx,ebx
	jle Block24

 Block13:
	cmp ebx,esi
	jg Block24

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [esp+0x30],0
	je Block17

 Block15:
	mov edx,dword ptr [esp+0x18]
	push edx
	push edi
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edx,dword ptr [esp+0x30]
	mov ecx,1
	cmp dword ptr [eax+4],edx
	jne Block18

 Block16:
	mov byte ptr [esp+0x17],0
	jmp Block19

 Block17:
	mov cl,byte ptr [esp+0x24]

 Block18:
	mov byte ptr [esp+0x17],1

 Block19:
	test cl,1
	je Block21

 Block20:
	lea ecx,[esp+0x34]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block21:
	cmp byte ptr [esp+0x17],0
	jne Block24

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x10C0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block24

 Block23:
	push 0xA2
	lea ecx,[esp+0x40]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],2
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea ecx,[esp+0x40]
	call COutPacket::Encode2
	mov edx,dword ptr [esp+0x28]
	push edx
	lea ecx,[esp+0x40]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x40]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x3C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x40]
	mov dword ptr [ebp+0xF0],1
	mov byte ptr [esp+0x54],0
	call ZArray<unsigned char>::RemoveAll

 Block24:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

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
}
}
// CWishListInputDlg::OnEnter
_SUB_EXCEPTION_HANDLER(5A7840)
__SUB_CLASS_THIS0(005A7840, __thiscall, 62236,  CWishListInputDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A7840
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
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x28],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [esp+0xC]
	test edi,edi
	je Block4

 Block3:
	cmp dword ptr [edi-4],0
	jne Block6

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block10

 Block5:
	jmp Block9

 Block6:
	mov ecx,dword ptr [esi+0xB0]
	push 0
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0xA
	jl Block8

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x10BE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add edi,0xFFFFFFF4
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,0x18
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret

 Block8:
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esi+eax*4+0xC4]
	call ZXString<char>::op_assign
	inc dword ptr [esi+0xC0]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block9:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CWishListInputDlg::HitTest
__SUB_CLASS_THIS(005A60B0, __thiscall, 62244,  CWishListInputDlg, int32_t, long, long, CCtrlWnd**) {
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
	dec edi
	mov ecx,0x12
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
// CWishListInputDlg::GetIndexFromPoint
__SUB_CLASS_THIS(005A6340, __thiscall, 62246,  CWishListInputDlg, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x18
	mov eax,dword ptr [esp+0x20]
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],eax
	lea esi,[ebp+0x55]
	lea ebx,[edi+0xC4]
	lea esp,[esp]

 Block1:
	mov eax,dword ptr [edi+0xB8]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax+0x38]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	lea ecx,[eax+eax*8]
	add ecx,ecx
	mov eax,esi
	sub eax,ecx
	lea edx,[eax+0xF]
	push edx
	push 0xA2
	push eax
	push 0xC
	lea eax,[esp+0x28]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x2C]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	call PtInRect
	test eax,eax
	je Block8

 Block5:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block8

 Block6:
	cmp dword ptr [eax-4],0
	je Block8

 Block7:
	cmp dword ptr [edi+0xBC],ebp
	jne Block10

 Block8:
	add esi,0x11
	inc ebp
	add ebx,4
	cmp esi,0xFF
	jl Block1

 Block9:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block10:
	mov eax,dword ptr [edi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	jne Block12

 Block11:
	mov eax,dword ptr [edi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block14

 Block13:
	lea eax,[ecx+4]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	call CWndMan::SetFocus
	mov dword ptr [edi+0xBC],ebp
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x18
	ret 8
}
}
// CWishListGiveDlg::DrawWishList
_SUB_EXCEPTION_HANDLER(5A8030)
__SUB_CLASS_THIS(005A8030, __thiscall, 59899,  CWishListGiveDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A8030
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
	mov eax,dword ptr [esi+0xB5C]
	mov ecx,dword ptr [eax+0x38]
	xor ebx,ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x18],ebx
	lea ebp,[ecx*4]
	lea edi,[ebx+0x3B]
	jmp Block3

 Block2:
	mov ecx,dword ptr [esp+0x1C]

 Block3:
	mov eax,dword ptr [esi+0xB60]
	cmp eax,ebx
	je Block20

 Block4:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax-4]
	add edx,ecx
	cmp edx,eax
	jae Block20

 Block5:
	mov eax,dword ptr [esi+0xB60]
	add eax,ebp
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xD0]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x54],1
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	lea eax,[esp+0x1C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block24

 Block8:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x50],2
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block24

 Block9:
	mov ecx,dword ptr [esp+0x54]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x60],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x5C],4
	cmp ecx,ebx
	je Block25

 Block10:
	push edi
	push 0x10
	mov byte ptr [esp+0x64],3
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],2
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
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
	mov byte ptr [esp+0x4C],1
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
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
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	inc dword ptr [esp+0x18]
	add edi,0x12
	add ebp,4
	cmp edi,0x95
	jl Block2

 Block21:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push 0x80004003
	call _com_issue_error
}
}
// CWishListRecvDlg::SetRet
_SUB_EXCEPTION_HANDLER(5A6EA0)
__SUB_CLASS_THIS(005A6EA0, __thiscall, 59923,  CWishListRecvDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6EA0
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
	push 0xA2
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
// CWishListInputDlg::CWishListInputDlg
_SUB_EXCEPTION_HANDLER(5A8FE0)
__SUB_CLASS_THIS0(005A8FE0, __thiscall, 62234,  CWishListInputDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A8FE0
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
	mov dword ptr [esp+0x28],esi
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	call CUniqueModeless::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CWishListInputDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListInputDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListInputDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 0xA
	push 4
	lea eax,[esi+0xC4]
	push eax
	mov byte ptr [esp+0x48],5
	mov dword ptr [esi+0xBC],0xFFFFFFFF
	mov dword ptr [esi+0xC0],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x2034]
	mov byte ptr [esp+0x34],0xC
	cmp eax,edi
	jne Block2

 Block1:
	lea edx,[esp+0x24]
	push 0x1095
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],0xD
	lea ebx,[edi+1]
	jmp Block3

 Block2:
	lea eax,[esp+0x20]
	push 0x1096
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x34],0xE
	mov ebx,2

 Block3:
	mov ebp,dword ptr [eax]
	lea ecx,[esp+0x1C]
	push 0x19CF
	push ecx
	mov dword ptr [esp+0x1C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x40],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x34],0xE
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov dword ptr [esp+0x34],0xD
	test bl,2
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x34],0xC
	test bl,1
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov ebx,dword ptr [esp+0x18]
	push 1
	push edi
	push 1
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov byte ptr [esp+0x34],0xB
	cmp ebx,edi
	je Block13

 Block12:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,esi
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
// CWishListInputDlg::OnOK
__SUB_CLASS_THIS0(005A6F80, __thiscall, 62236,  CWishListInputDlg, void) {
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
	push 0x1097
	push eax
	mov esi,ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0xC0]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esi+0xC4]
	push edx
	call CWvsContext::SendWishListInput
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx

 Block2:
	pop esi
	pop ecx
	ret
}
}
// CWeddingWishListDlg::OnCreate
__SUB_CLASS_THIS(005ABCB0, __thiscall, 59790,  CWeddingWishListDlg, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CWeddingWishListDlg::SetScrollBar
__SUB_CLASS_THIS0(005ABCF0, __thiscall, 59787,  CWeddingWishListDlg, void) {
__asm {

 Block0:
	ret
}
}
// CWeddingWishListDlg::AskItemCount
_SUB_EXCEPTION_HANDLER(5A6FE0)
__SUB_CLASS_THIS(005A6FE0, __thiscall, 59807,  CWeddingWishListDlg, long, const char*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6FE0
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
// CWeddingWishListDlg::ClearToolTip
__SUB_CLASS_THIS0(005ABCE0, __thiscall, 59798,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xF0
	jmp  CUIToolTip::ClearToolTip
}
}
// CWishListGiveDlg::~CWishListGiveDlg
_SUB_EXCEPTION_HANDLER(5AC1A0)
__SUB_CLASS_THIS0(005AC1A0, __thiscall, 59891,  CWishListGiveDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AC1A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWishListGiveDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListGiveDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListGiveDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB60]
	mov dword ptr [esp+0x18],2
	call ZArray<ZXString<char>>::RemoveAll
	cmp dword ptr [esi+0xB5C],0
	lea edi,[esi+0xB58]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0xB54],0
	lea edi,[esi+0xB50]
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
	call CWeddingWishListDlg::~CWeddingWishListDlg
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CWeddingWishListDlg::~CWeddingWishListDlg
_SUB_EXCEPTION_HANDLER(5ABDA0)
__SUB_CLASS_THIS0(005ABDA0, __thiscall, 59787,  CWeddingWishListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ABDA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWeddingWishListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWeddingWishListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWeddingWishListDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB3C]
	mov dword ptr [esp+0x1C],0xE
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xF4]
	mov byte ptr [esp+0x1C],0xD
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xDC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xCC]
	mov byte ptr [esp+0x1C],8
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0x1C],6
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
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
// CWishListRecvDlg::OnCreate
_SUB_EXCEPTION_HANDLER(5AA8C0)
__SUB_CLASS_THIS(005AA8C0, __thiscall, 59924,  CWishListRecvDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AA8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x28],ebx
	xor edi,edi
	push edi
	push edi
	lea ecx,[ebx+0xB3C]
	push ebx
	call CLayoutMan::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push eax
	call esi
	lea ecx,[ebp+0x44]
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
	call esi
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
	lea ecx,[ebp+0x44]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19DB
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp+0x2C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0xD8]
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
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp+0x5C],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x64]
	xor ecx,ecx
	mov word ptr [ebp+0x5C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp+0x44],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x5C]
	push edx
	call esi
	lea eax,[ebp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x44]
	push ecx
	mov dword ptr [ebp-4],4
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19DC
	push edx
	mov byte ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x2C]
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0xDC]
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
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x2C],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x44],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x5C],si
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x64]
	xor edx,edx
	mov word ptr [ebp+0x5C],dx
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp-0x68],edi
	mov dword ptr [ebp-0x74],1
	mov dword ptr [ebp-0x70],edi
	mov dword ptr [ebp-0x6C],edi
	lea ecx,[ebp+0x6C]
	push 0x19DD
	push ecx
	mov dword ptr [ebp-4],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push edi
	push 2
	push eax
	lea edx,[ebp+0x64]
	push edx
	lea ecx,[ebx+0xB3C]
	mov byte ptr [ebp-4],9
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xA
	cmp eax,edi
	je Block64

 Block43:
	add eax,8
	cmp eax,edi
	je Block64

 Block44:
	lea esi,[eax-8]
	cmp esi,edi
	je Block46

 Block45:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov eax,dword ptr [ebx+0x98]
	mov dword ptr [ebx+0x98],esi
	mov dword ptr [ebp+0x58],eax
	cmp eax,edi
	je Block48

 Block47:
	push edi
	lea ecx,[ebp+0x54]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block48:
	mov byte ptr [ebp-4],9
	cmp dword ptr [ebp+0x68],edi
	je Block50

 Block49:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x68],edi

 Block50:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	lea ecx,[ebp+0x6C]
	push 0x19DE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push edi
	push 0x7D0
	push eax
	lea edx,[ebp+0x64]
	push edx
	lea ecx,[ebx+0xB3C]
	mov byte ptr [ebp-4],0xB
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xC
	cmp eax,edi
	je Block65

 Block53:
	add eax,8
	cmp eax,edi
	je Block65

 Block54:
	lea esi,[eax-8]
	cmp esi,edi
	je Block56

 Block55:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov eax,dword ptr [ebx+0xB54]
	mov dword ptr [ebx+0xB54],esi
	mov dword ptr [ebp+0x58],eax
	cmp eax,edi
	je Block58

 Block57:
	push edi
	lea ecx,[ebp+0x54]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block58:
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [ebp+0x68],edi
	je Block60

 Block59:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x68],edi

 Block60:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x30],edi
	mov dword ptr [ebp-0x34],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0xD
	cmp eax,edi
	je Block66

 Block63:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block67

 Block64:
	xor esi,esi
	jmp Block46

 Block65:
	xor esi,esi
	jmp Block56

 Block66:
	xor eax,eax

 Block67:
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block75

 Block68:
	add eax,8
	cmp eax,edi
	je Block75

 Block69:
	lea esi,[eax-8]
	cmp esi,edi
	je Block71

 Block70:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	mov eax,dword ptr [ebx+0xA8]
	mov dword ptr [ebx+0xA8],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block73

 Block72:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block73:
	mov ecx,dword ptr [ebx+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x34]
	push eax
	push 0x13
	push 0xC8
	push 0x45
	push 0xD8
	push 8
	push 0x3E8
	push ebx
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block76

 Block74:
	push eax
	call _com_issue_error

 Block75:
	xor esi,esi
	jmp Block71

 Block76:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xE
	call esi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	push edi
	push edi
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19DF
	mov bl,0xF
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x10
	cmp dword ptr [_D_G_RM],edi
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea ecx,[ebp-0x44]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block83

 Block81:
	cmp eax,0x80004002
	je Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov ebx,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x44],bx
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,edi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x44],bx
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x2C],bx
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	lea edx,[ebp+0x2C]
	push edx
	call esi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x16
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	push edi
	push edi
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x19E0
	mov bl,0x17
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x18
	cmp dword ptr [_D_G_RM],edi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	lea eax,[ebp-0x64]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block104

 Block102:
	cmp eax,0x80004002
	je Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x64],si
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,edi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x1C],si
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x2C],si
	jne Block115

 Block113:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov dword ptr [ebp+0x3C],edi
	jmp Block118

 Block118:
	mov edi,dword ptr [ebp+0x40]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov ecx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x24],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ecx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1E
	test edi,edi
	je Block5

 Block119:
	lea edx,[ebp+4]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block124

 Block120:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
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
	and ebx,dword ptr [ebp]
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block124

 Block123:
	cmp edi,0x80004002
	jne Block141

 Block124:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [ebp+0x3C]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x20
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block5

 Block125:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x24],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block130

 Block126:
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
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block130

 Block129:
	cmp edi,0x80004002
	jne Block141

 Block130:
	mov edi,dword ptr [ebp+0x28]
	mov ecx,dword ptr [edi+0xA8]
	mov byte ptr [ebp-4],0x23
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x14],si
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+4],si
	jne Block137

 Block135:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov eax,dword ptr [ebp+0x3C]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x3C],eax
	jl Block118

 Block139:
	mov eax,dword ptr [edi+0xA8]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block142

 Block140:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block143

 Block141:
	push edi
	call _com_issue_error

 Block142:
	xor eax,eax

 Block143:
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block147

 Block144:
	add eax,8
	je Block147

 Block145:
	lea esi,[eax-8]
	test esi,esi
	je Block148

 Block146:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esi+0xC]
	push ecx
	call ebx
	jmp Block149

 Block147:
	xor esi,esi

 Block148:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block149:
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [edi+0xB0],esi
	test eax,eax
	je Block153

 Block150:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block151:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block153

 Block152:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block153:
	mov ecx,dword ptr [edi+0xB0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCD
	push 0x35
	push 0xC4
	push 8
	push 1
	push 0x3E9
	push edi
	call eax
	mov eax,dword ptr [edi+0xB0]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0xB4
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block155

 Block154:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block156

 Block155:
	xor eax,eax

 Block156:
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block173

 Block157:
	add eax,8
	je Block173

 Block158:
	lea esi,[eax-8]
	test esi,esi
	je Block160

 Block159:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block160:
	mov eax,dword ptr [edi+0xB8]
	mov dword ptr [edi+0xB8],esi
	test eax,eax
	je Block164

 Block161:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block164

 Block162:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block164

 Block163:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block164:
	mov ecx,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xA5
	push 0x5D
	push 0x194
	push 8
	push 1
	push 0x3EA
	push edi
	call eax
	mov eax,dword ptr [edi+0xB8]
	lea ecx,[ebp+0x28]
	push 0x13
	push ecx
	mov dword ptr [eax+0x34],0x8C
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xD0]
	add esp,8
	cmp esi,eax
	je Block169

 Block165:
	mov dword ptr [edi+0xD0],eax
	test eax,eax
	je Block167

 Block166:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block167:
	test esi,esi
	je Block169

 Block168:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block169:
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block171:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call esi
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block172:
	push eax
	call _com_issue_error

 Block173:
	xor esi,esi
	jmp Block160

 Block174:
	lea edx,[ebp+4]
	push edx
	mov byte ptr [ebp-4],0x26
	call esi
	lea eax,[ebp+4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	push 0
	push 0
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+4]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x28
	jne Block178

 Block177:
	push 0x80004003
	call _com_issue_error

 Block178:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0x27
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block184

 Block179:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xD4]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	test eax,eax
	je Block181

 Block180:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block181:
	mov dword ptr [edi+0xD4],ebx
	test esi,esi
	jge Block186

 Block182:
	cmp esi,0x80004002
	je Block186

 Block183:
	push esi
	call _com_issue_error

 Block184:
	mov eax,dword ptr [edi+0xD4]
	test eax,eax
	je Block186

 Block185:
	mov dword ptr [edi+0xD4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block186:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x27
	jne Block189

 Block187:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov esi,8
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp+4],si
	jne Block193

 Block191:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x14],si
	jne Block197

 Block195:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block198:
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0xE4],eax
	mov dword ptr [edi+0xE0],eax
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [edi+0xF0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x15
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	lea esp,[ebp-0x84]
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
// CWishListGiveDlg::SetWishList
_SUB_EXCEPTION_HANDLER(5A7B50)
__SUB_CLASS_THIS(005A7B50, __thiscall, 59892,  CWishListGiveDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A7B50
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
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode1
	add esi,0xB60
	mov ecx,esi
	movzx ebx,al
	call ZArray<ZXString<char>>::RemoveAll
	test ebx,ebx
	jle Block5

 Block1:
	mov dword ptr [esp+0x24],ebx
	or ebx,0xFFFFFFFF
	lea esp,[esp]

 Block2:
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],ebx
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	sub dword ptr [esp+0x24],1
	jne Block2

 Block5:
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
// CWishListRecvDlg::CWishListRecvDlg
_SUB_EXCEPTION_HANDLER(5AC8C0)
__SUB_CLASS_THIS0(005AC8C0, __thiscall, 59919,  CWishListRecvDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AC8C0
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
	mov dword ptr [esp+0x28],esi
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	call CWeddingWishListDlg::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CWishListRecvDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWishListRecvDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWishListRecvDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esi+0xB54],ebp
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x2034]
	mov byte ptr [esp+0x34],2
	cmp eax,2
	jne Block2

 Block1:
	lea ecx,[esp+0x24]
	push 0x1095
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],3
	lea ebx,[ebp+1]
	jmp Block3

 Block2:
	lea edx,[esp+0x20]
	push 0x1096
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x34],4
	mov ebx,2

 Block3:
	mov edi,dword ptr [eax]
	lea eax,[esp+0x1C]
	push 0x19DA
	push eax
	mov dword ptr [esp+0x1C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x40],5
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x34],4
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov dword ptr [esp+0x34],3
	test bl,2
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x34],2
	test bl,1
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov edi,dword ptr [esp+0x18]
	push 1
	push ebp
	push 1
	push edi
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov byte ptr [esp+0x34],1
	cmp edi,ebp
	je Block13

 Block12:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,esi
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
// CWeddingWishListDlg::ResetInfo
__SUB_CLASS_THIS0(005ABF90, __thiscall, 59787,  CWeddingWishListDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esi+0xC8]
	push eax
	push 0
	call CWeddingWishListDlg::SetPutItems
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CWeddingWishListDlg::HitTest
__SUB_CLASS_THIS(005A6120, __thiscall, 59791,  CWeddingWishListDlg, int32_t, long, long, CCtrlWnd**) {
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
// CWeddingWishListDlg::OnMouseEnter
__SUB_CLASS_THIS(005A6170, __thiscall, 59795,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xF0]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CWeddingWishListDlg::OnTabChanged
__SUB_CLASS_THIS(005A6160, __thiscall, 59789,  CWeddingWishListDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x38]
	call edx
	ret 4
}
}
// CWeddingWishListDlg::DrawPutItem
__SUB_CLASS_THIS(005ABD80, __thiscall, 59804,  CWeddingWishListDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret 4
}
}
// CWishListInputDlg::OnDelete
_SUB_EXCEPTION_HANDLER(5A9950)
__SUB_CLASS_THIS0(005A9950, __thiscall, 62236,  CWishListInputDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A9950
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
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0xBC],ebx
	jl Block13

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp dword ptr [edi+0xC0],ebx
	mov dword ptr [esp+0x20],ebx
	jle Block7

 Block2:
	lea esi,[edi+0xC4]

 Block3:
	cmp dword ptr [edi+0xBC],ebx
	je Block5

 Block4:
	push esi
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block5:
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
	inc ebx
	add esi,4
	cmp ebx,dword ptr [edi+0xC0]
	jl Block3

 Block6:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	jne Block8

 Block7:
	xor ebp,ebp
	jmp Block9

 Block8:
	mov ebp,dword ptr [esi-4]

 Block9:
	test ebp,ebp
	jle Block12

 Block10:
	lea ebx,[edi+0xC4]

 Block11:
	push esi
	mov ecx,ebx
	call ZXString<char>::op_assign
	add esi,4
	add ebx,4
	sub ebp,1
	jne Block11

 Block12:
	or esi,0xFFFFFFFF
	add dword ptr [edi+0xC0],esi
	push 0
	mov ecx,edi
	mov dword ptr [edi+0xBC],esi
	call CWnd::InvalidateRect
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x20],esi
	call ZArray<ZXString<char>>::RemoveAll

 Block13:
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
// CWishListRecvDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(005A6820, __thiscall, 59928,  CWishListRecvDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xB0]
	mov ecx,dword ptr [eax+0x38]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov edi,0x37
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp+0xC4]
	test eax,eax
	je Block12

 Block3:
	mov edx,dword ptr [esp+0x10]
	cmp edx,dword ptr [eax-4]
	jae Block12

 Block4:
	mov esi,dword ptr [ebp+0xD8]
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
	mov esi,dword ptr [ebp+0xD8]
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
	cmp edi,0x109
	jl Block2

 Block12:
	mov ecx,dword ptr [ebp+0xB8]
	mov edx,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x10],edx
	mov edi,0x61

 Block13:
	mov eax,dword ptr [ebp+0xC8]
	test eax,eax
	je Block23

 Block14:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,dword ptr [eax-4]
	jae Block23

 Block15:
	mov esi,dword ptr [ebp+0xD8]
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
	mov esi,dword ptr [ebp+0xD8]
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
	add eax,0xD9
	push eax
	push edi
	push 0xD9
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
	cmp edi,0x109
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
// CWishListRecvDlg::SetGetItems
_SUB_EXCEPTION_HANDLER(5ACB50)
__SUB_CLASS_THIS(005ACB50, __thiscall, 59922,  CWishListRecvDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ACB50
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
	mov ecx,dword ptr [ebp+8]
	push 8
	lea eax,[ebp-0x60]
	push eax
	call CInPacket::DecodeBuffer
	xor ebx,ebx
	mov dword ptr [ebp-0x14],ebx
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],ebx
	add esi,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
	mov edx,dword ptr [esi]
	mov eax,1
	mov dword ptr [ebp-0x14],edx
	mov dword ptr [esi],ebx
	mov dword ptr [ebp-0x18],eax
	jmp Block2

 Block1:
	mov eax,dword ptr [ebp-0x18]

 Block2:
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block9

 Block3:
	dec eax
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
	mov eax,4
	jmp Block10

 Block5:
	mov eax,8
	jmp Block10

 Block6:
	mov eax,0x10
	jmp Block10

 Block7:
	mov eax,0x20
	jmp Block10

 Block8:
	mov eax,0x40
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	and eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	and ecx,dword ptr [ebp-0x5C]
	or eax,ecx
	jne Block17

 Block11:
	xor edi,edi
	mov esi,edx
	lea ecx,[ecx]

 Block12:
	cmp edx,ebx
	je Block59

 Block13:
	cmp edi,dword ptr [edx-4]
	jae Block59

 Block14:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,dword ptr [ebp-0x18]
	jne Block16

 Block15:
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0xFFFFFFFF
	add ecx,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CWeddingWishListDlg::ITEM::operator=

 Block16:
	mov edx,dword ptr [ebp-0x14]
	inc edi
	add esi,0x1C
	jmp Block12

 Block17:
	mov ecx,dword ptr [ebp+8]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	mov dword ptr [ebp-0x58],eax
	mov dword ptr [ebp-0x20],ebx
	jle Block58

 Block18:
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
	je Block20

 Block19:
	add eax,4
	push eax
	call edi

 Block20:
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x24]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp-0x24]
	cmp ecx,ebx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [ebp-0x24],ebx

 Block25:
	mov eax,dword ptr [ebp-0x44]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebp-0x24],ecx
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block30

 Block26:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	mov edx,dword ptr [ebp-0x44]
	add edx,4
	push edx
	call edi
	mov ecx,dword ptr [ebp-0x44]
	cmp ecx,ebx
	je Block29

 Block28:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block29:
	mov dword ptr [ebp-0x44],ebx

 Block30:
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
	je Block38

 Block31:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block38

 Block32:
	cmp esi,ebx
	je Block38

 Block33:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block37

 Block36:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block37:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	mov edi,dword ptr [ebp-0x40]
	mov dword ptr [ebp-0x30],edi
	cmp edi,ebx
	je Block46

 Block39:
	lea esi,[edi+8]
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block45

 Block40:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	mov dword ptr [ebp-0x40],ebx

 Block46:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov edx,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push 1
	push edx
	lea eax,[ebp-0x54]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x2C]
	cmp ecx,eax
	je Block55

 Block51:
	mov esi,ecx
	mov dword ptr [ebp-0x2C],eax
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block53:
	cmp esi,ebx
	je Block55

 Block54:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block55:
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	push 0xFFFFFFFF
	add ecx,0xC4
	call ZArray<CWeddingWishListDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CWeddingWishListDlg::ITEM::operator=
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	call CWeddingWishListDlg::ITEM::~ITEM
	mov eax,dword ptr [ebp-0x20]
	inc eax
	cmp eax,dword ptr [ebp-0x58]
	mov dword ptr [ebp-0x20],eax
	jl Block18

 Block58:
	mov edx,dword ptr [ebp-0x14]

 Block59:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	cmp eax,5
	mov dword ptr [ebp-0x18],eax
	jle Block1

 Block60:
	mov edx,dword ptr [ebp-0x1C]
	or eax,0xFFFFFFFF
	lea ecx,[ebp-0x14]
	mov dword ptr [edx+0xE0],eax
	mov dword ptr [ebp-4],eax
	call ZArray<CWeddingWishListDlg::ITEM>::RemoveAll
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
// CWeddingWishListDlg::OnMouseMove
__SUB_CLASS_THIS(005A6260, __thiscall, 59794,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	lea edx,[esp+0x14]
	push edx
	mov esi,ecx
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x4C]
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esi-4]
	push edi
	push ebx
	call eax
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esi+0xF0]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block2:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[eax*8]
	sub ecx,eax
	cmp dword ptr [esp+0x10],0
	je Block4

 Block3:
	mov edx,dword ptr [esi+0xC0]
	jmp Block5

 Block4:
	mov edx,dword ptr [esi+0xC4]

 Block5:
	push 0
	push 0
	push 0
	lea eax,[edx+ecx*4+0x14]
	mov eax,dword ptr [eax+4]
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
	lea ecx,[esi+0xF0]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8
}
}
// CWeddingWishListDlg::SetRet
__SUB_CLASS_THIS(005ABCA0, __thiscall, 59789,  CWeddingWishListDlg, void, long) {
__asm {

 Block0:
	ret 4
}
}
// CWishListGiveDlg::DrawGetItem
_SUB_EXCEPTION_HANDLER(5A7C00)
__SUB_CLASS_THIS(005A7C00, __thiscall, 59899,  CWishListGiveDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A7C00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0xB0]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*8]
	sub ecx,eax
	add ecx,ecx
	add ecx,ecx
	mov ebx,0xB6
	mov dword ptr [esp+0x60],0
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ebx

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [ebp+0xE0],eax
	jne Block10

 Block2:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edx
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x60],1
	test ecx,ecx
	je Block52

 Block3:
	mov ebx,dword ptr [esp+0x28]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	push esi
	mov dword ptr [eax+0xC],edx
	lea eax,[ebx-3]
	push eax
	push 0x2F
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x80]
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebp,dword ptr [esp+0x1C]

 Block10:
	mov eax,dword ptr [ebp+0xC4]
	test eax,eax
	je Block48

 Block11:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [eax-4]
	jae Block48

 Block12:
	mov esi,eax
	add esi,dword ptr [esp+0x20]
	sub esp,8
	mov eax,dword ptr [esi+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
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
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx]
	push 2
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	call eax
	mov edx,dword ptr [esi]
	push eax
	lea ecx,[ebx+0x1F]
	push ecx
	push 0xC
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x94]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x94]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov edi,dword ptr [esi+0xC]
	test edi,edi
	je Block20

 Block17:
	cmp dword ptr [edi+4],0
	jne Block19

 Block18:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block19:
	mov edx,dword ptr [edi+4]
	jmp Block21

 Block20:
	xor edx,edx

 Block21:
	mov dword ptr [esp+0x14],0
	test edx,edx
	je Block25

 Block22:
	mov eax,edx
	lea edi,[eax+1]

 Block23:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block23

 Block24:
	sub eax,edi
	mov edi,eax
	push edi
	push edx
	push 0
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block25:
	mov eax,dword ptr [ebp+0xD0]
	push 0x8D
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x68],2
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x48]
	push edx
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block53

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],3
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block53

 Block29:
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x74],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xD0]
	mov byte ptr [esp+0x70],5
	test ecx,ecx
	je Block52

 Block30:
	push ebx
	push 0x35
	mov byte ptr [esp+0x78],4
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x60],3
	cmp word ptr [esp+0x38],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x48],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block41

 Block39:
	cmp eax,3
	je Block41

 Block40:
	cmp eax,4
	jne Block46

 Block41:
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xD4]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	push esi
	lea eax,[ebx+0x11]
	push eax
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	call draw_number_by_image
	add esp,0x18

 Block46:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	add dword ptr [esp+0x20],0x1C
	inc dword ptr [esp+0x18]
	add ebx,0x2A
	cmp ebx,0x10A
	mov dword ptr [esp+0x24],ebx
	jl Block1

 Block49:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	push eax
	call _com_issue_error
}
}
// CWeddingWishListDlg::GetRTTI
__SUB_CLASS_THIS0(005ABD10, __thiscall, 59811,  CWeddingWishListDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CWeddingWishListDlg::ms_RTTI_CWeddingWishListDlg
	ret
}
}
