#include "regen.hpp"
// PersonalShopDlg.ipp
#include "PersonalShopDlg.hpp"

// CPersonalShopDlg::OnCorrectSSN2
_SUB_EXCEPTION_HANDLER(298580)
__SUB_CLASS_THIS(00298580, __thiscall, 60106,  CPersonalShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_298580
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
	cmp dword ptr [esp+0x28],0xB
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0x218]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov dword ptr [esi+0x1BC],1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x3864],1
	mov ecx,esi
	call CPersonalShopDlg::SetScrollBar
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
	ret 4
}
}
// CPersonalShopDlg::CSoldItemDlg::SetRet
__SUB_CLASS_THIS(00298200, __thiscall, 60177,  CPersonalShopDlg::CSoldItemDlg, void, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x90]
	mov ecx,dword ptr [esi+0x1D0]
	call CWnd::Destroy
	add esi,0x1CC
	cmp dword ptr [esi+4],0
	je Block2

 Block1:
	push 0
	mov ecx,esi
	call ZRef<CPersonalShopDlg::CSoldItemDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block2:
	pop esi
	ret 4
}
}
// CPersonalShopDlg::DrawCharacterName
_SUB_EXCEPTION_HANDLER(299E90)
__SUB_CLASS_THIS(00299E90, __thiscall, 60114,  CPersonalShopDlg, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_299E90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x48]
	mov dword ptr [esp+0x40],0
	test edi,edi
	je Block29

 Block1:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esp+0x4C]
	lea edx,[esp+0x18]
	push edx
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x4C],1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xCC4]
	mov byte ptr [esp+0x48],2
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov byte ptr [esp+0x48],1
	call IWzFont::CalcTextWidth
	add eax,5
	cmp eax,0x53
	mov dword ptr [esp+0x48],eax
	jl Block7

 Block6:
	mov dword ptr [esp+0x48],0x53

 Block7:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x40],0
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov eax,dword ptr [esi+0xCC8]
	push 0x53
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	lea eax,[esp+0x54]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x44],3
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x50]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0xCC8]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x54],4
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x54],5
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],6
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	imul edi,0x5C
	mov eax,dword ptr [esp+0x58]
	cdq
	sub eax,edx
	sar eax,1
	sub edi,eax
	push 0x85
	add edi,0xB4
	push edi
	mov byte ptr [esp+0x58],7
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov esi,8
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x18],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x34
	ret 8
}
}
// CPersonalShopDlg::OnLeave
_SUB_EXCEPTION_HANDLER(299C40)
// 699E74
static uint8_t _SUB_299C40_LOOKUP_TABLE_0[15] = {
0, 6, 1, 6, 2, 3, 6, 6, 6, 6, 6, 6, 6, 4, 5, 
};
__SUB_CLASS_THIS(00299C40, __thiscall, 60112,  CPersonalShopDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_299C40
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
	mov eax,dword ptr [esi+0xDC]
	mov edi,dword ptr [esp+0x38]
	cmp edi,eax
	je Block4

 Block1:
	xor ebx,ebx
	cmp eax,ebx
	jne Block3

 Block2:
	mov eax,dword ptr [esi+edi*8+0x220]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx
	mov dword ptr [esi+edi*4+0x1E4],ebx

 Block3:
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 8

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	call CInPacket::Decode1
	movzx edi,al
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 8
	mov ecx,esi
	call edx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	lea eax,[edi-1]
	mov dword ptr [esp+0x30],ebx
	cmp eax,0xE
	ja Block14

 Block5:
	movzx eax,byte ptr [eax+_SUB_299C40_LOOKUP_TABLE_0]
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
cmp EAX, 5
je Block11
cmp EAX, 6
je Block14


 Block6:
	lea ecx,[esp+0x3C]
	push 0x1A0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block12

 Block7:
	lea edx,[esp+0x10]
	push 0x1B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block12

 Block8:
	lea eax,[esp+0x14]
	push 0x1BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block12

 Block9:
	lea ecx,[esp+0x18]
	push 0x1A69
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block12

 Block10:
	lea edx,[esp+0x1C]
	push 0x1B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block12

 Block11:
	lea eax,[esp+0x20]
	push 0x1BE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]

 Block12:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
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
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 8
}
}
// CPersonalShopDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(298C20)
__SUB_CLASS_THIS(00298C20, __thiscall, 60103,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_298C20
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x24]
	push ebx
	lea edi,[esi-4]
	push ebp
	mov ecx,edi
	call CPersonalShopDlg::GetRectIndexFromPoint
	test eax,eax
	jl Block5

 Block1:
	cmp eax,dword ptr [esi+0xDC]
	jge Block5

 Block2:
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CMiniRoomBaseDlg::GetUserID
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+ebp+0x14]
	push ecx
	lea ecx,[esi+0x270]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,1
	jmp Block12

 Block5:
	push ebx
	push ebp
	mov ecx,edi
	call CPersonalShopDlg::GetItemIndexFromPoint
	test eax,eax
	jl Block11

 Block6:
	lea edx,[eax+eax*4]
	mov eax,dword ptr [esi+0x1C0]
	lea eax,[eax+edx*4]
	test eax,eax
	je Block11

 Block7:
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jl Block11

 Block8:
	jne Block10

 Block9:
	cmp dword ptr [eax+0x10],0
	je Block11

 Block10:
	mov eax,dword ptr [eax+0x10]
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
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x270]
	call CUIToolTip::ShowItemToolTip
	mov eax,1
	jmp Block12

 Block11:
	lea ecx,[esi+0x270]
	call CUIToolTip::ClearToolTip
	xor eax,eax

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 8
}
}
// CPersonalShopDlg::HitTest
__SUB_CLASS_THIS(00297A30, __thiscall, 60108,  CPersonalShopDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push ebx
	push edi
	call CWnd::HitTest
	cmp eax,2
	jne Block4

 Block1:
	cmp edi,0xE8
	jl Block5

 Block2:
	cmp ebx,0x170
	jl Block5

 Block3:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 0xC

 Block4:
	test eax,eax
	je Block8

 Block5:
	test esi,esi
	je Block7

 Block6:
	cmp dword ptr [esi],0
	jne Block8

 Block7:
	mov eax,0x9C
	cmp eax,ebx
	sbb eax,eax
	neg eax
	inc eax

 Block8:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CPersonalShopDlg::CPutItemDlg::CPutItemDlg
_SUB_EXCEPTION_HANDLER(29B430)
__SUB_CLASS_THIS(0029B430, __thiscall, 60146,  CPersonalShopDlg::CPutItemDlg, void, int32_t, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B430
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
	call CDialog::_ctor_default
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x90],ecx
	mov ecx,dword ptr [esp+0x24]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],edx
	mov dword ptr [esi+0x98],ecx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC8],eax
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0xD8],eax
	mov dword ptr [esi+0xDC],eax
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGPE__1
	mov ecx,esi
	mov byte ptr [esp+0x24],7
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CPersonalShopDlg::OnChildNotify
__SUB_CLASS_THIS(002979E0, __thiscall, 60105,  CPersonalShopDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3F6
	je Block2

 Block1:
	cmp eax,0x3F4
	jne Block5

 Block2:
	cmp edx,0x12C
	jb Block5

 Block3:
	cmp edx,0x130
	ja Block5

 Block4:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block5:
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push edx
	push eax
	call CMiniRoomBaseDlg::OnChildNotify
	pop esi
	ret 0xC
}
}
// CPersonalShopDlg::IsKindOf
__SUB_CLASS_THIS(0011D9D0, __thiscall, 60130,  CPersonalShopDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CPersonalShopDlg::ms_RTTI_CPersonalShopDlg
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
// CPersonalShopDlg::OnCreate
_SUB_EXCEPTION_HANDLER(29EBA0)
__SUB_CLASS_THIS(0029EBA0, __thiscall, 60099,  CPersonalShopDlg, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29EBA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	lea ebx,[esi+0xCD0]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
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
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0xB4],0
	call edi
	lea eax,[esp+0x34]
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
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGPE__19
	mov byte ptr [esp+0xC8],1
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC4],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x58]
	mov byte ptr [esp+0xC4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xCBC]
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
	mov edi,8
	mov byte ptr [esp+0xB0],1
	cmp word ptr [esp+0x44],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0xB0],0
	cmp word ptr [esp+0x34],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x34]
	push ecx
	call ebp

 Block17:
	or edi,0xFFFFFFFF
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0xB0],edi
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x24]
	push eax
	call ebp

 Block21:
	lea ecx,[esp+0x68]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x18]
	push 0x1A25
	push ecx
	mov dword ptr [esp+0xB8],4
	mov dword ptr [esp+0x94],edi
	mov dword ptr [esp+0x8C],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea edx,[esp+0x7C]
	cmp edx,edi
	je Block26

 Block22:
	mov ecx,dword ptr [esp+0x7C]
	test ecx,ecx
	je Block24

 Block23:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x7C],0

 Block24:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x7C],edi
	test edi,edi
	je Block26

 Block25:
	add edi,8
	push edi
	call ebp

 Block26:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release

 Block28:
	mov eax,2
	xor ecx,ecx
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x70],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x84],0xB
	mov dword ptr [esp+0x9C],0x100
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x78],edx
	mov dword ptr [esp+0x7C],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB0],5
	test eax,eax
	je Block30

 Block29:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0xB0],4
	test eax,eax
	je Block127

 Block32:
	add eax,8
	je Block127

 Block33:
	lea edi,[eax-8]
	test edi,edi
	je Block35

 Block34:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block35:
	mov eax,dword ptr [esi+0x268]
	mov dword ptr [esi+0x268],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block37

 Block36:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0x268]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x68]
	push eax
	push 0xF
	push 0xD3
	push 0x145
	push 0xE1
	push 0x3F5
	push esi
	call edx
	mov eax,dword ptr [esi+0x268]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	xor eax,eax
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x58],1
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x60],eax
	push eax
	push eax
	push eax
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGPE__18
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xC8],6
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],7
	lea ebp,[esi+0x214]
	test eax,eax
	je Block39

 Block38:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	cmp dword ptr [ebp+4],0
	je Block41

 Block40:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block41:
	cmp dword ptr [esp+0x1C],0
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx
	mov byte ptr [esp+0xB0],6
	je Block43

 Block42:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block43:
	push 0
	push 0
	push 0
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGPE__17
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],8
	lea edi,[esi+0x21C]
	test eax,eax
	je Block45

 Block44:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	cmp dword ptr [edi+4],0
	je Block47

 Block46:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block47:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xB0],6
	je Block49

 Block48:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block49:
	push 0
	push 0
	push 0
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGPE__16
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],9
	lea edi,[esi+0x1F4]
	test eax,eax
	je Block51

 Block50:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block51:
	cmp dword ptr [edi+4],0
	je Block53

 Block52:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block53:
	cmp dword ptr [esp+0x1C],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB0],6
	je Block55

 Block54:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block55:
	push 0
	push 0
	push 0
	push 0x3F2
	push offset _S_UIUIWINDOW2IMGPE__15
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],0xA
	lea ebp,[esi+0x1FC]
	test eax,eax
	je Block57

 Block56:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block57:
	cmp dword ptr [ebp+4],0
	je Block59

 Block58:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block59:
	cmp dword ptr [esp+0x1C],0
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx
	mov byte ptr [esp+0xB0],6
	je Block61

 Block60:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block61:
	push 0
	push 0
	push 0
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGPE__14
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],0xB
	lea edi,[esi+0x204]
	test eax,eax
	je Block63

 Block62:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block63:
	cmp dword ptr [edi+4],0
	je Block65

 Block64:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block65:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xB0],6
	je Block67

 Block66:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block67:
	push 0
	push 0
	push 0
	push 0x3ED
	push offset _S_UIUIWINDOW2IMGPE__13
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],0xC
	lea edi,[esi+0x20C]
	test eax,eax
	je Block69

 Block68:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block69:
	cmp dword ptr [edi+4],0
	je Block71

 Block70:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block71:
	cmp dword ptr [esp+0x1C],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB0],6
	je Block73

 Block72:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block73:
	push 0
	push 0
	push 0
	push 0x3F3
	push offset _S_UIUIWINDOW2IMGPE__12
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block75

 Block74:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block75:
	push 0
	push 0
	push 0
	push 0x3EE
	push offset _S_UIUIWINDOW2IMGPE__11
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block77

 Block76:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block77:
	push 0
	push 0x75
	push 0x12E
	push 0x3EF
	push offset _S_UIUIWINDOW2IMGPE__10
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],0xD
	lea ebp,[esi+0x224]
	test eax,eax
	je Block79

 Block78:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block79:
	cmp dword ptr [ebp+4],0
	je Block81

 Block80:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block81:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebp+4],eax
	mov byte ptr [esp+0xB0],6
	je Block83

 Block82:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block83:
	mov eax,dword ptr [esi+0x228]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	push 0
	push 0x75
	push 0x18A
	push 0x3F0
	push offset _S_UIUIWINDOW2IMGPE__10
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],0xE
	lea ebp,[esi+0x22C]
	test eax,eax
	je Block85

 Block84:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block85:
	cmp dword ptr [ebp+4],0
	je Block87

 Block86:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block87:
	cmp dword ptr [esp+0x1C],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebp+4],edx
	mov byte ptr [esp+0xB0],6
	je Block89

 Block88:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block89:
	mov eax,dword ptr [esi+0x230]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	push 0
	push 0x75
	push 0x1E6
	push 0x3F1
	push offset _S_UIUIWINDOW2IMGPE__10
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],0xF
	lea ebp,[esi+0x234]
	test eax,eax
	je Block91

 Block90:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block91:
	cmp dword ptr [ebp+4],0
	je Block93

 Block92:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block93:
	cmp dword ptr [esp+0x1C],0
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx
	mov byte ptr [esp+0xB0],6
	je Block95

 Block94:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block95:
	mov eax,dword ptr [esi+0x238]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	push 0
	push 0xFFFFFFEC
	push 0
	push 0x3F2
	push offset _S_UIUIWINDOW2IMGPE__15
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xB0],0x10
	lea ebp,[esi+0x24C]
	test eax,eax
	je Block97

 Block96:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block97:
	cmp dword ptr [ebp+4],0
	je Block99

 Block98:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block99:
	cmp dword ptr [esp+0x1C],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebp+4],edx
	mov byte ptr [esp+0xB0],6
	je Block101

 Block100:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block101:
	push 0
	push 0
	push 0
	push 0x3F7
	push offset _S_UIUIWINDOW2IMGPE__9
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],0x11
	lea edi,[esi+0x23C]
	test eax,eax
	je Block103

 Block102:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block103:
	cmp dword ptr [edi+4],0
	je Block105

 Block104:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block105:
	cmp dword ptr [esp+0x1C],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0xB0],6
	je Block107

 Block106:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block107:
	push 0
	push 0
	push 0
	push 0x3F8
	push offset _S_UIUIWINDOW2IMGPE__8
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],0x12
	lea edi,[esi+0x244]
	test eax,eax
	je Block109

 Block108:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block109:
	cmp dword ptr [edi+4],0
	je Block111

 Block110:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block111:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xB0],6
	je Block113

 Block112:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block113:
	push 0
	push 0
	push 0
	push 0x3F9
	push offset _S_UIUIWINDOW2IMGPE__7
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xB0],0x13
	lea edi,[esi+0x254]
	test eax,eax
	je Block115

 Block114:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block115:
	cmp dword ptr [edi+4],0
	je Block117

 Block116:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block117:
	cmp dword ptr [esp+0x1C],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [esp+0xB0],6
	je Block119

 Block118:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block119:
	push 0
	push 0
	push 0
	push 0x3FA
	push offset _S_UIUIWINDOW2IMGPE__6
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xB0],0x14
	lea edi,[esi+0x25C]
	test eax,eax
	je Block121

 Block120:
	add eax,0xC
	push eax
	call ebx

 Block121:
	cmp dword ptr [edi+4],0
	je Block123

 Block122:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block123:
	cmp dword ptr [esp+0x1C],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0xB0],6
	je Block125

 Block124:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block125:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB0],0x15
	test eax,eax
	je Block128

 Block126:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block129

 Block127:
	xor edi,edi
	jmp Block35

 Block128:
	xor eax,eax

 Block129:
	mov byte ptr [esp+0xB0],6
	test eax,eax
	je Block137

 Block130:
	add eax,8
	je Block137

 Block131:
	lea edi,[eax-8]
	test edi,edi
	je Block133

 Block132:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block133:
	mov eax,dword ptr [esi+0x270]
	mov dword ptr [esi+0x270],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block135

 Block134:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block135:
	mov ecx,dword ptr [esi+0x270]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xCC
	push 0xA0
	push 0xC5
	mov ebp,8
	push ebp
	push 1
	push 0x3F6
	push esi
	call edx
	mov eax,dword ptr [esi+0x270]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0xC8
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xB0],0x16
	test eax,eax
	je Block138

 Block136:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block139

 Block137:
	xor edi,edi
	jmp Block133

 Block138:
	xor eax,eax

 Block139:
	mov byte ptr [esp+0xB0],6
	test eax,eax
	je Block161

 Block140:
	add eax,8
	je Block161

 Block141:
	lea edi,[eax-8]
	test edi,edi
	je Block143

 Block142:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block143:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block145

 Block144:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block145:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x9B
	push 0xA1
	push 0x1E8
	push ebp
	push 1
	push 0x3F4
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	push 0
	push 0x96
	push 0x10E
	push 0xA3
	push 0xE1
	mov ecx,esi
	mov dword ptr [eax+0x34],0xFA
	call CMiniRoomBaseDlg::EnableChat
	lea ecx,[esp+0x18]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xCC4]
	add esp,8
	cmp edi,eax
	je Block150

 Block146:
	mov dword ptr [esi+0xCC4],eax
	test eax,eax
	je Block148

 Block147:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block148:
	test edi,edi
	je Block150

 Block149:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block150:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	lea eax,[esp+0x18]
	push 0x16
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xCC8]
	add esp,8
	cmp edi,eax
	je Block157

 Block153:
	mov dword ptr [esi+0xCC8],eax
	test eax,eax
	je Block155

 Block154:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block155:
	test edi,edi
	je Block157

 Block156:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block157:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block159

 Block158:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block159:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block160:
	push eax
	call _com_issue_error

 Block161:
	xor edi,edi
	jmp Block143

 Block162:
	lea eax,[esp+0x24]
	mov bl,0x17
	push eax
	mov byte ptr [esp+0xB4],bl
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	push edi
	push edi
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x50E
	push ecx
	mov byte ptr [esp+0xCC],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC4],0x19
	cmp dword ptr [_D_G_RM],edi
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0xC4],0x18
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x1A
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xCCC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block169

 Block167:
	cmp eax,0x80004002
	je Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	mov byte ptr [esp+0xB0],0x18
	cmp word ptr [esp+0x44],bp
	jne Block172

 Block170:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [esp+0xB0],bl
	cmp word ptr [esp+0x24],bp
	jne Block176

 Block174:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,edi
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov byte ptr [esp+0xB0],6
	cmp word ptr [esp+0x34],bp
	jne Block180

 Block178:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	lea eax,[esp+0x23]
	push eax
	push edi
	lea ecx,[esi+0x1C8]
	call ZArray<CPersonalShopDlg::SOLD_ITEM>::_Alloc
	lea ecx,[esp+0x68]
	mov dword ptr [esi+0x1E8],edi
	mov dword ptr [esi+0x1EC],edi
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CPersonalShopDlg::OnEnterResult
_SUB_EXCEPTION_HANDLER(299A80)
__SUB_CLASS_THIS(00299A80, __thiscall, 60113,  CPersonalShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_299A80
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
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x248]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x250]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x258]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x260]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	cmp dword ptr [esi+0xDC],0
	push 0
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x220]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	call edx
	mov eax,dword ptr [esi+0x200]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x208]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	jmp Block5

 Block2:
	mov eax,dword ptr [esi+0x218]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	call edx
	mov eax,dword ptr [esi+0x1F8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x210]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	lea edi,[esi+0x228]
	mov ebx,3

 Block3:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add edi,8
	sub ebx,1
	jne Block3

 Block4:
	mov dword ptr [esi+0x1BC],1

 Block5:
	mov ebx,dword ptr [esp+0x24]
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea edi,[esi+0x1D4]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x20],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push edi
	lea ecx,[esi+0x1D8]
	call ZXString<char>::op_assign
	push 0x1F0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
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
// CPersonalShopDlg::OnMoveItemToInventory
__SUB_CLASS_THIS(00298650, __thiscall, 60113,  CPersonalShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [edi+0x1C0],eax
	call CInPacket::Decode2
	movzx ebx,ax
	cmp ebx,dword ptr [edi+0x1C0]
	jge Block11

 Block1:
	push ebp
	lea ebp,[ebx+ebx*4]
	add ebp,ebp
	add ebp,ebp

 Block2:
	mov ecx,dword ptr [edi+0x1C4]
	mov edx,dword ptr [ecx+ebp+0x14]
	lea esi,[ecx+ebp]
	mov dword ptr [esi],edx
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [esi+8],ecx
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov edx,dword ptr [esi+0x10]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0x10],0

 Block9:
	mov eax,dword ptr [esi+0x24]
	inc ebx
	mov dword ptr [esi+0x10],eax
	add ebp,0x14
	cmp ebx,dword ptr [edi+0x1C0]
	jl Block2

 Block10:
	pop ebp

 Block11:
	mov eax,dword ptr [edi+0x1C0]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [edi+0x1C4]
	xor ecx,ecx
	mov dword ptr [eax+edx*4],ecx
	mov eax,dword ptr [edi+0x1C0]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [edi+0x1C4]
	mov dword ptr [eax+edx*4+4],ecx
	mov eax,dword ptr [edi+0x1C0]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [edi+0x1C4]
	mov dword ptr [eax+edx*4+8],ecx
	mov eax,dword ptr [edi+0x1C0]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [edi+0x1C4]
	lea esi,[eax+edx*4+0xC]
	mov eax,dword ptr [esi+4]
	cmp eax,ecx
	je Block16

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov ecx,dword ptr [esi+4]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
	mov dword ptr [esi+4],0

 Block16:
	mov ecx,edi
	call CPersonalShopDlg::SetScrollBar
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CPersonalShopDlg::~CPersonalShopDlg
_SUB_EXCEPTION_HANDLER(29E870)
__SUB_CLASS_THIS0(0029E870, __thiscall, 60098,  CPersonalShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29E870
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
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [esi+0x1D0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0x1A
	cmp ecx,ebx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0x1D0],ebx
	lea edi,[esi+0x1CC]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CPersonalShopDlg::CSoldItemDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	cmp dword ptr [esi+0xDC],ebx
	jne Block5

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [eax+0x3864],ebx

 Block5:
	lea ecx,[esi+0xCD0]
	mov byte ptr [esp+0x1C],0x19
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xCCC]
	mov byte ptr [esp+0x1C],0x18
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0xCC8]
	mov byte ptr [esp+0x1C],0x17
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xCC4]
	mov byte ptr [esp+0x1C],0x16
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xCC0]
	mov byte ptr [esp+0x1C],0x15
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xCBC]
	mov byte ptr [esp+0x1C],0x14
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	lea ecx,[esi+0x274]
	mov byte ptr [esp+0x1C],0x13
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0x26C]
	mov byte ptr [esp+0x1C],0x12
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0x264]
	mov byte ptr [esp+0x1C],0x11
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	lea edi,[esi+0x25C]
	mov byte ptr [esp+0x1C],0x10
	cmp dword ptr [edi+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	lea edi,[esi+0x254]
	mov byte ptr [esp+0x1C],0xF
	cmp dword ptr [edi+4],ebx
	je Block23

 Block22:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block23:
	lea edi,[esi+0x24C]
	mov byte ptr [esp+0x1C],0xE
	cmp dword ptr [edi+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block25:
	lea edi,[esi+0x244]
	mov byte ptr [esp+0x1C],0xD
	cmp dword ptr [edi+4],ebx
	je Block27

 Block26:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block27:
	lea edi,[esi+0x23C]
	mov byte ptr [esp+0x1C],0xC
	cmp dword ptr [edi+4],ebx
	je Block29

 Block28:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block29:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 3
	push 8
	lea eax,[esi+0x224]
	push eax
	mov byte ptr [esp+0x2C],0xB
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x21C]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block31

 Block30:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block31:
	lea edi,[esi+0x214]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block33

 Block32:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block33:
	lea edi,[esi+0x20C]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block35

 Block34:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block35:
	lea edi,[esi+0x204]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block37

 Block36:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block37:
	lea edi,[esi+0x1FC]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block39

 Block38:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block39:
	lea edi,[esi+0x1F4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block41

 Block40:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block41:
	mov eax,dword ptr [esi+0x1D8]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [esi+0x1D4]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea edi,[esi+0x1CC]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block47

 Block46:
	push ebx
	mov ecx,edi
	call ZRef<CPersonalShopDlg::CSoldItemDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block47:
	lea ecx,[esi+0x1C8]
	mov byte ptr [esp+0x1C],1
	call ZArray<CPersonalShopDlg::SOLD_ITEM>::RemoveAll
	lea ecx,[esi+0x1C4]
	mov byte ptr [esp+0x1C],bl
	call ZArray<CPersonalShopDlg::ITEM>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CMiniRoomBaseDlg::~CMiniRoomBaseDlg
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
// CPersonalShopDlg::DeliverBlackList
_SUB_EXCEPTION_HANDLER(29B0D0)
__SUB_CLASS_THIS0(0029B0D0, __thiscall, 60098,  CPersonalShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B0D0
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
	cmp dword ptr [ecx+0x1C0],0
	je Block8

 Block1:
	push 0x90
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x1E
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::Encode1
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [eax+0xF8]
	test eax,eax
	jne Block3

 Block2:
	xor edi,edi
	jmp Block4

 Block3:
	movzx edi,word ptr [eax-4]

 Block4:
	push edi
	lea ecx,[esp+0x14]
	call COutPacket::Encode2
	movsx edi,di
	xor esi,esi
	test edi,edi
	jle Block7

 Block5:
	lea ecx,[ecx]

 Block6:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov edx,dword ptr [ecx+0xF8]
	push ecx
	lea eax,[edx+esi*4]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	inc esi
	cmp esi,edi
	jl Block6

 Block7:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block8:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CPersonalShopDlg::CPutItemDlg::Draw
__SUB_CLASS_THIS(00297F50, __thiscall, 60152,  CPersonalShopDlg::CPutItemDlg, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::Draw
	mov eax,dword ptr [esi+0xB0]
	mov eax,dword ptr [eax+0x48]
	test eax,eax
	je Block2

 Block1:
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGPE
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea ecx,[esi+0xCC]
	call CLayoutMan::CopyToCanvas_1

 Block2:
	pop esi
	ret 4
}
}
// CPersonalShopDlg::OnPacket
__SUB_CLASS_THIS(0029C820, __thiscall, 60112,  CPersonalShopDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFE8
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block2
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x70]
	push edx
	call eax
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CPersonalShopDlg::OnBuyResult
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	call CPersonalShopDlg::OnSoldItemResult
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	call CPersonalShopDlg::OnMoveItemToInventory

 Block6:
	ret 8
}
}
// CPersonalShopDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(29C080)
__SUB_CLASS_THIS(0029C080, __thiscall, 60100,  CPersonalShopDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29C080
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
	mov esi,ecx
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [esp+0x34]
	lea eax,[ecx-0x3E9]
	mov dword ptr [esp+0x2C],edi
	cmp eax,9
	ja Block31

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block11
cmp EAX, 5
je Block16
cmp EAX, 6
je Block28
cmp EAX, 7
je Block29
cmp EAX, 8
je Block30
cmp EAX, 9
je Block5


 Block2:
	mov ecx,esi
	call CPersonalShopDlg::DeliverBlackList
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov ecx,esi
	call edx

 Block3:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CPersonalShopDlg::CSoldItemDlg>::~ZRef<CPersonalShopDlg::CSoldItemDlg>
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block4:
	mov edi,dword ptr [esi]
	mov eax,dword ptr [edi+0x5C]
	mov ecx,esi
	call eax
	mov edx,dword ptr [edi+0x34]
	neg eax
	sbb eax,eax
	and eax,6
	add eax,2
	push eax
	mov ecx,esi
	call edx
	jmp Block3

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	jmp Block3

 Block6:
	mov eax,dword ptr [esi+0x1E0]
	push eax
	mov ecx,esi
	call CPersonalShopDlg::BuyItem
	jmp Block3

 Block7:
	push edi
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	mov byte ptr [esp+0x30],1
	call CUserPool::FindRemoteUserByName
	mov esi,eax
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x2C],0
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp esi,edi
	je Block3

 Block10:
	mov esi,dword ptr [esi+0x19E8]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	push edi
	push esi
	call CWvsContext::SendCharacterInfoRequest
	jmp Block3

 Block11:
	cmp dword ptr [esi+0x1D0],edi
	jne Block3

 Block12:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x2C],2
	cmp eax,edi
	je Block14

 Block13:
	push esi
	mov ecx,eax
	call CPersonalShopDlg::CSoldItemDlg::_ctor_0
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	lea ecx,[esi+0x1CC]
	mov byte ptr [esp+0x30],0
	call ZRef<CPersonalShopDlg::CSoldItemDlg>::op_assign_ptr
	jmp Block3

 Block16:
	mov ecx,dword ptr [esi+0x268]
	cmp ecx,edi
	je Block18

 Block17:
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov ecx,eax
	mov ebx,1
	call ZXString<char>::IsEmpty
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block19

 Block18:
	mov byte ptr [esp+0x34],1

 Block19:
	test bl,1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	cmp byte ptr [esp+0x34],0
	jne Block3

 Block23:
	mov ecx,dword ptr [esi+0x268]
	lea eax,[esp+0x34]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x268]
	push edi
	mov byte ptr [esp+0x30],3
	call CCtrlEdit::SetText
	push ecx
	lea edx,[esp+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,esi
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x268]
	cmp esi,edi
	je Block25

 Block24:
	lea eax,[esi+4]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],0
	cmp eax,edi
	je Block3

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block3

 Block28:
	push 1
	mov ecx,esi
	call CPersonalShopDlg::OnClickBanButton
	jmp Block3

 Block29:
	push 2
	mov ecx,esi
	call CPersonalShopDlg::OnClickBanButton
	jmp Block3

 Block30:
	push 3
	mov ecx,esi
	call CPersonalShopDlg::OnClickBanButton
	jmp Block3

 Block31:
	cmp ecx,1
	jne Block33

 Block32:
	push ecx
	jmp Block37

 Block33:
	cmp ecx,2
	jne Block35

 Block34:
	push ecx
	jmp Block37

 Block35:
	cmp ecx,8
	jne Block38

 Block36:
	push ecx

 Block37:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	mov ecx,esi
	call edx

 Block38:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CPersonalShopDlg::OnKey
