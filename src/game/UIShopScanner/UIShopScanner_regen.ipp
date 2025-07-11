#include "regen.hpp"
// UIShopScanner.ipp
#include "UIShopScanner.hpp"

// CUIShopScannerSearchResult::OnSetFocus
__SUB_CLASS_THIS(0043FB20, __thiscall, 54758,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIShopScannerCategory::AddtoList2
__SUB_CLASS_THIS(0043E670, __thiscall, 54855,  CUIShopScannerCategory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	imul eax,0x2710
	mov dword ptr [ecx+0xB1C],eax
	add eax,0x270F
	mov dword ptr [ecx+0xB20],eax
	mov dword ptr [ecx+0xB10],1
	ret 4
}
}
// CUIShopScanner::CanAddList
_SUB_EXCEPTION_HANDLER(43F7F0)
__SUB_CLASS_THIS(0043F7F0, __thiscall, 54900,  CUIShopScanner, int32_t, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43F7F0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xB0C],0
	mov dword ptr [esp+0x10],0
	je Block9

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,dword ptr [esi+0xB14]
	jl Block3

 Block2:
	cmp dword ptr [esi+0xB18],eax
	jge Block5

 Block3:
	cmp eax,dword ptr [esi+0xB1C]
	jl Block19

 Block4:
	cmp dword ptr [esi+0xB20],eax
	jl Block19

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push eax
	call CItemInfo::IsScannableItem
	test eax,eax
	je Block19

 Block6:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block9:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block15

 Block10:
	cmp byte ptr [eax],0
	je Block15

 Block11:
	push 1
	push 0
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esp+0x20]
	add esp,4
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [eax-4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer

 Block15:
	mov esi,dword ptr [esi+0xB24]
	push 1
	push 0
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::Find__0
	test eax,eax
	jl Block19

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push eax
	call CItemInfo::IsScannableItem
	test eax,eax
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block8

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov eax,1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block19:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIShopScanResult::Draw
_SUB_EXCEPTION_HANDLER(443A60)
__SUB_CLASS_THIS(00443A60, __thiscall, 55099,  CUIShopScanResult, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_443A60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x22C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x240]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x54],ebp
	mov eax,dword ptr [esp+0x250]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x1C],edi
	call CWnd::Draw
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	lea edx,[esp+0xD0]
	push 0x84A
	push edx
	mov dword ptr [esp+0x250],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xB0],edi
	mov ecx,dword ptr [ebp+0xB5C]
	mov edx,dword ptr [ebp+0xB58]
	mov eax,dword ptr [eax]
	push ecx
	inc edx
	push edx
	push eax
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0x258],2
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x6C],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x248],4
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0xD0]
	mov byte ptr [esp+0x248],5
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esp+0x88]
	push 0x18
	push ecx
	call get_basic_font
	add esp,8
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0x24C],6
	call esi
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x8C]
	push ecx
	mov byte ptr [esp+0x24C],7
	call esi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0x24C],8
	call esi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x68]
	lea edx,[esp+0x9C]
	push edx
	lea eax,[esp+0x90]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x25C],9
	call _xbstr_t::_ctor_0
	push 0x14E
	lea edx,[esp+0x88]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xA
	push edi
	mov byte ptr [esp+0x268],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x264],0xB
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov byte ptr [esp+0x264],bl
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	shr eax,1
	mov edx,0xC5
	sub edx,eax
	push edx
	mov byte ptr [esp+0x260],9
	call IWzCanvas::DrawTextA
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x248],8
	cmp word ptr [esp+0x74],bx
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x74]
	push ecx
	call edi

 Block18:
	mov byte ptr [esp+0x248],7
	cmp word ptr [esp+0x8C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x8C]
	push eax
	call edi

 Block22:
	mov byte ptr [esp+0x248],6
	cmp word ptr [esp+0x9C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x9C]
	push edx
	call edi

 Block26:
	lea eax,[esp+0x8C]
	push eax
	call esi
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0x24C],0xC
	call esi
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	push 0
	push 0
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0xA8]
	push edx
	push ecx
	mov dword ptr [esp+0x74],esp
	mov ecx,esp
	mov bl,0xD
	push offset _S_UIUIWINDOW2IMGIT__8
	mov byte ptr [esp+0x260],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x25C],0xE
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x244]
	mov byte ptr [esp+0x25C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x250],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ebx,8
	mov byte ptr [esp+0x248],0x11
	cmp word ptr [esp+0x230],bx
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x238]
	xor ecx,ecx
	mov word ptr [esp+0x230],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x230]
	push edx
	call edi

 Block39:
	mov byte ptr [esp+0x248],0x12
	cmp word ptr [esp+0x9C],bx
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
	call edi

 Block43:
	mov byte ptr [esp+0x248],0x13
	cmp word ptr [esp+0x8C],bx
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x8C]
	push eax
	call edi

 Block47:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2060]
	xor edi,edi
	mov dword ptr [esp+0xFC],edx
	mov dword ptr [esp+0x84],edi
	jmp Block49

 Block49:
	mov eax,dword ptr [ebp+0x100]
	test eax,eax
	je Block245

 Block50:
	cmp edi,dword ptr [eax-4]
	jae Block245

 Block51:
	lea ecx,[esp+0x4C]
	push 0x18
	push ecx
	lea ebx,[eax+edi*8]
	call get_basic_font
	add esp,8
	mov eax,dword ptr [ebx+4]
	add eax,0x1C
	xor ebp,ebp
	push eax
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x24C],0x14
	mov dword ptr [esp+0x68],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebx+4]
	add eax,0x18
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x24C],0x15
	mov dword ptr [esp+0x5C],ebp
	call ZXString<char>::op_assign
	push 0x37
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x18
	push edx
	mov byte ptr [esp+0x258],0x16
	call get_basic_font
	lea eax,[esp+0x74]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	push 0x37
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x18
	push ecx
	call get_basic_font
	lea edx,[esp+0x68]
	add esp,8
	push edx
	call format_string_1
	mov eax,dword ptr [ebx+4]
	add esp,0xC
	cmp dword ptr [eax+0x2C],ebp
	je Block63

 Block52:
	lea eax,[esp+0x1F0]
	push eax
	call esi
	lea ecx,[esp+0x1F0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block53:
	lea edx,[esp+0x120]
	push edx
	mov byte ptr [esp+0x24C],0x17
	call esi
	lea eax,[esp+0x120]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block54:
	lea ecx,[esp+0x1F0]
	push ecx
	lea edx,[esp+0x124]
	push edx
	lea eax,[esp+0xC8]
	push 0x22
	push eax
	mov byte ptr [esp+0x258],0x18
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x25C],0x19
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	lea edi,[edi+edi*4]
	add edi,edi
	add edi,edi
	lea ebp,[edi+0xA9]
	push ebp
	mov byte ptr [esp+0x25C],0x1A
	push 0xE
	mov byte ptr [esp+0x260],0x19
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xC0]
	mov byte ptr [esp+0x248],0x18
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	cmp word ptr [esp+0x120],8
	mov byte ptr [esp+0x248],0x17
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x120],ax
	mov eax,dword ptr [esp+0x128]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x120]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	cmp word ptr [esp+0x1F0],8
	mov byte ptr [esp+0x248],0x16
	jne Block62

 Block61:
	mov eax,dword ptr [esp+0x1F8]
	xor edx,edx
	mov word ptr [esp+0x1F0],dx
	jmp Block71

 Block62:
	lea eax,[esp+0x1F0]
	jmp Block74

 Block63:
	lea ecx,[esp+0x100]
	push ecx
	call esi
	lea edx,[esp+0x100]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block64:
	lea eax,[esp+0x210]
	push eax
	mov byte ptr [esp+0x24C],0x1B
	call esi
	lea ecx,[esp+0x210]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block65:
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x100]
	push edx
	mov edx,dword ptr [esp+0x5C]
	lea eax,[esp+0x214]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x25C],0x1C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	lea edi,[edi+edi*4]
	add edi,edi
	add edi,edi
	lea ebp,[edi+0xA9]
	push ebp
	mov byte ptr [esp+0x25C],0x1D
	push 0xE
	mov byte ptr [esp+0x260],0x1C
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x210],8
	mov byte ptr [esp+0x248],0x1B
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x210],ax
	mov eax,dword ptr [esp+0x218]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x210]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	cmp word ptr [esp+0x100],8
	mov byte ptr [esp+0x248],0x16
	jne Block73

 Block70:
	mov eax,dword ptr [esp+0x108]
	xor edx,edx
	mov word ptr [esp+0x100],dx

 Block71:
	test eax,eax
	je Block75

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block73:
	lea eax,[esp+0x100]

 Block74:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	lea ecx,[esp+0x140]
	push ecx
	call esi
	lea edx,[esp+0x140]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block76:
	lea eax,[esp+0x220]
	push eax
	mov byte ptr [esp+0x24C],0x1E
	call esi
	lea ecx,[esp+0x220]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block77:
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x140]
	push edx
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x224]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x25C],0x1F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x20
	push 0x47
	mov byte ptr [esp+0x260],0x1F
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x248],0x1E
	cmp word ptr [esp+0x220],si
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x220],ax
	mov eax,dword ptr [esp+0x228]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x220]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [esp+0x248],0x16
	cmp word ptr [esp+0x140],si
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x148]
	xor edx,edx
	mov word ptr [esp+0x140],dx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[esp+0x140]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+4],0
	je Block110

 Block86:
	lea ecx,[esp+0x1C0]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block87:
	lea eax,[esp+0x1C0]
	push eax
	lea ecx,[esp+0xC8]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x254],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xB0],0
	mov ecx,dword ptr [ebx+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0xB8]
	push eax
	mov byte ptr [esp+0x258],0x23
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x250],0x24
	test ecx,ecx
	je Block11

 Block88:
	mov byte ptr [esp+0x250],0x23
	call IWzFont::CalcTextWidth
	mov esi,0x94
	sub esi,eax
	mov eax,dword ptr [esp+0xAC]
	mov byte ptr [esp+0x248],0x22
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esp+0xC4]
	mov byte ptr [esp+0x248],0x21
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	cmp word ptr [esp+0x1C0],8
	mov byte ptr [esp+0x248],0x16
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x1C8]
	xor ecx,ecx
	mov word ptr [esp+0x1C0],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x1C0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	lea eax,[esp+0x200]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x200]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block97:
	lea edx,[esp+0x160]
	push edx
	mov byte ptr [esp+0x24C],0x25
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x160]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block98:
	mov eax,dword ptr [esp+0x4C]
	lea ecx,[esp+0x200]
	push ecx
	lea edx,[esp+0x164]
	push edx
	push eax
	lea ecx,[esp+0xD8]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x25C],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xC4],0
	mov ecx,dword ptr [ebx+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0xCC]
	push eax
	mov byte ptr [esp+0x260],0x28
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x29
	push esi
	mov byte ptr [esp+0x260],0x28
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xB8]
	mov byte ptr [esp+0x248],0x27
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esp+0xCC]
	mov byte ptr [esp+0x248],0x26
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	mov esi,8
	mov byte ptr [esp+0x248],0x25
	cmp word ptr [esp+0x160],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x168]
	xor ecx,ecx
	mov word ptr [esp+0x160],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x160]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0x248],0x16
	cmp word ptr [esp+0x200],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x200],ax
	mov eax,dword ptr [esp+0x208]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x200]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax],0
	je Block135

 Block111:
	lea edx,[esp+0x180]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x180]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block112:
	lea ecx,[esp+0x180]
	push ecx
	lea edx,[esp+0xD8]
	push 0x1A15
	push edx
	mov byte ptr [esp+0x254],0x2A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0xB8],0
	mov ecx,dword ptr [ebx+4]
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0xC0]
	push edx
	mov byte ptr [esp+0x258],0x2C
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x250],0x2D
	test ecx,ecx
	je Block11

 Block113:
	mov byte ptr [esp+0x250],0x2C
	call IWzFont::CalcTextWidth
	mov esi,0x100
	sub esi,eax
	mov eax,dword ptr [esp+0xB4]
	mov byte ptr [esp+0x248],0x2B
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	mov eax,dword ptr [esp+0xD4]
	mov byte ptr [esp+0x248],0x2A
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	cmp word ptr [esp+0x180],8
	mov byte ptr [esp+0x248],0x16
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [esp+0x180],ax
	mov eax,dword ptr [esp+0x188]
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[esp+0x180]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	lea edx,[esp+0x1A0]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1A0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block122:
	lea ecx,[esp+0x1E0]
	push ecx
	mov byte ptr [esp+0x24C],0x2E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1E0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block123:
	mov edx,dword ptr [esp+0x4C]
	lea eax,[esp+0x1A0]
	push eax
	lea ecx,[esp+0x1E4]
	push ecx
	push edx
	lea eax,[esp+0xE8]
	push 0x1A15
	push eax
	mov byte ptr [esp+0x25C],0x2F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],0
	mov ecx,dword ptr [ebx+4]
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x260],0x31
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x32
	push esi
	mov byte ptr [esp+0x260],0x31
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x30
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block125:
	mov eax,dword ptr [esp+0xDC]
	mov byte ptr [esp+0x248],0x2F
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	mov esi,8
	mov byte ptr [esp+0x248],0x2E
	cmp word ptr [esp+0x1E0],si
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0x1E0],ax
	mov eax,dword ptr [esp+0x1E8]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0x1E0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [esp+0x248],0x16
	cmp word ptr [esp+0x1A0],si
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x1A8]
	xor edx,edx
	mov word ptr [esp+0x1A0],dx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[esp+0x1A0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov ecx,3
	mov word ptr [esp+0x74],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x7C],ecx
	mov esi,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x30]
	mov edx,dword ptr [edx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x88]
	mov dword ptr [eax+4],esi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [edx+0x80]
	push eax
	add edi,0xA7
	push edi
	mov edi,dword ptr [esp+0x48]
	push 0x108
	push edi
	mov byte ptr [esp+0x268],0x33
	call ecx
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block137:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x248],0x16
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+0x2C],0
	je Block155

 Block142:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x130]
	push ecx
	call esi
	lea edx,[esp+0x130]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block143:
	lea eax,[esp+0x110]
	push eax
	mov byte ptr [esp+0x24C],0x34
	call esi
	lea ecx,[esp+0x110]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block144:
	lea edx,[esp+0x130]
	push edx
	lea eax,[esp+0x114]
	push eax
	lea ecx,[esp+0xF4]
	push 0x22
	push ecx
	mov byte ptr [esp+0x258],0x35
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0xF0]
	push 0xE5F
	push edx
	mov byte ptr [esp+0x25C],0x36
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x25C],0x37
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0x25C],0x38
	push 0x14E
	mov ecx,edi
	mov byte ptr [esp+0x260],0x37
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0x248],0x36
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block146:
	mov eax,dword ptr [esp+0xEC]
	mov byte ptr [esp+0x248],0x35
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov esi,8
	mov byte ptr [esp+0x248],0x34
	cmp word ptr [esp+0x110],si
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x110],ax
	mov eax,dword ptr [esp+0x118]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x110]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [esp+0x248],0x16
	cmp word ptr [esp+0x130],si
	jne Block154

 Block153:
	mov eax,dword ptr [esp+0x138]
	xor edx,edx
	mov word ptr [esp+0x130],dx
	jmp Block175

 Block154:
	lea eax,[esp+0x130]
	push eax
	jmp Block178

 Block155:
	movsx ecx,byte ptr [eax+0x20]
	cmp ecx,dword ptr [esp+0xFC]
	je Block179

 Block156:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x170]
	push edx
	call esi
	lea eax,[esp+0x170]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block157:
	lea ecx,[esp+0x150]
	push ecx
	mov byte ptr [esp+0x24C],0x39
	call esi
	lea edx,[esp+0x150]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block158:
	mov eax,dword ptr [ebx+4]
	cmp byte ptr [eax+0x20],0
	mov byte ptr [esp+0x248],0x3A
	jge Block160

 Block159:
	lea eax,[esp+0xC8]
	push 0xE5E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or dword ptr [esp+0x18],1
	mov byte ptr [esp+0x248],0x3B
	jmp Block161

 Block160:
	lea ecx,[esp+0xF4]
	push 0xE5F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or dword ptr [esp+0x18],2
	mov dword ptr [esp+0x248],0x3C

 Block161:
	mov esi,dword ptr [eax]
	lea edx,[esp+0x170]
	push edx
	lea eax,[esp+0x154]
	push eax
	lea ecx,[esp+0xE8]
	push 0x22
	push ecx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push esi
	mov dword ptr [esp+0x25C],0x3D
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x3E
	push 0x14E
	mov byte ptr [esp+0x260],0x3D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xE0]
	mov byte ptr [esp+0x248],0x3C
	test eax,eax
	je Block163

 Block162:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block163:
	test byte ptr [esp+0x18],2
	mov dword ptr [esp+0x248],0x3B
	je Block166

 Block164:
	mov eax,dword ptr [esp+0xF4]
	and dword ptr [esp+0x18],0xFFFFFFFD
	test eax,eax
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block166:
	test byte ptr [esp+0x18],1
	mov dword ptr [esp+0x248],0x3A
	je Block169

 Block167:
	mov eax,dword ptr [esp+0xC8]
	and dword ptr [esp+0x18],0xFFFFFFFE
	test eax,eax
	je Block169

 Block168:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block169:
	mov esi,8
	mov byte ptr [esp+0x248],0x39
	cmp word ptr [esp+0x150],si
	jne Block172

 Block170:
	mov eax,dword ptr [esp+0x158]
	xor ecx,ecx
	mov word ptr [esp+0x150],cx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[esp+0x150]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [esp+0x248],0x16
	cmp word ptr [esp+0x170],si
	jne Block177

 Block174:
	xor eax,eax
	mov word ptr [esp+0x170],ax
	mov eax,dword ptr [esp+0x178]

 Block175:
	test eax,eax
	je Block179

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block177:
	lea ecx,[esp+0x170]
	push ecx

 Block178:
	call dword ptr [ZImports::_VariantClear]

 Block179:
	lea edx,[esp+0xF0]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	xor esi,esi
	mov dword ptr [esp+0x5C],esi
	mov ecx,dword ptr [ebx+4]
	mov ecx,dword ptr [ecx+8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x254],0x40
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x248],0x42
	cmp eax,esi
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	mov eax,dword ptr [esp+0xF0]
	mov byte ptr [esp+0x248],0x43
	cmp eax,esi
	je Block183

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block183:
	mov eax,dword ptr [ebx+4]
	mov eax,dword ptr [eax+8]
	push 1
	push eax
	lea ecx,[esp+0x58]
	push ecx
	call format_integer
	xor edi,edi
	add esp,0xC
	mov dword ptr [esp+0x34],edi
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+8],0x186A0
	mov byte ptr [esp+0x248],0x44
	jge Block187

 Block184:
	lea edx,[esp+0xBC]
	push 0x58
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block186:
	mov eax,dword ptr [esp+0xBC]
	jmp Block206

 Block187:
	cmp dword ptr [eax+8],0xF4240
	jge Block191

 Block188:
	lea eax,[esp+0xE8]
	push 0x59
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block190

 Block189:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block190:
	mov eax,dword ptr [esp+0xE8]
	jmp Block206

 Block191:
	cmp dword ptr [eax+8],0x989680
	jge Block195

 Block192:
	lea eax,[esp+0xD8]
	push 0x5A
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block194:
	mov eax,dword ptr [esp+0xD8]
	jmp Block206

 Block195:
	cmp dword ptr [eax+8],0x5F5E100
	jge Block199

 Block196:
	lea eax,[esp+0xF8]
	push 0x5B
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block198:
	mov eax,dword ptr [esp+0xF8]
	jmp Block206

 Block199:
	cmp dword ptr [eax+8],0x3B9ACA00
	jge Block203

 Block200:
	lea eax,[esp+0x70]
	push 0x5C
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block202:
	mov eax,dword ptr [esp+0x70]
	jmp Block206

 Block203:
	lea eax,[esp+0x14]
	push 0x5D
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block205

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x38],edi
	call edx

 Block205:
	mov eax,dword ptr [esp+0x14]

 Block206:
	test eax,eax
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	lea eax,[esp+0x190]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x190]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block209:
	mov eax,dword ptr [esp+0x50]
	lea edx,[esp+0x190]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x254],0x45
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x250],0x46
	test edi,edi
	je Block11

 Block210:
	mov ecx,edi
	mov byte ptr [esp+0x250],0x45
	call IWzFont::CalcTextWidth
	mov esi,0xE6
	sub esi,eax
	cmp word ptr [esp+0x190],8
	mov byte ptr [esp+0x248],0x44
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x198]
	xor ecx,ecx
	mov word ptr [esp+0x190],cx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea edx,[esp+0x190]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+0x2C],0
	je Block225

 Block215:
	lea eax,[esp+0x1D0]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1D0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block216:
	mov edx,3
	mov word ptr [esp+0x1B0],dx
	mov dword ptr [esp+0x1B8],0xFF
	lea eax,[esp+0x1D0]
	push eax
	lea ecx,[esp+0x1B4]
	push ecx
	lea edx,[esp+0x68]
	push 0x22
	push edx
	mov byte ptr [esp+0x258],0x48
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x25C],0x49
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x4A
	push esi
	mov byte ptr [esp+0x260],0x49
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x248],0x48
	test eax,eax
	je Block218

 Block217:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block218:
	mov esi,8
	mov byte ptr [esp+0x248],0x47
	cmp word ptr [esp+0x1B0],si
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x1B0],ax
	mov eax,dword ptr [esp+0x1B8]
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x1B0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov byte ptr [esp+0x248],0x44
	cmp word ptr [esp+0x1D0],si
	jne Block224

 Block223:
	mov eax,dword ptr [esp+0x1D8]
	xor edx,edx
	mov word ptr [esp+0x1D0],dx
	jmp Block232

 Block224:
	lea eax,[esp+0x1D0]
	push eax
	jmp Block235

 Block225:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block226:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push edi
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x25C],0x4C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push ebp
	mov byte ptr [esp+0x25C],0x4D
	push esi
	mov byte ptr [esp+0x260],0x4C
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x248],0x4B
	cmp word ptr [esp+0x3C],si
	jne Block229

 Block227:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov byte ptr [esp+0x248],0x44
	cmp word ptr [esp+0x1C],si
	jne Block234

 Block231:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]

 Block232:
	test eax,eax
	je Block236

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block234:
	lea ecx,[esp+0x1C]
	push ecx

 Block235:
	call dword ptr [ZImports::_VariantClear]

 Block236:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x24C],0x43
	call eax
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x248],0x16
	test eax,eax
	je Block238

 Block237:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block238:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x248],0x15
	test eax,eax
	je Block240

 Block239:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block240:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x248],0x14
	test eax,eax
	je Block242

 Block241:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block242:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x248],0x13
	test eax,eax
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	inc dword ptr [esp+0x84]
	mov ebp,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x84]
	mov esi,dword ptr [ZImports::_VariantInit]
	jmp Block49

 Block245:
	lea eax,[esp+0x60]
	push 0xE58
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x5C],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x250],0x4F
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x248],0x51
	test eax,eax
	je Block247

 Block246:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block247:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x248],0x52
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block249:
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block251

 Block250:
	push eax
	call _com_issue_error

 Block251:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x24C],0x53
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block253

 Block252:
	push eax
	call _com_issue_error

 Block253:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	mov byte ptr [esp+0x258],0x54
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x55
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push 0x53
	mov byte ptr [esp+0x25C],0x56
	push 0x14
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	xor ebp,ebp
	mov byte ptr [esp+0x248],0x54
	cmp eax,ebp
	je Block255

 Block254:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block255:
	mov edi,8
	mov byte ptr [esp+0x248],0x53
	cmp word ptr [esp+0x1C],di
	jne Block258

 Block256:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block259:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],di
	jne Block262

 Block260:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block263:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block265

 Block264:
	push eax
	call _com_issue_error

 Block265:
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x57
	push esi
	mov byte ptr [esp+0x254],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0x258],0x58
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x250],0x59
	cmp ecx,ebp
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	mov byte ptr [esp+0x250],0x5A
	call IWzFont::CalcTextWidth
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],bl
	cmp eax,ebp
	je Block269

 Block268:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block269:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x52
	jne Block272

 Block270:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block273:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax+0xB54]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x74]
	push edx
	add edi,3
	call CItemInfo::GetItemName
	mov esi,eax
	lea eax,[esp+0x14]
	push 0x1A19
	push eax
	mov byte ptr [esp+0x250],0x5B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x254],0x5D
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x5C
	cmp eax,ebp
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block275:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x5B
	cmp eax,ebp
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block277:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block279:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block281

 Block280:
	push eax
	call _com_issue_error

 Block281:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x24C],0x5E
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block283

 Block282:
	push eax
	call _com_issue_error

 Block283:
	mov eax,dword ptr [esp+0x54]
	mov eax,dword ptr [eax+0xB60]
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x5F
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	push 0x53
	lea ecx,[edi+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x260],0x60
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x5E
	jne Block286

 Block284:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block287:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x248],0x52
	jne Block290

 Block288:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block291

 Block289:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block290:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block291:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block293

 Block292:
	push eax
	call _com_issue_error

 Block293:
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x61
	push esi
	mov byte ptr [esp+0x254],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [eax+0xB60]
	mov byte ptr [esp+0x250],0x62
	cmp ecx,ebp
	jne Block295

 Block294:
	push 0x80004003
	call _com_issue_error

 Block295:
	mov byte ptr [esp+0x250],bl
	call IWzFont::CalcTextWidth
	add edi,eax
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x52
	jne Block298

 Block296:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block299:
	lea eax,[esp+0x14]
	push 0xE59
	push eax
	add edi,3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x250],0x64
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x63
	cmp eax,ebp
	je Block301

 Block300:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block301:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block303

 Block302:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block303:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block305

 Block304:
	push eax
	call _com_issue_error

 Block305:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x24C],0x65
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block307

 Block306:
	push eax
	call _com_issue_error

 Block307:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	mov byte ptr [esp+0x258],0x66
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x67
	push eax
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push 0x53
	add edi,0x14
	mov byte ptr [esp+0x25C],0x68
	push edi
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x66
	cmp eax,ebp
	je Block309

 Block308:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block309:
	mov edi,8
	mov byte ptr [esp+0x248],0x65
	cmp word ptr [esp+0x1C],di
	jne Block312

 Block310:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block313

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block313

 Block312:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block313:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],di
	jne Block316

 Block314:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block317

 Block315:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block317

 Block316:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block317:
	lea ecx,[esp+0x14]
	push 0xE5A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x250],0x6A
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x69
	cmp eax,ebp
	je Block319

 Block318:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block319:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block321

 Block320:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block321:
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block323

 Block322:
	push eax
	call _com_issue_error

 Block323:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x24C],0x6B
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block325

 Block324:
	push eax
	call _com_issue_error

 Block325:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push 0x18
	push eax
	mov byte ptr [esp+0x258],0x6C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x6D
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push 0x63
	mov byte ptr [esp+0x25C],0x6E
	push 0x14
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x6C
	cmp eax,ebp
	je Block327

 Block326:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block327:
	mov edi,8
	mov byte ptr [esp+0x248],0x6B
	cmp word ptr [esp+0x1C],di
	jne Block330

 Block328:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block331

 Block329:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block331

 Block330:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block331:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],di
	jne Block334

 Block332:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block335:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block337

 Block336:
	push eax
	call _com_issue_error

 Block337:
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x6F
	push esi
	mov byte ptr [esp+0x254],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0x258],0x70
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x250],0x71
	cmp ecx,ebp
	jne Block339

 Block338:
	push 0x80004003
	call _com_issue_error

 Block339:
	mov byte ptr [esp+0x250],0x72
	call IWzFont::CalcTextWidth
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],bl
	cmp eax,ebp
	je Block341

 Block340:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block341:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x52
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block345:
	lea eax,[esp+0x14]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ecx+0xF4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x254],0x74
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x73
	cmp eax,ebp
	je Block347

 Block346:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block347:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block349

 Block348:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block349:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block351

 Block350:
	push eax
	call _com_issue_error

 Block351:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x24C],0x75
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block353

 Block352:
	push eax
	call _com_issue_error

 Block353:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push 0x22
	push eax
	mov byte ptr [esp+0x258],0x76
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x77
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	push 0x63
	lea ecx,[edi+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x260],0x78
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x76
	cmp eax,ebp
	je Block355

 Block354:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block355:
	mov ebx,8
	mov byte ptr [esp+0x248],0x75
	cmp word ptr [esp+0x1C],bx
	jne Block358

 Block356:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block359

 Block357:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block359

 Block358:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block359:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],bx
	jne Block362

 Block360:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block363

 Block361:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block363

 Block362:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block363:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block365

 Block364:
	push eax
	call _com_issue_error

 Block365:
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x79
	push esi
	mov byte ptr [esp+0x254],bl
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	mov byte ptr [esp+0x258],0x7A
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x250],0x7B
	cmp ecx,ebp
	jne Block367

 Block366:
	push 0x80004003
	call _com_issue_error

 Block367:
	mov byte ptr [esp+0x250],0x7C
	call IWzFont::CalcTextWidth
	add edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],bl
	cmp eax,ebp
	je Block369

 Block368:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block369:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x52
	jne Block372

 Block370:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block373

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block373

 Block372:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block373:
	lea edx,[esp+0x14]
	push 0xE5B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x250],0x7E
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x7D
	cmp eax,ebp
	je Block375

 Block374:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block375:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block377

 Block376:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block377:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block379

 Block378:
	push eax
	call _com_issue_error

 Block379:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x24C],0x7F
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block381

 Block380:
	push eax
	call _com_issue_error

 Block381:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0x258],0x80
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x81
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	push 0x63
	add edi,0x14
	mov byte ptr [esp+0x25C],0x82
	push edi
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x80
	cmp eax,ebp
	je Block383

 Block382:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block383:
	mov edi,8
	mov byte ptr [esp+0x248],0x7F
	cmp word ptr [esp+0x1C],di
	jne Block386

 Block384:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block387

 Block385:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block387

 Block386:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block387:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],di
	jne Block390

 Block388:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block393

 Block392:
	push eax
	call _com_issue_error

 Block393:
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x83
	push esi
	mov byte ptr [esp+0x254],bl
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	mov byte ptr [esp+0x258],0x84
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x250],0x85
	cmp ecx,ebp
	jne Block395

 Block394:
	push 0x80004003
	call _com_issue_error

 Block395:
	mov byte ptr [esp+0x250],0x86
	call IWzFont::CalcTextWidth
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],bl
	cmp eax,ebp
	je Block397

 Block396:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block397:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x248],0x52
	jne Block400

 Block398:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block401

 Block399:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block401

 Block400:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block401:
	lea edx,[esp+0x14]
	push 0xE5C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],ebp
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x250],0x88
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x248],0x87
	cmp eax,ebp
	je Block403

 Block402:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block403:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x52
	cmp eax,ebp
	je Block405

 Block404:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block405:
	lea ecx,[esp+0x3C]
	push ecx
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block407

 Block406:
	push eax
	call _com_issue_error

 Block407:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x24C],0x89
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push 0x22
	push ecx
	mov byte ptr [esp+0x258],0x8A
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x8B
	push esi
	mov byte ptr [esp+0x25C],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x40]
	push 0x73
	mov byte ptr [esp+0x25C],0x8C
	push 0x14
	mov ecx,edi
	mov byte ptr [esp+0x260],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x248],0x8A
	cmp eax,ebp
	je Block411

 Block410:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block411:
	mov ebx,8
	mov byte ptr [esp+0x248],0x89
	cmp word ptr [esp+0x1C],bx
	jne Block414

 Block412:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block415

 Block413:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block415

 Block414:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block415:
	mov byte ptr [esp+0x248],0x52
	cmp word ptr [esp+0x3C],bx
	jne Block418

 Block416:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block419:
	mov byte ptr [esp+0x248],0x13
	cmp esi,ebp
	je Block421

 Block420:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block421:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x248],6
	cmp eax,ebp
	je Block423

 Block422:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block423:
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x248],5
	cmp eax,ebp
	je Block425

 Block424:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block425:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x248],0
	cmp eax,ebp
	je Block427

 Block426:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block427:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x24C],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x240]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x238
	ret 4
}
}
// CUIShopScanner::CUIShopScanner
_SUB_EXCEPTION_HANDLER(4433F0)
__SUB_CLASS_THIS0(004433F0, __thiscall, 54884,  CUIShopScanner, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4433F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	push 1
	xor edi,edi
	push edi
	push edi
	push offset _S_UIUIWINDOW2IMGIT__3
	push 7
	push 0xC9
	push 5
	push 0x23
	call CUIWnd::_ctor_1
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x38],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIShopScanner>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIShopScanner>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScanner::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScanner::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScanner::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB44],edi
	lea ecx,[esi+0xB48]
	mov byte ptr [esp+0x38],7
	call COutPacket::_ctor_default
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB74],edi
	mov dword ptr [esi+0xB78],edi
	mov ebx,dword ptr [esi+0x78]
	mov byte ptr [esp+0x38],9
	cmp ebx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push ebx
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [esi+0x78]
	mov eax,0x320
	sub eax,dword ptr [esp+0x14]
	shr eax,1
	mov dword ptr [esp+0x28],eax
	cmp ebx,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push ebx
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block11:
	mov ebx,dword ptr [esi+0x78]
	mov eax,0x258
	sub eax,dword ptr [esp+0x14]
	shr eax,1
	mov dword ptr [esp+0x24],eax
	cmp ebx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push ebx
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block15:
	mov ebx,dword ptr [esi+0x78]
	mov eax,0x400
	sub eax,dword ptr [esp+0x14]
	shr eax,1
	mov dword ptr [esp+0x20],eax
	cmp ebx,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push ebx
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block19:
	mov ebp,dword ptr [esi+0x78]
	mov ebx,0x300
	sub ebx,dword ptr [esp+0x14]
	shr ebx,1
	cmp ebp,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push ebp
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block23:
	mov ebp,dword ptr [esi+0x78]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],edx
	cmp ebp,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x20]
	push 0xA
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push ebx
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CUIWnd::CreateUIWndPosForced
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUIShopScanner::OnCreate
_SUB_EXCEPTION_HANDLER(448B90)
__SUB_CLASS_THIS(00448B90, __thiscall, 54887,  CUIShopScanner, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_448B90
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
	push 0
	push 0
	push esi
	lea ecx,[esi+0xB68]
	call CLayoutMan::Init
	mov eax,dword ptr [esp+0x28]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_0
	mov ecx,esi
	call CUIShopScanner::SetCtrl
	push 0x48
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xB2C]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
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
// CUIShopScannerSearchResult::OnCreate
_SUB_EXCEPTION_HANDLER(449060)
__SUB_CLASS_THIS(00449060, __thiscall, 54757,  CUIShopScannerSearchResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_449060
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xB5C]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebx
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__1
	mov dword ptr [esi+0xA8],0xFFFFFFFF
	mov dword ptr [esi+0xFC],ebx
	mov dword ptr [esi+0xF8],ebx
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push ebx
	push ebx
	push ebx
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGIT
	lea eax,[esp+0x28]
	push eax
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
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGIT__13
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x88],ebx
	lea ebx,[esi+0x80]
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	cmp dword ptr [ebx+4],0
	je Block6

 Block5:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block6:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebp+4]
	mov dword ptr [ebx+4],edx
	mov dword ptr [esp+0x88],0xFFFFFFFF
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGIT__12
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x88],1
	lea ebx,[esi+0x88]
	test eax,eax
	je Block10

 Block9:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	cmp dword ptr [ebx+4],0
	je Block12

 Block11:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block12:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [ebx+4],ecx
	mov dword ptr [esp+0x88],0xFFFFFFFF
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block14:
	xor ebp,ebp
	push ebp
	push ebp
	push ebp
	push 0x3EB
	push offset _S_UIUIWINDOW2IMGIT__19
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x88],2
	lea edi,[esi+0x90]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	cmp dword ptr [edi+4],ebp
	je Block18

 Block17:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block18:
	mov eax,dword ptr [ebx+4]
	mov dword ptr [edi+4],eax
	mov dword ptr [esp+0x88],0xFFFFFFFF
	cmp dword ptr [esp+0x18],ebp
	je Block20

 Block19:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block20:
	lea ecx,[esp+0x4C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x8C],3
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x6C],0x69
	mov dword ptr [esp+0x70],0xB
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x88],4
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0x88],3
	cmp eax,ebp
	je Block31

 Block24:
	add eax,8
	cmp eax,ebp
	je Block31

 Block25:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block27

 Block26:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block29

 Block28:
	push ebp
	lea ecx,[esp+0x28]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push 0xA
	push 0x23
	push 0x3EC
	push esi
	call edx
	mov ecx,dword ptr [esi+0x9C]
	push ebp
	call CCtrlCheckBox::SetChecked
	push ebp
	push ebp
	push ebp
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	push 0x60
	push offset _S_UIUIWINDOW2IMGIT__11
	push ebp
	push 0x30
	mov ecx,edi
	mov dword ptr [edi],ebp
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x30
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block30:
	push eax
	call _com_issue_error

 Block31:
	xor edi,edi
	jmp Block27

 Block32:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x8C],5
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIUIWINDOW2IMGIT__18
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x9C],7
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],8
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [esi+0xA0]
	cmp edi,eax
	je Block41

 Block37:
	mov dword ptr [esi+0xA0],eax
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	test edi,edi
	je Block41

 Block40:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block41:
	cmp word ptr [esp+0x3C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x88],bl
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block45:
	mov ebx,8
	mov byte ptr [esp+0x88],5
	cmp word ptr [esp+0x2C],bx
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block49:
	mov byte ptr [esp+0x88],3
	cmp word ptr [esp+0x14],bx
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block53:
	lea edx,[esp+0x14]
	push edx
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea ecx,[esp+0x2C]
	mov bl,9
	push ecx
	mov byte ptr [esp+0x8C],bl
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	push 0
	push 0
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__17
	mov byte ptr [esp+0xA0],0xA
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x9C],0xB
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x9C],0xA
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],0xC
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [esi+0xA4]
	cmp edi,eax
	je Block64

 Block60:
	mov dword ptr [esi+0xA4],eax
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block62:
	test edi,edi
	je Block64

 Block63:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block64:
	mov edi,8
	mov byte ptr [esp+0x88],0xA
	cmp word ptr [esp+0x3C],di
	jne Block71

 Block65:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block67:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0x88],bl
	cmp word ptr [esp+0x2C],di
	jne Block72

 Block69:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block73

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block71:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x3C]
	push eax
	call ebp
	jmp Block68

 Block72:
	lea edx,[esp+0x2C]
	push edx
	call ebp

 Block73:
	mov byte ptr [esp+0x88],3
	cmp word ptr [esp+0x14],di
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x14]
	push ecx
	call ebp

 Block77:
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x88],0xD
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block79:
	lea ecx,[esp+0x14]
	push ecx
	mov bl,0xE
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x88],0xF
	test edi,edi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block83

 Block82:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block83:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],bl
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x88],0xD
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp

 Block89:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x88],3
	test eax,eax
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block91:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x88],0x10
	test edi,edi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	test eax,eax
	jge Block95

 Block94:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block95:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x88],3
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov ebx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edi,[esi+0xB48]
	mov ecx,edi
	add ebx,0x23C
	call ZList<ZRef<ITEMNAME>>::RemoveAll
	push ebx
	mov ecx,edi
	call ZList<ZRef<ITEMNAME>>::AddTail_List
	mov esi,dword ptr [esi+0x94]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 0
	call edx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test ecx,ecx
	je Block99

 Block98:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x58],0

 Block99:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
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
// CUIShopScanResult::GetRTTI
__SUB_CLASS_THIS0(00449990, __thiscall, 55108,  CUIShopScanResult, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIShopScanResult::ms_RTTI_CUIShopScanResult
	ret
}
}
// CUIShopScannerHotList::Draw
_SUB_EXCEPTION_HANDLER(4409A0)
__SUB_CLASS_THIS(004409A0, __thiscall, 54818,  CUIShopScannerHotList, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4409A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [esp+0x74]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	xor ecx,ecx
	mov dword ptr [esp+0x6C],ecx
	mov dword ptr [esp+0x14],ecx
	mov ebx,dword ptr [ebp+0xA4]
	mov esi,dword ptr [esp+0x20]
	add eax,0xB08
	neg ebx
	sbb ebx,ebx
	and ebx,5
	lea edi,[ebx+5]
	mov byte ptr [esp+0x6C],1
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x74],0x40

 Block1:
	mov ecx,dword ptr [esp+0x1C]
	call ZArray<long>::GetCount
	cmp eax,edi
	jl Block3

 Block2:
	mov eax,edi

 Block3:
	cmp ebx,eax
	jge Block31

 Block4:
	cmp ebx,dword ptr [ebp+0x9C]
	jne Block13

 Block5:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],ecx
	mov edx,dword ptr [ebp+0x98]
	mov byte ptr [esp+0x6C],2
	test esi,esi
	je Block42

 Block6:
	mov ebp,dword ptr [esp+0x34]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	push edx
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x54]
	add edx,0xFFFFFFDF
	push edx
	push 0x2F
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [edi+0x80]
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],1
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ebp,dword ptr [esp+0x18]

 Block13:
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	lea edi,[ebx*4]
	mov eax,dword ptr [edi+edx]
	push 0xC
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block15

 Block14:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block15:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [eax+edi]
	add eax,edi
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x70],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x18
	push eax
	call get_basic_font
	lea ecx,[esp+0x24]
	add esp,8
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x54]
	push edx
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block38

 Block18:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x70],4
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block38

 Block19:
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push 0x18
	push edx
	mov byte ptr [esp+0x7C],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x80],6
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],7
	test esi,esi
	je Block42

 Block20:
	mov ecx,dword ptr [esp+0x84]
	add ecx,0xFFFFFFEC
	push ecx
	push 0x33
	mov ecx,esi
	mov byte ptr [esp+0x84],6
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],5
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov edi,8
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x44],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x6C],1
	cmp word ptr [esp+0x54],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov edi,dword ptr [esp+0x2C]
	inc ebx
	add dword ptr [esp+0x74],0x26
	jmp Block1

 Block29:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov edi,dword ptr [esp+0x2C]
	inc ebx
	add dword ptr [esp+0x74],0x26
	jmp Block1

 Block31:
	cmp dword ptr [ebp+0xA4],0
	mov edx,offset _S_610
	jne Block33

 Block32:
	mov edx,offset _S_15

 Block33:
	xor edi,edi
	mov dword ptr [esp+0x74],edi
	test edx,edx
	je Block37

 Block34:
	mov eax,edx
	lea edi,[eax+1]
	lea esp,[esp]

 Block35:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block35

 Block36:
	sub eax,edi
	mov edi,eax
	push edi
	push edx
	push 0
	push edi
	lea ecx,[esp+0x84]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x78]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x74]

 Block37:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x70],8
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],9
	call ebx
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x34]
	push 0x18
	push edx
	mov byte ptr [esp+0x7C],0xA
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0xB
	push edi
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],0xC
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	push 0xE3
	push 0x4E
	mov ecx,esi
	mov byte ptr [esp+0x84],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],0xA
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov ebx,8
	mov byte ptr [esp+0x6C],9
	cmp word ptr [esp+0x54],bx
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [esp+0x6C],1
	test edi,edi
	je Block55

 Block54:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CUIShopScannerCategory::OnSetFocus
