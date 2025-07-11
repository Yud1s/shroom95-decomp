#include "regen.hpp"
// WorldMapDlg.ipp
#include "WorldMapDlg.hpp"

// CWorldMapDlg::Draw
_SUB_EXCEPTION_HANDLER(5BA060)
__SUB_CLASS_THIS(005BA060, __thiscall, 59643,  CWorldMapDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BA060
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
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x80],0
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],ecx
	mov edi,dword ptr [esp+0x88]
	mov edx,dword ptr [ebx+0xAF4]
	mov byte ptr [esp+0x80],1
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x48]
	mov esi,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x5C]
	push edx
	mov edx,dword ptr [esi+0x80]
	push 0x18
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x6C]
	push 0xD
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x48],si
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x48]
	push ecx
	call ebp

 Block8:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x3D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx+0xAF4]
	mov byte ptr [esp+0x84],2
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x3C]
	push eax
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],3
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x88],4
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x88],5
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x84],6
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	test eax,eax
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x80],8
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x58],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x58]
	push ecx
	call ebp

 Block23:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x80],0xA
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block25:
	mov eax,dword ptr [ebx+0xAEC]
	mov esi,dword ptr [esp+0x14]
	cmp eax,0xFFFFFFFF
	je Block62

 Block26:
	mov edx,dword ptr [ebx+0xB04]
	lea ecx,[eax+eax*2]
	mov edi,dword ptr [edx+ecx*4+8]
	lea eax,[edx+ecx*4]
	mov dword ptr [esp+0x30],edi
	test edi,edi
	je Block28

 Block27:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block28:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x3D3
	push edx
	mov byte ptr [esp+0x8C],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	xor ebx,ebx
	mov byte ptr [esp+0x84],0xC
	cmp edi,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x44]
	push eax
	mov ecx,edi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xD
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0x88],0xE
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x88],0xF
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x84],0x10
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x80],0x12
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],0x13
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x68]
	push ecx
	call ebp

 Block43:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x80],0x14
	cmp eax,ebx
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block45:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0x80],0x15
	cmp esi,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block49

 Block48:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov ebp,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x20]
	test ebp,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	push ebp
	mov dword ptr [esp+0x2C],0
	call ecx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block53:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],0
	call ecx
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x20]
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov dword ptr [esp+0x34],0
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [esp+0x30]
	sub esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x88]
	lea edx,[esp+0x48]
	push edx
	push eax
	sub edi,ebx
	add edi,0x18
	push edi
	add esi,0xD
	push esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],0x14
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x84],0xB
	call ecx
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x84],0xA
	call eax
	mov ebx,dword ptr [esp+0x18]

 Block62:
	xor edi,edi
	mov dword ptr [esp+0x40],edi
	mov byte ptr [esp+0x80],0x16
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x20],edi
	lea esp,[esp]

 Block63:
	mov eax,dword ptr [ebx+0xB00]
	test eax,eax
	je Block82

 Block64:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,dword ptr [eax-4]
	jae Block82

 Block65:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0xB00]
	add esi,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+0xAFC]
	mov edx,dword ptr [esi+8]
	lea eax,[eax+edx*4]
	mov eax,dword ptr [eax]
	cmp edi,eax
	je Block70

 Block66:
	mov ebp,edi
	mov edi,eax
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test ebp,ebp
	je Block70

 Block69:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block70:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0xFF
	xor ebx,ebx
	mov byte ptr [esp+0x80],0x17
	cmp edi,ebx
	je Block1

 Block71:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x30]
	push ecx
	push edi
	mov dword ptr [esp+0x38],ebx
	call edx
	cmp eax,ebx
	jge Block73

 Block72:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block73:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	mov ebp,dword ptr [esp+0x30]
	lea ecx,[esp+0x2C]
	push ecx
	push edi
	mov dword ptr [esp+0x34],ebx
	call edx
	cmp eax,ebx
	jge Block75

 Block74:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block75:
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [esi]
	sub eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x88]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov edx,esp
	sub ecx,ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [edx],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [edx+4],ebp
	mov ebp,dword ptr [esp+0x60]
	push edi
	add ecx,0x18
	add eax,0xD
	push ecx
	mov dword ptr [edx+8],ebp
	mov ebp,dword ptr [esp+0x6C]
	push eax
	mov eax,dword ptr [ebx+0x80]
	push esi
	mov dword ptr [edx+0xC],ebp
	call eax
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],0x16
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],0x90
	mov ebx,dword ptr [esp+0x18]
	jmp Block63

 Block80:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],0x90
	mov ebx,dword ptr [esp+0x18]
	jmp Block63

 Block82:
	mov eax,dword ptr [ebx+0xAF0]
	cmp eax,0xFFFFFFFF
	je Block124

 Block83:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[eax+eax*8]
	shl eax,4
	add eax,dword ptr [ecx+0xB00]
	xor ebx,ebx
	mov esi,dword ptr [eax+0x4C]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block85

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block85:
	cmp esi,ebx
	sete al
	test al,al
	sete al
	mov byte ptr [esp+0x80],0x18
	test al,al
	je Block122

 Block86:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x3D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x84],0x19
	cmp esi,ebx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0x1A
	cmp ecx,ebx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x88],0x1B
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x88],0x1C
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x84],0x1D
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block92:
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x80],0x1F
	cmp eax,ebx
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],0x20
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],0x21
	cmp eax,ebx
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0xFF
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0x22
	cmp esi,ebx
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push esi
	mov dword ptr [esp+0x38],ebx
	call ecx
	cmp eax,ebx
	jge Block107

 Block106:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block107:
	mov ebx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x30]
	xor esi,esi
	cmp ebx,esi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebx
	mov dword ptr [esp+0x30],esi
	call ecx
	cmp eax,esi
	jge Block111

 Block110:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block111:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x24],esi
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x48],edx
	mov edx,dword ptr [eax+0x20]
	push esi
	call edx
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block113:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	mov esi,dword ptr [esp+0x24]
	lea ecx,[esp+0x20]
	push ecx
	push ebx
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block115

 Block114:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block115:
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x48]
	sub ebp,dword ptr [esp+0x44]
	sub esi,dword ptr [esp+0x20]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x98]
	push eax
	mov eax,dword ptr [ecx+0x80]
	add ebp,0x18
	push ebp
	add esi,0xD
	push esi
	push edx
	call eax
	test eax,eax
	jge Block117

 Block116:
	mov ecx,dword ptr [esp+0x88]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block117:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],0x21
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0x84],0x18
	call edx
	mov esi,dword ptr [esp+0x1C]

 Block122:
	mov byte ptr [esp+0x80],0x16
	test esi,esi
	je Block124

 Block123:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block124:
	mov byte ptr [esp+0x80],0xA
	test edi,edi
	je Block126

 Block125:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block126:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
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
// CWorldMapDlg::GetDeepestWorldMap_For_MobMark
_SUB_EXCEPTION_HANDLER(5B8A80)
__SUB_CLASS_THIS0(005B8A80, __thiscall, 59651,  CWorldMapDlg, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B8A80
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
	mov dword ptr [esp+0x14],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [ecx+0xB28],ebp
	mov eax,dword ptr [ecx+0xB10]
	mov byte ptr [esp+0x60],1
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [ecx+0xB10],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x64],2
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push ebp
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1001
	mov bl,3
	push eax
	mov byte ptr [esp+0x7C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x74],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [esp+0x60],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x48],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block15:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x28],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block19:
	mov byte ptr [esp+0x60],1
	cmp word ptr [esp+0x38],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block23:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebp
	sete al
	test al,al
	je Block29

 Block24:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0xB10]
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [esi],eax
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp edi,ebp
	je Block28

 Block27:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block28:
	mov eax,esi
	jmp Block48

 Block29:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_MAPLINK
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x6C],6
	cmp edi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x54]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x70],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x48],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block38:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebp
	sete al
	test al,al
	je Block40

 Block39:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0xB10]
	jmp Block43

 Block40:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block42:
	mov ebx,dword ptr [esp+0x18]
	mov ecx,ebx
	call CWorldMapDlg::ScoreLinkMap
	mov eax,dword ptr [ebx+0xB10]

 Block43:
	mov ebx,dword ptr [esp+0x68]
	mov dword ptr [ebx],eax
	cmp eax,ebp
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	mov byte ptr [esp+0x60],1
	cmp esi,ebp
	je Block47

 Block46:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call eax
	mov eax,ebx

 Block48:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CWorldMapDlg::CreateQuestGuideTip