_SUB_EXCEPTION_HANDLER(298AE0)
__SUB_CLASS_THIS(00298AE0, __thiscall, 60101,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_298AE0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	xor edx,edx
	mov dword ptr [esp+0xC],edx
	test eax,eax
	js Block16

 Block1:
	cmp ecx,0xD
	jne Block16

 Block2:
	mov ecx,dword ptr [esi+0x264]
	test ecx,ecx
	je Block6

 Block3:
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block6

 Block4:
	cmp byte ptr [eax],0
	je Block6

 Block5:
	xor bl,bl
	jmp Block7

 Block6:
	mov bl,1

 Block7:
	test dl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test bl,bl
	jne Block17

 Block11:
	mov ecx,dword ptr [esi+0x264]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x264]
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x264]
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block16:
	push eax
	push ecx
	mov ecx,esi
	call CDialog::OnKey

 Block17:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CPersonalShopDlg::BuyItem
_SUB_EXCEPTION_HANDLER(29A7F0)
__SUB_CLASS_THIS(0029A7F0, __thiscall, 60106,  CPersonalShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29A7F0
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
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [ebx+0xDC]
	test eax,eax
	je Block87

 Block1:
	mov esi,dword ptr [esp+0x7C]
	test esi,esi
	jl Block87

 Block2:
	mov eax,dword ptr [ebx+0x1C4]
	test eax,eax
	je Block87

 Block3:
	cmp esi,dword ptr [eax-4]
	jae Block87

 Block4:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	mov dword ptr [esp+0x24],edi
	jne Block87

 Block5:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block87

 Block6:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block87

 Block7:
	mov eax,dword ptr [ebx+0x1C4]
	lea edx,[esi+esi*4]
	cmp dword ptr [eax+edx*4],0
	lea esi,[eax+edx*4]
	jg Block10

 Block8:
	push 0
	push 0
	add ebx,0x88
	push ebx
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x90],esp
	push 0x1BA

 Block9:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block87

 Block10:
	cmp dword ptr [esi+0x10],0
	je Block87

 Block11:
	call Util::FTGetNow
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],edx
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x18]
	xor ebp,ebp
	call eax
	cmp eax,3
	jne Block13

 Block12:
	mov ebp,dword ptr [esi+0x10]

 Block13:
	mov edi,dword ptr [esi+0x10]
	mov ecx,edi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block44

 Block14:
	mov ecx,edi
	call GW_ItemSlotBase::IsTimeLimitedItem
	test eax,eax
	jne Block16

 Block15:
	test ebp,ebp
	je Block44

 Block16:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	xor edi,edi
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esi+0x10]
	lea ecx,[esp+0x44]
	push ecx
	add eax,0x20
	push eax
	mov byte ptr [esp+0x7C],1
	call CompareFileTime
	test eax,eax
	jle Block23

 Block17:
	cmp ebp,edi
	je Block21

 Block18:
	lea edx,[esp+0x44]
	push edx
	lea edi,[ebp+0x59]
	push edi
	call CompareFileTime
	test eax,eax
	jle Block23

 Block19:
	mov ecx,ebp
	call GW_ItemSlotPet::IsDead
	test eax,eax
	jne Block23

 Block20:
	mov eax,edi
	jmp Block22

 Block21:
	mov eax,dword ptr [esi+0x10]
	add eax,0x20

 Block22:
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push eax
	call Util::FTSubtract
	add esp,0x18
	lea eax,[esp+0x3C]
	push 0x147A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x88],3
	call ZXString<char>::Format
	add esp,0x14
	jmp Block24

 Block23:
	lea eax,[esp+0x3C]
	push 0x1478
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x78],2
	call ZXString<char>::op_assign

 Block24:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x74],1
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov edx,dword ptr [esp+0x20]
	push 0x64
	push ecx
	add edx,0xCC8
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov bl,4
	push edx
	mov byte ptr [esp+0x80],bl
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea eax,[esp+0x24]
	push eax
	call format_string_1
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x28]
	push ecx
	push edx
	lea eax,[esp+0x28]
	push offset _S_SS__3
	push eax
	call ZXString<char>::Format
	add esp,0x1C
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_assign_other_0
	lea ecx,[esp+0x18]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block37

 Block27:
	push offset _S___4
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_assign_t_1
	lea edx,[esp+0x3C]
	push 0x1479
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x78],5
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	push 0
	push 0
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_1
	add esp,0xC
	cmp eax,6
	jne Block31

 Block30:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block37

 Block31:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x74],1
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block87

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block87

 Block37:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x74],1
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov ebx,dword ptr [esp+0x20]

 Block44:
	mov edi,dword ptr [esi+0x10]
	mov ecx,edi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block48

 Block45:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block48

 Block46:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0x1244
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block87

 Block47:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block87

 Block48:
	call get_field
	test eax,eax
	je Block52

 Block49:
	mov edx,dword ptr [esi+0x10]
	mov ecx,dword ptr [edx+0x20]
	mov dword ptr [esp+0x3C],ecx
	mov edx,dword ptr [edx+0x24]
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x40],edx
	push ecx
	lea edx,[esp+0x60]
	push edx
	mov ecx,eax
	call CField::GetCorrectTime
	push eax
	call dword ptr [ZImports::_SystemTimeToFileTime]
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	cmp eax,1
	jne Block52

 Block50:
	push 0
	push 0
	add ebx,0x88
	push ebx
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x90],esp
	push 0x1A6A

 Block51:
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block87

 Block52:
	mov eax,dword ptr [esi+0x10]
	push eax
	call is_treat_singly_1
	add esp,4
	test eax,eax
	je Block60

 Block53:
	mov ecx,dword ptr [esi+0x10]
	call GW_ItemSlotBase::IsCashItem
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block57

 Block54:
	mov eax,esp
	push 0x14AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block87

 Block55:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block59

 Block56:
	jmp Block87

 Block57:
	mov ecx,esp
	push 0x361
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block87

 Block58:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block87

 Block59:
	mov edi,1
	jmp Block78

 Block60:
	cmp dword ptr [ebx+0x8C],0
	jne Block87

 Block61:
	mov dword ptr [esp+0x38],0
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x78],6
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x74],7
	test eax,eax
	je Block63

 Block62:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block64

 Block63:
	xor eax,eax

 Block64:
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x78],6
	call ZRef<CUtilDlgEx>::op_assign_ptr
	mov eax,dword ptr [eax+4]
	lea edi,[ebx+0x88]
	push eax
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr
	push 0
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x362
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x44]
	push 0
	push 2
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [esi]
	imul eax,dword ptr [esi+4]
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 0xA
	push 0
	push eax
	push 1
	push 1
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,dword ptr [esp+0x38]
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,dword ptr [esp+0x38]
	call CDialog::DoModal
	push 0
	mov ecx,edi
	mov ebp,eax
	call ZRef<CDialog>::op_assign_zero
	cmp ebp,1
	jne Block86

 Block65:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [ecx+0xF4]
	mov ecx,dword ptr [esi+4]
	cdq
	idiv ecx
	test edx,edx
	je Block67

 Block66:
	push 0
	push 0
	push edi
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x90],esp
	push 0x1B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block86

 Block67:
	mov edi,eax
	mov eax,dword ptr [esi+8]
	imul edi
	test edx,edx
	jl Block71

 Block68:
	jg Block70

 Block69:
	cmp eax,0x7FFFFFFF
	jbe Block71

 Block70:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x90],esp
	push 0xF84
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block86

 Block71:
	mov dword ptr [esp+0x1C],0
	lea ecx,[esp+0x3C]
	push 0x1B3
	mov bl,8
	push ecx
	mov byte ptr [esp+0x7C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [eax]
	imul edx,edi
	push edx
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x80],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block84

 Block74:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block84

 Block75:
	mov byte ptr [esp+0x74],al
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block78:
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x2C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x2C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,ebp
	mov ebx,eax
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movzx ecx,ax
	push ecx
	push ebx
	call is_matched_itemid_job
	add esp,8
	test eax,eax
	jne Block80

 Block79:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x90],esp
	push 0x1594
	jmp Block51

 Block80:
	mov ecx,ebp
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	cmp al,0xF
	ja Block83

 Block81:
	mov eax,dword ptr [esi+8]
	imul eax,edi
	cmp eax,0xF4240
	jle Block83

 Block82:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x90],esp
	push 0xFB2
	jmp Block9

 Block83:
	push 0x90
	lea ecx,[esp+0x50]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x5C]
	mov dword ptr [esp+0x74],0xA
	call eax
	neg eax
	sbb al,al
	and al,0xB
	add al,0x17
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x50]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x7C]
	push edx
	lea ecx,[esp+0x50]
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x50]
	call COutPacket::Encode2
	mov esi,dword ptr [esi+0x10]
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetItemCRC
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x4C]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0x24]
	push 1
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block87

 Block84:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x74],6
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block87:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4
}
}
// CPersonalShopDlg::Update
_SUB_EXCEPTION_HANDLER(29B340)
__SUB_CLASS_THIS0(0029B340, __thiscall, 60098,  CPersonalShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B340
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
	call CMiniRoomBaseDlg::Update
	mov eax,dword ptr [ebx+0xDC]
	test eax,eax
	jne Block6

 Block1:
	lea esi,[eax+1]
	lea edi,[ebx+0x1E8]
	lea ebp,[eax+3]

 Block2:
	cmp dword ptr [edi],0
	jle Block5

 Block3:
	call timeGetTime
	sub eax,dword ptr [edi]
	cmp eax,0x36EE80
	jbe Block5

 Block4:
	push 0x90
	lea ecx,[esp+0x1C]
	mov dword ptr [edi],0
	call COutPacket::_ctor_1
	push 0x1D
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push esi
	push eax
	mov ecx,ebx
	call CMiniRoomBaseDlg::GetUserID
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block5:
	add edi,4
	inc esi
	sub ebp,1
	jne Block2

 Block6:
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
// CPersonalShopDlg::ITEM::~ITEM
__SUB_CLASS_THIS0(002981C0, __thiscall, 60190,  CPersonalShopDlg::ITEM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x10]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+0x10],0

 Block5:
	pop esi
	ret
}
}
// CPersonalShopDlg::OnSoldItemResult
_SUB_EXCEPTION_HANDLER(29A670)
__SUB_CLASS_THIS(0029A670, __thiscall, 60113,  CPersonalShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29A670
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x38]
	mov ecx,ebx
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x1C4]
	movzx eax,al
	lea eax,[eax+eax*4]
	mov edx,dword ptr [ecx+eax*4]
	mov ebp,dword ptr [ecx+eax*4+0x10]
	lea eax,[ecx+eax*4]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x24],ebp
	test ebp,ebp
	je Block2

 Block1:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	push 0xFFFFFFFF
	lea ecx,[esi+0x1C8]
	mov dword ptr [esp+0x34],0
	call ZArray<CPersonalShopDlg::SOLD_ITEM>::InsertBefore
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode2
	movzx ecx,ax
	imul ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x38]
	mov dword ptr [edi+0xC],ecx
	push edx
	mov ecx,ebx
	call CInPacket::DecodeStr
	push eax
	lea ecx,[edi+0x14]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [esp+0x1C]
	imul eax,ecx
	cdq
	idiv dword ptr [esp+0x18]
	mov dword ptr [edi+0x10],ecx
	mov edi,eax
	cdq
	add dword ptr [esi+0x1A8],eax
	push edi
	adc dword ptr [esi+0x1AC],edx
	call GetPersonalShopTax
	mov ecx,dword ptr [esi+0x1D0]
	sub edi,eax
	mov eax,edi
	cdq
	add esp,4
	add dword ptr [esi+0x1B0],eax
	adc dword ptr [esi+0x1B4],edx
	test ecx,ecx
	je Block6

 Block5:
	call CPersonalShopDlg::CSoldItemDlg::SetScrollBar
	mov esi,dword ptr [esi+0x1D0]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ebp,ebp
	je Block9

 Block7:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block8:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block9:
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
// CPersonalShopDlg::OnMouseEnter
__SUB_CLASS_THIS(002979C0, __thiscall, 60104,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x270]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CPersonalShopDlg::ClearToolTip
__SUB_CLASS_THIS0(0011D980, __thiscall, 60109,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x270
	jmp  CUIToolTip::ClearToolTip
}
}
// CPersonalShopDlg::CPutItemDlg::IsNumber
_SUB_EXCEPTION_HANDLER(29B740)
__SUB_CLASS_THIS(0029B740, __thiscall, 60156,  CPersonalShopDlg::CPutItemDlg, int32_t, NakedParam<ZRef<CCtrlEdit>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B740
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
	mov ecx,dword ptr [esp+0x34]
	lea eax,[esp+0x18]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x2C],ebx
	call CCtrlEdit::GetText
	mov byte ptr [esp+0x28],1
	xor ecx,ecx

 Block1:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	je Block3

 Block2:
	mov eax,dword ptr [ebp-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	cmp ecx,eax
	jge Block20

 Block5:
	mov al,byte ptr [ecx+ebp]
	cmp al,0x30
	jl Block8

 Block6:
	cmp al,0x39
	jg Block8

 Block7:
	inc ecx
	jmp Block1

 Block8:
	push ebx
	push ebx
	add esi,0x88
	push esi
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0x341
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x48]
	add esp,0x14
	cmp eax,ebx
	je Block10

 Block9:
	add eax,4
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],0
	cmp ebp,ebx
	je Block13

 Block12:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block68

 Block14:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block68

 Block15:
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block17

 Block16:
	add eax,8
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block68

 Block19:
	lea ecx,[eax+8]
	cmp ecx,ebx
	jmp Block66

 Block20:
	push ebp
	call __atoi64
	push ebp
	mov edi,eax
	mov esi,edx
	call _atoi
	add esp,8
	mov dword ptr [esp+0x14],ebx
	mov bl,2
	test esi,esi
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x28],bl
	jne Block46

 Block21:
	test edi,edi
	jl Block46

 Block22:
	test esi,esi
	jl Block24

 Block23:
	cmp eax,esi
	jg Block46

 Block24:
	mov esi,dword ptr [esp+0x38]
	test esi,esi
	jl Block41

 Block25:
	cmp eax,esi
	jge Block41

 Block26:
	lea ecx,[esp+0x3C]
	push 0x342
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x14]
	push 0
	push 0
	add eax,0x88
	push eax
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block32

 Block29:
	mov eax,ebp
	lea edx,[eax+1]
	lea esp,[esp]

 Block30:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block30

 Block31:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
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

 Block32:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x48]
	add esp,0x14
	test eax,eax
	je Block34

 Block33:
	add eax,4
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],1
	test ebp,ebp
	je Block37

 Block36:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	cmp dword ptr [esp+0x34],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block68

 Block40:
	push 0
	lea ecx,[esp+0x34]
	call ZRef<CCtrlEdit>::_ReleaseRaw
	jmp Block68

 Block41:
	mov byte ptr [esp+0x28],0
	test ebp,ebp
	je Block43

 Block42:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block43:
	cmp dword ptr [esp+0x34],0
	mov dword ptr [esp+0x28],0xFFFFFFFF
	je Block45

 Block44:
	push 0
	lea ecx,[esp+0x34]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block45:
	mov eax,1
	jmp Block69

 Block46:
	lea ecx,[esp+0x3C]
	push 0x343
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x14]
	push 0
	push 0
	add eax,0x88
	push eax
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block52

 Block49:
	mov eax,ebp
	lea edx,[eax+1]

 Block50:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block50

 Block51:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
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

 Block52:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x48]
	add esp,0x14
	test eax,eax
	je Block54

 Block53:
	add eax,4
	jmp Block55

 Block54:
	xor eax,eax

 Block55:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],1
	test ebp,ebp
	je Block57

 Block56:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block68

 Block60:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block68

 Block61:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block63

 Block62:
	add eax,8
	jmp Block64

 Block63:
	xor eax,eax

 Block64:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block68

 Block65:
	lea ecx,[eax+8]
	test ecx,ecx

 Block66:
	je Block68

 Block67:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block68:
	xor eax,eax

 Block69:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x10
}
}
// CPersonalShopDlg::CSoldItemDlg::OnChildNotify
__SUB_CLASS_THIS(00297AD0, __thiscall, 60175,  CPersonalShopDlg::CSoldItemDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x7D0
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
// CPersonalShopDlg::OnBuyResult
_SUB_EXCEPTION_HANDLER(29A300)
__SUB_CLASS_THIS(0029A300, __thiscall, 60113,  CPersonalShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29A300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x58]
	call CInPacket::Decode1
	xor ebx,ebx
	movzx eax,al
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x50],ebx
	cmp eax,0xE
	ja Block15

 Block1:
	cmp EAX, 0