__SUB_CLASS_THIS(00446B10, __thiscall, 54849,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIShopScannerHotList::~CUIShopScannerHotList
_SUB_EXCEPTION_HANDLER(43FDF0)
__SUB_CLASS_THIS0(0043FDF0, __thiscall, 54815,  CUIShopScannerHotList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43FDF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerHotList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerHotList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerHotList::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAF0]
	mov dword ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x1C],5
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x98]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIShopScannerHotList>::ms_pInstance],ebx
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
// CUIShopScannerCategory::OnButtonClicked
__SUB_CLASS_THIS(00448B70, __thiscall, 54853,  CUIShopScannerCategory, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov dword ptr [esp+4],0
	jmp  CUIShopScanner::ToggleAddOn

 Block2:
	ret 4
}
}
// CUIShopScannerCategory::ClearList
__SUB_CLASS_THIS0(0043E5E0, __thiscall, 54847,  CUIShopScannerCategory, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	xor ecx,ecx
	mov dword ptr [eax+0xB14],ecx
	mov dword ptr [eax+0xB18],ecx
	mov dword ptr [eax+0xB1C],ecx
	mov dword ptr [eax+0xB20],ecx
	mov dword ptr [eax+0xB10],ecx
	ret
}
}
// CUIShopScannerSearchResult::GetIndexFromPoint
__SUB_CLASS_THIS(0043E510, __thiscall, 54763,  CUIShopScannerSearchResult, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	push edi
	xor edi,edi
	mov dword ptr [esp+0x10],ecx
	lea esi,[edi+0x2D]
	jmp Block2

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+0xC8]
	cmp eax,0xA
	jl Block4

 Block3:
	mov eax,0xA

 Block4:
	cmp edi,eax
	jge Block8

 Block5:
	push ebp
	push ebx
	lea edx,[esp+0x1C]
	lea ecx,[esi-0x10]
	push edx
	mov dword ptr [esp+0x20],0xC
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],0xAF
	mov dword ptr [esp+0x2C],esi
	call PtInRect
	test eax,eax
	jne Block7

 Block6:
	inc edi
	add esi,0x13
	jmp Block2

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8

 Block8:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIShopScanner::OnKey
