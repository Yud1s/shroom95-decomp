#include "regen.hpp"
// ITCWnd4.ipp
#include "ITCWnd4.hpp"

// CITCWndItemDlg::OnCreate
_SUB_EXCEPTION_HANDLER(18C220)
__SUB_CLASS_THIS(0018C220, __thiscall, 84339,  CITCWndItemDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18C220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x20],esi
	xor edi,edi
	mov dword ptr [ebp+0x58],edi
	lea eax,[ebp+0x64]
	push 0x3D0
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x58]
	push ecx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x18]
	push edx
	mov dword ptr [esi+0x24],0xCA
	mov dword ptr [esi+0x28],0x12E
	call ebx
	lea eax,[ebp+0x18]
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
	lea ecx,[ebp+0x28]
	push ecx
	mov byte ptr [ebp-4],2
	call ebx
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],3
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[ebp+0x28]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x28],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x18],di
	jne Block15

 Block13:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[ebp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[ebp+0x48]
	push eax
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],4
	call ebx
	lea eax,[ebp+0x38]
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
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],5
	call ebx
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[ebp+0x28]
	push eax
	mov byte ptr [ebp-4],6
	call ebx
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[ebp+0x18]
	push edx
	mov byte ptr [ebp-4],7
	call ebx
	lea eax,[ebp+0x18]
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
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x38]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x28]
	push eax
	mov eax,dword ptr [ebp+0x58]
	lea edx,[ebp+0x18]
	push edx
	push eax
	lea edx,[ebp]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],7
	jne Block46

 Block43:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	test eax,eax
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[ebp+0x18]
	push edx
	call edi

 Block47:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp+0x28]
	push ecx
	call edi

 Block51:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],5
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block55:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],4
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[ebp+0x38]
	push edx
	call edi

 Block59:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[ebp+0x48]
	push ecx
	call edi

 Block63:
	lea edx,[ebp+0x38]
	push edx
	call ebx
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[ebp+0x5C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	xor edi,edi
	mov bl,0xC
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[ebp+0x64]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	cmp ecx,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[ebp+0x38]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[ebp+0x48]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x48],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x38],bx
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1272
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [ebp-0x28],edi
	mov dword ptr [ebp-0x34],1
	mov dword ptr [ebp-0x30],edi
	mov dword ptr [ebp-0x2C],edi
	lea edx,[ebp+0x64]
	push 0x1A71
	push edx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xE
	cmp eax,edi
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block85:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0x10
	cmp eax,edi
	je Block87

 Block86:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block88

 Block87:
	xor eax,eax

 Block88:
	mov byte ptr [ebp-4],0xE
	cmp eax,edi
	je Block96

 Block89:
	add eax,8
	cmp eax,edi
	je Block96

 Block90:
	lea edi,[eax-8]
	test edi,edi
	je Block92

 Block91:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block92:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [ebp+0x34],eax
	test eax,eax
	je Block94

 Block93:
	push 0
	lea ecx,[ebp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block94:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x34]
	push eax
	push 2
	push 0xD
	push 0xB2
	push 0x3E8
	push esi
	call edx
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call ebx
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block95:
	push eax
	call _com_issue_error

 Block96:
	xor edi,edi
	jmp Block92

 Block97:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x11
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	push 0
	push 0
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x13
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x12
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xAF8]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block104

 Block102:
	cmp eax,0x80004002
	je Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	mov edi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp],di
	jne Block107

 Block105:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x48],di
	jne Block111

 Block109:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x38],di
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block118

 Block117:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block119

 Block118:
	xor eax,eax

 Block119:
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block127

 Block120:
	add eax,8
	je Block127

 Block121:
	lea edi,[eax-8]
	test edi,edi
	je Block123

 Block122:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [ebp+0x34],eax
	test eax,eax
	je Block125

 Block124:
	push 0
	lea ecx,[ebp+0x30]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block125:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0
	push 0xA6
	push 0x2F
	push 0x12
	push 5
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0
	lea eax,[ebp+0x38]
	push eax
	call ebx
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block128

 Block126:
	push eax
	call _com_issue_error

 Block127:
	xor edi,edi
	jmp Block123

 Block128:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x16
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	push 0
	push 0
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1273
	mov bl,0x17
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x18
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block135

 Block133:
	cmp eax,0x80004002
	je Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp],si
	jne Block138

 Block136:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x48],si
	jne Block142

 Block140:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x38],si
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x18]
	push edx
	call esi
	lea eax,[ebp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x1E
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	xor esi,esi
	push esi
	push esi
	lea eax,[ebp+0x18]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1274
	mov bl,0x1F
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x20
	cmp dword ptr [_D_G_RM],esi
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block156

 Block154:
	cmp eax,0x80004002
	je Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	mov edi,8
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x54],di
	jne Block159

 Block157:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	cmp eax,esi
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x1C],di
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x18],di
	jne Block167

 Block165:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	cmp eax,esi
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea eax,[ebp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov dword ptr [ebp+0x14],esi
	jmp Block170

 Block170:
	mov edi,dword ptr [ebp+0x5C]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [ebp+0x10],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ecx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x26
	test edi,edi
	je Block7

 Block171:
	lea edx,[ebp-0x64]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x34],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block176

 Block172:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
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
	and ebx,dword ptr [ebp-0x24]
	test eax,eax
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block174:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block176

 Block175:
	cmp edi,0x80004002
	jne Block193

 Block176:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0x14]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x28
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	je Block7

 Block177:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block182

 Block178:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
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
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block180

 Block179:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block180:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block182

 Block181:
	cmp edi,0x80004002
	jne Block193

 Block182:
	mov esi,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi+0x94]
	mov byte ptr [ebp-4],0x2B
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp-0x44],di
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block186:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x64],di
	jne Block189

 Block187:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov eax,dword ptr [ebp+0x14]
	inc eax
	cmp eax,4
	mov dword ptr [ebp+0x14],eax
	jl Block170

 Block191:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block195

 Block193:
	push edi
	call _com_issue_error

 Block194:
	xor eax,eax

 Block195:
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block208

 Block196:
	add eax,8
	je Block208

 Block197:
	lea edi,[eax-8]
	test edi,edi
	je Block199

 Block198:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	test eax,eax
	je Block203

 Block200:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block203

 Block202:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block203:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xC8
	push 0x47
	push 0xA5
	push 3
	push 1
	push 0x3EA
	push esi
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [eax+0x34],0x8E
	mov edx,dword ptr [esi+0xAF4]
	mov ecx,dword ptr [esi+0x94]
	dec edx
	push edx
	mov dword ptr [esi+0xAF0],1
	call CCtrlTab::SetTab
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x1D
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block205

 Block204:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block205:
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block207

 Block206:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block207:
	lea esp,[ebp-0x74]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 4

 Block208:
	xor edi,edi
	jmp Block199
}
}
// CITCWndItemDlg::OnMouseButton
__SUB_CLASS_THIS(0018BE80, __thiscall, 84341,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	mov esi,ecx
	mov dword ptr [esp+0x18],edi
	jne Block19

 Block1:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block19

 Block2:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block19

 Block3:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x10],eax
	test edi,edi
	je Block8

 Block4:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block7

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block7:
	mov dword ptr [esp+0x20],0

 Block8:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	push ecx
	lea ebx,[esi-4]
	push edx
	mov ecx,ebx
	call CITCWndItemDlg::GetSlotPositionFromPoint
	mov ebp,eax
	mov eax,dword ptr [esi+0xAF0]
	push ebp
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x3C],ebp
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov dword ptr [esp+0x14],0

 Block13:
	push edi
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	jne Block19

 Block14:
	test edi,edi
	je Block18

 Block15:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esi+0xB00]
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x28]
	cmp eax,0x202
	jne Block20

 Block17:
	push ebp
	mov ecx,ebx
	call CITCWndItemDlg::SetSelectedNo

 Block18:
	lea ecx,[esi+0xA4]
	call CUIToolTip::ClearToolTip

 Block19:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10

 Block20:
	cmp eax,0x203
	jne Block18

 Block21:
	mov eax,dword ptr [esi+0xB08]
	mov ebp,dword ptr [eax+0x18]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,edi
	call edx
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x20]
	mov ecx,ebp
	mov dword ptr [esp+0x34],eax
	call edx
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,eax
	jge Block23

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1297
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
	add esp,0x14
	ret 0x10

 Block23:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0x2054]
	mov ecx,dword ptr [esi+0xB08]
	push eax
	add ecx,0x34
	push ecx
	call lstrcmpiA
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x48],esp
	test eax,eax
	jne Block25

 Block24:
	mov edx,esp
	push 0x1298
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10

 Block25:
	mov eax,esp
	push 0x12BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block19

 Block26:
	mov ecx,dword ptr [esi+0xB08]
	mov edx,dword ptr [ecx+0x20]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0xAF0]
	push edx
	push edi
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xAFC]
	call CITC::OnSaleCurrentItem
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,ebx
	call eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CITCWndItemDlg::GetItemSlotRect
