#include "regen.hpp"
// FloatNotice.ipp
#include "FloatNotice.hpp"

// CFloatNotice::~CFloatNotice
__SUB_CLASS_THIS0(001670F0, __thiscall, 37739,  CFloatNotice, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CFloatNotice::`vftable'
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi+4]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	pop esi
	ret
}
}
// CFloatNotice::CreateFloatNotice
_SUB_EXCEPTION_HANDLER(167AD0)
__SUB_CLASS_THIS(00167AD0, __thiscall, 37741,  CFloatNotice, void, const char*, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_167AD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x44],ecx
	xor esi,esi
	mov dword ptr [ebp+0x1C],esi
	lea eax,[ebp+0x60]
	push 0x53D
	push eax
	mov dword ptr [ebp-4],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],1
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,dword ptr [ebp+0x1C]
	push esi
	push esi
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x3C],bx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,esi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1C],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,esi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,esi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea edx,[ebp+0x34]
	push edx
	call __eh_vector_ctor_iterator
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3E6
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xB
	cmp edi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	mov dword ptr [ebp],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x24],bx
	jne Block28

 Block26:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	cmp eax,esi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x4C],ecx
	mov bl,0xE

 Block30:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0xD
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xF
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	mov ecx,dword ptr [ebp+0x4C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block34

 Block33:
	cmp eax,0x80004002
	jne Block3

 Block34:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xA
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	add dword ptr [ebp+0x4C],4
	inc esi
	cmp esi,3
	jl Block30

 Block41:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[ebp+0x48]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x48],0
	call edx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp+0x50]
	push edx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x10
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ecx+8]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x50],8
	mov edi,eax
	mov dword ptr [ebp+0x40],edi
	mov byte ptr [ebp-4],0xA
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov esi,dword ptr [ebp+0x48]
	lea eax,[esi+edi-1]
	cdq
	idiv esi
	mov dword ptr [ebp+0x48],eax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x4C],0
	call eax
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [ebp+0x3C]
	mov edi,dword ptr [ebp+0x4C]
	test eax,eax
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block61:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esi
	imul eax,dword ptr [ebp+0x48]
	add edi,ecx
	add edi,eax
	mov dword ptr [ebp+8],eax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[ebp+0x4C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x4C],0
	call edx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0xC]
	push eax
	call esi
	lea ecx,[ebp+0xC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea edx,[ebp+0x50]
	mov bl,0x12
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea edx,[ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+0x7C]
	lea eax,[ebp+0x50]
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push edx
	mov edx,dword ptr [ebp+0x78]
	push eax
	push edi
	push edx
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+4]
	cmp esi,eax
	je Block76

 Block72:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	test esi,esi
	je Block76

 Block75:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block76:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x50],si
	jne Block81

 Block79:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0xC],si
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 1
	lea edx,[ebp+0x60]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x14
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x50],cx
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block88:
	mov ecx,dword ptr [ebp+0x44]
	mov esi,dword ptr [ecx+4]
	mov byte ptr [ebp-4],0x15
	test esi,esi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block92

 Block91:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block92:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x50],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block98

 Block97:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block98:
	mov ecx,3
	mov word ptr [ebp+0xC],cx
	mov dword ptr [ebp+0x14],0
	mov edx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edx+4]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[ebp+0xC]
	push eax
	lea edx,[ebp+4]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0xC],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov esi,dword ptr [ebp+4]
	xor ebx,ebx
	cmp esi,ebx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	mov eax,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push eax
	push edi
	push ebx
	push ebx
	push esi
	call ecx
	cmp eax,ebx
	jge Block108

 Block107:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block108:
	mov edx,3
	mov ecx,0xC0
	mov word ptr [ebp+0x50],dx
	mov dword ptr [ebp+0x58],ecx
	mov edi,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push ebx
	push ebx
	push esi
	mov byte ptr [ebp-4],0x19
	call ecx
	cmp eax,ebx
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x18
	jne Block113

 Block111:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	cmp eax,ebx
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov eax,dword ptr [ebp+0x34]
	cmp eax,ebx
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block118

 Block117:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block118:
	cmp dword ptr [ebp+0x48],ebx
	mov edi,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x4C],ebx
	jle Block129

 Block119:
	mov ecx,3
	mov word ptr [ebp+0x50],cx
	mov ecx,0xC0
	mov dword ptr [ebp+0x58],ecx
	mov ebx,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push edi
	push esi
	mov byte ptr [ebp-4],0x1A
	call ecx
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x18
	jne Block124

 Block122:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block7

 Block126:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block128

 Block127:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block128:
	mov eax,dword ptr [ebp+0x4C]
	add edi,dword ptr [ebp+0x60]
	inc eax
	cmp eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x4C],eax
	jl Block119

 Block129:
	mov ecx,3
	mov word ptr [ebp+0x50],cx
	mov ecx,0xC0
	mov dword ptr [ebp+0x58],ecx
	mov ebx,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push edi
	push esi
	mov byte ptr [ebp-4],0x1B
	call ecx
	test eax,eax
	jge Block131

 Block130:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block131:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x18
	jne Block134

 Block132:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block139:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x24]
	push ecx
	call edi
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0x1C
	call edi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x70]
	lea eax,[ebp+0x50]
	push eax
	mov eax,dword ptr [ecx+8]
	push eax
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	mov bl,0x1D
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [ebp+8]
	sub eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ebp]
	cdq
	sub eax,edx
	sar eax,1
	add eax,dword ptr [ebp+0x60]
	push ecx
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x50],di
	jne Block150

 Block148:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x24],di
	jne Block154

 Block152:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov eax,dword ptr [ebp+0x44]
	mov edi,dword ptr [eax+4]
	test edi,edi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block159:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call ecx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],9
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block161:
	lea esp,[ebp-0x4C]
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
// CFloatNotice::CreateEffEvolRing
_SUB_EXCEPTION_HANDLER(1672D0)
__SUB_CLASS_THIS0(001672D0, __thiscall, 37739,  CFloatNotice, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1672D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x58],ecx
	push offset _S_CONGRATSYOUHAVEG
	lea ecx,[ebp+0x3C]
	call _xbstr_t::_ctor_0
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x54],edi
	lea eax,[ebp+0x5C]
	push 0x5AF
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x54]
	push ecx
	push eax
	mov byte ptr [ebp-4],2
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea edx,[ebp+0x5C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block4

 Block3:
	mov esi,dword ptr [eax]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	mov eax,8
	push esi
	mov word ptr [ebp+0x64],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x6C],eax
	cmp eax,edi
	jne Block8

 Block6:
	cmp esi,edi
	je Block8

 Block7:
	push 0x8007000E
	call _com_issue_error

 Block8:
	lea ecx,[ebp+0x64]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],5
	cmp ecx,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [ebp-4],4
	call IWzFont::Create
	cmp word ptr [ebp+0x64],8
	mov byte ptr [ebp-4],3
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x64],ax
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0xC]
	push edx
	call esi
	lea eax,[ebp+0xC]
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
	lea ecx,[ebp+0x1C]
	push ecx
	mov byte ptr [ebp-4],6
	call esi
	lea edx,[ebp+0x1C]
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
	push edi
	push edi
	lea eax,[ebp+0xC]
	push eax
	lea ecx,[ebp+0x1C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,7
	push offset _S_EFFECTITEMEFFIMG__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp dword ptr [_D_G_RM],edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x1C],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x1C],si
	jne Block32

 Block30:
	mov eax,dword ptr [ebp+0x24]
	xor edx,edx
	mov word ptr [ebp+0x1C],dx
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[ebp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0xC],si
	jne Block36

 Block34:
	mov eax,dword ptr [ebp+0x14]
	xor ecx,ecx
	mov word ptr [ebp+0xC],cx
	cmp eax,edi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
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
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea edx,[ebp+0x64]
	mov bl,0xE
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea edx,[ebp+0x44]
	push edx
	lea eax,[ebp+0x64]
	push eax
	push 2
	push 0x98
	push 0x23A
	push 0xA0
	push 0xFFFFFEE3
	lea edx,[ebp+0x60]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+4]
	cmp esi,eax
	je Block48

 Block44:
	mov edx,ecx
	mov dword ptr [edx+4],eax
	cmp eax,edi
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block46:
	cmp esi,edi
	je Block48

 Block47:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block48:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block50:
	cmp word ptr [ebp+0x64],8
	mov byte ptr [ebp-4],bl
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x6C]
	xor ecx,ecx
	mov word ptr [ebp+0x64],cx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0xD
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 1
	lea edx,[ebp+0x60]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x10
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x64],cx
	mov dword ptr [ebp+0x6C],eax
	cmp eax,edi
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block60:
	mov ecx,dword ptr [ebp+0x58]
	mov esi,dword ptr [ecx+4]
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x68]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x70]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block64

 Block63:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x64],si
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp+0x64],ax
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,edi
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xD
	cmp eax,edi
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block70:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea ecx,[ebp]
	push ecx
	call __eh_vector_ctor_iterator
	mov eax,0x20
	mov byte ptr [ebp-4],0x12
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 0xA
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x13
	cmp ecx,edi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x60]
	mov bl,0x14
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	lea ecx,[ebp]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+0x2C],si
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],edi
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax+4]
	mov byte ptr [ebp-4],0x16
	cmp ecx,edi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[ebp+0x44]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x44],si
	jne Block88

 Block86:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov esi,dword ptr [ebp+0x60]
	cmp esi,edi
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push 0x98
	push 0x23A
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block93

 Block92:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block93:
	mov edx,3
	mov ecx,0xC0
	mov word ptr [ebp+0x64],dx
	mov dword ptr [ebp+0x6C],ecx
	mov ebx,dword ptr [ebp+0x64]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x68]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push edi
	push esi
	mov byte ptr [ebp-4],0x19
	call ecx
	cmp eax,edi
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	cmp word ptr [ebp+0x64],8
	mov byte ptr [ebp-4],0x18
	jne Block98

 Block96:
	mov eax,dword ptr [ebp+0x6C]
	xor edx,edx
	mov word ptr [ebp+0x64],dx
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[ebp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block99:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea eax,[ebp+0x64]
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x64]
	push eax
	push ecx
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [eax],ecx
	cmp ecx,edi
	je Block105

 Block104:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block105:
	push 0x3C
	mov byte ptr [ebp-4],0x1C
	push 0x7D
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x64],8
	mov byte ptr [ebp-4],bl
	jne Block108

 Block106:
	mov eax,dword ptr [ebp+0x6C]
	xor edx,edx
	mov word ptr [ebp+0x64],dx
	cmp eax,edi
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[ebp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block109:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x18
	jne Block112

 Block110:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	cmp eax,edi
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov eax,dword ptr [ebp+0x58]
	mov edi,dword ptr [eax+4]
	test edi,edi
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block117

 Block116:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block117:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x12
	call ecx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0xD
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	mov ecx,dword ptr [ebp+0x3C]
	test ecx,ecx
	je Block121

 Block120:
	call _xbstr_t::Data_t::Release

 Block121:
	lea esp,[ebp-0x2C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// CFloatNotice::DeleteFloatNotice
__SUB_CLASS_THIS0(00167140, __thiscall, 37739,  CFloatNotice, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CFloatNotice::CFloatNotice
_SUB_EXCEPTION_HANDLER(167160)
__SUB_CLASS_THIS0(00167160, __thiscall, 37737,  CFloatNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_167160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [edi],offset CFloatNotice::`vftable'
	mov dword ptr [edi+4],ebp
	lea esi,[edi+8]
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esi],ebp
	lea eax,[esp+0x10]
	push 0x5AF
	push eax
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push esi
	push eax
	mov byte ptr [esp+0x40],2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x34],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x10]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],3
	cmp eax,ebp
	je Block4

 Block3:
	mov ebp,dword ptr [eax]

 Block4:
	mov edx,8
	push ebp
	mov word ptr [esp+0x20],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block7

 Block5:
	test ebp,ebp
	je Block7

 Block6:
	push 0x8007000E
	call _com_issue_error

 Block7:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	push 0xE
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x4C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x44],4
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],3
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block15

 Block14:
	call _xbstr_t::Data_t::Release

 Block15:
	mov eax,edi
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret
}
}