_SUB_EXCEPTION_HANDLER(448DA0)
__SUB_CLASS_THIS(00448DA0, __thiscall, 54890,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_448DA0
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
	jne Block6

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0xD
	je Block4

 Block2:
	cmp eax,0x1B
	jne Block6

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block4:
	mov ecx,dword ptr [esi+0xB28]
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
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CUIShopScanner::SearchItemName
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIShopScannerHotList::OnMouseButton
_SUB_EXCEPTION_HANDLER(440EC0)
__SUB_CLASS_THIS(00440EC0, __thiscall, 54820,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_440EC0
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [edi+0xA0]
	neg eax
	sbb eax,eax
	and eax,5
	mov ebp,eax
	add eax,5
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x18],0x42
	xor ebx,ebx
	jmp Block2

 Block2:
	mov esi,dword ptr [esp+0x28]
	add esi,0xB08
	mov ecx,esi
	call ZArray<long>::GetCount
	mov ecx,dword ptr [esp+0x2C]
	cmp eax,ecx
	jl Block4

 Block3:
	mov eax,ecx

 Block4:
	cmp ebp,eax
	jge Block27

 Block5:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[eax-0x23]
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esp+0x68]
	push eax
	mov eax,dword ptr [esp+0x68]
	push eax
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x48],0xC
	mov dword ptr [esp+0x4C],ecx
	mov dword ptr [esp+0x50],0xB5
	call PtInRect
	test eax,eax
	je Block19

 Block6:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,0x203
	jne Block20

 Block7:
	mov eax,dword ptr [esi]
	mov edi,dword ptr [eax+ebp*4]
	lea eax,[eax+ebp*4]
	mov ecx,edi
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CItemInfo::GetItemName
	lea eax,[esp+0x34]
	push 0xE56
	push eax
	mov dword ptr [esp+0x5C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea ecx,[esp+0x30]
	push 0xE55
	push ecx
	mov byte ptr [esp+0x5C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x24],ebx
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x64],3
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],5
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x54],6
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x54],7
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x4C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block23

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov edi,dword ptr [esp+0x1C]

 Block19:
	inc ebp
	add dword ptr [esp+0x18],0x26
	jmp Block2

 Block20:
	cmp eax,0x202
	jne Block19

 Block21:
	cmp dword ptr [edi+0x98],ebp
	je Block19

 Block22:
	push ebx
	lea ecx,[edi-4]
	mov dword ptr [edi+0x98],ebp
	call CWnd::InvalidateRect
	inc ebp
	add dword ptr [esp+0x18],0x26
	jmp Block2

 Block23:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x90]
	mov eax,dword ptr [eax+0x48]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push edi
	call CUIShopScanner::SendScanPacket
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block27:
	lea ecx,[edi+0xA4]
	call CUIToolTip::ClearToolTip

 Block28:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x10
}
}
// CUIShopScanner::SetOutPacket
__SUB_CLASS_THIS(0043F670, __thiscall, 54893,  CUIShopScanner, void, COutPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+0xB4C]
	mov dword ptr [esi+0xB48],eax
	call ZArray<unsigned char>::operator=
	mov edx,dword ptr [edi+8]
	mov dword ptr [esi+0xB50],edx
	mov eax,dword ptr [edi+0xC]
	pop edi
	mov dword ptr [esi+0xB54],eax
	pop esi
	ret 4
}
}
// CUIShopScanResult::LoadCurPageItemList
_SUB_EXCEPTION_HANDLER(447AC0)
__SUB_CLASS_THIS0(00447AC0, __thiscall, 55097,  CUIShopScanResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_447AC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[ebp+0x100]
	call ZArray<ZRef<ITEMDATA>>::RemoveAll
	mov eax,dword ptr [ebp+0xB58]
	add eax,eax
	add eax,eax
	add eax,eax
	push eax
	lea ecx,[ebp+0xEC]
	call ZList<ZRef<ITEMDATA>>::FindIndex
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ebx
	lea ebx,[ebx]

 Block1:
	cmp dword ptr [esp+0x14],ebx
	je Block17

 Block2:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<ITEMDATA>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block4

 Block3:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x100]
	mov dword ptr [esp+0x3C],ebx
	call ZArray<ZRef<ITEMDATA>>::InsertBefore
	mov ebx,eax
	test esi,esi
	je Block6

 Block5:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block11

 Block7:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block10

 Block9:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block10:
	mov ebp,dword ptr [esp+0x1C]
	mov dword ptr [ebx+4],0

 Block11:
	mov dword ptr [ebx+4],esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block16

 Block12:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov dword ptr [esp+0x24],0

 Block16:
	mov eax,dword ptr [esp+0x18]
	inc eax
	xor ebx,ebx
	cmp eax,8
	mov dword ptr [esp+0x18],eax
	jl Block1

 Block17:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebp+0xE0]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	mov dword ptr [esp+0x14],ecx
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [ebp+0xB58],ebx
	setg al
	push eax
	call edx
	mov edx,dword ptr [ebp+0xB5C]
	mov eax,dword ptr [ebp+0xE8]
	mov esi,1
	sub edx,esi
	mov dword ptr [esp+0x1C],ebx
	xor ebx,ebx
	cmp dword ptr [ebp+0xB58],edx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	setl bl
	push ebx
	call eax
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x18]
	push 0xE66
	push ecx
	mov dword ptr [esp+0x40],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],1
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov ecx,0xFFFFFF60
	xor edi,edi
	sub ecx,ebp
	lea esi,[ebp+0xA0]
	mov dword ptr [esp+0x1C],ecx
	jmp Block23

 Block22:
	mov ecx,dword ptr [esp+0x1C]

 Block23:
	mov eax,dword ptr [ebp+0x100]
	cmp eax,ebx
	je Block27

 Block24:
	cmp edi,dword ptr [eax-4]
	jae Block27

 Block25:
	add ecx,esi
	mov edx,eax
	mov eax,dword ptr [ecx+edx+4]
	mov ecx,dword ptr [esp+0x14]
	movsx edx,byte ptr [eax+0x20]
	mov ecx,dword ptr [ecx+0x2060]
	cmp edx,ecx
	jne Block27

 Block26:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	push 1
	jmp Block29

 Block27:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block30

 Block28:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx
	push ebx

 Block29:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx

 Block30:
	inc edi
	add esi,8
	cmp edi,8
	jl Block22

 Block31:
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUIShopScannerSearchResult::OnButtonClicked
_SUB_EXCEPTION_HANDLER(4480E0)
__SUB_CLASS_THIS(004480E0, __thiscall, 54760,  CUIShopScannerSearchResult, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4480E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov dword ptr [esp+0x1C],ecx
	cmp eax,0x3E8
	jne Block2

 Block1:
	push 0
	call CUIShopScanner::ToggleAddOn
	jmp Block55

 Block2:
	cmp eax,0x3E9
	jne Block18

 Block3:
	lea ebx,[esi+0xD4]
	mov ecx,ebx
	call ZList<long>::RemoveAll
	lea edi,[esi+0xC0]
	push edi
	mov ecx,ebx
	call ZList<long>::AddTail_List
	mov ecx,edi
	call ZList<long>::RemoveAll
	lea ebp,[esi+0xAC]
	push ebp
	mov ecx,edi
	call ZList<long>::AddTail_List
	mov ecx,dword ptr [esi+0xEC]
	mov eax,dword ptr [esi+0xF0]
	mov edx,dword ptr [esi+0xE8]
	mov dword ptr [esi+0xF0],ecx
	mov ecx,ebp
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xEC],edx
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xEC]
	lea ecx,[esp+0x40]
	push ecx
	mov dword ptr [esp+0x44],eax
	call ZList<ZRef<ITEMNAME>>::GetPrev
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block13

 Block4:
	cmp dword ptr [esp+0x14],0xA
	jge Block13

 Block5:
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0x1C],eax
	call ZList<ZRef<ITEMNAME>>::GetPrev
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov edi,dword ptr [edi+4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [esp+0x20]
	push eax
	call CUIShopScanner::CanAddList
	test eax,eax
	je Block9

 Block8:
	mov ecx,ebp
	call ZList<long>::AddHead_
	mov ecx,dword ptr [edi+4]
	inc dword ptr [esp+0x14]
	mov dword ptr [eax],ecx

 Block9:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebx
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
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x28],0
	test eax,eax
	jne Block4

 Block13:
	mov eax,dword ptr [esi+0xF8]
	mov ecx,dword ptr [esp+0x18]
	sub eax,1
	mov edx,0
	sets dl
	mov dword ptr [esi+0xE8],ecx
	push 1
	dec edx
	and eax,edx
	mov dword ptr [esi+0xF8],eax
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	cmp dword ptr [esi+0xB4],0
	je Block16

 Block14:
	cmp dword ptr [esi+0xF8],0
	je Block16

 Block15:
	push 1
	jmp Block17

 Block16:
	push 0

 Block17:
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block55

 Block18:
	cmp eax,0x3EA
	jne Block34

 Block19:
	lea ebx,[esi+0xAC]
	mov ecx,ebx
	call ZList<long>::RemoveAll
	lea edi,[esi+0xC0]
	push edi
	mov ecx,ebx
	call ZList<long>::AddTail_List
	mov ecx,edi
	call ZList<long>::RemoveAll
	lea ebp,[esi+0xD4]
	push ebp
	mov ecx,edi
	call ZList<long>::AddTail_List
	mov ecx,dword ptr [esi+0xF0]
	mov eax,dword ptr [esi+0xEC]
	mov edx,dword ptr [esi+0xF4]
	mov dword ptr [esi+0xEC],ecx
	mov ecx,ebp
	mov dword ptr [esi+0xE8],eax
	mov dword ptr [esi+0xF0],edx
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xF0]
	mov dword ptr [esp+0x40],0
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block27

 Block20:
	cmp dword ptr [esp+0x40],0xA
	jge Block27

 Block21:
	mov dword ptr [esp+0x28],0
	lea eax,[esp+0x18]
	mov ebx,1
	push eax
	mov dword ptr [esp+0x3C],ebx
	call ZList<ZRef<ITEMNAME>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x28]
	call ZRef<ITEMNAME>::op_assign_copy
	mov edi,dword ptr [esp+0x28]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+4]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CUIShopScanner::CanAddList
	test eax,eax
	je Block23

 Block22:
	mov ecx,ebp
	call ZList<long>::AddTail_
	mov edx,dword ptr [edi+4]
	add dword ptr [esp+0x40],ebx
	mov dword ptr [eax],edx

 Block23:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block26

 Block25:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block26:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0
	test eax,eax
	jne Block20

 Block27:
	mov dword ptr [esi+0xF4],eax
	mov eax,dword ptr [esi+0xF8]
	inc eax
	cmp eax,0x64
	jle Block29

 Block28:
	mov eax,0x64

 Block29:
	mov dword ptr [esi+0xF8],eax
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	cmp dword ptr [esi+0xDC],0
	je Block32

 Block30:
	mov eax,dword ptr [esi+0xF8]
	inc eax
	cmp eax,dword ptr [esi+0xFC]
	je Block32

 Block31:
	push 1
	jmp Block33

 Block32:
	push 0

 Block33:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block55

 Block34:
	cmp eax,0x3EB
	jne Block55

 Block35:
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	jl Block55

 Block36:
	push eax
	lea ecx,[esi+0xC0]
	call ZList<long>::FindIndex
	mov ebp,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0x9C]
	mov eax,dword ptr [eax+0x48]
	mov ebx,2
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block38

 Block37:
	lea edx,[esp+0x2C]
	push 0xE57
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x38],3
	mov ebx,1
	jmp Block39

 Block38:
	lea eax,[esp+0x24]
	push 0xE56
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],4

 Block39:
	mov edi,dword ptr [eax]
	lea ecx,[esp+0x20]
	push 0xE55
	push ecx
	mov dword ptr [esp+0x1C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],5
	mov dword ptr [esp+0x1C],0
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push edi
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x48],6
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],8
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],9
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov byte ptr [esp+0x38],0xA
	test bl,2
	je Block46

 Block44:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov byte ptr [esp+0x38],0xB
	test bl,1
	je Block49

 Block47:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x54]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block51

 Block50:
	mov esi,dword ptr [esi+0x9C]
	mov esi,dword ptr [esi+0x48]
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	push esi
	push ebp
	call CUIShopScanner::SendScanPacket
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner

 Block51:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIShopScannerCategory::OnMouseButton
