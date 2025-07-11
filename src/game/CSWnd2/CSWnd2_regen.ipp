#include "regen.hpp"
// CSWnd2.ipp
#include "CSWnd2.hpp"

// CCSWnd_Tab::ChangeSubCategory
__SUB_CLASS_THIS0(000C6530, __thiscall, 48737,  CCSWnd_Tab, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xBC]
	mov edx,dword ptr [eax+0x540]
	mov ecx,dword ptr [ecx+0x84]
	push edx
	call CCtrlSelector::SetCurSel
	ret
}
}
// CCSWnd_Best::OnSetFocus
__SUB_CLASS_THIS(000C6460, __thiscall, 48929,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x90]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CItemSearchDlg::CItemSearchDlg
__SUB_CLASS_THIS(000C6BB0, __thiscall, 144880,  CItemSearchDlg, void, ZArray<tagPOINT>&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CDialog::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CItemSearchDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CItemSearchDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CItemSearchDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xAC],eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esi+0xB0],eax
	mov eax,esi
	pop esi
	ret 4
}
}
// CCSWnd_List::PICTURE_PLATE::~PICTURE_PLATE
__SUB_CLASS_THIS0(000820B0, __thiscall, 48863,  CCSWnd_List::PICTURE_PLATE, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	pop ecx

 Block2:
	ret
}
}
// CCSWnd_Tab::CCSWnd_Tab
_SUB_EXCEPTION_HANDLER(81140)
__SUB_CLASS_THIS0(00081140, __thiscall, 48735,  CCSWnd_Tab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81140
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
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_Tab::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_Tab::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_Tab::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esi+0x8C],eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea eax,[esi+0x90]
	push eax
	mov byte ptr [esp+0x28],2
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x14],3
	call timeGetTime
	mov dword ptr [esi+0xC0],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCSWnd_List::OnMouseButton
_SUB_EXCEPTION_HANDLER(C91A0)
__SUB_CLASS_THIS(000C91A0, __thiscall, 48822,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C91A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor edi,edi
	lea ecx,[esi+0x274]
	mov dword ptr [esp+0x14],edi
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esi+0x250]
	lea ecx,[eax+0x564]
	call CCSWnd_Char::EndChat
	cmp dword ptr [esp+0x60],0x203
	jne Block30

 Block1:
	lea eax,[esi+0x188]
	lea ebp,[esi-4]
	mov dword ptr [esp+0x60],eax

 Block2:
	push edi
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,ebp
	call CCSWnd_List::GetPlateRect
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x44]
	add eax,5
	mov dword ptr [esp+0x30],eax
	add eax,0x40
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [esp+0x6C]
	push eax
	mov eax,dword ptr [esp+0x6C]
	add ecx,5
	mov dword ptr [esp+0x38],ecx
	push eax
	lea edx,[esp+0x38]
	add ecx,0x40
	push edx
	mov dword ptr [esp+0x48],ecx
	call PtInRect
	test eax,eax
	je Block25

 Block3:
	mov eax,dword ptr [esp+0x60]
	mov eax,dword ptr [eax]
	test eax,eax
	jl Block25

 Block4:
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x58],0
	test ecx,ecx
	je Block7

 Block5:
	lea edx,[esp+0x28]
	push edx
	call CS_COMMODITY_EX::ToOldData
	or dword ptr [esp+0x14],1
	cmp dword ptr [eax+4],0
	mov ecx,dword ptr [esp+0x24]
	je Block7

 Block6:
	xor bl,bl
	jmp Block8

 Block7:
	mov bl,1

 Block8:
	test byte ptr [esp+0x14],1
	je Block14

 Block9:
	mov eax,dword ptr [esp+0x2C]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x2C],0

 Block14:
	test bl,bl
	je Block20

 Block15:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test ecx,ecx
	je Block25

 Block16:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	mov ecx,dword ptr [esp+0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block19:
	mov dword ptr [esp+0x24],0
	jmp Block25

 Block20:
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov ecx,ebp
	call CCSWnd_List::WearCommodity
	push 0
	mov ecx,ebp
	mov dword ptr [esi+0x180],edi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x1BF440
	jne Block24

 Block21:
	mov eax,dword ptr [TSingleton<CUserPreview>::ms_pInstance]
	mov ecx,dword ptr [eax+0x2E44]
	mov esi,dword ptr [ecx+4]
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi+0x88]
	cmp dword ptr [edx+0x14],0
	jne Block27

 Block23:
	mov esi,dword ptr [esp+0x18]

 Block24:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block25:
	add dword ptr [esp+0x60],4
	inc edi
	cmp edi,0xA
	jl Block2

 Block26:
	jmp Block30

 Block27:
	push 0
	push 0xE
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_PETQUOTERING]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_PETQUOTERING+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_PETQUOTERING+8]
	mov dword ptr [eax+8],ecx
	mov dx,word ptr [_S_PETQUOTERING+12]
	push 0xE
	lea ecx,[esp+0x64]
	mov word ptr [eax+0xC],dx
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+0x60]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],1
	call CPet::ChatCommandInPreview
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block30:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0x10
}
}
// CCSWnd_Best::Draw
_SUB_EXCEPTION_HANDLER(CAED0)
__SUB_CLASS_THIS(000CAED0, __thiscall, 48928,  CCSWnd_Best, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CAED0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x58],edi
	mov eax,dword ptr [esp+0xE4]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x18],ebx
	call CWnd::Draw
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [esp+0xDC],ebx
	cmp ebp,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi+0x28]
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ebp]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push ebx
	push ebx
	push ebp
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xB4]
	push ecx
	call esi
	lea edx,[esp+0xB4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0xE0],1
	call esi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push ebx
	push ebx
	lea edx,[esp+0xBC]
	push edx
	lea eax,[esp+0x70]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_UICASHSHOPIMGCS3
	mov byte ptr [esp+0xF4],2
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xF0],3
	cmp dword ptr [_D_G_RM],ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[esp+0xD8]
	push ecx
	mov byte ptr [esp+0xF4],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xDC],6
	cmp word ptr [esp+0xC4],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0xC4]
	push eax
	call ebx

 Block17:
	mov byte ptr [esp+0xDC],7
	cmp word ptr [esp+0x64],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x64]
	push edx
	call ebx

 Block21:
	mov byte ptr [esp+0xDC],8
	cmp word ptr [esp+0xB4],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0xB4]
	push ecx
	call ebx

 Block25:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,0x3F80
	xor eax,eax
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x28],eax
	jmp Block28

 Block27:
	mov edi,dword ptr [esp+0x58]
	mov esi,dword ptr [esp+0x30]
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block28:
	mov edx,dword ptr [esp+0x24]
	cmp eax,4
	jne Block37

 Block29:
	mov ecx,dword ptr [edi+0x94]
	cmp dword ptr [ecx+0x500],0
	je Block37

 Block30:
	test edx,edx
	sete al
	test al,al
	sete al
	test al,al
	je Block91

 Block31:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ecx
	mov edi,dword ptr [esp+0x34]
	mov esi,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esi+0x80]
	push 0x114
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x58]
	push 6
	push ebp
	mov byte ptr [esp+0xFC],9
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xDC],8
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block91

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block36:
	lea ecx,[esp+0x34]
	push ecx
	call ebx
	jmp Block91

 Block37:
	mov eax,dword ptr [edi+eax*4+0x80]
	test eax,eax
	jl Block91

 Block38:
	lea ebx,[eax*8]
	mov eax,dword ptr [esi]
	add eax,ebx
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov edi,eax
	mov dword ptr [esp+0x1C],0
	mov eax,dword ptr [esi]
	add eax,ebx
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0x10]
	mov byte ptr [esp+0xDC],0xA
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0x28]
	mov ecx,eax
	imul esi,0x45
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x5B
	jne Block40

 Block39:
	push 0
	push 0
	lea ecx,[esi+0x22]
	push ecx
	push 0x34
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x30],esp
	push ebp
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawSpecialIconForSlot
	push edi
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetSpecialName
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xE0],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block41

 Block40:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esi+0x22]
	push edx
	push 0x34
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esp
	push ebp
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea edx,[esp+0x64]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xE0],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]

 Block41:
	mov byte ptr [esp+0xDC],0xA
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	push 0x4F
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 1
	push eax
	call get_basic_font
	lea ecx,[esp+0x2C]
	add esp,8
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x74]
	push edx
	call edi
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block44:
	lea ecx,[esp+0x94]
	push ecx
	mov byte ptr [esp+0xE0],0xD
	call edi
	lea edx,[esp+0x94]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block45:
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0x4C]
	push 1
	push edx
	mov byte ptr [esp+0xEC],0xE
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xF0],0xF
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x24]
	push ecx
	mov edi,8
	mov byte ptr [esp+0xF0],0x10
	push edi
	mov ecx,ebp
	mov byte ptr [esp+0xF4],0xF
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xDC],0xE
	test eax,eax
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
	mov byte ptr [esp+0xDC],0xD
	cmp word ptr [esp+0x94],di
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0xDC],0xA
	cmp word ptr [esp+0x74],di
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov dword ptr [esp+0x20],0
	mov edi,dword ptr [esp+0x30]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [ebx+edx+4]
	mov eax,dword ptr [eax+0x20]
	push 1
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xE8],0x11
	call format_integer
	mov edx,dword ptr [edi]
	mov eax,dword ptr [ebx+edx+4]
	mov eax,dword ptr [eax+0xC]
	add eax,0xFB3B4C00
	add esp,0xC
	cmp eax,0x98967F
	ja Block57

 Block56:
	lea eax,[esp+0x4C]
	push 0x1AC1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or dword ptr [esp+0x14],1
	mov byte ptr [esp+0xDC],0x12
	jmp Block58

 Block57:
	lea ecx,[esp+0x54]
	push 0x1A0F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or dword ptr [esp+0x14],2
	mov dword ptr [esp+0xDC],0x13

 Block58:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax-4]
	jmp Block61

 Block60:
	xor ecx,ecx

 Block61:
	push ecx
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	test byte ptr [esp+0x14],2
	mov dword ptr [esp+0xDC],0x12
	je Block64

 Block62:
	mov eax,dword ptr [esp+0x54]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0xDC],0x11
	je Block67

 Block65:
	mov eax,dword ptr [esp+0x4C]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [ebx+edx+4]
	cmp dword ptr [eax+0x1C],1
	jle Block75

 Block68:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x50]
	push 0x24D
	push eax
	mov byte ptr [esp+0xE4],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov ebx,dword ptr [ebx+ecx+4]
	mov edx,dword ptr [ebx+0x1C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xE8],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov byte ptr [esp+0xDC],0x14
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	je Block72

 Block71:
	mov eax,dword ptr [edi-4]
	jmp Block73

 Block72:
	xor eax,eax

 Block73:
	push eax
	push edi
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0xDC],0x11
	test edi,edi
	je Block75

 Block74:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block75:
	push 0x4F
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push ecx
	call get_basic_font
	lea edx,[esp+0x2C]
	add esp,8
	push edx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[esp+0xA4]
	push eax
	call edi
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block76:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xE0],0x16
	call edi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block77:
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0x88]
	push edx
	lea eax,[esp+0x34]
	push 0
	push eax
	mov byte ptr [esp+0xEC],0x17
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xF0],0x18
	call _xbstr_t::_ctor_0
	add esi,0x35
	push esi
	mov esi,8
	mov byte ptr [esp+0xF0],0x19
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0xF4],0x18
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xDC],0x17
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov byte ptr [esp+0xDC],0x16
	cmp word ptr [esp+0x84],si
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0xDC],0x11
	cmp word ptr [esp+0xA4],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xDC],0xA
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xDC],8
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x28]
	inc eax
	cmp eax,5
	mov dword ptr [esp+0x28],eax
	jl Block27

 Block92:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xDC],0
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret 4
}
}
// CCSWnd_Status::OnButtonClicked
__SUB_CLASS_THIS(000C64A0, __thiscall, 48948,  CCSWnd_Status, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	mov ecx,dword ptr [ecx+0xA0]
	call CCashShop::OnStatusCharge
	ret 4

 Block3:
	mov ecx,dword ptr [ecx+0xA0]
	call CCashShop::OnStatusCheck
	ret 4

 Block4:
	mov ecx,dword ptr [ecx+0xA0]
	call CCashShop::OnStatusCoupon
	ret 4

 Block5:
	mov ecx,dword ptr [ecx+0xA0]
	call CCashShop::OnStatusExit

 Block6:
	ret 4
}
}
// CCSWnd_List::OnSetFocus
__SUB_CLASS_THIS(000C63A0, __thiscall, 48829,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x250]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CCSWnd_List::SetButtonKeyFocus
__SUB_CLASS_THIS(000C6610, __thiscall, 48838,  CCSWnd_List, void, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov ebp,ecx
	push edi
	lea esi,[ebp+0x8C]
	mov ebx,0xA

 Block1:
	mov edi,3

 Block2:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block4

 Block3:
	push 0
	call CCtrlButton::SetKeyFocus

 Block4:
	add esi,8
	sub edi,1
	jne Block2

 Block5:
	sub ebx,1
	jne Block1

 Block6:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jl Block11

 Block7:
	cmp eax,dword ptr [ebp+0x180]
	jge Block11

 Block8:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,2
	ja Block11

 Block9:
	lea ecx,[ecx+eax*2]
	add ecx,eax
	mov ecx,dword ptr [ebp+ecx*8+0x8C]
	test ecx,ecx
	je Block11

 Block10:
	push 1
	call CCtrlButton::SetKeyFocus

 Block11:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CCSWnd_Tab::OnKeyRet
_SUB_EXCEPTION_HANDLER(C6FB0)
__SUB_CLASS_THIS(000C6FB0, __thiscall, 48744,  CCSWnd_Tab, int32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C6FB0
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
	mov edi,ecx
	call timeGetTime
	sub eax,dword ptr [CCSWnd_Tab::ms_KeyDownDelay]
	test dword ptr [esp+0x24],0x80000000
	jne Block28

 Block1:
	cmp eax,dword ptr [edi+0xC0]
	jb Block29

 Block2:
	call timeGetTime
	mov dword ptr [edi+0xC0],eax
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax-0x31]
	cmp ecx,8
	ja Block9

 Block3:
	lea esi,[eax-0x30]

 Block4:
	test esi,esi
	jle Block29

 Block5:
	mov ecx,dword ptr [edi+0xBC]
	cmp dword ptr [ecx+0x53C],esi
	je Block29

 Block6:
	lea edx,[esp+0x24]
	push 0x4F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x28]
	add esp,4
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [edi+0xBC]
	push esi
	call CCashShop::OnChangedCategory
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block9:
	cmp eax,0x24
	jne Block11

 Block10:
	lea esi,[eax-0x23]
	jmp Block5

 Block11:
	cmp eax,0xC0
	jne Block19

 Block12:
	cmp dword ptr [edi+0xB8],9
	je Block29

 Block13:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA0
	mov esi,1
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block15

 Block14:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block16

 Block15:
	or esi,0xFFFFFFFF

 Block16:
	mov edx,dword ptr [edi+0xB8]
	lea esi,[esi+edx+7]
	and esi,0x80000007
	jns Block18

 Block17:
	dec esi
	or esi,0xFFFFFFF8
	inc esi

 Block18:
	inc esi
	jmp Block4

 Block19:
	cmp eax,9
	jne Block29

 Block20:
	mov eax,dword ptr [edi+0x84]
	mov esi,dword ptr [eax+0x38]
	mov eax,dword ptr [edi+0xBC]
	mov eax,dword ptr [eax+0x540]
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA0
	lea ebx,[eax+esi+1]
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block22

 Block21:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block23

 Block22:
	sub ebx,2

 Block23:
	test esi,esi
	je Block25

 Block24:
	mov eax,ebx
	cdq
	idiv esi
	jmp Block26

 Block25:
	xor edx,edx

 Block26:
	mov ecx,dword ptr [edi+0xBC]
	cmp edx,dword ptr [ecx+0x540]
	je Block29

 Block27:
	push edx
	call CCashShop::OnChangedCategorySub
	jmp Block29

 Block28:
	dec eax
	mov dword ptr [edi+0xC0],eax

 Block29:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8
}
}
// CCSWnd_List::ChangePage
_SUB_EXCEPTION_HANDLER(CFC70)
__SUB_CLASS_THIS0(000CFC70, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CFC70
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
	mov esi,ecx
	call CCSWnd_List::ClearPicturePlate
	or ebp,0xFFFFFFFF
	xor eax,eax
	mov ebx,2
	push ebp
	mov dword ptr [esi+0x18C],ebp
	mov dword ptr [esi+0x1B4],ebp
	mov dword ptr [esi+0x1DC],ebp
	lea edi,[esi+0x204]
	mov dword ptr [edi],ebx
	mov dword ptr [esi+0x22C],eax
	mov dword ptr [esi+0x190],ebp
	mov dword ptr [esi+0x1B8],ebp
	mov dword ptr [esi+0x1E0],ebp
	mov dword ptr [esi+0x208],ebx
	mov dword ptr [esi+0x230],eax
	mov dword ptr [esi+0x194],ebp
	mov dword ptr [esi+0x1BC],ebp
	mov dword ptr [esi+0x1E4],ebp
	mov dword ptr [esi+0x20C],ebx
	mov dword ptr [esi+0x234],eax
	mov dword ptr [esi+0x198],ebp
	mov dword ptr [esi+0x1C0],ebp
	mov dword ptr [esi+0x1E8],ebp
	mov dword ptr [esi+0x210],ebx
	mov dword ptr [esi+0x238],eax
	mov dword ptr [esi+0x19C],ebp
	mov dword ptr [esi+0x1C4],ebp
	mov dword ptr [esi+0x1EC],ebp
	mov dword ptr [esi+0x214],ebx
	mov dword ptr [esi+0x23C],eax
	mov dword ptr [esi+0x1A0],ebp
	mov dword ptr [esi+0x1C8],ebp
	mov dword ptr [esi+0x1F0],ebp
	mov dword ptr [esi+0x218],ebx
	mov dword ptr [esi+0x240],eax
	mov dword ptr [esi+0x1A4],ebp
	mov dword ptr [esi+0x1CC],ebp
	mov dword ptr [esi+0x1F4],ebp
	mov dword ptr [esi+0x21C],ebx
	mov dword ptr [esi+0x244],eax
	mov dword ptr [esi+0x1A8],ebp
	mov dword ptr [esi+0x1D0],ebp
	mov dword ptr [esi+0x1F8],ebp
	mov dword ptr [esi+0x220],ebx
	mov dword ptr [esi+0x248],eax
	mov dword ptr [esi+0x1AC],ebp
	mov dword ptr [esi+0x1D4],ebp
	mov dword ptr [esi+0x1FC],ebp
	mov dword ptr [esi+0x224],ebx
	mov dword ptr [esi+0x24C],eax
	mov dword ptr [esi+0x1B0],ebp
	mov dword ptr [esi+0x1D8],ebp
	mov dword ptr [esi+0x200],ebp
	mov dword ptr [esi+0x228],ebx
	mov dword ptr [esi+0x250],eax
	push ebp
	mov ecx,esi
	mov dword ptr [esi+0x184],eax
	mov dword ptr [esi+0x188],ebp
	call CCSWnd_List::SetButtonKeyFocus
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi+4]
	call edx
	mov eax,dword ptr [esi+0x254]
	mov ecx,dword ptr [eax+0x53C]
	cmp ecx,0xA
	jne Block10

 Block1:
	lea ecx,[eax+0x550]
	mov eax,dword ptr [eax+0x544]
	lea eax,[eax+eax*4]
	add eax,eax
	push eax
	mov dword ptr [esp+0x1C],0
	call ZList<ZRef<CS_COMMODITY_EX>>::FindIndex
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block9

 Block2:
	lea eax,[esi+0x18C]
	mov dword ptr [esp+0x38],eax

 Block3:
	cmp dword ptr [esp+0x18],0xA
	jge Block9

 Block4:
	lea ecx,[esp+0x30]
	push ecx
	call ZList<ZRef<CS_COMMODITY_EX>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x48],edi
	test edi,edi
	je Block6

 Block5:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x64],0
	call CWvsCommodityEx::GetCommodityExIndexBySN
	mov ecx,dword ptr [esp+0x38]
	inc dword ptr [esp+0x18]
	mov dword ptr [ecx],eax
	add ecx,4
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x64],ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	cmp dword ptr [esp+0x30],0
	mov dword ptr [esp+0x48],0
	jne Block3

 Block9:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	jmp Block114

 Block10:
	cmp ecx,9
	jne Block42

 Block11:
	mov ebx,0x4A8
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x20],ebx

 Block12:
	mov edx,dword ptr [esi+0x254]
	cmp dword ptr [ebx+edx],0
	lea eax,[ebx+edx]
	jle Block40

 Block13:
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	call CWvsCommodityEx::GetCommodityExIndexBySN
	mov dword ptr [edi-0x78],eax
	cmp eax,ebp
	je Block40

 Block14:
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	cmp dword ptr [esp+0x40],0
	mov dword ptr [esp+0x60],1
	je Block16

 Block15:
	mov ecx,dword ptr [esp+0x40]
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov ecx,esi
	call CCSWnd_List::GetCommodityGender
	mov dword ptr [edi],eax

 Block16:
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x4C]
	inc dword ptr [esp+0x24]
	add edi,4
	mov dword ptr [esp+0x44],edi
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]

 Block18:
	add eax,0xFFFFFFFF
	js Block24

 Block19:
	mov edx,dword ptr [ebx+ecx]
	mov ecx,dword ptr [ecx+0x4C]
	lea ecx,[ecx+eax*8]

 Block20:
	cmp dword ptr [ecx],edx
	je Block23

 Block21:
	dec eax
	sub ecx,8
	test eax,eax
	jge Block20

 Block22:
	jmp Block24

 Block23:
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esi+ebx-0x2F4],edx

 Block24:
	xor eax,eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],eax
	lea esp,[esp]

 Block25:
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x50]
	test eax,eax
	je Block35

 Block26:
	mov edx,dword ptr [esp+0x1C]
	cmp edx,dword ptr [eax-4]
	jae Block35

 Block27:
	cmp dword ptr [esp+0x38],0
	jne Block35

 Block28:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,eax
	add ebx,dword ptr [esp+0x18]
	xor eax,eax
	lea edx,[ebx+4]

 Block29:
	mov edi,dword ptr [edx]
	test edi,edi
	je Block34

 Block30:
	cmp edi,dword ptr [ecx+ebp]
	je Block33

 Block31:
	inc eax
	add edx,4
	cmp eax,0xA
	jl Block29

 Block32:
	jmp Block34

 Block33:
	mov eax,dword ptr [ebx+0x2C]
	mov dword ptr [esi+ebp-0x2CC],eax
	mov dword ptr [esp+0x38],1

 Block34:
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x18],0x68
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x44]
	or ebp,0xFFFFFFFF
	jmp Block25

 Block35:
	cmp dword ptr [esp+0x40],0
	mov dword ptr [esp+0x60],ebp
	je Block40

 Block36:
	mov ecx,dword ptr [esp+0x40]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	mov edx,dword ptr [esp+0x40]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	je Block39

 Block38:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block39:
	mov dword ptr [esp+0x40],0

 Block40:
	add ebx,4
	cmp ebx,0x4D0
	mov dword ptr [esp+0x20],ebx
	jl Block12

 Block41:
	mov eax,dword ptr [esp+0x24]
	push eax
	jmp Block114

 Block42:
	cmp ecx,8
	jne Block46

 Block43:
	cmp dword ptr [eax+0x540],0
	je Block45

 Block44:
	lea ecx,[esp+0x44]
	push 0x4EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x64],ebx
	push ebx
	jmp Block111

 Block45:
	lea edx,[esp+0x44]
	push 0x4EB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x64],3
	push ebx
	jmp Block111

 Block46:
	mov edx,dword ptr [eax+0x540]
	push edx
	push ecx
	mov ecx,eax
	call CCashShop::GetCategorySubIndex
	test eax,eax
	jl Block110

 Block47:
	mov ecx,dword ptr [esi+0x84]
	cmp dword ptr [ecx+0x38],0
	jle Block110

 Block48:
	mov ecx,dword ptr [esi+0x254]
	lea edx,[eax*8]
	sub edx,eax
	mov eax,dword ptr [ecx+0x48]
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	lea ebp,[eax+edx*4]
	mov dword ptr [esp+0x3C],ebp
	call CWvsCommodityEx::GetCommodityEx
	mov dword ptr [esp+0x44],eax
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x60],5
	mov dword ptr [esp+0x38],eax
	mov ebx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0x14]
	add ecx,ebx
	cmp ebx,ecx
	mov byte ptr [esp+0x60],6
	jge Block67

 Block49:
	jmp Block51

 Block51:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [edx]
	mov edi,dword ptr [eax+ebx*8+4]
	lea eax,[eax+ebx*8]
	mov dword ptr [esp+0x34],edi
	test edi,edi
	je Block53

 Block52:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	cmp dword ptr [edi+0x4C],0
	mov byte ptr [esp+0x60],7
	je Block65

 Block54:
	mov eax,dword ptr [edi+0x54]
	cmp eax,2
	je Block56

 Block55:
	cmp eax,3
	jne Block60

 Block56:
	mov ecx,dword ptr [edi+0xC]
	cmp eax,2
	jne Block58

 Block57:
	xor ecx,ecx

 Block58:
	push ecx
	mov ecx,dword ptr [esi+0x254]
	call CCashShop::GetCashPurchaseRecord
	test eax,eax
	je Block60

 Block59:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x60],6
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	jmp Block63

 Block60:
	lea edx,[esp+0x30]
	push edx
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	call ZArray<ZRef<CS_COMMODITY_EX>>::InsertBefore
	mov ecx,eax
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	push 0xFFFFFFFF
	lea ecx,[esp+0x3C]
	call ZArray<long>::InsertBefore
	lea ebp,[edi+4]
	push ebp
	mov dword ptr [eax],ebx
	mov byte ptr [esp+0x64],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block62

 Block61:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block62:
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0

 Block63:
	mov eax,dword ptr [ebp+0x10]
	add eax,dword ptr [ebp+0x14]
	inc ebx
	cmp ebx,eax
	jl Block51

 Block64:
	jmp Block67

 Block65:
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [esp+0x64],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block67

 Block66:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block67:
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x544]
	xor ecx,ecx
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x44],ecx
	lea ecx,[eax+eax*4]
	add ecx,ecx
	mov dword ptr [esp+0x20],ecx
	lea ecx,[esi+0x204]
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esp+0x38]
	lea edx,[eax+eax*4]
	lea edx,[ecx+edx*8]
	mov ecx,dword ptr [esp+0x18]
	lea eax,[eax+eax*4]
	shl eax,4
	mov dword ptr [esp+0x2C],edx
	lea edx,[eax+ecx+4]
	mov dword ptr [esp+0x28],edx
	jmp Block69

 Block69:
	cmp dword ptr [esp+0x18],0
	je Block105

 Block70:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x18]
	cmp eax,dword ptr [ecx-4]
	jae Block105

 Block71:
	mov edx,dword ptr [esp+0x28]
	mov ebx,dword ptr [edx]
	mov dword ptr [esp+0x50],ebx
	test ebx,ebx
	je Block73

 Block72:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block73:
	cmp dword ptr [ebx+0x4C],0
	mov byte ptr [esp+0x60],8
	je Block103

 Block74:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx]
	mov edi,dword ptr [esp+0x1C]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov ebp,1
	add dword ptr [esp+0x38],ebp
	push eax
	mov ecx,ebx
	mov dword ptr [edi-0x78],edx
	call CS_COMMODITY_EX::ToOldData
	mov ecx,esi
	call CCSWnd_List::GetCommodityGender
	mov dword ptr [edi],eax
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x4C]
	test eax,eax
	je Block76

 Block75:
	mov eax,dword ptr [eax-4]

 Block76:
	add eax,0xFFFFFFFF
	js Block84

 Block77:
	mov ecx,dword ptr [ecx+0x4C]
	lea ecx,[ecx+eax*8]
	mov edi,edi

 Block78:
	test ecx,ecx
	je Block81

 Block79:
	mov edx,dword ptr [ecx]
	cmp edx,dword ptr [ebx+0xC]
	jne Block81

 Block80:
	cmp dword ptr [ebx+0x4C],ebp
	je Block83

 Block81:
	sub eax,ebp
	sub ecx,8
	test eax,eax
	jge Block78

 Block82:
	jmp Block84

 Block83:
	mov eax,dword ptr [ecx+4]
	mov dword ptr [edi-0x50],eax

 Block84:
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x24],ebp
	jmp Block86

 Block86:
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x50]
	test eax,eax
	je Block99

 Block87:
	cmp ebp,dword ptr [eax-4]
	jae Block99

 Block88:
	cmp dword ptr [esp+0x3C],0
	jne Block99

 Block89:
	mov edi,eax
	add edi,dword ptr [esp+0x24]
	je Block98

 Block90:
	cmp dword ptr [ebx+0x4C],1
	jne Block98

 Block91:
	lea ecx,[ebx+0x10]
	call TSecType<long>::GetData
	cmp eax,dword ptr [edi]
	jne Block98

 Block92:
	xor eax,eax
	lea ecx,[edi+4]

 Block93:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block98

 Block94:
	cmp edx,dword ptr [ebx+0xC]
	je Block97

 Block95:
	inc eax
	add ecx,4
	cmp eax,0xA
	jl Block93

 Block96:
	inc ebp
	add dword ptr [esp+0x24],0x68
	jmp Block86

 Block97:
	mov ecx,dword ptr [edi+0x2C]
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [edx-0x28],ecx
	mov dword ptr [esp+0x3C],1

 Block98:
	inc ebp
	add dword ptr [esp+0x24],0x68
	jmp Block86

 Block99:
	lea edi,[ebx+4]
	push edi
	mov byte ptr [esp+0x64],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block101

 Block100:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block101:
	mov eax,dword ptr [esp+0x44]
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x28],8
	mov ecx,4
	add dword ptr [esp+0x1C],ecx
	add dword ptr [esp+0x2C],ecx
	inc eax
	cmp eax,0xA
	mov dword ptr [esp+0x50],0
	mov dword ptr [esp+0x44],eax
	jl Block69

 Block102:
	jmp Block105

 Block103:
	lea edi,[ebx+4]
	push edi
	mov byte ptr [esp+0x64],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block105

 Block104:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block105:
	mov eax,dword ptr [esi+0x254]
	cmp dword ptr [eax+0x53C],1
	jne Block108

 Block106:
	cmp dword ptr [eax+0x540],2
	jne Block108

 Block107:
	push 0
	jmp Block109

 Block108:
	mov eax,dword ptr [esp+0x30]
	push eax

 Block109:
	mov ecx,esi
	call CCSWnd_List::SetPlateNo
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x60],5
	call ZArray<long>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call ZArray<ZRef<CS_COMMODITY_EX>>::RemoveAll
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block110:
	lea ecx,[esp+0x44]
	push 0x4ED
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x64],4
	push 0x53

 Block111:
	push ebx
	mov ecx,esi
	call CCSWnd_List::AddPicturePlate
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x60],ebp
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block113:
	push 0

 Block114:
	mov ecx,esi
	call CCSWnd_List::SetPlateNo
	mov ecx,dword ptr [esp+0x58]
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
// CCSWnd_Status::OnSetFocus
__SUB_CLASS_THIS(000C6500, __thiscall, 48952,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x9C]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CCSWnd_Status::OnKeyRet
_SUB_EXCEPTION_HANDLER(CC430)
// 4CC600
static uint8_t _SUB_CC430_LOOKUP_TABLE_0[88] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 1, 2, 3, 
};
__SUB_CLASS_THIS(000CC430, __thiscall, 48953,  CCSWnd_Status, int32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CC430
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	test dword ptr [esp+0x20],0x80000000
	jne Block18

 Block1:
	mov eax,dword ptr [esp+0x1C]
	add eax,0xFFFFFFE5
	cmp eax,0x57
	ja Block18

 Block2:
	movzx eax,byte ptr [eax+_SUB_CC430_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block9
cmp EAX, 2
je Block12
cmp EAX, 3
je Block15
cmp EAX, 4
je Block18


 Block3:
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block18

 Block4:
	push 0
	push 1
	push 0
	push 0
	lea ecx,[esp+0x30]
	push 0x261
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov dword ptr [esp+0x2C],0
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	mov eax,dword ptr [esp+0x20]
	sete bl
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test bl,bl
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3EB
	mov ecx,esi
	call eax

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block9:
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3E8
	mov ecx,esi
	call eax

 Block11:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block12:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3E9
	mov ecx,esi
	call eax

 Block14:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block15:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3EA
	mov ecx,esi
	call eax

 Block17:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block18:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret 8
}
}
// CCSWnd_List::OnButtonClicked
_SUB_EXCEPTION_HANDLER(C71D0)
__SUB_CLASS_THIS(000C71D0, __thiscall, 48827,  CCSWnd_List, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C71D0
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,0xFA0
	jne Block10

 Block1:
	push 0x98
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x1C],0
	test esi,esi
	je Block9

 Block2:
	mov ecx,esi
	call CDialog::_ctor_default
	lea eax,[esi+8]
	int 3// TODO: 	mov dword ptr [esi],offset CShortcutHelpDialog::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CShortcutHelpDialog::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax],offset CShortcutHelpDialog::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],0
	test eax,eax
	je Block9

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[esp+0x24]
	push 0xDE5
	push ecx
	mov dword ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],2
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block26

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CShortcutHelpDialog>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block9:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5

 Block10:
	lea ecx,[eax-0x7D0]
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,1
	lea eax,[edx+edx*2]
	mov edx,dword ptr [esi+edx*4+0x18C]
	sub ecx,eax
	mov edi,ecx
	test edx,edx
	jl Block26

 Block11:
	push edx
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],3
	test eax,eax
	je Block25

 Block12:
	mov ecx,edi
	sub ecx,0
	je Block24

 Block13:
	sub ecx,1
	je Block21

 Block14:
	sub ecx,1
	je Block18

 Block15:
	add eax,4
	push eax
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block16:
	mov edx,dword ptr [esp+0x10]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block26

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block18:
	mov ecx,dword ptr [esi+0x254]
	cmp dword ptr [ecx+0x53C],9
	je Block20

 Block19:
	mov eax,dword ptr [eax+0xC]
	push eax
	call CCashShop::OnSetWish
	jmp Block25

 Block20:
	mov edx,dword ptr [eax+0xC]
	push edx
	call CCashShop::OnRemoveWish
	jmp Block25

 Block21:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	jne Block23

 Block22:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+0xC]
	mov ecx,dword ptr [esi+0x254]
	push edx
	call CCashShop::OnGiftPackage
	jmp Block25

 Block23:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	call CCashShop::OnGift
	jmp Block25

 Block24:
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::ProcessBuy

 Block25:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block26:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CCSWnd_List::ShowItemToolTip