__SUB_CLASS_THIS(0018B890, __thiscall, 84350,  CITCWndItemDlg, int32_t, long, tagRECT*) {
__asm {

 Block0:
	sub esp,8
	push ebp
	push edi
	lea eax,[esp+8]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push esi
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
	pop esi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [edi+0xAF4]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edx,dword ptr [edi+0xAF0]
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,edx
	jl Block14

 Block8:
	add edx,0x18
	cmp edx,eax
	jge Block10

 Block9:
	mov eax,edx

 Block10:
	cmp ecx,eax
	jge Block14

 Block11:
	sub ecx,dword ptr [edi+0xAF0]
	mov eax,ecx
	cdq
	and edx,3
	add eax,edx
	mov edx,ecx
	sar eax,2
	and edx,0x80000003
	jns Block13

 Block12:
	dec edx
	or edx,0xFFFFFFFC
	inc edx

 Block13:
	mov ecx,eax
	shl ecx,4
	add ecx,eax
	lea eax,[edx+edx*8]
	add ecx,ecx
	add eax,eax
	lea edx,[ecx+0x67]
	push edx
	add eax,eax
	lea edx,[eax+0x35]
	push edx
	add ecx,0x47
	push ecx
	add eax,0x15
	push eax
	mov eax,dword ptr [esp+0x28]
	push eax
	call SetRect
	pop edi
	mov eax,1
	pop ebp
	add esp,8
	ret 8

 Block14:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	call SetRectEmpty
	pop edi
	xor eax,eax
	pop ebp
	add esp,8
	ret 8
}
}
// CITCWndItemDlg::Draw
_SUB_EXCEPTION_HANDLER(18CFD0)
__SUB_CLASS_THIS(0018CFD0, __thiscall, 84344,  CITCWndItemDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18CFD0
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x3C],0

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov edx,dword ptr [ebx+0xAF4]
	lea eax,[ebp+edx*4+0x501]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x80],0
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov ecx,dword ptr [ebx+0xAF0]
	mov esi,dword ptr [esp+0x1C]
	mov edx,eax
	mov dword ptr [esp+0x20],edx

 Block8:
	mov eax,dword ptr [ebx+0xAF0]
	add eax,0x18
	cmp eax,edx
	mov dword ptr [esp+0x88],ecx
	jl Block10

 Block9:
	mov eax,edx

 Block10:
	cmp ecx,eax
	jge Block47

 Block11:
	mov eax,dword ptr [ebx+0xAF4]
	push ecx
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block16

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov edx,dword ptr [esp+0x2C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block15

 Block14:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block15:
	mov dword ptr [esp+0x2C],0

 Block16:
	test edi,edi
	je Block46

 Block17:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x88]
	mov ebp,eax
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	call CITCWndItemDlg::GetItemSlotRect
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x18]
	mov ecx,edi
	call eax
	push 2
	push 0
	push 0
	mov ecx,edi
	push 0
	cmp eax,3
	jne Block19

 Block18:
	call GW_ItemSlotPet::IsDead
	push eax
	push 0
	push 0
	jmp Block20

 Block19:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	call eax
	push eax

 Block20:
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x64]
	push ecx
	push edx
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov dword ptr [esp+0x50],esp
	test esi,esi
	je Block22

 Block21:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block22:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ebp,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp+0xAF4]
	cmp eax,2
	je Block25

 Block23:
	cmp eax,3
	je Block25

 Block24:
	cmp eax,4
	jne Block30

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	push 0
	push ecx
	mov edi,eax
	mov eax,dword ptr [ebp+0xAF8]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x50]
	push edi
	add eax,0xFFFFFFF4
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block29:
	call draw_number_by_image
	add esp,0x18

 Block30:
	mov ecx,ebx
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebp+0xB04]
	je Block34

 Block31:
	test esi,esi
	je Block56

 Block32:
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0x72363636
	push 0x20
	push 0x20
	push edx
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov edx,dword ptr [esp+0x88]
	cmp edx,dword ptr [ebp+0xAFC]
	jne Block46

 Block35:
	test esi,esi
	je Block56

 Block36:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ecx
	push edx
	push esi
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov ecx,dword ptr [esp+0x88]
	mov ebx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x20]
	inc ecx
	jmp Block8

 Block47:
	cmp dword ptr [ebx+0xAF4],2
	jne Block88

 Block48:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block88

 Block49:
	push 0
	push 0
	push 0
	push 0
	push 0
	call CUserLocal::GetProperBulletPosition
	test eax,eax
	je Block88

 Block50:
	lea ecx,[esp+0x68]
	push ecx
	push eax
	mov ecx,ebx
	call CITCWndItemDlg::GetItemSlotRect
	test eax,eax
	je Block88

 Block51:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],1
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	push 0
	push 0
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x9C],esp
	push 0x760
	push edx
	mov byte ptr [esp+0x9C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],3
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],4
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block61

 Block58:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x88]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x88]
	mov edi,ecx
	mov dword ptr [esp+0x20],edi
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x58],bx
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x58]
	push eax
	call ebp

 Block65:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x38],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x38]
	push edx
	call ebp

 Block69:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x28],bx
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x28]
	push ecx
	call ebp

 Block73:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0xFF
	xor ebx,ebx
	mov byte ptr [esp+0x80],9
	cmp edi,ebx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x88]
	push ecx
	push edi
	mov dword ptr [esp+0x90],ebx
	call edx
	cmp eax,ebx
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block77:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	mov ebp,dword ptr [esp+0x88]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block79

 Block78:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block79:
	cmp esi,ebx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x68]
	sub edx,dword ptr [esp+0x18]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	sub ecx,ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x60]
	push edi
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x68]
	push ecx
	push edx
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [ebx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block83

 Block82:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	mov eax,8
	mov byte ptr [esp+0x80],al
	cmp word ptr [esp+0x48],ax
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x84],0
	call ecx

 Block88:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test esi,esi
	je Block90

 Block89:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block90:
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
// CITCWndItemDlg::OnMouseMove
__SUB_CLASS_THIS(0018C0F0, __thiscall, 84342,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	mov eax,dword ptr [esp+0x18]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	lea ecx,[esi-4]
	call CITCWndItemDlg::GetSlotPositionFromPoint
	mov edi,eax
	mov dword ptr [esp+8],edi
	test edi,edi
	je Block14

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block6

 Block2:
	push ebx
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block5:
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	pop ebx

 Block6:
	mov eax,dword ptr [esi+0xAF0]
	push edi
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	pop ebp
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov edx,dword ptr [esp+0xC]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov dword ptr [esp+0xC],0

 Block11:
	test edi,edi
	jne Block13

 Block12:
	lea ecx,[esi+0xA4]
	call CUIToolTip::ClearToolTip
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x38]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x38]
	lea ecx,[esi+0xA4]
	push eax
	call CUIToolTip::ShowItemToolTip

 Block14:
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8
}
}
// CITCWndItemDlg::OnButtonClicked
__SUB_CLASS_THIS(0018B550, __thiscall, 84343,  CITCWndItemDlg, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block2:
	ret 4
}
}
// CITCWndItemDlg::OnDestroy
__SUB_CLASS_THIS0(0018B770, __thiscall, 84338,  CITCWndItemDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	add esi,0x88
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CITCBidAuctionDlg::~CITCBidAuctionDlg
_SUB_EXCEPTION_HANDLER(18B990)
__SUB_CLASS_THIS0(0018B990, __thiscall, 141547,  CITCBidAuctionDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18B990
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCBidAuctionDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCBidAuctionDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCBidAuctionDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xD0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],4
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xD0]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xD0]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xD0],ebx

 Block5:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block7

 Block6:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block7:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
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
// CITCWndItemDlg::~CITCWndItemDlg
_SUB_EXCEPTION_HANDLER(18B620)
__SUB_CLASS_THIS0(0018B620, __thiscall, 84338,  CITCWndItemDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18B620
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCWndItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWndItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWndItemDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB0C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xB0C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB0C]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xB0C],ebx

 Block5:
	mov eax,dword ptr [esi+0xAF8]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
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
// CITCWndItemDlg::GetSlotPositionFromPoint
__SUB_CLASS_THIS(0018BCA0, __thiscall, 84347,  CITCWndItemDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,dword ptr [esi+0xAF4]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edi,dword ptr [esi+0xAF0]
	mov ebp,eax

 Block8:
	mov eax,dword ptr [esi+0xAF0]
	add eax,0x18
	cmp eax,ebp
	jl Block10

 Block9:
	mov eax,ebp

 Block10:
	cmp edi,eax
	jge Block14

 Block11:
	lea edx,[esp+0x10]
	push edx
	push edi
	mov ecx,esi
	call CITCWndItemDlg::GetItemSlotRect
	mov eax,dword ptr [esp+0x28]
	push eax
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block13

 Block12:
	inc edi
	jmp Block8

 Block13:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCWndItemDlg::ClearToolTip
__SUB_CLASS_THIS0(0018B750, __thiscall, 84345,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xA4
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCBidAuctionDlg::CITCBidAuctionDlg
_SUB_EXCEPTION_HANDLER(18BD70)
__SUB_CLASS_THIS(0018BD70, __thiscall, 141545,  CITCBidAuctionDlg, void, void*, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18BD70
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
	call CDialog::_ctor_default
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CITCBidAuctionDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCBidAuctionDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCBidAuctionDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esi+0x94],ebx
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA4],ebx
	mov dword ptr [esi+0xAC],ebx
	lea ecx,[esi+0xCC]
	mov dword ptr [ecx+4],ebx
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x28]
	push edi
	mov byte ptr [esp+0x20],5
	mov dword ptr [esi+0xC4],eax
	call ZRef<ITCITEM>::op_assign_copy
	mov ecx,dword ptr [edi+4]
	mov eax,dword ptr [ecx+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov dword ptr [esi+0xC8],eax
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x10]
	mov dword ptr [esi+0xB8],eax
	mov ecx,dword ptr [edi+4]
	movsx eax,word ptr [ecx+0xE]
	mov edx,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xB4],edx
	call get_update_time
	push ebx
	push 1
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xC0],eax
	call CDialog::CreateDlg_1
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCWndItemDlg::CITCWndItemDlg
_SUB_EXCEPTION_HANDLER(18BB00)
__SUB_CLASS_THIS(0018BB00, __thiscall, 84336,  CITCWndItemDlg, void, void*, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18BB00
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
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CITCWndItemDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWndItemDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWndItemDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAF8],edi
	lea ecx,[esi+0xB08]
	mov dword ptr [ecx+4],edi
	mov eax,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x28]
	push ebx
	mov byte ptr [esp+0x20],6
	mov dword ptr [esi+0xB00],eax
	call ZRef<ITCITEM>::op_assign_copy
	mov ecx,dword ptr [ebx+4]
	mov eax,dword ptr [ecx+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	mov dword ptr [esi+0xB04],eax
	call get_item_slottype_from_id
	add esp,4
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xAF4],eax
	mov dword ptr [esi+0xAFC],0xFFFFFFFF
	call CDialog::CreateDlg_1
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCBidAuctionDlg::OnCreate
_SUB_EXCEPTION_HANDLER(18D6A0)
__SUB_CLASS_THIS(0018D6A0, __thiscall, 141548,  CITCBidAuctionDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18D6A0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x9C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0xA0],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x94],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esi+0x24],0x122
	mov dword ptr [esi+0x28],0x12E
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x98],2
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x94],2
	cmp word ptr [esp+0x1C],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x3C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x6C]
	push eax
	call ebx
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x98],4
	call ebx
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x98],5
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x98],6
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x98],7
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x98],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],9
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x4C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],8
	cmp eax,ebp
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],7
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block47:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x94],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block51:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],5
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block55:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],4
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x5C]
	push edx
	call edi

 Block59:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x94],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x6C]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x5C]
	push edx
	call ebx
	lea eax,[esp+0x5C]
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
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],0xA
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0x94],bl
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0xD
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x70]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],0xB
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [esp+0x94],0xA
	cmp word ptr [esp+0x6C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x6C]
	push ecx
	call edi

 Block79:
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x5C],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block83:
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIITCIMGAUCTIONB
	call _xbstr_t::_ctor_0
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x34],ebp
	lea ecx,[esp+0x1C]
	push 0x512
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x98],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block85:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0x10
	cmp eax,ebp
	je Block87

 Block86:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block88

 Block87:
	xor eax,eax

 Block88:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block98

 Block89:
	add eax,8
	cmp eax,ebp
	je Block98

 Block90:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block92

 Block91:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block92:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block94

 Block93:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block94:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push 0x9C
	push 0xAA
	push 1
	push esi
	call eax
	lea ecx,[esp+0x1C]
	push 0x513
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x98],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block96:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0x12
	cmp eax,ebp
	je Block99

 Block97:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block100

 Block98:
	xor edi,edi
	jmp Block92

 Block99:
	xor eax,eax

 Block100:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block110

 Block101:
	add eax,8
	cmp eax,ebp
	je Block110

 Block102:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block104

 Block103:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block104:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block106

 Block105:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block106:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push 0x9C
	push 0xDC
	push 2
	push esi
	call eax
	lea ecx,[esp+0x1C]
	push 0xB9E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x98],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0x14
	cmp eax,ebp
	je Block111

 Block109:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block112

 Block110:
	xor edi,edi
	jmp Block104

 Block111:
	xor eax,eax

 Block112:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block122

 Block113:
	add eax,8
	cmp eax,ebp
	je Block122

 Block114:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block116

 Block115:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block116:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block118

 Block117:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block118:
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push 0x61
	push 0xEC
	push 0x3EB
	push esi
	call eax
	lea ecx,[esp+0x1C]
	push 0xB9F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x98],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block120:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0x16
	cmp eax,ebp
	je Block123

 Block121:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block124

 Block122:
	xor edi,edi
	jmp Block116

 Block123:
	xor eax,eax

 Block124:
	mov byte ptr [esp+0x94],bl
	cmp eax,ebp
	je Block135

 Block125:
	add eax,8
	cmp eax,ebp
	je Block135

 Block126:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block128

 Block127:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block128:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block130

 Block129:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block130:
	mov ecx,dword ptr [esi+0xAC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push 0x61
	push 0xFA
	push 0x3EC
	push esi
	call eax
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x94],0
	cmp eax,ebp
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebp
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block135:
	xor edi,edi
	jmp Block128
}
}
// CITCBidAuctionDlg::OnChildNotify
__SUB_CLASS_THIS(0018B590, __thiscall, 141549,  CITCBidAuctionDlg, void, uint32_t, uint32_t, uint32_t) {
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
// CITCBidAuctionDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(18EB50)
__SUB_CLASS_THIS(0018EB50, __thiscall, 141550,  CITCBidAuctionDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18EB50
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
	mov eax,dword ptr [esp+0x30]
	cmp eax,2
	jne Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block2:
	cmp eax,0x3EB
	jne Block7

 Block3:
	mov eax,dword ptr [esi+0xB0]
	mov edx,dword ptr [esi+0xB4]
	mov ecx,dword ptr [esi+0xD0]
	add edx,eax
	cmp edx,dword ptr [ecx+0x108]
	jge Block6

 Block4:
	movsx ecx,word ptr [ecx+0xE]
	add ecx,eax
	mov dword ptr [esi+0xB0],ecx

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block7:
	cmp eax,0x3EC
	jne Block10

 Block8:
	mov edx,dword ptr [esi+0xD0]
	movsx ecx,word ptr [edx+0xE]
	mov eax,dword ptr [esi+0xB0]
	cmp ecx,eax
	jge Block6

 Block9:
	sub eax,ecx
	mov dword ptr [esi+0xB0],eax
	jmp Block5

 Block10:
	cmp eax,1
	jne Block5

 Block11:
	mov eax,dword ptr [esi+0xC4]
	mov ecx,dword ptr [eax+0x24]
	push ecx
	add eax,0x1C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,esi
	mov edi,eax
	call CITCBidAuctionDlg::GetPriceWithCommision
	cmp edi,eax
	jge Block13

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x229
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block13:
	mov ecx,dword ptr [esi+0xB4]
	add ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [esi+0xD0]
	cmp ecx,dword ptr [eax+0x108]
	jl Block21

 Block14:
	mov dword ptr [esp+0x30],0
	lea edx,[esp+0xC]
	push 0x129E
	push edx
	mov dword ptr [esp+0x30],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [eax]
	mov ecx,esi
	mov byte ptr [esp+0x28],1
	call CITCBidAuctionDlg::GetPriceWithCommision
	push eax
	lea eax,[esp+0x34]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x44]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block6

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block19:
	mov ecx,dword ptr [esi+0xC4]
	lea eax,[esi+0xCC]
	push eax
	call CITC::OnBuyAuctionImm
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	add esp,4
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block21:
	push 0x134
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x13
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],2
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xD0]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xB4]
	push edx
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xB0]
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CITCBidAuctionDlg::Draw
_SUB_EXCEPTION_HANDLER(18E050)
__SUB_CLASS_THIS(0018E050, __thiscall, 141551,  CITCBidAuctionDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18E050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x8C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov edx,dword ptr [edi+0xC8]
	mov eax,dword ptr [edi+0xD0]
	movsx esi,word ptr [eax+0xC]
	mov ebp,dword ptr [eax+0x10]
	push 2
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	push 0x7B
	push 0x14
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [esp+0xB0],0
	mov dword ptr [esp+0xB8],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block2:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov edx,dword ptr [edi+0xC8]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetItemName
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x88],1
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x88],2
	call ebx
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x94]
	push 0
	mov bl,3
	push ecx
	mov byte ptr [esp+0x94],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x98],4
	call _xbstr_t::_ctor_0
	cmp dword ptr [esp+0x28],0
	mov byte ptr [esp+0x94],5
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esp+0x28]
	push 0x16
	push 0x5D
	mov byte ptr [esp+0x9C],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x3C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x84],2
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block14:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],1
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block18:
	mov dword ptr [esp+0x8C],0
	lea ecx,[esp+0x20]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x8C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x94]
	push edx
	mov byte ptr [esp+0x90],7
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x84],6
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea eax,[esp+0x14]
	push 4
	push eax
	call get_basic_font
	add esp,8
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x88],8
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x88],9
	call esi
	lea ecx,[esp+0x4C]
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
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x90]
	lea eax,[esp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x28]
	push 0x40
	mov byte ptr [esp+0x98],0xB
	push 0xAF
	mov ecx,esi
	mov byte ptr [esp+0x9C],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],9
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],8
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	lea ecx,[esp+0x20]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0xD0]
	mov edx,dword ptr [ecx+0xFC]
	mov eax,dword ptr [eax]
	add edx,ebp
	push edx
	push eax
	lea eax,[esp+0x94]
	push eax
	mov byte ptr [esp+0x90],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x84],8
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x88],0xD
	call ebp
	lea ecx,[esp+0x4C]
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
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x90]
	lea eax,[esp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	push 0x51
	mov byte ptr [esp+0x98],0xF
	push 0xAF
	mov ecx,esi
	mov byte ptr [esp+0x9C],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],0xD
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],8
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[esp+0x20]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xB0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x94]
	push eax
	mov byte ptr [esp+0x90],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x84],8
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x88],0x11
	call ebp
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x90]
	lea eax,[esp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	push 0x64
	mov byte ptr [esp+0x98],0x13
	push 0xAF
	mov ecx,esi
	mov byte ptr [esp+0x9C],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x84],0x11
	cmp word ptr [esp+0x4C],si
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x84],8
	cmp word ptr [esp+0x3C],si
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	lea ecx,[esp+0x20]
	push 0x47
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x1C]
	add esp,8
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	test esi,esi
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	lea eax,[esp+0x20]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [eax]
	mov ecx,edi
	mov byte ptr [esp+0x84],0x14
	call CITCBidAuctionDlg::GetPriceWithCommision
	push eax
	lea ecx,[esp+0x90]
	push esi
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x84],8
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea ecx,[esp+0x4C]
	mov bl,0x15
	push ecx
	mov byte ptr [esp+0x88],bl
	call ebp
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x90]
	lea ecx,[esp+0x50]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x98],0x16
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x28]
	push 0x73
	mov byte ptr [esp+0x98],0x17
	push 0xAF
	mov byte ptr [esp+0x9C],0x16
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x84],bl
	mov ebx,8
	cmp word ptr [esp+0x4C],bx
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x3C],bx
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	lea edx,[esp+0x4C]
	push edx
	call CITC::GetCorrectTime
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [ZImports::_SystemTimeToFileTime]
	mov dword ptr [esp+0x5C],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x60],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x64],ecx
	mov edx,dword ptr [eax+0xC]
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	mov dword ptr [esp+0x70],edx
	call esi
	mov eax,dword ptr [edi+0xD0]
	lea edx,[esp+0x6C]
	push edx
	add eax,0x2C
	push eax
	call FileTimeToSystemTime
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	call esi
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x30]
	cmp eax,edx
	jb Block107

 Block82:
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x34]
	ja Block84

 Block83:
	cmp ecx,esi
	jbe Block107

 Block84:
	push ebx
	sub ecx,esi
	push 0x61C46800
	sbb eax,edx
	push eax
	push ecx
	call __aulldvrm
	push 0
	push 0x23C34600
	mov esi,ebx
	push esi
	push ecx
	mov edi,eax
	mov dword ptr [esp+0x38],edx
	call __aulldiv
	mov esi,eax
	mov dword ptr [esp+0x20],0
	lea edx,[esp+0x24]
	push 0x12AD
	push edx
	mov byte ptr [esp+0x8C],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push edi
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x94],0x19
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov byte ptr [esp+0x84],0x18
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x88],0x1A
	call ebp
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x20]
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x1B
	push esi
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x28]
	push 0x2D
	mov byte ptr [esp+0x98],0x1C
	push 0xAF
	mov ecx,edi
	mov byte ptr [esp+0x9C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x84],0x1A
	cmp word ptr [esp+0x4C],bx
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov byte ptr [esp+0x84],0x18
	cmp word ptr [esp+0x3C],bx
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x84],bl
	test esi,esi
	je Block100

 Block99:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],6
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x84],1
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ecx
	jmp Block114

 Block107:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],6
	test eax,eax
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block109:
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x84],1
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call edx

 Block114:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 4
}
}
// CITCBidAuctionDlg::Update
__SUB_CLASS_THIS0(0018B5B0, __thiscall, 141547,  CITCBidAuctionDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call get_update_time
	mov ecx,eax
	sub ecx,dword ptr [esi+0xC0]
	cmp ecx,0x96
	jle Block2

 Block1:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xC0],eax
	call CWnd::InvalidateRect

 Block2:
	pop esi
	ret
}
}
// CITCWndItemDlg::SetSelectedNo
__SUB_CLASS_THIS(0018B570, __thiscall, 84346,  CITCWndItemDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xAFC],eax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect
}
}
// CITCBidAuctionDlg::GetPriceWithCommision
__SUB_CLASS_THIS0(0018B5E0, __thiscall, 141552,  CITCBidAuctionDlg, long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xB4]
	add edx,dword ptr [ecx+0xB0]
	push esi
	mov esi,dword ptr [ecx+0xC4]
	mov eax,dword ptr [esi+0x3460]
	add eax,0x64
	imul edx,eax
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [esi+0x3464]
	pop esi
	ret
}
}
// CITCBidAuctionDlg::OnDestroy
__SUB_CLASS_THIS0(0018BAC0, __thiscall, 141547,  CITCBidAuctionDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	add esi,0x88
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CITCWndItemDlg::OnChildNotify
__SUB_CLASS_THIS(0018BC10, __thiscall, 84340,  CITCWndItemDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E9
	jne Block3

 Block1:
	cmp ebx,0x1F4
	jne Block7

 Block2:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CITCWndItemDlg::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block3:
	cmp edi,0x3EA
	jne Block7

 Block4:
	cmp ebx,0x12C
	jb Block7

 Block5:
	cmp ebx,0x130
	ja Block7

 Block6:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esi+0xAF4]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [ecx*4+CITCWndItemDlg::ms_anItemScrollPos],eax
	lea edx,[eax*4+1]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xAF0],edx
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CITCWndItemDlg::OnTabChanged
__SUB_CLASS_THIS(0018B7B0, __thiscall, 84346,  CITCWndItemDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,8
	push ebp
	push esi
	mov esi,ecx
	inc eax
	lea ecx,[esp+8]
	mov dword ptr [esi+0xAF4],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	pop edi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [esi+0xAF4]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov ecx,dword ptr [esi+0x9C]
	add eax,0xFFFFFFEA
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov edx,dword ptr [esi+0xAF4]
	mov eax,dword ptr [edx*4+CITCWndItemDlg::ms_anItemScrollPos]
	mov ecx,dword ptr [esi+0x9C]
	push eax
	call CCtrlScrollBar::SetCurPos
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx+0x38]
	lea eax,[edx*4+1]
	lea ecx,[esi+0xA8]
	mov dword ptr [esi+0xAF0],eax
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ebp
	add esp,8
	ret 4
}
}