__SUB_CLASS_THIS(00448720, __thiscall, 54852,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0xC],0x201
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	push ebx
	mov ebx,ecx
	mov dword ptr [esp+8],eax
	jne Block93

 Block1:
	mov eax,dword ptr [ebx+0x90]
	push ebp
	push esi
	push edi
	mov ebp,7
	cmp eax,1
	jne Block3

 Block2:
	mov dword ptr [esp+0x1C],0xB
	jmp Block10

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov dword ptr [esp+0x1C],5
	jmp Block10

 Block5:
	cmp eax,3
	jne Block7

 Block6:
	mov dword ptr [esp+0x1C],4
	jmp Block10

 Block7:
	cmp eax,4
	jne Block9

 Block8:
	mov dword ptr [esp+0x1C],ebp
	jmp Block10

 Block9:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,0xB
	mov dword ptr [esp+0x1C],ecx

 Block10:
	cmp eax,1
	jne Block12

 Block11:
	mov dword ptr [esp+0x10],0xB
	jmp Block17

 Block12:
	cmp eax,2
	jne Block14

 Block13:
	mov dword ptr [esp+0x10],5
	jmp Block17

 Block14:
	cmp eax,4
	jne Block16

 Block15:
	mov dword ptr [esp+0x10],ebp
	jmp Block17

 Block16:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edx,0xB
	mov dword ptr [esp+0x10],edx

 Block17:
	cmp eax,1
	jne Block19

 Block18:
	lea ebp,[eax+0xA]
	jmp Block21

 Block19:
	cmp eax,4
	je Block21

 Block20:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,0xB
	mov ebp,ecx

 Block21:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0xFFFFFFDC
	mov eax,0x2AAAAAAB
	imul ecx
	sar edx,1
	mov edi,edx
	lea esi,[ebx-4]
	shr edi,0x1F
	mov ecx,esi
	add edi,edx
	call CUIShopScannerCategory::ClearList
	xor edx,edx
	cmp edi,edx
	jne Block23

 Block22:
	mov dword ptr [ebx+0x90],1

 Block23:
	inc ebp
	cmp edi,ebp
	jne Block25

 Block24:
	mov dword ptr [ebx+0x90],2

 Block25:
	mov eax,dword ptr [esp+0x10]
	add eax,2
	cmp edi,eax
	jne Block27

 Block26:
	mov dword ptr [ebx+0x90],3

 Block27:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,3
	cmp edi,ecx
	jne Block29

 Block28:
	push 0x12D
	mov ecx,esi
	mov dword ptr [ebx+0x90],edx
	call CUIShopScannerCategory::AddtoList_0
	push 0x18F
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_0

 Block29:
	mov eax,dword ptr [ebx+0x90]
	cmp eax,1
	jne Block35

 Block30:
	cmp edi,0xA
	jne Block32

 Block31:
	push edx
	mov ecx,esi
	mov dword ptr [ebx+0x90],4
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block32:
	cmp eax,1
	jne Block35

 Block33:
	cmp edi,0xB
	jne Block35

 Block34:
	push edx
	mov ecx,esi
	mov dword ptr [ebx+0x90],5
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block35:
	cmp eax,4
	jne Block38

 Block36:
	cmp edi,edx
	jne Block38

 Block37:
	mov dword ptr [ebx+0x90],edx

 Block38:
	push edx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [ebx+0x90]
	cmp eax,1
	jne Block50

 Block39:
	dec edi
	cmp edi,8
	ja Block89

 Block40:
	cmp EDI, 0
je Block41
cmp EDI, 1
je Block42
cmp EDI, 2
je Block43
cmp EDI, 3
je Block44
cmp EDI, 4
je Block45
cmp EDI, 5
je Block46
cmp EDI, 6
je Block47
cmp EDI, 7
je Block48
cmp EDI, 8
je Block49


 Block41:
	push 0x64
	jmp Block88

 Block42:
	push 0x67
	jmp Block88

 Block43:
	push 0x68
	jmp Block88

 Block44:
	push 0x6A
	jmp Block88

 Block45:
	push 0x69
	jmp Block88

 Block46:
	push 0x6C
	jmp Block88

 Block47:
	push 0x6B
	jmp Block88

 Block48:
	push 0x6D
	jmp Block88

 Block49:
	push 0x6E
	jmp Block88

 Block50:
	cmp eax,2
	jne Block58

 Block51:
	lea eax,[edi-2]
	cmp eax,4
	ja Block89

 Block52:
	cmp EAX, 0
je Block53
cmp EAX, 1
je Block54
cmp EAX, 2
je Block55
cmp EAX, 3
je Block56
cmp EAX, 4
je Block57


 Block53:
	push 0x1EF9AF
	push 0x1E8480
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_1
	push 0xCD
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList2
	jmp Block89

 Block54:
	push 0xCB
	jmp Block88

 Block55:
	push 0xCC
	jmp Block88

 Block56:
	push 0x1FBCFF
	push 0x1F6EE0
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_1
	push 0xE9
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList2
	jmp Block89

 Block57:
	push 0x200B20
	push 0x200B20
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_1
	jmp Block89

 Block58:
	cmp eax,3
	jne Block65

 Block59:
	lea eax,[edi-3]
	cmp eax,3
	ja Block89

 Block60:
	cmp EAX, 0
je Block61
cmp EAX, 1
je Block62
cmp EAX, 2
je Block63
cmp EAX, 3
je Block64


 Block61:
	push 0x3D189F
	push 0x3D0900
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_1
	jmp Block89

 Block62:
	push 0x3D571F
	push 0x3D1C88
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_1
	jmp Block89

 Block63:
	push 0x198
	jmp Block88

 Block64:
	push 0x19D
	jmp Block88

 Block65:
	cmp eax,4
	jne Block74

 Block66:
	lea eax,[edi-1]
	cmp eax,5
	ja Block89

 Block67:
	cmp EAX, 0
je Block68
cmp EAX, 1
je Block69
cmp EAX, 2
je Block70
cmp EAX, 3
je Block71
cmp EAX, 4
je Block72
cmp EAX, 5
je Block73


 Block68:
	push 0x82
	jmp Block88

 Block69:
	push 0x83
	jmp Block88

 Block70:
	push 0x84
	jmp Block88

 Block71:
	push 0x85
	jmp Block88

 Block72:
	push 0x89
	jmp Block88

 Block73:
	push 0x8A
	jmp Block88

 Block74:
	cmp eax,5
	jne Block89

 Block75:
	dec edi
	cmp edi,9
	ja Block89

 Block76:
	cmp EDI, 0