_SUB_EXCEPTION_HANDLER(C7780)
__SUB_CLASS_THIS(000C7780, __thiscall, 48846,  CCSWnd_List, int32_t, NakedParam<ZRef<CS_COMMODITY_EX>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C7780
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
	mov eax,dword ptr [esp+0x68]
	xor ebx,ebx
	mov dword ptr [esp+0x5C],ebx
	cmp eax,ebx
	je Block48

 Block1:
	cmp dword ptr [TSingleton<CWvsContext>::ms_pInstance],ebx
	je Block45

 Block2:
	cmp dword ptr [TSingleton<CItemInfo>::ms_pInstance],ebx
	je Block45

 Block3:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	jne Block8

 Block4:
	mov ebp,dword ptr [esp+0x68]
	mov eax,dword ptr [ebp+0xC]
	add eax,0xFB3B4C00
	cmp eax,0x98967F
	jbe Block9

 Block5:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	push eax
	call is_cash_package_item
	add esp,4
	test eax,eax
	jne Block8

 Block6:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block8

 Block7:
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	jmp Block48

 Block8:
	mov ebp,dword ptr [esp+0x68]

 Block9:
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [ebp+0x54],ebx
	je Block21

 Block10:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add edi,0x3F84
	mov ecx,edi
	mov dword ptr [esp+0x24],edi
	call ZArray<CS_LIMITGOODS>::GetCount
	test eax,eax
	jbe Block21

 Block11:
	mov dword ptr [esp+0x1C],ebx

 Block12:
	mov edi,dword ptr [edi]
	add edi,dword ptr [esp+0x1C]
	je Block18

 Block13:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	mov ebp,dword ptr [esp+0x68]
	cmp eax,dword ptr [edi]
	jne Block18

 Block14:
	xor eax,eax
	lea ecx,[edi+4]
	nop

 Block15:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block18

 Block16:
	cmp edx,dword ptr [ebp+0xC]
	je Block20

 Block17:
	inc eax
	add ecx,4
	cmp eax,0xA
	jl Block15

 Block18:
	mov ecx,dword ptr [esp+0x24]
	add dword ptr [esp+0x1C],0x68
	inc ebx
	call ZArray<CS_LIMITGOODS>::GetCount
	cmp ebx,eax
	jae Block21

 Block19:
	mov edi,dword ptr [esp+0x24]
	jmp Block12

 Block20:
	mov eax,dword ptr [esp+0x24]
	imul ebx,0x68
	add ebx,dword ptr [eax]
	mov dword ptr [esp+0x18],ebx

 Block21:
	lea ecx,[ebp+0x10]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	mov ecx,dword ptr [esp+0x68]
	jne Block23

 Block22:
	mov edx,dword ptr [esp+0x18]
	push edx
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call CS_COMMODITY_EX::ToOldData
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x6C],1
	call eax
	mov ecx,dword ptr [esp+0x80]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x80]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x74],0
	call CUIToolTip::SetToolTip_Package
	mov dword ptr [esp+0x14],1
	jmp Block35

 Block23:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1536
	jne Block25

 Block24:
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x494]
	mov ecx,dword ptr [esp+0x68]
	push eax
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x68],2
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x70],0
	call CUIToolTip::SetToolTip_SlotInc
	mov dword ptr [esp+0x14],1
	jmp Block35

 Block25:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x52DED8
	je Block27

 Block26:
	cmp eax,0x52E2C0
	jne Block28

 Block27:
	mov eax,dword ptr [esi+0x254]
	mov eax,dword ptr [eax+0x498]
	push eax
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ecx
	mov ecx,dword ptr [esp+0x78]
	call CS_COMMODITY_EX::ToOldData
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x68],3
	call eax
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x70],0
	call CUIToolTip::SetToolTip_SlotInc
	mov dword ptr [esp+0x14],1
	jmp Block35

 Block28:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block30

 Block29:
	mov eax,dword ptr [esi+0x254]
	mov eax,dword ptr [eax+0x490]
	push eax
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ecx
	mov ecx,dword ptr [esp+0x78]
	call CS_COMMODITY_EX::ToOldData
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x68],4
	call eax
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x70],0
	call CUIToolTip::SetToolTip_SlotInc
	mov dword ptr [esp+0x14],1
	jmp Block35

 Block30:
	mov ecx,dword ptr [esp+0x68]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call is_equipslot_ext_item
	mov ecx,dword ptr [esp+0x6C]
	add esp,4
	add ecx,0x10
	test eax,eax
	je Block40

 Block31:
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetEquipExtItem
	mov eax,dword ptr [esp+0x20]
	mov bl,5
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax+4]
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x68],6
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x70],bl
	call CUIToolTip::SetToolTip_EquipExt
	mov dword ptr [esp+0x14],1

 Block33:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],0
	call ZRef<CItemInfo::EQUIPEXTITEM>::~ZRef<CItemInfo::EQUIPEXTITEM>
	cmp dword ptr [esp+0x14],0
	jne Block35

 Block34:
	lea ecx,[esi+0x278]
	call CUIToolTip::ClearToolTip

 Block35:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block39

 Block36:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x68]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x68]
	test ecx,ecx
	je Block39

 Block38:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block39:
	mov eax,dword ptr [esp+0x14]
	jmp Block49

 Block40:
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x68]
	mov bl,7
	add ecx,0x10
	mov byte ptr [esp+0x5C],bl
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x28]
	push ecx
	push 2
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block43

 Block41:
	cmp dword ptr [esp+0x24],0xC
	jne Block43

 Block42:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax+0x20]
	mov edx,dword ptr [esp+0x18]
	push 0
	push 1
	push edx
	mov edx,dword ptr [eax+0x70]
	mov eax,dword ptr [eax+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esi+4]
	lea edi,[esi+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	call CUIToolTip::SetToolTip_Ring
	jmp Block44

 Block43:
	lea ecx,[esp+0x28]
	call CUIToolTip::ItemToolTipParam::_ctor_default
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x18]
	push 0
	push 0
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [eax+0x70]
	push 1
	push ecx
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esp+0x30]
	lea edx,[esp+0x38]
	lea edi,[esi+4]
	push edx
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	mov byte ptr [esp+0x74],8
	mov dword ptr [esp+0x4C],1
	call eax
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x278]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x5C],bl
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam

 Block44:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x5C],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block35

 Block45:
	add eax,4
	push eax
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block48

 Block46:
	mov ecx,dword ptr [esp+0x68]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,ebx
	je Block48

 Block47:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block48:
	xor eax,eax

 Block49:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x10
}
}
// CCSWnd_List::WearItem
_SUB_EXCEPTION_HANDLER(C7D80)
__SUB_CLASS_THIS(000C7D80, __thiscall, 48844,  CCSWnd_List, int32_t, NakedParam<ZRef<CS_COMMODITY>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C7D80
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
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	mov dword ptr [esp+0x14],0
	call TSecType<long>::GetData
	push eax
	call get_item_slottype_from_id
	add esp,4
	cmp eax,1
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::OnWear
	jmp Block22

 Block2:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_item_slottype_from_id
	add esp,4
	cmp eax,3
	jne Block4

 Block3:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::SetPet
	jmp Block22

 Block4:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	mov ecx,dword ptr [esp+0x24]
	add esp,4
	add ecx,0x10
	cmp eax,6
	jne Block6

 Block5:
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::SetEmotion
	jmp Block22

 Block6:
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,9
	jne Block8

 Block7:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::SetActiveEffectItem
	jmp Block22

 Block8:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	mov ecx,dword ptr [esp+0x24]
	add esp,4
	add ecx,0x10
	cmp eax,0xA
	jne Block10

 Block9:
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::ShowBullet
	jmp Block22

 Block10:
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	mov ecx,dword ptr [esp+0x24]
	add esp,4
	add ecx,0x10
	cmp eax,0x10
	jne Block12

 Block11:
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::BlowWeather
	jmp Block22

 Block12:
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,0x12
	jne Block14

 Block13:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::ShowMessageBox
	jmp Block22

 Block14:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,4
	jne Block16

 Block15:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::ShowPersonalShop
	jmp Block22

 Block16:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,0xB
	jne Block18

 Block17:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::ShowEntrustedShop
	jmp Block22

 Block18:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,0x23
	jne Block20

 Block19:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esi+0x254]
	push eax
	call CCashShop::SetColorLens
	jmp Block22

 Block20:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_cashslot_item_type
	add esp,4
	cmp eax,0x20
	jne Block27

 Block21:
	mov eax,dword ptr [esp+0x20]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0x254]
	push edx
	push eax
	call CCashShop::ShowADBoard

 Block22:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block26

 Block23:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block26

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block26:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC

 Block27:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CCSWnd_Tab::OnSetFocus