je Block20
cmp EAX, 1
je Block5
cmp EAX, 2
je Block2
cmp EAX, 3
je Block4
cmp EAX, 4
je Block3
cmp EAX, 5
je Block6
cmp EAX, 6
je Block7
cmp EAX, 7
je Block8
cmp EAX, 8
je Block9
cmp EAX, 9
je Block10
cmp EAX, 10
je Block11
cmp EAX, 11
je Block12
cmp EAX, 12
je Block13
cmp EAX, 13
je Block15
cmp EAX, 14
je Block14


 Block2:
	lea eax,[esp+0xC]
	push 0x1A8B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	jmp Block16

 Block3:
	lea ecx,[esp+0x10]
	push 0xB9C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block16

 Block4:
	lea edx,[esp+0x14]
	push 0xB9D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block16

 Block5:
	lea eax,[esp+0x18]
	push 0x365
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block16

 Block6:
	lea ecx,[esp+0x1C]
	push 0x366
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block16

 Block7:
	lea edx,[esp+0x20]
	push 0x367
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block16

 Block8:
	lea eax,[esp+0x24]
	push 0x1A2B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block16

 Block9:
	lea ecx,[esp+0x28]
	push 0x1A6D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block16

 Block10:
	lea edx,[esp+0x2C]
	push 0x14B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block16

 Block11:
	lea eax,[esp+0x30]
	push 0x14B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block16

 Block12:
	lea ecx,[esp+0x34]
	push 0x19E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block16

 Block13:
	lea edx,[esp+0x38]
	push 0x1A67
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	jmp Block16

 Block14:
	lea eax,[esp+0x3C]
	push 0xFB2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block16

 Block15:
	lea ecx,[esp+0x40]
	push 0x369
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]

 Block16:
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	push ebx
	push ebx
	add esi,0x88
	push esi
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x6C]
	mov dword ptr [esp+0x58],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x6C]
	add esp,0x14
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x48
	ret 4
}
}
// CPersonalShopDlg::GetMoney
__SUB_CLASS_THIS0(00297FE0, __thiscall, 60115,  CPersonalShopDlg, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	sub esp,8
	push ebx
	lea eax,[esp+4]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block5

 Block1:
	push esi
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
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
	pop edi
	mov dword ptr [esp+0xC],0
	pop esi

 Block5:
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
// CPersonalShopDlg::CPutItemDlg::GetResult
__SUB_CLASS_THIS(0029B660, __thiscall, 60154,  CPersonalShopDlg::CPutItemDlg, void, long&, long&, long&) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+4]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+8]
	add esp,4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xC0]
	lea edx,[esp+0xC]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	cmp dword ptr [esi+0x90],0
	je Block6

 Block5:
	mov edx,dword ptr [esi+0x94]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax],edx
	pop esi
	pop ecx
	ret 0xC

 Block6:
	mov ecx,dword ptr [esi+0xB0]
	cmp dword ptr [ecx+0x48],0
	je Block9

 Block7:
	mov ecx,dword ptr [esi+0xC8]
	lea edx,[esp+0xC]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	pop esi
	pop ecx
	ret 0xC

 Block9:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [edx],1

 Block10:
	pop esi
	pop ecx
	ret 0xC
}
}
// CPersonalShopDlg::GetMiniRoomType
__SUB_CLASS_THIS0(0029E850, __thiscall, 60116,  CPersonalShopDlg, unsigned char) {
__asm {

 Block0:
	mov al,4
	ret
}
}
// CPersonalShopDlg::OnClickBanButton
_SUB_EXCEPTION_HANDLER(29B1C0)
__SUB_CLASS_THIS(0029B1C0, __thiscall, 60106,  CPersonalShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B1C0
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ebp,dword ptr [esp+0x3C]
	push ebp
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x3C],ebx
	call CMiniRoomBaseDlg::GetUserID
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp esi,ebx
	je Block2

 Block1:
	cmp byte ptr [esi],bl
	jne Block4

 Block2:
	mov byte ptr [esp+0x34],bl
	cmp esi,ebx
	je Block11

 Block3:
	add esi,0xFFFFFFF4
	push esi
	jmp Block10

 Block4:
	lea ecx,[esp+0x18]
	push 0x1BC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x40],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push ebx
	push ebx
	add edi,0x88
	push edi
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block8

 Block7:
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0x1C
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],1
	call ZArray<unsigned char>::RemoveAll

 Block8:
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [esp+0x38],bl
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFF4
	push eax

 Block10:
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CPersonalShopDlg::CPutItemDlg::OnCreate
_SUB_EXCEPTION_HANDLER(29CE70)
__SUB_CLASS_THIS(0029CE70, __thiscall, 60150,  CPersonalShopDlg::CPutItemDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29CE70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xCC]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0x24]
	push ebx
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGPE__4
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block4

 Block3:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGPE__3
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	lea ecx,[esp+0x50]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor ecx,ecx
	mov eax,2
	mov dword ptr [esp+0x58],ecx
	lea ecx,[esp+0x14]
	mov edx,eax
	mov edi,eax
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x9C],ebx
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x64],edx
	mov dword ptr [esp+0x68],edi
	mov dword ptr [esp+0x74],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x64]
	cmp edx,edi
	je Block11

 Block7:
	mov ecx,dword ptr [esp+0x64]
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],ebx

 Block9:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x64],edi
	cmp edi,ebx
	je Block11

 Block10:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release

 Block13:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x6C],0xB
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x94],1
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block30

 Block17:
	add eax,8
	cmp eax,ebx
	je Block30

 Block18:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block20

 Block19:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block22

 Block21:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block22:
	mov dword ptr [esp+0x80],4
	cmp dword ptr [esi+0x90],ebx
	je Block24

 Block23:
	mov edi,1
	cmp dword ptr [esi+0x98],ebx
	je Block25

 Block24:
	mov edi,dword ptr [esi+0x94]

 Block25:
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0xA0],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x50]
	push edx
	push 0xE
	push 0x3B
	push 0x20
	push 0x65
	push 0x3E9
	push esi
	call eax
	cmp dword ptr [esi+0x90],ebx
	jne Block31

 Block28:
	cmp dword ptr [esi+0x98],ebx
	jne Block31

 Block29:
	mov edx,1
	jmp Block32

 Block30:
	xor edi,edi
	jmp Block20

 Block31:
	xor edx,edx

 Block32:
	mov eax,dword ptr [esi+0xB8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x94],3
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov byte ptr [esp+0x94],bl
	lea ebp,[esi+0xBC]
	cmp eax,ebx
	je Block43

 Block36:
	add eax,8
	cmp eax,ebx
	je Block43

 Block37:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block39

 Block38:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block41

 Block40:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block41:
	push offset _S_0__1
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x84],0xA
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x50]
	push eax
	push 0xE
	push 0x3B
	push 0x33
	push 0x6F
	push 0x3EA
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x94],4
	cmp eax,ebx
	je Block44

 Block42:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block45

 Block43:
	xor edi,edi
	jmp Block39

 Block44:
	xor eax,eax

 Block45:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block61

 Block46:
	add eax,8
	cmp eax,ebx
	je Block61

 Block47:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block49

 Block48:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block51

 Block50:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block51:
	mov dword ptr [esp+0x80],4
	cmp dword ptr [esi+0x90],ebx
	jne Block53

 Block52:
	mov edi,1
	cmp dword ptr [esi+0x98],ebx
	je Block54

 Block53:
	mov edi,dword ptr [esi+0x94]

 Block54:
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0xA0],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov ecx,dword ptr [esi+0xC8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x50]
	push edx
	push 0xE
	push 0x3B
	push 0x46
	push 0x6F
	push 0x3EB
	push esi
	call eax
	mov eax,dword ptr [esi+0xC8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	cmp dword ptr [esi+0x90],ebx
	jne Block58

 Block57:
	lea eax,[esi+0xB4]
	cmp dword ptr [esi+0x98],ebx
	je Block59

 Block58:
	mov eax,ebp

 Block59:
	mov eax,dword ptr [eax+4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x1C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x98],6
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x3C],0x5A
	mov dword ptr [esp+0x40],0xE
	mov dword ptr [esp+0x44],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x94],7
	cmp eax,ebx
	je Block62

 Block60:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block63

 Block61:
	xor edi,edi
	jmp Block49

 Block62:
	xor eax,eax

 Block63:
	mov byte ptr [esp+0x94],6
	cmp eax,ebx
	je Block72

 Block64:
	add eax,8
	cmp eax,ebx
	je Block72

 Block65:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block67

 Block66:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block67:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block69

 Block68:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block69:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 0x5B
	push 9
	push 0x3EC
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	mov ecx,dword ptr [esi+0xB0]
	push eax
	call CCtrlCheckBox::SetChecked
	cmp dword ptr [esi+0x90],ebx
	jne Block73

 Block70:
	cmp dword ptr [esi+0x98],ebx
	jne Block73

 Block71:
	mov edx,1
	jmp Block74

 Block72:
	xor edi,edi
	jmp Block67

 Block73:
	xor edx,edx

 Block74:
	mov eax,dword ptr [esi+0xB0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	push ebx
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],bl
	cmp ecx,ebx
	je Block76

 Block75:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],ebx

 Block76:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4
}
}
// CPersonalShopDlg::Draw
_SUB_EXCEPTION_HANDLER(298D50)
__SUB_CLASS_THIS(00298D50, __thiscall, 60107,  CPersonalShopDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_298D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x58],edi
	mov eax,dword ptr [esp+0xC4]
	push eax
	call CMiniRoomBaseDlg::Draw
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x74]
	mov ecx,edi
	call eax
	xor esi,esi
	mov dword ptr [esp+0x48],esi
	push 1
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [esp+0xC8],esi
	call format_integer
	add esp,0xC
	lea edx,[esp+0x74]
	push edx
	mov ecx,edi
	call CWnd::GetCanvas
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0xC0],1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
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
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],0xFF
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xC4],dl
	lea edx,[esp+0x30]
	push 0x45
	push edx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1D8]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD0],4
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x84]
	mov byte ptr [esp+0xCC],5
	cmp ebp,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	push 0xA
	push 0x17
	mov ecx,ebp
	mov byte ptr [esp+0xD4],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xBC],3
	cmp eax,esi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x34],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xBC],2
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,esi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block10:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],1
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,esi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x14]
	push eax
	call ebx

 Block14:
	push esi
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,edi
	call CMiniRoomBaseDlg::GetUserID
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xC0],6
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esp+0x44]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,7
	push edx
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xCC4]
	mov byte ptr [esp+0xC4],8
	cmp ecx,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0xC4],bl
	call IWzFont::CalcTextWidth
	add eax,5
	cmp eax,0x53
	mov esi,eax
	jl Block20

 Block19:
	mov esi,0x53

 Block20:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],6
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [edi+0xCC8]
	push 0x53
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	lea ecx,[esp+0x4C]
	push ecx
	call format_string_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x34]
	push edx
	call ebx
	lea eax,[esp+0x34]
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
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],0xFF
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [edi+0xCC8]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD0],0xA
	call _xbstr_t::_ctor_0
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x39
	sub ecx,eax
	push 0x86
	push ecx
	mov byte ptr [esp+0xD4],0xB
	mov ecx,ebp
	mov byte ptr [esp+0xD4],0xA
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],9
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xBC],6
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	lea eax,[esp+0x14]
	push eax
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov eax,dword ptr [esp+0x48]
	lea edx,[esp+0x14]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],0xC
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xCC8]
	mov byte ptr [esp+0xC4],0xD
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov byte ptr [esp+0xC4],0xC
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x14],8
	mov esi,eax
	mov byte ptr [esp+0xBC],6
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	lea eax,[esp+0x34]
	push eax
	call ebx
	lea ecx,[esp+0x34]
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
	mov edx,3
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],0xFF
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [edi+0xCC4]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0xF
	push edx
	mov byte ptr [esp+0xD0],bl
	call _xbstr_t::_ctor_0
	mov eax,0xCC
	push 0x85
	sub eax,esi
	mov byte ptr [esp+0xD0],0x10
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xD4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0xE
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xBC],6
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov eax,dword ptr [edi+0x270]
	mov edx,dword ptr [eax+0x38]
	mov dword ptr [esp+0x50],0
	mov ebx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x64],edx
	jmp Block57

 Block56:
	mov edi,dword ptr [esp+0x58]

 Block57:
	mov eax,dword ptr [esp+0x64]
	add eax,ebx
	cmp eax,dword ptr [edi+0x1C0]
	jge Block142

 Block58:
	mov edx,dword ptr [edi+0x1C4]
	lea ecx,[eax+eax*4]
	lea esi,[edx+ecx*4]
	cmp dword ptr [edi+0x1E0],eax
	jne Block64

 Block59:
	cmp dword ptr [esi],0
	je Block64

 Block60:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xFF
	mov eax,dword ptr [edi+0xCBC]
	mov edx,ebx
	imul edx,0x2A
	lea ecx,[esp+0x14]
	push ecx
	push eax
	add edx,0xA1
	push edx
	push 0x2F
	mov ecx,ebp
	mov byte ptr [esp+0xCC],0x11
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],6
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push eax
	lea edx,[esp+0x3C]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [esi+0x10]
	sub esp,8
	mov ecx,esp
	mov byte ptr [esp+0xC4],0x12
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block66

 Block65:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov ecx,dword ptr [esi+0x10]
	mov edi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp eax,1
	jne Block69

 Block67:
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block69

 Block68:
	mov eax,ebx
	imul eax,0x2A
	lea edx,[eax+0xC3]
	push edx
	push 0x28
	add eax,0xA3
	push eax
	push 0xC
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x40],esp
	push ebp
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame

 Block69:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push 2
	push 0
	push edi
	push 0
	push 0
	push 0
	call eax
	mov edi,ebx
	imul edi,0x2A
	push eax
	mov eax,dword ptr [esi+0x10]
	lea ecx,[edi+0xC3]
	push ecx
	push 0xC
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x54],esp
	push ebp
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	cmp dword ptr [esi],0
	jne Block72

 Block70:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x8C]
	push 0x80FFFFFF
	push 0x23
	push 0xC7
	lea edx,[edi+0xA1]
	push edx
	push 0xA
	push ebp
	call eax
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block72:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block77

 Block73:
	cmp eax,0xE9
	je Block77

 Block74:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block80

 Block75:
	cmp eax,3
	je Block80

 Block76:
	cmp eax,4
	je Block80

 Block77:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block80

 Block78:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	jne Block80

 Block79:
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [esp+0x28],eax
	jmp Block83

 Block80:
	mov ebx,dword ptr [esp+0x58]
	mov eax,dword ptr [ebx+0xCCC]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block82:
	mov eax,dword ptr [esi+4]
	imul eax,dword ptr [esi]
	push eax
	lea ecx,[edi+0xB8]
	push ecx
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push ebp
	call eax
	call draw_number_by_image
	add esp,0x18

 Block83:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [ebx+0xCC4]
	push 0xA0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xC4],0x13
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block85:
	lea ecx,[esp+0x5C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block86:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],0xFF
	lea edx,[esp+0x84]
	push edx
	mov edx,dword ptr [esp+0x58]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [ebx+0xCC4]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD0],0x15
	call _xbstr_t::_ctor_0
	lea eax,[edi+0xA2]
	push eax
	mov byte ptr [esp+0xD0],0x16
	push 0x33
	mov ecx,ebp
	mov byte ptr [esp+0xD4],0x15
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xBC],0x14
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0xBC],0x13
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x24],ebx
	mov edx,dword ptr [esi+8]
	push 1
	push edx
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC8],0x19
	call format_integer
	add esp,0xC
	cmp dword ptr [esp+0x28],ebx
	je Block96

 Block95:
	lea ecx,[esp+0x6C]
	push 0x1AE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xCC],0x1A
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x7C]
	add esp,0x10
	jmp Block97

 Block96:
	lea eax,[esp+0x5C]
	push 0x1AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xC8],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0xC

 Block97:
	mov byte ptr [esp+0xBC],0x19
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	mov esi,dword ptr [esi+8]
	cmp esi,0x186A0
	jge Block103

 Block100:
	lea eax,[esp+0x78]
	push 0x58
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [esp+0x28],ebx
	call edx

 Block102:
	mov eax,dword ptr [esp+0x78]
	jmp Block115

 Block103:
	cmp esi,0xF4240
	jge Block107

 Block104:
	lea eax,[esp+0x68]
	push 0x59
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [esp+0x28],ebx
	call edx

 Block106:
	mov eax,dword ptr [esp+0x68]
	jmp Block115

 Block107:
	cmp esi,0x989680
	jge Block111

 Block108:
	lea eax,[esp+0x80]
	push 0x5A
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [esp+0x28],ebx
	call edx

 Block110:
	mov eax,dword ptr [esp+0x80]
	jmp Block115

 Block111:
	cmp esi,0x5F5E100
	jge Block117

 Block112:
	lea eax,[esp+0x70]
	push 0x5B
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [esp+0x28],ebx
	call edx

 Block114:
	mov eax,dword ptr [esp+0x70]

 Block115:
	test eax,eax
	je Block123

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block123

 Block117:
	cmp esi,0x3B9ACA00
	jge Block119

 Block118:
	lea eax,[esp+0x7C]
	push 0x5C
	push eax
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov eax,dword ptr [esp+0x7C]
	jmp Block120

 Block119:
	lea eax,[esp+0x60]
	push 0x5D
	push eax
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov eax,dword ptr [esp+0x60]

 Block120:
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov ebx,dword ptr [esp+0x24]

 Block123:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block124:
	mov edx,3
	mov word ptr [esp+0x94],dx
	mov dword ptr [esp+0x9C],0xFF
	mov esi,dword ptr [esp+0x2C]
	lea eax,[esp+0xA4]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xD0],0x1D
	call _xbstr_t::_ctor_0
	add edi,0xB4
	push edi
	mov byte ptr [esp+0xD0],0x1E
	push 0x33
	mov ecx,ebp
	mov byte ptr [esp+0xD4],0x1D
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0xBC],0x1C
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block128:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0xBC],0x19
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0xAC]
	xor ecx,ecx
	mov word ptr [esp+0xA4],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [esp+0xBC],0x18
	test ebx,ebx
	je Block134

 Block133:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block134:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xBC],0x17
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov byte ptr [esp+0xBC],0x13
	test esi,esi
	je Block138

 Block137:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block138:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xBC],0x12
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xBC],6
	test eax,eax
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block142:
	mov ebx,dword ptr [esp+0x50]
	inc ebx
	cmp ebx,5
	mov dword ptr [esp+0x50],ebx
	jl Block56

 Block143:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xBC],1
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xC0],0
	call edx
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 4
}
}
// CPersonalShopDlg::CSoldItemDlg::SetScrollBar
__SUB_CLASS_THIS0(00297DC0, __thiscall, 60173,  CPersonalShopDlg::CSoldItemDlg, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x90]
	mov edx,dword ptr [eax+0x1C8]
	test edx,edx
	je Block5

 Block1:
	cmp dword ptr [edx-4],3
	jbe Block5

 Block2:
	mov eax,edx
	test eax,eax
	jne Block4

 Block3:
	mov ecx,dword ptr [ecx+0xA0]
	mov eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret

 Block4:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [ecx+0xA0]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret

 Block5:
	mov ecx,dword ptr [ecx+0xA0]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CPersonalShopDlg::CPersonalShopDlg