je Block77
cmp EDI, 1
je Block78
cmp EDI, 2
je Block79
cmp EDI, 3
je Block80
cmp EDI, 4
je Block81
cmp EDI, 5
je Block82
cmp EDI, 6
je Block83
cmp EDI, 7
je Block84
cmp EDI, 8
je Block86
cmp EDI, 9
je Block87


 Block77:
	push 0x8C
	jmp Block88

 Block78:
	push 0x8D
	jmp Block88

 Block79:
	push 0x8E
	jmp Block88

 Block80:
	push 0x8F
	jmp Block88

 Block81:
	push 0x90
	jmp Block88

 Block82:
	push 0x91
	jmp Block88

 Block83:
	push 0x92
	jmp Block88

 Block84:
	push 0x93

 Block85:
	jmp Block88

 Block86:
	push 0x94
	jmp Block88

 Block87:
	push 0x95

 Block88:
	mov ecx,esi
	call CUIShopScannerCategory::AddtoList_0

 Block89:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [ecx+0xB10],0
	je Block92

 Block90:
	cmp dword ptr [ecx+0xB60],0
	mov dword ptr [ecx+0xB0C],1
	jne Block92

 Block91:
	push 3
	call CUIShopScanner::ToggleAddOn

 Block92:
	pop edi
	pop esi
	pop ebp

 Block93:
	pop ebx
	add esp,8
	ret 0x10
}
}
// CUIShopScanResult::IsKindOf
__SUB_CLASS_THIS(004499B0, __thiscall, 55109,  CUIShopScanResult, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIShopScanResult::ms_RTTI_CUIShopScanResult
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
// CUIShopScanner::~CUIShopScanner
_SUB_EXCEPTION_HANDLER(43F4F0)
__SUB_CLASS_THIS0(0043F4F0, __thiscall, 54886,  CUIShopScanner, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43F4F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScanner::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScanner::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScanner::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB68]
	mov dword ptr [esp+0x1C],8
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xB4C]
	mov byte ptr [esp+0x1C],7
	call ZArray<unsigned char>::RemoveAll
	lea edi,[esi+0xB40]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CUIShopScannerSearchResult>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB38]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CUIShopScannerCategory>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB30]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CUIShopScannerHotList>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov eax,dword ptr [esi+0xB24]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIShopScanner>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIShopScanner::OnButtonClicked
_SUB_EXCEPTION_HANDLER(448C40)
__SUB_CLASS_THIS(00448C40, __thiscall, 54889,  CUIShopScanner, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_448C40
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUIWnd::OnButtonClicked
	cmp edi,0x7D1
	ja Block10

 Block1:
	je Block8

 Block2:
	cmp edi,0x3E8
	je Block7

 Block3:
	cmp edi,0x7D0
	jne Block13

 Block4:
	cmp dword ptr [esi+0xB34],0
	mov ecx,esi
	je Block6

 Block5:
	push 0
	call CUIShopScanner::ToggleAddOn
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block6:
	push 1
	call CUIShopScanner::ToggleAddOn
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block8:
	cmp dword ptr [esi+0xB3C],0
	mov ecx,esi
	jne Block5

 Block9:
	push 2
	call CUIShopScanner::ToggleAddOn
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block10:
	cmp edi,0x7D2
	jne Block13

 Block11:
	mov ecx,dword ptr [esi+0xB2C]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x20],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIShopScanner::SearchItemName
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIShopScannerCategory::Draw
_SUB_EXCEPTION_HANDLER(441D20)
__SUB_CLASS_THIS(00441D20, __thiscall, 54850,  CUIShopScannerCategory, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_441D20
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
	mov esi,ecx
	mov dword ptr [esp+0x54],esi
	mov eax,dword ptr [esp+0xA8]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0xA0],ebx
	mov dword ptr [esp+0x94],ebx
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0xA0],1
	lea edi,[ebx+0xB]
	cmp eax,1
	jne Block2

 Block1:
	mov dword ptr [esp+0x5C],edi
	jmp Block9

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov dword ptr [esp+0x5C],5
	jmp Block9

 Block4:
	cmp eax,3
	jne Block6

 Block5:
	mov dword ptr [esp+0x5C],4
	jmp Block9

 Block6:
	cmp eax,4
	jne Block8

 Block7:
	mov dword ptr [esp+0x5C],7
	jmp Block9

 Block8:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edx,edi
	mov dword ptr [esp+0x5C],edx

 Block9:
	cmp eax,1
	jne Block11

 Block10:
	mov ebp,edi
	jmp Block16

 Block11:
	cmp eax,2
	jne Block13

 Block12:
	lea ebp,[eax+3]
	jmp Block16

 Block13:
	cmp eax,4
	jne Block15

 Block14:
	lea ebp,[eax+3]
	jmp Block16

 Block15:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,edi
	mov ebp,ecx

 Block16:
	cmp eax,1
	je Block20

 Block17:
	cmp eax,4
	jne Block19

 Block18:
	lea edi,[eax+3]
	jmp Block20

 Block19:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edi,edx

 Block20:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push eax
	call esi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0xA4],2
	call esi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push ebx
	push ebx
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__2
	mov byte ptr [esp+0xB8],3
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xB4],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x98]
	mov byte ptr [esp+0xB4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x84],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xA0],7
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x84]
	push edx
	call ebx

 Block33:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xA0],8
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x64]
	push ecx
	call ebx

 Block37:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xA0],9
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x74]
	push eax
	call ebx

 Block41:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0xA4],0xA
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x64]
	push 0xA
	push edx
	mov byte ptr [esp+0xB4],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x5C]
	mov bl,0xE
	push eax
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x70]
	mov byte ptr [esp+0xB0],0xF
	test esi,esi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	push 0x24
	push 0x21
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0xD
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0xC
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xB
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov ebx,8
	mov byte ptr [esp+0xA0],0xA
	cmp word ptr [esp+0x28],bx
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x18],bx
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov ebx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0x23
	push 0x13
	push esi
	mov byte ptr [esp+0xC0],0x10
	call ecx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx+0x94]
	push edx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block86

 Block68:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebx
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA4],0x11
	call ebx
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x60]
	push 0x18
	push eax
	mov byte ptr [esp+0xB0],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x20]
	push 0x1A87
	push ecx
	mov byte ptr [esp+0xB4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x5C]
	mov bl,0x15
	push edx
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea eax,[edi+edi*2+0xC]
	add eax,eax
	add eax,eax
	push eax
	mov byte ptr [esp+0xB4],0x16
	push 0x21
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x14
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x13
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0x12
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x11
	cmp word ptr [esp+0x18],bx
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x28],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ebx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ebx+0x94]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block91

 Block87:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	push ecx
	lea edx,[edi+edi*2]
	lea eax,[edx*4+0x2F]
	push eax
	push 0x13
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x17
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov eax,dword ptr [ebx+0x94]
	push eax
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block110

 Block92:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xA4],0x18
	call edi
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x60]
	push 0x18
	push ecx
	mov byte ptr [esp+0xB0],0x19
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x20]
	push 0x1A38
	push edx
	mov byte ptr [esp+0xB4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x5C]
	mov bl,0x1C
	push eax
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp+ebp*2+0xF]
	add ecx,ecx
	add ecx,ecx
	push ecx
	mov byte ptr [esp+0xB4],0x1D
	push 0x21
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x1B
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x1A
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0x19
	test eax,eax
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block102:
	mov edi,8
	mov byte ptr [esp+0xA0],0x18
	cmp word ptr [esp+0x18],di
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x28],di
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov edi,dword ptr [esp+0x54]
	mov edx,dword ptr [edi+0x94]
	push edx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block115

 Block111:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0xFF
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x18]
	push ecx
	lea eax,[ebp+ebp*2]
	push edx
	lea ecx,[eax*4+0x3B]
	push ecx
	push 0x13
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x1E
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov ecx,dword ptr [edi+0x94]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block134

 Block116:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebx
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA4],0x1F
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x60]
	push 0x18
	mov bl,0x20
	push edx
	mov byte ptr [esp+0xB0],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x20]
	push 0xB
	push eax
	mov byte ptr [esp+0xB4],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xB4],0x23
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x6C]
	lea edx,[ebp+ebp*2+0x12]
	add edx,edx
	add edx,edx
	push edx
	mov byte ptr [esp+0xB4],0x24
	push 0x21
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x23
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x22
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x21
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],bl
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],0x1F
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block135

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block133:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block135

 Block134:
	mov ebp,dword ptr [esp+0x5C]

 Block135:
	mov ecx,dword ptr [edi+0x94]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block140

 Block136:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	push ecx
	lea edx,[ebp+ebp*2]
	lea eax,[edx*4+0x47]
	push eax
	push 0x13
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x25
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov eax,dword ptr [edi+0x94]
	cmp eax,1
	jne Block162

 Block141:
	xor ebx,ebx
	lea edi,[eax+0x2D]

 Block142:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block143:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA4],0x26
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block144:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x27
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x5C]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x28
	call _xbstr_t::_ctor_0
	lea edx,[edi+2]
	push edx
	mov byte ptr [esp+0xB4],0x29
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x28
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x27
	test eax,eax
	je Block146

 Block145:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block146:
	mov ebp,8
	mov byte ptr [esp+0xA0],0x26
	cmp word ptr [esp+0x18],bp
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x3C],bp
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push 0x23
	push esi
	mov byte ptr [esp+0xC0],0x2A
	call ecx
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block156:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	add edi,0xC
	add ebx,4
	cmp edi,0xB2
	jl Block142

 Block161:
	jmp Block247

 Block162:
	cmp eax,2
	jne Block184

 Block163:
	xor ebx,ebx
	lea edi,[eax+0x37]

 Block164:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call ebp
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block165:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA4],0x2B
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block166:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x1C]
	push 0x1A
	push ecx
	mov byte ptr [esp+0xB0],0x2C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x5C]
	push eax
	mov eax,dword ptr [edx+0x84]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x2D
	call _xbstr_t::_ctor_0
	lea eax,[edi+2]
	push eax
	mov byte ptr [esp+0xB4],0x2E
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x2D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x2C
	test eax,eax
	je Block168

 Block167:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block168:
	mov ebp,8
	mov byte ptr [esp+0xA0],0x2B
	cmp word ptr [esp+0x3C],bp
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x18],bp
	jne Block175

 Block173:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push 0x23
	push esi
	mov byte ptr [esp+0xC0],0x2F
	call ecx
	test eax,eax
	jge Block178

 Block177:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block178:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block181

 Block179:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block182:
	add edi,0xC
	add ebx,4
	cmp edi,0x75
	jl Block164

 Block183:
	jmp Block247

 Block184:
	cmp eax,3
	jne Block204

 Block185:
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[eax+0x41]

 Block186:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block187:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA4],0x30
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block188:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x1C]
	push 0x1A
	push ecx
	mov byte ptr [esp+0xB0],0x31
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x88]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x32
	call _xbstr_t::_ctor_0
	lea edx,[edi+2]
	push edx
	mov byte ptr [esp+0xB4],0x33
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x32
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x31
	test eax,eax
	je Block190

 Block189:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block190:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x30
	jne Block193

 Block191:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block197

 Block195:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block198:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x28]
	push edx
	push eax
	push edi
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x34
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block201

 Block199:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	add edi,0xC
	add ebx,4
	cmp edi,0x74
	jl Block186

 Block203:
	jmp Block247

 Block204:
	cmp eax,4
	jne Block226

 Block205:
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xA4],0x35
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x1C]
	push 0x1A
	push edx
	mov byte ptr [esp+0xB0],0x36
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x80]
	push ecx
	add eax,0x24
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x37
	push eax
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x30
	mov byte ptr [esp+0xB4],0x38
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x36
	test eax,eax
	je Block207

 Block206:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block207:
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push 0x2E
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x39
	call IWzCanvas::Copy
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xA0],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[ebx+0x2E]
	nop

 Block208:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block209:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xA4],0x3A
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block210:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x3B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x8C]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x3C
	call _xbstr_t::_ctor_0
	lea ecx,[edi+2]
	push ecx
	mov byte ptr [esp+0xB4],0x3D
	push 0x7D
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x3C
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x3B
	test eax,eax
	je Block212

 Block211:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block212:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x3A
	jne Block215

 Block213:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push edi
	push 0x6E
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x3E
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block224:
	add edi,0xC
	add ebx,4
	cmp edi,0x76
	jl Block208

 Block225:
	jmp Block247

 Block226:
	cmp eax,5
	jne Block247

 Block227:
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xA4],0x3F
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x40
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x80]
	push ecx
	add eax,0x28
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	mov bl,0x41
	push eax
	mov byte ptr [esp+0xB4],bl
	call Ztl_bstr_t::_ctor_1
	push 0x30
	mov byte ptr [esp+0xB4],0x42
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x40
	test eax,eax
	je Block229

 Block228:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block229:
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push 0x2E
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x43
	call IWzCanvas::Copy
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xA0],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[ebx+0x2E]
	lea ecx,[ecx]

 Block230:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block231:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xA4],0x44
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block232:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 0x1A
	push eax
	mov byte ptr [esp+0xB0],0x45
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x90]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x46
	call _xbstr_t::_ctor_0
	lea ecx,[edi+2]
	push ecx
	mov byte ptr [esp+0xB4],0x47
	push 0x7D
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x46
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x45
	test eax,eax
	je Block234

 Block233:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block234:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x44
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push edi
	push 0x6E
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x48
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block245

 Block243:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block246:
	add edi,0xC
	add ebx,4
	cmp edi,0xA6
	jl Block230

 Block247:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block249

 Block248:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block249:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call ecx
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
// CUIShopScannerCategory::~CUIShopScannerCategory
_SUB_EXCEPTION_HANDLER(446B30)
__SUB_CLASS_THIS0(00446B30, __thiscall, 54847,  CUIShopScannerCategory, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446B30
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerCategory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerCategory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerCategory::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x98]
	mov dword ptr [esp+0x14],2
	call CLayoutMan::~CLayoutMan
	push offset ZArray<ZXString<char>>::~ZArray<ZXString<char>>
	push 5
	push 4
	lea eax,[esi+0x80]
	push eax
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIShopScannerCategory>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIShopScannerHotList::OnCreate
_SUB_EXCEPTION_HANDLER(446DE0)
__SUB_CLASS_THIS(00446DE0, __thiscall, 54816,  CUIShopScannerHotList, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446DE0
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
	mov esi,ecx
	push 0
	push 0
	lea edi,[esi+0xAF0]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__1
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGIT
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGIT__13
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x88],0
	lea ebx,[esi+0x80]
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	cmp dword ptr [ebx+4],0
	je Block6

 Block5:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block6:
	mov edx,dword ptr [ebp+4]
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [ebx+4],edx
	mov dword ptr [esp+0x88],ebp
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x3EA
	push offset _S_UIUIWINDOW2IMGIT__12
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x88],1
	lea edi,[esi+0x88]
	test eax,eax
	je Block10

 Block9:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	cmp dword ptr [edi+4],0
	je Block12

 Block11:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block12:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [edi+4],ecx
	mov dword ptr [esp+0x88],ebp
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block14:
	lea ecx,[esp+0x4C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x8C],2
	mov dword ptr [esp+0x54],0
	mov dword ptr [esp+0x6C],0x69
	mov dword ptr [esp+0x70],0xB
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x88],3
	test eax,eax
	je Block16

 Block15:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x88],2
	test eax,eax
	je Block25

 Block18:
	add eax,8
	je Block25

 Block19:
	lea edi,[eax-8]
	test edi,edi
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block23

 Block22:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x4C]
	push edx
	push 0xA
	push 0x23
	push 0x3EB
	push esi
	call eax
	mov ecx,dword ptr [esi+0x94]
	push 0
	call CCtrlCheckBox::SetChecked
	push 0
	push 0
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	push 0x60
	push offset _S_UIUIWINDOW2IMGIT__11
	push 0
	push 0x30
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x30
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	push 0
	push 0
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	push 0x56
	push offset _S_UIUIWINDOW2IMGIT__10
	push 0
	push 0x2B
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2B
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ecx,esi
	call CWnd::CoverBackgrnd
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block24:
	push eax
	call _com_issue_error

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x8C],4
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOW2IMGIT__9
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x9C],6
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xA0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],7
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [esi+0x98]
	cmp edi,eax
	je Block35

 Block31:
	mov dword ptr [esi+0x98],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	test edi,edi
	je Block35

 Block34:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block35:
	mov ebp,8
	mov byte ptr [esp+0x88],bl
	cmp word ptr [esp+0x3C],bp
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [esp+0x88],4
	cmp word ptr [esp+0x2C],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [esp+0x88],2
	cmp word ptr [esp+0x14],bp
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x88],8
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov bl,9
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x88],0xA
	test edi,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block53:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov byte ptr [esp+0x88],8
	cmp word ptr [esp+0x2C],bp
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x88],2
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	xor ebx,ebx
	mov byte ptr [esp+0x88],0xB
	cmp edi,ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	cmp eax,ebx
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x88],2
	cmp eax,ebx
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov ecx,dword ptr [esp+0x58]
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],ebx
	mov dword ptr [esp+0x88],eax
	cmp ecx,ebx
	je Block69

 Block68:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x58],ebx

 Block69:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
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
// CUIShopScanner::OnMoveWnd
__SUB_CLASS_THIS(0043E950, __thiscall, 54888,  CUIShopScanner, void, long, long) {
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
	cmp dword ptr [esi+0xB34],0
	je Block6

 Block1:
	mov edi,dword ptr [esi+0x78]
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov ebx,dword ptr [esi+0xB34]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	mov edi,dword ptr [esp+0x14]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,edi
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd
	pop edi
	pop esi
	pop ebx
	ret 8

 Block6:
	cmp dword ptr [esi+0xB3C],0
	je Block12

 Block7:
	mov edi,dword ptr [esi+0x78]
	test edi,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov ebx,dword ptr [esi+0xB3C]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	mov edi,dword ptr [esp+0x14]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,edi
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd
	pop edi
	pop esi
	pop ebx
	ret 8

 Block12:
	mov ebx,dword ptr [esi+0xB44]
	test ebx,ebx
	je Block16

 Block13:
	mov edi,dword ptr [esi+0x78]
	test edi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,edi
	mov esi,eax
	call IWzCanvas::Getwidth
	add esi,eax
	push esi
	mov ecx,ebx
	call CWnd::MoveWnd

 Block16:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIShopScanResult::OnCreate
_SUB_EXCEPTION_HANDLER(443680)
__SUB_CLASS_THIS(00443680, __thiscall, 55098,  CUIShopScanResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_443680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor esi,esi
	push esi
	push esi
	lea ebx,[edi+0xB64]
	push edi
	mov ecx,ebx
	call CLayoutMan::Init
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],esi
	push esi
	push esi
	push esi
	push 1
	push offset _S_UIUIWINDOW2IMGIT__7
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x50],esi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov byte ptr [esp+0x38],1
	lea ebp,[edi+0x94]
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebp+4],esi
	je Block4

 Block3:
	push esi
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],esi

 Block4:
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],ecx
	mov byte ptr [esp+0x38],0
	cmp dword ptr [esp+0x1C],esi
	je Block6

 Block5:
	push esi
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	mov dword ptr [esp+0x14],esi
	mov ebx,0xA6
	lea ebp,[edi+0xA0]
	jmp Block8

 Block7:
	xor esi,esi

 Block8:
	push 0x52
	push offset _S_UIUIWINDOW2IMGIT__6
	push esi
	push 0x29
	lea ecx,[esp+0x3C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x29
	lea ecx,[esp+0x30]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],2
	cmp eax,esi
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov byte ptr [esp+0x38],0
	cmp eax,esi
	je Block15

 Block12:
	add eax,8
	cmp eax,esi
	je Block15

 Block13:
	lea esi,[eax-8]
	test esi,esi
	je Block15

 Block14:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],esi
	test eax,eax
	je Block19

 Block16:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 1
	push ebx
	push 0x146
	lea eax,[esi+0xBB8]
	push eax
	push edi
	call edx
	inc esi
	add ebx,0x14
	add ebp,8
	cmp ebx,0x146
	mov dword ptr [esp+0x14],esi
	jl Block7

 Block20:
	push 0
	push 0
	push 0
	push 0xFA1
	push offset _S_UIUIWINDOW2IMGIT__5
	lea eax,[esp+0x2C]
	lea ebx,[edi+0xB64]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x38],3
	test eax,eax
	je Block22

 Block21:
	add eax,0xC
	push eax
	call ebp

 Block22:
	mov eax,dword ptr [edi+0xE0]
	test eax,eax
	je Block31

 Block23:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block24:
	mov eax,dword ptr [edi+0xE0]
	test eax,eax
	je Block26

 Block25:
	add eax,8
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [edi+0xE0]
	test eax,eax
	je Block30

 Block28:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block30:
	mov dword ptr [edi+0xE0],0

 Block31:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [edi+0xE0],ecx
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block39

 Block32:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block35

 Block34:
	add eax,8
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block39

 Block37:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block39

 Block38:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block39:
	push 0
	push 0
	push 0
	push 0xFA0
	push offset _S_UIUIWINDOW2IMGIT__4
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x38],4
	test eax,eax
	je Block41

 Block40:
	add eax,0xC
	push eax
	call ebp

 Block41:
	mov eax,dword ptr [edi+0xE8]
	test eax,eax
	je Block50

 Block42:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block43:
	mov eax,dword ptr [edi+0xE8]
	test eax,eax
	je Block45

 Block44:
	add eax,8
	jmp Block46

 Block45:
	xor eax,eax

 Block46:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [edi+0xE8]
	test eax,eax
	je Block49

 Block47:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block49

 Block48:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block49:
	mov dword ptr [edi+0xE8],0

 Block50:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [edi+0xE8],ecx
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block58

 Block51:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block58

 Block52:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block54

 Block53:
	add eax,8
	jmp Block55

 Block54:
	xor eax,eax

 Block55:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block58

 Block56:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block58

 Block57:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block58:
	mov eax,dword ptr [edi+0x98]
	push eax
	mov ecx,edi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x14]
	push 0x23
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB60]
	add esp,8
	cmp esi,eax
	je Block63

 Block59:
	mov dword ptr [edi+0xB60],eax
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	test esi,esi
	je Block63

 Block62:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block63:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block67:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIShopScannerCategory::CUIShopScannerCategory