__SUB_CLASS_THIS(000C62B0, __thiscall, 48743,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB8]
	call CCashShop::RestoreFocus
	xor eax,eax
	ret 4
}
}
// CCSWnd_List::IsSameList
__SUB_CLASS_THIS0(000C6410, __thiscall, 48841,  CCSWnd_List, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x254]
	mov edx,dword ptr [ecx+0xCC8]
	cmp edx,dword ptr [eax+0x53C]
	jne Block5

 Block1:
	mov edx,dword ptr [ecx+0xCCC]
	cmp edx,dword ptr [eax+0x540]
	jne Block5

 Block2:
	mov edx,dword ptr [ecx+0xCD0]
	cmp edx,dword ptr [eax+0x544]
	jne Block5

 Block3:
	cmp dword ptr [ecx+0xCDC],0
	jne Block5

 Block4:
	mov eax,1
	ret

 Block5:
	xor eax,eax
	ret
}
}
// CCSWnd_Status::Draw
_SUB_EXCEPTION_HANDLER(CBCD0)
__SUB_CLASS_THIS(000CBCD0, __thiscall, 48951,  CCSWnd_Status, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CBCD0
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
	mov eax,dword ptr [esp+0x64]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor edi,edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+0x28]
	push 1
	push edx
	add eax,0x20
	push eax
	mov byte ptr [esp+0x68],2
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea eax,[esp+0x20]
	push eax
	call format_integer
	mov eax,dword ptr [esi+0xA0]
	mov ecx,dword ptr [eax+0x34]
	add esp,0xC
	push 1
	push ecx
	add eax,0x2C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea edx,[esp+0x1C]
	push edx
	call format_integer
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
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
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x24]
	push 0x38
	push ecx
	mov byte ptr [esp+0x6C],4
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],5
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x64],6
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],2
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x24]
	push 0x38
	push ecx
	mov byte ptr [esp+0x6C],8
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],9
	cmp ecx,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov byte ptr [esp+0x64],0xA
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],2
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov dword ptr [esp+0x64],edi
	mov esi,dword ptr [esi+0xA0]
	mov eax,dword ptr [esi+0x40]
	push 1
	push eax
	add esi,0x38
	push esi
	mov byte ptr [esp+0x68],0xB
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	call format_integer
	add esp,0xC
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov edx,dword ptr [esp+0x64]
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x6C],0xD
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0xE
	cmp ecx,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov byte ptr [esp+0x64],0xF
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],bl
	cmp eax,edi
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],0xB
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov esi,dword ptr [esp+0x20]
	cmp esi,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFFF3F4F5
	push 0xB
	push 0x6B
	push 0xB
	push 0x78
	push esi
	call eax
	cmp eax,edi
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFF3F4F5
	push 0xB
	push 0x6B
	push 0x19
	push 0x78
	push esi
	call edx
	cmp eax,edi
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFF3F4F5
	push 0xB
	push 0x6B
	push 0x28
	push 0x78
	push esi
	call ecx
	cmp eax,edi
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	lea edx,[esp+0x44]
	push edx
	call ebp
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x60],0x10
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x24]
	push 0x38
	push edx
	mov byte ptr [esp+0x6C],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,0xDC
	sub ecx,dword ptr [esp+0x34]
	push 9
	push ecx
	mov byte ptr [esp+0x74],0x13
	mov ecx,esi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],0x11
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov ebx,8
	mov byte ptr [esp+0x5C],0x10
	cmp word ptr [esp+0x34],bx
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x5C],0xB
	cmp word ptr [esp+0x44],bx
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x14
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x2C]
	push 0x38
	push edx
	mov byte ptr [esp+0x6C],0x15
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x70]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x16
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,0xDC
	sub ecx,dword ptr [esp+0x38]
	push 0x17
	push ecx
	mov byte ptr [esp+0x74],0x17
	mov ecx,esi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x5C],0x15
	cmp eax,edi
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block58:
	mov ebx,8
	mov byte ptr [esp+0x5C],0x14
	cmp word ptr [esp+0x44],bx
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x5C],0xB
	cmp word ptr [esp+0x34],bx
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x18
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push 0x3F
	push edx
	mov byte ptr [esp+0x6C],0x19
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,0xDC
	sub ecx,dword ptr [esp+0x3C]
	push 0x26
	push ecx
	mov byte ptr [esp+0x74],0x1B
	mov ecx,esi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x19
	cmp eax,edi
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block72:
	mov ebx,8
	mov byte ptr [esp+0x5C],0x18
	cmp word ptr [esp+0x44],bx
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x5C],0xB
	cmp word ptr [esp+0x34],bx
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],2
	cmp eax,edi
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],1
	cmp eax,edi
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],0
	cmp eax,edi
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CCSWnd_List::ClearPicturePlate
__SUB_CLASS_THIS0(000CCF50, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	add ecx,0xCC0
	jmp  ZArray<CCSWnd_List::PICTURE_PLATE>::RemoveAll
}
}
// CCSWnd_List::GetPlateRect
__SUB_CLASS_THIS(000C63B0, __thiscall, 48834,  CCSWnd_List, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov eax,0x99999999
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	lea eax,[ecx+eax*2]
	mov ecx,eax
	and ecx,0x80000001
	push esi
	jns Block2

 Block1:
	dec ecx
	or ecx,0xFFFFFFFE
	inc ecx

 Block2:
	mov esi,dword ptr [esp+8]
	imul ecx,0xCE
	cdq
	sub eax,edx
	sar eax,1
	imul eax,0x51
	add eax,2
	mov dword ptr [esi+4],eax
	mov dword ptr [esi],ecx
	add eax,0x50
	add ecx,0xC8
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+8],ecx
	mov eax,esi
	pop esi
	ret 8
}
}
// CCSWnd_List::OnChildNotify
__SUB_CLASS_THIS(000C6360, __thiscall, 48826,  CCSWnd_List, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3E8
	jne Block3

 Block1:
	cmp edx,0x320
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0x254]
	push eax
	call CCashShop::OnChangedPage
	ret 0xC

 Block3:
	cmp edx,0x64
	jne Block5

 Block4:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block5:
	ret 0xC
}
}
// CCSWnd_List::OnKeyRet
_SUB_EXCEPTION_HANDLER(C9460)
// 4C98CC
static uint8_t _SUB_C9460_LOOKUP_TABLE_1[27] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 3, 
};
// 4C989C
static uint8_t _SUB_C9460_LOOKUP_TABLE_0[28] = {
0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 
};
__SUB_CLASS_THIS(000C9460, __thiscall, 48831,  CCSWnd_List, int32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C9460
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
	mov edi,dword ptr [esp+0x30]
	and edi,0x80000000
	mov ebp,dword ptr [esp+0x2C]
	jne Block10

 Block1:
	call timeGetTime
	sub eax,dword ptr [CCSWnd_List::ms_KeyDownDelay]
	cmp eax,dword ptr [esi+0xCD4]
	jb Block71

 Block2:
	call timeGetTime
	mov dword ptr [esi+0xCD4],eax
	cmp ebp,0x21
	jne Block4

 Block3:
	or edx,0xFFFFFFFF
	jmp Block6

 Block4:
	cmp ebp,0x22
	jne Block11

 Block5:
	lea edx,[ebp-0x21]

 Block6:
	mov eax,dword ptr [esi+0x84]
	mov ecx,dword ptr [eax+0x38]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [esi+0xCD0]
	add eax,ecx
	add eax,edx
	cdq
	idiv ecx
	mov edi,edx
	jmp Block9

 Block8:
	xor edi,edi

 Block9:
	mov ecx,dword ptr [esi+0x254]
	push edi
	call CCashShop::OnChangedPage
	mov ecx,dword ptr [esi+0x84]
	push edi
	call CCtrlSelector::SetCurSel
	mov eax,1
	jmp Block72

 Block10:
	call timeGetTime
	sub eax,dword ptr [CCSWnd_List::ms_KeyDownDelay]
	dec eax
	mov dword ptr [esi+0xCD4],eax

 Block11:
	mov ecx,dword ptr [esi+0x254]
	call CCashShop::IsControlingUserPreview
	test eax,eax
	jne Block71

 Block12:
	test edi,edi
	jne Block71

 Block13:
	mov ecx,dword ptr [esi+0x188]
	cmp ecx,0xFFFFFFFF
	jne Block56

 Block14:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x34]
	lea ebx,[esi+4]
	mov ecx,ebx
	call eax
	mov ecx,dword ptr [esi+0x180]
	xor edx,edx
	cmp ecx,edx
	je Block71

 Block15:
	lea eax,[ebp-0xD]
	cmp eax,0x1B
	ja Block55

 Block16:
	movzx eax,byte ptr [eax+_SUB_C9460_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block48
cmp EAX, 1
je Block17
cmp EAX, 2
je Block35
cmp EAX, 3
je Block27
cmp EAX, 4
je Block43
cmp EAX, 5
je Block55


 Block17:
	cmp dword ptr [esi+0x184],edx
	jge Block19

 Block18:
	mov dword ptr [esi+0x184],edx

 Block19:
	mov eax,dword ptr [esi+0x184]
	mov edx,eax
	and edx,0x80000001
	jns Block21

 Block20:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block21:
	jne Block23

 Block22:
	inc eax
	jmp Block24

 Block23:
	dec eax

 Block24:
	cmp eax,ecx
	mov dword ptr [esi+0x184],eax
	jl Block26

 Block25:
	dec ecx
	mov dword ptr [esi+0x184],ecx

 Block26:
	mov edi,1
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xCD8],edi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block27:
	mov eax,dword ptr [esi+0x184]
	dec ecx
	cmp eax,ecx
	jne Block29

 Block28:
	cdq
	sub eax,edx
	sar eax,1
	add eax,eax
	jmp Block34

 Block29:
	mov ecx,eax
	and ecx,0x80000001
	jns Block31

 Block30:
	dec ecx
	or ecx,0xFFFFFFFE
	inc ecx

 Block31:
	cmp ecx,1
	jne Block33

 Block32:
	dec eax
	jmp Block34

 Block33:
	inc eax

 Block34:
	mov edi,1
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x184],eax
	mov dword ptr [esi+0xCD8],edi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block35:
	cmp dword ptr [esi+0x184],edx
	jge Block37

 Block36:
	mov dword ptr [esi+0x184],edx

 Block37:
	mov edi,dword ptr [esi+0x184]
	cmp edi,2
	jge Block40

 Block38:
	mov eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	lea eax,[edi+eax*2]
	cmp eax,ecx
	mov dword ptr [esi+0x184],eax
	jl Block42

 Block39:
	add eax,0xFFFFFFFE
	mov edi,1
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x184],eax
	mov dword ptr [esi+0xCD8],edi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block40:
	add edi,0xFFFFFFFE

 Block41:
	mov dword ptr [esi+0x184],edi

 Block42:
	mov edi,1
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xCD8],edi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block43:
	cmp dword ptr [esi+0x184],edx
	jge Block45

 Block44:
	mov dword ptr [esi+0x184],edx

 Block45:
	mov edi,dword ptr [esi+0x184]
	sub ecx,edi
	cmp ecx,2
	jg Block47

 Block46:
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	add eax,eax
	sub edi,eax
	jmp Block41

 Block47:
	add edi,2
	jmp Block41

 Block48:
	mov eax,dword ptr [esi+0x184]
	cmp eax,edx
	jl Block53

 Block49:
	cmp eax,ecx
	jge Block53

 Block50:
	push edx
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x188],edx
	call CCSWnd_List::SetButtonKeyFocus
	mov edx,dword ptr [esi+0x184]
	mov eax,dword ptr [esi+edx*4+0x18C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0
	test ecx,ecx
	je Block52

 Block51:
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov ecx,esi
	call CCSWnd_List::WearCommodity

 Block52:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block53:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x34]
	mov ecx,ebx
	call edx

 Block54:
	mov edi,1

 Block55:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block56:
	lea eax,[ebp-0xD]
	cmp eax,0x1A
	ja Block55

 Block57:
	movzx eax,byte ptr [eax+_SUB_C9460_LOOKUP_TABLE_1]
	cmp EAX, 0
je Block65
cmp EAX, 1
je Block64
cmp EAX, 2
je Block58
cmp EAX, 3
je Block61
cmp EAX, 4
je Block55


 Block58:
	lea eax,[ecx-1]
	mov dword ptr [esi+0x188],eax
	test eax,eax
	jge Block60

 Block59:
	mov dword ptr [esi+0x188],2

 Block60:
	mov ecx,dword ptr [esi+0x188]
	mov edx,dword ptr [esi+0x184]
	push ecx
	push edx
	mov ecx,esi
	call CCSWnd_List::SetButtonKeyFocus
	jmp Block54

 Block61:
	lea eax,[ecx+1]
	cmp eax,3
	mov dword ptr [esi+0x188],eax
	jl Block63

 Block62:
	mov dword ptr [esi+0x188],edi

 Block63:
	mov eax,dword ptr [esi+0x188]
	mov ecx,dword ptr [esi+0x184]
	push eax
	push ecx
	mov ecx,esi
	call CCSWnd_List::SetButtonKeyFocus
	jmp Block54

 Block64:
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esi+0x188],0xFFFFFFFF
	call CCSWnd_List::SetButtonKeyFocus
	mov edi,1
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xCD8],edi
	call CWnd::InvalidateRect
	mov eax,edi
	jmp Block72

 Block65:
	mov eax,dword ptr [esi+0x184]
	test eax,eax
	jl Block54

 Block66:
	cmp eax,dword ptr [esi+0x180]
	jge Block54

 Block67:
	test ecx,ecx
	jl Block54

 Block68:
	cmp ecx,3
	jge Block54

 Block69:
	lea edx,[ecx+eax*2]
	add edx,eax
	mov eax,dword ptr [esi+edx*8+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block54

 Block70:
	mov eax,dword ptr [esi+0x184]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x20]
	lea eax,[eax+eax*2]
	add eax,dword ptr [esi+0x188]
	mov ecx,dword ptr [esi+eax*8+0x8C]
	mov eax,dword ptr [ecx+0x14]
	push eax
	mov ecx,esi
	call edx
	jmp Block54

 Block71:
	xor eax,eax

 Block72:
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
// CCSWnd_List::GetCommodityGender
_SUB_EXCEPTION_HANDLER(C80A0)
__SUB_CLASS_THIS(000C80A0, __thiscall, 48840,  CCSWnd_List, long, NakedParam<ZRef<CS_COMMODITY>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C80A0
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
	mov eax,dword ptr [esp+0x30]
	mov esi,dword ptr [eax+0x48]
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	cmp esi,2
	je Block5

 Block1:
	add eax,4
	push eax
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x30]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov eax,esi
	jmp Block28

 Block5:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov ecx,dword ptr [esp+0x30]
	add ecx,0x10
	test eax,eax
	je Block8

 Block6:
	call TSecType<long>::GetData
	push eax
	call get_gender_from_id
	add esp,4
	mov esi,eax

 Block7:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,esi
	jmp Block28

 Block8:
	call TSecType<long>::GetData
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	jne Block22

 Block9:
	xor edi,edi

 Block10:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ecx+0x68]
	cmp eax,ebx
	je Block23

 Block11:
	cmp edi,dword ptr [eax-4]
	jae Block23

 Block12:
	mov edx,eax
	lea eax,[edx+edi*4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCommodityBySN
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x10
	mov byte ptr [esp+0x24],1
	call TSecType<long>::GetData
	test eax,eax
	je Block15

 Block13:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call get_gender_from_id
	mov esi,eax
	add esp,4
	cmp esi,2
	jne Block21

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block20

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	mov edx,dword ptr [esp+0x18]
	add edx,4
	push edx
	call ebp
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	je Block19

 Block18:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block19:
	mov dword ptr [esp+0x18],ebx

 Block20:
	inc edi
	jmp Block10

 Block21:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x24],bl
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	jmp Block7

 Block22:
	mov ecx,dword ptr [esp+0x30]

 Block23:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp ecx,ebx
	je Block27

 Block24:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x30]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov eax,2

 Block28:
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
// CCSWnd_List::WearCommodity
_SUB_EXCEPTION_HANDLER(C85E0)
__SUB_CLASS_THIS(000C85E0, __thiscall, 48842,  CCSWnd_List, void, NakedParam<ZRef<CS_COMMODITY>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C85E0
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
	mov ecx,dword ptr [esp+0x34]
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	add ecx,0x10
	mov dword ptr [esp+0x28],ebx
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	mov ecx,dword ptr [esp+0x34]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	jne Block19

 Block1:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x1C],esp
	cmp eax,ebx
	je Block3

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	mov ecx,ebp
	call CCSWnd_List::GetCommodityGender
	mov ecx,dword ptr [edi+0x2034]
	cmp eax,2
	je Block6

 Block4:
	cmp eax,ecx
	je Block6

 Block5:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	jmp Block26

 Block6:
	xor esi,esi
	nop

 Block7:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+0x68]
	cmp ecx,ebx
	je Block22

 Block8:
	cmp esi,dword ptr [ecx-4]
	jae Block22

 Block9:
	mov edx,ecx
	lea eax,[edx+esi*4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCommodityBySN
	mov edx,dword ptr [esp+0x1C]
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],1
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block11

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,ebp
	call CCSWnd_List::WearItem
	cmp eax,ebx
	je Block13

 Block12:
	mov eax,dword ptr [ebp+0x254]
	mov dword ptr [eax+0x4E8],1

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block18

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block17

 Block16:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block17:
	mov dword ptr [esp+0x1C],ebx

 Block18:
	inc esi
	jmp Block7

 Block19:
	push ebx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebx
	je Block21

 Block20:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,ebp
	call CCSWnd_List::WearItem
	mov eax,dword ptr [esp+0x34]

 Block22:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block23:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	mov edx,dword ptr [esp+0x34]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebx
	je Block26

 Block25:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block26:
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
// CCSWnd_Best::~CCSWnd_Best
__SUB_CLASS_THIS0(000C6680, __thiscall, 48925,  CCSWnd_Best, void) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x94]
	mov eax,dword ptr [eax+0x53C]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x2034]
	push ebp
	push esi
	push edi
	cmp eax,9
	je Block2

 Block1:
	mov edx,dword ptr [ebx+0x94]
	cmp dword ptr [edx+0x53C],0xA
	jne Block3

 Block2:
	mov eax,1

 Block3:
	lea eax,[ecx+eax*2]
	mov esi,eax
	shl esi,4
	sub esi,eax
	add esi,esi
	add esi,esi
	lea edi,[ebx+0x80]
	mov ebp,5

 Block4:
	mov ecx,dword ptr [ebx+0x94]
	lea eax,[esi+ecx+0x5C]
	push eax
	call CCashShop::GetUsableCommodityIndexBySN
	mov dword ptr [edi],eax
	add esi,0xC
	add edi,4
	sub ebp,1
	jne Block4

 Block5:
	push ebp
	mov ecx,ebx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CItemSearchDlg::GetResult