_SUB_EXCEPTION_HANDLER(29E6C0)
__SUB_CLASS_THIS0(0029E6C0, __thiscall, 60096,  CPersonalShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29E6C0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call CMiniRoomBaseDlg::_ctor_default
	xor edi,edi
	lea ebx,[esi+0x1C4]
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1AC],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B4],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D4],edi
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1E0],0xFFFFFFFF
	mov dword ptr [esi+0x1F8],edi
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x210],edi
	mov dword ptr [esi+0x218],edi
	mov dword ptr [esi+0x220],edi
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 3
	push 8
	lea eax,[esi+0x224]
	push eax
	mov byte ptr [esp+0x34],0xB
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x240],edi
	mov dword ptr [esi+0x248],edi
	mov dword ptr [esi+0x250],edi
	mov dword ptr [esi+0x258],edi
	mov dword ptr [esi+0x260],edi
	mov dword ptr [esi+0x268],edi
	mov dword ptr [esi+0x270],edi
	lea ecx,[esi+0x274]
	mov byte ptr [esp+0x20],0x13
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xCBC],edi
	mov dword ptr [esi+0xCC0],edi
	mov dword ptr [esi+0xCC4],edi
	mov dword ptr [esi+0xCC8],edi
	mov dword ptr [esi+0xCCC],edi
	mov dword ptr [esi+0xCD0],edi
	mov dword ptr [esi+0xCD4],edi
	mov dword ptr [esi+0xCD8],edi
	mov dword ptr [esi+0xCDC],edi
	mov dword ptr [esi+0xCE0],edi
	mov byte ptr [esp+0x20],0x1A
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGPE__5
	mov ecx,esi
	call CDialog::CreateDlg_2
	lea ecx,[esp+0x13]
	push ecx
	push 0x18
	mov ecx,ebx
	call ZArray<CPersonalShopDlg::ITEM>::_Alloc
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CPersonalShopDlg::CheckCashItemInList
_SUB_EXCEPTION_HANDLER(29A110)
__SUB_CLASS_THIS(0029A110, __thiscall, 60119,  CPersonalShopDlg, int32_t, int32_t&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29A110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	xor ebp,ebp
	mov dword ptr [eax],0
	xor edi,edi

 Block1:
	mov eax,dword ptr [esi+0x1C4]
	test eax,eax
	je Block8

 Block2:
	cmp ebp,dword ptr [eax-4]
	jae Block8

 Block3:
	mov ecx,dword ptr [eax+edi+0x10]
	add eax,edi
	test ecx,ecx
	je Block6

 Block4:
	cmp dword ptr [eax],0
	je Block6

 Block5:
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block7

 Block6:
	inc ebp
	add edi,0x14
	jmp Block1

 Block7:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [ecx],1
	jmp Block9

 Block8:
	mov edx,dword ptr [esp+0x30]
	cmp dword ptr [edx],0
	je Block14

 Block9:
	lea eax,[esp+0x30]
	push eax
	call ask_SPW
	add esp,4
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block15

 Block10:
	mov ecx,dword ptr [eax-4]
	cmp ecx,6
	jl Block15

 Block11:
	cmp ecx,0x10
	jg Block15

 Block12:
	push 0x90
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0xE
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],1
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x34]
	push ecx
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	mov ecx,esi
	call eax
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x28],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 8

 Block15:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 8
}
}
// CPersonalShopDlg::MoveItemToInventory
_SUB_EXCEPTION_HANDLER(2987A0)
__SUB_CLASS_THIS(002987A0, __thiscall, 60122,  CPersonalShopDlg, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2987A0
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
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebx+0x20B8],0
	jne Block9

 Block1:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block9

 Block2:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block9

 Block3:
	mov ebp,dword ptr [esp+0x34]
	test ebp,ebp
	jl Block9

 Block4:
	mov edx,dword ptr [esi+0x1C4]
	lea edi,[ebp+ebp*4]
	add edi,edi
	add edi,edi
	cmp dword ptr [edi+edx],0
	jle Block9

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x5C]
	mov ecx,esi
	call edx
	test eax,eax
	je Block11

 Block6:
	mov eax,dword ptr [esi+0x1C4]
	add eax,edi
	mov eax,dword ptr [eax+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edi,eax
	push edi
	call CItemInfo::IsOnlyItem
	test eax,eax
	je Block11

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::IsExist
	test eax,eax
	je Block11

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0xDBE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block11:
	push 0x90
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x5C]
	mov ecx,esi
	mov dword ptr [esp+0x2C],0
	call eax
	neg eax
	sbb al,al
	and al,0xB
	add al,0x1B
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [ebx+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x18]
	mov dword ptr [ebx+0x20BC],eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	jmp Block10
}
}
// CPersonalShopDlg::GetActionPosition
__SUB_CLASS_THIS(00297A90, __thiscall, 60111,  CPersonalShopDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx+4],0x7F
	test eax,eax
	jne Block2

 Block1:
	mov dword ptr [ecx],0x35
	ret 0xC

 Block2:
	imul eax,0x5C
	add eax,0xB4
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],5
	ret 0xC
}
}
// CPersonalShopDlg::OnMouseButton
_SUB_EXCEPTION_HANDLER(29C340)
__SUB_CLASS_THIS(0029C340, __thiscall, 60102,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29C340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebx,dword ptr [esp+0xC4]
	mov eax,dword ptr [esp+0xC0]
	push ebx
	lea ecx,[edi-4]
	push eax
	mov dword ptr [esp+0x1C],ecx
	call CPersonalShopDlg::GetItemIndexFromPoint
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	test esi,esi
	jl Block32

 Block1:
	mov ecx,dword ptr [edi+0x1C0]
	lea ebp,[esi+esi*4]
	add ebp,ebp
	add ebp,ebp
	cmp dword ptr [ecx+ebp+0x10],0
	mov dword ptr [esp+0x24],ebp
	je Block32

 Block2:
	mov eax,dword ptr [esp+0xB8]
	cmp eax,0x201
	jne Block30

 Block3:
	cmp dword ptr [edi+0x1B8],0
	je Block7

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x5C]
	call eax
	test eax,eax
	je Block6

 Block5:
	cmp dword ptr [edi+0xD8],0
	je Block7

 Block6:
	mov ecx,dword ptr [esp+0x14]
	push 0
	mov dword ptr [edi+0x1DC],esi
	call CWnd::InvalidateRect
	jmp Block32

 Block7:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [esi+0x20B8],0
	jne Block32

 Block8:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block32

 Block9:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0x1F4
	jl Block32

 Block10:
	mov esi,dword ptr [edi+0x1C0]
	add esi,ebp
	xor ebp,ebp
	cmp dword ptr [esi+0x10],ebp
	je Block29

 Block11:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov dword ptr [esp+0xB0],ebp
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB0],1
	cmp ecx,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x78]
	push eax
	lea edx,[esp+0x5C]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0xB0],4
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esi+0x10]
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],5
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],6
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB4],7
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xB4],8
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xB4],9
	call Ztl_variant_t::_ctor_1
	mov ebp,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0xA
	test ebp,ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x94]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	lea edx,[esp+0xB0]
	push edx
	mov ecx,ebp
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x68]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xB0],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,ebp
	call IWzGr2DLayer::Putcolor
	lea eax,[esp+0x20]
	push eax
	lea ecx,[edi-4]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB0],0xB
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block17:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xB4],0xC
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB0],5
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block19:
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],0xE
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov esi,ecx
	call IWzCanvas::Getcy
	sub ebx,eax
	add ebx,0x10
	push ebx
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [esp+0xCC]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,ebp
	call IWzVector2D::RelMove
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xB0],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0xB0],0xF
	test ebx,ebx
	je Block23

 Block22:
	mov eax,dword ptr [edi+0x1C0]
	lea esi,[edi-4]
	neg esi
	sbb esi,esi
	add eax,dword ptr [esp+0x24]
	and esi,edi
	mov eax,dword ptr [eax+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x18]
	mov ecx,eax
	push esi
	push edx
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	push 0
	add eax,edx
	push eax
	push ebp
	mov ecx,ebx
	call CDraggableItem::_ctor_0
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	lea ecx,[edi-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,edi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xBC],5
	call CWndMan::BeginDragDrop
	lea ecx,[esp+0x18]
	push 0x75E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xB4],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov byte ptr [esp+0xB0],5
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],4
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call edx

 Block29:
	lea ecx,[edi+0x270]
	call CUIToolTip::ClearToolTip
	jmp Block32

 Block30:
	cmp eax,0x203
	jne Block32

 Block31:
	mov ecx,dword ptr [esp+0x14]
	push esi
	call CPersonalShopDlg::BuyItem

 Block32:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 0x10
}
}
// CPersonalShopDlg::GetRTTI
__SUB_CLASS_THIS0(0011D990, __thiscall, 60129,  CPersonalShopDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CPersonalShopDlg::ms_RTTI_CPersonalShopDlg
	ret
}
}
// CPersonalShopDlg::GetRectIndexFromPoint
__SUB_CLASS_THIS(00298240, __thiscall, 60123,  CPersonalShopDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x28]
	push edi
	mov edi,dword ptr [esp+0x30]
	push 0x96
	push 0x63
	push 0x83
	push 0xA
	lea eax,[esp+0x28]
	xor ebx,ebx
	push eax
	mov ebp,ecx
	mov dword ptr [esp+0x24],ebx
	call SetRect
	push edi
	push esi
	lea ecx,[esp+0x20]
	push ecx
	call PtInRect
	test eax,eax
	je Block2

 Block1:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block2:
	push 0x96
	push 0x13A
	push 0x82
	push 0xE1
	lea edx,[esp+0x28]
	push edx
	call SetRect
	push edi
	push esi
	lea eax,[esp+0x20]
	push eax
	call PtInRect
	test eax,eax
	je Block4

 Block3:
	push 1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CMiniRoomBaseDlg::GetAvatar
	cmp dword ptr [eax+4],0
	mov ebx,1
	mov byte ptr [esp+0x2C],bl
	jne Block5

 Block4:
	mov byte ptr [esp+0x2C],0

 Block5:
	test bl,1
	je Block7

 Block6:
	lea ecx,[esp+0x10]
	and ebx,0xFFFFFFFE
	call ZRef<CAvatar>::~ZRef<CAvatar>

 Block7:
	cmp byte ptr [esp+0x2C],0
	je Block9

 Block8:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x18
	ret 8

 Block9:
	push 0x96
	push 0x196
	push 0x82
	push 0x13D
	lea edx,[esp+0x28]
	push edx
	call SetRect
	push edi
	push esi
	lea eax,[esp+0x20]
	push eax
	call PtInRect
	test eax,eax
	je Block11

 Block10:
	push 2
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CMiniRoomBaseDlg::GetAvatar
	or ebx,2
	cmp dword ptr [eax+4],0
	mov byte ptr [esp+0x2C],1
	jne Block12

 Block11:
	mov byte ptr [esp+0x2C],0

 Block12:
	test bl,2
	je Block14

 Block13:
	lea ecx,[esp+0x10]
	and ebx,0xFFFFFFFD
	call ZRef<CAvatar>::~ZRef<CAvatar>

 Block14:
	cmp byte ptr [esp+0x2C],0
	je Block16

 Block15:
	pop edi
	pop esi
	pop ebp
	mov eax,2
	pop ebx
	add esp,0x18
	ret 8

 Block16:
	push 0x96
	push 0x1F2
	push 0x82
	push 0x199
	lea edx,[esp+0x28]
	push edx
	call SetRect
	push edi
	push esi
	lea eax,[esp+0x20]
	push eax
	call PtInRect
	test eax,eax
	je Block18

 Block17:
	push 3
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CMiniRoomBaseDlg::GetAvatar
	or ebx,4
	cmp dword ptr [eax+4],0
	mov byte ptr [esp+0x2C],1
	jne Block19

 Block18:
	mov byte ptr [esp+0x2C],0

 Block19:
	test bl,4
	je Block21

 Block20:
	lea ecx,[esp+0x10]
	call ZRef<CAvatar>::~ZRef<CAvatar>

 Block21:
	xor eax,eax
	cmp byte ptr [esp+0x2C],al
	pop edi
	setne al
	pop esi
	pop ebp
	pop ebx
	lea eax,[eax*4-1]
	add esp,0x18
	ret 8
}
}
// CPersonalShopDlg::SetRet
_SUB_EXCEPTION_HANDLER(2984C0)
__SUB_CLASS_THIS(002984C0, __thiscall, 60106,  CPersonalShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2984C0
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
	cmp dword ptr [esp+0x28],2
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	cmp dword ptr [esi+0x84],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],2
	mov dword ptr [esi+0x84],1
	je Block5

 Block4:
	mov ecx,esi
	call CWnd::Destroy

 Block5:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CPersonalShopDlg::OnRefresh