_SUB_EXCEPTION_HANDLER(446A30)
__SUB_CLASS_THIS(00446A30, __thiscall, 54845,  CUIShopScannerCategory, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446A30
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
	mov dword ptr [TSingleton<CUIShopScannerCategory>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIShopScannerCategory>::ms_pInstance],edi

 Block3:
	push offset ZArray<ZXString<char>>::~ZArray<ZXString<char>>
	push offset ZArray<ZXString<char>>::_ctor_default
	push 5
	push 4
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerCategory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerCategory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerCategory::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA8],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xF9
	push 0xBD
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],3
	call CWnd::CreateWnd
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
// CUIShopScannerCategory::AddtoList
__SUB_CLASS_THIS(0043E610, __thiscall, 54855,  CUIShopScannerCategory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	imul eax,0x2710
	mov dword ptr [ecx+0xB14],eax
	add eax,0x270F
	mov dword ptr [ecx+0xB18],eax
	mov dword ptr [ecx+0xB10],1
	ret 4
}
}
// CUIShopScanner::ToggleAddOn
_SUB_EXCEPTION_HANDLER(4475B0)
__SUB_CLASS_THIS(004475B0, __thiscall, 54895,  CUIShopScanner, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4475B0
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
	mov eax,dword ptr [esp+0x24]
	and eax,3
	cmp eax,3
	ja Block50

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block9
cmp EAX, 2
je Block21
cmp EAX, 3
je Block33


 Block2:
	cmp dword ptr [esi+0xB5C],0
	lea eax,[esi+0xB5C]
	je Block4

 Block3:
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	jne Block8

 Block4:
	cmp dword ptr [esi+0xB58],0
	lea eax,[esi+0xB58]
	je Block6

 Block5:
	mov ecx,dword ptr [esi+0xB34]
	test ecx,ecx
	jne Block47

 Block6:
	cmp dword ptr [esi+0xB60],0
	lea eax,[esi+0xB60]
	je Block50

 Block7:
	mov ecx,dword ptr [esi+0xB44]
	test ecx,ecx
	je Block50

 Block8:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	jmp Block49

 Block9:
	cmp dword ptr [esi+0xB5C],0
	lea eax,[esi+0xB5C]
	je Block12

 Block10:
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	je Block12

 Block11:
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block12:
	cmp dword ptr [esi+0xB60],0
	lea eax,[esi+0xB60]
	je Block15

 Block13:
	mov ecx,dword ptr [esi+0xB44]
	test ecx,ecx
	je Block15

 Block14:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block15:
	cmp dword ptr [esi+0xB34],0
	jne Block20

 Block16:
	push 0xB04
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block18

 Block17:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	push eax
	lea ecx,[esi+0x78]
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov edx,dword ptr [edi]
	mov ebp,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add ebp,eax
	push ebp
	mov ecx,ebx
	call CUIShopScannerHotList::_ctor_0
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push eax
	lea ecx,[esi+0xB30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIShopScannerHotList>::op_assign_ptr

 Block20:
	mov ecx,dword ptr [esi+0xB34]
	call CUIShopScannerHotList::Reset
	lea ecx,[esi+0xB58]
	push ecx
	mov ecx,dword ptr [esi+0xB34]
	jmp Block48

 Block21:
	cmp dword ptr [esi+0xB58],0
	lea eax,[esi+0xB58]
	je Block24

 Block22:
	mov ecx,dword ptr [esi+0xB34]
	test ecx,ecx
	je Block24

 Block23:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block24:
	cmp dword ptr [esi+0xB60],0
	lea eax,[esi+0xB60]
	je Block27

 Block25:
	mov ecx,dword ptr [esi+0xB44]
	test ecx,ecx
	je Block27

 Block26:
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block27:
	cmp dword ptr [esi+0xB3C],0
	jne Block32

 Block28:
	push 0xAC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],1
	test ebx,ebx
	je Block30

 Block29:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	push eax
	lea ecx,[esi+0x78]
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add ebp,eax
	push ebp
	mov ecx,ebx
	call CUIShopScannerCategory::_ctor_0
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push eax
	lea ecx,[esi+0xB38]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIShopScannerCategory>::op_assign_ptr

 Block32:
	mov ecx,dword ptr [esi+0xB3C]
	lea eax,[esi+0xB5C]
	jmp Block47

 Block33:
	cmp dword ptr [esi+0xB5C],0
	lea eax,[esi+0xB5C]
	je Block36

 Block34:
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	je Block36

 Block35:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block36:
	cmp dword ptr [esi+0xB58],0
	lea eax,[esi+0xB58]
	je Block39

 Block37:
	mov ecx,dword ptr [esi+0xB34]
	test ecx,ecx
	je Block39

 Block38:
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block39:
	cmp dword ptr [esi+0xB44],0
	jne Block46

 Block40:
	push 0xB70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],2
	test ebx,ebx
	je Block44

 Block41:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	push eax
	lea ecx,[esi+0x78]
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth

 Block42:
	mov ebp,eax
	mov eax,dword ptr [edi]

 Block43:
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add ebp,eax
	push ebp
	mov ecx,ebx
	call CUIShopScannerSearchResult::_ctor_0
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	push eax
	lea ecx,[esi+0xB40]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIShopScannerSearchResult>::op_assign_ptr

 Block46:
	mov ecx,dword ptr [esi+0xB44]
	call CUIShopScannerSearchResult::Reset
	mov ecx,dword ptr [esi+0xB44]
	lea eax,[esi+0xB60]

 Block47:
	push eax

 Block48:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx

 Block49:
	call CWnd::GetLayer
	mov ecx,esi
	call CUIShopScanner::OnToggleDetail

 Block50:
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
// CUIShopScanner::OnDestroy
__SUB_CLASS_THIS0(0043F140, __thiscall, 54886,  CUIShopScanner, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB34]
	push edi
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB34],0
	lea edi,[esi+0xB30]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIShopScannerHotList>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB3C],0
	lea edi,[esi+0xB38]
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CUIShopScannerCategory>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,dword ptr [esi+0xB44]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB44],0
	lea edi,[esi+0xB40]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	call ZRef<CUIShopScannerSearchResult>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block9:
	pop edi
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIShopScanResult::HitTest
__SUB_CLASS_THIS(0043E460, __thiscall, 55101,  CUIShopScanResult, int32_t, long, long, CCtrlWnd**) {
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
	mov ecx,0x45
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
// CUIShopScannerSearchResult::OnMouseMove
_SUB_EXCEPTION_HANDLER(43EEA0)
__SUB_CLASS_THIS(0043EEA0, __thiscall, 54761,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43EEA0
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
	mov edi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x28]
	push edi
	push ebx
	lea ecx,[esi-4]
	call CUIShopScannerSearchResult::GetIndexFromPoint
	test eax,eax
	jge Block2

 Block1:
	lea ecx,[esi+0xFC]
	call CUIToolTip::ClearToolTip
	jmp Block8

 Block2:
	push eax
	lea ecx,[esi+0xBC]
	call ZList<long>::FindIndex
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x14]
	push eax
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block4

 Block3:
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
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+ebx+0x14]
	push ecx
	lea ecx,[esi+0xFC]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x14]

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block8

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIShopScannerHotList::OnSetFocus
__SUB_CLASS_THIS(0043FDD0, __thiscall, 54817,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIShopScannerSearchResult::Reset
_SUB_EXCEPTION_HANDLER(446BF0)
__SUB_CLASS_THIS0(00446BF0, __thiscall, 54756,  CUIShopScannerSearchResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446BF0
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
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	xor ebx,ebx
	push ebx
	call edx
	mov eax,dword ptr [esi+0xB54]
	lea ecx,[esi+0xC0]
	mov dword ptr [esi+0xE8],ebx
	mov dword ptr [esi+0xF0],ebx
	mov dword ptr [esi+0xF4],ebx
	mov dword ptr [esi+0xEC],eax
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xD4]
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xEC]
	xor ebp,ebp
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block17

 Block1:
	cmp ebp,0x3E8
	jge Block17

 Block2:
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x34],ebx
	call ZList<ZRef<ITEMNAME>>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov edi,dword ptr [edi+4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	call CUIShopScanner::CanAddList
	cmp eax,ebx
	je Block13

 Block5:
	cmp ebp,0xA
	jge Block7

 Block6:
	lea ecx,[esi+0xC0]
	call ZList<long>::AddTail_
	mov edx,dword ptr [edi+4]
	mov dword ptr [eax],edx
	jmp Block9

 Block7:
	cmp ebp,0x14
	jge Block9

 Block8:
	lea ecx,[esi+0xD4]
	call ZList<long>::AddTail_
	mov ecx,dword ptr [edi+4]
	mov dword ptr [eax],ecx

 Block9:
	inc ebp
	cmp ebp,0xB
	jne Block11

 Block10:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esi+0xF0],edx
	jmp Block13

 Block11:
	cmp ebp,0x15
	jne Block13

 Block12:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0xF4],eax

 Block13:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block16

 Block15:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block16:
	mov eax,dword ptr [esp+0x18]
	xor ebx,ebx
	mov dword ptr [esp+0x24],0
	test eax,eax
	jne Block1

 Block17:
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*4]
	add ecx,ecx
	sub ebp,ecx
	mov dword ptr [esi+0xF8],ebx
	mov dword ptr [esi+0xFC],eax
	je Block19

 Block18:
	inc eax
	mov dword ptr [esi+0xFC],eax

 Block19:
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	cmp dword ptr [esi+0xDC],ebx
	je Block21

 Block20:
	push 1
	jmp Block22

 Block21:
	push ebx

 Block22:
	call eax
	mov esi,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push ebx
	call eax
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
// CUIShopScanner::HitTest
__SUB_CLASS_THIS(0043E430, __thiscall, 54891,  CUIShopScanner, int32_t, long, long, CCtrlWnd**) {
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
// CUIShopScanner::OnToggleDetail
_SUB_EXCEPTION_HANDLER(43E880)
__SUB_CLASS_THIS(0043E880, __thiscall, 54897,  CUIShopScanner, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43E880
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x14],0
	test cl,cl
	je Block3

 Block1:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block9

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8

 Block3:
	test eax,eax
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov esi,dword ptr [esp+0x20]
	mov edx,dword ptr [eax]
	xor ecx,ecx
	cmp dword ptr [esi],ecx
	mov edi,eax
	sete cl
	push ecx
	push eax
	mov eax,dword ptr [edx+0x11C]
	call eax
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	cmp dword ptr [esi],ecx
	mov dword ptr [esp+0x14],0xFFFFFFFF
	sete cl
	mov dword ptr [esi],ecx
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIShopScanResult::OnMouseMove
_SUB_EXCEPTION_HANDLER(446390)
__SUB_CLASS_THIS(00446390, __thiscall, 55102,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446390
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
	mov ebp,dword ptr [esp+0x40]
	cmp ebp,0xA9
	jge Block10

 Block1:
	cmp ebp,0x95
	jle Block54

 Block2:
	mov edi,dword ptr [esp+0x3C]
	lea eax,[edi-0x81]
	cmp eax,0x12
	ja Block4

 Block3:
	lea ecx,[esp+0x3C]
	push 0xE6A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],0
	jmp Block8

 Block4:
	lea edx,[edi-0xBF]
	cmp edx,0x12
	ja Block6

 Block5:
	lea eax,[esp+0x3C]
	push 0xE6B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],1
	jmp Block8

 Block6:
	lea edx,[edi-0xED]
	cmp edx,0x12
	ja Block54

 Block7:
	lea eax,[esp+0x3C]
	push 0xE6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],2

 Block8:
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0x108]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block55

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block55

 Block10:
	lea ecx,[ebp-0xA7]
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	js Block54

 Block11:
	mov eax,dword ptr [esi+0xFC]
	test eax,eax
	je Block54

 Block12:
	cmp ecx,dword ptr [eax-4]
	jae Block54

 Block13:
	mov edi,dword ptr [esp+0x3C]
	lea edx,[edi-0x108]
	cmp edx,0x37
	ja Block19

 Block14:
	mov ebx,dword ptr [esi+0xB50]
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block16

 Block15:
	mov edx,dword ptr [esi+0xFC]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x28]
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
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0x108]
	call CUIToolTip::ShowItemToolTip
	jmp Block55

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],3
	test eax,eax
	je Block18

 Block17:
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
	lea eax,[eax+ebp+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0x108]
	call CUIToolTip::ShowItemToolTip

 Block18:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block55

 Block19:
	lea edx,[edi-0x146]
	cmp edx,0x37
	ja Block29

 Block20:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[eax+ecx*8]
	push ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],ebx
	call ZRef<ITEMDATA>::_ctor_copy
	mov edi,dword ptr [esp+0x20]
	mov al,byte ptr [edi+0x20]
	mov dword ptr [esp+0x34],4
	test al,al
	jl Block27

 Block21:
	mov ebx,dword ptr [ebx+0x2060]
	movsx ecx,al
	cmp ecx,ebx
	je Block27

 Block22:
	lea edx,[esp+0x18]
	push 0xE60
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],0
	mov ebx,dword ptr [eax]
	movsx eax,byte ptr [edi+0x20]
	mov ecx,dword ptr [esp+0x14]
	push eax
	mov byte ptr [esp+0x38],6
	call CWvsContext::GetChannelName
	push eax
	mov eax,dword ptr [edi+0x14]
	xor edx,edx
	mov ecx,0x64
	div ecx
	push edx
	lea edx,[esp+0x48]
	push ebx
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebp+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x44]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x108]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],5
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],4
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<ITEMDATA>::~ZRef<ITEMDATA>
	jmp Block55

 Block27:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<ITEMDATA>::~ZRef<ITEMDATA>

 Block28:
	lea ecx,[esi+0x108]
	call CUIToolTip::ClearToolTip
	mov eax,1
	jmp Block56

 Block29:
	lea eax,[edi-0xE]
	cmp eax,0x39
	ja Block43

 Block30:
	mov eax,dword ptr [esi+0xFC]
	lea edi,[ecx*8]
	add eax,edi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	call ZXString16::CreateFromCharStr
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],7
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push 0x3C
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ebx
	mov byte ptr [esp+0x44],8
	call Ztl_bstr_t::_ctor_2
	lea edx,[esp+0x20]
	push 1
	push edx
	mov byte ptr [esp+0x48],9
	call get_basic_font
	add esp,8
	mov byte ptr [esp+0x40],0xA
	mov ecx,eax
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x40],0xB
	call IWzFont::CalcLongestText
	test ebx,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [ebx-4]
	shr ecx,1
	jmp Block33

 Block32:
	xor ecx,ecx

 Block33:
	cmp eax,ecx
	mov eax,dword ptr [esp+0x14]
	setne byte ptr [esp+0x40]
	mov byte ptr [esp+0x34],8
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],7
	call Ztl_variant_t::~Ztl_variant_t
	cmp byte ptr [esp+0x40],0
	je Block40

 Block36:
	lea eax,[esp+0x14]
	push 0x1A19
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],0
	mov ecx,dword ptr [esi+0xFC]
	mov eax,dword ptr [eax]
	add ecx,edi
	mov ecx,dword ptr [ecx+4]
	mov ecx,dword ptr [ecx+0x18]
	push ecx
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x40],0xD
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebp+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x44]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x108]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],0xC
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],7
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block41

 Block40:
	lea ecx,[esi+0x108]
	call CUIToolTip::ClearToolTip

 Block41:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test ebx,ebx
	je Block55

 Block42:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4
	jmp Block55

 Block43:
	add edi,0xFFFFFFB9
	cmp edi,0x32
	ja Block28

 Block44:
	mov eax,dword ptr [esi+0xFC]
	lea edi,[ecx*8]
	add eax,edi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x1C]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	call ZXString16::CreateFromCharStr
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],0xE
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	push eax
	push 0x37
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ebx
	mov byte ptr [esp+0x44],0xF
	call Ztl_bstr_t::_ctor_2
	lea ecx,[esp+0x20]
	push 1
	push ecx
	mov byte ptr [esp+0x48],0x10
	call get_basic_font
	add esp,8
	mov byte ptr [esp+0x40],0x11
	mov ecx,eax
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x40],0x12
	call IWzFont::CalcLongestText
	test ebx,ebx
	je Block46

 Block45:
	mov ecx,dword ptr [ebx-4]
	shr ecx,1
	jmp Block47

 Block46:
	xor ecx,ecx

 Block47:
	cmp eax,ecx
	mov eax,dword ptr [esp+0x14]
	setne byte ptr [esp+0x40]
	mov byte ptr [esp+0x34],0xF
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],0xE
	call Ztl_variant_t::~Ztl_variant_t
	cmp byte ptr [esp+0x40],0
	je Block40

 Block50:
	lea ecx,[esp+0x14]
	push 0x1A19
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],0
	mov ecx,dword ptr [esi+0xFC]
	mov eax,dword ptr [eax]
	add ecx,edi
	mov ecx,dword ptr [ecx+4]
	mov edx,dword ptr [ecx+0x1C]
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x40],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	add esp,0xC
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x44]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x108]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],0x13
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0xE
	test eax,eax
	je Block41

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block41

 Block54:
	lea ecx,[esi+0x108]
	call CUIToolTip::ClearToolTip

 Block55:
	xor eax,eax

 Block56:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// CUIShopScanResult::OnShopLinkResult