_SUB_EXCEPTION_HANDLER(C8860)
__SUB_CLASS_THIS(000C8860, __thiscall, 144885,  CItemSearchDlg, void, ZXString<char>&, long&, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C8860
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
	mov ecx,dword ptr [edi+0xA4]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push 0
	push 0
	mov ecx,esi
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block3:
	cmp byte ptr [eax],0
	je Block8

 Block4:
	push 1
	push 0
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esi]
	add esp,4
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block8:
	mov ecx,dword ptr [edi+0xAC]
	mov eax,dword ptr [ecx+0x68]
	test eax,eax
	jne Block10

 Block9:
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx],eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [eax],0x7FFFFFFF
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC

 Block10:
	mov ecx,dword ptr [edi+0xB0]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [edx+eax*8-8]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [edi+0xB0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+eax*8-4]
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CItemSearchDlg::~CItemSearchDlg
_SUB_EXCEPTION_HANDLER(C6C10)
__SUB_CLASS_THIS0(000C6C10, __thiscall, 144882,  CItemSearchDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C6C10
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
	int 3// TODO: 	mov dword ptr [esi],offset CItemSearchDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CItemSearchDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CItemSearchDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xA8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
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
// CShortcutHelpDialog::OnCreate
_SUB_EXCEPTION_HANDLER(C9050)
__SUB_CLASS_THIS(000C9050, __thiscall, 144956,  CShortcutHelpDialog, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C9050
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
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0xDDD
	push eax
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block6:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block14

 Block7:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x148
	push 0x82
	push 1
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block14:
	xor edi,edi
	jmp Block9
}
}
// CCSWnd_Status::~CCSWnd_Status
_SUB_EXCEPTION_HANDLER(812F0)
__SUB_CLASS_THIS0(000812F0, __thiscall, 48946,  CCSWnd_Status, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_812F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_Status::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_Status::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_Status::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0x98]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
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
// CCSWnd_Tab::GetTabIndex
__SUB_CLASS_THIS(000C62C0, __thiscall, 48745,  CCSWnd_Tab, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFEA
	cmp eax,0x1E
	ja Block11

 Block1:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [ecx+0xB8]
	mov eax,1
	lea esp,[esp]

 Block2:
	cmp eax,esi
	jge Block4

 Block3:
	mov ecx,edx
	sub ecx,dword ptr [eax*8+_D_S_NCSW_TAB_LEFT]
	jmp Block6

 Block4:
	jle Block8

 Block5:
	mov ecx,edx
	sub ecx,dword ptr [eax*8+_D_S_NCSW_TAB_LEFT+4]

 Block6:
	test ecx,ecx
	jl Block8

 Block7:
	cmp ecx,0x33
	jl Block10

 Block8:
	inc eax
	cmp eax,9
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
// CCSWnd_List::Update
_SUB_EXCEPTION_HANDLER(C84B0)
__SUB_CLASS_THIS0(000C84B0, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C84B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call timeGetTime
	xor ebx,ebx
	cmp dword ptr [esi+0xCD8],ebx
	je Block9

 Block1:
	sub eax,dword ptr [esi+0xCD4]
	cmp eax,dword ptr [CCSWnd_List::ms_ToolTipPopUpDelay]
	jbe Block9

 Block2:
	mov eax,dword ptr [esi+0x184]
	cmp eax,ebx
	jl Block8

 Block3:
	cmp eax,dword ptr [esi+0x180]
	jge Block8

 Block4:
	cmp dword ptr [esi+eax*4+0x18C],ebx
	jl Block8

 Block5:
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	mov dword ptr [esp+0x38],ebx
	cmp ecx,ebx
	je Block7

 Block6:
	mov eax,dword ptr [esi+eax*4+0x18C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CWvsCommodityEx::GetCommodityExByIndex
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],1
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],bl
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block7:
	mov eax,dword ptr [esi+0x184]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CCSWnd_List::GetPlateRect
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x20]
	add edx,0xFFFFFFE7
	push edx
	add eax,0x37
	push eax
	sub esp,8
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZRef<CS_COMMODITY_EX>::_ctor_copy
	mov ecx,esi
	call CCSWnd_List::ShowItemToolTip
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>

 Block8:
	mov dword ptr [esi+0xCD8],ebx

 Block9:
	mov ecx,esi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x30
	ret
}
}
// CCSWnd_Tab::Draw
_SUB_EXCEPTION_HANDLER(C68A0)
__SUB_CLASS_THIS(000C68A0, __thiscall, 48742,  CCSWnd_Tab, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C68A0
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
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x24],1
	cmp eax,8
	jne Block4

 Block3:
	mov eax,1
	jmp Block9

 Block4:
	cmp eax,9
	jne Block6

 Block5:
	jmp Block9

 Block6:
	cmp eax,0xA
	jne Block8

 Block7:
	mov eax,1
	jmp Block9

 Block8:
	inc eax

 Block9:
	mov ecx,dword ptr [esi+eax*4+0x90]
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edi,dword ptr [esp+0xC]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x2C]
	push 0
	push 2
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	cmp word ptr [esp+0xC],8
	mov byte ptr [esp+0x24],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CCSWnd_List::SetPlateNo
_SUB_EXCEPTION_HANDLER(C9B40)
__SUB_CLASS_THIS(000C9B40, __thiscall, 48832,  CCSWnd_List, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C9B40
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [esp+0x98]
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [ebp+0x17C]
	mov dword ptr [ebp+0x180],eax
	cmp ecx,edi
	je Block3

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [ebp+0x17C],edi
	lea esi,[ebp+0x178]
	je Block3

 Block2:
	push edi
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],edi

 Block3:
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x68],1
	mov dword ptr [esp+0x6C],edi
	mov dword ptr [esp+0x70],edi
	mov eax,dword ptr [ebp+0x254]
	mov ecx,dword ptr [eax+0x53C]
	mov dword ptr [esp+0x90],edi
	cmp ecx,8
	jne Block11

 Block4:
	cmp dword ptr [eax+0x540],edi
	jne Block11

 Block5:
	lea ecx,[esp+0x20]
	push 0xDDC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x94],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x90],0
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x90],2
	cmp eax,edi
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[ebp+0x178]
	mov byte ptr [esp+0x94],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [ebp+0x17C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x68]
	push eax
	push edi
	push 0x17C
	push 0x96
	push 0xFA0
	push ebp
	call edx
	jmp Block14

 Block11:
	mov ecx,dword ptr [ebp+0x17C]
	cmp ecx,edi
	je Block14

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [ebp+0x17C],edi
	lea esi,[ebp+0x178]
	je Block14

 Block13:
	push edi
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],edi

 Block14:
	mov dword ptr [esp+0x1C],edi
	lea eax,[ebp+0x8C]

 Block15:
	xor edi,edi
	mov ebx,eax

 Block16:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block26

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	mov eax,dword ptr [esp+0x1C]
	add eax,edi
	lea esi,[ebp+eax*8+0x88]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block26

 Block18:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block19:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block21

 Block20:
	add eax,8
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block25

 Block23:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block25

 Block24:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block25:
	mov dword ptr [esi+4],0

 Block26:
	inc edi
	add ebx,8
	cmp edi,3
	jl Block16

 Block27:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,3
	cmp ecx,0x1E
	mov dword ptr [esp+0x1C],ecx
	mov eax,ebx
	jl Block15

 Block28:
	xor ebx,ebx
	cmp dword ptr [ebp+0x180],ebx
	mov dword ptr [esp+0x20],ebx
	jle Block189

 Block29:
	mov ebp,dword ptr [esp+0x18]
	push ebx
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,ebp
	call CCSWnd_List::GetPlateRect
	lea edx,[esp+0x24]
	push 0x4EF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x94],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x90],4
	test eax,eax
	je Block33

 Block32:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	lea ecx,[ebx+ebx*2]
	mov byte ptr [esp+0x90],0
	lea esi,[ebp+ecx*8]
	test eax,eax
	je Block46

 Block35:
	add eax,8
	je Block46

 Block36:
	lea edi,[eax-8]
	test edi,edi
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	test eax,eax
	je Block42

 Block39:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	lea ecx,[edi+4]
	push ecx
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
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	add eax,0x35
	lea edi,[esp+0x68]
	push edi
	push 0
	push eax
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x84]
	add eax,0x50
	push eax
	lea eax,[ebx+ebx*2+0x7D0]
	push eax
	push ebp
	call edx
	lea eax,[esp+0x28]
	push 0x4F0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x94],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x90],6
	test eax,eax
	je Block47

 Block45:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block48

 Block46:
	xor edi,edi
	jmp Block38

 Block47:
	xor eax,eax

 Block48:
	mov edx,dword ptr [esp+0x18]
	lea ecx,[ebx+ebx*2+0x12]
	mov byte ptr [esp+0x90],0
	lea ebp,[edx+ecx*8]
	test eax,eax
	je Block58

 Block49:
	add eax,8
	je Block58

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],edi
	test eax,eax
	je Block56

 Block53:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block56

 Block54:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block56

 Block55:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block56:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov ebp,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x68]
	push edx
	mov edx,dword ptr [esp+0x20]
	push 0
	push edx
	mov edx,dword ptr [esp+0x84]
	add edx,0x77
	push edx
	lea edx,[ebx+ebx*2+0x7D1]
	push edx
	push ebp
	call eax
	mov ecx,dword ptr [ebp+0x254]
	cmp dword ptr [ecx+0x53C],9
	je Block59

 Block57:
	lea edx,[esp+0x30]
	push 0x4F1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	or dword ptr [esp+0x14],1
	mov byte ptr [esp+0x90],7
	jmp Block60

 Block58:
	xor edi,edi
	jmp Block52

 Block59:
	lea eax,[esp+0x2C]
	push 0x4F2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	or dword ptr [esp+0x14],2
	mov dword ptr [esp+0x90],8

 Block60:
	push eax
	lea ecx,[esp+0x78]
	call ZXString16::op_assign
	test byte ptr [esp+0x14],2
	mov dword ptr [esp+0x90],7
	je Block63

 Block61:
	mov eax,dword ptr [esp+0x2C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x90],0
	je Block66

 Block64:
	mov eax,dword ptr [esp+0x30]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block66:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x90],9
	test eax,eax
	je Block68

 Block67:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block69

 Block68:
	xor eax,eax

 Block69:
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block80

 Block70:
	add eax,8
	je Block80

 Block71:
	lea edi,[eax-8]
	test edi,edi
	je Block73

 Block72:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block73:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	test eax,eax
	je Block77

 Block74:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block75:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block77

 Block76:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block77:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [esp+0x20]
	push 0
	push eax
	mov eax,dword ptr [esp+0x84]
	add eax,0x9E
	push eax
	lea eax,[ebx+ebx*2+0x7D2]
	push eax
	push ebp
	call edx
	mov eax,dword ptr [ebp+ebx*4+0x18C]
	test eax,eax
	jl Block188

 Block78:
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	lea eax,[esp+0x3C]
	push eax
	call CWvsCommodityEx::GetCommodityExByIndex
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x90],0xA
	test ecx,ecx
	jne Block81

 Block79:
	mov byte ptr [esp+0x90],cl
	jmp Block188

 Block80:
	xor edi,edi
	jmp Block73

 Block81:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [esp+0x28],edi
	call CS_COMMODITY_EX::ToOldData
	mov ecx,ebp
	call CCSWnd_List::GetCommodityGender
	cmp eax,0xFFFFFFFF
	je Block85

 Block82:
	mov ecx,dword ptr [edi+0x2034]
	cmp eax,2
	je Block85

 Block83:
	cmp eax,ecx
	je Block85

 Block84:
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block85:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B70
	jne Block87

 Block86:
	cmp ecx,0x10F7C0
	jne Block89

 Block87:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B78
	jne Block90

 Block88:
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	sub ecx,edx
	cmp ecx,2
	jg Block90

 Block89:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block90:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x5265C0
	je Block92

 Block91:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x5269A8
	jne Block93

 Block92:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block93:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x4FAE70
	je Block97

 Block94:
	cmp eax,0x4FA6B0
	je Block97

 Block95:
	cmp eax,0x4FA6B1
	je Block97

 Block96:
	cmp eax,0x4FA6B2
	jne Block98

 Block97:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block98:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x4FA6AC
	jne Block100

 Block99:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block100:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,0x4F5889
	je Block102

 Block101:
	cmp eax,0x4F588A
	jne Block103

 Block102:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block103:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0xC]
	add ecx,0xFB3B4C00
	cmp ecx,0x98967F
	jbe Block105

 Block104:
	cmp dword ptr [eax+0x20],0
	jne Block106

 Block105:
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esp+0x3C]

 Block106:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1FB
	jne Block114

 Block107:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x35]
	push edx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x98],0xB
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	mov eax,dword ptr [esp+0x44]
	setbe bl
	mov byte ptr [esp+0x90],0xA
	test eax,eax
	je Block112

 Block108:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block111

 Block109:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block111

 Block110:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block111:
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x44],0

 Block112:
	test bl,bl
	je Block114

 Block113:
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block114:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x202
	je Block116

 Block115:
	cmp eax,0x1F7
	jne Block128

 Block116:
	lea eax,[esp+0x48]
	push eax
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	or dword ptr [esp+0x14],4
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x98],0xC
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	jbe Block119

 Block117:
	mov ecx,edi
	call CWvsContext::IsNewAccount
	test eax,eax
	jne Block119

 Block118:
	xor bl,bl
	jmp Block120

 Block119:
	mov bl,1

 Block120:
	test byte ptr [esp+0x14],4
	mov dword ptr [esp+0x90],0xA
	je Block126

 Block121:
	mov eax,dword ptr [esp+0x4C]
	and dword ptr [esp+0x14],0xFFFFFFFB
	test eax,eax
	je Block126

 Block122:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block125

 Block123:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block125

 Block124:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block125:
	mov dword ptr [esp+0x4C],0

 Block126:
	test bl,bl
	je Block128

 Block127:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block128:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1F8
	jne Block136

 Block129:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x50]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x98],0xD
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,7
	mov eax,dword ptr [esp+0x54]
	setb bl
	mov byte ptr [esp+0x90],0xA
	test eax,eax
	je Block134

 Block130:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block133

 Block131:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block133

 Block132:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block133:
	mov dword ptr [esp+0x54],0

 Block134:
	test bl,bl
	je Block136

 Block135:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block136:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x21B
	jne Block149

 Block137:
	mov edi,dword ptr [esp+0x1C]
	lea edx,[esp+0x58]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	or dword ptr [esp+0x14],8
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x98],0xE
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	jbe Block140

 Block138:
	mov ecx,edi
	call CWvsContext::IsNewAccount
	test eax,eax
	jne Block140

 Block139:
	xor bl,bl
	jmp Block141

 Block140:
	mov bl,1

 Block141:
	test byte ptr [esp+0x14],8
	mov dword ptr [esp+0x90],0xA
	je Block147

 Block142:
	mov eax,dword ptr [esp+0x5C]
	and dword ptr [esp+0x14],0xFFFFFFF7
	test eax,eax
	je Block147

 Block143:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block146

 Block144:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block146

 Block145:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block146:
	mov dword ptr [esp+0x5C],0

 Block147:
	test bl,bl
	je Block149

 Block148:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block149:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x208
	jne Block157

 Block150:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x60]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x98],0xF
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	mov eax,dword ptr [esp+0x64]
	setbe bl
	mov byte ptr [esp+0x90],0xA
	test eax,eax
	je Block155

 Block151:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block154

 Block152:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block154

 Block153:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block154:
	mov dword ptr [esp+0x64],0

 Block155:
	test bl,bl
	je Block157

 Block156:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block157:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx+0x2064],0
	jne Block160

 Block158:
	mov edx,dword ptr [esp+0x3C]
	cmp dword ptr [edx+0x40],0
	je Block160

 Block159:
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block160:
	mov ebx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+edi*4+0x1B4]
	cmp eax,1
	je Block162

 Block161:
	cmp eax,2
	jne Block163

 Block162:
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block163:
	mov eax,dword ptr [ebx+edi*4+0x1DC]
	cmp eax,1
	je Block165

 Block164:
	cmp eax,2
	jne Block166

 Block165:
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x94]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block166:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38F
	je Block170

 Block167:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1536
	je Block170

 Block168:
	cmp ecx,0x52DED8
	je Block170

 Block169:
	cmp ecx,0x52E2C0
	jne Block171

 Block170:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block171:
	mov ecx,dword ptr [esp+0x3C]
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
	jne Block173

 Block172:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block173:
	mov ecx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [ecx+0xC]
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD2
	je Block175

 Block174:
	cmp ecx,0x560F40
	jne Block176

 Block175:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block176:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ecx+0x54]
	cmp eax,2
	je Block178

 Block177:
	cmp eax,3
	jne Block180

 Block178:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov ecx,dword ptr [ebx+0x254]
	cmp dword ptr [ecx+0x53C],9
	je Block180

 Block179:
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block180:
	mov eax,dword ptr [esp+0x3C]
	cmp dword ptr [eax+0x4C],0
	jne Block183

 Block181:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x90],0
	test eax,eax
	je Block188

 Block182:
	jmp Block184

 Block183:
	mov byte ptr [esp+0x90],0

 Block184:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block187

 Block185:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	je Block187

 Block186:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block187:
	mov dword ptr [esp+0x3C],0

 Block188:
	mov ebx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x18]
	inc ebx
	cmp ebx,dword ptr [ecx+0x180]
	mov dword ptr [esp+0x20],ebx
	jl Block29

 Block189:
	mov ecx,dword ptr [esp+0x18]
	call CCSWnd_List::ResetSlotIncComm
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block191:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 4
}
}
// CCSWnd_Tab::OnKey
__SUB_CLASS_THIS(000C8310, __thiscall, 48740,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	add ecx,0xFFFFFFFC
	jmp  CCSWnd_Tab::OnKeyRet
}
}
// CCSWnd_Best::OnCreate
__SUB_CLASS_THIS(000C6820, __thiscall, 48926,  CCSWnd_Best, void, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x94],eax
	call CCSWnd_Best::ChangeCategory
	ret 4
}
}
// CCSWnd_List::OnMouseWheel
__SUB_CLASS_THIS(000C6550, __thiscall, 48824,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x80]
	mov ecx,dword ptr [eax+0x38]
	push edi
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [esi+0xCCC]
	add eax,ecx
	add eax,dword ptr [esp+0x14]
	cdq
	idiv ecx
	mov edi,edx
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ecx,dword ptr [esi+0x250]
	cmp dword ptr [ecx+0x53C],8
	je Block5

 Block4:
	push edi
	call CCashShop::OnChangedPage

 Block5:
	mov ecx,dword ptr [esi+0x80]
	push edi
	call CCtrlSelector::SetCurSel
	pop edi
	mov eax,1
	pop esi
	ret 0xC
}
}
// CCSWnd_List::~CCSWnd_List
_SUB_EXCEPTION_HANDLER(CD8B0)
__SUB_CLASS_THIS0(000CD8B0, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CD8B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_List::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_List::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_List::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xCC4]
	mov dword ptr [esp+0x18],0xA
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xCC0]
	mov byte ptr [esp+0x18],9
	call ZArray<CCSWnd_List::PICTURE_PLATE>::RemoveAll
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x18],8
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x274]
	mov byte ptr [esp+0x18],7
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x270]
	mov byte ptr [esp+0x18],6
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [esi+0x26C]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0x25C]
	push eax
	mov byte ptr [esp+0x28],4
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x258]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0x17C],0
	lea edi,[esi+0x178]
	mov byte ptr [esp+0x18],2
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0x1E
	push 8
	lea eax,[esi+0x88]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],0
	je Block8

 Block7:
	push 0
	mov ecx,edi
	call ZRef<CCtrlSelector>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block8:
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
// CCSWnd_List::Draw
_SUB_EXCEPTION_HANDLER(CDA10)
__SUB_CLASS_THIS(000CDA10, __thiscall, 48828,  CCSWnd_List, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CDA10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x27C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x58],edi
	mov eax,dword ptr [ebp+0x70]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp+0x48],ebx
	call CWnd::Draw
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [ebp-4],ebx
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi+0x24]
	mov edx,dword ptr [esi]
	push 0xFFFFFF
	push 0x19A
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ebx
	push ebx
	push esi
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [edi+0xCE4],ebx
	jne Block7

 Block5:
	mov ecx,edi
	call CCSWnd_List::IsSameList
	test eax,eax
	je Block7

 Block6:
	xor eax,eax
	jmp Block8

 Block7:
	mov eax,1

 Block8:
	mov dword ptr [ebp-0x44],eax
	mov dword ptr [edi+0xCE4],ebx
	cmp eax,ebx
	je Block10

 Block9:
	lea ecx,[edi+0x270]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[edi+0x274]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll

 Block10:
	mov eax,dword ptr [edi+0x254]
	mov ecx,dword ptr [eax+0x53C]
	cmp ecx,1
	jne Block13

 Block11:
	cmp dword ptr [eax+0x540],2
	je Block409

 Block12:
	mov edi,dword ptr [ebp+0x58]

 Block13:
	cmp dword ptr [edi+0x180],0
	mov ebx,dword ptr [ZImports::_VariantInit]
	jne Block45

 Block14:
	mov eax,dword ptr [edi+0xCC0]
	test eax,eax
	je Block45

 Block15:
	cmp dword ptr [eax-4],0
	jbe Block45

 Block16:
	mov dword ptr [ebp+0x54],0
	xor esi,esi
	jmp Block18

 Block18:
	mov eax,dword ptr [edi+0xCC0]
	test eax,eax
	je Block45

 Block19:
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,dword ptr [eax-4]
	jae Block45

 Block20:
	lea edx,[ebp-0x3C]
	mov edi,eax
	push edx
	add edi,esi
	call ebx
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block21:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],1
	call ebx
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block22:
	push 0
	push 0
	lea eax,[ebp-0x3C]
	push eax
	mov eax,dword ptr [edi+8]
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	je Block1

 Block23:
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block25

 Block24:
	cmp eax,0x80004002
	jne Block44

 Block25:
	mov ebx,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x60],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],bx
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x3C],bx
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0xFF
	mov ebx,dword ptr [ebp+0x50]
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edi]
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	push ebx
	push edx
	push eax
	mov byte ptr [ebp-4],9
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],8
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block43

 Block42:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block43:
	inc dword ptr [ebp+0x54]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ebp+0x58]
	add esi,0xC
	jmp Block18

 Block44:
	push eax
	call _com_issue_error

 Block45:
	cmp dword ptr [edi+0x180],0
	mov dword ptr [ebp+0x3C],0
	jle Block63

 Block46:
	mov esi,dword ptr [ebp+0x58]

 Block47:
	mov edx,dword ptr [ebp+0x3C]
	push edx
	lea eax,[ebp-0xF0]
	push eax
	mov ecx,esi
	call CCSWnd_List::GetPlateRect
	mov ecx,3
	mov word ptr [ebp+0x10],cx
	mov ecx,0xFF
	mov dword ptr [ebp+0x18],ecx
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+0x10]
	mov edx,dword ptr [esi+0x258]
	mov ebx,dword ptr [ebp-0xF0]
	sub esp,0x10
	mov dword ptr [ebp+0x5C],eax
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0xEC]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x1C]
	push edx
	mov edx,dword ptr [ebp+0x60]
	push edi
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+0x80]
	push ebx
	push edx
	mov byte ptr [ebp-4],0xA
	call eax
	test eax,eax
	jge Block49

 Block48:
	mov ecx,dword ptr [ebp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block49:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov ecx,dword ptr [esi+0x254]
	call CCashShop::IsControlingUserPreview
	test eax,eax
	jne Block62

 Block54:
	mov ecx,dword ptr [ebp+0x3C]
	cmp ecx,dword ptr [esi+0x184]
	jne Block62

 Block55:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp],dx
	mov dword ptr [ebp+8],ecx
	mov edx,dword ptr [esi+0x26C]
	mov eax,dword ptr [ebp+0x60]
	mov esi,dword ptr [eax]
	sub esp,0x10
	mov eax,esp
	add ebx,4
	mov dword ptr [ebp+0x5C],ebx
	mov ebx,dword ptr [ebp]
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+4]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	add edi,4
	push edi
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi+0x80]
	push edx
	push eax
	mov byte ptr [ebp-4],0xB
	call ecx
	test eax,eax
	jge Block57

 Block56:
	mov edx,dword ptr [ebp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block57:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov esi,dword ptr [ebp+0x58]

 Block62:
	mov eax,dword ptr [ebp+0x3C]
	inc eax
	cmp eax,dword ptr [esi+0x180]
	mov dword ptr [ebp+0x3C],eax
	jl Block47

 Block63:
	mov edx,dword ptr [ebp+0x58]
	xor edi,edi
	cmp dword ptr [edx+0x180],edi
	mov dword ptr [ebp+0x3C],edi
	jle Block409

 Block64:
	mov esi,edx

 Block65:
	mov ebx,dword ptr [ebp+0x60]
	push edi
	lea eax,[ebp+0x20]
	push eax
	mov ecx,esi
	call CCSWnd_List::GetPlateRect
	mov eax,dword ptr [esi+edi*4+0x18C]
	test eax,eax
	jl Block408

 Block66:
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	jne Block68

 Block67:
	mov byte ptr [ebp-4],al
	jmp Block408

 Block68:
	mov dword ptr [ebp+0x38],0
	lea ecx,[eax+0x10]
	mov byte ptr [ebp-4],0xD
	call TSecType<long>::GetData
	mov esi,dword ptr [ebp+0x24]
	mov edi,dword ptr [ebp+0x20]
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x5B
	jne Block70

 Block69:
	push 1
	push 1
	lea ecx,[esi+0x49]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[edi+7]
	push edx
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x5C],esp
	push ebx
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawSpecialIconForSlot
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea edx,[ebp-0x120]
	push edx
	call CWvsContext::GetCashPackageName
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x120]
	jmp Block71

 Block70:
	push 2
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	lea eax,[esi+0x49]
	push eax
	lea ecx,[edi+7]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x5C],esp
	push ebx
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0xFC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0xFC]

 Block71:
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0x10
	call TSecType<long>::GetData
	push 2
	push 0xE
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block76

 Block74:
	lea edx,[ebp-0x128]
	push 0x24F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x38]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x128]
	add esp,0xC
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push 0x70
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 1
	push eax
	call get_basic_font
	lea ecx,[ebp+0x38]
	add esp,8
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp-0x14C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x14C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block77:
	lea ecx,[ebp-0x13C]
	push ecx
	mov byte ptr [ebp-4],0x11
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x13C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block78:
	lea eax,[ebp-0x14C]
	push eax
	lea ecx,[ebp-0x13C]
	push ecx
	lea edx,[ebp-0x110]
	push 1
	push edx
	mov byte ptr [ebp-4],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x38]
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_0
	lea ecx,[esi+6]
	push ecx
	lea eax,[edi+0x52]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x110]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x13C],di
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x134]
	xor ecx,ecx
	mov word ptr [ebp-0x13C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp-0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x14C],di
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp-0x14C],ax
	mov eax,dword ptr [ebp-0x144]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp-0x14C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	cmp dword ptr [ebp-0x44],0
	je Block103

 Block89:
	mov edx,dword ptr [ebp+0x58]
	mov eax,dword ptr [edx+0x254]
	cmp dword ptr [eax+0x53C],9
	je Block103

 Block90:
	mov ecx,dword ptr [ebp+0x44]
	cmp dword ptr [ecx+0x64],0
	jle Block92

 Block91:
	mov edi,3
	jmp Block93

 Block92:
	mov edi,dword ptr [ecx+0x50]
	test edi,edi
	jl Block100

 Block93:
	xor eax,eax
	cmp edi,3
	ja Block98

 Block94:
	cmp EDI, 0