_SUB_EXCEPTION_HANDLER(5BAE80)
__SUB_CLASS_THIS0(005BAE80, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BAE80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x40],2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x14]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],3
	test eax,eax
	je Block4

 Block3:
	mov esi,dword ptr [eax]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	mov eax,8
	push esi
	mov word ptr [esp+0x20],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block8

 Block6:
	test esi,esi
	je Block8

 Block7:
	push 0x8007000E
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFF333333
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x4C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [esp+0x44],4
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],3
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
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
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	lea ecx,[esp+0xC]
	call ZArray<ZXString<char>>::RemoveAll
	lea edx,[esp+0x14]
	push 0x19F5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp dword ptr [ebp+0xB24],0
	je Block20

 Block19:
	lea eax,[esp+0x14]
	push 0x19F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x34],7
	jmp Block21

 Block20:
	lea ecx,[esp+0x14]
	push 0x19F6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x34],8

 Block21:
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	lea eax,[esp+0x10]
	push eax
	push 0xC
	push 0x262
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	lea ecx,[esp+0x2C]
	push ecx
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xB14]
	add esp,0x1C
	cmp esi,eax
	je Block30

 Block26:
	mov dword ptr [ebp+0xB14],eax
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	test esi,esi
	je Block30

 Block29:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block30:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	add esp,0x2C
	ret
}
}
// CWorldMapDlg::WORLDMAP_LINK::~WORLDMAP_LINK
_SUB_EXCEPTION_HANDLER(5B5E40)
__SUB_CLASS_THIS0(005B5E40, __thiscall, 59673,  CWorldMapDlg::WORLDMAP_LINK, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B5E40
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
	mov eax,dword ptr [esi+8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWorldMapDlg::MakeCurrentMobList
_SUB_EXCEPTION_HANDLER(5B7D00)
__SUB_CLASS_THIS(005B7D00, __thiscall, 59658,  CWorldMapDlg, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B7D00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x58],ecx
	xor esi,esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x919
	push eax
	mov dword ptr [ebp-4],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [ebp+0x50]
	cmp edi,esi
	sete al
	test al,al
	jne Block77

 Block10:
	cmp edi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push edi
	mov dword ptr [ebp+0x60],esi
	call ecx
	cmp eax,esi
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [ebp+0x60],esi
	je Block77

 Block15:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx eax,word ptr [ebx+0x4238]
	mov esi,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	mov ecx,esi
	mov dword ptr [ebp+0x24],ebx
	call CQuestMan::GetStartDemand
	mov dword ptr [ebp+0x3C],eax
	movzx eax,word ptr [ebx+0x4238]
	push eax
	mov ecx,esi
	call CQuestMan::GetCompleteDemand
	xor ebx,ebx
	mov dword ptr [ebp+0x4C],eax
	cmp esi,ebx
	je Block75

 Block16:
	cmp dword ptr [ebp+0x3C],ebx
	je Block75

 Block17:
	cmp eax,ebx
	je Block75

 Block18:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,0xB2C
	mov dword ptr [ebp+0x44],ecx
	call ZList<unsigned long>::RemoveAll
	mov dword ptr [ebp+0x20],ebx
	mov dword ptr [ebp+0x48],ebx
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp+0x64],esi
	mov dword ptr [ebp+0x60],esi

 Block19:
	mov ecx,edi
	call IWzProperty::Getcount
	cmp esi,eax
	jae Block69

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	jne Block52

 Block21:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x91A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block1

 Block22:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x40]
	test edi,edi
	sete al
	test al,al
	jne Block61

 Block23:
	test edi,edi
	je Block1

 Block24:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block61

 Block25:
	mov dword ptr [ebp+0x54],0

 Block26:
	mov ecx,edi
	call IWzProperty::Getcount
	cmp dword ptr [ebp+0x54],eax
	jae Block51

 Block27:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x54]
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	lea ecx,[ebp-0x2C]
	mov esi,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x24]
	call CWvsContext::GetCurFieldID
	cmp eax,esi
	jne Block29

 Block28:
	add dword ptr [ebp+0x64],0x32

 Block29:
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ecx+0x18]
	test eax,eax
	jbe Block32

 Block30:
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	add eax,0xD0
	push 0
	lea edx,[ebp+0x68]
	push edx
	mov ecx,eax
	mov dword ptr [ebp+0x68],esi
	call ZList<long>::Find
	test eax,eax
	je Block32

 Block31:
	add dword ptr [ebp+0x64],0x14

 Block32:
	mov eax,dword ptr [ebp+0x4C]
	mov eax,dword ptr [eax+0x18]
	test eax,eax
	jbe Block35

 Block33:
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	push 0
	lea ecx,[ebp+0x68]
	add eax,0xD0
	push ecx
	mov ecx,eax
	mov dword ptr [ebp+0x68],esi
	call ZList<long>::Find
	test eax,eax
	je Block35

 Block34:
	add dword ptr [ebp+0x64],0xA

 Block35:
	push esi
	lea edx,[ebp+0x5C]
	push offset _S_ETCMAPOBJECTINFO
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x14
	je Block1

 Block36:
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x13
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x48]
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block50

 Block37:
	xor edi,edi

 Block38:
	test ebx,ebx
	je Block1

 Block39:
	mov ecx,ebx
	call IWzProperty::Getcount
	cmp edi,eax
	jae Block49

 Block40:
	push 0
	mov dword ptr [ebp+0x38],0
	push edi
	lea ecx,[ebp+0x38]
	push offset _S_D__1
	push ecx
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea edx,[ebp+0x28]
	mov byte ptr [ebp-4],0x17
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x28],8
	mov esi,eax
	mov dword ptr [ebp+0x68],esi
	mov byte ptr [ebp-4],0x16
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov ecx,dword ptr [ebp+0x44]
	push 0
	lea edx,[ebp+0x68]
	push edx
	call ZList<unsigned long>::Find
	test eax,eax
	jne Block48

 Block47:
	mov ecx,dword ptr [ebp+0x44]
	call ZList<unsigned long>::AddTail_
	mov dword ptr [eax],esi

 Block48:
	inc edi
	jmp Block38

 Block49:
	mov edi,dword ptr [ebp+0x40]

 Block50:
	inc dword ptr [ebp+0x54]
	mov esi,dword ptr [ebp+0x58]
	jmp Block26

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xB
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	inc dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x50]
	mov esi,dword ptr [ebp+0x60]
	jmp Block19

 Block52:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block54

 Block53:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block54:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block58

 Block57:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block58:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [ebp+0x64]
	jmp Block82

 Block61:
	mov byte ptr [ebp-4],0xB
	test edi,edi
	je Block63

 Block62:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block63:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block67

 Block66:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block67:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block60

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [ebp+0x64]
	jmp Block82

 Block69:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block73

 Block72:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block73:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block60

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [ebp+0x64]
	jmp Block82

 Block75:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],bl
	call ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block81

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block81

 Block77:
	mov byte ptr [ebp-4],0
	cmp edi,esi
	je Block79

 Block78:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block79:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	xor eax,eax

 Block82:
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CWorldMapDlg::OnCreate
_SUB_EXCEPTION_HANDLER(5B9E10)
__SUB_CLASS_THIS(005B9E10, __thiscall, 59637,  CWorldMapDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B9E10
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
	call CWorldMapDlg::MakeBorder
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	push 0xFFFFFFFF
	push offset _S_UIBASICIMGBTCLOS
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x3C],ebx
	call ZXString16::AssignCharStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block7:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x24]
	push ebx
	push 4
	sub eax,0x16
	push eax
	push 2
	push esi
	call edx
	push 0xFFFFFFFF
	push offset _S_UIUIWINDOW2IMGQU
	lea ecx,[esp+0x30]
	call ZXString16::AssignCharStr
	push 0xAE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x34],2
	cmp edi,ebx
	je Block12

 Block10:
	mov ecx,edi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [edi],offset CCtrlButtonQuestToggle::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CCtrlButtonQuestToggle::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CCtrlButtonQuestToggle::`vftable'{for `ZRefCounted'}
	jmp Block13

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	xor edi,edi

 Block13:
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block21

 Block14:
	lea eax,[edi+8]
	cmp eax,ebx
	je Block21

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block17:
	mov eax,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0xB1C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x24]
	push ebx
	push 4
	sub eax,0x41
	push eax
	push 0x7D0
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebx
	call CConfig::GetQuestGuideOption
	cmp eax,ebx
	mov eax,dword ptr [esi+0xB1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jne Block22

 Block20:
	push ebx
	call edx
	mov dword ptr [esi+0xB24],ebx
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	push 1
	call edx
	mov dword ptr [esi+0xB24],1

 Block23:
	lea eax,[esp+0x14]
	push 0x500
	push eax
	mov dword ptr [esi+0xB28],ebx
	mov dword ptr [esi+0xB20],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x38],3
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
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
// CWorldMapDlg::SetWorldMap
_SUB_EXCEPTION_HANDLER(5BD820)
__SUB_CLASS_THIS(005BD820, __thiscall, 59647,  CWorldMapDlg, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BD820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x120
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
	mov dword ptr [ebp+0x3C],ebx
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x918
	push eax
	mov dword ptr [ebp-4],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	lea esi,[ebx+0xAF4]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	cmp dword ptr [esi],0
	sete al
	test al,al
	je Block13

 Block10:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	xor eax,eax
	jmp Block180

 Block13:
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x54],esp
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	mov ecx,ebx
	call CWorldMapDlg::LoadInfo
	test eax,eax
	jne Block19

 Block16:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	xor eax,eax
	jmp Block180

 Block19:
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x54],esp
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,ebx
	call CWorldMapDlg::LoadMapList
	test eax,eax
	je Block16

 Block22:
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x54],esp
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	mov ecx,ebx
	call CWorldMapDlg::LoadMapLink
	test eax,eax
	je Block16

 Block25:
	lea eax,[ebp+0x7C]
	push eax
	lea ecx,[ebx+0xB0C]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	xor eax,eax

 Block26:
	mov ecx,dword ptr [ebx+0xB00]
	mov dword ptr [ebp+0x38],eax
	test ecx,ecx
	je Block177

 Block27:
	cmp eax,dword ptr [ecx-4]
	jae Block177

 Block28:
	lea eax,[eax+eax*8]
	shl eax,4
	mov edi,ecx
	add edi,eax
	cmp dword ptr [edi+0x24],0
	mov dword ptr [ebp+0x50],eax
	mov dword ptr [ebp+0x5C],edi
	je Block30

 Block29:
	cmp dword ptr [ebx+0xB08],0
	jne Block32

 Block30:
	cmp dword ptr [edi+0x2C],0
	je Block90

 Block31:
	mov edi,dword ptr [ebp+0x5C]

 Block32:
	push 0xFFFFFFFF
	xor esi,esi
	push offset _S_MAPMAPHELPERIMGW
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],esi
	call ZXString16::AssignCharStr
	lea eax,[esi+0x20]
	mov byte ptr [ebp-4],3
	call __chkstk
	mov ecx,dword ptr [edi+8]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call _itoa
	add esp,0xC
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call ZXString16::AssignCharStr
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi-4]
	shr eax,1
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push eax
	push esi
	lea ecx,[ebp+0x64]
	call ZXString16::_Cat
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block37

 Block36:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block37:
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push ecx
	mov ecx,ebx
	call CWnd::GetLayer
	push 0
	push 0
	lea edx,[ebp+0x20]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push eax
	mov byte ptr [ebp-4],6
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov eax,dword ptr [ebp+0x64]
	push 0
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov byte ptr [ebp-4],7
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x28]
	add esp,0x28
	cmp esi,eax
	je Block42

 Block38:
	mov dword ptr [edi+0x28],eax
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	test esi,esi
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block42:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x5C]
	push eax
	call esi
	lea ecx,[ebp-0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block47:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],8
	call esi
	lea eax,[ebp-0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor edx,edx
	add esp,8
	cmp eax,edx
	jl Block4

 Block48:
	mov ecx,3
	mov word ptr [ebp-0x6C],cx
	mov dword ptr [ebp-0x64],edx
	mov eax,ecx
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],edx
	mov ecx,dword ptr [edi+0x28]
	mov byte ptr [ebp-4],0xB
	cmp ecx,edx
	je Block1

 Block49:
	lea edx,[ebp-0x6C]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,eax
	mov edi,dword ptr [edi+0x28]
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block1

 Block50:
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp+0x2C]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [ebp+0x6C],eax
	mov edi,dword ptr [ebx+0xB00]
	mov esi,dword ptr [esi]
	add edi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block1

 Block51:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ebx+0xB00]
	add esi,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x68],eax
	mov eax,dword ptr [ecx]
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block1

 Block54:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x6C]
	lea ecx,[ebp+0x6C]
	push ecx
	push eax
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block56

 Block55:
	mov ecx,dword ptr [ebp+0x58]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block56:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx+0x28]
	test ecx,ecx
	je Block1

 Block57:
	lea eax,[ebp-0x5C]
	push eax
	mov eax,dword ptr [edi+4]
	sub eax,dword ptr [ebp+0x68]
	lea edx,[ebp-0x8C]
	push edx
	mov edx,dword ptr [esi]
	sub edx,dword ptr [ebp+0x6C]
	add eax,0x18
	push eax
	add edx,0xD
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov edi,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x2C],di
	jne Block68

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block64:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x6C],di
	jne Block69

 Block66:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block70

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block68:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	jmp Block65

 Block69:
	lea eax,[ebp-0x6C]
	push eax
	call esi

 Block70:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x8C],di
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[ebp-0x8C]
	push edx
	call esi

 Block74:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x5C],di
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[ebp-0x5C]
	push ecx
	call esi

 Block78:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block79:
	mov ecx,3
	mov word ptr [ebp-0xAC],cx
	mov dword ptr [ebp-0xA4],0x1B58
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx+0x28]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block1

 Block80:
	lea eax,[ebp-0x7C]
	push eax
	lea edx,[ebp-0xAC]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0xAC],di
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0xAC]
	push ecx
	call esi

 Block84:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x7C],di
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp-0x7C]
	push eax
	call esi

 Block88:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov esi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [esi+0x44]
	xor edi,edi
	cmp eax,edi
	je Block109

 Block91:
	cmp dword ptr [eax-4],edi
	jbe Block109

 Block92:
	cmp dword ptr [ebx+0xB24],1
	jne Block109

 Block93:
	push 0xFFFFFFFF
	push offset _S_UIUIWINDOW2IMGQU__1
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call ZXString16::AssignCharStr
	push edi
	push 0xFF
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call CWnd::GetLayer
	push edi
	push edi
	lea edx,[ebp+0x24]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x11
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push eax
	mov byte ptr [ebp-4],0x12
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov eax,dword ptr [ebp+0x64]
	push edi
	push eax
	lea ecx,[ebp+0xC]
	push ecx
	mov byte ptr [ebp-4],0x13
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	add esi,0x48
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0xC]
	cmp eax,edi
	je Block95

 Block94:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block95:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x10
	cmp eax,edi
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x11C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x10C]
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp-0xEC],ax
	mov dword ptr [ebp-0xE4],edi
	mov ecx,eax
	mov word ptr [ebp-0xDC],cx
	mov dword ptr [ebp-0xD4],edi
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x17
	cmp ecx,edi
	je Block1

 Block98:
	lea edx,[ebp-0xEC]
	push edx
	lea eax,[ebp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [ebp+0x68],eax
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x18
	cmp ecx,edi
	je Block1

 Block99:
	lea edx,[ebp-0xDC]
	push edx
	lea eax,[ebp-0x10]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [ebx+0xB00]
	mov edx,dword ptr [ebp+0x50]
	lea edi,[edx+ecx]
	mov ecx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ecx]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block1

 Block100:
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block1

 Block101:
	mov eax,dword ptr [esi]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block1

 Block102:
	lea edx,[ebp-0x11C]
	push edx
	lea eax,[ebp-0x10C]
	push eax
	call IWzCanvas::Getcy
	mov ecx,dword ptr [edi+4]
	sub ecx,eax
	add ecx,0x18
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	call IWzCanvas::Getcx
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [ebp+0x6C]
	sub edx,eax
	add edx,0xD
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	lea ecx,[ebp-0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xEC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x10C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x11C]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x12C]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp-0xFC],ax
	mov dword ptr [ebp-0xF4],0x5DC
	mov esi,dword ptr [esi]
	mov byte ptr [ebp-4],0x1B
	test esi,esi
	je Block1

 Block107:
	lea ecx,[ebp-0x12C]
	push ecx
	lea edx,[ebp-0xFC]
	push edx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x12C]
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],0
	je Block109

 Block108:
	mov eax,dword ptr [ebp+0x64]
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	mov edi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edi+0x1C]
	cmp eax,3
	ja Block130

 Block110:
	cmp EAX, 0