_SUB_EXCEPTION_HANDLER(447D60)
// 848024
static uint8_t _SUB_447D60_LOOKUP_TABLE_0[24] = {
0, 1, 2, 3, 4, 9, 9, 5, 9, 9, 9, 9, 9, 9, 9, 9, 
9, 6, 7, 9, 9, 9, 9, 8, 
};
__SUB_CLASS_THIS(00447D60, __thiscall, 55104,  CUIShopScanResult, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_447D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],ebx
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0x17
	ja Block13

 Block1:
	movzx eax,byte ptr [eax+_SUB_447D60_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block12
cmp EAX, 1
je Block2
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7
cmp EAX, 5
je Block8
cmp EAX, 6
je Block9
cmp EAX, 7
je Block10
cmp EAX, 8
je Block11
cmp EAX, 9
je Block13


 Block2:
	lea ecx,[esp+0x44]
	push 0x199
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x108]
	push ebx
	lea ecx,[esi+0x104]
	mov byte ptr [eax+0x20],0xFF
	call ZRef<ITEMDATA>::op_assign_zero
	mov ecx,esi
	call CUIShopScanResult::LoadCurPageItemList
	jmp Block17

 Block5:
	lea edx,[esp+0x10]
	push 0x19A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block14

 Block6:
	lea eax,[esp+0x14]
	push 0x19B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block14

 Block7:
	lea ecx,[esp+0x18]
	push 0x19C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block14

 Block8:
	lea edx,[esp+0x1C]
	push 0x19F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block14

 Block9:
	lea eax,[esp+0x20]
	push 0x1BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block14

 Block10:
	lea ecx,[esp+0x24]
	push 0xDAE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block14

 Block11:
	lea edx,[esp+0x28]
	push 0xE61
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block14

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret 4

 Block13:
	lea eax,[esp+0x2C]
	push 0x19E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]

 Block14:
	mov byte ptr [esp+0x3C],bl

 Block15:
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x44],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x20]
	add esp,0x14
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret 4
}
}
// CUIShopScannerHotList::CUIShopScannerHotList
_SUB_EXCEPTION_HANDLER(43FCE0)
__SUB_CLASS_THIS(0043FCE0, __thiscall, 54813,  CUIShopScannerHotList, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43FCE0
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
	mov dword ptr [TSingleton<CUIShopScannerHotList>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIShopScannerHotList>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerHotList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerHotList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerHotList::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x18],5
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAF0],edi
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB00],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xF9
	push 0xBD
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],7
	call CWnd::CreateWnd
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
// CUIShopScannerHotList::OnMouseMove
_SUB_EXCEPTION_HANDLER(43EFB0)
__SUB_CLASS_THIS(0043EFB0, __thiscall, 54821,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43EFB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebp,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov esi,dword ptr [edi+0xA0]
	add ebp,0xB08
	neg esi
	sbb esi,esi
	and esi,5
	lea eax,[esi+5]
	mov dword ptr [esp+0x14],eax
	mov ebx,0x42
	mov edi,edi

 Block1:
	mov ecx,ebp
	call ZArray<long>::GetCount
	mov ecx,dword ptr [esp+0x14]
	cmp eax,ecx
	jl Block3

 Block2:
	mov eax,ecx

 Block3:
	cmp esi,eax
	jge Block14

 Block4:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]
	lea ecx,[ebx-0x23]
	push edx
	mov dword ptr [esp+0x28],ecx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x2C],0xC
	mov dword ptr [esp+0x34],0xB5
	mov dword ptr [esp+0x38],ebx
	call PtInRect
	test eax,eax
	je Block7

 Block5:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+esi*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x38],0
	test eax,eax
	jne Block8

 Block6:
	mov dword ptr [esp+0x38],0xFFFFFFFF

 Block7:
	inc esi
	add ebx,0x26
	jmp Block1

 Block8:
	mov edx,dword ptr [edi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0xA4]
	call CUIToolTip::ShowItemToolTip
	cmp dword ptr [edi+0x9C],esi
	je Block10

 Block9:
	mov dword ptr [edi+0x9C],esi

 Block10:
	push 0
	lea ecx,[edi-4]
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block12:
	mov eax,dword ptr [esp+0x1C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block15

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block15

 Block14:
	lea ecx,[edi+0xA4]
	call CUIToolTip::ClearToolTip

 Block15:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CUIShopScanResult::OnKey
__SUB_CLASS_THIS(00449980, __thiscall, 55103,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIShopScannerHotList::Reset
__SUB_CLASS_THIS0(0043E5A0, __thiscall, 54815,  CUIShopScannerHotList, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov dword ptr [esi+0xA4],0
	pop esi
	ret
}
}
// CUIShopScanner::IsMyAddon
__SUB_CLASS_THIS(0043F630, __thiscall, 54892,  CUIShopScanner, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIShopScannerHotList>::ms_pInstance]
	mov ecx,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	cmp eax,ecx
	je Block6

 Block2:
	mov eax,dword ptr [TSingleton<CUIShopScannerCategory>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	cmp eax,ecx
	je Block6

 Block4:
	mov eax,dword ptr [TSingleton<CUIShopScannerSearchResult>::ms_pInstance]
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
// CUIShopScanner::SearchItemName
_SUB_EXCEPTION_HANDLER(447950)
__SUB_CLASS_THIS(00447950, __thiscall, 54898,  CUIShopScanner, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_447950
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	cmp eax,ebx
	je Block19

 Block1:
	cmp byte ptr [eax],bl
	je Block18

 Block2:
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],1
	xor esi,esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block7

 Block3:
	mov edi,edi

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov al,byte ptr [esi+eax]
	cmp al,0x20
	je Block6

 Block5:
	push 1
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x18],al
	call ZXString<char>::_Cat

 Block6:
	lea ecx,[esp+0x28]
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block4

 Block7:
	lea edx,[esp+0x14]
	lea esi,[edi+0xB24]
	push edx
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block13

 Block8:
	cmp byte ptr [eax],bl
	je Block13

 Block9:
	push 1
	push ebx
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esi]
	add esp,4
	cmp eax,ebx
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block13:
	cmp dword ptr [edi+0xB60],ebx
	jne Block15

 Block14:
	push 3
	mov ecx,edi
	call CUIShopScanner::ToggleAddOn

 Block15:
	mov ecx,dword ptr [edi+0xB44]
	mov dword ptr [edi+0xB0C],ebx
	call CUIShopScannerSearchResult::Reset
	mov ecx,dword ptr [edi+0xB44]
	push ebx
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x28]

 Block18:
	cmp eax,ebx

 Block19:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIShopScannerHotList::OnButtonClicked
__SUB_CLASS_THIS(00448670, __thiscall, 54819,  CUIShopScannerHotList, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,0x3E8
	jne Block2

 Block1:
	pop esi
	mov dword ptr [esp+4],0
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	jmp  CUIShopScanner::ToggleAddOn

 Block2:
	cmp eax,0x3E9
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xA4],0
	call CWnd::InvalidateRect
	pop esi
	ret 4

 Block4:
	cmp eax,0x3EA
	jne Block6

 Block5:
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov dword ptr [esi+0xA4],1

 Block6:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CUIShopScanResult::~CUIShopScanResult
