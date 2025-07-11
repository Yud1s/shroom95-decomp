#include "regen.hpp"
// ITCWnd2.ipp
#include "ITCWnd2.hpp"

// CITCWnd_Tab::Draw
_SUB_EXCEPTION_HANDLER(1844E0)
__SUB_CLASS_THIS(001844E0, __thiscall, 84175,  CITCWnd_Tab, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1844E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x28],0
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC]
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
	mov edi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi+0xA0]
	mov esi,dword ptr [esi+ecx*4+0x88]
	mov byte ptr [esp+0x24],1
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x24]
	push esi
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x30]
	push 0
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	cmp word ptr [esp+0xC],8
	mov byte ptr [esp+0x24],0
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITCWnd_SubTab::OnSetFocus
__SUB_CLASS_THIS(00172820, __thiscall, 84199,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_Tab::OnButtonClicked
_SUB_EXCEPTION_HANDLER(184B10)
__SUB_CLASS_THIS(00184B10, __thiscall, 84174,  CITCWnd_Tab, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_184B10
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
	cmp dword ptr [esp+0x38],0x3EC
	jne Block15

 Block1:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [eax+0x68]
	mov ecx,dword ptr [esi+0xC0]
	lea edi,[eax+1]
	mov eax,dword ptr [esi+0xB0]
	mov ebp,dword ptr [eax+0x68]
	mov eax,dword ptr [esi+0xB8]
	mov ebx,dword ptr [eax+0x68]
	lea eax,[esp+0x38]
	push eax
	call CCtrlEdit::GetText
	mov dword ptr [esp+0x30],0
	test ebx,ebx
	jne Block6

 Block2:
	lea ecx,[esp+0x38]
	push ebx
	push ecx
	call is_valid_character_name
	add esp,8
	test eax,eax
	je Block4

 Block3:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0xD0]
	push ebx
	push ebp
	push edi
	push 1
	call CITC::SetSearchCondition
	push 0x134
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],1
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebp
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],bl
	call ZArray<unsigned char>::RemoveAll
	jmp Block13

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x348
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xC0]
	add esp,0x14
	test esi,esi
	je Block11

 Block5:
	lea eax,[esi+4]
	jmp Block12

 Block6:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block9

 Block7:
	mov eax,dword ptr [eax-4]
	cmp eax,1
	jle Block9

 Block8:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0xD0]
	push ebx
	push ebp
	push edi
	push 1
	call CITC::SetSearchCondition
	push 0x134
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],2
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebp
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],0
	call ZArray<unsigned char>::RemoveAll
	jmp Block13

 Block9:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x12D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xC0]
	add esp,0x14
	test esi,esi
	je Block11

 Block10:
	lea eax,[esi+4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus

 Block13:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
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
// CITCWnd_SubTab::OnButtonClicked
_SUB_EXCEPTION_HANDLER(184460)
__SUB_CLASS_THIS(00184460, __thiscall, 84196,  CITCWnd_SubTab, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_184460
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esp+0x18],0x3E8
	jne Block5

 Block1:
	push 0xB10
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [esi+0xAC]
	push ecx
	mov ecx,eax
	call CRegisterWishEntrySearchDlg::_ctor_0
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov ecx,eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call CDialog::DoModal

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CITCWnd_SubTab::CITCWnd_SubTab
_SUB_EXCEPTION_HANDLER(172740)
__SUB_CLASS_THIS0(00172740, __thiscall, 84192,  CITCWnd_SubTab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172740
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
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x80]
	push eax
	mov dword ptr [esp+0x28],0
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_SubTab::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_SubTab::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_SubTab::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0x94]
	push ecx
	mov byte ptr [esp+0x28],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xA4],0
	mov dword ptr [esi+0xB4],0
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xC
	push 4
	lea edx,[esi+0xB8]
	push edx
	mov byte ptr [esp+0x28],4
	call __eh_vector_ctor_iterator
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esi+0xF0],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CITCWnd_SubTab::GetSubTabIndex
__SUB_CLASS_THIS(00184990, __thiscall, 84201,  CITCWnd_SubTab, long, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x16
	push ebx
	push esi
	push edi
	mov esi,ecx
	jle Block16

 Block1:
	mov ecx,dword ptr [esp+0x10]
	xor eax,eax

 Block2:
	cmp ecx,dword ptr [eax*4+_D_S_NITCW_LISTHEAD]
	jl Block5

 Block3:
	inc eax
	cmp eax,6
	jl Block2

 Block4:
	or eax,0xFFFFFFFF
	pop edi
	pop esi
	pop ebx
	ret 8

 Block5:
	cmp eax,1
	je Block4

 Block6:
	cmp eax,3
	je Block4

 Block7:
	cmp dword ptr [esi+0xEC],eax
	jne Block11

 Block8:
	mov eax,dword ptr [esi+0xE8]
	inc eax
	and eax,0x80000001
	jns Block10

 Block9:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block10:
	mov dword ptr [esi+0xE8],eax
	jmp Block12

 Block11:
	mov dword ptr [esi+0xEC],eax

 Block12:
	cmp dword ptr [esi+0xA8],0
	jne Block14

 Block13:
	cmp dword ptr [esi+0xEC],1
	jne Block4

 Block14:
	mov edi,dword ptr [ZImports::_timeGetTime]
	call edi
	sub eax,dword ptr [esi+0xF0]
	cmp eax,0x3E8
	jb Block4

 Block15:
	call edi
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xF0],eax
	call CWnd::InvalidateRect
	mov eax,dword ptr [esi+0xA8]
	pop edi
	pop esi
	pop ebx
	ret 8

 Block16:
	mov ecx,dword ptr [esi+0xAC]
	cmp dword ptr [ecx+0x68],4
	jne Block23

 Block17:
	mov ecx,dword ptr [esp+0x10]
	xor eax,eax

 Block18:
	cmp ecx,dword ptr [eax*4+_D_S_NITCW_MYPAGESU]
	jl Block21

 Block19:
	inc eax
	cmp eax,4
	jl Block18

 Block20:
	or eax,0xFFFFFFFF
	pop edi
	pop esi
	pop ebx
	ret 8

 Block21:
	cmp dword ptr [esi+0xA8],eax
	je Block4

 Block22:
	mov dword ptr [esi+0xA8],eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block23:
	mov eax,dword ptr [esp+0x10]
	xor edi,edi
	lea ecx,[ecx]

 Block24:
	cmp eax,dword ptr [edi*4+_D_S_NITCW_SUBTAB_L]
	jl Block27

 Block25:
	inc edi
	cmp edi,5
	jl Block24

 Block26:
	or eax,0xFFFFFFFF
	pop edi
	pop esi
	pop ebx
	ret 8

 Block27:
	cmp dword ptr [esi+0xA8],edi
	je Block4

 Block28:
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x14],esp
	push 0
	push offset _S_
	push 0
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xE8],1
	mov dword ptr [esi+0xEC],1
	push 0
	mov ecx,ebx
	mov dword ptr [ebx],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [esi+0xAC]
	push 0
	push 0
	push 0
	push 0
	call CITC::SetSearchCondition
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CITCWnd_Tab::~CITCWnd_Tab
__SUB_CLASS_THIS0(00184390, __thiscall, 84171,  CITCWnd_Tab, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD0]
	mov edx,dword ptr [eax+0x68]
	push 0
	mov dword ptr [ecx+0xA0],edx
	call CWnd::InvalidateRect
	ret
}
}
// CITCWnd_SubTab::OnMouseButton
_SUB_EXCEPTION_HANDLER(184DC0)
__SUB_CLASS_THIS(00184DC0, __thiscall, 84197,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_184DC0
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
	cmp dword ptr [esp+0x1C],0x201
	jne Block10

 Block1:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push eax
	push ecx
	lea ecx,[esi-4]
	call CITCWnd_SubTab::GetSubTabIndex
	mov edx,dword ptr [esi+0xA8]
	mov edi,eax
	mov eax,dword ptr [edx+0x68]
	test eax,eax
	jle Block6

 Block2:
	cmp eax,4
	jle Block5

 Block3:
	cmp eax,5
	jne Block6

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10

 Block5:
	cmp edi,4
	jg Block10

 Block6:
	test edi,edi
	jl Block10

 Block7:
	lea eax,[esp+0x1C]
	push 0x4F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esi+0xE8]
	mov edx,dword ptr [esi+0xE4]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	push edx
	push edi
	call CITC::OnChangedCategorySub

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10
}
}
// CITCWnd_Tab::SetSearchEdit
_SUB_EXCEPTION_HANDLER(172E00)
__SUB_CLASS_THIS(00172E00, __thiscall, 84177,  CITCWnd_Tab, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172E00
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0xC0]
	push eax
	mov dword ptr [esp+0x10],0
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4
}
}
// CITCWnd_Tab::OnMouseButton
_SUB_EXCEPTION_HANDLER(1848E0)
__SUB_CLASS_THIS(001848E0, __thiscall, 84173,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1848E0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [esp+0x1C],0x201
	jne Block5

 Block1:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push eax
	push ecx
	lea ecx,[edi-4]
	call CITCWnd_Tab::GetTabIndex
	mov esi,eax
	test esi,esi
	je Block5

 Block2:
	lea edx,[esp+0x1C]
	push 0x4F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [edi+0xCC]
	push esi
	call CITC::OnChangedCategory

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10
}
}
// CITCWnd_SubTab::Draw
_SUB_EXCEPTION_HANDLER(184610)
__SUB_CLASS_THIS(00184610, __thiscall, 84198,  CITCWnd_SubTab, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_184610
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
	mov eax,dword ptr [esp+0x34]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [esp+0x34]
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	cmp edi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi+0x24]
	mov edx,dword ptr [edi]
	push 0xFFFFFF
	push 0x32
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ebx
	push ebx
	push edi
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi+0xAC]
	mov eax,dword ptr [ecx+0x68]
	cmp eax,4
	jne Block12

 Block5:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi+0xA8]
	mov esi,dword ptr [esi+ecx*4+0x94]
	lea edx,[esp+0x14]
	push edx
	push esi
	push ebx
	push ebx
	mov ecx,edi
	mov byte ptr [esp+0x3C],1
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block11

 Block8:
	xor eax,eax
	mov word ptr [esp+0x14],ax

 Block9:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block34

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block34

 Block12:
	cmp eax,5
	jne Block18

 Block13:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov esi,dword ptr [esi+0xA4]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	push ebx
	push 4
	mov ecx,edi
	mov byte ptr [esp+0x3C],2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block17

 Block16:
	xor edx,edx
	mov word ptr [esp+0x14],dx
	jmp Block9

 Block17:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block34

 Block18:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [esi+eax*4+0x80]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	push ebx
	push ebx
	mov ecx,edi
	mov byte ptr [esp+0x3C],3
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [esi+0xAC]
	cmp dword ptr [ecx+0x68],4
	je Block34

 Block25:
	mov eax,dword ptr [esi+0xEC]
	cmp eax,1
	jle Block34

 Block26:
	sub eax,2
	je Block32

 Block27:
	sub eax,2
	je Block31

 Block28:
	sub eax,1
	je Block30

 Block29:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call eax
	jmp Block35

 Block30:
	mov ebp,2
	jmp Block33

 Block31:
	mov ebp,1
	jmp Block33

 Block32:
	xor ebp,ebp

 Block33:
	push offset _D_VTMISSING
	lea ecx,[esp+0x18]
	call Ztl_variant_t::_ctor_1
	xor ecx,ecx
	cmp dword ptr [esi+0xE8],ebx
	mov byte ptr [esp+0x2C],4
	setne cl
	lea ecx,[ecx+ecx+1]
	lea edx,[ecx+ebp*4]
	mov eax,dword ptr [esi+edx*4+0xB8]
	mov edx,dword ptr [esi+0xEC]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov eax,dword ptr [edx*4+_D_S_NITCW_MYPAGESU+12]
	push 0x18
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[esp+0x14]
	call Ztl_variant_t::~Ztl_variant_t

 Block34:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call edx

 Block35:
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
// CITCWnd_SubTab::OnCreate
_SUB_EXCEPTION_HANDLER(1865A0)
__SUB_CLASS_THIS(001865A0, __thiscall, 84195,  CITCWnd_SubTab, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1865A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x60],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ecx+0xAC],eax
	xor eax,eax
	mov dword ptr [ebp+0x68],eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp+0x6C],eax
	lea ebx,[ecx+0x80]

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x64]
	push 0x128D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x68]
	push eax
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[ebp+0x28]
	push ecx
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block4:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block5:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp+0x28]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	je Block156

 Block6:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block14

 Block7:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x5C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x5C]
	mov edi,eax
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block11

 Block10:
	cmp esi,0x80004002
	jne Block162

 Block11:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],3
	jne Block16

 Block12:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block17

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block14:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block11

 Block15:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block11

 Block16:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x38],si
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x28],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [ebp+0x6C]
	inc eax
	add ebx,4
	cmp eax,5
	mov dword ptr [ebp+0x6C],eax
	jl Block1

 Block26:
	mov ebx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x6C],0
	add ebx,0x94
	nop

 Block27:
	lea eax,[ebp+0x5C]
	push 0x128E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],6
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block30:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],7
	call esi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block31:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],8
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],9
	je Block156

 Block32:
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block40

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov edi,ecx
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block37

 Block36:
	cmp esi,0x80004002
	jne Block162

 Block37:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],8
	jne Block42

 Block38:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block43

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block40:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block37

 Block41:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block37

 Block42:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov esi,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x28],si
	jne Block46

 Block44:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x38],si
	jne Block50

 Block48:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [ebp+0x6C]
	inc eax
	add ebx,4
	cmp eax,4
	mov dword ptr [ebp+0x6C],eax
	jl Block27

 Block52:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov ecx,1
	mov dword ptr [eax+0xA8],edx
	mov dword ptr [eax+0xE8],ecx
	mov dword ptr [eax+0xEC],ecx
	mov dword ptr [ebp+0x6C],edx
	mov edi,edi

 Block53:
	lea eax,[ebp+0x5C]
	push 0x1260
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block56:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block57:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	je Block156

 Block58:
	lea eax,[ebp-0x70]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x60]
	shl ecx,4
	lea ebx,[ecx+edx]
	mov dword ptr [ebp+0x64],ebx
	test eax,eax
	je Block66

 Block59:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB8]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov edi,ecx
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	mov dword ptr [ebx+0xB8],edi
	test esi,esi
	jge Block63

 Block62:
	cmp esi,0x80004002
	jne Block162

 Block63:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x70],si
	jne Block68

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block69

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block66:
	mov eax,dword ptr [ebx+0xB8]
	test eax,eax
	je Block63

 Block67:
	mov dword ptr [ebx+0xB8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block63

 Block68:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x28],si
	jne Block72

 Block70:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x38],si
	jne Block76

 Block74:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	lea eax,[ebp-0x18]
	push 0x1261
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x60]
	push eax
	call esi
	lea ecx,[ebp-0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block80:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0x11
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block81:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x12
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x60]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x13
	je Block156

 Block82:
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],0x12
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block90

 Block83:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xBC]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov edi,ecx
	test eax,eax
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block85:
	mov dword ptr [ebx+0xBC],edi
	test esi,esi
	jge Block87

 Block86:
	cmp esi,0x80004002
	jne Block162

 Block87:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0x12
	jne Block92

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block93

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block90:
	mov eax,dword ptr [ebx+0xBC]
	test eax,eax
	je Block87

 Block91:
	mov dword ptr [ebx+0xBC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block87

 Block92:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov esi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x40],si
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x60],si
	jne Block100

 Block98:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	lea eax,[ebp-0x1C]
	push 0x1262
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x1C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x50]
	push edx
	call esi
	lea eax,[ebp-0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block104:
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0x16
	call esi
	lea edx,[ebp-0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block105:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x17
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp-0x50]
	push eax
	lea ecx,[ebp-0x30]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x18
	je Block156

 Block106:
	lea edx,[ebp-0x80]
	mov byte ptr [ebp-4],0x17
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	lea esi,[ebx+0xC]
	shl esi,4
	add esi,dword ptr [ebp+0x60]
	test eax,eax
	je Block114

 Block107:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
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
	and ebx,dword ptr [ebp-0x20]
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block111

 Block110:
	cmp edi,0x80004002
	jne Block152

 Block111:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x17
	jne Block116

 Block112:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block117

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block114:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block111

 Block115:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block111

 Block116:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov esi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x30],si
	jne Block120

 Block118:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x50],si
	jne Block124

 Block122:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea eax,[ebp-0x10]
	push 0x1263
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0x1A
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x10]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x4C]
	push eax
	call esi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block128:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x1B
	call esi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block129:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x1C
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp+0x4C]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1D
	je Block156

 Block130:
	lea eax,[ebp+4]
	mov byte ptr [ebp-4],0x1C
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block138

 Block131:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ebx,dword ptr [ebp+0x64]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xC4]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	mov edi,ecx
	test eax,eax
	je Block133

 Block132:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block133:
	mov dword ptr [ebx+0xC4],edi
	test esi,esi
	jge Block135

 Block134:
	cmp esi,0x80004002
	jne Block162

 Block135:
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0x1C
	jne Block140

 Block136:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block141

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block138:
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ecx+0xC4]
	test eax,eax
	je Block135

 Block139:
	mov dword ptr [ecx+0xC4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block135

 Block140:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x14],si
	jne Block144

 Block142:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x4C],si
	jne Block148

 Block146:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov eax,dword ptr [ebp+0x6C]
	inc eax
	cmp eax,3
	mov dword ptr [ebp+0x6C],eax
	jl Block53

 Block150:
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
	jge Block153

 Block151:
	push eax
	call _com_issue_error

 Block152:
	push edi
	call _com_issue_error

 Block153:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x1F
	call esi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	push 0
	push 0
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+0x4C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x24],esp
	push 0x128F
	push eax
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x21
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0x20
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block163

 Block158:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x48]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebx,dword ptr [ebp+0x60]
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x48]
	mov edi,eax
	mov eax,dword ptr [ebx+0xA4]
	test eax,eax
	je Block160

 Block159:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block160:
	mov dword ptr [ebx+0xA4],edi
	test esi,esi
	jge Block165

 Block161:
	cmp esi,0x80004002
	je Block165

 Block162:
	push esi
	call _com_issue_error

 Block163:
	mov ebx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebx+0xA4]
	test eax,eax
	je Block165

 Block164:
	mov dword ptr [ebx+0xA4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov esi,8
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+4],si
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x4C],si
	jne Block172

 Block170:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x14],si
	jne Block176

 Block174:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov ecx,ebx
	call CITCWnd_SubTab::ChangeSubCategory
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	lea esp,[ebp-0xA0]
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
// CITCWnd_Tab::CITCWnd_Tab
_SUB_EXCEPTION_HANDLER(172540)
__SUB_CLASS_THIS0(00172540, __thiscall, 84169,  CITCWnd_Tab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172540
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_Tab::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_Tab::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_Tab::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x84],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 6
	push 4
	lea eax,[esi+0x88]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
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
// CITCWnd_Tab::GetTabIndex
__SUB_CLASS_THIS(001843B0, __thiscall, 84178,  CITCWnd_Tab, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFED
	cmp eax,0x1E
	ja Block11

 Block1:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [ecx+0xA0]
	mov eax,1
	lea esp,[esp]

 Block2:
	cmp eax,esi
	jge Block4

 Block3:
	mov ecx,edx
	sub ecx,dword ptr [eax*8+_D_S_NITCW_TAB_LEFT]
	jmp Block6

 Block4:
	jle Block8

 Block5:
	mov ecx,edx
	sub ecx,dword ptr [eax*8+_D_S_NITCW_TAB_LEFT+4]

 Block6:
	test ecx,ecx
	jl Block8

 Block7:
	cmp ecx,0x5D
	jl Block10

 Block8:
	inc eax
	cmp eax,5
	jle Block2

 Block9:
	xor eax,eax

 Block10:
	pop esi
	ret 8

 Block11:
	xor eax,eax
	ret 8
}
}
// CITCWnd_SubTab::~CITCWnd_SubTab
_SUB_EXCEPTION_HANDLER(184EB0)
__SUB_CLASS_THIS0(00184EB0, __thiscall, 84194,  CITCWnd_SubTab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_184EB0
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
	mov eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [esi+0xB4]
	mov eax,dword ptr [eax+0x6C]
	xor ebx,ebx
	mov dword ptr [esi+0xA8],eax
	cmp ecx,ebx
	je Block3

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0xB4],ebx
	lea edi,[esi+0xB0]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov ecx,dword ptr [esi+0xAC]
	mov eax,dword ptr [ecx+0x68]
	cmp eax,2
	jne Block11

 Block4:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea edx,[esp+0x10]
	push 0x125D
	push edx
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 5
	push 0x1A6
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
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
	ret
}
}
// CITCWnd_Tab::OnCreate
_SUB_EXCEPTION_HANDLER(185B20)
__SUB_CLASS_THIS(00185B20, __thiscall, 84172,  CITCWnd_Tab, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_185B20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [esi+0xD0],eax
	xor eax,eax
	mov dword ptr [ebp+0x44],eax
	lea ecx,[esi+0x8C]
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp+0x48],1
	mov dword ptr [ebp+0x50],ecx

 Block1:
	lea edx,[ebp+0x40]
	push 0x1288
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x48]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x40]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push eax
	call edi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block4:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block5:
	mov ebx,dword ptr [ebp+0x44]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	push 0
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	je Block29

 Block6:
	lea eax,[ebp]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block14

 Block7:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x54]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x50]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ecx]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x54]
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [ecx],ebx
	test edi,edi
	jge Block11

 Block10:
	cmp edi,0x80004002
	jne Block30

 Block11:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],3
	jne Block16

 Block12:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block17

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block14:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block11

 Block15:
	mov ecx,edx
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block11

 Block16:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x20],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x30],di
	jne Block24

 Block22:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [ebp+0x48]
	add dword ptr [ebp+0x50],4
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x48],eax
	jle Block1

 Block26:
	lea ecx,[ebp-0x9C]
	mov dword ptr [esi+0xA0],1
	mov byte ptr [esi+0xCC],0
	mov byte ptr [esi+0xCD],0
	mov byte ptr [esi+0xCE],0
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],6
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block31

 Block27:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block32

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	push edi
	call _com_issue_error

 Block31:
	xor eax,eax

 Block32:
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block48

 Block33:
	add eax,8
	je Block48

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block36:
	mov eax,dword ptr [esi+0xA8]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esi+0xA8],edi
	test eax,eax
	je Block40

 Block37:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call ebx
	test eax,eax
	jne Block40

 Block38:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block40

 Block39:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block40:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x9C]
	push eax
	push 0x14
	push 0x4B
	push 0x37
	push 6
	push 3
	push 0x3E8
	push esi
	call edx
	lea eax,[ebp+0x54]
	push 0x12B4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xA8]
	push 0
	push eax
	mov byte ptr [ebp-4],8
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea ecx,[ebp+0x54]
	push 0x12B5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xA8]
	push 1
	push eax
	mov byte ptr [ebp-4],9
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea edx,[ebp+0x54]
	push 0x12B6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xA8]
	push 2
	push eax
	mov byte ptr [ebp-4],0xA
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block49

 Block47:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block50

 Block48:
	xor edi,edi
	jmp Block36

 Block49:
	xor eax,eax

 Block50:
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block70

 Block51:
	add eax,8
	je Block70

 Block52:
	lea edi,[eax-8]
	test edi,edi
	je Block54

 Block53:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block54:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	test eax,eax
	je Block58

 Block55:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call ebx
	test eax,eax
	jne Block58

 Block56:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block58

 Block57:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block58:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x9C]
	push edx
	push 0x14
	push 0x4B
	push 0x37
	push 0x52
	push 3
	push 0x3E9
	push esi
	call eax
	lea ecx,[ebp+0x54]
	push 0x125F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB0]
	push 0
	push eax
	mov byte ptr [ebp-4],0xC
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	lea edx,[ebp+0x54]
	push 0x1289
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB0]
	push 1
	push eax
	mov byte ptr [ebp-4],0xD
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	lea eax,[ebp+0x54]
	push 0x128A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB0]
	push 2
	push eax
	mov byte ptr [ebp-4],0xE
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	lea ecx,[ebp+0x54]
	push 0x128B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB0]
	push 3
	push eax
	mov byte ptr [ebp-4],0xF
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	lea edx,[ebp+0x54]
	push 0x128C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB0]
	push 4
	push eax
	mov byte ptr [ebp-4],0x10
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block71

 Block69:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block72

 Block70:
	xor edi,edi
	jmp Block54

 Block71:
	xor eax,eax

 Block72:
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block106

 Block73:
	add eax,8
	je Block106

 Block74:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block75:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	test eax,eax
	je Block80

 Block77:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call ebx
	test eax,eax
	jne Block80

 Block78:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block80

 Block79:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block80:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x9C]
	push edx
	push 0x14
	push 0x4B
	push 0x37
	push 0xD9
	push 3
	push 0x3EA
	push esi
	call eax
	lea ecx,[ebp+0x54]
	push 0x12B8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB8]
	push 0
	push eax
	mov byte ptr [ebp-4],0x12
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	lea edx,[ebp+0x54]
	push 0x1A48
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB8]
	push 1
	push eax
	mov byte ptr [ebp-4],0x13
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	lea ecx,[ebp-0x48]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[ebp+0x54]
	push 0x1A25
	push eax
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp-0x24],0xFFFFFFFF
	mov dword ptr [ebp-0x2C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,eax
	lea ecx,[ebp-0x34]
	cmp ecx,ebx
	je Block96

 Block85:
	mov edi,dword ptr [ebp-0x34]
	test edi,edi
	je Block94

 Block86:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block87:
	test edi,edi
	je Block93

 Block88:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block90:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block92

 Block91:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block92:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block93:
	mov dword ptr [ebp-0x34],0

 Block94:
	mov eax,dword ptr [ebx]
	mov dword ptr [ebp-0x34],eax
	test eax,eax
	je Block96

 Block95:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block96:
	mov edi,dword ptr [ebp+0x54]
	test edi,edi
	je Block104

 Block97:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block98:
	test edi,edi
	je Block104

 Block99:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block101:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block103

 Block102:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block103:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block104:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x18],0x64
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block107

 Block105:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block108

 Block106:
	xor edi,edi
	jmp Block76

 Block107:
	xor eax,eax

 Block108:
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block120

 Block109:
	add eax,8
	je Block120

 Block110:
	lea edi,[eax-8]
	test edi,edi
	je Block112

 Block111:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block112:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	test eax,eax
	je Block116

 Block113:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block116

 Block114:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block116

 Block115:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block116:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[ebp-0x48]
	push eax
	push 0x12
	push 0xA3
	push 0x37
	push 0x126
	push 0x3EB
	push esi
	call edx
	xor edi,edi
	mov dword ptr [ebp+0x1C],edi
	mov dword ptr [ebp+0x10],1
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+0x18],edi
	lea eax,[ebp+0x54]
	push 0x127F
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x17
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block118:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block121

 Block119:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block122

 Block120:
	xor edi,edi
	jmp Block112

 Block121:
	xor eax,eax

 Block122:
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block144

 Block123:
	add eax,8
	cmp eax,edi
	je Block144

 Block124:
	lea edi,[eax-8]
	test edi,edi
	je Block126

 Block125:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block126:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	test eax,eax
	je Block130

 Block127:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block130

 Block128:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block130

 Block129:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block130:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x10]
	push eax
	push 0
	push 0x37
	push 0x1CE
	push 0x3EC
	push esi
	call edx
	mov ecx,esi
	call CITCWnd_Tab::ChangeCategory
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],6
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov esi,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block141

 Block133:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block134:
	test esi,esi
	je Block140

 Block135:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block137:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block139

 Block138:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block139:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block140:
	mov dword ptr [ebp-0x50],0

 Block141:
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	lea esp,[ebp-0xAC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x58]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x5C
	mov esp,ebp
	pop ebp
	ret 4

 Block144:
	xor edi,edi
	jmp Block126
}
}
// CITCWnd_Tab::OnSetFocus
__SUB_CLASS_THIS(001725E0, __thiscall, 84176,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