je Block111
cmp EAX, 1
je Block113
cmp EAX, 2
je Block118
cmp EAX, 3
je Block123


 Block111:
	mov eax,dword ptr [edi+0x20]
	test eax,eax
	je Block176

 Block112:
	mov dword ptr [edi+0x20],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x3C]
	inc eax
	jmp Block26

 Block113:
	push 0
	push 0xFF
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1C
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push eax
	mov byte ptr [ebp-4],0x1D
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	lea edx,[ebp+0x14]
	push 0x90C
	push edx
	mov byte ptr [ebp-4],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1F
	push 0
	push eax
	lea eax,[ebp+4]
	push eax
	mov byte ptr [ebp-4],0x21
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[edi+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [ebp-0x18]
	jmp Block128

 Block118:
	push 0
	push 0xFF
	push 2
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x22
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push eax
	mov byte ptr [ebp-4],0x23
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	lea edx,[ebp+0x28]
	push 0x90D
	push edx
	mov byte ptr [ebp-4],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x25
	push 0
	push eax
	lea eax,[ebp+0x30]
	push eax
	mov byte ptr [ebp-4],0x27
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[edi+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [ebp+0x34]
	jmp Block128

 Block123:
	push 0
	push 0xFF
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[ebp+8]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x28
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push eax
	mov byte ptr [ebp-4],0x29
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	lea edx,[ebp+0x10]
	push 0x90E
	push edx
	mov byte ptr [ebp-4],0x2A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2B
	push 0
	push eax
	lea eax,[ebp+0x18]
	push eax
	mov byte ptr [ebp-4],0x2D
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[edi+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block125:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block127:
	mov eax,dword ptr [ebp+8]

 Block128:
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov esi,dword ptr [edi+0x20]
	test esi,esi
	je Block1

 Block131:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xEEFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push edx
	call esi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block134:
	lea ecx,[ebp-0xBC]
	push ecx
	mov byte ptr [ebp-4],0x2E
	call esi
	lea edx,[ebp-0xBC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor edx,edx
	add esp,8
	cmp eax,edx
	jl Block4

 Block135:
	mov eax,3
	mov word ptr [ebp-0x9C],ax
	mov dword ptr [ebp-0x94],edx
	mov ecx,eax
	mov word ptr [ebp-0xCC],cx
	mov dword ptr [ebp-0xC4],edx
	mov ecx,dword ptr [edi+0x20]
	mov byte ptr [ebp-4],0x31
	cmp ecx,edx
	je Block1

 Block136:
	lea edx,[ebp-0x9C]
	push edx
	lea eax,[ebp+0x54]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,eax
	mov ecx,dword ptr [edi+0x20]
	mov byte ptr [ebp-4],0x32
	test ecx,ecx
	je Block1

 Block137:
	lea edx,[ebp-0xCC]
	push edx
	lea eax,[ebp]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [ebp+0x68],eax
	mov edi,dword ptr [ebx+0xB00]
	mov esi,dword ptr [esi]
	add edi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x33
	test esi,esi
	je Block1

 Block138:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x6C]
	push edx
	push esi
	mov dword ptr [ebp+0x6C],0
	call eax
	test eax,eax
	jge Block140

 Block139:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	mov edx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ebp+0x68]
	mov esi,dword ptr [edx+0xB00]
	mov ebx,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x6C]
	add esi,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x60],ecx
	test ebx,ebx
	je Block1

 Block141:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[ebp+0x58]
	push edx
	push ebx
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block143

 Block142:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block143:
	mov ebx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebx+0x20]
	test ecx,ecx
	je Block1

 Block144:
	lea edx,[ebp-0x3C]
	push edx
	mov edx,dword ptr [edi+4]
	sub edx,dword ptr [ebp+0x60]
	lea eax,[ebp-0xBC]
	push eax
	mov eax,dword ptr [esi]
	sub eax,dword ptr [ebp+0x58]
	add edx,0x18
	push edx
	add eax,0xD
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x32
	test eax,eax
	je Block146

 Block145:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block146:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov esi,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0xCC],si
	jne Block155

 Block149:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block151:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp-0x9C],si
	jne Block156

 Block153:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block157

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block155:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0xCC]
	push ecx
	call edi
	jmp Block152

 Block156:
	lea eax,[ebp-0x9C]
	push eax
	call edi

 Block157:
	mov byte ptr [ebp-4],0x2E
	cmp word ptr [ebp-0xBC],si
	jne Block160

 Block158:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea edx,[ebp-0xBC]
	push edx
	call edi

 Block161:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x3C],si
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[ebp-0x3C]
	push ecx
	call edi

 Block165:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push edx
	call esi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block166:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x34
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block167:
	mov ecx,dword ptr [ebx+0x20]
	mov byte ptr [ebp-4],0x35
	test ecx,ecx
	je Block1

 Block168:
	lea eax,[ebp+0x40]
	push eax
	lea edx,[ebp-0x4C]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x4C],si
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[ebp-0x4C]
	push ecx
	call edi

 Block172:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x40],si
	jne Block175

 Block173:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x3C]
	inc eax
	jmp Block26

 Block175:
	lea eax,[ebp+0x40]
	push eax
	call edi

 Block176:
	mov eax,dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x3C]
	inc eax
	jmp Block26

 Block177:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block179

 Block178:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block179:
	mov eax,1

 Block180:
	lea esp,[ebp-0x13C]
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
// CWorldMapDlg::GetDeepestWorldMap_For_NpcMark
_SUB_EXCEPTION_HANDLER(5B93E0)
__SUB_CLASS_THIS0(005B93E0, __thiscall, 59651,  CWorldMapDlg, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B93E0
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
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x24],ecx
	xor edi,edi
	mov dword ptr [ebp+0x30],edi
	mov eax,dword ptr [ecx+0xB08]
	push eax
	call CNpcTemplate::GetNpcTemplate
	add eax,0xD0
	mov dword ptr [ebp+0x2C],eax
	mov eax,dword ptr [eax+0xC]
	add esp,4
	cmp dword ptr [eax],0xFFFFFFFF
	jne Block2

 Block1:
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [eax],edi
	jmp Block169

 Block2:
	mov dword ptr [ebp+0x5C],edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x64],edi
	mov dword ptr [ebp+0x34],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0xC]
	push ecx
	mov byte ptr [ebp-4],2
	call esi
	lea edx,[ebp+0xC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[ebp+0x1C]
	mov bl,3
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea edx,[ebp+0xC]
	push edx
	lea eax,[ebp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x1001
	push ecx
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x20]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x20],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x1C],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0x24]
	xor edx,edx
	mov word ptr [ebp+0x1C],dx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0xC],si
	jne Block22

 Block20:
	mov eax,dword ptr [ebp+0x14]
	xor ecx,ecx
	mov word ptr [ebp+0xC],cx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ecx,dword ptr [ebp+0x5C]
	cmp ecx,edi
	sete al
	test al,al
	je Block26

 Block24:
	mov esi,dword ptr [ebp+0x74]
	mov dword ptr [esi],edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ecx,edi
	je Block168

 Block25:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block168

 Block26:
	cmp ecx,edi
	je Block28

 Block27:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	mov dword ptr [ebp+0x64],ecx
	call eax

 Block28:
	mov dword ptr [ebp+0x38],0
	mov edi,1

 Block29:
	mov ebx,dword ptr [ebp+0x64]
	cmp edi,1
	jne Block160

 Block30:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_MAPLINK
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],7
	test ebx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xA
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov ebx,dword ptr [ebp+0x3C]
	xor edi,edi
	cmp ebx,edi
	sete al
	test al,al
	je Block46

 Block40:
	mov edi,dword ptr [ebp+0x64]
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [ebp+0x74]
	mov edx,dword ptr [ecx+4]
	push edi
	mov dword ptr [esi],edi
	call edx
	mov byte ptr [ebp-4],2
	test ebx,ebx
	je Block42

 Block41:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block42:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block168

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block168

 Block46:
	cmp ebx,edi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+8]
	push ecx
	push ebx
	mov dword ptr [ebp+8],edi
	call edx
	cmp eax,edi
	jge Block50

 Block49:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block50:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp+0x5B]
	push eax
	push ecx
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call ZArray<long>::_Alloc
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+4]
	push eax
	push ebx
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+4],edi
	call ecx
	cmp eax,edi
	jge Block52

 Block51:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block52:
	mov eax,dword ptr [ebp+4]
	lea edx,[ebp+0x5B]
	push edx
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call ZArray<_x_com_ptr<IWzProperty>>::_Alloc
	xor esi,esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x48],esi
	mov edi,edi

 Block53:
	cmp ebx,edi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x54]
	push edx
	push ebx
	mov dword ptr [ebp+0x54],edi
	call eax
	cmp eax,edi
	jge Block57

 Block56:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block57:
	cmp esi,dword ptr [ebp+0x54]
	jae Block140

 Block58:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x54],esi
	cmp eax,edi
	je Block62

 Block59:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x30]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x54],esi
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x10
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp esi,edi
	sete al
	test al,al
	je Block69

 Block67:
	mov byte ptr [ebp-4],0xC
	cmp esi,edi
	je Block139

 Block68:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	inc dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x48]
	xor edi,edi
	jmp Block53

 Block69:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_LINK
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[ebp-0x34]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x14
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov edi,dword ptr [ebp+0x40]
	test edi,edi
	sete al
	test al,al
	je Block82

 Block79:
	mov byte ptr [ebp-4],0x10
	test edi,edi
	je Block81

 Block80:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block81:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xC
	call eax
	inc dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x48]
	xor edi,edi
	jmp Block53

 Block82:
	xor ebx,ebx
	push ebx
	push 0xD
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_MAPWORLDMAP]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_MAPWORLDMAP+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_MAPWORLDMAP+8]
	mov dword ptr [eax+8],ecx
	mov dl,byte ptr [_S_MAPWORLDMAP+12]
	push 0xD
	lea ecx,[ebp+0x4C]
	mov byte ptr [eax+0xC],dl
	call ZXString<char>::ReleaseBuffer
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_LINKMAP
	mov byte ptr [ebp-4],0x15
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x16
	cmp edi,ebx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea eax,[ebp-0x44]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x17
	jne Block86

 Block85:
	mov eax,dword ptr [eax+8]
	jmp Block87

 Block86:
	mov eax,offset _S___3

 Block87:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	cmp esi,ebx
	je Block89

 Block88:
	mov eax,dword ptr [esi-4]
	jmp Block90

 Block89:
	xor eax,eax

 Block90:
	push eax
	push esi
	lea ecx,[ebp+0x4C]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0x17
	cmp esi,ebx
	je Block92

 Block91:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block92:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x15
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,ebx
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push 4
	push offset _S_IMG
	lea ecx,[ebp+0x4C]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x1C]
	push eax
	mov byte ptr [ebp-4],0x19
	call esi
	lea ecx,[ebp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[ebp+0xC]
	push edx
	mov byte ptr [ebp-4],0x1A
	call esi
	lea eax,[ebp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov ebx,dword ptr [ebp+0x4C]
	push 0
	push 0
	lea ecx,[ebp+0x1C]
	push ecx
	lea edx,[ebp+0xC]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x1B
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1C
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea eax,[ebp-0x64]
	mov byte ptr [ebp-4],0x1B
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,dword ptr [ebp+0x44]
	mov edx,dword ptr [ebp+0x48]
	lea edi,[ecx+edx*4]
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block105

 Block103:
	cmp eax,0x80004002
	je Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x64],si
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0xC],si
	jne Block112

 Block110:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x1C],si
	jne Block116

 Block114:
	mov eax,dword ptr [ebp+0x24]
	xor ecx,ecx
	mov word ptr [ebp+0x1C],cx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[ebp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebp+0x48]
	mov edx,dword ptr [ebp+0x2C]
	xor esi,esi
	mov dword ptr [eax+ecx*4],0
	mov dword ptr [ebp-4],0x15
	cmp dword ptr [edx+8],esi
	jbe Block127

 Block118:
	lea ecx,[ecx]

 Block119:
	mov ecx,dword ptr [ebp+0x2C]
	push esi
	call ZList<long>::FindIndex
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block121:
	mov ecx,dword ptr [ebp-0x24]
	call CWorldMapDlg::IsHavingFieldNo
	test eax,eax
	je Block126

 Block122:
	mov eax,dword ptr [ebp+0x5C]
	cmp dword ptr [ebp+0x64],eax
	je Block124

 Block123:
	mov ecx,eax
	push ecx
	lea ecx,[ebp+0x64]
	call _x_com_ptr<IWzProperty>::_CompareWzProperty
	neg eax
	sbb eax,eax
	inc eax
	test al,al
	je Block125

 Block124:
	inc dword ptr [ebp+0x38]

 Block125:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x48]
	inc dword ptr [ecx+eax*4]

 Block126:
	mov edx,dword ptr [ebp+0x2C]
	inc esi
	cmp esi,dword ptr [edx+8]
	jb Block119

 Block127:
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	je Block129

 Block128:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block129:
	cmp dword ptr [ebp+0x40],0
	mov byte ptr [ebp-4],0x10
	je Block131

 Block130:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block131:
	cmp dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0xC
	je Block138

 Block132:
	jmp Block137

 Block137:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block138:
	mov ebx,dword ptr [ebp+0x3C]

 Block139:
	inc dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x48]
	xor edi,edi
	jmp Block53

 Block140:
	cmp dword ptr [ebp+0x38],edi
	jne Block147

 Block141:
	mov esi,dword ptr [ebp+0x74]
	lea ecx,[ebp+0x44]
	mov dword ptr [esi],edi
	mov byte ptr [ebp-4],0xB
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0xA
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],2
	call ecx
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block143

 Block142:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block143:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block168

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block168

 Block147:
	xor edi,edi
	xor esi,esi
	lea ecx,[ecx]

 Block148:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp]
	push ecx
	push ebx
	mov dword ptr [ebp],0
	call edx
	test eax,eax
	jge Block150

 Block149:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block150:
	cmp esi,dword ptr [ebp]
	jae Block159

 Block151:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebp+0x38]
	cmp dword ptr [eax+esi*4],ecx
	je Block153

 Block152:
	inc esi
	jmp Block148

 Block153:
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [edx+esi*4]
	mov esi,dword ptr [ebp+0x64]
	cmp esi,eax
	je Block158

 Block154:
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	je Block156

 Block155:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block156:
	test esi,esi
	je Block158

 Block157:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block158:
	mov edi,1

 Block159:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xB
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0xA
	call ZArray<long>::RemoveAll
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],2
	call eax
	jmp Block29

 Block160:
	mov esi,dword ptr [ebp+0x74]
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block162

 Block161:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block162:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block166

 Block165:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block166:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block168

 Block167:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block168:
	mov eax,esi

 Block169:
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
}
}
// CWorldMapDlg::OnKey
__SUB_CLASS_THIS(005BF220, __thiscall, 59641,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	js Block7

 Block1:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,edi
	shr eax,0x10
	and eax,0xFF
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp dword ptr [eax+1],5
	je Block6

 Block2:
	cmp ebx,0x1B
	jne Block7

 Block3:
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	je Block7

 Block4:
	cmp word ptr [eax],0
	je Block7

 Block5:
	lea ecx,[esi-4]
	call CWorldMapDlg::SetWorldMapShallower
	pop edi
	pop esi
	pop ebx
	ret 8

 Block6:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 1
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block7:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CWorldMapDlg::GetDeepestWorldMap
_SUB_EXCEPTION_HANDLER(5BB440)
__SUB_CLASS_THIS(005BB440, __thiscall, 59650,  CWorldMapDlg, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BB440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x2C],ecx
	xor ebx,ebx
	mov dword ptr [ebp-0x24],ebx
	mov dword ptr [ebp-0x18],ebx
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x14],ebx
	mov dword ptr [ebp-0x1C],ebx
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp-0x28],ebx

 Block1:
	cmp ebx,0x14
	mov dword ptr [ebp-0x20],ebx
	jg Block43

 Block2:
	lea eax,[ebp-0x30]
	push 0x14F0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebx+ebx*4]
	add ecx,ecx
	push ecx
	push eax
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x30]
	add esp,0xC
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],5
	call esi
	lea ecx,[ebp-0x58]
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
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],6
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [ebp-0x1C]
	push 0
	push 0
	lea ecx,[ebp-0x58]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],7
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],8
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],7
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block16

 Block11:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x34]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp-0x34]
	cmp dword ptr [ebp-0x14],0
	mov edi,eax
	je Block13

 Block12:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov dword ptr [ebp-0x14],edi
	test esi,esi
	jge Block19

 Block14:
	cmp esi,0x80004002
	je Block19

 Block15:
	push esi
	call _com_issue_error

 Block16:
	cmp dword ptr [ebp-0x14],0
	je Block19

 Block17:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x14],0
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],7
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x48],si
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x58],si
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [ebp+0xC]
	mov edi,dword ptr [ebp-0x14]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block33

 Block32:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block33:
	mov ecx,dword ptr [ebp-0x2C]
	call CWorldMapDlg::IsHavingFieldNo
	test eax,eax
	je Block40

 Block34:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	je Block39

 Block35:
	mov dword ptr [ebp-0x18],edi
	test edi,edi
	je Block37

 Block36:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block37:
	test esi,esi
	je Block39

 Block38:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block39:
	mov byte ptr [ebp-4],3
	jmp Block44

 Block40:
	mov dword ptr [ebp-4],3
	inc ebx
	jmp Block1

 Block43:
	cmp dword ptr [ebp-0x28],0
	je Block90

 Block44:
	mov dword ptr [ebp-0x28],0
	mov dword ptr [ebp-0x20],1

 Block45:
	cmp dword ptr [ebp-0x20],0xA
	jg Block86

 Block46:
	lea ecx,[ebp-0x34]
	push 0x14F0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp-0x20]
	mov eax,dword ptr [eax]
	lea edx,[ebx+ebx*4]
	lea edx,[ecx+edx*2]
	push edx
	push eax
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0xB
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x34]
	add esp,0xC
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0xC
	call esi
	lea edx,[ebp-0x48]
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
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],0xD
	call esi
	lea ecx,[ebp-0x58]
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
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	mov edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0x58]
	push eax
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xF
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],0xE
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block60

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebp-0x14]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov edi,ecx
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov dword ptr [ebp-0x14],edi
	test esi,esi
	jge Block63

 Block58:
	cmp esi,0x80004002
	je Block63

 Block59:
	push esi
	call _com_issue_error

 Block60:
	cmp dword ptr [ebp-0x14],0
	je Block63

 Block61:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x14],0
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x68],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x58],si
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x48],si
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,dword ptr [ebp+0xC]
	mov edi,dword ptr [ebp-0x14]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block77

 Block76:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block77:
	mov ecx,dword ptr [ebp-0x2C]
	call CWorldMapDlg::IsHavingFieldNo
	test eax,eax
	je Block84

 Block78:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	je Block83

 Block79:
	mov dword ptr [ebp-0x18],edi
	test edi,edi
	je Block81

 Block80:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block81:
	test esi,esi
	je Block83

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block83:
	mov byte ptr [ebp-4],3
	jmp Block87

 Block84:
	inc dword ptr [ebp-0x20]
	mov dword ptr [ebp-4],3
	jmp Block45

 Block86:
	cmp dword ptr [ebp-0x28],0
	je Block90

 Block87:
	mov edi,dword ptr [ebp-0x18]
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],edi
	test edi,edi
	je Block89

 Block88:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block89:
	jmp Block132

 Block90:
	mov ebx,0x8C
	lea ebx,[ebx]

 Block91:
	cmp ebx,0x8E
	jg Block130

 Block92:
	lea edx,[ebp-0x34]
	push 0x14F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0x12
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x34]
	add esp,0xC
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0x13
	call esi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],0x14
	call esi
	lea ecx,[ebp-0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	mov edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0x58]
	push eax
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x15
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],0x15
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block106

 Block101:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebp-0x14]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov edi,ecx
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	mov dword ptr [ebp-0x14],edi
	test esi,esi
	jge Block109

 Block104:
	cmp esi,0x80004002
	je Block109

 Block105:
	push esi
	call _com_issue_error

 Block106:
	mov edi,dword ptr [ebp-0x14]
	test edi,edi
	je Block109

 Block107:
	mov eax,edi
	xor edi,edi
	mov dword ptr [ebp-0x14],edi
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov esi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x68],si
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[ebp-0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x58],si
	jne Block116

 Block114:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x48],si
	jne Block120

 Block118:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov eax,dword ptr [ebp+0xC]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block123

 Block122:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block123:
	mov ecx,dword ptr [ebp-0x2C]
	call CWorldMapDlg::IsHavingFieldNo
	test eax,eax
	je Block139

 Block124:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	je Block129

 Block125:
	mov dword ptr [ebp-0x18],edi
	test edi,edi
	je Block127

 Block126:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block127:
	test esi,esi
	je Block129

 Block128:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block129:
	mov byte ptr [ebp-4],3

 Block130:
	mov edi,dword ptr [ebp-0x18]
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],edi
	test edi,edi
	je Block132

 Block131:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block132:
	mov eax,dword ptr [ebp-0x1C]
	or dword ptr [ebp-0x24],1
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block134:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block136:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block138

 Block137:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block138:
	mov eax,esi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block139:
	mov dword ptr [ebp-4],3
	inc ebx
	jmp Block91
}
}
// CWorldMapDlg::OnDestroy
_SUB_EXCEPTION_HANDLER(5B5F80)
__SUB_CLASS_THIS0(005B5F80, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B5F80
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	lea eax,[esp+4]
	push 0x501
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+8]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CWorldMapDlg::SetWorldMapShallower
_SUB_EXCEPTION_HANDLER(5BEF30)
__SUB_CLASS_THIS0(005BEF30, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BEF30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-0x20],esi
	mov eax,dword ptr [esi+0x90]
	xor edi,edi
	cmp eax,edi
	je Block33

 Block1:
	cmp word ptr [eax],di
	je Block33

 Block2:
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x14],edi
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	push 0x90A
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],2
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push ecx
	call esi
	lea edx,[ebp-0x44]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push edi
	push edi
	lea edx,[ebp-0x44]
	push edx
	mov edx,dword ptr [ebp-0x14]
	lea eax,[ebp-0x34]
	push eax
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x54],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x34],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov bl,0xA
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x44],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	call StringPool::GetInstance
	push 0x502
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],0xB
	call play_ui_sound
	mov eax,dword ptr [ebp-0x1C]
	add esp,4
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov esi,dword ptr [ebp-0x18]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block29:
	mov ebx,dword ptr [ebp-0x20]
	mov ecx,ebx
	call CWorldMapDlg::SetWorldMap
	push edi
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov byte ptr [ebp-4],1
	cmp esi,edi
	je Block31

 Block30:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block31:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWorldMapDlg::CheckLinkInfo