je Block95
cmp EDI, 1
je Block96
cmp EDI, 2
je Block95
cmp EDI, 3
je Block97


 Block95:
	mov eax,0x37
	jmp Block98

 Block96:
	mov eax,0x46
	jmp Block98

 Block97:
	mov eax,0x3F

 Block98:
	cmp dword ptr [ecx+0x54],0
	jne Block102

 Block99:
	mov ecx,dword ptr [ebp+0x20]
	push edi
	sub ecx,eax
	add ecx,0x48
	push esi
	push ecx
	mov ecx,edx
	call CCSWnd_List::AddClassIconLayer
	mov ecx,dword ptr [ebp+0x44]

 Block100:
	cmp dword ptr [ecx+0x54],0
	jne Block102

 Block101:
	cmp edi,4
	jne Block103

 Block102:
	mov edx,dword ptr [ebp+0x20]
	mov ecx,dword ptr [ebp+0x58]
	add esi,3
	push esi
	add edx,3
	push edx
	call CCSWnd_List::AddLimitIconLayer

 Block103:
	xor esi,esi
	int 3// TODO: 	mov dword ptr [ebp-0x200],offset ZList<long>::`vftable'
	mov dword ptr [ebp-0x1F8],esi
	mov dword ptr [ebp-0x1F4],esi
	mov dword ptr [ebp-0x1F0],esi
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea eax,[ebp-0x200]
	push eax
	mov byte ptr [ebp-4],0x15
	call CItemInfo::GetHalloweenItem
	mov eax,dword ptr [ebp-0x1F4]
	mov dword ptr [ebp+0x54],eax
	cmp eax,esi
	je Block133

 Block104:
	lea ecx,[ebp+0x54]
	push ecx
	call ZList<long>::GetNext
	mov ecx,dword ptr [ebp+0x44]
	mov edi,dword ptr [eax]
	add esp,4
	add ecx,0x10
	call TSecType<long>::GetData
	cmp eax,edi
	jne Block131

 Block105:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x15C]
	push edx
	call esi
	lea eax,[ebp-0x15C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block106:
	lea ecx,[ebp-0x1EC]
	push ecx
	mov byte ptr [ebp-4],0x16
	call esi
	lea edx,[ebp-0x1EC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block107:
	push 0
	push 0
	lea eax,[ebp-0x15C]
	push eax
	lea ecx,[ebp-0x1EC]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xC5E
	push edx
	mov byte ptr [ebp-4],0x17
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x18
	je Block1

 Block108:
	lea eax,[ebp-0x210]
	mov byte ptr [ebp-4],0x17
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x50],0
	test eax,eax
	je Block111

 Block109:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xF4]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xF4]
	mov dword ptr [ebp+0x50],ecx
	test eax,eax
	jge Block111

 Block110:
	cmp eax,0x80004002
	jne Block44

 Block111:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x210],si
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x208]
	xor edx,edx
	mov word ptr [ebp-0x210],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[ebp-0x210]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x1EC],si
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x1E4]
	xor ecx,ecx
	mov word ptr [ebp-0x1EC],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x1EC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x15C],si
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp-0xB0],dx
	mov dword ptr [ebp-0xA8],ecx
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp-0xB0]
	mov edx,dword ptr [ebp+0x24]
	mov ebx,dword ptr [ebp+0x50]
	mov edi,dword ptr [ebp+0x20]
	sub esp,0x10
	mov dword ptr [ebp+0x5C],eax
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0xAC]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xA4]
	push ebx
	add edx,0x36
	push edx
	add edi,8
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax+0x80]
	push edi
	push esi
	mov byte ptr [ebp-4],0x1E
	call edx
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block125:
	cmp word ptr [ebp-0xB0],8
	mov byte ptr [ebp-4],0x1D
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [ebp-0xB0],ax
	mov eax,dword ptr [ebp-0xA8]
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[ebp-0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov esi,1
	mov byte ptr [ebp-4],0x15
	test ebx,ebx
	je Block131

 Block130:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block131:
	cmp dword ptr [ebp+0x54],0
	jne Block104

 Block132:
	mov ebx,dword ptr [ebp+0x60]

 Block133:
	xor edi,edi
	lea esp,[esp]

 Block134:
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [ecx+0xCC4]
	test eax,eax
	je Block172

 Block135:
	cmp edi,dword ptr [eax-4]
	jae Block172

 Block136:
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0x10
	call TSecType<long>::GetData
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [edx+0xCC4]
	cmp eax,dword ptr [ecx+edi*4]
	je Block138

 Block137:
	inc edi
	jmp Block134

 Block138:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1DC]
	push edx
	call edi
	lea eax,[ebp-0x1DC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block139:
	lea ecx,[ebp-0x1BC]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea edx,[ebp-0x1BC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block140:
	push 0
	push 0
	lea eax,[ebp-0x1DC]
	push eax
	lea ecx,[ebp-0x1BC]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xC5D
	push edx
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x21
	je Block1

 Block141:
	lea eax,[ebp-0x230]
	mov byte ptr [ebp-4],0x20
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x54],0
	test eax,eax
	je Block144

 Block142:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x104]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x104]
	mov dword ptr [ebp+0x54],ecx
	test eax,eax
	jge Block144

 Block143:
	cmp eax,0x80004002
	jne Block44

 Block144:
	mov edi,8
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x230],di
	jne Block147

 Block145:
	mov eax,dword ptr [ebp-0x228]
	xor edx,edx
	mov word ptr [ebp-0x230],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[ebp-0x230]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x1BC],di
	jne Block151

 Block149:
	mov eax,dword ptr [ebp-0x1B4]
	xor ecx,ecx
	mov word ptr [ebp-0x1BC],cx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea edx,[ebp-0x1BC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x1DC],di
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [ebp-0x1DC],ax
	mov eax,dword ptr [ebp-0x1D4]
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[ebp-0x1DC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov edx,3
	mov ecx,0xFF
	cmp esi,1
	jne Block162

 Block157:
	mov word ptr [ebp-0x80],dx
	mov dword ptr [ebp-0x78],ecx
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [ebp-0x80]
	mov edx,dword ptr [ebp+0x24]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x20]
	sub esp,0x10
	mov dword ptr [ebp+0x5C],eax
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x7C]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x74]
	push ebx
	add edx,0x36
	push edx
	add edi,0x1A
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax+0x80]
	push edi
	push esi
	mov byte ptr [ebp-4],0x27
	call edx
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block159:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x26
	jne Block161

 Block160:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	jmp Block166

 Block161:
	lea ecx,[ebp-0x80]
	jmp Block169

 Block162:
	mov word ptr [ebp-0x90],dx
	mov dword ptr [ebp-0x88],ecx
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [ebp-0x90]
	mov edx,dword ptr [ebp+0x24]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x20]
	sub esp,0x10
	mov dword ptr [ebp+0x5C],eax
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x8C]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x84]
	push ebx
	add edx,0x36
	push edx
	add edi,8
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax+0x80]
	push edi
	push esi
	mov byte ptr [ebp-4],0x28
	call edx
	test eax,eax
	jge Block164

 Block163:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block164:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0x26
	jne Block168

 Block165:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]

 Block166:
	test eax,eax
	je Block170

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block168:
	lea ecx,[ebp-0x90]

 Block169:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov byte ptr [ebp-4],0x15
	test ebx,ebx
	je Block172

 Block171:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block172:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea ecx,[ebp-0x4C]
	push ecx
	call __eh_vector_ctor_iterator
	mov dword ptr [ebp+0x4C],0

 Block173:
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx
	lea edx,[ebp-0x40]
	push 0xB5B
	push edx
	mov byte ptr [ebp-4],0x2A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2B
	cmp eax,ebx
	je Block175

 Block174:
	mov eax,dword ptr [eax]
	jmp Block176

 Block175:
	xor eax,eax

 Block176:
	mov ecx,dword ptr [ebp+0x4C]
	push ecx
	push eax
	lea edx,[ebp+0x50]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x40]
	add esp,0xC
	mov byte ptr [ebp-4],0x2A
	cmp eax,ebx
	je Block185

 Block177:
	mov edi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block184

 Block178:
	cmp edi,ebx
	je Block184

 Block179:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block181

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block181:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block183

 Block182:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block184:
	mov dword ptr [ebp-0x40],ebx

 Block185:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1CC]
	push eax
	call edi
	lea ecx,[ebp-0x1CC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block44

 Block186:
	lea edx,[ebp-0x18C]
	push edx
	mov byte ptr [ebp-4],0x2C
	call edi
	lea eax,[ebp-0x18C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block44

 Block187:
	mov esi,dword ptr [ebp+0x50]
	push ebx
	push ebx
	lea ecx,[ebp-0x1CC]
	push ecx
	lea edx,[ebp-0x18C]
	push edx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x2D
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x2E
	cmp dword ptr [_D_G_RM],ebx
	je Block1

 Block188:
	lea eax,[ebp-0x250]
	mov byte ptr [ebp-4],0x2D
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	cmp eax,ebx
	je Block196

 Block189:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xF8]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x4C]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ebp+ecx*4-0x4C]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0xF8]
	test eax,eax
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block191:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+ecx*4-0x4C],ebx
	test edi,edi
	jge Block193

 Block192:
	cmp edi,0x80004002
	jne Block410

 Block193:
	mov edi,8
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x250],di
	jne Block199

 Block194:
	mov eax,dword ptr [ebp-0x248]
	xor ecx,ecx
	mov word ptr [ebp-0x250],cx
	test eax,eax
	je Block200

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block196:
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [ebp+ecx*4-0x4C]
	lea ecx,[ebp+ecx*4-0x4C]
	cmp eax,ebx
	je Block193

 Block197:
	mov dword ptr [ecx],0
	test eax,eax
	je Block193

 Block198:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block193

 Block199:
	lea edx,[ebp-0x250]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp-0x18C],di
	jne Block203

 Block201:
	xor eax,eax
	mov word ptr [ebp-0x18C],ax
	mov eax,dword ptr [ebp-0x184]
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea ecx,[ebp-0x18C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block204:
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x1CC],di
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x1C4]
	xor edx,edx
	mov word ptr [ebp-0x1CC],dx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea eax,[ebp-0x1CC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [ebp-4],0x29
	test esi,esi
	je Block210

 Block209:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block210:
	mov eax,dword ptr [ebp+0x4C]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x4C],eax
	jl Block173

 Block211:
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edx+ecx*4+0x204]
	cmp eax,1
	ja Block219

 Block212:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp-0xA0],dx
	mov dword ptr [ebp-0x98],ecx
	mov edx,dword ptr [ebp+eax*4-0x4C]
	mov eax,dword ptr [ebp+0x60]
	mov ebx,dword ptr [eax]
	mov esi,dword ptr [ebp-0xA0]
	mov edi,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x9C]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x94]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x20]
	add edi,0x3A
	push edi
	add eax,0x39
	push eax
	push esi
	mov byte ptr [ebp-4],0x30
	call edx
	test eax,eax
	jge Block214

 Block213:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block214:
	cmp word ptr [ebp-0xA0],8
	mov byte ptr [ebp-4],0x29
	jne Block218

 Block215:
	xor eax,eax
	mov word ptr [ebp-0xA0],ax
	mov eax,dword ptr [ebp-0x98]
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block217:
	mov edx,dword ptr [ebp+0x58]
	jmp Block220

 Block218:
	lea ecx,[ebp-0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	mov edx,dword ptr [ebp+0x58]
	jmp Block220

 Block219:
	mov esi,dword ptr [ebp+0x60]

 Block220:
	mov eax,dword ptr [ebp+0x3C]
	cmp dword ptr [edx+eax*4+0x22C],0
	je Block228

 Block221:
	mov ecx,3
	mov word ptr [ebp-0xC0],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0xB8],ecx
	mov ebx,dword ptr [esi]
	mov esi,dword ptr [ebp-0xC0]
	mov edx,dword ptr [edx+0x268]
	mov edi,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0xBC]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xB4]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x20]
	add edi,0x1F
	push edi
	add eax,0x52
	push eax
	push esi
	mov byte ptr [ebp-4],0x31
	call edx
	test eax,eax
	jge Block223

 Block222:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block223:
	cmp word ptr [ebp-0xC0],8
	mov byte ptr [ebp-4],0x29
	jne Block226

 Block224:
	xor eax,eax
	mov word ptr [ebp-0xC0],ax
	mov eax,dword ptr [ebp-0xB8]
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea ecx,[ebp-0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block227:
	mov edx,dword ptr [ebp+0x58]

 Block228:
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edx+ecx*4+0x1DC]
	sub eax,1
	mov dword ptr [ebp+0x54],0
	je Block299

 Block229:
	sub eax,1
	je Block294

 Block230:
	mov eax,dword ptr [ebp+0x44]
	cmp dword ptr [eax+0x4C],0
	jne Block236

 Block231:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [ebp-0xE0],ax
	mov dword ptr [ebp-0xD8],ecx
	mov ebx,dword ptr [esi]
	mov esi,dword ptr [ebp-0xE0]
	mov edx,dword ptr [edx+0x264]
	mov edi,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0xDC]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xD4]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x20]
	add edi,0x20
	push edi
	add eax,0x4F
	push eax
	push esi
	mov byte ptr [ebp-4],0x34
	call edx
	test eax,eax
	jge Block233

 Block232:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block233:
	cmp word ptr [ebp-0xE0],8
	mov byte ptr [ebp-4],0x29
	jne Block235

 Block234:
	xor eax,eax
	mov word ptr [ebp-0xE0],ax
	mov eax,dword ptr [ebp-0xD8]
	jmp Block303

 Block235:
	lea ecx,[ebp-0xE0]
	jmp Block306

 Block236:
	cmp dword ptr [edx+ecx*4+0x22C],0
	jne Block307

 Block237:
	mov dword ptr [ebp+0x34],0
	mov edx,dword ptr [eax+0x20]
	push 1
	push edx
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],0x35
	call format_integer
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ecx+0xC]
	add eax,0xFB3B4C00
	add esp,0xC
	cmp eax,0x98967F
	ja Block239

 Block238:
	lea edx,[ebp-0x114]
	push 0x1AC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [ebp+0x48]
	or ebx,1
	mov byte ptr [ebp-4],0x36
	mov dword ptr [ebp+0x48],ebx
	jmp Block240

 Block239:
	lea eax,[ebp-0x10C]
	push 0x1A0F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or dword ptr [ebp+0x48],2
	mov ebx,dword ptr [ebp+0x48]
	mov dword ptr [ebp-4],0x37

 Block240:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block242

 Block241:
	mov ecx,dword ptr [eax-4]
	jmp Block243

 Block242:
	xor ecx,ecx

 Block243:
	push ecx
	push eax
	lea ecx,[ebp+0x34]
	call ZXString<char>::_Cat
	mov dword ptr [ebp-4],0x36
	test bl,2
	je Block246

 Block244:
	mov eax,dword ptr [ebp-0x10C]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block246

 Block245:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block246:
	mov dword ptr [ebp-4],0x35
	test bl,1
	je Block249

 Block247:
	mov eax,dword ptr [ebp-0x114]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block249:
	mov edi,dword ptr [ebp+0x44]
	cmp dword ptr [edi+0x1C],1
	jle Block258

 Block250:
	mov dword ptr [ebp+0x50],0
	lea ecx,[ebp-0x11C]
	push 0x24D
	push ecx
	mov byte ptr [ebp-4],0x38
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edx+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x50]
	push edx
	mov byte ptr [ebp-4],0x39
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x11C]
	add esp,0xC
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block252

 Block251:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block252:
	mov edi,dword ptr [ebp+0x50]
	test edi,edi
	je Block254

 Block253:
	mov eax,dword ptr [edi-4]
	jmp Block255

 Block254:
	xor eax,eax

 Block255:
	push eax
	push edi
	lea ecx,[ebp+0x34]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0x35
	test edi,edi
	je Block257

 Block256:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block257:
	mov edi,dword ptr [ebp+0x44]

 Block258:
	mov eax,dword ptr [edi+0x64]
	test eax,eax
	jne Block261

 Block259:
	mov ecx,dword ptr [edi+0x20]
	cmp ecx,dword ptr [edi+0x70]
	jl Block263

 Block260:
	test eax,eax

 Block261:
	jle Block264

 Block262:
	mov ecx,0x64
	sub ecx,eax
	imul ecx,dword ptr [edi+0x70]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp dword ptr [edi+0x20],eax
	jge Block264

 Block263:
	mov dword ptr [ebp+0x54],1
	jmp Block265

 Block264:
	mov dword ptr [ebp+0x54],0

 Block265:
	mov edi,dword ptr [edi+0xC]
	add edi,0xFB3B4C00
	cmp edi,0x98967F
	ja Block267

 Block266:
	lea ecx,[ebp-0x124]
	push 0xA
	push ecx
	call get_basic_font
	add esp,8
	mov byte ptr [ebp-4],0x3A
	or ebx,4
	jmp Block268

 Block267:
	lea edx,[ebp-0x12C]
	push 1
	push edx
	call get_basic_font
	add esp,8
	or ebx,8

 Block268:
	mov edi,dword ptr [eax]
	mov dword ptr [ebp+0x48],ebx
	mov dword ptr [ebp+0x5C],edi
	test edi,edi
	je Block270

 Block269:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block270:
	mov dword ptr [ebp-4],0x3B
	test bl,8
	je Block273

 Block271:
	mov eax,dword ptr [ebp-0x12C]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block273

 Block272:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block273:
	mov byte ptr [ebp-4],0x3C
	test bl,4
	je Block276

 Block274:
	mov eax,dword ptr [ebp-0x124]
	and ebx,0xFFFFFFFB
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block276

 Block275:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block276:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x16C]
	push eax
	call ebx
	lea ecx,[ebp-0x16C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block277:
	lea edx,[ebp-0x1AC]
	push edx
	mov byte ptr [ebp-4],0x3D
	call ebx
	lea eax,[ebp-0x1AC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block278:
	mov eax,dword ptr [ebp+0x34]
	lea ecx,[ebp-0x16C]
	push ecx
	lea edx,[ebp-0x1AC]
	push edx
	push edi
	push ecx
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x3E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x24]
	mov edx,dword ptr [ebp+0x20]
	add ecx,0x20
	push ecx
	add edx,0x4E
	mov byte ptr [ebp-4],0x3F
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x3E
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp-0x1AC],si
	jne Block281

 Block279:
	xor eax,eax
	mov word ptr [ebp-0x1AC],ax
	mov eax,dword ptr [ebp-0x1A4]
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea ecx,[ebp-0x1AC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block282:
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp-0x16C],si
	jne Block285

 Block283:
	mov eax,dword ptr [ebp-0x164]
	xor edx,edx
	mov word ptr [ebp-0x16C],dx
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea eax,[ebp-0x16C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block286:
	lea ecx,[ebp-0x17C]
	push ecx
	call ebx
	lea edx,[ebp-0x17C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block287:
	mov edx,dword ptr [ebp+0x34]
	lea eax,[ebp-0x17C]
	push eax
	push ecx
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x40
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x41
	test edi,edi
	je Block1

 Block288:
	mov ecx,edi
	mov byte ptr [ebp-4],0x40
	call IWzFont::CalcTextWidth
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp-0x17C],si
	jne Block291

 Block289:
	xor eax,eax
	mov word ptr [ebp-0x17C],ax
	mov eax,dword ptr [ebp-0x174]
	test eax,eax
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea ecx,[ebp-0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block292:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x35
	call eax
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block307

 Block293:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block307

 Block294:
	mov ecx,3
	mov word ptr [ebp-0x70],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0x68],ecx
	mov ebx,dword ptr [esi]
	mov esi,dword ptr [ebp-0x70]
	mov edx,dword ptr [edx+0x260]
	mov edi,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x6C]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x64]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x20]
	add edi,0x1F
	push edi
	add eax,0x52
	push eax
	push esi
	mov byte ptr [ebp-4],0x33
	call edx
	test eax,eax
	jge Block296

 Block295:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block296:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x29
	jne Block298

 Block297:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	jmp Block303

 Block298:
	lea ecx,[ebp-0x70]
	jmp Block306

 Block299:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [ebp-0xD0],ax
	mov dword ptr [ebp-0xC8],ecx
	mov ebx,dword ptr [esi]
	mov esi,dword ptr [ebp-0xD0]
	mov edx,dword ptr [edx+0x25C]
	mov edi,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0xCC]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xC4]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x20]
	add edi,0x1F
	push edi
	add eax,0x52
	push eax
	push esi
	mov byte ptr [ebp-4],0x32
	call edx
	test eax,eax
	jge Block301

 Block300:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block301:
	cmp word ptr [ebp-0xD0],8
	mov byte ptr [ebp-4],0x29
	jne Block305

 Block302:
	xor eax,eax
	mov word ptr [ebp-0xD0],ax
	mov eax,dword ptr [ebp-0xC8]

 Block303:
	test eax,eax
	je Block307

 Block304:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block307

 Block305:
	lea ecx,[ebp-0xD0]

 Block306:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block307:
	mov edx,dword ptr [ebp+0x44]
	cmp dword ptr [edx+0x64],0
	jg Block309

 Block308:
	cmp dword ptr [ebp+0x54],0
	je Block401

 Block309:
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
	jl Block44

 Block310:
	lea edx,[ebp-0x19C]
	push edx
	mov byte ptr [ebp-4],0x42
	call esi
	lea eax,[ebp-0x19C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block311:
	push 0
	push 0
	lea ecx,[ebp-0x60]
	push ecx
	lea edx,[ebp-0x19C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xB74
	push eax
	mov byte ptr [ebp-4],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x44
	je Block1

 Block312:
	lea ecx,[ebp-0x260]
	push ecx
	mov byte ptr [ebp-4],0x43
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	je Block315

 Block313:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x118]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x118]
	mov edi,ecx
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	jge Block315

 Block314:
	cmp eax,0x80004002
	jne Block44

 Block315:
	mov ebx,8
	mov byte ptr [ebp-4],0x47
	cmp word ptr [ebp-0x260],bx
	jne Block322

 Block316:
	mov eax,dword ptr [ebp-0x258]
	xor edx,edx
	mov word ptr [ebp-0x260],dx
	test eax,eax
	je Block318

 Block317:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block318:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block319:
	mov byte ptr [ebp-4],0x48
	cmp word ptr [ebp-0x19C],bx
	jne Block323

 Block320:
	mov eax,dword ptr [ebp-0x194]
	xor ecx,ecx
	mov word ptr [ebp-0x19C],cx
	test eax,eax
	je Block324

 Block321:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block324

 Block322:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x260]
	push eax
	call esi
	jmp Block319

 Block323:
	lea edx,[ebp-0x19C]
	push edx
	call esi

 Block324:
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp-0x60],bx
	jne Block327

 Block325:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block328:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5A4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x4A
	test edi,edi
	je Block1

 Block329:
	lea eax,[ebp-0x240]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x50],0
	test eax,eax
	je Block332

 Block330:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x100]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x100]
	mov dword ptr [ebp+0x50],ecx
	test eax,eax
	jge Block332

 Block331:
	cmp eax,0x80004002
	jne Block44

 Block332:
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp-0x240],bx
	jne Block335

 Block333:
	mov eax,dword ptr [ebp-0x238]
	xor edx,edx
	mov word ptr [ebp-0x240],dx
	test eax,eax
	je Block336

 Block334:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block336

 Block335:
	lea eax,[ebp-0x240]
	push eax
	call esi

 Block336:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea ecx,[ebp-0x288]
	push ecx
	call __eh_vector_ctor_iterator
	mov byte ptr [ebp-4],0x4E
	xor ebx,ebx

 Block337:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp-0x220]
	mov byte ptr [ebp-4],0x4F
	push edx
	mov byte ptr [ebp-4],0x4E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x50
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block345

 Block338:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x108]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [ebp+ebx*4-0x288]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x108]
	mov esi,ecx
	test eax,eax
	je Block340

 Block339:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block340:
	mov dword ptr [ebp+ebx*4-0x288],esi
	test edi,edi
	jge Block342

 Block341:
	cmp edi,0x80004002
	jne Block410

 Block342:
	cmp word ptr [ebp-0x220],8
	mov byte ptr [ebp-4],0x4E
	jne Block347

 Block343:
	xor eax,eax
	mov word ptr [ebp-0x220],ax
	mov eax,dword ptr [ebp-0x218]
	test eax,eax
	je Block348

 Block344:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block345:
	mov eax,dword ptr [ebp+ebx*4-0x288]
	test eax,eax
	je Block342

 Block346:
	mov dword ptr [ebp+ebx*4-0x288],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block342

 Block347:
	lea ecx,[ebp-0x220]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block348:
	inc ebx
	cmp ebx,9
	jle Block337

 Block349:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x54]
	lea eax,[ebp-0xF0]
	mov byte ptr [ebp-4],0x51
	push eax
	mov byte ptr [ebp-4],0x4E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x52
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x5C],0
	test eax,eax
	je Block352

 Block350:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x50]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x50]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	jge Block352

 Block351:
	cmp eax,0x80004002
	jne Block44

 Block352:
	cmp word ptr [ebp-0xF0],8
	mov byte ptr [ebp-4],0x54
	jne Block355

 Block353:
	mov eax,dword ptr [ebp-0xE8]
	xor edx,edx
	mov word ptr [ebp-0xF0],dx
	test eax,eax
	je Block356

 Block354:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block356

 Block355:
	lea eax,[ebp-0xF0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block356:
	mov eax,dword ptr [ebp+0x44]
	mov ebx,dword ptr [eax+0x64]
	test ebx,ebx
	jg Block358

 Block357:
	fild dword ptr [eax+0x20]
	fld qword ptr [__real_4059000000000000]
	fmul st(1),st
	fild dword ptr [eax+0x70]
	fdivp st(2),st
	fsubrp st(1),st(0)
	call __ftol2_sse
	mov ebx,eax
	test ebx,ebx
	jl Block359

 Block358:
	cmp ebx,0x64
	jle Block360

 Block359:
	xor ebx,ebx

 Block360:
	mov ecx,dword ptr [ebp+0x24]
	mov edi,dword ptr [ebp+0x20]
	add ecx,0x40
	mov dword ptr [ebp+0x4C],ecx
	mov edx,3
	mov ecx,0xFF
	add edi,0x2C
	mov word ptr [ebp-0x1C],dx
	mov dword ptr [ebp-0x14],ecx
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	mov esi,dword ptr [ebp-0x1C]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [ebp+0x60]
	push esi
	push eax
	push edi
	push ecx
	mov byte ptr [ebp-4],0x55
	call edx
	test eax,eax
	jge Block362

 Block361:
	mov ecx,dword ptr [ebp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block362:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x54
	jne Block365

 Block363:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block366

 Block364:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block366

 Block365:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block366:
	test esi,esi
	je Block1

 Block367:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x30]
	push edx
	push esi
	mov dword ptr [ebp+0x30],0
	call eax
	test eax,eax
	jge Block369

 Block368:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block369:
	add edi,dword ptr [ebp+0x30]
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	test esi,esi
	jle Block377

 Block370:
	mov ecx,3
	mov word ptr [ebp],cx
	mov dword ptr [ebp+8],0xFF
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+esi*4-0x288]
	mov edx,dword ptr [ebp+0x60]
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push edi
	push edx
	mov byte ptr [ebp-4],0x56
	call eax
	test eax,eax
	jge Block372

 Block371:
	mov ecx,dword ptr [ebp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block372:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x54
	jne Block375

 Block373:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block376

 Block374:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block376

 Block375:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block376:
	add edi,5
	test esi,esi
	jg Block378

 Block377:
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	test ecx,ecx
	jle Block385

 Block378:
	mov edx,3
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],0xFF
	imul esi,0x64
	mov ecx,ebx
	sub ecx,esi
	mov esi,dword ptr [ebp+0x10]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov ecx,dword ptr [ebp+eax*4-0x288]
	mov edx,dword ptr [ebp+0x60]
	mov edx,dword ptr [edx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x18]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [ebp+0x4C]
	push eax
	push edi
	push ecx
	mov byte ptr [ebp-4],0x57
	call edx
	mov esi,dword ptr [ebp+0x60]
	test eax,eax
	jge Block380

 Block379:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block380:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x54
	jne Block383

 Block381:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block384

 Block382:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	add edi,5
	jmp Block386

 Block383:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block384:
	add edi,5
	jmp Block386

 Block385:
	mov esi,dword ptr [ebp+0x60]

 Block386:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp-0x3C],dx
	mov dword ptr [ebp-0x34],ecx
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	add eax,eax
	sub ebx,eax
	mov edx,dword ptr [ebp+ebx*4-0x288]
	mov ebx,dword ptr [ebp-0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x30]
	mov dword ptr [ebp+0x30],edx
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp+0x4C]
	push eax
	push ecx
	push edi
	push esi
	mov byte ptr [ebp-4],0x58
	call edx
	test eax,eax
	jge Block388

 Block387:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block388:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x54
	jne Block391

 Block389:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block392:
	mov edx,3
	mov ecx,0xFF
	add edi,5
	mov word ptr [ebp-0x2C],dx
	mov dword ptr [ebp-0x24],ecx
	mov ebx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edx+0x80]
	push ebx
	push eax
	push edi
	push esi
	mov byte ptr [ebp-4],0x59
	call ecx
	test eax,eax
	jge Block394

 Block393:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block394:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x54
	jne Block397

 Block395:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block398

 Block396:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block398

 Block397:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block398:
	mov byte ptr [ebp-4],0x4E
	test ebx,ebx
	je Block400

 Block399:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block400:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0xA
	push 4
	lea eax,[ebp-0x288]
	push eax
	mov byte ptr [ebp-4],0x4D
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x49
	call edx
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x29
	call edx

 Block401:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0x15
	call __eh_vector_dtor_iterator
	lea ecx,[ebp-0x200]
	mov byte ptr [ebp-4],0xD
	int 3// TODO: 	mov dword ptr [ebp-0x200],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block403

 Block402:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block403:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block408

 Block404:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block407

 Block405:
	mov ecx,dword ptr [ebp+0x44]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x44]
	test ecx,ecx
	je Block407

 Block406:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block407:
	mov dword ptr [ebp+0x44],0

 Block408:
	mov edi,dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x58]
	inc edi
	cmp edi,dword ptr [esi+0x180]
	mov dword ptr [ebp+0x3C],edi
	jl Block65

 Block409:
	mov edx,dword ptr [ebp+0x58]
	mov eax,dword ptr [edx+0x254]
	mov dword ptr [edx+0xCDC],0
	mov ecx,dword ptr [eax+0x53C]
	mov dword ptr [edx+0xCC8],ecx
	mov ecx,dword ptr [eax+0x540]
	mov dword ptr [edx+0xCCC],ecx
	mov eax,dword ptr [eax+0x544]
	mov dword ptr [edx+0xCD0],eax
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x298]
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

 Block410:
	push edi
	call _com_issue_error
}
}
// CCSWnd_Tab::ChangeCategory
__SUB_CLASS_THIS0(000C8E40, __thiscall, 48737,  CCSWnd_Tab, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xBC]
	mov eax,dword ptr [ecx+0x53C]
	push edi
	mov dword ptr [esi+0xB8],eax
	lea edx,[esp+0xC]
	push edx
	mov edx,dword ptr [ecx+0x53C]
	lea eax,[esp+0x14]
	push eax
	push edx
	call CCashShop::GetCategoryIndex
	mov eax,dword ptr [esi+0xBC]
	cmp dword ptr [eax+0x53C],0xA
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x53C]
	lea eax,[eax+eax*2]
	add eax,eax
	mov ecx,dword ptr [eax+eax+_D_S_NCSW_TAB_COLOR+8]
	mov edx,dword ptr [eax+eax+_D_S_NCSW_TAB_COLOR+4]
	add eax,eax
	mov eax,dword ptr [eax+_D_S_NCSW_TAB_COLOR]
	push ecx
	push edx
	push eax
	jmp Block3

 Block2:
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 0xFF439ADC

 Block3:
	mov ecx,dword ptr [esi+0x84]
	call CCtrlSelector::SetSelectorAttr
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 0
	push 0x14
	push 0
	call CCtrlSelector::SetSelectorStart
	mov ecx,dword ptr [esi+0x84]
	call CCtrlSelector::SetSelectorEnd
	mov ecx,dword ptr [esi+0xBC]
	mov eax,dword ptr [ecx+0x53C]
	cmp eax,0xA
	jne Block5

 Block4:
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 0
	push 0x14
	push 1
	call CCtrlSelector::SetSelectorStart
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12FC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block18

 Block5:
	cmp eax,9
	jne Block7

 Block6:
	mov ecx,dword ptr [esi+0x84]
	push 0
	push 0
	push 0x14
	push 1
	call CCtrlSelector::SetSelectorStart
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x24A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block18

 Block7:
	cmp dword ptr [esp+0x10],0xFFFFFFFF
	je Block14

 Block8:
	mov ecx,dword ptr [esp+0xC]
	push 1
	push 0
	push 0x14
	push ecx
	mov ecx,dword ptr [esi+0x84]
	call CCtrlSelector::SetSelectorStart
	xor edi,edi
	cmp dword ptr [esp+0xC],edi
	jle Block19

 Block9:
	lea esp,[esp]

 Block10:
	mov edx,dword ptr [esp+0x10]
	lea eax,[edi+edx]
	mov edx,dword ptr [esi+0xBC]
	lea ecx,[eax*8]
	sub ecx,eax
	mov eax,dword ptr [edx+0x48]
	lea ebx,[eax+ecx*4]
	push offset _S_PREMIUM
	lea ecx,[ebx+8]
	call ZXString<char>::Compare
	test eax,eax
	je Block12

 Block11:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	add ebx,8
	push ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x84]
	push edi
	call CCtrlSelector::SetSelector

 Block12:
	inc edi
	cmp edi,dword ptr [esp+0xC]
	jl Block10

 Block13:
	jmp Block19

 Block14:
	cmp eax,8
	je Block20

 Block15:
	mov ecx,dword ptr [esi+0x84]
	push 0
	push 0
	push 0x14
	push 1
	call CCtrlSelector::SetSelectorStart
	cmp dword ptr [esi+0xB8],1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	je Block17

 Block16:
	push 0x24C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block18

 Block17:
	push 0xFFFFFFFF
	push offset _S_RECOMMENDEDITEMS
	call ZXString<char>::CreateFromCharStr

 Block18:
	mov ecx,dword ptr [esi+0x84]
	push 0
	call CCtrlSelector::SetSelector

 Block19:
	mov ecx,dword ptr [esi+0x84]
	call CCtrlSelector::SetSelectorEnd

 Block20:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// CItemSearchDlg::OnCreate