_SUB_EXCEPTION_HANDLER(4499E0)
__SUB_CLASS_THIS0(004499E0, __thiscall, 55097,  CUIShopScanResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4499E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScanResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScanResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScanResult::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB64]
	mov dword ptr [esp+0x20],9
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB60]
	xor ebx,ebx
	mov byte ptr [esp+0x20],8
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x10C]
	mov byte ptr [esp+0x20],7
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x20],6
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
	mov dword ptr [esi+0x108],ebx

 Block7:
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x20],5
	call ZArray<ZRef<ITEMDATA>>::RemoveAll
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x20],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ITEMDATA>>::`vftable'
	call ZList<ZRef<ITEMDATA>>::RemoveAll
	lea edi,[esi+0xE4]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	lea edi,[esi+0xDC]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 8
	push 8
	lea eax,[esi+0x9C]
	push eax
	mov byte ptr [esp+0x30],1
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x20],bl
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
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
// CUIShopScannerCategory::OnCreate
_SUB_EXCEPTION_HANDLER(441170)
__SUB_CLASS_THIS(00441170, __thiscall, 54848,  CUIShopScannerCategory, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_441170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea esi,[edi+0x98]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	push ebx
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__1
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	push ebx
	push ebx
	push ebx
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGIT
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x5C],ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x44],1
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x48],2
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],3
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
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
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],1
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	cmp esi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push esi
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	lea eax,[esp+0x14]
	push 0x27A
	push eax
	mov dword ptr [edi+0x94],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x80]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],5
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	lea ecx,[esp+0x14]
	push 0x27D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	lea edx,[esp+0x14]
	push 0x27F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea eax,[esp+0x14]
	push 0x280
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea ecx,[esp+0x14]
	push 0x289
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],9
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea edx,[esp+0x14]
	push 0x282
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xA
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea eax,[esp+0x14]
	push 0x281
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xB
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea ecx,[esp+0x14]
	push 0x284
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xC
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea edx,[esp+0x14]
	push 0x283
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xD
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea eax,[esp+0x14]
	push 0x28B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xE
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea ecx,[esp+0x14]
	push 0x28C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea edx,[esp+0x14]
	push 0x28D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x84]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x10
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea eax,[esp+0x14]
	push 0x28E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x11
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	lea ecx,[esp+0x14]
	push 0x28F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x12
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	lea edx,[esp+0x14]
	push 0x290
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x13
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea eax,[esp+0x14]
	push 0x1A63
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x14
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	lea ecx,[esp+0x14]
	push 0x291
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x88]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x15
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	lea edx,[esp+0x14]
	push 0x292
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x16
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea eax,[esp+0x14]
	push 0x293
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x17
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	lea ecx,[esp+0x14]
	push 0x294
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x18
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	lea edx,[esp+0x14]
	push 0x26A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x8C]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x19
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	lea eax,[esp+0x14]
	push 0x26B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1A
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	lea ecx,[esp+0x14]
	push 0x26C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1B
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	lea edx,[esp+0x14]
	push 0x26D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea eax,[esp+0x14]
	push 0x26E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1D
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	lea ecx,[esp+0x14]
	push 0x26F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1E
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	lea edx,[esp+0x14]
	push 0x270
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x90]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1F
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	lea eax,[esp+0x14]
	push 0x271
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x20
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	lea ecx,[esp+0x14]
	push 0x272
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x21
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	lea edx,[esp+0x14]
	push 0x273
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x22
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	lea eax,[esp+0x14]
	push 0x274
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x23
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	lea ecx,[esp+0x14]
	push 0x275
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x24
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	lea edx,[esp+0x14]
	push 0x276
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x25
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	lea eax,[esp+0x14]
	push 0x277
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x26
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	lea ecx,[esp+0x14]
	push 0x278
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x27
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	lea edx,[esp+0x14]
	push 0x279
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x28
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUIShopScannerSearchResult::Draw
_SUB_EXCEPTION_HANDLER(43FF10)
__SUB_CLASS_THIS(0043FF10, __thiscall, 54759,  CUIShopScannerSearchResult, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43FF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebp,ebp
	mov dword ptr [esp+0x80],ebp
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [edi+0xCC]
	mov esi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],1
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block35

 Block1:
	mov ebx,0x22
	mov dword ptr [esp+0x1C],ebx
	lea ebx,[ebx]

 Block2:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x88],0x18
	cmp edx,dword ptr [edi+0xA8]
	jne Block13

 Block3:
	cmp esi,ebp
	je Block66

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFF999999
	push 0x10
	push 0xA3
	add ebx,0xFFFFFFFB
	push ebx
	push 0xC
	push esi
	call ecx
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],ecx
	mov ebx,dword ptr [esp+0x38]
	mov edx,dword ptr [edi+0xA4]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [ebp+0x80]
	push ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x5C]
	push 0x10
	push esi
	mov byte ptr [esp+0xA0],2
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],1
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [esp+0x88],0x16
	jmp Block20

 Block11:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x88],0x16
	jmp Block20

 Block13:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],ecx
	mov byte ptr [esp+0x80],dl
	mov edx,dword ptr [edi+0xA0]
	cmp esi,ebp
	je Block66

 Block14:
	mov ebx,dword ptr [esp+0x48]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	push edx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x68]
	lea edx,[ebx+2]
	push edx
	push 0x11
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x80]
	push esi
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],1
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	lea eax,[esp+0x20]
	push eax
	call ZList<long>::GetNext
	mov ecx,dword ptr [eax]
	add esp,4
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x84],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push 0x91
	push ecx
	mov ecx,dword ptr [esp+0x90]
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	push eax
	call get_basic_font
	lea edx,[esp+0x28]
	add esp,8
	push edx
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[esp+0x68]
	push eax
	call ebp
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block60

 Block23:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x84],5
	call ebp
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block60

 Block24:
	mov eax,dword ptr [esp+0x88]
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x90],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x98],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x94],7
	call _xbstr_t::_ctor_0
	lea eax,[ebx-1]
	push eax
	mov byte ptr [esp+0x94],8
	push 0x19
	mov ecx,esi
	mov byte ptr [esp+0x98],7
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],6
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov ebp,8
	mov byte ptr [esp+0x80],5
	cmp word ptr [esp+0x58],bp
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x68],bp
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	inc dword ptr [esp+0x14]
	add ebx,0x13
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0x20],ebp
	jne Block2

 Block35:
	mov dword ptr [esp+0x20],ebp
	mov ecx,dword ptr [edi+0xFC]
	push ecx
	lea edx,[esp+0x24]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x8C],9
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0xB
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [edi+0xF8]
	mov edi,dword ptr [edi+0xFC]
	inc eax
	cmp edi,eax
	mov byte ptr [esp+0x80],0xC
	jge Block39

 Block38:
	mov eax,edi

 Block39:
	push eax
	lea eax,[esp+0x20]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x8C],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],0xE
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,ebp
	je Block61

 Block42:
	mov eax,dword ptr [ebx-4]
	cmp eax,3
	jge Block49

 Block43:
	mov edi,3
	sub edi,eax
	mov bl,0xF
	jmp Block45

 Block45:
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x2C]
	push offset _S_0__1
	push edx
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x84],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],0xE
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	sub edi,1
	jne Block45

 Block48:
	mov ebx,dword ptr [esp+0x14]

 Block49:
	mov ecx,dword ptr [esp+0x88]
	cmp ecx,ebp
	je Block62

 Block50:
	mov eax,dword ptr [ecx-4]
	cmp eax,3
	jge Block57

 Block51:
	mov edi,3
	sub edi,eax
	jmp Block53

 Block53:
	lea eax,[esp+0x88]
	push eax
	lea ecx,[esp+0x2C]
	push offset _S_0__1
	push ecx
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x84],0x10
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],0xE
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	sub edi,1
	jne Block53

 Block56:
	mov ecx,dword ptr [esp+0x88]

 Block57:
	mov dword ptr [esp+0x24],ebp
	push ebx
	push ecx
	lea edx,[esp+0x2C]
	push offset _S_SS__1
	push edx
	mov byte ptr [esp+0x90],0x11
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],0x13
	cmp eax,ebp
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push eax
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block60:
	push eax
	call _com_issue_error

 Block61:
	xor eax,eax
	jmp Block43

 Block62:
	xor eax,eax
	jmp Block51

 Block63:
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0x84],0x14
	call edi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x38]
	push 0x18
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x90],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x30]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x94],0x16
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x90],0x17
	cmp esi,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	push 0xE3
	push 0x46
	mov ecx,esi
	mov byte ptr [esp+0x98],0x16
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebp
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov ebx,8
	mov byte ptr [esp+0x80],0x14
	cmp word ptr [esp+0x68],bx
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [esp+0x80],0x13
	cmp word ptr [esp+0x58],bx
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0x80],0xE
	cmp edi,ebp
	je Block79

 Block78:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],0xB
	cmp eax,ebp
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],1
	cmp eax,ebp
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4
}
}
// CUIShopScanResult::CUIShopScanResult
_SUB_EXCEPTION_HANDLER(449840)
__SUB_CLASS_THIS(00449840, __thiscall, 55095,  CUIShopScanResult, void, long, ZList<ZRef<ITEMDATA> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_449840
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScanResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScanResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScanResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esi+0x98],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 8
	push 8
	lea eax,[esi+0x9C]
	push eax
	mov byte ptr [esp+0x34],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE8],edi
	lea ebx,[esi+0xEC]
	int 3// TODO: 	mov dword ptr [ebx],offset ZList<ZRef<ITEMDATA>>::`vftable'
	mov dword ptr [ebx+8],edi
	mov dword ptr [ebx+0xC],edi
	mov dword ptr [ebx+0x10],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x108],edi
	lea ecx,[esi+0x10C]
	mov byte ptr [esp+0x20],7
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB74],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGIT__20
	mov ecx,esi
	mov byte ptr [esp+0x30],0xA
	call CDialog::CreateDlg_2
	mov ecx,ebx
	call ZList<ZRef<ITEMDATA>>::RemoveAll
	mov ebp,dword ptr [esp+0x2C]
	push ebp
	mov ecx,ebx
	call ZList<ZRef<ITEMDATA>>::AddTail_List
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xB54],ecx
	mov dword ptr [esi+0xB58],edi
	mov edx,dword ptr [ebp+8]
	add edx,7
	shr edx,3
	mov ecx,esi
	mov dword ptr [esi+0xB5C],edx
	call CUIShopScanResult::LoadCurPageItemList
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
// CUIShopScannerSearchResult::~CUIShopScannerSearchResult
_SUB_EXCEPTION_HANDLER(43FB40)
__SUB_CLASS_THIS0(0043FB40, __thiscall, 54756,  CUIShopScannerSearchResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43FB40
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerSearchResult::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB5C]
	mov dword ptr [esp+0x1C],0xC
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xB48]
	mov byte ptr [esp+0x1C],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ITEMNAME>>::`vftable'
	call ZList<ZRef<ITEMNAME>>::RemoveAll
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x1C],0xA
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x1C],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x1C],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xA4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIShopScannerSearchResult>::ms_pInstance],ebx
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
// CUIShopScannerCategory::OnChildNotify
__SUB_CLASS_THIS(0043E410, __thiscall, 54851,  CUIShopScannerCategory, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CUIShopScanResult::OnButtonClicked
_SUB_EXCEPTION_HANDLER(448E80)
__SUB_CLASS_THIS(00448E80, __thiscall, 55100,  CUIShopScanResult, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_448E80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],ebx
	cmp edi,0xFA0
	ja Block9

 Block1:
	je Block7

 Block2:
	cmp edi,0xBB8
	jb Block10

 Block3:
	cmp edi,0xBBF
	ja Block10

 Block4:
	push 0x49
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xB58]
	lea eax,[edi+eax*8-0xBB8]
	push eax
	lea ecx,[esi+0xEC]
	call ZList<ZRef<ITEMDATA>>::FindIndex
	push eax
	lea ecx,[esp+0x18]
	call ZRef<ITEMDATA>::_ctor_copy
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],2
	cmp dword ptr [edi+0x2C],ebx
	jne Block6

 Block5:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov edx,dword ptr [edi+0x14]
	push edx
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x104]
	call ZRef<ITEMDATA>::op_assign_copy

 Block6:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x34],1
	call ZRef<ITEMDATA>::~ZRef<ITEMDATA>
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],bl
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4

 Block7:
	mov eax,dword ptr [esi+0xB58]
	mov ecx,dword ptr [esi+0xB5C]
	inc eax
	dec ecx
	cmp ecx,eax
	jge Block17

 Block8:
	mov eax,ecx
	jmp Block17

 Block9:
	cmp edi,0xFA1
	je Block16

 Block10:
	cmp edi,1
	jne Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4

 Block12:
	cmp edi,2
	jne Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4

 Block14:
	cmp edi,8
	jne Block18

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4

 Block16:
	mov eax,dword ptr [esi+0xB58]
	sub eax,1
	mov ecx,0
	sets cl
	dec ecx
	and eax,ecx

 Block17:
	mov ecx,esi
	mov dword ptr [esi+0xB58],eax
	call CUIShopScanResult::LoadCurPageItemList
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect

 Block18:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIShopScannerCategory::AddtoList
__SUB_CLASS_THIS(0043E640, __thiscall, 54854,  CUIShopScannerCategory, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [eax+0xB14],ecx
	mov dword ptr [eax+0xB18],edx
	mov dword ptr [eax+0xB10],1
	ret 8
}
}
// CUIShopScannerSearchResult::CUIShopScannerSearchResult
_SUB_EXCEPTION_HANDLER(43F9C0)
__SUB_CLASS_THIS(0043F9C0, __thiscall, 54754,  CUIShopScannerSearchResult, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43F9C0
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
	mov dword ptr [TSingleton<CUIShopScannerSearchResult>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIShopScannerSearchResult>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIShopScannerSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShopScannerSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShopScannerSearchResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	int 3// TODO: 	mov eax,offset ZList<long>::`vftable'
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x18],0xA
	call CUIToolTip::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0xB48],offset ZList<ZRef<ITEMNAME>>::`vftable'
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xF9
	push 0xBD
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],0xD
	call CWnd::CreateWnd
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
// CUIShopScanner::Update
__SUB_CLASS_THIS0(0043F1E0, __thiscall, 54886,  CUIShopScanner, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	add dword ptr [esi+0xB64],0xFFFFFFE2
	jns Block13

 Block1:
	cmp dword ptr [esi+0xB58],0
	push edi
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0xB34]
	test ecx,ecx
	je Block5

 Block3:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB34],0
	lea edi,[esi+0xB30]
	je Block5

 Block4:
	push 0
	mov ecx,edi
	call ZRef<CUIShopScannerHotList>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block5:
	cmp dword ptr [esi+0xB5C],0
	jne Block9

 Block6:
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB3C],0
	lea edi,[esi+0xB38]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	call ZRef<CUIShopScannerCategory>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block9:
	cmp dword ptr [esi+0xB60],0
	pop edi
	jne Block13

 Block10:
	mov ecx,dword ptr [esi+0xB44]
	test ecx,ecx
	je Block13

 Block11:
	call CWnd::Destroy
	add esi,0xB40
	cmp dword ptr [esi+4],0
	je Block13

 Block12:
	push 0
	mov ecx,esi
	call ZRef<CUIShopScannerSearchResult>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block13:
	pop esi
	ret
}
}
// CUIShopScanner::SetCtrl
_SUB_EXCEPTION_HANDLER(4473E0)
__SUB_CLASS_THIS0(004473E0, __thiscall, 54886,  CUIShopScanner, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4473E0
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
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGIT__16
	lea eax,[esp+0x28]
	lea esi,[edi+0xB68]
	push eax
	mov ecx,esi
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
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGIT__15
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
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
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGIT__14
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	lea ecx,[esp+0x1C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x40],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	lea ecx,[esp+0x30]
	cmp ecx,esi
	je Block11

 Block7:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],ebx

 Block9:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block11

 Block10:
	add eax,8
	push eax
	call ebp

 Block11:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release

 Block13:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x50],0x100
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block23

 Block17:
	add eax,8
	cmp eax,ebx
	je Block23

 Block18:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block20

 Block19:
	lea edx,[esi+0xC]
	push edx
	call ebp

 Block20:
	mov eax,dword ptr [edi+0xB2C]
	mov dword ptr [edi+0xB2C],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block22

 Block21:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block22:
	mov ecx,dword ptr [edi+0xB2C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x1C]
	push edx
	push 0x10
	push 0x82
	push 0x4F
	push 0x17
	push 0x7D3
	push edi
	call eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret

 Block23:
	xor esi,esi
	jmp Block20
}
}
// CUIShopScannerSearchResult::OnMouseButton
_SUB_EXCEPTION_HANDLER(4406D0)
__SUB_CLASS_THIS(004406D0, __thiscall, 54762,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4406D0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x34]
	cmp edi,0x202
	je Block2

 Block1:
	cmp edi,0x203
	jne Block33

 Block2:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push eax
	lea ebp,[esi-4]
	push ecx
	mov ecx,ebp
	call CUIShopScannerSearchResult::GetIndexFromPoint
	cmp edi,0x202
	jne Block9

 Block3:
	cmp dword ptr [esi+0xA4],eax
	je Block33

 Block4:
	cmp eax,ebx
	mov dword ptr [esi+0xA4],eax
	jl Block7

 Block5:
	cmp eax,0xA
	jge Block7

 Block6:
	push 1
	jmp Block8

 Block7:
	push ebx

 Block8:
	mov esi,dword ptr [esi+0x90]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	call eax
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	jmp Block34

 Block9:
	cmp edi,0x203
	jne Block33

 Block10:
	cmp eax,ebx
	jl Block33

 Block11:
	push eax
	lea ecx,[esi+0xBC]
	call ZList<long>::FindIndex
	mov ebp,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0x98]
	mov eax,dword ptr [eax+0x48]
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebx
	je Block13

 Block12:
	lea edx,[esp+0x20]
	push 0xE57
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],1
	mov ebx,1
	jmp Block14

 Block13:
	lea eax,[esp+0x1C]
	push 0xE56
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x2C],ebx

 Block14:
	mov edi,dword ptr [eax]
	lea ecx,[esp+0x18]
	push 0xE55
	push ecx
	mov dword ptr [esp+0x1C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],3
	mov dword ptr [esp+0x3C],0
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push edi
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x2C],6
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],7
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov byte ptr [esp+0x2C],8
	test bl,2
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov byte ptr [esp+0x2C],9
	test bl,1
	je Block24

 Block22:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x48]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block29

 Block25:
	mov esi,dword ptr [esi+0x98]
	mov esi,dword ptr [esi+0x48]
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	push esi
	push ebp
	call CUIShopScanner::SendScanPacket
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block34

 Block29:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esi+0xFC]
	call CUIToolTip::ClearToolTip

 Block34:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CUIShopScanner::SendScanPacket
__SUB_CLASS_THIS(0043F6B0, __thiscall, 54899,  CUIShopScanner, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	lea esi,[ecx+0xB48]
	push eax
	mov ecx,esi
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call COutPacket::Encode1
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov edi,eax
	jne Block4

 Block1:
	mov eax,dword ptr [eax+0x20CC]
	mov edx,dword ptr [eax+0x69]
	push edx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block4

 Block2:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block4

 Block3:
	call get_update_time
	push eax
	mov ecx,esi
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push esi
	call CClientSocket::SendPacket
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,eax
	mov dword ptr [eax+0x20B8],1
	call get_update_time
	mov dword ptr [esi+0x20BC],eax

 Block4:
	pop edi
	pop esi
	ret 8
}
}