_SUB_EXCEPTION_HANDLER(298050)
__SUB_CLASS_THIS(00298050, __thiscall, 60113,  CPersonalShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_298050
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
	mov ebp,ecx
	mov edi,dword ptr [esp+0x30]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	xor ecx,ecx
	cmp eax,ecx
	mov dword ptr [ebp+0x1C0],eax
	mov dword ptr [esp+0x14],ecx
	jle Block15

 Block1:
	mov dword ptr [esp+0x30],ecx

 Block2:
	mov esi,dword ptr [ebp+0x1C4]
	add esi,dword ptr [esp+0x30]
	mov ecx,edi
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,edi
	mov dword ptr [esi],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+4],ecx
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esp+0x18]
	push edi
	push edx
	mov dword ptr [esi+8],eax
	call GW_ItemSlotBase::Decode
	add esp,8
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0x10]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0x10],0

 Block9:
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x1C],0

 Block14:
	mov eax,dword ptr [esp+0x14]
	add dword ptr [esp+0x30],0x14
	inc eax
	cmp eax,dword ptr [ebp+0x1C0]
	mov dword ptr [esp+0x14],eax
	jl Block2

 Block15:
	mov ecx,ebp
	call CPersonalShopDlg::SetScrollBar
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
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
// CPersonalShopDlg::PutItem
_SUB_EXCEPTION_HANDLER(29C880)
__SUB_CLASS_THIS(0029C880, __thiscall, 60121,  CPersonalShopDlg, int32_t, NakedParam<ZRef<GW_ItemSlotBase>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29C880
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
	xor ebx,ebx
	mov dword ptr [esp+0x4C],ebx
	cmp dword ptr [esi+0xDC],ebx
	jne Block40

 Block1:
	mov ecx,dword ptr [esi+0x1C0]
	cmp ecx,dword ptr [esi+0x1E4]
	je Block39

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x5C]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block4

 Block3:
	cmp dword ptr [esi+0x1BC],ebx
	jne Block39

 Block4:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x28],edi
	cmp dword ptr [edi+0x20B8],ebx
	jne Block17

 Block5:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block17

 Block6:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block17

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x5C]
	mov ecx,esi
	call eax
	test eax,eax
	je Block13

 Block8:
	mov ecx,dword ptr [esp+0x58]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsOnlyItem
	test eax,eax
	je Block13

 Block9:
	cmp dword ptr [esi+0x1C0],ebx
	jle Block13

 Block10:
	xor edi,edi

 Block11:
	mov eax,dword ptr [esi+0x1C4]
	mov ebp,dword ptr [esp+0x58]
	add eax,edi
	mov eax,dword ptr [eax+0x10]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	lea ecx,[ebp+0xC]
	mov dword ptr [esp+0x18],eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,eax
	je Block16

 Block12:
	inc ebx
	add edi,0x14
	cmp ebx,dword ptr [esi+0x1C0]
	jl Block11

 Block13:
	mov edx,dword ptr [esp+0x58]
	push edx
	call is_treat_singly_1
	mov ecx,dword ptr [esp+0x5C]
	mov ebp,eax
	add esp,4
	add ecx,0xC
	mov dword ptr [esp+0x24],ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	mov eax,dword ptr [esp+0x58]
	jne Block18

 Block14:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	jne Block18

 Block15:
	xor ebx,ebx
	jmp Block19

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	push 0xDBD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block17:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block44

 Block18:
	mov ebx,1

 Block19:
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x14],ebx
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block21

 Block20:
	cmp eax,0xE9
	jne Block22

 Block21:
	mov edi,1
	jmp Block23

 Block22:
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov edi,eax

 Block23:
	mov dword ptr [esp+0x30],0
	cmp dword ptr [esi+0x8C],0
	mov byte ptr [esp+0x4C],1
	jne Block17

 Block24:
	push 0xE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x4C],2
	test eax,eax
	je Block26

 Block25:
	push ebx
	push edi
	push ebp
	mov ecx,eax
	call CPersonalShopDlg::CPutItemDlg::_ctor_0
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x50],1
	call ZRef<CPersonalShopDlg::CPutItemDlg>::op_assign_ptr
	mov eax,dword ptr [eax+4]
	lea edi,[esi+0x88]
	push eax
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr
	mov ecx,dword ptr [esp+0x30]
	call CDialog::DoModal
	cmp dword ptr [edi+4],0
	mov ebx,eax
	je Block29

 Block28:
	push 0
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block29:
	cmp ebx,1
	jne Block33

 Block30:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x24]
	push eax
	call CPersonalShopDlg::CPutItemDlg::GetResult
	mov eax,dword ptr [esp+0x1C]
	cdq
	idiv dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x20]
	mov edi,eax
	cdq
	mov ecx,eax
	mov ebp,edx
	mov eax,ebx
	cdq
	push edx
	push eax
	push ebp
	push ecx
	call __allmul
	test edx,edx
	ja Block32

 Block31:
	cmp eax,0x7FFFFFFF
	jbe Block34

 Block32:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x70],esp
	push 0x111C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block33:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x4C],0
	call ZRef<CPersonalShopDlg::CPutItemDlg>::~ZRef<CPersonalShopDlg::CPutItemDlg>
	jmp Block17

 Block34:
	push 0x90
	lea ecx,[esp+0x38]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x5C]
	mov ecx,esi
	mov byte ptr [esp+0x4C],3
	call edx
	neg eax
	sbb al,al
	and al,0xB
	add al,0x16
	movzx eax,al
	push eax
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x5C]
	push ecx
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x60]
	push edx
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	cmp dword ptr [esp+0x24],0
	je Block37

 Block35:
	cmp dword ptr [esp+0x14],0
	jne Block37

 Block36:
	push 1
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	push 1
	jmp Block38

 Block37:
	push edi
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	mov eax,dword ptr [esp+0x18]
	push eax

 Block38:
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	push ebx
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0x28]
	push 1
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x4C],1
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x4C],0
	call ZRef<CPersonalShopDlg::CPutItemDlg>::~ZRef<CPersonalShopDlg::CPutItemDlg>
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,1
	jmp Block45

 Block39:
	push ebx
	push ebx
	add esi,0x88
	push esi
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x70],esp
	push 0x1B4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block40:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block41:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x58]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x58]
	cmp ecx,ebx
	je Block44

 Block43:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block44:
	xor eax,eax

 Block45:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CPersonalShopDlg::CPutItemDlg::OnChildNotify