_SUB_EXCEPTION_HANDLER(5BAA30)
__SUB_CLASS_THIS(005BAA30, __thiscall, 59652,  CWorldMapDlg, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BAA30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	mov ecx,dword ptr [esp+0x7C]
	mov eax,dword ptr [esp+0x78]
	add ecx,0xFFFFFFE8
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x7C],esp
	add eax,0xFFFFFFF3
	push 0x3D3
	push edx
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],ecx
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xAF4]
	xor edi,edi
	mov dword ptr [esp+0x74],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x38]
	push eax
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x78],2
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x78],3
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x74],4
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x80],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea ecx,[esp+0x7C]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x70],6
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],7
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x70],8
	cmp eax,edi
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x14],edi

 Block18:
	mov eax,dword ptr [esi+0xB04]
	cmp eax,edi
	je Block51

 Block19:
	mov ecx,dword ptr [esp+0x7C]
	cmp ecx,dword ptr [eax-4]
	jae Block51

 Block20:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	mov ebx,eax
	add ebx,dword ptr [esp+0x18]
	push 0x3D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx+8]
	mov byte ptr [esp+0x74],9
	cmp ecx,edi
	je Block1

 Block21:
	lea eax,[esp+0x40]
	push eax
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0xA
	cmp ecx,edi
	je Block1

 Block22:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x78],0xB
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x78],0xC
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x74],0xD
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block8

 Block26:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x70],0xF
	cmp eax,edi
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0x10
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x70],0x11
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	mov esi,dword ptr [esp+0x78]
	mov dword ptr [esp+0x24],edi
	cmp esi,edi
	je Block1

 Block35:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block37

 Block36:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov esi,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x18]
	cmp esi,edi
	je Block1

 Block38:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],edi
	call eax
	cmp eax,edi
	jge Block40

 Block39:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	mov edi,dword ptr [esp+0x20]
	sub edi,ebp
	mov ebp,dword ptr [esp+0x78]
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x28]
	add edi,dword ptr [esp+0x40]
	lea edx,[esp+0x20]
	push edx
	push ebp
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block42:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	mov ebp,dword ptr [esp+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [esp+0x18]
	sub eax,ebp
	add eax,dword ptr [esp+0x44]
	test edi,edi
	jl Block49

 Block45:
	test eax,eax
	jl Block49

 Block46:
	mov ecx,dword ptr [ebx+8]
	test ecx,ecx
	je Block1

 Block47:
	mov edx,dword ptr [ecx]
	lea ebx,[esp+0x24]
	push ebx
	push eax
	mov eax,dword ptr [edx+0x88]
	push edi
	push ecx
	call eax
	test eax,eax
	jl Block49

 Block48:
	test dword ptr [esp+0x24],0xFF000000
	jne Block50

 Block49:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x74],8
	call edx
	inc dword ptr [esp+0x7C]
	add dword ptr [esp+0x14],0xC
	mov esi,dword ptr [esp+0x28]
	xor edi,edi
	jmp Block18

 Block50:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [esp+0x7C]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x74],8
	call edx
	mov esi,dword ptr [esp+0x28]
	xor edi,edi

 Block51:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp dword ptr [esi+0xAEC],eax
	je Block55

 Block52:
	mov dword ptr [esi+0xAEC],eax
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov eax,1
	jmp Block58

 Block55:
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	xor eax,eax

 Block58:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 8
}
}
// CCtrlButtonQuestToggle::SetEnable
__SUB_CLASS_THIS(005B5850, __thiscall, 79090,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	call edx
	mov edi,dword ptr [esp+0xC]
	cmp eax,edi
	je Block2

 Block1:
	xor eax,eax
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov eax,edi
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFE
	add eax,2
	push eax
	lea ecx,[esi-4]
	call CCtrlButton::ChangeDisplayState

 Block2:
	mov dword ptr [esi+0xAD8],edi
	pop edi
	pop esi
	ret 4
}
}
// CCtrlButtonQuestToggle::OnMouseEnter
_SUB_EXCEPTION_HANDLER(5B6050)
__SUB_CLASS_THIS(005B6050, __thiscall, 79090,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B6050
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x50],0
	jne Block17

 Block1:
	cmp dword ptr [ecx+0x4C],0
	je Block7

 Block2:
	cmp dword ptr [esp+0x18],0
	je Block4

 Block3:
	push 1
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block4:
	cmp dword ptr [ecx+0xAD8],0
	je Block6

 Block5:
	push 0
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block6:
	push 2
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block7:
	cmp dword ptr [esp+0x18],0
	lea esi,[ecx-4]
	je Block13

 Block8:
	cmp dword ptr [ecx+0xAD8],0
	mov ecx,esi
	je Block11

 Block9:
	push 3
	call CCtrlButton::ChangeDisplayState
	lea eax,[esp+0x18]
	push 0x5D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block12

 Block11:
	push 2
	call CCtrlButton::ChangeDisplayState

 Block12:
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0x14]
	mov edx,dword ptr [edx+0x1C]
	push 1
	push 0x65
	push eax
	call edx
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block13:
	cmp dword ptr [ecx+0xAD8],0
	mov ecx,esi
	je Block15

 Block14:
	push 0
	jmp Block16

 Block15:
	push 2

 Block16:
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esi+0x14]
	mov eax,dword ptr [eax+0x1C]
	push 0
	push 0x65
	push edx
	call eax

 Block17:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CWorldMapDlg::CheckSpotInfo
__SUB_CLASS_THIS(005B59A0, __thiscall, 59652,  CWorldMapDlg, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	xor ecx,ecx
	or eax,0xFFFFFFFF
	push esi
	push edi
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x14],ecx

 Block1:
	mov eax,dword ptr [ebp+0xB00]
	test eax,eax
	je Block12

 Block2:
	cmp ecx,dword ptr [eax-4]
	jae Block12

 Block3:
	mov ecx,dword ptr [esp+0x30]
	mov esi,eax
	add esi,dword ptr [esp+0x14]
	add ecx,0xFFFFFFF3
	mov eax,dword ptr [esi]
	sub eax,ecx
	mov ecx,dword ptr [esp+0x34]
	cdq
	mov edi,eax
	mov eax,dword ptr [esi+4]
	xor edi,edx
	add ecx,0xFFFFFFE8
	sub eax,ecx
	mov ecx,dword ptr [ebp+0xAFC]
	sub edi,edx
	cdq
	mov ebx,eax
	mov eax,dword ptr [esi+8]
	xor ebx,edx
	lea eax,[ecx+eax*4]
	mov eax,dword ptr [eax]
	sub ebx,edx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block9

 Block4:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp edi,eax
	jg Block8

 Block7:
	cmp ebx,eax
	jle Block10

 Block8:
	inc dword ptr [esp+0x10]
	add dword ptr [esp+0x14],0x90
	mov ecx,dword ptr [esp+0x10]
	jmp Block1

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	cmp dword ptr [esi+0x4C],0
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edx
	mov ecx,edx
	je Block12

 Block11:
	mov eax,edx
	mov dword ptr [esp+0x1C],eax

 Block12:
	cmp dword ptr [ebp+0xAF0],ecx
	je Block14

 Block13:
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [ebp+0xAF0],edx
	mov dword ptr [esp+0x24],1

 Block14:
	mov edx,dword ptr [esp+0x20]
	test edx,edx
	jl Block18

 Block15:
	mov eax,dword ptr [ebp+0xB00]
	test eax,eax
	je Block18

 Block16:
	cmp edx,dword ptr [eax-4]
	jae Block18

 Block17:
	mov edx,dword ptr [ebp+4]
	lea eax,[ecx+ecx*8]
	shl eax,4
	add eax,dword ptr [ebp+0xB00]
	lea ecx,[ebp+0xAE8]
	lea esi,[ebp+4]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebp+0x9C]
	call CUIToolTip::SetToolTip_WorldMap
	mov eax,dword ptr [esp+0x24]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8

 Block18:
	lea ecx,[ebp+0x9C]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0x24]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CWorldMapDlg::CWorldMapDlg
_SUB_EXCEPTION_HANDLER(5BB190)
__SUB_CLASS_THIS0(005BB190, __thiscall, 59634,  CWorldMapDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BB190
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
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CWorldMapDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWorldMapDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWorldMapDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x18],2
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAE4],0x3B9AC9FF
	mov dword ptr [esi+0xAE8],edi
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xAEC],eax
	mov dword ptr [esi+0xAF0],eax
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB04],edi
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	int 3// TODO: 	mov dword ptr [esi+0xB2C],offset ZList<unsigned long>::`vftable'
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB3C],edi
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
// CWorldMapDlg::ClearQuestGuide
__SUB_CLASS_THIS0(005B5BF0, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	xor edi,edi
	mov ebp,ecx
	mov dword ptr [esp+0x10],edi
	xor ebx,ebx
	nop

 Block1:
	mov eax,dword ptr [ebp+0xB00]
	cmp eax,edi
	je Block10

 Block2:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,dword ptr [eax-4]
	jae Block10

 Block3:
	mov esi,eax
	add esi,ebx
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x1C],edi
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0x20]
	cmp eax,edi
	je Block5

 Block4:
	mov dword ptr [esi+0x20],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block5:
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x2C],edi
	mov eax,dword ptr [esi+0x48]
	cmp eax,edi
	je Block7

 Block6:
	mov dword ptr [esi+0x48],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x28]
	cmp eax,edi
	je Block9

 Block8:
	mov dword ptr [esi+0x28],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	inc dword ptr [esp+0x10]
	add ebx,0x90
	jmp Block1

 Block10:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CWorldMapDlg::OnMouseEnter
