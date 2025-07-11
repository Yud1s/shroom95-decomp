#include "regen.hpp"
// CSWnd_Oneaday.ipp
#include "CSWnd_Oneaday.hpp"

// CCSWnd_OneADay::DrawToday
_SUB_EXCEPTION_HANDLER(D3C50)
__SUB_CLASS_THIS(000D3C50, __thiscall, 48979,  CCSWnd_OneADay, void, NakedParam<_x_com_ptr<IWzCanvas>>, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D3C50
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
	xor ebx,ebx
	mov dword ptr [esp+0x74],ebx
	call CCSWnd_OneADay::IsEmptyOneADayItem
	test eax,eax
	je Block9

 Block1:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFF
	mov ecx,dword ptr [esp+0x7C]
	mov esi,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x74],1
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	push esi
	push 0x53
	push 2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],0
	jne Block6

 Block4:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,ebx
	je Block84

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block84

 Block9:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x78],2
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push ebx
	push ebx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x16A4
	push ecx
	mov byte ptr [esp+0x90],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x88],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x88],3
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ebp,8
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x4C],bp
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x74],8
	cmp word ptr [esp+0x1C],bp
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov bl,9
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x2C],bp
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
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xA
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x3C]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	call CCSWnd_OneADay::GetPlateRect_0
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esp+0x7C]
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x74],0xB
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x60]
	push eax
	mov eax,dword ptr [esp+0x68]
	push eax
	push edx
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	mov ecx,esi
	call CCSWnd_OneADay::GetOneADayItemSN
	push eax
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x8C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov ecx,esi
	call CCSWnd_OneADay::DrawCommodity
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esi+0xB68]
	mov eax,0x66666667
	imul ecx
	mov ecx,dword ptr [esp+0x7C]
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov eax,dword ptr [esi+eax*4+0xF4]
	mov byte ptr [esp+0x74],0xC
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push 0x108
	push 0x91
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [esi+0xB68]
	cdq
	mov ecx,0xA
	idiv ecx
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xD
	mov edx,dword ptr [esi+edx*4+0xF4]
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x3C]
	push eax
	push edx
	push 0x108
	push 0xB6
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esi+0xB6C]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,dword ptr [esi+ecx*4+0xF4]
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xE
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push 0x108
	push 0xE8
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [esi+0xB6C]
	cdq
	mov ecx,0xA
	idiv ecx
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xF
	mov edx,dword ptr [esi+edx*4+0xF4]
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea eax,[esp+0x3C]
	push eax
	push edx
	push 0x108
	push 0x10D
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esi+0xB70]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,dword ptr [esi+ecx*4+0xF4]
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0x10
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push 0x108
	push 0x13F
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [esi+0xB70]
	cdq
	mov ecx,0xA
	idiv ecx
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0x11
	mov edx,dword ptr [esi+edx*4+0xF4]
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea eax,[esp+0x3C]
	push eax
	push edx
	push 0x108
	push 0x164
	call IWzCanvas::Copy
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bp
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
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
// CCSWnd_OneADay::DrawCommodity
_SUB_EXCEPTION_HANDLER(D1980)
__SUB_CLASS_THIS(000D1980, __thiscall, 48981,  CCSWnd_OneADay, void, NakedParam<_x_com_ptr<IWzCanvas>>, const tagRECT&, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D1980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x60],ebx
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	mov eax,dword ptr [ebp+0x78]
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ebp-4],esi
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [ebp+0x28]
	cmp eax,esi
	jne Block3

 Block1:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block262

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block262

 Block3:
	mov dword ptr [ebp+0x2C],esi
	mov edi,dword ptr [ebp+0x74]
	mov ecx,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	mov byte ptr [ebp-4],2
	cmp dword ptr [ebx+0xB7C],esi
	jne Block5

 Block4:
	add ecx,0x89
	push 4
	add edx,0xE
	jmp Block6

 Block5:
	add ecx,0x49
	push 2
	add edx,7

 Block6:
	push esi
	push esi
	push 1
	push esi
	push 1
	push esi
	push ecx
	push edx
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x40],esp
	cmp eax,esi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebp+0x28]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [ebp+0x28]
	add ecx,0x10
	call TSecType<long>::GetData
	push 2
	push 0xE
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block13

 Block11:
	lea edx,[ebp+0x54]
	push 0x24F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	cmp dword ptr [ebx+0xB7C],esi
	jne Block15

 Block14:
	lea eax,[ebp-0x18]
	push 0x61
	push eax
	call get_basic_font
	add esp,8
	mov byte ptr [ebp-4],5
	mov ebx,1
	jmp Block16

 Block15:
	lea ecx,[ebp-0x10]
	push 1
	push ecx
	call get_basic_font
	add esp,8
	mov ebx,2

 Block16:
	mov esi,dword ptr [eax]
	mov dword ptr [ebp+0x5C],ebx
	mov dword ptr [ebp+4],esi
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block18:
	mov dword ptr [ebp-4],6
	test bl,2
	je Block21

 Block19:
	mov eax,dword ptr [ebp-0x10]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov byte ptr [ebp-4],7
	test bl,1
	je Block24

 Block22:
	mov eax,dword ptr [ebp-0x18]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	push 0xE5
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block26

 Block25:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block26:
	lea edx,[ebp+0x2C]
	push edx
	call format_string_1
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	cmp dword ptr [eax+0xB7C],0
	jne Block218

 Block27:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	lea eax,[ebp+8]
	push eax
	mov byte ptr [ebp-4],8
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea edx,[ebp+0x30]
	push edx
	mov edx,dword ptr [ebp+0x2C]
	lea eax,[ebp+8]
	push eax
	push esi
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],9
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	add eax,0x11
	push eax
	add edx,0xA3
	push edx
	mov byte ptr [ebp-4],9
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+8],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],8
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp+8]
	push ecx
	call esi

 Block37:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],7
	jne Block40

 Block38:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[ebp+0x30]
	push eax
	call esi

 Block41:
	mov dword ptr [ebp+0x18],0
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [ecx+0x20]
	push 1
	push edx
	lea eax,[ebp+0x18]
	push eax
	mov byte ptr [ebp-4],0xB
	call format_integer
	mov ecx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ecx+0xC]
	add eax,0xFB3B4C00
	add esp,0xC
	cmp eax,0x98967F
	ja Block43

 Block42:
	lea edx,[ebp+0x60]
	push 0x16A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],0xC
	or ebx,4
	jmp Block44

 Block43:
	lea eax,[ebp+0x54]
	push 0x1A0F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0xD
	or ebx,8

 Block44:
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax-4]
	jmp Block47

 Block46:
	xor ecx,ecx

 Block47:
	push ecx
	push eax
	lea ecx,[ebp+0x18]
	call ZXString<char>::_Cat
	mov dword ptr [ebp-4],0xC
	test bl,8
	je Block50

 Block48:
	mov eax,dword ptr [ebp+0x54]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov dword ptr [ebp-4],0xB
	test bl,4
	je Block53

 Block51:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov esi,dword ptr [ebp+0x28]
	cmp dword ptr [esi+0x1C],1
	jle Block62

 Block54:
	mov dword ptr [ebp+0x20],0
	lea ecx,[ebp+0x54]
	push 0x24D
	push ecx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x28]
	mov ecx,dword ptr [edx+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov esi,dword ptr [ebp+0x20]
	test esi,esi
	je Block58

 Block57:
	mov eax,dword ptr [esi-4]
	jmp Block59

 Block58:
	xor eax,eax

 Block59:
	push eax
	push esi
	lea ecx,[ebp+0x18]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block61

 Block60:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov esi,dword ptr [ebp+0x28]

 Block62:
	mov eax,dword ptr [esi+0x64]
	test eax,eax
	jne Block65

 Block63:
	mov ecx,dword ptr [esi+0x20]
	cmp ecx,dword ptr [esi+0x70]
	jl Block67

 Block64:
	test eax,eax

 Block65:
	jle Block68

 Block66:
	mov ecx,0x64
	sub ecx,eax
	imul ecx,dword ptr [esi+0x70]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp dword ptr [esi+0x20],eax
	jge Block68

 Block67:
	mov esi,1
	jmp Block69

 Block68:
	xor esi,esi

 Block69:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea eax,[ebp+0x30]
	mov bl,0x10
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	mov ecx,dword ptr [ebp+4]
	lea edx,[ebp+8]
	push edx
	mov edx,dword ptr [ebp+0x18]
	lea eax,[ebp+0x30]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x11
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	add eax,0x47
	push eax
	add edx,0xA3
	push edx
	mov byte ptr [ebp-4],0x11
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0xB
	jne Block87

 Block80:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block82:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block83:
	mov ecx,dword ptr [ebp+0x28]
	cmp dword ptr [ecx+0x64],0
	jg Block85

 Block84:
	test esi,esi
	je Block216

 Block85:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+8]
	push edx
	call esi
	lea eax,[ebp+8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+8]
	push eax
	call edi
	jmp Block83

 Block88:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x13
	call esi
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	xor esi,esi
	push esi
	push esi
	lea eax,[ebp+8]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0xB74
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x15
	cmp dword ptr [_D_G_RM],esi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ebx,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x28],bx
	jne Block98

 Block96:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	cmp eax,esi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[ebp-0x28]
	push edx
	call edi

 Block99:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x30],bx
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,esi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[ebp+0x30]
	push ecx
	call edi

 Block103:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+8],bx
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	cmp eax,esi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[ebp+8]
	push eax
	call edi

 Block107:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5A4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1B
	cmp ebx,esi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea edx,[ebp-0x48]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0x1E
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,esi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp-0x48]
	push ecx
	call edi

 Block116:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea edx,[ebp-0x70]
	push edx
	call __eh_vector_ctor_iterator
	mov byte ptr [ebp-4],0x1F
	xor esi,esi
	lea edi,[ebp-0x70]

 Block117:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block119

 Block118:
	cmp eax,0x80004002
	jne Block28

 Block119:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x1F
	jne Block122

 Block120:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	inc esi
	add edi,4
	cmp esi,9
	jle Block117

 Block124:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5A3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x22
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block127

 Block125:
	cmp eax,0x80004002
	je Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x25
	jne Block130

 Block128:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov eax,dword ptr [ebp+0x28]
	mov edi,dword ptr [eax+0x64]
	test edi,edi
	jg Block133

 Block132:
	fild dword ptr [eax+0x20]
	fld qword ptr [__real_4059000000000000]
	fmul st(1),st
	fild dword ptr [eax+0x70]
	fdivp st(2),st
	fsubrp st(1),st(0)
	call __ftol2_sse
	mov edi,eax

 Block133:
	mov eax,dword ptr [ebp+0x74]
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp+0x44]
	add eax,0x77
	push ecx
	add ebx,0x51
	mov dword ptr [ebp+0x1C],eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	mov esi,dword ptr [ebp]
	mov byte ptr [ebp-4],0x26
	test esi,esi
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block139:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [esi]
	lea edx,[ebp+0x58]
	push edx
	mov dword ptr [ebp+0x60],eax
	mov eax,dword ptr [ecx+0x40]
	push esi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block141

 Block140:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block141:
	mov ecx,dword ptr [ebp+0x70]
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov eax,dword ptr [ebp+0x60]
	lea edx,[ebp+0x44]
	push edx
	push 0
	push 0
	push 0
	push 0
	lea edx,[eax+eax]
	mov eax,dword ptr [ebp+0x58]
	push edx
	lea edx,[eax+eax]
	mov eax,dword ptr [ebp+0x1C]
	push edx
	push 0xFF
	push esi
	push eax
	push ebx
	call IWzCanvas::CopyEx
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x25
	jne Block146

 Block144:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x58]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],0
	call edx
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	mov eax,dword ptr [ebp+0x58]
	lea ecx,[ebx+eax*2]
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,esi
	imul edx,0x64
	mov dword ptr [ebp+0x5C],ecx
	mov ecx,edi
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov eax,0x66666667
	imul edi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*4]
	add ecx,ecx
	sub edi,ecx
	mov dword ptr [ebp+0x40],edi
	test esi,esi
	jle Block167

 Block150:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	lea edi,[ebp+esi*4-0x70]
	mov esi,dword ptr [edi]
	mov byte ptr [ebp-4],0x27
	test esi,esi
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x58]
	push edx
	push esi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block156:
	mov esi,dword ptr [edi]
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [ebp-0x14],ecx
	test esi,esi
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block160

 Block159:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edi]
	test ecx,ecx
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea edx,[ebp+0x44]
	push edx
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0
	push 0
	add edx,edx
	push edx
	mov edx,dword ptr [ebp+0x60]
	add edx,edx
	push edx
	mov edx,dword ptr [ebp+0x5C]
	push 0xFF
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push eax
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x25
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	add dword ptr [ebp+0x5C],0xA
	jmp Block168

 Block165:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	add dword ptr [ebp+0x5C],0xA
	jmp Block168

 Block167:
	test eax,eax
	jle Block185

 Block168:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	mov esi,dword ptr [ebp+ebx*4-0x70]
	lea ebx,[ebp+ebx*4-0x70]
	mov byte ptr [ebp-4],0x28
	test esi,esi
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block174

 Block173:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [ebp+0x60]
	test esi,esi
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x58]
	push edx
	push esi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block178

 Block177:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block178:
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [ebx]
	test ecx,ecx
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	lea edx,[ebp+0x44]
	push edx
	push 0
	push 0
	push 0
	push 0
	lea edx,[edi+edi]
	push edx
	mov edx,dword ptr [ebp+0x58]
	add edx,edx
	push edx
	mov edx,dword ptr [ebp+0x5C]
	push 0xFF
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push eax
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x25
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	add dword ptr [ebp+0x5C],0xA

 Block185:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov ebx,dword ptr [ebp+0x40]
	mov esi,dword ptr [ebp+ebx*4-0x70]
	lea ebx,[ebp+ebx*4-0x70]
	mov byte ptr [ebp-4],0x29
	test esi,esi
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block191

 Block190:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block191:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [ebp+0x60]
	test esi,esi
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x58]
	push edx
	push esi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block195

 Block194:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block195:
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [ebx]
	test ecx,ecx
	jne Block197

 Block196:
	push 0x80004003
	call _com_issue_error

 Block197:
	mov ebx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x44]
	push edx
	push 0
	push 0
	push 0
	push 0
	lea edx,[edi+edi]
	push edx
	mov edx,dword ptr [ebp+0x58]
	add edx,edx
	push edx
	push 0xFF
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push eax
	push ebx
	call IWzCanvas::CopyEx
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x25
	jne Block200

 Block198:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	lea eax,[ebp+0x44]
	push eax
	add ebx,0xA
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x2A
	test esi,esi
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block207

 Block206:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block207:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [ebp+0x60]
	lea eax,[ebp+0x58]
	push eax
	push esi
	mov dword ptr [ebp+0x58],0
	call ecx
	test eax,eax
	jge Block209

 Block208:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block209:
	mov ecx,dword ptr [ebp+0x70]
	test ecx,ecx
	jne Block211

 Block210:
	push 0x80004003
	call _com_issue_error

 Block211:
	lea edx,[ebp+0x44]
	push edx
	mov edx,dword ptr [ebp+0x58]
	push 0
	push 0
	push 0
	push 0
	lea eax,[edi+edi]
	push eax
	lea eax,[edx+edx]
	mov edx,dword ptr [ebp+0x1C]
	push eax
	push 0xFF
	push esi
	push edx
	push ebx
	call IWzCanvas::CopyEx
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x25
	jne Block214

 Block212:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x1F
	call eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0xA
	push 4
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0x1E
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x1A
	call eax
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xB
	call edx

 Block216:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block251

 Block217:
	add eax,0xFFFFFFF4
	push eax
	jmp Block250

 Block218:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push eax
	call ebx
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block220

 Block219:
	push eax
	call _com_issue_error

 Block220:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x2B
	call ebx
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block222

 Block221:
	push eax
	call _com_issue_error

 Block222:
	mov eax,dword ptr [ebp+4]
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	mov edx,dword ptr [ebp+0x2C]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	mov eax,dword ptr [ebp+0x74]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	add edx,0xB
	push edx
	add eax,0x52
	push eax
	mov byte ptr [ebp-4],0x2C
	call IWzCanvas::DrawTextA
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp+0x44],si
	jne Block227

 Block225:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea edx,[ebp+0x44]
	push edx
	call edi

 Block228:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x30],si
	jne Block231

 Block229:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block232

 Block230:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block232

 Block231:
	lea ecx,[ebp+0x30]
	push ecx
	call edi

 Block232:
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov eax,esi
	imul eax,0x2710
	mov edx,ecx
	sub edx,eax
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	sub ecx,eax
	mov dword ptr [ebp+0x54],0
	push ecx
	push edi
	push esi
	lea ecx,[ebp+0x54]
	push offset _S_04D02D02D__1
	push ecx
	mov byte ptr [ebp-4],0x2E
	call ZXString<char>::Format
	lea edx,[ebp+0x60]
	push 1
	push edx
	call get_basic_font
	add esp,0x1C
	lea eax,[ebp+0x30]
	push eax
	mov byte ptr [ebp-4],0x2F
	call ebx
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block234

 Block233:
	push eax
	call _com_issue_error

 Block234:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x30
	call ebx
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block236

 Block235:
	push eax
	call _com_issue_error

 Block236:
	mov eax,dword ptr [ebp+0x60]
	mov esi,dword ptr [ebp+0x54]
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x31
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x32
	test ecx,ecx
	jne Block238

 Block237:
	push 0x80004003
	call _com_issue_error

 Block238:
	mov eax,dword ptr [ebp+0x74]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	add edx,0x25
	push edx
	add eax,0x52
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp+0x44],di
	jne Block241

 Block239:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp+0x30],di
	jne Block245

 Block243:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block248

 Block247:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block248:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block251

 Block249:
	add esi,0xFFFFFFF4
	push esi

 Block250:
	call ZXString<char>::_Release
	add esp,4

 Block251:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block253

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block253:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block255

 Block254:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block255:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block260

 Block256:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block259

 Block257:
	mov eax,dword ptr [ebp+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	je Block259

 Block258:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block259:
	mov dword ptr [ebp+0x28],0

 Block260:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block262

 Block261:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block262:
	lea esp,[ebp-0x80]
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
	ret 0x10
}
}
// CCSWnd_OneADay::IsEmptyOneADayItem
__SUB_CLASS_THIS0(000D0EF0, __thiscall, 48990,  CCSWnd_OneADay, int32_t) {
__asm {

 Block0:
	sub esp,0xC
	xor edx,edx
	push esi
	mov dword ptr [esp+4],edx
	call CCSWnd_OneADay::GetOneADayItemSN
	test eax,eax
	je Block3

 Block1:
	call CCSWnd_OneADay::GetOneADayItemSN
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCommodityBySN
	cmp dword ptr [eax+4],0
	mov edx,1
	je Block3

 Block2:
	xor esi,esi
	jmp Block4

 Block3:
	mov esi,1

 Block4:
	test dl,1
	je Block9

 Block5:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block9

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0xC]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov eax,esi
	pop esi
	add esp,0xC
	ret
}
}
// CCSWnd_OneADay::OnMouseButton
_SUB_EXCEPTION_HANDLER(D0D50)
__SUB_CLASS_THIS(000D0D50, __thiscall, 48973,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D0D50
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	lea ecx,[ebp+0x118]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [ebp+0xDC]
	lea ecx,[eax+0x564]
	call CCSWnd_Char::EndChat
	cmp dword ptr [esp+0x50],0x203
	jne Block15

 Block1:
	cmp dword ptr [ebp+0xB78],0
	je Block15

 Block2:
	add ebp,0xFFFFFFFC
	mov ecx,ebp
	call CCSWnd_OneADay::GetPrevOneADayInfo
	mov edi,eax
	mov ecx,edi
	xor esi,esi
	call ZArray<OneADayInfo>::GetCount
	test eax,eax
	jbe Block15

 Block3:
	xor ebx,ebx

 Block4:
	push esi
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	call CCSWnd_OneADay::GetPlateRect_1
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x34]
	add eax,5
	mov dword ptr [esp+0x20],eax
	add eax,0x40
	add ecx,5
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x24],ecx
	push eax
	mov eax,dword ptr [esp+0x5C]
	add ecx,0x40
	mov dword ptr [esp+0x30],ecx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	call PtInRect
	test eax,eax
	je Block7

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+ebx+8]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,ebx
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x48],0
	test eax,eax
	jne Block9

 Block6:
	mov dword ptr [esp+0x48],0xFFFFFFFF

 Block7:
	mov ecx,edi
	inc esi
	add ebx,0xC
	call ZArray<OneADayInfo>::GetCount
	cmp esi,eax
	jb Block4

 Block8:
	jmp Block15

 Block9:
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x58],esp
	test eax,eax
	je Block11

 Block10:
	add eax,4
	push eax
	call esi

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ecx+0xDC]
	add ecx,0x210C
	call CCSWnd_List::WearCommodity
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block15

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call esi
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block15

 Block14:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x10
}
}
// CCSWnd_OneADay::ClearToolTip
__SUB_CLASS_THIS0(000814B0, __thiscall, 48971,  IUIMsgHandler, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x118]
	call CUIToolTip::ClearToolTip
	mov dword ptr [esi+0xB60],0
	pop esi
	ret
}
}
// CCSWnd_OneADay::ShowItemToolTip
_SUB_EXCEPTION_HANDLER(D0F70)
__SUB_CLASS_THIS(000D0F70, __thiscall, 48982,  CCSWnd_OneADay, int32_t, NakedParam<ZRef<CS_COMMODITY_EX>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D0F70
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x64]
	xor ebp,ebp
	mov dword ptr [esp+0x58],ebp
	cmp eax,ebp
	je Block40

 Block1:
	cmp dword ptr [TSingleton<CWvsContext>::ms_pInstance],ebp
	je Block37

 Block2:
	cmp dword ptr [TSingleton<CItemInfo>::ms_pInstance],ebp
	je Block37

 Block3:
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	jne Block8

 Block4:
	mov ebx,dword ptr [esp+0x64]
	mov eax,dword ptr [ebx+0xC]
	add eax,0xFB3B4C00
	cmp eax,0x98967F
	jbe Block9

 Block5:
	lea ecx,[ebx+0x10]
	call TSecType<long>::GetData
	push eax
	call is_cash_package_item
	add esp,4
	test eax,eax
	jne Block8

 Block6:
	mov ecx,dword ptr [esp+0x64]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block8

 Block7:
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	jmp Block40

 Block8:
	mov ebx,dword ptr [esp+0x64]

 Block9:
	mov dword ptr [esp+0x14],ebp
	cmp dword ptr [ebx+0x54],ebp
	je Block21

 Block10:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,0x3F84
	mov ecx,esi
	mov dword ptr [esp+0x20],esi
	call ZArray<CS_LIMITGOODS>::GetCount
	test eax,eax
	jbe Block21

 Block11:
	mov dword ptr [esp+0x18],ebp
	mov edi,edi

 Block12:
	mov esi,dword ptr [esi]
	add esi,dword ptr [esp+0x18]
	je Block18

 Block13:
	lea ecx,[ebx+0x10]
	call TSecType<long>::GetData
	mov ebx,dword ptr [esp+0x64]
	cmp eax,dword ptr [esi]
	jne Block18

 Block14:
	xor eax,eax
	lea ecx,[esi+4]
	lea ecx,[ecx]

 Block15:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block18

 Block16:
	cmp edx,dword ptr [ebx+0xC]
	je Block20

 Block17:
	inc eax
	add ecx,4
	cmp eax,0xA
	jl Block15

 Block18:
	mov ecx,dword ptr [esp+0x20]
	add dword ptr [esp+0x18],0x68
	inc ebp
	call ZArray<CS_LIMITGOODS>::GetCount
	cmp ebp,eax
	jae Block21

 Block19:
	mov esi,dword ptr [esp+0x20]
	jmp Block12

 Block20:
	mov eax,dword ptr [esp+0x20]
	imul ebp,0x68
	add ebp,dword ptr [eax]
	mov dword ptr [esp+0x14],ebp

 Block21:
	lea ecx,[ebx+0x10]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	mov ecx,dword ptr [esp+0x64]
	jne Block23

 Block22:
	mov edx,dword ptr [esp+0x14]
	push edx
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call CS_COMMODITY_EX::ToOldData
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	mov byte ptr [esp+0x68],1
	call eax
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x11C]
	mov byte ptr [esp+0x70],0
	call CUIToolTip::SetToolTip_Package
	jmp Block32

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
	mov ecx,dword ptr [edi+0xE0]
	mov eax,dword ptr [ecx+0x494]
	mov ecx,dword ptr [esp+0x64]
	push eax
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CS_COMMODITY_EX::ToOldData
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	mov byte ptr [esp+0x64],2
	call edx
	mov ecx,dword ptr [esp+0x78]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x78]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x11C]
	mov byte ptr [esp+0x6C],0
	call CUIToolTip::SetToolTip_SlotInc
	jmp Block32

 Block25:
	mov ecx,dword ptr [esp+0x64]
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [edi+0xE0]
	mov eax,dword ptr [eax+0x490]
	push eax
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,dword ptr [esp+0x74]
	call CS_COMMODITY_EX::ToOldData
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	mov byte ptr [esp+0x64],3
	call eax
	mov ecx,dword ptr [esp+0x78]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x78]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x11C]
	mov byte ptr [esp+0x6C],0
	call CUIToolTip::SetToolTip_SlotInc
	jmp Block32

 Block27:
	mov ecx,dword ptr [esp+0x64]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x64]
	add ecx,0x10
	mov byte ptr [esp+0x58],4
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x24]
	push ecx
	push 2
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block30

 Block28:
	cmp dword ptr [esp+0x20],0xC
	jne Block30

 Block29:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [eax+0x20]
	mov edx,dword ptr [esp+0x14]
	push 0
	push 0
	push edx
	mov edx,dword ptr [eax+0x70]
	mov eax,dword ptr [eax+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [edi+4]
	lea esi,[edi+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x11C]
	call CUIToolTip::SetToolTip_Ring
	jmp Block31

 Block30:
	lea ecx,[esp+0x24]
	call CUIToolTip::ItemToolTipParam::_ctor_default
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x14]
	push 0
	push 0
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [eax+0x70]
	push 0
	push ecx
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x2C]
	lea edx,[esp+0x34]
	lea esi,[edi+4]
	push edx
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x70],5
	mov dword ptr [esp+0x48],1
	call eax
	mov ecx,dword ptr [esp+0x84]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x84]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x11C]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x58],4
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam

 Block31:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x58],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block32:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block36

 Block33:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x64]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x64]
	test ecx,ecx
	je Block36

 Block35:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block36:
	mov eax,1
	jmp Block41

 Block37:
	add eax,4
	push eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block38:
	mov ecx,dword ptr [esp+0x64]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x64]
	cmp ecx,ebp
	je Block40

 Block39:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block40:
	xor eax,eax

 Block41:
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
// CCSWnd_OneADay::OnButtonClicked
_SUB_EXCEPTION_HANDLER(D1400)
__SUB_CLASS_THIS(000D1400, __thiscall, 48975,  CCSWnd_OneADay, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D1400
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
	mov ecx,dword ptr [esp+0x30]
	mov eax,ecx
	xor ebx,ebx
	sub eax,ebx
	je Block14

 Block1:
	mov edi,1
	sub eax,edi
	je Block9

 Block2:
	lea eax,[ecx-2]
	cmp eax,9
	ja Block19

 Block3:
	lea edx,[ecx-2]
	cmp dword ptr [esi+0xB7C],edi
	jne Block19

 Block4:
	mov ecx,esi
	call CCSWnd_OneADay::GetPrevOneADayInfo
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block19

 Block5:
	cmp dword ptr [eax-4],edx
	jbe Block19

 Block6:
	lea ecx,[edx+edx*2]
	mov edx,dword ptr [eax+ecx*4+8]
	lea eax,[eax+ecx*4]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCommodityBySN
	mov dword ptr [esp+0x28],2
	cmp dword ptr [esp+0x1C],ebx
	je Block8

 Block7:
	mov ecx,dword ptr [esi+0xE0]
	mov dword ptr [ecx+0x3B4C],ebx
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0xE0]
	push edx
	push eax
	call CCashShop::ProcessBuy

 Block8:
	lea ecx,[esp+0x18]
	jmp Block18

 Block9:
	cmp dword ptr [esi+0xB7C],ebx
	jne Block19

 Block10:
	mov ecx,esi
	call CCSWnd_OneADay::GetOneADayItemSN
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCommodityBySN
	mov dword ptr [esp+0x28],edi
	cmp dword ptr [esp+0x14],ebx
	je Block19

 Block11:
	mov ecx,dword ptr [esi+0xE0]
	mov dword ptr [ecx+0x3B4C],edi
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	jne Block13

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0xC]
	mov ecx,dword ptr [esi+0xE0]
	push edx
	call CCashShop::OnGiftPackage
	mov edx,dword ptr [esi+0xE0]
	mov dword ptr [edx+0x3B4C],ebx
	jmp Block17

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	mov ecx,dword ptr [esi+0xE0]
	call CCashShop::OnGift
	mov edx,dword ptr [esi+0xE0]
	mov dword ptr [edx+0x3B4C],ebx
	jmp Block17

 Block14:
	cmp dword ptr [esi+0xB7C],ebx
	jne Block19

 Block15:
	mov ecx,esi
	call CCSWnd_OneADay::GetOneADayItemSN
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCommodityBySN
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [esp+0x14],ebx
	je Block19

 Block16:
	mov ecx,dword ptr [esi+0xE0]
	mov dword ptr [ecx+0x3B4C],1
	mov eax,dword ptr [esp+0x14]
	lea ecx,[eax+0x10]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [esi+0xE0]
	push edx
	push eax
	call CCashShop::ProcessBuy
	mov eax,dword ptr [esi+0xE0]
	mov dword ptr [eax+0x3B4C],ebx

 Block17:
	lea ecx,[esp+0x10]

 Block18:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>

 Block19:
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
// CCSWnd_OneADay::ChangeState
_SUB_EXCEPTION_HANDLER(D2B90)
__SUB_CLASS_THIS(000D2B90, __thiscall, 48991,  CCSWnd_OneADay, void, uint32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D2B90
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
	mov ebp,ecx
	mov edx,dword ptr [esp+0x54]
	cmp dword ptr [ebp+0xB7C],edx
	jne Block2

 Block1:
	cmp dword ptr [esp+0x58],0
	je Block59

 Block2:
	xor edi,edi
	mov dword ptr [ebp+0xB7C],edx
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x2C],edi
	mov ecx,ebp
	mov dword ptr [esp+0x4C],edi
	call CCSWnd_OneADay::GetPrevOneADayInfo
	mov ebx,eax
	mov dword ptr [esp+0x14],ebx
	cmp edx,edi
	jne Block35

 Block3:
	mov ecx,ebx
	call ZArray<OneADayInfo>::GetCount
	test eax,eax
	jbe Block9

 Block4:
	lea esi,[ebp+0x94]

 Block5:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block8

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi],0
	je Block8

 Block7:
	push 0
	lea ecx,[esi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi],0

 Block8:
	mov ecx,ebx
	inc edi
	add esi,8
	call ZArray<OneADayInfo>::GetCount
	cmp edi,eax
	jb Block5

 Block9:
	mov ecx,ebp
	call CCSWnd_OneADay::IsEmptyOneADayItem
	test eax,eax
	jne Block57

 Block10:
	lea eax,[esp+0x54]
	push 0x16A8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x50],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x54],eax
	mov byte ptr [esp+0x4C],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block25

 Block16:
	add eax,8
	je Block25

 Block17:
	lea esi,[eax-8]
	test esi,esi
	je Block19

 Block18:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block19:
	mov eax,dword ptr [ebp+0x84]
	mov dword ptr [ebp+0x84],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block21

 Block20:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [ebp+0x84]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	push 0
	push 0xCA
	push 0xA5
	push 0
	push ebp
	call edx
	lea eax,[esp+0x54]
	push 0x1A75
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x50],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x54],eax
	mov byte ptr [esp+0x4C],4
	test eax,eax
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block25:
	xor esi,esi
	jmp Block19

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block34

 Block28:
	add eax,8
	je Block34

 Block29:
	lea esi,[eax-8]
	test esi,esi
	je Block31

 Block30:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block31:
	mov eax,dword ptr [ebp+0x8C]
	mov dword ptr [ebp+0x8C],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block33

 Block32:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [ebp+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	push 0
	push 0xCA
	push 0xF6
	push 1
	push ebp
	call edx
	jmp Block57

 Block34:
	xor esi,esi
	jmp Block31

 Block35:
	mov ecx,dword ptr [ebp+0x84]
	cmp ecx,edi
	je Block38

 Block36:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [ebp+0x84],0
	lea esi,[ebp+0x80]
	je Block38

 Block37:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block38:
	mov ecx,dword ptr [ebp+0x8C]
	test ecx,ecx
	je Block41

 Block39:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [ebp+0x8C],0
	lea esi,[ebp+0x88]
	je Block41

 Block40:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block41:
	mov ecx,ebx
	xor esi,esi
	call ZArray<OneADayInfo>::GetCount
	test eax,eax
	jbe Block57

 Block42:
	mov dword ptr [esp+0x54],esi
	lea edi,[ebp+0x94]

 Block43:
	push esi
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebp
	call CCSWnd_OneADay::GetPlateRect_1
	lea ecx,[esp+0x58]
	push 0x16A9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x50],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x4C],6
	test eax,eax
	je Block47

 Block46:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block60

 Block49:
	add eax,8
	je Block60

 Block50:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block52

 Block51:
	lea edx,[ebx+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov eax,dword ptr [edi]
	mov dword ptr [edi],ebx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],0

 Block54:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x3C]
	push 0
	add edx,0x37
	push edx
	mov edx,dword ptr [esp+0x40]
	add edx,0x51
	push edx
	lea edx,[esi+2]
	push edx
	push ebp
	call eax
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx+edx+4]
	add eax,0xFF62FCB0
	cmp eax,0x270F
	ja Block56

 Block55:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx

 Block56:
	add dword ptr [esp+0x54],0xC
	mov ecx,ebx
	inc esi
	add edi,8
	call ZArray<OneADayInfo>::GetCount
	cmp esi,eax
	jb Block43

 Block57:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8

 Block60:
	xor ebx,ebx
	jmp Block52
}
}
// CCSWnd_OneADay::GetPrevOneADayInfo
__SUB_CLASS_THIS0(000D0CE0, __thiscall, 48989,  CCSWnd_OneADay, const ZArray<OneADayInfo>&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xE0]
	add eax,0x3B50
	ret
}
}
// CCSWnd_OneADay::OnMouseMove
_SUB_EXCEPTION_HANDLER(D16D0)
__SUB_CLASS_THIS(000D16D0, __thiscall, 48972,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D16D0
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
	mov dword ptr [esp+0x14],ecx
	cmp dword ptr [ecx+0xB78],0
	jne Block7

 Block1:
	lea esi,[ecx-4]
	mov ecx,esi
	call CCSWnd_OneADay::IsEmptyOneADayItem
	test eax,eax
	jne Block21

 Block2:
	mov edi,dword ptr [esp+0x60]
	mov ebx,dword ptr [esp+0x64]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CCSWnd_OneADay::GetPlateRect_0
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	add ecx,0xA
	mov dword ptr [esp+0x34],ecx
	sub ecx,0xFFFFFF80
	add eax,0xA
	push ebx
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x34],eax
	push edi
	lea ecx,[esp+0x38]
	sub eax,0xFFFFFF80
	push ecx
	mov dword ptr [esp+0x44],eax
	call PtInRect
	test eax,eax
	je Block6

 Block3:
	mov ecx,esi
	call CCSWnd_OneADay::GetOneADayItemSN
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CWvsCommodityEx::GetCommodityExBySN
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push edi
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x68],0
	mov dword ptr [esp+0x70],esp
	test eax,eax
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	call CCSWnd_OneADay::ShowItemToolTip
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x18]
	mov dword ptr [edx+0xB60],eax
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<CS_COMMODITY_EX>::~ZRef<CS_COMMODITY_EX>
	jmp Block21

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	call edx
	jmp Block21

 Block7:
	mov ebx,dword ptr [esp+0x60]
	mov ebp,dword ptr [esp+0x64]
	lea edi,[ecx-4]
	mov ecx,edi
	call CCSWnd_OneADay::GetPrevOneADayInfo
	mov ecx,eax
	mov dword ptr [esp+0x64],eax
	xor esi,esi
	call ZArray<OneADayInfo>::GetCount
	test eax,eax
	jbe Block20

 Block8:
	mov dword ptr [esp+0x60],esi
	lea esp,[esp]

 Block9:
	push esi
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call CCSWnd_OneADay::GetPlateRect_1
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	add ecx,5
	mov dword ptr [esp+0x44],ecx
	add ecx,0x40
	add eax,5
	push ebp
	mov dword ptr [esp+0x50],ecx
	mov dword ptr [esp+0x44],eax
	push ebx
	lea ecx,[esp+0x48]
	add eax,0x40
	push ecx
	mov dword ptr [esp+0x54],eax
	call PtInRect
	test eax,eax
	je Block19

 Block10:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [edx]
	add eax,ecx
	mov ecx,dword ptr [eax+4]
	add ecx,0xFF62FCB0
	cmp ecx,0x270F
	jbe Block19

 Block11:
	mov edx,dword ptr [eax+8]
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	push edx
	lea eax,[esp+0x2C]
	push eax
	call CWvsCommodityEx::GetCommodityExBySN
	mov ecx,dword ptr [esp+0x2C]
	push ebp
	push ebx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x68],1
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,edi
	call CCSWnd_OneADay::ShowItemToolTip
	test eax,eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jne Block22

 Block14:
	test eax,eax
	je Block19

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	mov edx,dword ptr [esp+0x2C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block18

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block18:
	mov dword ptr [esp+0x2C],0

 Block19:
	mov ecx,dword ptr [esp+0x64]
	add dword ptr [esp+0x60],0xC
	inc esi
	call ZArray<OneADayInfo>::GetCount
	cmp esi,eax
	jb Block9

 Block20:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x34]
	call eax

 Block21:
	xor eax,eax
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 8

 Block22:
	test eax,eax
	je Block21

 Block23:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block24:
	mov eax,dword ptr [esp+0x2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block21

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block21
}
}
// CCSWnd_OneADay::DisableTodayButtons
__SUB_CLASS_THIS0(000D0CF0, __thiscall, 48968,  CCSWnd_OneADay, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x84]
	test eax,eax
	je Block3

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block3:
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	je Block6

 Block4:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block6

 Block5:
	mov esi,dword ptr [esi+0x8C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 0
	call edx

 Block6:
	pop esi
	ret
}
}
// CCSWnd_OneADay::CCSWnd_OneADay
_SUB_EXCEPTION_HANDLER(813E0)
__SUB_CLASS_THIS0(000813E0, __thiscall, 48966,  CCSWnd_OneADay, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_813E0
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
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0xC
	push 8
	lea eax,[esi+0x80]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi],offset CCSWnd_OneADay::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCSWnd_OneADay::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCSWnd_OneADay::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea ecx,[esi+0xF4]
	push ecx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0x11C]
	mov byte ptr [esp+0x18],6
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB78],edi
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
// CCSWnd_OneADay::Draw
_SUB_EXCEPTION_HANDLER(D4360)
__SUB_CLASS_THIS(000D4360, __thiscall, 48970,  CCSWnd_OneADay, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D4360
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
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],0
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov ebx,dword ptr [esp+0x10]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push ebx
	push eax
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [edi+0xB7C]
	sub eax,0
	je Block11

 Block9:
	sub eax,1
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov ecx,edi
	call CCSWnd_OneADay::DrawPrev
	jmp Block12

 Block11:
	mov edx,dword ptr [esp+0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov ecx,edi
	call CCSWnd_OneADay::DrawToday

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call eax
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
// CCSWnd_OneADay::OnMouseEnter
__SUB_CLASS_THIS(000D0C20, __thiscall, 48974,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x118]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CCSWnd_OneADay::OnCreate
_SUB_EXCEPTION_HANDLER(D2FD0)
__SUB_CLASS_THIS(000D2FD0, __thiscall, 48969,  CCSWnd_OneADay, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D2FD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
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
	mov dword ptr [ebp-0x50],esi
	mov eax,dword ptr [ebp+8]
	push 0x68
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xE0],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlSelector::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block11

 Block4:
	add eax,8
	je Block11

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xB78]
	mov dword ptr [esi+0xB78],edi
	mov dword ptr [ebp-0x28],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[ebp-0x2C]
	call ZRef<CCtrlSelector>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xB78]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x196
	push 0x19C
	push 4
	push 0x7D1
	push esi
	call eax
	mov ecx,dword ptr [esi+0xB78]
	push 0xFF000000
	push 0xFFFFFFFF
	push 0xFF3A67AA
	call CCtrlSelector::SetSelectorAttr
	mov ecx,dword ptr [esi+0xB78]
	push 1
	push 1
	mov ebx,2
	push ebx
	push ebx
	call CCtrlSelector::SetSelectorStart
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x4C],esp
	push 0x16A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB78]
	push 0
	call CCtrlSelector::SetSelector
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x4C],esp
	push 0x16A2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB78]
	push 1
	call CCtrlSelector::SetSelector
	mov ecx,dword ptr [esi+0xB78]
	call CCtrlSelector::SetSelectorEnd
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x20]
	push eax
	call edi
	lea ecx,[ebp-0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	lea edx,[ebp-0x34]
	push edx
	mov dword ptr [ebp-4],1
	call edi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push 0
	push 0
	lea ecx,[ebp-0x20]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x4ED
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xF0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],bl
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ebx,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x34],bx
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x20],bx
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	lea edx,[ebp-0x34]
	push edx
	call edi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea ecx,[ebp-0x20]
	push ecx
	mov dword ptr [ebp-4],5
	call edi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push 0
	push 0
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x20]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x4EA
	mov bl,6
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],7
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],bl
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x20],bx
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x34],bx
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	lea ecx,[ebp-0x34]
	push ecx
	call edi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea eax,[ebp-0x20]
	mov ebx,9
	push eax
	mov dword ptr [ebp-4],ebx
	call edi
	lea ecx,[ebp-0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push 0
	push 0
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x20]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x4E9
	push ecx
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[ebp-0x48]
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xE4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0xA
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],bl
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	cmp word ptr [ebp-0x34],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	lea eax,[ebp-0x34]
	push eax
	call edi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea edx,[ebp-0x20]
	push edx
	mov dword ptr [ebp-4],0xD
	call edi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	push 0
	push 0
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x16A5
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xF
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xE8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block82

 Block80:
	cmp eax,0x80004002
	je Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],bl
	jne Block85

 Block83:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x20],bx
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x34],bx
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	lea edx,[ebp-0x48]
	push edx
	call edi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea ecx,[ebp-0x20]
	push ecx
	mov dword ptr [ebp-4],0x11
	call edi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	xor edi,edi
	push edi
	push edi
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x20]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x16A7
	mov bl,0x12
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	cmp dword ptr [_D_G_RM],edi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp-0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block103

 Block101:
	cmp eax,0x80004002
	je Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov ebx,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x60],bx
	jne Block106

 Block104:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x20],bx
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x48],bx
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov dword ptr [ebp-0x38],edi
	lea ebx,[esi+0xF4]
	nop

 Block116:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp-0x38]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block15

 Block117:
	lea edx,[ebp-0x70]
	push edx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block125

 Block118:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
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
	and ecx,dword ptr [ebp-0x24]
	mov edi,ecx
	test eax,eax
	je Block120

 Block119:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block120:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block122

 Block121:
	cmp esi,0x80004002
	jne Block135

 Block122:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x18
	jne Block127

 Block123:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block128

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block125:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block122

 Block126:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block122

 Block127:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov eax,dword ptr [ebp-0x38]
	inc eax
	add ebx,4
	cmp eax,0xA
	mov dword ptr [ebp-0x38],eax
	jl Block116

 Block129:
	mov ebx,dword ptr [ebp-0x50]
	xor edi,edi
	mov dword ptr [ebx+0xB64],edi
	lea esi,[ebx+0x84]
	mov dword ptr [ebp-0x38],0xC

 Block130:
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block141

 Block131:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block141

 Block132:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block133:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block136

 Block134:
	add eax,8
	jmp Block137

 Block135:
	push esi
	call _com_issue_error

 Block136:
	xor eax,eax

 Block137:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block140

 Block138:
	lea ecx,[eax+8]
	cmp ecx,edi
	je Block140

 Block139:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block140:
	mov dword ptr [esi],edi

 Block141:
	add esi,8
	sub dword ptr [ebp-0x38],1
	jne Block130

 Block142:
	push 1
	push edi
	mov ecx,ebx
	mov dword ptr [ebx+0xB70],edi
	mov dword ptr [ebx+0xB6C],edi
	mov dword ptr [ebx+0xB68],edi
	call CCSWnd_OneADay::ChangeState
	mov eax,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x80]
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
// CCSWnd_OneADay::Update
__SUB_CLASS_THIS0(000D1610, __thiscall, 48968,  CCSWnd_OneADay, void) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	push edi
	mov esi,ecx
	call CWnd::Update
	mov ecx,esi
	call CCSWnd_OneADay::IsEmptyOneADayItem
	xor edi,edi
	test eax,eax
	je Block2

 Block1:
	mov ecx,esi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB68],edi
	call CCSWnd_OneADay::DisableTodayButtons
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	add esp,0x10
	ret

 Block2:
	lea eax,[esp+8]
	push eax
	call GetLocalTime
	movzx ecx,word ptr [esp+8]
	movzx edx,word ptr [esp+0xA]
	imul ecx,0x64
	movzx eax,word ptr [esp+0xE]
	add ecx,edx
	mov edx,dword ptr [esi+0xE0]
	imul ecx,0x64
	add ecx,eax
	cmp dword ptr [edx+0x3B48],ecx
	jne Block1

 Block3:
	movzx eax,word ptr [esp+0x10]
	movzx edx,word ptr [esp+0x12]
	mov ecx,0x17
	sub ecx,eax
	mov dword ptr [esi+0xB68],ecx
	movzx ecx,word ptr [esp+0x14]
	mov eax,0x3B
	sub eax,edx
	mov edx,0x3C
	sub edx,ecx
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xB6C],eax
	mov dword ptr [esi+0xB70],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CCSWnd_OneADay::OnChildNotify
