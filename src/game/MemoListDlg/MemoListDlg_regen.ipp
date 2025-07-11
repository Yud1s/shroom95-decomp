#include "regen.hpp"
// MemoListDlg.ipp
#include "MemoListDlg.hpp"

// CMemoListDlg::DrawMemo
_SUB_EXCEPTION_HANDLER(2247B0)
__SUB_CLASS_THIS(002247B0, __thiscall, 85047,  CMemoListDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, const CMemoListDlg::MEMO&, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2247B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov ebp,dword ptr [esp+0xBC]
	mov eax,dword ptr [esp+0xB8]
	add ebp,dword ptr [eax+4]
	xor edi,edi
	cmp ebp,0x7F
	mov dword ptr [esp+0xAC],edi
	jle Block3

 Block1:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp eax,edi
	je Block227

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block227

 Block3:
	mov esi,dword ptr [ebx+0x9C]
	cmp esi,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [esp+0x18]
	add eax,ebp
	mov esi,dword ptr [ZImports::_VariantInit]
	je Block37

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [ebx+0x9C]
	mov byte ptr [esp+0xAC],1
	cmp ecx,edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x28]
	push edx
	push eax
	push ebp
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xAC],0
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[esp+0x28]
	mov bl,2
	push ecx
	mov byte ptr [esp+0xB0],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov esi,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0xB8]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0xB4]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov eax,dword ptr [edx+0xC]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block22

 Block21:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xBC],4
	cmp ecx,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[ebp+4]
	push eax
	push 5
	mov byte ptr [esp+0xC4],3
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xAC],bl
	mov ebx,8
	cmp word ptr [esp+0x28],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0xAC],0
	cmp word ptr [esp+0x3C],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esi+0x98]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	mov edx,dword ptr [esp+0xC0]
	push ecx
	mov ecx,esp
	add edx,0x10
	mov dword ptr [esp+0x68],esp
	push edx
	mov byte ptr [esp+0xBC],5
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	lea eax,[ebp+7]
	push eax
	push 0x8F
	push ecx
	mov ecx,dword ptr [esp+0xCC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xCC]
	mov dword ptr [esp+0x74],esp
	cmp eax,edi
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	mov byte ptr [esp+0xC4],0
	call draw_text_by_image
	mov ebx,dword ptr [esp+0x38]
	add esp,0x18

 Block37:
	mov esi,dword ptr [ebx+0x9C]
	cmp esi,edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	add ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x18],edi
	jmp Block43

 Block43:
	mov ecx,dword ptr [esp+0xB8]
	mov eax,dword ptr [ecx+0x14]
	cmp eax,edi
	je Block99

 Block44:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [eax-4]
	jae Block99

 Block45:
	cmp ebp,0x7F
	jg Block1

 Block46:
	mov esi,dword ptr [ebx+0xA0]
	cmp esi,edi
	je Block4

 Block47:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov eax,dword ptr [esp+0x14]
	add eax,ebp
	je Block95

 Block50:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block51:
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [ebx+0xA0]
	mov byte ptr [esp+0xAC],6
	cmp ecx,edi
	je Block4

 Block52:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ebp
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xAC],0
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov esi,dword ptr [esp+0x18]
	cmp esi,edi
	jne Block82

 Block57:
	mov edx,dword ptr [esp+0xB8]
	cmp dword ptr [edx+0x18],3
	jne Block82

 Block58:
	mov eax,edx
	mov eax,dword ptr [eax+0x14]
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block62

 Block59:
	cmp dword ptr [esi+4],edi
	jne Block61

 Block60:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block61:
	mov ecx,dword ptr [esi+4]
	jmp Block63

 Block62:
	xor ecx,ecx

 Block63:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp ecx,edi
	je Block67

 Block64:
	mov eax,ecx
	lea esi,[eax+1]

 Block65:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block65

 Block66:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push edi
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block67:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xB0],7
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block68:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xB0],8
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block69:
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [ebx+0xB8]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	push 0xFFFFFFFF
	push edi
	push edi
	push offset _S___43
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xC8],9
	call ZXString<char>::Find__0
	inc eax
	push eax
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esp+0x2C]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],0xA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xBC],0xB
	cmp ecx,edi
	je Block4

 Block70:
	lea eax,[ebp+3]
	push eax
	push 8
	mov byte ptr [esp+0xC4],0xA
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xAC],9
	cmp eax,edi
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xAC],8
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xAC],7
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [esp+0xAC],0
	cmp esi,edi
	je Block95

 Block81:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block95

 Block82:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block83:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xB0],0xC
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block84:
	mov edx,dword ptr [esp+0xB8]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [ebx+0xB8]
	lea ecx,[esp+0x84]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x14]
	lea eax,[eax+esi*4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block86

 Block85:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block86:
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xBC],0xE
	cmp ecx,edi
	je Block4

 Block87:
	lea edx,[ebp+3]
	push edx
	mov esi,8
	push esi
	mov byte ptr [esp+0xC4],0xD
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xAC],0xC
	cmp word ptr [esp+0x80],si
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,edi
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [esp+0xAC],0
	cmp word ptr [esp+0x70],si
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov esi,dword ptr [ebx+0xA0]
	cmp esi,edi
	je Block4

 Block96:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],edi
	call eax
	cmp eax,edi
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block98:
	add ebp,dword ptr [esp+0x14]
	inc dword ptr [esp+0x18]
	jmp Block43

 Block99:
	mov eax,dword ptr [ecx+0x18]
	dec eax
	mov dword ptr [esp+0xBC],ebp
	cmp eax,1
	ja Block195

 Block100:
	xor edi,edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x38],edi
	lea eax,[esp+0x14]
	push 0xD47
	push eax
	mov byte ptr [esp+0xB4],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0xC0]
	add ecx,0xC
	mov byte ptr [esp+0xB4],0x11
	call Ztl_bstr_t::op_add_0
	mov ebp,dword ptr [eax]
	cmp ebp,edi
	je Block102

 Block101:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov dword ptr [esp+0x5C],ebp
	cmp ebp,edi
	je Block104

 Block103:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block104:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block106

 Block105:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block106:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],0x10
	cmp ecx,edi
	je Block108

 Block107:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],edi

 Block108:
	lea ecx,[esp+0x24]
	push 0xD48
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	mov byte ptr [esp+0xAC],0x12
	cmp eax,edi
	je Block110

 Block109:
	add eax,4
	jmp Block111

 Block110:
	xor eax,eax

 Block111:
	push eax
	lea ecx,[esp+0x20]
	call _xbstr_t::_ctor_0
	push esi
	lea eax,[esp+0x94]
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB4],0x13
	call Ztl_bstr_t::op_add_0
	mov edi,dword ptr [eax]
	xor esi,esi
	cmp edi,esi
	je Block113

 Block112:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block113:
	mov dword ptr [esp+0x38],edi
	cmp edi,esi
	je Block115

 Block114:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block115:
	mov ecx,dword ptr [esp+0x90]
	cmp ecx,esi
	je Block117

 Block116:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x90],esi

 Block117:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,esi
	je Block119

 Block118:
	call _xbstr_t::Data_t::Release

 Block119:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xAC],0x10
	cmp ecx,esi
	je Block121

 Block120:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],esi

 Block121:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov ecx,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0xA0]
	mov byte ptr [esp+0xAC],0x14
	cmp ecx,esi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov ebx,dword ptr [esp+0xBC]
	lea edx,[esp+0x70]
	push edx
	push eax
	push ebx
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xAC],0x10
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [edx+0xA0]
	test esi,esi
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	add ebx,dword ptr [esp+0x1C]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x80]
	push eax
	mov dword ptr [esp+0xC0],ebx
	call esi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	mov ecx,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0xA0]
	mov byte ptr [esp+0xAC],0x15
	test ecx,ecx
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	lea edx,[esp+0x80]
	push edx
	push eax
	push ebx
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xAC],0x10
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea ecx,[esp+0x60]
	mov bl,0x16
	push ecx
	mov byte ptr [esp+0xB0],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [edx+0xBC]
	lea ecx,[esp+0x64]
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block147

 Block146:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block147:
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xBC],0x18
	test ecx,ecx
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov edx,dword ptr [esp+0xCC]
	add edx,3
	push edx
	mov esi,8
	push esi
	mov byte ptr [esp+0xC4],0x17
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x60],si
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [esp+0xAC],0x10
	cmp word ptr [esp+0x3C],si
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx+0xA0]
	test esi,esi
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block161

 Block160:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block161:
	mov esi,dword ptr [esp+0xBC]
	add esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0xB8]
	cmp dword ptr [edx+0x18],1
	mov dword ptr [esp+0xBC],esi
	jne Block191

 Block162:
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
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0xA0]
	mov byte ptr [esp+0xAC],0x19
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea edx,[esp+0x28]
	push edx
	push eax
	push esi
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xAC],0x10
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	lea edx,[esp+0x4C]
	push edx
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea ecx,[esp+0x94]
	mov bl,0x1A
	push ecx
	mov byte ptr [esp+0xB0],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x94]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [edx+0xBC]
	lea ecx,[esp+0x98]
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block176

 Block175:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block176:
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xBC],0x1C
	test ecx,ecx
	jne Block178

 Block177:
	push 0x80004003
	call _com_issue_error

 Block178:
	mov edx,dword ptr [esp+0xCC]
	add edx,3
	push edx
	mov esi,8
	push esi
	mov byte ptr [esp+0xC4],0x1B
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x94],si
	jne Block181

 Block179:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea ecx,[esp+0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block182:
	mov byte ptr [esp+0xAC],0x10
	cmp word ptr [esp+0x4C],si
	jne Block185

 Block183:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block186:
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx+0xA0]
	test esi,esi
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block190

 Block189:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block190:
	mov edx,dword ptr [esp+0x1C]
	add dword ptr [esp+0xBC],edx

 Block191:
	test edi,edi
	je Block193

 Block192:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block193:
	mov byte ptr [esp+0xAC],0
	test ebp,ebp
	je Block195

 Block194:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block195:
	mov edi,dword ptr [esp+0xBC]
	cmp edi,0x7F
	jle Block198

 Block196:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	test eax,eax
	je Block227

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block227

 Block198:
	mov ebx,dword ptr [esp+0x20]
	mov esi,dword ptr [ebx+0xA4]
	xor ebp,ebp
	cmp esi,ebp
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],ebp
	call edx
	cmp eax,ebp
	jge Block202

 Block201:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block202:
	mov eax,dword ptr [esp+0x24]
	add eax,edi
	je Block211

 Block203:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block205

 Block204:
	push eax
	call _com_issue_error

 Block205:
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [ebx+0xA4]
	mov byte ptr [esp+0xAC],0x1D
	cmp ecx,ebp
	jne Block207

 Block206:
	push 0x80004003
	call _com_issue_error

 Block207:
	lea edx,[esp+0x4C]
	push edx
	push eax
	push edi
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xAC],0
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	mov esi,dword ptr [ebx+0xA4]
	cmp esi,ebp
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block215

 Block214:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block215:
	add edi,dword ptr [esp+0x24]
	cmp dword ptr [esp+0xC0],ebp
	jne Block225

 Block216:
	lea ecx,[edi+7]
	test ecx,ecx
	jle Block225

 Block217:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block219

 Block218:
	push eax
	call _com_issue_error

 Block219:
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [ebx+0xA8]
	mov byte ptr [esp+0xAC],0x1E
	cmp ecx,ebp
	jne Block221

 Block220:
	push 0x80004003
	call _com_issue_error

 Block221:
	lea edx,[esp+0x4C]
	push edx
	push eax
	add edi,3
	push edi
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xAC],0
	jne Block224

 Block222:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block225:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp eax,ebp
	je Block227

 Block226:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block227:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret 0x10
}
}
// CMemoListDlg::CMemoListDlg
_SUB_EXCEPTION_HANDLER(225EA0)
__SUB_CLASS_THIS(00225EA0, __thiscall, 85036,  CMemoListDlg, void, const ZList<GW_Memo>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_225EA0
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
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CMemoListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoListDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],eax
	mov dword ptr [esi+0xC8],eax
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD4],eax
	mov eax,dword ptr [esp+0x1C]
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGME__20
	mov ecx,esi
	mov byte ptr [esp+0x24],0xD
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
// CMemoListDlg::SetRet
_SUB_EXCEPTION_HANDLER(224280)
__SUB_CLASS_THIS(00224280, __thiscall, 85043,  CMemoListDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_224280
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
	mov dword ptr [esp+0x24],ebp
	mov eax,dword ptr [esp+0x54]
	cmp eax,2
	je Block2

 Block1:
	cmp eax,1
	jne Block104

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xA75
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block104

 Block3:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block8

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov dword ptr [esp+0x30],0

 Block8:
	push 4
	mov ecx,ebx
	call CharacterData::GetEmptySlotCount
	xor edi,edi
	push 0x9A
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x2C],edi
	xor bl,bl
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x50],edi
	call COutPacket::Encode1
	mov eax,dword ptr [ebp+0xC0]
	cmp eax,edi
	jne Block10

 Block9:
	xor eax,eax
	jmp Block11

 Block10:
	mov eax,dword ptr [eax-4]

 Block11:
	push eax
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	xor ecx,ecx
	xor edx,edx
	lea esi,[ecx+3]
	mov edi,edi

 Block12:
	mov eax,dword ptr [ebp+0xC0]
	cmp eax,edi
	je Block17

 Block13:
	cmp ecx,dword ptr [eax-4]
	jae Block17

 Block14:
	cmp dword ptr [edx+eax+0x18],esi
	jne Block16

 Block15:
	inc bl

 Block16:
	inc ecx
	add edx,0x1C
	jmp Block12

 Block17:
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	jne Block19

 Block18:
	xor edx,edx
	jmp Block20

 Block19:
	mov edx,dword ptr [eax-4]

 Block20:
	mov ecx,dword ptr [esp+0x3C]
	inc ecx
	cmp ecx,edx
	jbe Block26

 Block21:
	cmp eax,edi
	jne Block23

 Block22:
	xor eax,eax
	jmp Block24

 Block23:
	mov eax,dword ptr [eax-4]

 Block24:
	add eax,eax
	cmp ecx,eax
	ja Block24

 Block25:
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block26:
	mov edx,dword ptr [esp+0x3C]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [esp+0x38]
	inc dword ptr [esp+0x3C]
	cmp eax,edi
	jne Block28

 Block27:
	xor edx,edx
	jmp Block29

 Block28:
	mov edx,dword ptr [eax-4]

 Block29:
	mov ecx,dword ptr [esp+0x3C]
	inc ecx
	cmp ecx,edx
	jbe Block35

 Block30:
	cmp eax,edi
	jne Block32

 Block31:
	xor eax,eax
	jmp Block33

 Block32:
	mov eax,dword ptr [eax-4]

 Block33:
	add eax,eax
	cmp ecx,eax
	ja Block33

 Block34:
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block35:
	mov edx,dword ptr [esp+0x3C]
	mov cl,byte ptr [esp+0x1C]
	mov ebx,1
	mov byte ptr [eax+edx],cl
	add dword ptr [esp+0x3C],ebx
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x18],edi

 Block36:
	mov eax,dword ptr [ebp+0xC0]
	test eax,eax
	je Block96

 Block37:
	mov edx,dword ptr [esp+0x20]
	cmp edx,dword ptr [eax-4]
	jae Block96

 Block38:
	add eax,edi
	cmp dword ptr [eax+0x18],esi
	je Block56

 Block39:
	mov esi,dword ptr [eax+8]
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jne Block41

 Block40:
	xor edx,edx
	jmp Block42

 Block41:
	mov edx,dword ptr [eax-4]

 Block42:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	cmp ecx,edx
	jbe Block47

 Block43:
	test eax,eax
	je Block45

 Block44:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block45:
	add eax,eax
	cmp ecx,eax
	ja Block45

 Block46:
	lea ecx,[esp+0x54]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block47:
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [ebp+0xC0]
	add dword ptr [esp+0x3C],4
	mov bl,byte ptr [edi+eax+0x18]
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jne Block49

 Block48:
	xor edx,edx
	jmp Block50

 Block49:
	mov edx,dword ptr [eax-4]

 Block50:
	mov ecx,dword ptr [esp+0x3C]
	inc ecx
	cmp ecx,edx
	jbe Block55

 Block51:
	test eax,eax
	je Block53

 Block52:
	mov eax,dword ptr [eax-4]

 Block53:
	add eax,eax
	cmp ecx,eax
	ja Block53

 Block54:
	lea ecx,[esp+0x54]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block55:
	mov edx,dword ptr [esp+0x3C]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x3C]
	jmp Block95

 Block56:
	cmp dword ptr [esp+0x1C],0
	jle Block94

 Block57:
	mov eax,dword ptr [eax+0x14]
	mov esi,dword ptr [eax]
	test esi,esi
	je Block61

 Block58:
	cmp dword ptr [esi+4],0
	jne Block60

 Block59:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block60:
	mov ecx,dword ptr [esi+4]
	jmp Block62

 Block61:
	xor ecx,ecx

 Block62:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test ecx,ecx
	je Block66

 Block63:
	mov eax,ecx
	lea esi,[eax+1]

 Block64:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block64

 Block65:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
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
	mov ebp,dword ptr [esp+0x14]

 Block66:
	push 0
	push 0
	push offset _S___43
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x58],1
	call ZXString<char>::Find__0
	push eax
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x30]
	add esp,4
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0xC0]
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+eax+8]
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jne Block70

 Block69:
	xor edx,edx
	jmp Block71

 Block70:
	mov edx,dword ptr [eax-4]

 Block71:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	cmp ecx,edx
	jbe Block76

 Block72:
	test eax,eax
	je Block74

 Block73:
	mov eax,dword ptr [eax-4]

 Block74:
	add eax,eax
	cmp ecx,eax
	ja Block74

 Block75:
	lea edx,[esp+0x54]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block76:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+ecx],esi
	mov eax,dword ptr [edx+0xC0]
	add dword ptr [esp+0x3C],4
	mov ecx,dword ptr [esp+0x18]
	mov bl,byte ptr [ecx+eax+0x18]
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jne Block78

 Block77:
	xor edx,edx
	jmp Block79

 Block78:
	mov edx,dword ptr [eax-4]

 Block79:
	mov ecx,dword ptr [esp+0x3C]
	inc ecx
	cmp ecx,edx
	jbe Block84

 Block80:
	test eax,eax
	je Block82

 Block81:
	mov eax,dword ptr [eax-4]

 Block82:
	add eax,eax
	cmp ecx,eax
	ja Block82

 Block83:
	lea edx,[esp+0x54]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block84:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [eax+ecx],bl
	mov eax,dword ptr [esp+0x38]
	mov esi,1
	add dword ptr [esp+0x3C],esi
	test eax,eax
	jne Block86

 Block85:
	xor edx,edx
	jmp Block87

 Block86:
	mov edx,dword ptr [eax-4]

 Block87:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	cmp ecx,edx
	jbe Block92

 Block88:
	test eax,eax
	je Block90

 Block89:
	mov eax,dword ptr [eax-4]

 Block90:
	add eax,eax
	cmp ecx,eax
	ja Block90

 Block91:
	lea edx,[esp+0x54]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block92:
	mov ecx,dword ptr [esp+0x3C]
	sub dword ptr [esp+0x1C],esi
	mov dword ptr [eax+ecx],edi
	add dword ptr [esp+0x3C],4
	mov byte ptr [esp+0x4C],0
	test ebp,ebp
	je Block95

 Block93:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4
	jmp Block95

 Block94:
	mov dword ptr [esp+0x28],ebx

 Block95:
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x18],0x1C
	mov edi,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x24]
	mov esi,3
	lea ebx,[esi-2]
	jmp Block36

 Block96:
	cmp dword ptr [esp+0x28],0
	je Block98

 Block97:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x10B7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block98:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	test ecx,ecx
	je Block100

 Block99:
	push 0
	call CWnd::InvalidateRect

 Block100:
	cmp dword ptr [ebp+0x84],0
	jne Block103

 Block101:
	cmp dword ptr [ebp+0x14],0
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [ebp+0x80],ecx
	mov dword ptr [ebp+0x84],ebx
	je Block103

 Block102:
	mov ecx,ebp
	call CWnd::Destroy

 Block103:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block104:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CMemoListDlg::MEMO::~MEMO