_SUB_EXCEPTION_HANDLER(CC660)
__SUB_CLASS_THIS(000CC660, __thiscall, 144883,  CItemSearchDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CC660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xAC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x6C]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	xor ebx,ebx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xCC],ebx
	mov dword ptr [esp+0x70],0xFFEEEEEE
	mov dword ptr [esp+0x74],0xFFA5A198
	mov dword ptr [esp+0x78],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC8],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0xC8],bl
	cmp eax,ebx
	je Block14

 Block4:
	add eax,8
	cmp eax,ebx
	je Block14

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x6C]
	push eax
	push 0x10
	push 0x8C
	push 0x34
	push 0x67
	push 3
	push 0x7D0
	push esi
	call edx
	mov ecx,dword ptr [esi+0xAC]
	push ebx
	push offset _S_
	call CCtrlComboBox::AddItem
	xor edi,edi

 Block10:
	mov eax,dword ptr [esi+0xB0]
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block15

 Block11:
	cmp edi,dword ptr [eax-4]
	jae Block15

 Block12:
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esi+0xB0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+edi*8+4]
	push edx
	mov eax,ecx
	mov ecx,dword ptr [eax+edi*8]
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_DD__5
	push edx
	mov byte ptr [esp+0xD8],2
	call ZXString<char>::Format
	mov ebp,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0xAC]
	add esp,0x10
	inc edi
	push edi
	push ebp
	call CCtrlComboBox::AddItem
	mov byte ptr [esp+0xC8],bl
	cmp ebp,ebx
	je Block10

 Block13:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4
	jmp Block10

 Block14:
	xor edi,edi
	jmp Block7

 Block15:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x14]
	push 0x512
	push eax
	mov byte ptr [esp+0xD0],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xCC],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC8],3
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC8],5
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	mov byte ptr [esp+0xC8],3
	cmp eax,ebx
	je Block24

 Block21:
	add eax,8
	cmp eax,ebx
	je Block24

 Block22:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block25

 Block23:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[edi+0xC]
	push ecx
	call ebp
	jmp Block26

 Block24:
	xor edi,edi

 Block25:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	cmp eax,ebx
	je Block30

 Block27:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	lea eax,[edi+4]
	push eax
	call ebp
	cmp edi,ebx
	je Block30

 Block29:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block30:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x68
	push 0x3A
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
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xCC],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC8],3
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC8],7
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov byte ptr [esp+0xC8],3
	cmp eax,ebx
	je Block66

 Block36:
	add eax,8
	cmp eax,ebx
	je Block66

 Block37:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block39

 Block38:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block39:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	cmp eax,ebx
	je Block43

 Block40:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block41:
	lea eax,[edi+4]
	push eax
	call ebp
	cmp edi,ebx
	je Block43

 Block42:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block43:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x68
	push 0x9F
	push 2
	push esi
	call edx
	lea ecx,[esp+0x30]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0xD0],8
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	mov dword ptr [esp+0x54],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	lea ecx,[esp+0x44]
	cmp ecx,ebp
	je Block55

 Block44:
	mov edi,dword ptr [esp+0x44]
	cmp edi,ebx
	je Block53

 Block45:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block52

 Block46:
	cmp edi,ebx
	je Block52

 Block47:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block51

 Block50:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block51:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block52:
	mov dword ptr [esp+0x44],ebx

 Block53:
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x44],eax
	cmp eax,ebx
	je Block55

 Block54:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	cmp edi,ebx
	je Block64

 Block56:
	lea eax,[edi+8]
	push eax
	call ebp
	cmp eax,ebx
	jne Block63

 Block57:
	cmp edi,ebx
	je Block63

 Block58:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block60:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block62

 Block61:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block63:
	mov dword ptr [esp+0x14],ebx

 Block64:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xC8],9
	cmp eax,ebx
	je Block67

 Block65:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block68

 Block66:
	xor edi,edi
	jmp Block39

 Block67:
	xor eax,eax

 Block68:
	mov byte ptr [esp+0xC8],8
	cmp eax,ebx
	je Block87

 Block69:
	add eax,8
	cmp eax,ebx
	je Block87

 Block70:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block72

 Block71:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block72:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	cmp eax,ebx
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
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block76

 Block75:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block76:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x30]
	push eax
	push 0x10
	push 0x8C
	push 0x1B
	push 0x67
	push 0x3E8
	push esi
	call edx
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xC8],3
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xC8],bl
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	mov esi,dword ptr [esp+0xB8]
	mov dword ptr [esp+0xC8],0xFFFFFFFF
	cmp esi,ebx
	je Block86

 Block79:
	lea eax,[esi+8]
	push eax
	call ebp
	test eax,eax
	jne Block86

 Block80:
	cmp esi,ebx
	je Block86

 Block81:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block83

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block83:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block85

 Block84:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block85:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block86:
	mov ecx,dword ptr [esp+0xC0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB8
	ret 4

 Block87:
	xor edi,edi
	jmp Block72
}
}
// CCSWnd_Tab::OnMouseButton
_SUB_EXCEPTION_HANDLER(C6EE0)
__SUB_CLASS_THIS(000C6EE0, __thiscall, 48739,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C6EE0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xB8]
	lea ecx,[eax+0x564]
	call CCSWnd_Char::EndChat
	cmp dword ptr [esp+0x20],0x201
	jne Block5

 Block1:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea ebx,[edi-4]
	push ecx
	mov ecx,ebx
	call CCSWnd_Tab::GetTabIndex
	mov esi,eax
	test esi,esi
	je Block5

 Block2:
	lea edx,[esp+0x20]
	push 0x4F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x24]
	add esp,4
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [edi+0xB8]
	push esi
	mov dword ptr [edi+0xB4],esi
	call CCashShop::OnChangedCategory
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect

 Block5:
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
// CCSWnd_List::OnDestroy
__SUB_CLASS_THIS0(000C71A0, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x270]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x274]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x278]
	pop esi
	jmp  CUIToolTip::ClearToolTip
}
}
// CCSWnd_List::SetCursorToPlate
__SUB_CLASS_THIS(000C65B0, __thiscall, 48832,  CCSWnd_List, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x10
	push esi
	push edi
	mov esi,ecx
	push eax
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call CCSWnd_List::GetPlateRect
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	add esi,4
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esi]
	lea edi,[eax+ecx+0x22]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0xC]
	lea eax,[eax+ecx+0x22]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	push eax
	push edi
	call CWndMan::SetCursorPos
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CCSWnd_Status::OnKey
__SUB_CLASS_THIS(000CD610, __thiscall, 48950,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	add ecx,0xFFFFFFFC
	jmp  CCSWnd_Status::OnKeyRet
}
}
// CCSWnd_Best::OnMouseButton
_SUB_EXCEPTION_HANDLER(CAA00)
__SUB_CLASS_THIS(000CAA00, __thiscall, 48927,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CAA00
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [ebx+0x90]
	lea ecx,[eax+0x564]
	call CCSWnd_Char::EndChat
	mov edi,dword ptr [esp+0x50]
	mov ebp,dword ptr [esp+0x54]
	add ebx,0xFFFFFFFC
	nop

 Block1:
	push esi
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call CCSWnd_Best::GetBestRect
	push ebp
	push edi
	lea ecx,[esp+0x28]
	push ecx
	call PtInRect
	test eax,eax
	jne Block4

 Block2:
	inc esi
	cmp esi,5
	jl Block1

 Block3:
	jmp Block55

 Block4:
	cmp esi,0xFFFFFFFF
	je Block55

 Block5:
	cmp esi,4
	jne Block25

 Block6:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0x90]
	cmp dword ptr [ecx+0x500],0
	je Block25

 Block7:
	cmp dword ptr [esp+0x48],0x201
	jne Block55

 Block8:
	mov eax,dword ptr [ecx+0x53C]
	cmp eax,9
	je Block10

 Block9:
	push 9
	call CCashShop::OnChangedCategory
	jmp Block55

 Block10:
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor edi,edi
	xor ebx,ebx
	mov esi,0x4A8

 Block11:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x90]
	mov eax,dword ptr [esi+ecx]
	test eax,eax
	je Block23

 Block12:
	push eax
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block23

 Block13:
	add edi,dword ptr [eax+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block16

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block16:
	add esi,4
	inc ebx
	cmp esi,0x4D0
	mov dword ptr [esp+0x24],0
	jl Block11

 Block17:
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x60]
	push 0xE0C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x50],1
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0x5C],2
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	add esp,0x14
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp esi,6
	jne Block55

 Block22:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0x90]
	call CCashShop::ApplyWishListEvent
	jmp Block55

 Block23:
	cmp ebx,0xA
	jge Block17

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xE0B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block55

 Block25:
	cmp dword ptr [esp+0x48],0x203
	jne Block55

 Block26:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+esi*4+0x7C]
	test esi,esi
	jl Block55

 Block27:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetCommodityByIndex
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [esp+0x40],3
	test ebp,ebp
	je Block55

 Block28:
	lea esi,[ebp+0x10]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1FB
	je Block32

 Block29:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x202
	je Block32

 Block30:
	cmp eax,0x1F7
	je Block32

 Block31:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1F8
	jne Block53

 Block32:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test ecx,ecx
	je Block35

 Block33:
	lea edx,[esp+0x18]
	push edx
	call CWvsContext::GetCharacterData
	cmp dword ptr [eax+4],0
	mov ecx,1
	je Block36

 Block34:
	xor bl,bl
	jmp Block37

 Block35:
	mov cl,byte ptr [esp+0x18]

 Block36:
	mov bl,1

 Block37:
	test cl,1
	je Block39

 Block38:
	lea ecx,[esp+0x18]
	call ZRef<CharacterData>::~ZRef<CharacterData>

 Block39:
	test bl,bl
	jne Block54

 Block40:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x48],4
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea ecx,[esp+0x30]
	movzx edi,al
	mov byte ptr [esp+0x40],3
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1FB
	jne Block43

 Block41:
	cmp edi,0xA
	jg Block43

 Block42:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xEC9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block54

 Block43:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_entrustedshop_item
	add esp,4
	test eax,eax
	je Block47

 Block44:
	cmp edi,0xF
	jg Block47

 Block45:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xECA

 Block46:
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block54

 Block47:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_entrustedshop_item
	add esp,4
	test eax,eax
	je Block50

 Block48:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::IsNewAccount
	test eax,eax
	je Block50

 Block49:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0xECD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block54

 Block50:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1F8
	jne Block53

 Block51:
	cmp edi,7
	jge Block53

 Block52:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xECC
	jmp Block46

 Block53:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [edx+0x90]
	push eax
	call CCashShop::ProcessBuy

 Block54:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>

 Block55:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x10
}
}
// CCSWnd_List::OnMouseMove
_SUB_EXCEPTION_HANDLER(C8320)
__SUB_CLASS_THIS(000C8320, __thiscall, 48821,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C8320
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
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x50]
	xor edi,edi
	lea eax,[ebx+0x188]
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x50],eax

 Block1:
	cmp dword ptr [esp+0x14],0
	jne Block17

 Block2:
	push edi
	lea ecx,[esp+0x34]
	lea esi,[ebx-4]
	push ecx
	mov ecx,esi
	call CCSWnd_List::GetPlateRect
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x34]
	add eax,5
	mov dword ptr [esp+0x20],eax
	add eax,0x40
	add ecx,5
	push edx
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x28],ecx
	push ebp
	lea eax,[esp+0x28]
	add ecx,0x40
	push eax
	mov dword ptr [esp+0x38],ecx
	call PtInRect
	test eax,eax
	je Block14

 Block3:
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [ecx]
	test eax,eax
	jl Block14

 Block4:
	cmp dword ptr [ebx+0xCDC],edi
	je Block17

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ebp
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x58],0
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,esi
	call CCSWnd_List::ShowItemToolTip
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	mov dword ptr [ebx+0xCDC],edi

 Block9:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block13

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block13:
	mov dword ptr [esp+0x1C],0

 Block14:
	add dword ptr [esp+0x50],4
	inc edi
	cmp edi,0xA
	jl Block1

 Block15:
	xor eax,eax
	cmp dword ptr [esp+0x14],eax
	jne Block18

 Block16:
	mov dword ptr [ebx+0xCDC],0xFFFFFFFF
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8
}
}
// CCSWnd_List::ChangeCategorySub
_SUB_EXCEPTION_HANDLER(C98F0)
__SUB_CLASS_THIS0(000C98F0, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C98F0
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
	mov ecx,dword ptr [esi+0x254]
	mov eax,dword ptr [ecx+0x53C]
	cmp eax,0xA
	jne Block8

 Block1:
	mov dword ptr [esi+0xCDC],1
	mov ecx,dword ptr [ecx+0x558]
	mov eax,0xCCCCCCCD
	mul ecx
	mov ecx,dword ptr [esi+0x84]
	push 1
	mov ebp,edx
	push 1
	shr ebp,3
	push 0xA
	inc ebp
	push ebp
	call CCtrlSelector::SetSelectorStart
	xor edi,edi
	test ebp,ebp
	jle Block16

 Block2:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x18]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	lea ebx,[edi+1]
	push ebx
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x84]
	push edi
	call CCtrlSelector::SetSelector
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edi,ebx
	cmp edi,ebp
	jl Block2

 Block7:
	jmp Block16

 Block8:
	mov edx,dword ptr [ecx+0x540]
	push edx
	push eax
	call CCashShop::GetCategorySubIndex
	push 1
	push 1
	push 0xA
	test eax,eax
	jge Block10

 Block9:
	mov ecx,dword ptr [esi+0x84]
	push 0
	call CCtrlSelector::SetSelectorStart
	jmp Block16

 Block10:
	mov edx,dword ptr [esi+0x254]
	lea ecx,[eax*8]
	sub ecx,eax
	mov eax,dword ptr [edx+0x48]
	lea eax,[eax+ecx*4]
	mov ecx,dword ptr [eax+0x14]
	sub ecx,dword ptr [eax+0x18]
	mov eax,0x66666667
	add ecx,9
	imul ecx
	mov ecx,dword ptr [esi+0x84]
	sar edx,2
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	push ebp
	call CCtrlSelector::SetSelectorStart
	xor edi,edi
	test ebp,ebp
	jle Block16

 Block11:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x18]
	push 0x1A15
	push ecx
	mov dword ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	lea ebx,[edi+1]
	push ebx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x28],2
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x84]
	push edi
	call CCtrlSelector::SetSelector
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov edi,ebx
	cmp edi,ebp
	jl Block11

 Block16:
	mov ecx,dword ptr [esi+0x84]
	call CCtrlSelector::SetSelectorEnd
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
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
// CCSWnd_Tab::OnCreate
_SUB_EXCEPTION_HANDLER(CCC10)
__SUB_CLASS_THIS(000CCC10, __thiscall, 48738,  CCSWnd_Tab, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CCC10
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	mov eax,dword ptr [esp+0x68]
	push 0x68
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0xBC],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x68],eax
	xor ebx,ebx
	mov dword ptr [esp+0x60],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlSelector::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block4:
	add eax,8
	cmp eax,ebx
	je Block24

 Block5:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0x84]
	mov dword ptr [edi+0x84],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlSelector>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [edi+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x1E5
	push 0x3B
	push 8
	push 0x3E8
	push edi
	call eax
	mov dword ptr [esp+0x68],ebx
	mov ebx,1
	mov dword ptr [esp+0x60],ebx
	lea ebp,[edi+0x94]

 Block10:
	lea ecx,[esp+0x14]
	push 0x4E8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x6C],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x60],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block13:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x64],3
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block14:
	mov eax,dword ptr [esp+0x68]
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x78],4
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],5
	je Block41

 Block15:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],4
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],6
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block25

 Block16:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x18]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x18]
	mov edi,eax
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov dword ptr [ebp],edi
	test esi,esi
	jge Block20

 Block19:
	cmp esi,0x80004002
	jne Block42

 Block20:
	mov edi,dword ptr [esp+0x1C]

 Block21:
	mov esi,8
	mov byte ptr [esp+0x60],4
	cmp word ptr [esp+0x48],si
	jne Block27

 Block22:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block28

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block24:
	xor esi,esi
	jmp Block7

 Block25:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block21

 Block26:
	mov dword ptr [ebp],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block21

 Block27:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x60],3
	cmp word ptr [esp+0x28],si
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [esp+0x60],1
	cmp word ptr [esp+0x38],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	inc ebx
	add ebp,4
	cmp ebx,9
	jle Block10

 Block37:
	mov ecx,edi
	mov dword ptr [edi+0xB8],1
	call CCSWnd_Tab::ChangeCategory
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block40:
	push eax
	call _com_issue_error

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push esi
	call _com_issue_error
}
}
// CCSWnd_List::AddClassIconLayer
_SUB_EXCEPTION_HANDLER(CCF60)
__SUB_CLASS_THIS(000CCF60, __thiscall, 48837,  CCSWnd_List, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CCF60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	jl Block48

 Block1:
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x50],0
	mov dword ptr [esp+0xC],0
	mov byte ptr [esp+0x50],1
	cmp eax,3
	ja Block9

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6


 Block3:
	lea eax,[esp+0x14]
	push 0xC65
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x58],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x1C]
	jmp Block7

 Block4:
	lea edx,[esp+0x18]
	push 0xC66
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x58],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	jmp Block7

 Block5:
	lea ecx,[esp+0x1C]
	push 0x1AB8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x58],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	jmp Block7

 Block6:
	lea eax,[esp+0x20]
	push 0xC31
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x58],5
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]

 Block7:
	add esp,8
	mov byte ptr [esp+0x50],1
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	lea edx,[esp+0x20]
	push 0xC5F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0xC]
	push edi
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x5C],6
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x50],1
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0
	push 0xFF
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edx,dword ptr [esp+0x6C]
	mov eax,dword ptr [esp+0x68]
	push edx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],7
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],8
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x78],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [esp+0x2C]
	push 0
	lea eax,[esp+0x80]
	push esi
	push eax
	mov byte ptr [esp+0x78],9
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0xB
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	sete cl
	test cl,cl
	je Block22

 Block16:
	mov byte ptr [esp+0x50],1
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov byte ptr [esp+0x50],0
	test edi,edi
	je Block20

 Block19:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test esi,esi
	je Block48

 Block21:
	add esi,0xFFFFFFF4
	push esi
	jmp Block47

 Block22:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x54],0xC
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x50],0xD
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x50],0xC
	cmp word ptr [esp+0x28],si
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x28]
	push edx
	call edi

 Block32:
	mov byte ptr [esp+0x50],0xB
	cmp word ptr [esp+0x38],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block36:
	mov ecx,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	add ecx,0x270
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [esp+0x60]
	cmp esi,ecx
	je Block41

 Block37:
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x60]
	test ecx,ecx
	je Block39

 Block38:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x60]

 Block39:
	test esi,esi
	je Block41

 Block40:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x60]

 Block41:
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	je Block43

 Block42:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block43:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFF4
	push eax

 Block47:
	call ZXString16::_Release
	add esp,4

 Block48:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x48
	ret 0xC
}
}
// CCSWnd_List::AddLimitIconLayer
_SUB_EXCEPTION_HANDLER(CD340)
__SUB_CLASS_THIS(000CD340, __thiscall, 48838,  CCSWnd_List, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CD340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x1C]
	push 0x963
	push eax
	mov dword ptr [esp+0x50],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea ecx,[esp+0x18]
	push 0xC5F
	mov ebx,1
	push ecx
	mov byte ptr [esp+0x50],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x54],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0
	push 0xFF
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [esp+0x60]
	push edx
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x64],3
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],4
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x70],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [esp+0x30]
	push 0
	lea eax,[esp+0x30]
	push esi
	push eax
	mov byte ptr [esp+0x70],5
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],7
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	test cl,cl
	je Block13

 Block9:
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test esi,esi
	je Block37

 Block12:
	add esi,0xFFFFFFF4
	push esi
	jmp Block36

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x20]
	mov ebx,8
	push edx
	mov byte ptr [esp+0x4C],bl
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x48],9
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block23:
	mov byte ptr [esp+0x48],7
	cmp word ptr [esp+0x30],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block27:
	push 0xFFFFFFFF
	lea ecx,[edi+0x274]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [esp+0x10]
	cmp esi,ecx
	je Block32

 Block28:
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x10]

 Block30:
	test esi,esi
	je Block32

 Block31:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x10]

 Block32:
	mov byte ptr [esp+0x48],0
	test ecx,ecx
	je Block34

 Block33:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block34:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFF4
	push eax

 Block36:
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CCSWnd_List::ClearToolTip
__SUB_CLASS_THIS0(00092B40, __thiscall, 48830,  IUIMsgHandler, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x274]
	call CUIToolTip::ClearToolTip
	mov dword ptr [esi+0xCD4],0
	pop esi
	ret
}
}
// CCSWnd_List::AddPicturePlate
_SUB_EXCEPTION_HANDLER(CFBC0)
__SUB_CLASS_THIS(000CFBC0, __thiscall, 48836,  CCSWnd_List, void, long, long, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CFBC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xC],ecx
	push edx
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0xC],eax
	call ZXString16::AssignCStr
	push 0xFFFFFFFF
	lea ecx,[esi+0xCC0]
	call ZArray<CCSWnd_List::PICTURE_PLATE>::InsertBefore
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [eax],ecx
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[eax+8]
	mov dword ptr [eax+4],edx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret 0xC
}
}
// CCSWnd_List::ResetSlotIncComm
_SUB_EXCEPTION_HANDLER(C7460)
__SUB_CLASS_THIS0(000C7460, __thiscall, 48819,  CCSWnd_List, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C7460
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
	mov dword ptr [esp+0x1C],ecx
	xor ebp,ebp
	cmp dword ptr [ecx+0x180],ebp
	mov dword ptr [esp+0x20],ebp
	jle Block42

 Block1:
	lea esi,[ecx+0x22C]
	add ecx,0x8C
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x14],ecx
	jmp Block3

 Block3:
	mov eax,dword ptr [esi-0xA0]
	cmp eax,ebp
	jl Block41

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	lea eax,[esp+0x28]
	push eax
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x40],ebp
	cmp eax,ebp
	jne Block6

 Block5:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	jmp Block41

 Block6:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38F
	je Block14

 Block7:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1536
	je Block14

 Block8:
	cmp ecx,0x52DED8
	je Block14

 Block9:
	cmp ecx,0x52E2C0
	je Block14

 Block10:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block12:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebp
	je Block40

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block40

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi],ebp
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block19

 Block15:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov dword ptr [esp+0x30],ebp

 Block19:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	mov esi,edx
	cmp esi,5
	ja Block36

 Block20:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetSlotIncDelta
	mov ebp,eax
	test esi,esi
	je Block24

 Block21:
	mov eax,dword ptr [ebx+esi*4+0x501]
	test eax,eax
	jne Block23

 Block22:
	lea edi,[eax-1]
	jmp Block25

 Block23:
	mov eax,dword ptr [eax-4]
	lea edi,[eax-1]
	jmp Block25

 Block24:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x254]
	mov edi,dword ptr [eax+0x490]

 Block25:
	test esi,esi
	jne Block28

 Block26:
	test edi,edi
	jge Block28

 Block27:
	lea edi,[esi+0x30]

 Block28:
	mov ebx,0x30
	test esi,esi
	jne Block32

 Block29:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1536
	jne Block31

 Block30:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x254]
	mov edi,dword ptr [eax+0x494]
	lea ebx,[esi+0xF]

 Block31:
	test esi,esi
	je Block34

 Block32:
	add edi,ebp
	cmp edi,0x60
	jle Block35

 Block33:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx],1
	jmp Block35

 Block34:
	add edi,ebp
	cmp edi,ebx
	jg Block33

 Block35:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	xor ebp,ebp
	jmp Block41

 Block36:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block37:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block38:
	mov edx,dword ptr [esp+0x28]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebp
	je Block40

 Block39:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block40:
	mov dword ptr [esp+0x28],ebp

 Block41:
	mov eax,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	add dword ptr [esp+0x14],0x18
	inc eax
	add esi,4
	cmp eax,dword ptr [ecx+0x180]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],esi
	jl Block3

 Block42:
	push ebp
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x38]
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
// CCSWnd_List::OnCreate
_SUB_EXCEPTION_HANDLER(D0500)
__SUB_CLASS_THIS(000D0500, __thiscall, 48820,  CCSWnd_List, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D0500
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x98]
	push 0x68
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp+0x254],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	xor edi,edi
	mov dword ptr [esp+0x90],edi
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlSelector::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x90],ebx
	cmp eax,edi
	je Block11

 Block4:
	add eax,8
	cmp eax,edi
	je Block11

 Block5:
	lea esi,[eax-8]
	cmp esi,edi
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [ebp+0x84]
	mov dword ptr [ebp+0x84],esi
	mov dword ptr [esp+0x2C],eax
	cmp eax,edi
	je Block9

 Block8:
	push edi
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlSelector>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [ebp+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push edi
	push 0x196
	push 0x19C
	push 4
	push 0x3E8
	push ebp
	call eax
	mov ecx,dword ptr [ebp+0x84]
	push 0xFF000000
	push ebx
	push 0xFF3A67AA
	call CCtrlSelector::SetSelectorAttr
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [ebp+0x180],edi
	mov dword ptr [ebp+0x184],ebx
	mov dword ptr [ebp+0x188],ebx
	mov dword ptr [ebp+0xCC8],edi
	mov dword ptr [ebp+0xCCC],ebx
	mov dword ptr [ebp+0xCD0],ebx
	mov dword ptr [ebp+0xCD8],edi
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor esi,esi
	jmp Block7

 Block12:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x94],1
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push edi
	push edi
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x4E9
	mov bl,2
	push ecx
	mov byte ptr [esp+0xAC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0xA4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x258]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x90],bl
	mov ebx,8
	cmp word ptr [esp+0x68],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x68]
	push ecx
	call esi

 Block23:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x28],bx
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block27:
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x90],esi
	cmp word ptr [esp+0x38],bx
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebx
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x38]
	push edx
	mov dword ptr [esp+0x94],5
	call ebx
	lea eax,[esp+0x38]
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
	push edi
	push edi
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x4EA
	mov bl,6
	push eax
	mov byte ptr [esp+0xAC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA4],7
	cmp dword ptr [_D_G_RM],edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0xA8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x26C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x90],bl
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,8
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x38],bx
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov dword ptr [esp+0x90],esi
	cmp word ptr [esp+0x28],bx
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	lea edx,[ebp+0x25C]
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x14],edx
	jmp Block55

 Block51:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	lea edx,[ebp+0x25C]
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x14],edx
	jmp Block55

 Block54:
	xor edi,edi

 Block55:
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x20]
	push 0x9F5
	push eax
	mov dword ptr [esp+0x98],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x90],0xA
	cmp eax,edi
	je Block57

 Block56:
	mov eax,dword ptr [eax]
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x90],9
	cmp eax,edi
	je Block67

 Block59:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block66

 Block60:
	cmp esi,edi
	je Block66

 Block61:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block63

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block63:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block65

 Block64:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block65:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block66:
	mov dword ptr [esp+0x20],edi

 Block67:
	lea eax,[esp+0x58]
	push eax
	call ebx
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block10

 Block68:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x94],0xB
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block10

 Block69:
	mov ebx,dword ptr [esp+0x18]
	push edi
	push edi
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0xA8],0xC
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0xD
	cmp dword ptr [_D_G_RM],edi
	je Block15

 Block70:
	lea eax,[esp+0x8C]
	mov byte ptr [esp+0xA4],0xC
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],0xE
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block79

 Block71:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ebx,dword ptr [esp+0x14]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block73:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block75

 Block74:
	cmp esi,0x80004002
	jne Block95

 Block75:
	mov ebx,dword ptr [esp+0x18]

 Block76:
	mov esi,8
	mov byte ptr [esp+0x90],0xC
	cmp word ptr [esp+0x78],si
	jne Block82

 Block77:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block83

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block79:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	cmp eax,edi
	je Block76

 Block80:
	mov edx,ecx
	mov dword ptr [edx],0
	test eax,eax
	je Block76

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block76

 Block82:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x90],0xB
	cmp word ptr [esp+0x48],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0x90],9
	cmp word ptr [esp+0x58],si
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test ebx,ebx
	je Block93

 Block92:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x14],4
	inc eax
	cmp eax,4
	mov dword ptr [esp+0x1C],eax
	jl Block54

 Block94:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea eax,[ebp+0xCC4]
	push eax
	call CItemInfo::GetSetItemArray
	mov ecx,ebp
	call CCSWnd_List::ChangeCategorySub
	mov ecx,ebp
	call CCSWnd_List::ChangePage
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 4

 Block95:
	push esi
	call _com_issue_error
}
}
// CCSWnd_Status::OnCreate
_SUB_EXCEPTION_HANDLER(CB840)
__SUB_CLASS_THIS(000CB840, __thiscall, 48947,  CCSWnd_Status, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_CB840
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
	mov eax,dword ptr [esp+0x3C]
	xor ebx,ebx
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x3C]
	push 0x4F3
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
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
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block17

 Block6:
	add eax,8
	cmp eax,ebx
	je Block17

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xD
	push 0xF8
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x3C]
	push 0x529
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x40],3
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	lea edx,[esp+0x3C]
	push 0x4F4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],5
	cmp eax,ebx
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block17:
	xor edi,edi
	jmp Block9

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block31

 Block20:
	add eax,8
	cmp eax,ebx
	je Block31

 Block21:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block23

 Block22:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block23:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xD
	push 0x121
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x3C]
	push 0x52A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x8C]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x40],6
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x3C]
	push 0x4F5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block32

 Block30:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block23

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block45

 Block34:
	add eax,8
	cmp eax,ebx
	je Block45

 Block35:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block37

 Block36:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block37:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block39

 Block38:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xD
	push 0x14A
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x3C]
	push 0x52B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x94]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x40],9
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	lea edx,[esp+0x3C]
	push 0x4F6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],0xB
	cmp eax,ebx
	je Block46

 Block44:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block47

 Block45:
	xor edi,edi
	jmp Block37

 Block46:
	xor eax,eax

 Block47:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block56

 Block48:
	add eax,8
	cmp eax,ebx
	je Block56

 Block49:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block51

 Block50:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block51:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block53

 Block52:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xF
	push 0x17A
	push 0x3EB
	push esi
	call edx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block56:
	xor edi,edi
	jmp Block51
}
}
// CCSWnd_Status::OnMouseButton
__SUB_CLASS_THIS(000C6510, __thiscall, 48949,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x9C]
	add ecx,0x564
	call CCSWnd_Char::EndChat
	ret 0x10
}
}
// CCSWnd_Best::GetBestRect
__SUB_CLASS_THIS(000C6470, __thiscall, 48930,  CCSWnd_Best, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	imul ecx,0x45
	mov dword ptr [eax+4],ecx
	add ecx,0x44
	mov dword ptr [eax],0
	mov dword ptr [eax+8],0x5A
	mov dword ptr [eax+0xC],ecx
	ret 8
}
}
// CCSWnd_Tab::OnChildNotify
__SUB_CLASS_THIS(000C6250, __thiscall, 48741,  CCSWnd_Tab, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3E8
	jne Block5

 Block1:
	cmp edx,0x258
	je Block4

 Block2:
	cmp edx,0x320
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0xBC]
	push eax
	call CCashShop::OnChangedCategorySub
	ret 0xC

 Block4:
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0xBC]
	push edx
	call CCashShop::OnChangedSortType
	ret 0xC

 Block5:
	cmp edx,0x64
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
// CCSWnd_List::OnKey
__SUB_CLASS_THIS(000CCF40, __thiscall, 48825,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	add ecx,0xFFFFFFFC
	jmp  CCSWnd_List::OnKeyRet
}
}
// CShortcutHelpDialog::~CShortcutHelpDialog
_SUB_EXCEPTION_HANDLER(C6D10)
__SUB_CLASS_THIS0(000C6D10, __thiscall, 144955,  CShortcutHelpDialog, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C6D10
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
	int 3// TODO: 	mov dword ptr [esi],offset CShortcutHelpDialog::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CShortcutHelpDialog::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CShortcutHelpDialog::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
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
// CCSWnd_List::SetUserPreviewControl
__SUB_CLASS_THIS(000C67F0, __thiscall, 48833,  CCSWnd_List, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	mov dword ptr [esi+0x184],0
	mov dword ptr [esi+0x188],0xFFFFFFFF
	call CCSWnd_List::SetButtonKeyFocus
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCSWnd_List::OnMouseEnter
__SUB_CLASS_THIS(000C6340, __thiscall, 48823,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x274]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CCSWnd_List::CCSWnd_List
_SUB_EXCEPTION_HANDLER(92A00)
__SUB_CLASS_THIS0(00092A00, __thiscall, 48817,  CCSWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_92A00
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
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_List::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_List::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_List::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x84],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0x1E
	push 8
	lea eax,[esi+0x88]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x17C],edi
	mov dword ptr [esi+0x258],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0x25C]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x26C],edi
	mov dword ptr [esi+0x270],edi
	mov dword ptr [esi+0x274],edi
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x18],8
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xCC0],edi
	mov dword ptr [esi+0xCC4],edi
	mov byte ptr [esp+0x18],0xB
	call timeGetTime
	mov dword ptr [esi+0xCD4],eax
	xor eax,eax
	mov dword ptr [esi+0xCDC],edi
	mov dword ptr [esi+0xCE0],0xFFFFFFFF
	mov dword ptr [esi+0xCE4],edi
	mov dword ptr [esi+0x22C],eax
	mov dword ptr [esi+0x230],eax
	mov dword ptr [esi+0x234],eax
	mov dword ptr [esi+0x238],eax
	mov dword ptr [esi+0x23C],eax
	mov dword ptr [esi+0x240],eax
	mov dword ptr [esi+0x244],eax
	mov dword ptr [esi+0x248],eax
	mov dword ptr [esi+0x24C],eax
	mov dword ptr [esi+0x250],eax
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
// CCSWnd_Best::GoToCommoditySN
_SUB_EXCEPTION_HANDLER(C6DC0)
__SUB_CLASS_THIS(000C6DC0, __thiscall, 48931,  CCSWnd_Best, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_C6DC0
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
	mov ebx,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],ebp

 Block1:
	mov eax,dword ptr [ebx+0x94]
	mov ecx,dword ptr [eax+0x48]
	cmp ecx,ebp
	je Block14

 Block2:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [ecx-4]
	jae Block14

 Block3:
	mov esi,ecx
	add esi,dword ptr [esp+0x18]
	mov edi,dword ptr [esi+0x10]
	cmp edi,0xFFFFFFFF
	je Block13

 Block4:
	mov eax,dword ptr [esi+0x14]
	add eax,edi
	cmp edi,eax
	jge Block13

 Block5:
	push edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityExByIndex
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],ebp
	cmp dword ptr [eax+0xC],edx
	jne Block7

 Block6:
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [esi]
	mov eax,edi
	sub eax,dword ptr [esi+0x10]
	push eax
	push ecx
	mov ecx,dword ptr [ebx+0x94]
	push edx
	call CCashShop::GoTo
	mov eax,dword ptr [esp+0x20]

 Block7:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebp
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebp
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [esp+0x20],ebp

 Block12:
	mov ecx,dword ptr [esi+0x14]
	add ecx,dword ptr [esi+0x10]
	inc edi
	cmp edi,ecx
	jl Block5

 Block13:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],0x1C
	jmp Block1

 Block14:
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