__SUB_CLASS_THIS(005B58D0, __thiscall, 59638,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CWnd::OnMouseEnter
	test edi,edi
	jne Block2

 Block1:
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// WORLDMAP_ITEM::~WORLDMAP_ITEM
_SUB_EXCEPTION_HANDLER(5B5D00)
__SUB_CLASS_THIS0(005B5D00, __thiscall, 47227,  WORLDMAP_ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B5D00
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
	lea ecx,[esi+0x7C]
	mov dword ptr [esp+0x14],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x14],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x14],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x14],8
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esi+0x4C]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x48]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x14],5
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWorldMapDlg::OnMouseButton
__SUB_CLASS_THIS(005BF1C0, __thiscall, 59640,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0xB10],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+8]
	sub eax,0x202
	je Block6

 Block3:
	sub eax,3
	je Block5

 Block4:
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 0x10

 Block5:
	lea ecx,[esi-4]
	call CWorldMapDlg::SetWorldMapShallower
	pop esi
	ret 0x10

 Block6:
	lea ecx,[esi-4]
	call CWorldMapDlg::SetWorldMapDeeper
	pop esi
	ret 0x10
}
}
// CWorldMapDlg::OnMouseMove
__SUB_CLASS_THIS(005BAE40, __thiscall, 59639,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	lea esi,[ecx-4]
	push edi
	push ebx
	mov ecx,esi
	call CWorldMapDlg::CheckSpotInfo
	push edi
	push ebx
	mov ecx,esi
	mov ebp,eax
	call CWorldMapDlg::CheckLinkInfo
	or eax,ebp
	je Block2

 Block1:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block2:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 8
}
}
// CWorldMapDlg::MakeBorder
_SUB_EXCEPTION_HANDLER(5B6490)
__SUB_CLASS_THIS0(005B6490, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B6490
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	lea eax,[esp+0x20]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0x78]
	push esi
	push eax
	mov dword ptr [esp+0x70],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x2C]
	or edi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x64],edi
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
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
	lea eax,[esp+0x2C]
	mov ebx,1
	push eax
	mov dword ptr [esp+0x68],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
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
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x64],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [ebp+0x28]
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [ebp+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	xor ebx,ebx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	xor ebx,ebx

 Block12:
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x64],edi
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [ebp+0x24]
	mov edx,dword ptr [esi]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push ebx
	push ebx
	push esi
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x64],3
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x28],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],5
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x68],6
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push 0
	push 0
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,7
	push offset _S_UIUIWINDOW2IMGWO__8
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],8
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ebp,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],bp
	jne Block36

 Block30:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x4C],bp
	jne Block37

 Block34:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block38

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block36:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x2C]
	push eax
	call edi
	jmp Block33

 Block37:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block38:
	mov byte ptr [esp+0x64],5
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
	call edi

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
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
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],0xA
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push 0
	push 0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xB
	push offset _S_UIUIWINDOW2IMGWO__7
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0xC
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],bp
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block55:
	mov byte ptr [esp+0x64],0xA
	cmp word ptr [esp+0x4C],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block59:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block63:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x24]
	mov ebp,dword ptr [esp+0x1C]
	mov edi,0x40
	sub ecx,edi
	cmp ecx,edi
	jle Block80

 Block64:
	mov ebx,eax

 Block65:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ecx
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x64],0xE
	test esi,esi
	je Block7

 Block66:
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],5
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],edx
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x64],0xF
	test esi,esi
	je Block7

 Block73:
	mov ebp,dword ptr [esp+0x3C]
	mov ecx,dword ptr [ebx+0x28]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	push ebp
	sub ecx,0x1B
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push ecx
	push edi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block75

 Block74:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block75:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ebx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx+0x24]
	inc edi
	sub eax,0x40
	cmp edi,eax
	jl Block65

 Block80:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x68],0x10
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	push 0
	push 0
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_UIUIWINDOW2IMGWO__6
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x12
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x13
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block92

 Block87:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x20]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x20]
	cmp dword ptr [esp+0x14],0
	mov edi,eax
	je Block89

 Block88:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	mov dword ptr [esp+0x14],edi
	test esi,esi
	jge Block95

 Block90:
	cmp esi,0x80004002
	je Block95

 Block91:
	push esi
	call _com_issue_error

 Block92:
	cmp dword ptr [esp+0x14],0
	je Block95

 Block93:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block95:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov esi,8
	mov byte ptr [esp+0x64],0x10
	cmp word ptr [esp+0x4C],si
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x68],0x14
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x15
	push offset _S_UIUIWINDOW2IMGWO__5
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x16
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea eax,[esp+0x40]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x17
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block119

 Block114:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov edi,ecx
	test ebp,ebp
	je Block116

 Block115:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block116:
	mov dword ptr [esp+0x1C],edi
	test esi,esi
	jge Block122

 Block117:
	cmp esi,0x80004002
	je Block122

 Block118:
	push esi
	call _com_issue_error

 Block119:
	test ebp,ebp
	je Block122

 Block120:
	mov eax,ebp
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov esi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov byte ptr [esp+0x64],0x14
	cmp word ptr [esp+0x4C],si
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x28]
	mov edi,0x1B
	sub ecx,edi
	cmp ecx,edi
	jle Block151

 Block135:
	mov ebx,eax

 Block136:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ecx
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x64],0x18
	test esi,esi
	je Block7

 Block137:
	mov ebp,dword ptr [esp+0x3C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block139:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],edx
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x64],0x19
	test esi,esi
	je Block7

 Block144:
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx+0x24]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	sub ecx,0x40
	push edi
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	push esi
	call ecx
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block146:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],5
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov ebx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebx+0x28]
	inc edi
	sub ecx,0x1B
	cmp edi,ecx
	jl Block136

 Block151:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea ecx,[esp+0x4C]
	mov bl,0x1A
	push ecx
	mov byte ptr [esp+0x68],bl
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGWO__4
	mov byte ptr [esp+0x7C],0x1B
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x1C
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x78],0x1B
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x1D
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block163

 Block158:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov edi,ecx
	test eax,eax
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block160:
	mov ebp,edi
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block166

 Block161:
	cmp esi,0x80004002
	je Block166

 Block162:
	push esi
	call _com_issue_error

 Block163:
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	je Block166

 Block164:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block166

 Block165:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block166:
	mov esi,8
	mov byte ptr [esp+0x64],0x1B
	cmp word ptr [esp+0x2C],si
	jne Block173

 Block167:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block169

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block169:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block170:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block174

 Block171:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block175

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block173:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	jmp Block170

 Block174:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block175:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block179:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],ecx
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0x64],0x1E
	mov dword ptr [esp+0x20],eax
	test esi,esi
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov ebx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	push ebp
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block183

 Block182:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block187:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],0x1F
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block191

 Block190:
	push eax
	call _com_issue_error

 Block191:
	push 0
	push 0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x20
	push offset _S_UIUIWINDOW2IMGWO__3
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x21
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x22
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block199

 Block194:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block196

 Block195:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block196:
	mov ebp,edi
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block202

 Block197:
	cmp esi,0x80004002
	je Block202

 Block198:
	push esi
	call _com_issue_error

 Block199:
	test ebp,ebp
	je Block202

 Block200:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block202:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block205

 Block203:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov esi,8
	mov byte ptr [esp+0x64],0x1F
	cmp word ptr [esp+0x4C],si
	jne Block209

 Block207:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edx
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x64],0x23
	test esi,esi
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x24]
	mov ebx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	push ebp
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push 0
	sub ecx,0x40
	push ecx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [edi+0x80]
	push esi
	call eax
	test eax,eax
	jge Block218

 Block217:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block218:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block221

 Block219:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block224

 Block223:
	push eax
	call _com_issue_error

 Block224:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x68],0x24
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block226

 Block225:
	push eax
	call _com_issue_error

 Block226:
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x25
	push offset _S_UIUIWINDOW2IMGWO__2
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x26
	jne Block228

 Block227:
	push 0x80004003
	call _com_issue_error

 Block228:
	lea eax,[esp+0x40]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x27
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block234

 Block229:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block231

 Block230:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block231:
	mov ebp,edi
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block237

 Block232:
	cmp esi,0x80004002
	je Block237

 Block233:
	push esi
	call _com_issue_error

 Block234:
	test ebp,ebp
	je Block237

 Block235:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block237

 Block236:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block237:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block240

 Block238:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block241:
	mov esi,8
	mov byte ptr [esp+0x64],0x24
	cmp word ptr [esp+0x4C],si
	jne Block244

 Block242:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block245:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block248

 Block246:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edx
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x64],0x28
	test esi,esi
	jne Block251

 Block250:
	push 0x80004003
	call _com_issue_error

 Block251:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x28]
	mov ebx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	push ebp
	mov dword ptr [eax+4],ebx
	sub ecx,0x1B
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push ecx
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [edi+0x80]
	push esi
	call eax
	test eax,eax
	jge Block253

 Block252:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block253:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block256

 Block254:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block259

 Block258:
	push eax
	call _com_issue_error

 Block259:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x68],0x29
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x2A
	push offset _S_UIUIWINDOW2IMGWO__1
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x2B
	jne Block263

 Block262:
	push 0x80004003
	call _com_issue_error

 Block263:
	lea eax,[esp+0x40]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x2C
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block269

 Block264:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block266

 Block265:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block266:
	mov dword ptr [esp+0x14],edi
	test esi,esi
	jge Block272

 Block267:
	cmp esi,0x80004002
	je Block272

 Block268:
	push esi
	call _com_issue_error

 Block269:
	test ebp,ebp
	je Block272

 Block270:
	mov eax,ebp
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block272

 Block271:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block272:
	mov esi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],si
	jne Block275

 Block273:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov byte ptr [esp+0x64],0x29
	cmp word ptr [esp+0x4C],si
	jne Block279

 Block277:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block283

 Block281:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block284:
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edi
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x64],0x2D
	test esi,esi
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x28]
	mov edx,dword ptr [eax+0x24]
	mov ebp,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x24]
	push eax
	sub ecx,0x1B
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	sub edx,0x40
	push edx
	push esi
	call ecx
	test eax,eax
	jge Block288

 Block287:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block288:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],5
	jne Block291

 Block289:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block292:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block294

 Block293:
	push eax
	call _com_issue_error

 Block294:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x68],0x2E
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block296

 Block295:
	push eax
	call _com_issue_error

 Block296:
	push 0
	push 0
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x2F
	push offset _S_UIUIWINDOW2IMGWO
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x30
	jne Block298

 Block297:
	push 0x80004003
	call _com_issue_error

 Block298:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x31
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block304

 Block299:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebp,dword ptr [esp+0x18]
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	mov eax,dword ptr [ebp+0xAF8]
	test eax,eax
	je Block301

 Block300:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block301:
	mov dword ptr [ebp+0xAF8],edi
	test esi,esi
	jge Block306

 Block302:
	cmp esi,0x80004002
	je Block306

 Block303:
	push esi
	call _com_issue_error

 Block304:
	mov ebp,dword ptr [esp+0x18]
	mov eax,dword ptr [ebp+0xAF8]
	test eax,eax
	je Block306

 Block305:
	mov dword ptr [ebp+0xAF8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block306:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block309

 Block307:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	mov edi,8
	mov byte ptr [esp+0x64],0x2E
	cmp word ptr [esp+0x4C],di
	jne Block313

 Block311:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],di
	jne Block317

 Block315:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],ecx
	mov eax,dword ptr [esp+0x20]
	mov esi,dword ptr [eax]
	mov edx,dword ptr [ebp+0xAF8]
	mov byte ptr [esp+0x64],0x32
	test esi,esi
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	mov ebp,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push 0x130
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block322

 Block321:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block322:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],di
	jne Block325

 Block323:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],3
	test eax,eax
	je Block328

 Block327:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block328:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block330:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// CWorldMapDlg::ScoreLinkMap