_SUB_EXCEPTION_HANDLER(225D40)
__SUB_CLASS_THIS0(00225D40, __thiscall, 85070,  CMemoListDlg::MEMO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_225D40
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],1
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMemoListDlg::OnCreate
_SUB_EXCEPTION_HANDLER(226120)
__SUB_CLASS_THIS(00226120, __thiscall, 85039,  CMemoListDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_226120
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
	mov ebp,ecx
	mov dword ptr [esp+0x80],ebp
	push 0
	push 0
	lea esi,[ebp+0xC4]
	push ebp
	mov ecx,esi
	call CLayoutMan::Init
	mov eax,dword ptr [ebp+0x24]
	push 0
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x3C],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGME__27
	lea edx,[esp+0x4C]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x3C],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push 0
	push 0
	push 0
	push 0x3EC
	push offset _S_UIUIWINDOW2IMGME__26
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x3C],0
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0xAC]
	push esi
	push eax
	mov dword ptr [esp+0xC8],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	or edi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0xBC],edi
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea ecx,[esp+0x18]
	push ecx
	push 0xFFCCFFFF
	push 9
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 8
	push edx
	mov dword ptr [esp+0xD4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xCC],2
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov byte ptr [esp+0xCC],1
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0xBC],edi
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0xB0]
	push esi
	push eax
	mov dword ptr [esp+0xC8],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xBC],edi
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	lea eax,[esp+0x14]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xBC],4
	test eax,eax
	je Block20

 Block19:
	mov edi,dword ptr [eax]
	jmp Block21

 Block20:
	xor edi,edi

 Block21:
	mov ecx,8
	push edi
	mov word ptr [esp+0x1C],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x20],eax
	test eax,eax
	jne Block24

 Block22:
	test edi,edi
	je Block24

 Block23:
	push 0x8007000E
	call _com_issue_error

 Block24:
	lea edx,[esp+0x18]
	push edx
	push 0xFFCCFFFF
	push 9
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 8
	mov bl,5
	push eax
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xCC],6
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0xCC],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xBC],4
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0xBC],edi
	test ecx,ecx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release

 Block32:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0xB4]
	push esi
	push eax
	mov dword ptr [esp+0xC8],7
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0xBC],edi
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
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
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea eax,[esp+0x18]
	push eax
	push 0xFF24476B
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov ebx,8
	push ecx
	mov dword ptr [esp+0xD4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xCC],9
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0xCC],8
	call IWzFont::Create
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea ecx,[esp+0x14]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xB8]
	add esp,8
	cmp esi,eax
	je Block47

 Block43:
	mov dword ptr [ebp+0xB8],eax
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	test esi,esi
	je Block47

 Block46:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block47:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	lea eax,[esp+0x14]
	push 0x18
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xBC]
	add esp,8
	cmp esi,eax
	je Block54

 Block50:
	mov dword ptr [ebp+0xBC],eax
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block52:
	test esi,esi
	je Block54

 Block53:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block54:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block56:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0xC0],0xA
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0xB
	push offset _S_UIUIWINDOW2IMGME__25
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0xC
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0xD
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x98]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xBC],bl
	jne Block72

 Block66:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block68:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block69:
	mov ebx,8
	mov byte ptr [esp+0xBC],0xA
	cmp word ptr [esp+0x18],bx
	jne Block73

 Block70:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block74

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block72:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x48]
	push eax
	call esi
	jmp Block69

 Block73:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block74:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x28],bx
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block78:
	lea edx,[esp+0x18]
	push edx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0xC0],0xE
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0xF
	push offset _S_UIUIWINDOW2IMGME__24
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0x10
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x11
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x9C]
	push eax
	mov dword ptr [esp+0x8C],ecx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block87

 Block85:
	cmp eax,0x80004002
	je Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xBC],bl
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block91:
	mov ebx,8
	mov byte ptr [esp+0xBC],0xE
	cmp word ptr [esp+0x28],bx
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block95:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block98

 Block96:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block99:
	lea eax,[esp+0x18]
	push eax
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0xC0],0x12
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0x13
	push offset _S_UIUIWINDOW2IMGME__23
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0x14
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x15
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xA0]
	push eax
	mov dword ptr [esp+0x74],ecx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block108

 Block106:
	cmp eax,0x80004002
	je Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xBC],bl
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[esp+0x48]
	push edx
	call esi

 Block112:
	mov ebx,8
	mov byte ptr [esp+0xBC],0x12
	cmp word ptr [esp+0x28],bx
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block116:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block120:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0xC0],0x16
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0x17
	push offset _S_UIUIWINDOW2IMGME__22
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0x18
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x19
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xA4]
	push eax
	mov dword ptr [esp+0x94],ecx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block129

 Block127:
	cmp eax,0x80004002
	je Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xBC],bl
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block133:
	mov ebx,8
	mov byte ptr [esp+0xBC],0x16
	cmp word ptr [esp+0x28],bx
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block137:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x18]
	push ecx
	call esi

 Block141:
	lea edx,[esp+0x18]
	push edx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0xC0],0x1A
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0x1B
	push offset _S_UIUIWINDOW2IMGME__21
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0x1C
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1D
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xA8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block150

 Block148:
	cmp eax,0x80004002
	je Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	mov edi,8
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x48],di
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block154:
	mov byte ptr [esp+0xBC],0x1A
	cmp word ptr [esp+0x28],di
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block158:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x18],di
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block162:
	mov esi,dword ptr [esp+0xC4]
	mov edi,dword ptr [esi+8]
	lea eax,[esp+0x6F]
	push eax
	lea ecx,[ebp+0xC0]
	push edi
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x70],ecx
	call ZArray<CMemoListDlg::MEMO>::_Alloc
	mov ecx,dword ptr [esi+0xC]
	xor ebx,ebx
	cmp edi,ebx
	mov dword ptr [esp+0x9C],ecx
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x14],ebx
	jle Block250

 Block163:
	mov dword ptr [esp+0x44],ebx
	jmp Block165

 Block165:
	lea edx,[esp+0x9C]
	push edx
	call ZList<GW_Memo>::GetNext
	mov ecx,dword ptr [esp+0x6C]
	mov ebx,dword ptr [ecx]
	add ebx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [ebx],0
	mov dword ptr [ebx+4],edx
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x64],eax
	add esp,4
	add eax,4
	mov dword ptr [ebx+8],ecx
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0xA4],ebx
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x74]
	lea edi,[ebx+0xC]
	lea edx,[esp+0x74]
	cmp edi,edx
	je Block177

 Block166:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block175

 Block167:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block174

 Block168:
	test esi,esi
	je Block174

 Block169:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block171:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block173

 Block172:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block173:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block174:
	mov dword ptr [edi],0

 Block175:
	mov dword ptr [edi],ebp
	test ebp,ebp
	je Block185

 Block176:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block177:
	test ebp,ebp
	je Block185

 Block178:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block184

 Block179:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block181:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block183

 Block182:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block184:
	mov dword ptr [esp+0x74],0

 Block185:
	mov edi,dword ptr [esp+0x60]
	add edi,0x11
	mov eax,dword ptr [edi+0xD1]
	mov dword ptr [ebx+0x18],eax
	mov dword ptr [esp+0x64],0
	je Block187

 Block186:
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push 0
	dec esi
	push esi
	lea ecx,[esp+0x6C]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea ecx,[esp+0x68]
	call ZXString16::ReleaseBuffer

 Block187:
	xor ebx,ebx
	mov dword ptr [esp+0xBC],0x1E
	mov dword ptr [esp+0x40],ebx
	mov byte ptr [esp+0xBC],0x1F
	lea ebx,[ebx]

 Block188:
	mov edi,dword ptr [esp+0x64]
	test edi,edi
	je Block190

 Block189:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block191

 Block190:
	xor eax,eax

 Block191:
	cmp ebx,eax
	jge Block225

 Block192:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block193:
	mov edx,dword ptr [esp+0x70]
	mov esi,dword ptr [edx]
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xC0],0x20
	push ecx
	test esi,esi
	je Block11

 Block194:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x60]
	push ecx
	push esi
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block196

 Block195:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block196:
	mov eax,dword ptr [esp+0x60]
	add eax,0xFFFFFFF0
	push eax
	push ecx
	lea edx,[edi+ebx*2]
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [eax+0xB8]
	mov byte ptr [esp+0xCC],0x21
	test ecx,ecx
	je Block11

 Block197:
	mov byte ptr [esp+0xCC],0x20
	call IWzFont::CalcLongestTextForGlobalEx
	cmp word ptr [esp+0x28],8
	mov esi,eax
	mov byte ptr [esp+0xBC],0x1F
	jne Block200

 Block198:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	lea eax,[esi+ebx]
	push eax
	push ebx
	lea ecx,[esp+0xA0]
	push ecx
	lea ecx,[esp+0x70]
	call ZXString16::Substring
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xC0],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0xBC],0x1F
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block203:
	mov edx,dword ptr [esp+0x8C]
	mov eax,dword ptr [esp+0x40]
	add edx,esi
	push eax
	lea ecx,[esp+0x80]
	add ebx,edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x44]
	lea ecx,[eax+edx+0x14]
	push 0xFFFFFFFF
	mov byte ptr [esp+0xC0],0x23
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov ebp,dword ptr [esp+0x7C]
	mov esi,eax
	lea ecx,[esp+0x7C]
	cmp esi,ecx
	je Block215

 Block204:
	mov edi,dword ptr [esi]
	test edi,edi
	je Block213

 Block205:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block212

 Block206:
	test edi,edi
	je Block212

 Block207:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block209

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block209:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block211

 Block210:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block211:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block212:
	mov dword ptr [esi],0

 Block213:
	mov dword ptr [esi],ebp
	test ebp,ebp
	je Block215

 Block214:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block215:
	mov byte ptr [esp+0xBC],0x1F
	test ebp,ebp
	je Block223

 Block216:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block222

 Block217:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block219:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block221

 Block220:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block221:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block222:
	mov dword ptr [esp+0x7C],0

 Block223:
	cmp dword ptr [esp+0x40],0
	je Block188

 Block224:
	mov edx,dword ptr [esp+0x40]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4
	mov dword ptr [esp+0x40],0
	jmp Block188

 Block225:
	mov ecx,dword ptr [esp+0x60]
	lea eax,[esp+0xA4]
	push eax
	add ecx,0xDA
	push ecx
	call FileTimeToSystemTime
	lea edx,[esp+0x94]
	push 0xA71
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx ecx,word ptr [esp+0xAE]
	movzx edx,word ptr [esp+0xAC]
	mov eax,dword ptr [eax]
	push ecx
	movzx ecx,word ptr [esp+0xA8]
	push edx
	movzx edx,word ptr [esp+0xB2]
	push ecx
	movzx ecx,word ptr [esp+0xB2]
	push edx
	mov edx,dword ptr [esp+0x78]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push eax
	mov eax,dword ptr [edx]
	lea edx,[ecx+eax+0x10]
	push edx
	mov byte ptr [esp+0xD8],0x24
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB0]
	add esp,0x1C
	mov byte ptr [esp+0xBC],0x1F
	test eax,eax
	je Block227

 Block226:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block227:
	mov eax,dword ptr [esp+0x88]
	mov esi,dword ptr [eax]
	test esi,esi
	je Block11

 Block228:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x60]
	push edx
	push esi
	mov dword ptr [esp+0x68],0
	call eax
	test eax,eax
	jge Block230

 Block229:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block230:
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [ecx]
	add eax,dword ptr [esp+0x44]
	mov ebx,dword ptr [esp+0x60]
	mov eax,dword ptr [eax+0x14]
	test eax,eax
	jne Block232

 Block231:
	xor ebp,ebp
	jmp Block233

 Block232:
	mov ebp,dword ptr [eax-4]

 Block233:
	mov edx,dword ptr [esp+0x70]
	mov esi,dword ptr [edx]
	test esi,esi
	je Block11

 Block234:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x58]
	push ecx
	push esi
	mov dword ptr [esp+0x60],0
	call edx
	test eax,eax
	jge Block236

 Block235:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block236:
	mov eax,dword ptr [esp+0x90]
	mov edi,dword ptr [eax]
	mov esi,dword ptr [esp+0x58]
	test edi,edi
	je Block11

 Block237:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x78]
	push edx
	push edi
	mov dword ptr [esp+0x80],0
	call eax
	test eax,eax
	jge Block239

 Block238:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block239:
	mov ecx,dword ptr [esp+0x5C]
	imul esi,ebp
	add esi,dword ptr [esp+0x78]
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [edx+0x18]
	add esi,ebx
	sub eax,1
	lea edi,[ecx+esi+7]
	mov dword ptr [esp+0x5C],edi
	jne Block244

 Block240:
	mov eax,dword ptr [esp+0x70]
	mov esi,dword ptr [eax]
	test esi,esi
	je Block11

 Block241:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x84]
	push edx
	push esi
	mov dword ptr [esp+0x8C],0
	call eax
	test eax,eax
	jge Block243

 Block242:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block243:
	mov eax,dword ptr [esp+0x84]
	lea ecx,[eax+edi]
	lea edx,[ecx+eax*2]
	mov dword ptr [esp+0x5C],edx

 Block244:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xBC],0x1E
	test eax,eax
	je Block246

 Block245:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block246:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	test eax,eax
	je Block248

 Block247:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block248:
	mov eax,dword ptr [esp+0x14]
	add dword ptr [esp+0x44],0x1C
	inc eax
	cmp eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x14],eax
	jl Block165

 Block249:
	mov ebp,dword ptr [esp+0x80]
	xor ebx,ebx

 Block250:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0xBC],0x25
	cmp eax,ebx
	je Block252

 Block251:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block253

 Block252:
	xor eax,eax

 Block253:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp eax,ebx
	je Block262

 Block254:
	add eax,8
	cmp eax,ebx
	je Block262

 Block255:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block257

 Block256:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block257:
	mov eax,dword ptr [ebp+0x94]
	mov dword ptr [ebp+0x94],esi
	cmp eax,ebx
	je Block261

 Block258:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block261

 Block259:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block261

 Block260:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block261:
	mov ecx,dword ptr [ebp+0x94]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push ebx
	push 0x7F
	push 0x3B
	push 0xF8
	push 8
	push 1
	push 0x3E8
	push ebp
	call edx
	mov eax,dword ptr [ebp+0x94]
	mov dword ptr [eax+0x34],0xEC
	mov eax,0x66666667
	imul dword ptr [esp+0x5C]
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	lea eax,[edx+ecx-0xC]
	mov ecx,dword ptr [ebp+0x94]
	xor edx,edx
	cmp eax,ebx
	setle dl
	dec edx
	and eax,edx
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 4

 Block262:
	xor esi,esi
	jmp Block257
}
}
// CMemoListDlg::OnChildNotify
__SUB_CLASS_THIS(00224120, __thiscall, 85040,  CMemoListDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CMemoListDlg::Draw
_SUB_EXCEPTION_HANDLER(225810)
__SUB_CLASS_THIS(00225810, __thiscall, 85041,  CMemoListDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_225810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0xC0]
	xor esi,esi
	mov dword ptr [ebp-4],esi
	cmp eax,esi
	jne Block2

 Block1:
	mov dword ptr [ebp-0x28],esi
	jmp Block3

 Block2:
	mov edx,dword ptr [eax-4]
	mov dword ptr [ebp-0x28],edx
	mov esi,edx

 Block3:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x20]
	push eax
	call ebx
	lea ecx,[ebp-0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov eax,0x20
	mov byte ptr [ebp-4],1
	call __chkstk
	mov eax,esp
	lea edx,[ebp-0x20]
	push edx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xB0]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov byte ptr [ebp-4],1
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x20],8
	mov dword ptr [ebp-0x3C],eax
	mov byte ptr [ebp-4],0
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	lea edx,[ebp-0x38]
	push edx
	call ebx
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],3
	call ebx
	lea edx,[ebp-0x20]
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
	mov bl,4
	mov eax,0x20
	mov byte ptr [ebp-4],bl
	call __chkstk
	mov eax,esp
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,dword ptr [edi+0xB0]
	lea edx,[ebp-0x20]
	push edx
	push ecx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],5
	test esi,esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,0x8C
	sub eax,dword ptr [ebp-0x3C]
	push 0x23
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x20],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x38],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x20]
	push edx
	call ebx
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],6
	call ebx
	lea edx,[ebp-0x38]
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
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [edi+0xAC]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x44],esp
	push 0xA76
	push edx
	mov byte ptr [ebp-4],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x23
	mov byte ptr [ebp-4],8
	push 0x8D
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],6
	jne Block36

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block33:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0
	jne Block37

 Block34:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block38

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block36:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x38]
	push ecx
	call esi
	jmp Block33

 Block37:
	lea eax,[ebp-0x20]
	push eax
	call esi

 Block38:
	mov dword ptr [ebp-0x24],0
	lea ecx,[ebp-0x3C]
	push 0x3D0
	push ecx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[ebp-0x24]
	push edx
	push eax
	mov byte ptr [ebp-4],0xA
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	lea eax,[ebp-0x20]
	push eax
	call ebx
	lea ecx,[ebp-0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0xB
	call ebx
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x38]
	push eax
	push 0x7F
	push 0xEC
	call IWzCanvas::Create
	mov ebx,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x38],bx
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x38]
	push edx
	call esi

 Block50:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x20],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x20]
	push ecx
	call esi

 Block54:
	xor esi,esi
	cmp dword ptr [ebp-0x28],esi
	jle Block59

 Block55:
	xor ebx,ebx
	nop

 Block56:
	mov eax,dword ptr [ebp-0x28]
	dec eax
	xor edx,edx
	cmp esi,eax
	mov eax,dword ptr [edi+0x94]
	mov eax,dword ptr [eax+0x38]
	sete dl
	mov ecx,eax
	neg ecx
	add ecx,ecx
	add ecx,ecx
	sub ecx,eax
	add ecx,ecx
	push edx
	mov edx,dword ptr [edi+0xC0]
	push ecx
	add edx,ebx
	push edx
	push ecx
	mov ecx,dword ptr [ebp-0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x44],esp
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block58:
	mov ecx,edi
	call CMemoListDlg::DrawMemo
	inc esi
	add ebx,0x1C
	cmp esi,dword ptr [ebp-0x28]
	jl Block56

 Block59:
	mov ecx,3
	mov word ptr [ebp-0x20],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0x18],ecx
	mov edi,dword ptr [ebp-0x20]
	mov esi,dword ptr [ebp-0x40]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0x3B
	push 0xA
	push esi
	mov byte ptr [ebp-4],0xD
	call ecx
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],9
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	lea esp,[ebp-0x54]
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
// CMemoListDlg::OnButtonClicked
__SUB_CLASS_THIS(00224170, __thiscall, 85042,  CMemoListDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block4:
	cmp eax,8
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block6:
	ret 4
}
}
// CMemoListDlg::~CMemoListDlg
_SUB_EXCEPTION_HANDLER(225F90)
__SUB_CLASS_THIS0(00225F90, __thiscall, 85038,  CMemoListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_225F90
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
	int 3// TODO: 	mov dword ptr [esi],offset CMemoListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoListDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC4]
	mov dword ptr [esp+0x18],0xC
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x18],0xB
	call ZArray<CMemoListDlg::MEMO>::RemoveAll
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x18],0xA
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x18],9
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x18],8
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x18],7
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block22

 Block21:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block22:
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