__SUB_CLASS_THIS(000D4320, __thiscall, 48976,  CCSWnd_OneADay, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x7D1
	jne Block3

 Block1:
	cmp edx,0x320
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	push 0
	push eax
	call CCSWnd_OneADay::ChangeState
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
// CCSWnd_OneADay::GetPlateRect
__SUB_CLASS_THIS(000D0C70, __thiscall, 48983,  CCSWnd_OneADay, tagRECT*, tagRECT*, long) {
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
	cdq
	imul ecx,0xCE
	sub eax,edx
	sar eax,1
	imul eax,0x51
	lea esi,[ecx+2]
	mov ecx,dword ptr [esp+8]
	add eax,2
	mov dword ptr [ecx],esi
	mov dword ptr [ecx+4],eax
	add esi,0xC8
	add eax,0x50
	mov dword ptr [ecx+8],esi
	mov dword ptr [ecx+0xC],eax
	mov eax,ecx
	pop esi
	ret 8
}
}
// CCSWnd_OneADay::GetOneADayItemSN
__SUB_CLASS_THIS0(000D0CD0, __thiscall, 48986,  CCSWnd_OneADay, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xE0]
	mov eax,dword ptr [eax+0x3B44]
	ret
}
}
// CCSWnd_OneADay::DrawPrev
_SUB_EXCEPTION_HANDLER(D3970)
__SUB_CLASS_THIS(000D3970, __thiscall, 48979,  CCSWnd_OneADay, void, NakedParam<_x_com_ptr<IWzCanvas>>, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D3970
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
	mov dword ptr [esp+0x20],edi
	xor ebx,ebx
	mov dword ptr [esp+0x60],ebx
	call CCSWnd_OneADay::GetPrevOneADayInfo
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x24],eax
	cmp edx,ebx
	je Block2

 Block1:
	cmp dword ptr [edx-4],ebx
	jne Block10

 Block2:
	mov eax,3
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],0xFF
	mov ecx,dword ptr [esp+0x68]
	mov edi,dword ptr [edi+0xF0]
	mov byte ptr [esp+0x60],1
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x38]
	push edx
	push edi
	push 0x53
	push 2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block31

 Block10:
	xor esi,esi
	mov ecx,eax
	mov dword ptr [esp+0x18],esi
	call ZArray<OneADayInfo>::GetCount
	test eax,eax
	jbe Block29

 Block11:
	mov dword ptr [esp+0x14],ebx

 Block12:
	push esi
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,edi
	call CCSWnd_OneADay::GetPlateRect_1
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov edx,0xFF
	mov dword ptr [esp+0x30],edx
	mov ecx,dword ptr [esp+0x68]
	mov edi,dword ptr [edi+0xE4]
	mov byte ptr [esp+0x60],2
	cmp ecx,ebx
	je Block3

 Block13:
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	push edi
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x80]
	push esi
	push ecx
	mov ebp,ecx
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block15:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],edi
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],al
	test ecx,ecx
	je Block3

 Block20:
	mov ebp,dword ptr [esp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi+0xEC]
	push eax
	lea edx,[ebx+4]
	mov ebx,dword ptr [ecx]
	push edx
	add esi,4
	push esi
	mov dword ptr [esp+0x38],ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block22

 Block21:
	mov edx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block22:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov ebp,dword ptr [esp+0x24]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+edx]
	add eax,edx
	mov edx,dword ptr [eax+4]
	push ecx
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebx
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov ecx,edi
	call CCSWnd_OneADay::DrawCommodity
	mov esi,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0xC
	inc esi
	mov ecx,ebp
	mov dword ptr [esp+0x18],esi
	call ZArray<OneADayInfo>::GetCount
	cmp esi,eax
	jb Block12

 Block29:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 8
}
}
// CCSWnd_OneADay::GetPlateRect
__SUB_CLASS_THIS(000D0C40, __thiscall, 48984,  CCSWnd_OneADay, tagRECT*, tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax],4
	mov dword ptr [eax+4],0x5D
	mov dword ptr [eax+8],0x18E
	mov dword ptr [eax+0xC],0x9E
	ret 4
}
}