_SUB_EXCEPTION_HANDLER(5B83B0)
__SUB_CLASS_THIS(005B83B0, __thiscall, 59659,  CWorldMapDlg, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B83B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x44],ecx
	mov eax,dword ptr [ebp+0x70]
	xor edi,edi
	mov dword ptr [ebp-4],edi
	cmp eax,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x34]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x34],edi
	call eax
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [ebp+0x34]
	lea ecx,[ebp+0x3F]
	push ecx
	push edx
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call ZArray<_x_com_ptr<IWzProperty>>::_Alloc
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x38],eax
	cmp eax,edi
	je Block106

 Block5:
	xor ebx,ebx

 Block6:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x40],ebx
	cmp eax,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x58],edi
	call eax
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	cmp ebx,dword ptr [ebp+0x58]
	jae Block106

 Block11:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	cmp eax,edi
	je Block17

 Block14:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],5
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	cmp esi,edi
	sete al
	test al,al
	je Block24

 Block22:
	mov byte ptr [ebp-4],1
	cmp esi,edi
	je Block105

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ebx,dword ptr [ebp+0x40]
	inc ebx
	xor edi,edi
	jmp Block6

 Block24:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push offset _S_LINK
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],6
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[ebp-0x30]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],9
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov edi,dword ptr [ebp+0x4C]
	test edi,edi
	sete al
	test al,al
	je Block37

 Block34:
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block36

 Block35:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],1
	call eax
	mov ebx,dword ptr [ebp+0x40]
	inc ebx
	xor edi,edi
	jmp Block6

 Block37:
	push 0
	push 0xD
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_MAPWORLDMAP]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_MAPWORLDMAP+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_MAPWORLDMAP+8]
	mov dword ptr [eax+8],ecx
	mov dl,byte ptr [_S_MAPWORLDMAP+12]
	push 0xD
	lea ecx,[ebp+0x5C]
	mov byte ptr [eax+0xC],dl
	call ZXString<char>::ReleaseBuffer
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push offset _S_LINKMAP
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xB
	test edi,edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[ebp-0x20]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xC
	jne Block41

 Block40:
	mov eax,dword ptr [eax+8]
	jmp Block42

 Block41:
	mov eax,offset _S___3

 Block42:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block44

 Block43:
	mov eax,dword ptr [esi-4]
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	push eax
	push esi
	lea ecx,[ebp+0x5C]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block47

 Block46:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block47:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xA
	jne Block53

 Block48:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block50:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block51:
	push 4
	push offset _S_IMG
	lea ecx,[ebp+0x5C]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x20]
	push edx
	call edi
	jmp Block51

 Block54:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov eax,dword ptr [ebp+0x5C]
	push 0
	push 0
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x10
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x11
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x10
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov edx,dword ptr [ebp+0x50]
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	lea esi,[edx+ebx*4]
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x40],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x40]
	push ecx
	call edi

 Block65:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x20],bx
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp+0x20]
	push eax
	call edi

 Block69:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x10],bx
	jne Block72

 Block70:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp+0x10]
	push edx
	call edi

 Block73:
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-4],0xA
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	mov ecx,dword ptr [ebp+0x44]
	call CWorldMapDlg::MakeCurrentMobList
	mov edi,dword ptr [ebp+0x38]
	mov ebx,dword ptr [edi+0x4244]
	add edi,0x423C
	xor esi,esi
	mov dword ptr [ebp+0x60],eax
	test ebx,ebx
	jbe Block79

 Block76:
	push esi
	mov ecx,edi
	call ZList<unsigned long>::FindIndex
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x48]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	add ecx,0xB2C
	mov dword ptr [ebp+0x48],eax
	call ZList<unsigned long>::Find
	test eax,eax
	je Block78

 Block77:
	add dword ptr [ebp+0x60],0x64

 Block78:
	inc esi
	cmp esi,ebx
	jb Block76

 Block79:
	mov esi,dword ptr [ebp+0x38]
	add esi,0x4250
	xor edi,edi
	mov ecx,esi
	mov dword ptr [ebp+0x48],edi
	call ZArray<WORLDMAPQUESTDEMANDITEM>::GetCount
	test eax,eax
	jbe Block88

 Block80:
	mov eax,dword ptr [esi]
	lea edx,[edi*8]
	sub edx,edi
	cmp dword ptr [eax+edx*4+4],0
	lea edi,[eax+edx*4]
	jne Block86

 Block81:
	mov ebx,dword ptr [edi+0x10]
	xor esi,esi
	test ebx,ebx
	jbe Block87

 Block82:
	lea ebx,[ebx]

 Block83:
	push esi
	lea ecx,[edi+8]
	call ZList<unsigned long>::FindIndex
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp+0x54],ecx
	mov ecx,dword ptr [ebp+0x44]
	push 0
	lea edx,[ebp+0x54]
	push edx
	add ecx,0xB2C
	call ZList<unsigned long>::Find
	test eax,eax
	jne Block86

 Block84:
	inc esi
	cmp esi,ebx
	jb Block83

 Block85:
	jmp Block87

 Block86:
	add dword ptr [ebp+0x60],0x64

 Block87:
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x38]
	add esi,0x4250
	inc edi
	mov ecx,esi
	mov dword ptr [ebp+0x48],edi
	call ZArray<WORLDMAPQUESTDEMANDITEM>::GetCount
	cmp edi,eax
	jb Block80

 Block88:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebp+0x44]
	cmp dword ptr [ecx+0xB28],eax
	jge Block94

 Block89:
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [ecx+0xB28],eax
	mov eax,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax+edx*4]
	mov esi,dword ptr [ecx+0xB10]
	cmp esi,eax
	je Block94

 Block90:
	mov dword ptr [ecx+0xB10],eax
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block92:
	test esi,esi
	je Block94

 Block93:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block94:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block98

 Block97:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block98:
	cmp dword ptr [ebp+0x58],0
	mov byte ptr [ebp-4],1
	je Block105

 Block99:
	jmp Block104

 Block104:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov ebx,dword ptr [ebp+0x40]
	inc ebx
	xor edi,edi
	jmp Block6

 Block106:
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	lea esp,[ebp-0x50]
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
}
}
// CWorldMapDlg::OnButtonClicked
__SUB_CLASS_THIS(005BF2A0, __thiscall, 59657,  CWorldMapDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB14]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0xB14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,dword ptr [esp+8]
	mov eax,ecx
	sub eax,2
	je Block11

 Block3:
	sub eax,0x7CE
	je Block5

 Block4:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop esi
	ret 4

 Block5:
	mov eax,1
	cmp dword ptr [esi+0xB24],eax
	jne Block7

 Block6:
	mov dword ptr [esi+0xB24],0
	push 0
	jmp Block8

 Block7:
	mov dword ptr [esi+0xB24],eax
	push eax

 Block8:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 0
	call CConfig::SetQuestGuideOption
	mov eax,dword ptr [esi+0xB1C]
	mov edx,dword ptr [esi+0xB24]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	mov eax,dword ptr [esi+0xB0C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	mov ecx,esi
	call CWorldMapDlg::SetWorldMap
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	pop esi
	ret 4
}
}
// WORLDMAP_ITEM::ResetLayer
__SUB_CLASS_THIS0(005B5BA0, __thiscall, 47227,  WORLDMAP_ITEM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	xor edi,edi
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x1C],edi
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0x20]
	cmp eax,edi
	je Block2

 Block1:
	mov dword ptr [esi+0x20],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x2C],edi
	mov eax,dword ptr [esi+0x48]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x48],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x28]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0x28],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	pop edi
	pop esi
	ret
}
}
// CCtrlButtonQuestToggle::OnMouseMove
_SUB_EXCEPTION_HANDLER(5B61C0)
__SUB_CLASS_THIS(005B61C0, __thiscall, 79091,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B61C0
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
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[esi-4]
	push edx
	mov edx,dword ptr [esp+0x30]
	push edx
	call eax
	test eax,eax
	je Block13

 Block1:
	cmp dword ptr [esi+0xAD8],0
	mov eax,dword ptr [esi+0x20]
	push 0
	push 0
	push 0xC8
	push 0
	push 0
	push 0
	push ecx
	lea ebx,[eax+4]
	lea ebp,[eax+4]
	mov ecx,esp
	je Block7

 Block2:
	mov dword ptr [esp+0x34],esp
	push 0x19F3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [esp+0x54],0
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],1
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0x4C]
	push eax
	push edi
	mov dword ptr [esp+0x54],0
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [esp+0x4C]
	jmp Block12

 Block7:
	mov dword ptr [esp+0x48],esp
	push 0x19F4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [esp+0x54],2
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],3
	test edi,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0x34]
	push eax
	push edi
	mov dword ptr [esp+0x3C],0
	call ecx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [esp+0x34]

 Block12:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x30]
	mov ecx,ebx
	call eax
	add eax,dword ptr [esp+0x50]
	mov edx,dword ptr [ebp]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebp
	call eax
	add eax,dword ptr [esi+0x18]
	lea ecx,[esi+0x88]
	add eax,edi
	push eax
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String2

 Block13:
	xor eax,eax
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
// CCtrlButtonQuestToggle::GetRTTI
__SUB_CLASS_THIS0(005B5F30, __thiscall, 79094,  CCtrlButtonQuestToggle, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlButtonQuestToggle::ms_RTTI_CCtrlButtonQuestToggle
	ret
}
}
// CWorldMapDlg::~CWorldMapDlg
_SUB_EXCEPTION_HANDLER(5BB2A0)
__SUB_CLASS_THIS0(005BB2A0, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BB2A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWorldMapDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWorldMapDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWorldMapDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB2C]
	mov dword ptr [esp+0x18],0xD
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
	cmp dword ptr [esi+0xB1C],0
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x18],0xC
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x18],0xB
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB10]
	mov byte ptr [esp+0x18],0xA
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB0C]
	mov byte ptr [esp+0x18],9
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xB04]
	mov byte ptr [esp+0x18],8
	call ZArray<CWorldMapDlg::WORLDMAP_LINK>::RemoveAll
	lea ecx,[esi+0xB00]
	mov byte ptr [esp+0x18],7
	call ZArray<WORLDMAP_ITEM>::RemoveAll
	lea ecx,[esi+0xAFC]
	mov byte ptr [esp+0x18],6
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [esi+0xAF8]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xAF4]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea ecx,[esi+0xAE8]
	mov byte ptr [esp+0x18],3
	call ZArray<WORLDMAP_USERINFO>::RemoveAll
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x18],2
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],1
	je Block14

 Block13:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block14:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
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
// WORLDMAP_ITEM::WORLDMAP_ITEM
__SUB_CLASS_THIS0(005B5EC0, __thiscall, 47232,  WORLDMAP_ITEM, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x38],ecx
	mov dword ptr [eax+0x3C],ecx
	mov dword ptr [eax+0x40],ecx
	int 3// TODO: 	mov edx,offset ZList<unsigned long>::`vftable'
	mov dword ptr [eax+0x30],edx
	mov dword ptr [eax+0x44],ecx
	mov dword ptr [eax+0x48],ecx
	mov dword ptr [eax+0x4C],ecx
	mov dword ptr [eax+0x50],ecx
	int 3// TODO: 	mov dword ptr [eax+0x54],offset ZList<long>::`vftable'
	mov dword ptr [eax+0x5C],ecx
	mov dword ptr [eax+0x60],ecx
	mov dword ptr [eax+0x64],ecx
	mov dword ptr [eax+0x68],edx
	mov dword ptr [eax+0x70],ecx
	mov dword ptr [eax+0x74],ecx
	mov dword ptr [eax+0x78],ecx
	mov dword ptr [eax+0x7C],edx
	mov dword ptr [eax+0x84],ecx
	mov dword ptr [eax+0x88],ecx
	mov dword ptr [eax+0x8C],ecx
	ret
}
}
// CWorldMapDlg::LoadInfo
_SUB_EXCEPTION_HANDLER(5B7B00)
__SUB_CLASS_THIS(005B7B00, __thiscall, 59647,  CWorldMapDlg, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B7B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	lea edi,[ecx+0x90]
	push 0xFFFFFFFF
	xor ebx,ebx
	push offset _S_
	mov ecx,edi
	mov dword ptr [esp+0x48],ebx
	call ZXString16::AssignCharStr
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x48],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x40],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	sete al
	cmp al,bl
	je Block15

 Block10:
	mov byte ptr [esp+0x40],bl
	cmp esi,ebx
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block12:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 4

 Block15:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1002
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x44],5
	cmp esi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x48],4
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x40],6
	jne Block19

 Block18:
	mov eax,dword ptr [eax+8]
	jmp Block20

 Block19:
	mov eax,offset _S___3

 Block20:
	push eax
	mov ecx,edi
	call ZXString16::AssignCStr
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],4
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x44],bl
	call edx
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,1
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 4
}
}
// CWorldMapDlg::LoadMapList
_SUB_EXCEPTION_HANDLER(5BC160)
__SUB_CLASS_THIS(005BC160, __thiscall, 59647,  CWorldMapDlg, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BC160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x160
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x3C],ebx
	lea edi,[ecx+0xB00]
	mov dword ptr [ebp+0x64],ebx

 Block1:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block10

 Block2:
	mov ecx,dword ptr [ebp+0x3C]
	cmp ecx,dword ptr [eax-4]
	jae Block10

 Block3:
	mov esi,eax
	add esi,dword ptr [ebp+0x64]
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x1C],ebx
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0x20]
	cmp eax,ebx
	je Block5

 Block4:
	mov dword ptr [esi+0x20],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block5:
	mov dword ptr [esi+0x24],ebx
	mov dword ptr [esi+0x2C],ebx
	mov eax,dword ptr [esi+0x48]
	cmp eax,ebx
	je Block7

 Block6:
	mov dword ptr [esi+0x48],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x28]
	cmp eax,ebx
	je Block9

 Block8:
	mov dword ptr [esi+0x28],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	inc dword ptr [ebp+0x3C]
	add dword ptr [ebp+0x64],0x90
	jmp Block1

 Block10:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,edi
	mov dword ptr [eax+0xAF0],0xFFFFFFFF
	call ZArray<WORLDMAP_ITEM>::RemoveAll
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x919
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[ebp-0xDC]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	cmp eax,ebx
	je Block16

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x50]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	cmp word ptr [ebp-0xDC],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],4
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[ebp-0xDC]
	push eax
	call edi

 Block20:
	cmp esi,ebx
	sete al
	test al,al
	jne Block305

 Block21:
	cmp esi,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x28]
	push edx
	push esi
	mov dword ptr [ebp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp dword ptr [ebp+0x28],ebx
	je Block305

 Block26:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x3D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edx+0xAF4]
	mov byte ptr [ebp-4],5
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[ebp-0x18]
	push eax
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],6
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[ebp-0x13C]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],8
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x58],ebx
	mov dword ptr [ebp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xB
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	cmp word ptr [ebp-0x13C],8
	mov byte ptr [ebp-4],0xC
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0x13C],ax
	mov eax,dword ptr [ebp-0x134]
	cmp eax,ebx
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp-0x13C]
	push ecx
	call edi

 Block41:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov dword ptr [ebp+0x44],ebx
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov byte ptr [ebp-4],0xE
	mov dword ptr [ebp+0x1C],edi
	mov dword ptr [ebp+0x28],eax
	cmp edi,ebx
	je Block301

 Block44:
	cmp eax,ebx
	je Block301

 Block45:
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [ebp-0x78]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp+0x10],edx
	cmp esi,ebx
	je Block50

 Block46:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block49

 Block48:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block49:
	mov dword ptr [ebp-0x78],0

 Block50:
	mov eax,dword ptr [edi+0x4080]
	mov ecx,edi
	lea ebx,[edi+0x2148]
	mov dword ptr [ebp+0xC],eax
	call CWvsContext::GetCurFieldID
	movzx esi,word ptr [edi+0x4238]
	mov ecx,dword ptr [edi+0x2064]
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [ebp-0x10],eax
	mov dword ptr [ebp-0x28],ecx
	mov dword ptr [ebp+0x48],esi
	mov dword ptr [edx+0xB20],0
	test si,si
	jbe Block57

 Block51:
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	movzx eax,si
	add ecx,0x6F5
	mov dword ptr [ebp+0x50],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block53

 Block52:
	mov ecx,dword ptr [ebp+0x10]
	push eax
	lea edx,[ebp+0x48]
	push edx
	add ecx,0x5B5
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	mov ecx,edi
	jmp Block56

 Block53:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push esi
	call CQuestMan::GetCompleteDemand
	mov edi,eax
	test edi,edi
	je Block57

 Block54:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [edi+0x18]
	push ebx
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x28]
	push esi
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	jne Block57

 Block55:
	mov edx,dword ptr [edi+0x18]
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xB08],edx

 Block56:
	call CWvsContext::ResetWorldMapQuestDemand

 Block57:
	mov esi,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	xor ebx,ebx
	push esi
	mov dword ptr [ebp+0x64],ebx
	call eax
	cmp eax,ebx
	jge Block59

 Block58:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov edx,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x33]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	push edx
	add ecx,0xB00
	call ZArray<WORLDMAP_ITEM>::_Alloc
	xor edi,edi
	mov dword ptr [ebp+0x3C],edi
	nop

 Block60:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x64]
	push ecx
	push esi
	mov dword ptr [ebp+0x64],ebx
	call edx
	cmp eax,ebx
	jge Block62

 Block61:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	cmp edi,dword ptr [ebp+0x64]
	jae Block296

 Block63:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xBC]
	mov byte ptr [ebp-4],0xF
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block65

 Block64:
	cmp eax,0x80004002
	jne Block15

 Block65:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x12
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	cmp eax,ebx
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov edi,dword ptr [ebp+0x64]
	cmp edi,ebx
	sete al
	test al,al
	jne Block278

 Block70:
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ebp+0x54]
	lea ecx,[ecx+ecx*8]
	shl ecx,4
	add ecx,dword ptr [eax+0xB00]
	add eax,0xB00
	mov dword ptr [ebp+0x60],ecx
	call WORLDMAP_ITEM::ResetLayer
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0xFEF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	cmp edi,ebx
	je Block11

 Block71:
	lea ecx,[ebp-0x11C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x14
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp+0x38],ebx
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block73:
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block75

 Block74:
	cmp eax,0x80004002
	jne Block15

 Block75:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x17
	cmp eax,ebx
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	cmp word ptr [ebp-0x11C],8
	mov byte ptr [ebp-4],0x18
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	cmp eax,ebx
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp-0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov esi,dword ptr [ebp+0x38]
	cmp esi,ebx
	je Block11

 Block82:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x4C]
	push eax
	push esi
	mov dword ptr [ebp+0x4C],ebx
	call ecx
	cmp eax,ebx
	jge Block84

 Block83:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	mov esi,dword ptr [ebp+0x4C]
	cmp dword ptr [ebp+0x58],ebx
	je Block11

 Block85:
	mov eax,dword ptr [ebp+0x58]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[ebp+0x6C]
	push ecx
	push eax
	mov dword ptr [ebp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block87

 Block86:
	mov ecx,dword ptr [ebp+0x58]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block87:
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [ebp+0x60]
	add edx,esi
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x28]
	mov dword ptr [ebp+0x4C],ebx
	call eax
	cmp eax,ebx
	jge Block89

 Block88:
	mov ecx,dword ptr [ebp+0x38]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [ebp+0x58]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x28]
	mov esi,dword ptr [ebp+0x4C]
	lea ecx,[ebp+0x6C]
	push ecx
	push eax
	mov dword ptr [ebp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block91

 Block90:
	mov ecx,dword ptr [ebp+0x58]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block91:
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [ebp+0x60]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	add edx,esi
	push 0x618
	push ecx
	mov dword ptr [eax+4],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x19
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1A
	call get_int32
	mov ecx,dword ptr [ebp+0x60]
	add esp,8
	cmp word ptr [ebp-0x8C],8
	mov dword ptr [ecx+8],eax
	mov byte ptr [ebp-4],0x18
	jne Block94

 Block92:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	cmp eax,ebx
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x192A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x15C]
	mov byte ptr [ebp-4],0x1B
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1C
	call get_int32
	mov ecx,dword ptr [ebp+0x60]
	mov esi,8
	add esp,8
	mov dword ptr [ecx+0xC],eax
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x15C],si
	jne Block98

 Block96:
	mov eax,dword ptr [ebp-0x154]
	xor edx,edx
	mov word ptr [ebp-0x15C],dx
	cmp eax,ebx
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[ebp-0x15C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x5D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xFC]
	mov byte ptr [ebp-4],0x1D
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [eax],si
	jne Block101

 Block100:
	mov eax,dword ptr [eax+8]
	jmp Block102

 Block101:
	mov eax,offset _S___3

 Block102:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],ebx
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0xFC],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp-0xFC],ax
	mov eax,dword ptr [ebp-0xF4]
	cmp eax,ebx
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp-0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x5D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x9C]
	mov byte ptr [ebp-4],0x21
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x22
	cmp word ptr [eax],si
	jne Block108

 Block107:
	mov eax,dword ptr [eax+8]
	jmp Block109

 Block108:
	mov eax,offset _S___3

 Block109:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],ebx
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x9C],si
	jne Block112

 Block110:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	cmp eax,ebx
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x734
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],0x25
	mov ecx,edi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+4]
	push edx
	mov byte ptr [ebp-4],0x26
	call get_unknown
	mov esi,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax]
	add esp,4
	add esi,0x4C
	mov ecx,esp
	mov byte ptr [ebp-4],0x27
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block115:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block117

 Block116:
	cmp eax,0x80004002
	jne Block15

 Block117:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x26
	cmp eax,ebx
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	mov esi,8
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0xAC],si
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,ebx
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x91A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xCC]
	mov byte ptr [ebp-4],0x28
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block125

 Block124:
	cmp eax,0x80004002
	jne Block15

 Block125:
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0xCC],si
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0xC4]
	xor ecx,ecx
	mov word ptr [ebp-0xCC],cx
	cmp eax,ebx
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[ebp-0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,ebx
	sete al
	test al,al
	jne Block289

 Block130:
	cmp esi,ebx
	je Block11

 Block131:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block133

 Block132:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	cmp dword ptr [ebp+0x6C],ebx
	je Block289

 Block134:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block136

 Block135:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block136:
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x33]
	push eax
	add ecx,0x50
	push edx
	call ZArray<unsigned long>::_Alloc
	mov dword ptr [ebp+0x34],ebx
	jmp Block138

 Block138:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block140

 Block139:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	mov eax,dword ptr [ebp+0x34]
	cmp eax,dword ptr [ebp+0x6C]
	jae Block273

 Block141:
	mov eax,0x20
	call __chkstk
	mov edi,dword ptr [ebp+0x34]
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xEC]
	push ecx
	mov byte ptr [ebp-4],0x2C
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+0x60]
	mov esi,dword ptr [ebx+0x50]
	lea ecx,[ebx+0x50]
	add edi,edi
	add edi,edi
	push eax
	mov byte ptr [ebp-4],0x2D
	mov dword ptr [ebp+0x5C],ecx
	add esi,edi
	call get_int32
	add esp,8
	mov dword ptr [esi],eax
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],0x2B
	jne Block144

 Block142:
	mov eax,dword ptr [ebp-0xE4]
	xor edx,edx
	mov word ptr [ebp-0xEC],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[ebp-0xEC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+0xB08]
	test eax,eax
	je Block150

 Block146:
	cmp dword ptr [ebx+0x24],0
	jne Block150

 Block147:
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	test eax,eax
	je Block150

 Block148:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [edi+ecx]
	push 0
	lea ecx,[ebp+0x50]
	push ecx
	lea ecx,[eax+0xD0]
	mov dword ptr [ebp+0x50],edx
	call ZList<long>::Find
	test eax,eax
	je Block150

 Block149:
	mov dword ptr [ebx+0x24],1

 Block150:
	cmp dword ptr [ebx+0xC],0
	jne Block240

 Block151:
	xor ebx,ebx
	mov dword ptr [ebp+0x6C],ebx
	mov dword ptr [ebp+0x14],ebx
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+edi]
	push ecx
	lea edx,[ebp+0x6C]
	push offset _S_ETCMAPOBJECTINFO__1
	push edx
	mov byte ptr [ebp-4],0x2F
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[ebp-0x4C]
	push eax
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block15

 Block152:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0x30
	call esi
	lea eax,[ebp-0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block15

 Block153:
	mov eax,dword ptr [ebp+0x6C]
	push ebx
	push ebx
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x6C]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x31
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x32
	cmp dword ptr [_D_G_RM],ebx
	je Block11

 Block154:
	lea ecx,[ebp-0x10C]
	push ecx
	mov byte ptr [ebp-4],0x31
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block156

 Block155:
	cmp eax,0x80004002
	jne Block15

 Block156:
	mov edi,8
	mov byte ptr [ebp-4],0x35
	cmp word ptr [ebp-0x10C],di
	jne Block159

 Block157:
	mov eax,dword ptr [ebp-0x104]
	xor edx,edx
	mov word ptr [ebp-0x10C],dx
	cmp eax,ebx
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp-0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov byte ptr [ebp-4],0x36
	cmp word ptr [ebp-0x6C],di
	jne Block163

 Block161:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	cmp eax,ebx
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov byte ptr [ebp-4],0x37
	cmp word ptr [ebp-0x4C],di
	jne Block167

 Block165:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,ebx
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov ebx,dword ptr [ebp+0x24]
	xor edi,edi
	cmp ebx,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block197

 Block169:
	mov dword ptr [ebp+0x5C],edi
	mov edi,edi

 Block170:
	cmp ebx,edi
	je Block11

 Block171:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x48]
	push eax
	push ebx
	mov dword ptr [ebp+0x48],edi
	call ecx
	cmp eax,edi
	jge Block173

 Block172:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block173:
	mov edx,dword ptr [ebp+0x5C]
	cmp edx,dword ptr [ebp+0x48]
	jae Block197

 Block174:
	xor edi,edi
	push edi
	mov dword ptr [ebp+0x48],edi
	mov eax,edx
	push eax
	lea ecx,[ebp+0x48]
	push offset _S_D__1
	push ecx
	mov byte ptr [ebp-4],0x38
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[ebp-0x12C]
	mov byte ptr [ebp-4],0x39
	push edx
	mov byte ptr [ebp-4],0x38
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3A
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x12C],8
	mov ebx,eax
	mov dword ptr [ebp+0x50],ebx
	mov byte ptr [ebp-4],0x38
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [ebp-0x12C],ax
	mov eax,dword ptr [ebp-0x124]
	cmp eax,edi
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[ebp-0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x37
	cmp eax,edi
	je Block180

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block180:
	mov ecx,dword ptr [ebp+0x28]
	lea edx,[ebp+0x44]
	push edx
	push ebx
	call CQuestMan::GetQuestByNpc
	mov eax,dword ptr [ebp+0x44]
	cmp eax,edi
	je Block194

 Block181:
	cmp dword ptr [eax-4],edi
	je Block194

 Block182:
	test eax,eax
	je Block194

 Block183:
	cmp edi,dword ptr [eax-4]
	jae Block194

 Block184:
	movzx esi,word ptr [eax+edi*2]
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ebp+0xC]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x28]
	push edx
	add eax,0x2148
	push eax
	mov eax,dword ptr [ebp+0x10]
	push eax
	push ebx
	push esi
	call CQuestMan::CheckStartDemand
	test eax,eax
	je Block193

 Block185:
	mov ecx,dword ptr [ebp+0x1C]
	push esi
	call CWvsContext::IsWorthlessQuest
	test eax,eax
	je Block187

 Block186:
	mov ecx,dword ptr [ebp+0x1C]
	cmp dword ptr [ecx+0x4254],0
	jne Block193

 Block187:
	mov ecx,dword ptr [ebp+0x60]
	xor edx,edx
	add ecx,0x44
	lea esp,[esp]

 Block188:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block192

 Block189:
	cmp edx,dword ptr [eax-4]
	jae Block192

 Block190:
	cmp word ptr [eax+edx*2],si
	je Block193

 Block191:
	inc edx
	jmp Block188

 Block192:
	push 0xFFFFFFFF
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],si

 Block193:
	mov eax,dword ptr [ebp+0x44]
	inc edi
	jmp Block182

 Block194:
	mov esi,dword ptr [ebp+0x60]
	push 0
	lea ecx,[ebp+0x50]
	add esi,0x68
	push ecx
	mov ecx,esi
	call ZList<unsigned long>::Find
	test eax,eax
	jne Block196

 Block195:
	mov ecx,esi
	call ZList<unsigned long>::AddTail_
	mov dword ptr [eax],ebx

 Block196:
	inc dword ptr [ebp+0x5C]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ebp+0x24]
	xor edi,edi
	jmp Block170

 Block197:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax+0x50]
	add eax,0x50
	mov eax,dword ptr [ebp+0x34]
	add eax,eax
	add eax,eax
	mov eax,dword ptr [edx+eax]
	push eax
	lea ecx,[ebp+0x14]
	push offset _S_ETCMAPOBJECTINFO
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[ebp-0x5C]
	push edx
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block15

 Block198:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x3B
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block15

 Block199:
	mov edx,dword ptr [ebp+0x14]
	push edi
	push edi
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x3C
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x3D
	cmp dword ptr [_D_G_RM],edi
	je Block11

 Block200:
	lea eax,[ebp-0x14C]
	mov byte ptr [ebp-4],0x3C
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block202

 Block201:
	cmp eax,0x80004002
	jne Block15

 Block202:
	mov esi,8
	mov byte ptr [ebp-4],0x40
	cmp word ptr [ebp-0x14C],si
	jne Block205

 Block203:
	mov eax,dword ptr [ebp-0x144]
	xor ecx,ecx
	mov word ptr [ebp-0x14C],cx
	cmp eax,edi
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea edx,[ebp-0x14C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov byte ptr [ebp-4],0x41
	cmp word ptr [ebp-0x3C],si
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp-0x5C],si
	jne Block213

 Block211:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,edi
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block214:
	mov esi,dword ptr [ebp+0x48]
	cmp esi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block232

 Block215:
	xor edi,edi

 Block216:
	mov dword ptr [ebp+0x50],edi
	test esi,esi
	je Block11

 Block217:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block219

 Block218:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block219:
	cmp edi,dword ptr [ebp+0x5C]
	jae Block232

 Block220:
	push 0
	mov dword ptr [ebp+0x5C],0
	push edi
	lea ecx,[ebp+0x5C]
	push offset _S_D__1
	push ecx
	mov byte ptr [ebp-4],0x43
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x16C]
	mov byte ptr [ebp-4],0x44
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x43
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x45
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x16C],8
	mov edi,eax
	mov dword ptr [ebp+0x68],edi
	mov byte ptr [ebp-4],0x43
	jne Block223

 Block221:
	xor eax,eax
	mov word ptr [ebp-0x16C],ax
	mov eax,dword ptr [ebp-0x164]
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea ecx,[ebp-0x16C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block226

 Block225:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block226:
	mov ebx,dword ptr [ebp+0x60]
	cmp dword ptr [ebx+0x2C],0
	jne Block229

 Block227:
	mov ecx,dword ptr [ebp+0x1C]
	push edi
	call CWvsContext::IsInWorldMapQuestDemand
	mov dword ptr [ebx+0x2C],eax
	cmp eax,1
	jne Block229

 Block228:
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [edx+0xB20],eax

 Block229:
	mov ebx,dword ptr [ebp+0x60]
	push 0
	lea eax,[ebp+0x68]
	add ebx,0x7C
	push eax
	mov ecx,ebx
	call ZList<unsigned long>::Find
	test eax,eax
	jne Block231

 Block230:
	mov ecx,ebx
	call ZList<unsigned long>::AddTail_
	mov dword ptr [eax],edi

 Block231:
	mov edi,dword ptr [ebp+0x50]
	mov ebx,dword ptr [ebp+0x24]
	inc edi
	jmp Block216

 Block232:
	mov byte ptr [ebp-4],0x37
	test esi,esi
	je Block234

 Block233:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block234:
	mov byte ptr [ebp-4],0x2F
	test ebx,ebx
	je Block236

 Block235:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block236:
	cmp dword ptr [ebp+0x14],0
	mov byte ptr [ebp-4],0x2E
	je Block238

 Block237:
	mov edx,dword ptr [ebp+0x14]
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block238:
	cmp dword ptr [ebp+0x6C],0
	mov byte ptr [ebp-4],0x2B
	je Block240

 Block239:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block240:
	cmp dword ptr [ebp+0x34],0
	jne Block261

 Block241:
	mov esi,dword ptr [ebp+0x60]
	mov eax,dword ptr [esi+0x50]
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[ebp-0x74]
	push edx
	call CField::GetFieldProp
	add esp,8
	cmp dword ptr [eax+4],0
	mov eax,dword ptr [ebp-0x70]
	sete bl
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block243

 Block242:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block243:
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block245:
	test bl,bl
	jne Block284

 Block246:
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block248

 Block247:
	cmp byte ptr [eax],bl
	jne Block260

 Block248:
	lea eax,[ebp]
	push 0x6EB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x50]
	mov ecx,dword ptr [ecx]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp+8]
	push edx
	mov byte ptr [ebp-4],0x47
	call CItemInfo::GetMapString
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0x48
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block250

 Block249:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block250:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block252

 Block251:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block252:
	lea eax,[ebp-0x1C]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x50]
	mov ecx,dword ptr [ecx]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x49
	call CItemInfo::GetMapString
	push eax
	lea ecx,[esi+0x14]
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block254

 Block253:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block254:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block256

 Block255:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block256:
	lea eax,[ebp+0x18]
	push 0x91B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x50]
	mov ecx,dword ptr [ecx]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x4B
	call CItemInfo::GetMapString
	push eax
	lea ecx,[esi+0x18]
	mov byte ptr [ebp-4],0x4C
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block258

 Block257:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block258:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block261

 Block259:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block261

 Block260:
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x20]
	push ecx
	lea ecx,[esi+0x18]
	call ZXString<char>::op_assign

 Block261:
	xor edi,edi

 Block262:
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [edx+0xAE8]
	test eax,eax
	je Block272

 Block263:
	cmp edi,dword ptr [eax-4]
	jae Block272

 Block264:
	mov ebx,dword ptr [ebp+0x60]
	mov eax,edx
	mov ecx,dword ptr [eax+0xAE8]
	mov eax,dword ptr [ebp+0x34]
	mov edx,dword ptr [ebx+0x50]
	lea esi,[edi+edi*2]
	add esi,esi
	add esi,esi
	mov ecx,dword ptr [esi+ecx]
	add eax,eax
	add eax,eax
	cmp ecx,dword ptr [eax+edx]
	jne Block271

 Block265:
	test edi,edi
	je Block267

 Block266:
	lea ecx,[ebx+0x54]
	call ZList<long>::AddTail_
	mov dword ptr [eax],edi

 Block267:
	mov eax,1
	cmp dword ptr [ebx+0x1C],eax
	je Block271

 Block268:
	test edi,edi
	je Block270

 Block269:
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [edx+0xAE8]
	xor ecx,ecx
	cmp dword ptr [esi+eax+8],ecx
	setne cl
	add ecx,2
	mov eax,ecx

 Block270:
	mov dword ptr [ebx+0x1C],eax

 Block271:
	inc edi
	jmp Block262

 Block272:
	inc dword ptr [ebp+0x34]
	mov edi,dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x4C]
	xor ebx,ebx
	jmp Block138

 Block273:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x24
	call eax
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x20
	cmp eax,ebx
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block275:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x18
	cmp eax,ebx
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block277:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x12
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xE
	call ecx
	inc dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x40]
	mov edi,dword ptr [ebp+0x3C]
	jmp Block60

 Block278:
	mov byte ptr [ebp-4],0xE
	cmp edi,ebx
	je Block280

 Block279:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block280:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xD
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block282

 Block281:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block282:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block311

 Block283:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block311

 Block284:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x24
	call edx
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block286

 Block285:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block286:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block288

 Block287:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block288:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x12
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xD
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x7C]
	test eax,eax
	jmp Block309

 Block289:
	mov byte ptr [ebp-4],0x24
	cmp esi,ebx
	je Block291

 Block290:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block291:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x20
	cmp eax,ebx
	je Block293

 Block292:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block293:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x18
	cmp eax,ebx
	je Block295

 Block294:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block295:
	mov eax,dword ptr [ebp+0x38]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x12
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0xE
	call edx
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xD
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0
	push eax
	jmp Block307

 Block296:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xD
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block298

 Block297:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block298:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block300

 Block299:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block300:
	mov eax,1
	jmp Block312

 Block301:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xD
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block303

 Block302:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block303:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block311

 Block304:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block311

 Block305:
	mov byte ptr [ebp-4],0
	cmp esi,ebx
	je Block308

 Block306:
	mov ecx,dword ptr [esi]
	push esi

 Block307:
	mov edx,dword ptr [ecx+8]
	call edx

 Block308:
	mov eax,dword ptr [ebp+0x7C]
	cmp eax,ebx

 Block309:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block311

 Block310:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block311:
	xor eax,eax

 Block312:
	lea esp,[ebp-0x17C]
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
// CWorldMapDlg::ClearToolTip
__SUB_CLASS_THIS0(005BB280, __thiscall, 59644,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x98
	jmp  CUIToolTip::ClearToolTip
}
}
// CWorldMapDlg::IsHavingFieldNo
_SUB_EXCEPTION_HANDLER(5B8F30)
__SUB_CLASS_THIS(005B8F30, __thiscall, 59649,  CWorldMapDlg, int32_t, NakedParam<_x_com_ptr<IWzProperty>>, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B8F30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x919
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [ebp-0x20]
	cmp edi,ebx
	sete al
	test al,al
	jne Block61

 Block10:
	cmp edi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x1C]
	push eax
	push edi
	mov dword ptr [ebp-0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [ebp-0x1C],ebx
	je Block61

 Block15:
	xor esi,esi
	mov dword ptr [ebp-0x1C],esi
	lea ecx,[ecx]

 Block16:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x18]
	push eax
	push edi
	mov dword ptr [ebp-0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	cmp esi,dword ptr [ebp-0x18]
	jae Block59

 Block19:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x54]
	mov byte ptr [ebp-4],5
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block4

 Block21:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],8
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ebx,dword ptr [ebp-0x18]
	test ebx,ebx
	sete al
	test al,al
	jne Block49

 Block26:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x91A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	test ebx,ebx
	je Block1

 Block27:
	lea eax,[ebp-0x44]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block29

 Block28:
	cmp eax,0x80004002
	jne Block4

 Block29:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xC
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov esi,dword ptr [ebp-0x24]
	test esi,esi
	sete al
	test al,al
	jne Block56

 Block34:
	test esi,esi
	je Block1

 Block35:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp dword ptr [ebp-0x14],0
	je Block56

 Block38:
	xor ebx,ebx
	lea ebx,[ebx]

 Block39:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	cmp ebx,dword ptr [ebp-0x14]
	jae Block48

 Block42:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x64]
	mov byte ptr [ebp-4],0xD
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x64],8
	mov edi,eax
	mov byte ptr [ebp-4],0xC
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	cmp edi,dword ptr [ebp+0xC]
	je Block53

 Block47:
	mov edi,dword ptr [ebp-0x20]
	inc ebx
	jmp Block39

 Block48:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],8
	call ecx
	mov eax,dword ptr [ebp-0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],4
	call eax
	inc dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp-0x1C]
	xor ebx,ebx
	jmp Block16

 Block49:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block51

 Block50:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block66

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block66

 Block53:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	mov eax,dword ptr [ebp-0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov eax,1
	jmp Block67

 Block56:
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block58:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],4
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+8]
	test eax,eax
	jmp Block64

 Block59:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block66

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block66

 Block61:
	mov byte ptr [ebp-4],0
	cmp edi,ebx
	je Block63

 Block62:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block63:
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx

 Block64:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	xor eax,eax

 Block67:
	lea esp,[ebp-0x74]
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
// CWorldMapDlg::SetWorldMapDeeper
_SUB_EXCEPTION_HANDLER(5BEC90)
__SUB_CLASS_THIS0(005BEC90, __thiscall, 59636,  CWorldMapDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BEC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x20],ecx
	mov eax,dword ptr [ecx+0xAEC]
	cmp eax,0xFFFFFFFF
	je Block34

 Block1:
	mov ecx,dword ptr [ecx+0xB04]
	lea eax,[eax+eax*2]
	lea esi,[ecx+eax*4]
	mov eax,dword ptr [esi+4]
	xor edi,edi
	cmp eax,edi
	je Block34

 Block2:
	cmp word ptr [eax],di
	je Block34

 Block3:
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x14],edi
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	push 0x90A
	lea edx,[ebp-0x18]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],2
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x44]
	push eax
	call esi
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [ebp-0x14]
	push edi
	push edi
	lea ecx,[ebp-0x44]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x54],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x34],si
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov bl,0xA
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x44],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	call StringPool::GetInstance
	push 0x502
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],0xB
	call play_ui_sound
	mov eax,dword ptr [ebp-0x1C]
	add esp,4
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	mov esi,dword ptr [ebp-0x18]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block30:
	mov ebx,dword ptr [ebp-0x20]
	mov ecx,ebx
	call CWorldMapDlg::SetWorldMap
	push edi
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov byte ptr [ebp-4],1
	cmp esi,edi
	je Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block32:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWorldMapDlg::LoadMapLink