__SUB_CLASS_THIS(00297C90, __thiscall, 60151,  CPersonalShopDlg::CPutItemDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	cmp eax,0x3EC
	jne Block7

 Block1:
	cmp ecx,0xC8
	jne Block7

 Block2:
	cmp dword ptr [esi+0x90],0
	jne Block5

 Block3:
	mov eax,dword ptr [esi+0xB0]
	cmp dword ptr [eax+0x48],0
	je Block5

 Block4:
	mov edx,1
	jmp Block6

 Block5:
	xor edx,edx

 Block6:
	mov eax,dword ptr [esi+0xC8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 0xC

 Block7:
	cmp ecx,0x64
	jne Block9

 Block8:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax

 Block9:
	pop esi
	ret 0xC
}
}
// CPersonalShopDlg::OnEnter
__SUB_CLASS_THIS(00297B10, __thiscall, 60112,  CPersonalShopDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	lea eax,[edi-1]
	mov esi,ecx
	cmp eax,2
	ja Block5

 Block1:
	cmp dword ptr [esi+0xDC],0
	jne Block4

 Block2:
	mov eax,dword ptr [esi+edi*8+0x220]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	call timeGetTime
	mov dword ptr [esi+edi*4+0x1E4],eax
	test eax,eax
	jne Block4

 Block3:
	mov dword ptr [esi+edi*4+0x1E4],1

 Block4:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ecx
	ret 8

 Block5:
	push 0x21000003
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x10],ecx
	call _CxxThrowException
	int 3
}
}
// CPersonalShopDlg::CSoldItemDlg::~CSoldItemDlg
_SUB_EXCEPTION_HANDLER(29BC10)
__SUB_CLASS_THIS0(0029BC10, __thiscall, 60173,  CPersonalShopDlg::CSoldItemDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29BC10
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
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA8]
	mov dword ptr [esp+0x18],3
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],1
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],0
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
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
// CPersonalShopDlg::SetScrollBar
__SUB_CLASS_THIS0(00297C20, __thiscall, 60098,  CPersonalShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1BC],0
	mov eax,dword ptr [esi+0x1C0]
	je Block3

 Block1:
	cmp eax,5
	jg Block6

 Block2:
	xor eax,eax
	jmp Block7

 Block3:
	cmp eax,dword ptr [esi+0x1E4]
	jge Block6

 Block4:
	cmp eax,4
	jle Block2

 Block5:
	add eax,0xFFFFFFFD
	jmp Block7

 Block6:
	add eax,0xFFFFFFFC

 Block7:
	mov ecx,dword ptr [esi+0x270]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0x1C0]
	cmp eax,5
	jl Block11

 Block8:
	cmp eax,dword ptr [esi+0x1E4]
	jge Block11

 Block9:
	cmp dword ptr [esi+0xDC],0
	jne Block11

 Block10:
	mov ecx,dword ptr [esi+0x270]
	push eax
	call CCtrlScrollBar::SetCurPos

 Block11:
	pop esi
	ret
}
}
// CPersonalShopDlg::CPutItemDlg::~CPutItemDlg
_SUB_EXCEPTION_HANDLER(29B520)
__SUB_CLASS_THIS0(0029B520, __thiscall, 60148,  CPersonalShopDlg::CPutItemDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29B520
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
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::CPutItemDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xCC]
	mov dword ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xC4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
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
// CPersonalShopDlg::CSoldItemDlg::OnCreate
_SUB_EXCEPTION_HANDLER(29BD00)
__SUB_CLASS_THIS(0029BD00, __thiscall, 60174,  CPersonalShopDlg::CSoldItemDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29BD00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	lea edi,[esi+0xA8]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0x24]
	push 0
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x10],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x4C],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block15

 Block6:
	add eax,8
	je Block15

 Block7:
	lea edi,[eax-8]
	test edi,edi
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block11

 Block10:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xE2
	push 0x1B
	push 0xC5
	push 8
	push 1
	push 0x7D0
	push esi
	call edx
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx+0x1C8]
	test eax,eax
	je Block17

 Block12:
	cmp dword ptr [eax-4],3
	jbe Block17

 Block13:
	mov ecx,eax
	test ecx,ecx
	jne Block16

 Block14:
	lea eax,[ecx-2]
	jmp Block18

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	mov ecx,dword ptr [ecx-4]
	lea eax,[ecx-2]
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esi+0xA0]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xA0]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [eax+0x34],0xC8
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],1
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x95F
	push eax
	mov byte ptr [esp+0x68],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],3
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xA4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [esp+0x34],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],2
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x34]
	push eax
	call edi

 Block31:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x4C],1
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block35:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	push 0
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x44
	ret 4
}
}
// CPersonalShopDlg::SOLD_ITEM::SOLD_ITEM
__SUB_CLASS_THIS0(0011D890, __thiscall, 60201,  CPersonalShopDlg::SOLD_ITEM, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea edi,[esi-0x3FF8]
	call _rand
	add eax,edi
	mov dword ptr [esi],eax
	call _rand
	mov cl,byte ptr [esi]
	add eax,edi
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	mov edx,dword ptr [esi+8]
	mov al,byte ptr [esi+4]
	xor edi,edi
	push edi
	mov ecx,esi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CPersonalShopDlg::CPutItemDlg::SetRet
__SUB_CLASS_THIS(0029CCC0, __thiscall, 60149,  CPersonalShopDlg::CPutItemDlg, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	xor ebx,ebx
	mov edi,1
	mov esi,ecx
	mov dword ptr [esp+0x10],ebx
	cmp dword ptr [esp+0x18],edi
	jne Block20

 Block1:
	mov eax,dword ptr [esi+0xB0]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [eax+0x48],ebx
	je Block5

 Block2:
	mov eax,dword ptr [esi+0x94]
	push eax
	mov eax,dword ptr [esi+0xC8]
	push edi
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebp

 Block4:
	mov ecx,esi
	call CPersonalShopDlg::CPutItemDlg::IsNumber
	test eax,eax
	je Block23

 Block5:
	mov eax,dword ptr [esi+0xB0]
	cmp dword ptr [eax+0x48],ebx
	je Block7

 Block6:
	mov ecx,dword ptr [esi+0xC8]
	lea edx,[esp+0x10]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	mov ebx,edi
	call _atoi
	add esp,4
	mov edi,eax

 Block7:
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esi+0x94]
	push eax
	mov eax,dword ptr [esi+0xB8]
	push 1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block12

 Block11:
	add eax,0xC
	push eax
	call ebp

 Block12:
	mov ecx,esi
	call CPersonalShopDlg::CPutItemDlg::IsNumber
	test eax,eax
	je Block23

 Block13:
	mov ecx,dword ptr [esi+0xB8]
	lea edx,[esp+0x10]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	cdq
	idiv edi
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test edx,edx
	setne bl
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	test bl,bl
	je Block17

 Block16:
	push 0
	push 0
	add esi,0x88
	push esi
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1B2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block17:
	mov eax,dword ptr [esi+0xC0]
	push 0x7FFFFFFF
	push 1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block19

 Block18:
	add eax,0xC
	push eax
	call ebp

 Block19:
	mov ecx,esi
	call CPersonalShopDlg::CPutItemDlg::IsNumber
	test eax,eax
	je Block23

 Block20:
	cmp dword ptr [esi+0x84],0
	jne Block23

 Block21:
	cmp dword ptr [esi+0x14],0
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	je Block23

 Block22:
	mov ecx,esi
	call CWnd::Destroy

 Block23:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CPersonalShopDlg::CSoldItemDlg::Draw
_SUB_EXCEPTION_HANDLER(29D430)
__SUB_CLASS_THIS(0029D430, __thiscall, 60176,  CPersonalShopDlg::CSoldItemDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29D430
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1A8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1BC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0x1CC]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+0x38]
	xor ecx,ecx
	mov dword ptr [esp+0x1C4],ecx
	mov dword ptr [esp+0x70],edx
	mov dword ptr [esp+0x2C],ecx
	jmp Block2

 Block2:
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x34]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ZImports::_VariantClear]
	add eax,ecx
	mov ecx,dword ptr [edx+0x90]
	mov edx,dword ptr [ecx+0x1C8]
	xor ebp,ebp
	cmp edx,ebp
	jne Block4

 Block3:
	xor edx,edx
	jmp Block5

 Block4:
	mov edx,dword ptr [edx-4]

 Block5:
	cmp eax,edx
	ja Block171

 Block6:
	mov edx,dword ptr [ecx+0x1C8]
	cmp edx,ebp
	je Block75

 Block7:
	cmp eax,dword ptr [edx-4]
	jae Block75

 Block8:
	lea eax,[eax+eax*2]
	mov ecx,edx
	lea ecx,[ecx+eax*8]
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x24],ebp
	mov byte ptr [esp+0x1C4],1
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	push 1
	push eax
	lea edx,[esp+0x48]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,3
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],0xFF
	mov byte ptr [esp+0x1C4],al
	mov eax,dword ptr [esp+0x3C]
	mov edi,eax
	cmp eax,ebp
	je Block174

 Block9:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x1C]
	test eax,eax
	je Block174

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	test ebx,ebx
	je Block174

 Block15:
	mov edx,dword ptr [esp+0x58]
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx]
	imul esi,0x3A
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x6C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x70]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x74]
	mov dword ptr [eax+0xC],edx
	mov eax,esi
	sub eax,ebp
	push edi
	add eax,0x4A
	push eax
	mov eax,dword ptr [ecx+0x80]
	mov edx,0xC
	sub edx,dword ptr [esp+0x38]
	push edx
	push ebx
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block17:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x1C4],2
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x94]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x1C8],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x1C4],2
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push 0x98
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x18
	push ecx
	call get_basic_font
	lea edx,[esp+0x34]
	add esp,8
	push edx
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[esp+0xBC]
	push eax
	call ebp
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block175

 Block24:
	mov edx,3
	mov edi,0xFF
	mov word ptr [esp+0x13C],dx
	mov dword ptr [esp+0x144],edi
	lea eax,[esp+0xBC]
	push eax
	lea ecx,[esp+0x140]
	push ecx
	lea edx,[esp+0xA0]
	push 0x18
	push edx
	mov byte ptr [esp+0x1D4],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1D8],7
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x1D]
	push ecx
	mov byte ptr [esp+0x1D8],8
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],7
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x1C4],6
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	cmp word ptr [esp+0x13C],8
	mov byte ptr [esp+0x1C4],5
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x144]
	xor ecx,ecx
	mov word ptr [esp+0x13C],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x1C4],2
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	lea edx,[esp+0x84]
	push 0xA67
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x14]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x1D0],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x90]
	add esp,0xC
	mov byte ptr [esp+0x1C4],2
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea ecx,[esp+0xDC]
	push ecx
	call ebp
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block175

 Block37:
	mov eax,3
	mov word ptr [esp+0x9C],ax
	mov dword ptr [esp+0xA4],edi
	lea ecx,[esp+0xDC]
	push ecx
	lea edx,[esp+0xA0]
	push edx
	lea eax,[esp+0x7C]
	push 0x18
	push eax
	mov byte ptr [esp+0x1D4],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x1D8],0xC
	call _xbstr_t::_ctor_0
	lea eax,[esi+0x2E]
	push eax
	mov byte ptr [esp+0x1D8],0xD
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],0xC
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x1C4],0xB
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x1C4],0xA
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0xDC],8
	mov byte ptr [esp+0x1C4],2
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea ecx,[esp+0x94]
	push 0xA68
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x1D0],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA0]
	add esp,0xC
	mov byte ptr [esp+0x1C4],2
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	lea eax,[esp+0xFC]
	push eax
	call ebp
	lea ecx,[esp+0xFC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block175

 Block50:
	mov edx,3
	mov word ptr [esp+0x16C],dx
	mov dword ptr [esp+0x174],edi
	lea eax,[esp+0xFC]
	push eax
	lea ecx,[esp+0x170]
	push ecx
	lea edx,[esp+0x84]
	push 0x18
	push edx
	mov byte ptr [esp+0x1D4],0x10
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1D8],0x11
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x3F]
	push ecx
	mov byte ptr [esp+0x1D8],0x12
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],0x11
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x1C4],0x10
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov edi,8
	mov byte ptr [esp+0x1C4],0xF
	cmp word ptr [esp+0x16C],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x174]
	xor ecx,ecx
	mov word ptr [esp+0x16C],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x16C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x1C4],2
	cmp word ptr [esp+0xFC],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0xFC],ax
	mov eax,dword ptr [esp+0x104]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,dword ptr [esp+0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block71

 Block61:
	mov edx,3
	mov word ptr [esp+0x15C],dx
	mov dword ptr [esp+0x164],0xFF
	mov eax,dword ptr [esp+0x30]
	mov ebx,dword ptr [eax+0xA4]
	mov edi,ebx
	mov byte ptr [esp+0x1C4],0x13
	test edi,edi
	je Block174

 Block62:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block64

 Block63:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block64:
	mov eax,dword ptr [esp+0x30]
	mov edi,dword ptr [eax+0xA4]
	mov ebp,dword ptr [esp+0x1C]
	test edi,edi
	je Block174

 Block65:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block67:
	lea ecx,[esp+0x15C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push ebx
	sub esi,ebp
	mov edx,0x26
	sub edx,dword ptr [esp+0x28]
	add esi,0x49
	push esi
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x15C],8
	mov byte ptr [esp+0x1C4],2
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x15C],ax
	mov eax,dword ptr [esp+0x164]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x1C4],1
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block73:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C4],0
	test eax,eax
	je Block169

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	jmp Block168

 Block75:
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x44]
	push 0xB73
	push ecx
	mov byte ptr [esp+0x1CC],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C4],0x15
	cmp eax,ebp
	je Block77

 Block76:
	mov eax,dword ptr [eax]
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	push 0x895441
	push eax
	lea edx,[esp+0x24]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0x1C4],0x14
	cmp ecx,ebp
	je Block80

 Block79:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],ebp

 Block80:
	lea eax,[esp+0x17C]
	push eax
	call esi
	lea ecx,[esp+0x17C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block175

 Block81:
	lea edx,[esp+0x11C]
	push edx
	mov byte ptr [esp+0x1C8],0x16
	call esi
	lea eax,[esp+0x11C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block175

 Block82:
	mov eax,dword ptr [esp+0x1C]
	push ebp
	push ebp
	lea ecx,[esp+0x184]
	push ecx
	lea edx,[esp+0x128]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1DC],0x17
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x1D8],0x18
	cmp dword ptr [_D_G_RM],ebp
	je Block174

 Block83:
	lea ecx,[esp+0x1A0]
	push ecx
	mov byte ptr [esp+0x1DC],0x17
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block85

 Block84:
	cmp eax,0x80004002
	jne Block175

 Block85:
	mov esi,8
	mov byte ptr [esp+0x1C4],0x1B
	cmp word ptr [esp+0x18C],si
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x194]
	xor edx,edx
	mov word ptr [esp+0x18C],dx
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x18C]
	push eax
	call edi

 Block89:
	mov byte ptr [esp+0x1C4],0x1C
	cmp word ptr [esp+0x11C],si
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x124]
	xor ecx,ecx
	mov word ptr [esp+0x11C],cx
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0x11C]
	push edx
	call edi

 Block93:
	mov byte ptr [esp+0x1C4],0x1D
	cmp word ptr [esp+0x17C],si
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x17C],ax
	mov eax,dword ptr [esp+0x184]
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x17C]
	push ecx
	call edi

 Block97:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x661
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1D0],0x1E
	cmp ecx,ebp
	je Block174

 Block98:
	lea eax,[esp+0x1A8]
	push eax
	mov byte ptr [esp+0x1D4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block100

 Block99:
	cmp eax,0x80004002
	jne Block175

 Block100:
	mov byte ptr [esp+0x1C4],0x21
	cmp word ptr [esp+0x19C],si
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x1A4]
	xor ecx,ecx
	mov word ptr [esp+0x19C],cx
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x19C]
	push edx
	call edi

 Block104:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x1D0],0x22
	cmp ecx,ebp
	je Block174

 Block105:
	lea eax,[esp+0x1B8]
	push eax
	mov byte ptr [esp+0x1D4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block107

 Block106:
	cmp eax,0x80004002
	jne Block175

 Block107:
	mov byte ptr [esp+0x1C4],0x25
	cmp word ptr [esp+0x1AC],si
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x1B4]
	xor ecx,ecx
	mov word ptr [esp+0x1AC],cx
	cmp eax,ebp
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x1AC]
	push edx
	call edi

 Block111:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0xFF
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0x1C4],0x26
	cmp esi,ebp
	je Block174

 Block112:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block114

 Block113:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block114:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block116

 Block115:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	cmp ebx,ebp
	je Block174

 Block117:
	mov edx,dword ptr [esp+0x48]
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx]
	imul esi,0x3A
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x48]
	push eax
	mov edx,esi
	sub edx,edi
	add edx,0x4A
	mov eax,0xC
	sub eax,dword ptr [esp+0x2C]
	push edx
	push eax
	push ebx
	call ecx
	cmp eax,ebp
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block119:
	mov edi,8
	mov byte ptr [esp+0x1C4],0x25
	cmp word ptr [esp+0x48],di
	jne Block122

 Block120:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	lea ecx,[esp+0xCC]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xCC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block175

 Block124:
	mov eax,3
	mov word ptr [esp+0xAC],ax
	mov dword ptr [esp+0xB4],0xFF
	lea ecx,[esp+0xCC]
	push ecx
	lea edx,[esp+0xB0]
	push edx
	lea eax,[esp+0x74]
	push 0x18
	push eax
	mov byte ptr [esp+0x1D4],0x28
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x98]
	push 0xA69
	push ecx
	mov byte ptr [esp+0x1D8],0x29
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1D8],0x2A
	call _xbstr_t::_ctor_0
	lea edx,[esi+0x1D]
	push edx
	mov byte ptr [esp+0x1D8],0x2B
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],0x2A
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x1C4],0x29
	cmp eax,ebp
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x1C4],0x28
	cmp eax,ebp
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov byte ptr [esp+0x1C4],0x27
	cmp word ptr [esp+0xAC],di
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	cmp eax,ebp
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [esp+0x1C4],0x25
	cmp word ptr [esp+0xCC],di
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	cmp eax,ebp
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x28],ebp
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi+0x90]
	mov ecx,dword ptr [eax+0x1A8]
	mov eax,dword ptr [eax+0x1AC]
	push 1
	push eax
	push ecx
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x1D4],0x2D
	call format_largeinteger
	add esp,0x10
	lea edx,[esp+0x68]
	push 0x1AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x1D0],0x2E
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x74]
	add esp,0xC
	mov byte ptr [esp+0x1C4],0x2D
	cmp eax,ebp
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	lea eax,[esp+0x10C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x10C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block175

 Block139:
	mov edx,3
	mov word ptr [esp+0xEC],dx
	mov dword ptr [esp+0xF4],0xFF
	lea eax,[esp+0x10C]
	push eax
	lea ecx,[esp+0xF0]
	push ecx
	lea edx,[esp+0x80]
	push 0x18
	push edx
	mov byte ptr [esp+0x1D4],0x30
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1D8],0x31
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x2E]
	push ecx
	mov byte ptr [esp+0x1D8],0x32
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],0x31
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x1C4],0x30
	cmp eax,ebp
	je Block141

 Block140:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block141:
	cmp word ptr [esp+0xEC],8
	mov byte ptr [esp+0x1C4],0x2F
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0xF4]
	xor ecx,ecx
	mov word ptr [esp+0xEC],cx
	cmp eax,ebp
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[esp+0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	cmp word ptr [esp+0x10C],8
	mov byte ptr [esp+0x1C4],0x2D
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	cmp eax,ebp
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[esp+0x10C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov eax,dword ptr [edi+0x90]
	mov ecx,dword ptr [eax+0x1B0]
	mov eax,dword ptr [eax+0x1B4]
	push 1
	push eax
	push ecx
	lea edx,[esp+0x34]
	push edx
	call format_largeinteger
	add esp,0x10
	lea eax,[esp+0x80]
	push 0x1AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x1D0],0x33
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x8C]
	add esp,0xC
	mov byte ptr [esp+0x1C4],0x2D
	cmp eax,ebp
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	lea eax,[esp+0x14C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block175

 Block152:
	mov edx,3
	mov word ptr [esp+0x12C],dx
	mov dword ptr [esp+0x134],0xFF
	lea eax,[esp+0x14C]
	push eax
	lea ecx,[esp+0x130]
	push ecx
	lea edx,[esp+0x90]
	push 0x18
	push edx
	mov byte ptr [esp+0x1D4],0x35
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x1D8],0x36
	call _xbstr_t::_ctor_0
	add esi,0x3F
	push esi
	mov byte ptr [esp+0x1D8],0x37
	push 0x32
	mov ecx,ebx
	mov byte ptr [esp+0x1DC],0x36
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x1C4],0x35
	cmp eax,ebp
	je Block154

 Block153:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block154:
	mov esi,8
	mov byte ptr [esp+0x1C4],0x34
	cmp word ptr [esp+0x12C],si
	jne Block157

 Block155:
	xor eax,eax
	mov word ptr [esp+0x12C],ax
	mov eax,dword ptr [esp+0x134]
	cmp eax,ebp
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea ecx,[esp+0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov byte ptr [esp+0x1C4],0x2D
	cmp word ptr [esp+0x14C],si
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x154]
	xor edx,edx
	mov word ptr [esp+0x14C],dx
	cmp eax,ebp
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea eax,[esp+0x14C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C4],0x2C
	cmp eax,ebp
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block164:
	mov byte ptr [esp+0x1C4],0x25
	cmp edi,ebp
	je Block166

 Block165:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block166:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1C8],0x21
	call edx
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1C8],0x1D
	call edx
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1C8],0x14
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1C4],0
	cmp eax,ebp
	je Block169

 Block167:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release

 Block168:
	add esp,4

 Block169:
	mov eax,dword ptr [esp+0x2C]
	inc eax
	cmp eax,4
	mov dword ptr [esp+0x2C],eax
	jl Block2

 Block170:
	mov ebx,dword ptr [esp+0x34]
	xor ebp,ebp

 Block171:
	mov dword ptr [esp+0x1C4],0xFFFFFFFF
	cmp ebx,ebp
	je Block173

 Block172:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block173:
	mov ecx,dword ptr [esp+0x1BC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1B4
	ret 4

 Block174:
	push 0x80004003
	call _com_issue_error

 Block175:
	push eax
	call _com_issue_error
}
}
// CPersonalShopDlg::SOLD_ITEM::~SOLD_ITEM
_SUB_EXCEPTION_HANDLER(11D730)
__SUB_CLASS_THIS0(0011D730, __thiscall, 60203,  CPersonalShopDlg::SOLD_ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11D730
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
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPersonalShopDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(00297B90, __thiscall, 60123,  CPersonalShopDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx+0x270]
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	push edi
	mov edi,dword ptr [eax+0x38]
	mov dword ptr [esp+0x10],ecx
	mov esi,0xC8

 Block1:
	test edi,edi
	jl Block5

 Block2:
	cmp edi,dword ptr [ecx+0x1E4]
	jge Block5

 Block3:
	push ebp
	push ebx
	lea edx,[esp+0x1C]
	lea ecx,[esi-0x27]
	push edx
	mov dword ptr [esp+0x20],0xA
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],0xD0
	mov dword ptr [esp+0x2C],esi
	call PtInRect
	test eax,eax
	jne Block7

 Block4:
	mov ecx,dword ptr [esp+0x10]

 Block5:
	add esi,0x2A
	inc edi
	cmp esi,0x19A
	jl Block1

 Block6:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 8

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CPersonalShopDlg::CSoldItemDlg::CSoldItemDlg
_SUB_EXCEPTION_HANDLER(29BB50)
__SUB_CLASS_THIS(0029BB50, __thiscall, 60171,  CPersonalShopDlg::CSoldItemDlg, void, CPersonalShopDlg*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29BB50
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
	call CDialog::_ctor_default
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPersonalShopDlg::CSoldItemDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],ecx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGPE__2
	mov ecx,esi
	mov byte ptr [esp+0x24],4
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CPersonalShopDlg::OnStart
__SUB_CLASS_THIS0(0029A2C0, __thiscall, 60098,  CPersonalShopDlg, void) {
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