_SUB_EXCEPTION_HANDLER(5BBC20)
__SUB_CLASS_THIS(005BBC20, __thiscall, 59647,  CWorldMapDlg, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BBC20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	lea ebx,[ecx+0xB04]
	mov dword ptr [ecx+0xAEC],0xFFFFFFFF
	xor esi,esi
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x40],ebx
	call ZArray<CWorldMapDlg::WORLDMAP_LINK>::RemoveAll
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0xFFD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [ebp+0x54]
	cmp edi,esi
	sete al
	test al,al
	jne Block68

 Block10:
	cmp edi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push edi
	mov dword ptr [ebp+0x60],esi
	call ecx
	cmp eax,esi
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [ebp+0x60],esi
	je Block68

 Block15:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push edi
	mov dword ptr [ebp+0x60],esi
	call ecx
	cmp eax,esi
	jge Block17

 Block16:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	mov eax,dword ptr [ebp+0x60]
	lea edx,[ebp+0x53]
	push edx
	push eax
	mov ecx,ebx
	call ZArray<CWorldMapDlg::WORLDMAP_LINK>::_Alloc
	xor ebx,ebx
	mov dword ptr [ebp+0x60],ebx
	mov dword ptr [ebp+0x4C],esi
	lea ecx,[ecx]

 Block18:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x58]
	push edx
	push edi
	mov dword ptr [ebp+0x58],esi
	call eax
	cmp eax,esi
	jge Block20

 Block19:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	cmp ebx,dword ptr [ebp+0x58]
	jae Block66

 Block21:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block23

 Block22:
	cmp eax,0x80004002
	jne Block4

 Block23:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],8
	jne Block26

 Block24:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,esi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov ebx,dword ptr [ebp+0x58]
	cmp ebx,esi
	sete al
	test al,al
	jne Block61

 Block28:
	mov ecx,dword ptr [ebp+0x40]
	mov edi,dword ptr [ecx]
	add edi,dword ptr [ebp+0x4C]
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xFFE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	cmp ebx,esi
	je Block1

 Block29:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xA
	jne Block31

 Block30:
	mov eax,dword ptr [eax+8]
	jmp Block32

 Block31:
	mov eax,offset _S___3

 Block32:
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],8
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,esi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x3D6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],0xB
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block38

 Block37:
	cmp eax,0x80004002
	jne Block4

 Block38:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xE
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	cmp eax,esi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push 0xFFF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block1

 Block43:
	lea edx,[ebp]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x10
	jne Block45

 Block44:
	mov eax,dword ptr [eax+8]
	jmp Block46

 Block45:
	mov eax,offset _S___3

 Block46:
	push eax
	lea ecx,[edi+4]
	call ZXString16::AssignCStr
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xE
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1000
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x11
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x12
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	add edi,8
	mov ecx,esp
	mov byte ptr [ebp-4],0x13
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block54

 Block53:
	cmp eax,0x80004002
	jne Block4

 Block54:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xE
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],4
	call edx
	inc dword ptr [ebp+0x60]
	add dword ptr [ebp+0x4C],0xC
	mov edi,dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x60]
	xor esi,esi
	jmp Block18

 Block61:
	mov byte ptr [ebp-4],4
	cmp ebx,esi
	je Block63

 Block62:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block63:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	xor eax,eax
	jmp Block73

 Block66:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block72

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block72

 Block68:
	mov byte ptr [ebp-4],0
	cmp edi,esi
	je Block70

 Block69:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block70:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,1

 Block73:
	lea esp,[ebp-0x3C]
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
}
}
// CWorldMapDlg::HitTest
__SUB_CLASS_THIS(005B5890, __thiscall, 59642,  CWorldMapDlg, int32_t, long, long, CCtrlWnd**) {
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
	mov ecx,0x18
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
// CCtrlButtonQuestToggle::IsKindOf
__SUB_CLASS_THIS(005B5F40, __thiscall, 79095,  CCtrlButtonQuestToggle, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlButtonQuestToggle::ms_RTTI_CCtrlButtonQuestToggle
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
// CWorldMapDlg::CreateWorldMapDlg
_SUB_EXCEPTION_HANDLER(5BE670)
__SUB_CLASS_THIS(005BE670, __thiscall, 59646,  CWorldMapDlg, int32_t, unsigned long, unsigned long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BE670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
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
	mov dword ptr [ebp-0x20],esi
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0xC]
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x54]
	push edx
	mov dword ptr [esi+0xAE4],eax
	mov dword ptr [esi+0xB08],ecx
	call ebx
	lea eax,[ebp-0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[ebp-0x44]
	push ecx
	mov dword ptr [ebp-4],edi
	call ebx
	lea edx,[ebp-0x44]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[ebp-0x54]
	push eax
	lea ecx,[ebp-0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x90B
	push edx
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
	lea eax,[ebp-0x74]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x74],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x74]
	push edx
	call ebx

 Block13:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x44]
	push ecx
	call ebx

 Block17:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x54]
	push eax
	call ebx

 Block21:
	mov ebx,dword ptr [ebp-0x24]
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x18]
	push edx
	push ebx
	mov dword ptr [ebp-0x18],edi
	call eax
	cmp eax,edi
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [ebp-0x18]
	lea edx,[ebp-0x29]
	push edx
	lea ecx,[esi+0xAFC]
	push eax
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc
	xor edi,edi
	nop

 Block26:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x18]
	push edx
	push ebx
	mov dword ptr [ebp-0x18],0
	call eax
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block28:
	cmp edi,dword ptr [ebp-0x18]
	jae Block42

 Block29:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov edx,dword ptr [esi+0xAFC]
	lea ecx,[esi+0xAFC]
	mov ecx,eax
	mov byte ptr [ebp-4],9
	lea esi,[edx+edi*4]
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block37

 Block30:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [esi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],ecx
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block34

 Block33:
	cmp ebx,0x80004002
	jne Block41

 Block34:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],7
	jne Block39

 Block35:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block40

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ebx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x20]
	inc edi
	jmp Block26

 Block37:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block34

 Block38:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block34

 Block39:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ebx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x20]
	inc edi
	jmp Block26

 Block41:
	push ebx
	call _com_issue_error

 Block42:
	xor edi,edi
	mov dword ptr [ebp-0x28],edi
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [esi+0xB08],edi
	je Block46

 Block43:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CWorldMapDlg::GetDeepestWorldMap_For_NpcMark

 Block44:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block50

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [ebp-0x28],edi
	call edx
	jmp Block50

 Block46:
	cmp dword ptr [ebp+0x10],0
	je Block48

 Block47:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CWorldMapDlg::GetDeepestWorldMap_For_MobMark
	jmp Block44

 Block48:
	mov eax,dword ptr [ebp+8]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CWorldMapDlg::GetDeepestWorldMap
	mov eax,dword ptr [eax]
	test eax,eax
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x28],edi
	call eax

 Block50:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	test edi,edi
	sete al
	test al,al
	je Block56

 Block53:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block55

 Block54:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block55:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	xor eax,eax
	jmp Block89

 Block56:
	mov esi,dword ptr [ebp-0x20]
	push 0
	push 0
	push 1
	push 0xA
	push 0x1FC
	push 0x29A
	push 0
	push 0x43
	mov ecx,esi
	call CDialog::CreateDlg_0
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	call CConfig::GetQuestGuideOption
	cmp eax,0x3E7
	jne Block58

 Block57:
	mov ecx,esi
	call CWorldMapDlg::CreateQuestGuideTip
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 0
	push 1
	call CConfig::SetQuestGuideOption

 Block58:
	lea ecx,[esi+0xAE8]
	push 0xFFFFFFFF
	call ZArray<WORLDMAP_USERINFO>::InsertBefore
	mov ecx,dword ptr [ebp+8]
	mov esi,eax
	mov dword ptr [esi],ecx
	mov eax,dword ptr [ebx+0x20CC]
	mov dword ptr [ebp-0x14],esi
	test eax,eax
	je Block60

 Block59:
	lea ecx,[eax+4]
	jmp Block61

 Block60:
	xor ecx,ecx

 Block61:
	lea edi,[esi+4]
	test ecx,ecx
	jne Block64

 Block62:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block67

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],0
	jmp Block67

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
	mov esi,dword ptr [ebp-0x14]

 Block67:
	mov dword ptr [esi+8],0
	cmp dword ptr [ebx+0x3604],0
	je Block76

 Block68:
	lea edx,[ebx+0x3608]
	xor edi,edi
	mov dword ptr [ebp-0x18],edx

 Block69:
	mov eax,dword ptr [ebp-0x18]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block75

 Block70:
	cmp eax,dword ptr [ebx+0x20B4]
	je Block75

 Block71:
	xor eax,eax
	mov dword ptr [ebp-0x30],eax
	mov dword ptr [ebp-0x14],eax
	lea ecx,[ebp-0x80]
	push ecx
	lea edx,[ebp-0x78]
	push edx
	lea eax,[ebp-0x7C]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[ebp-0x34]
	push ecx
	push edi
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC
	call CWvsContext::GetPartyMemberData
	mov ecx,dword ptr [ebp-0x20]
	push 0xFFFFFFFF
	add ecx,0xAE8
	call ZArray<WORLDMAP_USERINFO>::InsertBefore
	mov edx,dword ptr [ebp-0x1C]
	mov esi,eax
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov dword ptr [esi+8],0
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	add dword ptr [ebp-0x18],4
	inc edi
	cmp edi,6
	jl Block69

 Block76:
	mov ebx,dword ptr [ebx+0x378C]
	test ebx,ebx
	je Block80

 Block77:
	mov ecx,dword ptr [ebp-0x20]
	push 0xFFFFFFFF
	add ecx,0xAE8
	call ZArray<WORLDMAP_USERINFO>::InsertBefore
	lea ecx,[ebp-0x1C]
	mov esi,eax
	push 0x10BD
	push ecx
	mov dword ptr [esi],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+4]
	mov byte ptr [ebp-4],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov dword ptr [esi+8],1

 Block80:
	mov esi,dword ptr [ebp-0x28]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x34],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block82

 Block81:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block82:
	mov ecx,dword ptr [ebp-0x20]
	call CWorldMapDlg::SetWorldMap
	mov byte ptr [ebp-4],7
	test eax,eax
	jne Block86

 Block83:
	test esi,esi
	je Block85

 Block84:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block85:
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	xor eax,eax
	jmp Block89

 Block86:
	test esi,esi
	je Block88

 Block87:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block88:
	mov eax,dword ptr [ebp-0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov eax,1

 Block89:
	lea esp,[ebp-0x90]
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
	ret 0xC
}
}
