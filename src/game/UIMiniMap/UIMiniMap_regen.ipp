#include "regen.hpp"
// UIMiniMap.ipp
#include "UIMiniMap.hpp"

// CUIMiniMap::HitTest
__SUB_CLASS_THIS(003F6AD0, __thiscall, 56189,  CUIMiniMap, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
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
	mov eax,1

 Block4:
	pop esi
	ret 0xC
}
}
// CUIMiniMap::OnButtonClicked
_SUB_EXCEPTION_HANDLER(403E40)
__SUB_CLASS_THIS(00403E40, __thiscall, 56190,  CUIMiniMap, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_403E40
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,0x1684
	call __chkstk
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x168C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0xB08]
	cmp eax,1
	jne Block15

 Block1:
	mov eax,dword ptr [esp+0x169C]
	sub eax,0x3E8
	je Block13

 Block2:
	sub eax,1
	je Block12

 Block3:
	sub eax,1
	jne Block31

 Block4:
	call get_field
	mov esi,eax
	test esi,esi
	je Block31

 Block5:
	lea ecx,[esp+0xC]
	call CWorldMapDlg::_ctor_default
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0x1694],0
	call TSecType<unsigned long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0x18]
	call CWorldMapDlg::CreateWorldMapDlg
	test eax,eax
	je Block7

 Block6:
	lea ecx,[esp+0xC]
	call CDialog::DoModal
	jmp Block11

 Block7:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x2098],0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	je Block9

 Block8:
	mov ecx,esp
	push 0x11A
	push ecx
	jmp Block10

 Block9:
	mov edx,esp
	push 0x118
	push edx

 Block10:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block11:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1694],0xFFFFFFFF
	call CWorldMapDlg::~CWorldMapDlg
	jmp Block31

 Block12:
	mov eax,dword ptr [ecx+0xAFC]
	dec eax
	cdq
	mov esi,3
	idiv esi
	jmp Block29

 Block13:
	mov eax,dword ptr [ecx+0xAFC]

 Block14:
	inc eax
	cdq
	mov esi,3
	idiv esi
	jmp Block29

 Block15:
	test eax,eax
	jne Block31

 Block16:
	mov eax,dword ptr [esp+0x169C]
	add eax,0xFFFFFC18
	cmp eax,3
	ja Block31

 Block17:
	cmp EAX, 0
je Block18
cmp EAX, 1
je Block20
cmp EAX, 2
je Block23
cmp EAX, 3
je Block28


 Block18:
	mov eax,dword ptr [ecx+0xAFC]
	mov dword ptr [ecx+0xB0C],eax
	test eax,eax
	jne Block14

 Block19:
	lea edx,[eax+2]
	jmp Block29

 Block20:
	mov eax,dword ptr [ecx+0xB0C]
	test eax,eax
	jge Block22

 Block21:
	mov eax,1

 Block22:
	mov dword ptr [ecx+0xAFC],eax
	jmp Block30

 Block23:
	call get_field
	mov esi,eax
	test esi,esi
	je Block31

 Block24:
	lea ecx,[esp+0xB4C]
	call CWorldMapDlg::_ctor_default
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0x1694],1
	call TSecType<unsigned long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0xB58]
	call CWorldMapDlg::CreateWorldMapDlg
	test eax,eax
	je Block26

 Block25:
	lea ecx,[esp+0xB4C]
	call CDialog::DoModal
	jmp Block27

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x118
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block27:
	lea ecx,[esp+0xB4C]
	mov dword ptr [esp+0x1694],0xFFFFFFFF
	call CWorldMapDlg::~CWorldMapDlg
	jmp Block31

 Block28:
	xor edx,edx
	cmp dword ptr [ecx+0xAFC],edx
	sete dl

 Block29:
	mov dword ptr [ecx+0xAFC],edx

 Block30:
	call CUIMiniMap::ToggleMap

 Block31:
	mov ecx,dword ptr [esp+0x168C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1690
	ret 4
}
}
// CUIMiniMap::LoadFootHold
_SUB_EXCEPTION_HANDLER(3FA030)
__SUB_CLASS_THIS(003FA030, __thiscall, 56211,  CUIMiniMap, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3FA030
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x12C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x140]
	mov dword ptr fs:[0],eax
	mov edx,ecx
	mov dword ptr [esp+0x6C],edx
	mov eax,dword ptr [esp+0x150]
	xor esi,esi
	cmp eax,esi
	sete cl
	mov dword ptr [esp+0x148],esi
	test cl,cl
	je Block5

 Block1:
	cmp eax,esi

 Block2:
	mov dword ptr [esp+0x148],0xFFFFFFFF
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	xor eax,eax
	jmp Block229

 Block5:
	mov ecx,edx
	call CUIMiniMap::ReleaseFootHoldData
	mov ecx,dword ptr [esp+0x150]
	cmp ecx,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0xA4]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x14C],1
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	lea ecx,[esp+0x24]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x148],3
	cmp eax,esi
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x148],4
	mov dword ptr [esp+0x94],esi

 Block15:
	mov esi,dword ptr [esp+0x20]
	xor edi,edi
	cmp esi,edi
	je Block6

 Block16:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x94]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block222

 Block17:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x28]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x24]
	cmp esi,edi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push eax
	call __wtoi
	add esp,4
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block22

 Block21:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ecx,dword ptr [esp+0x15C]
	mov byte ptr [esp+0x154],6
	cmp ecx,edi
	je Block6

 Block23:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x158],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x150],7
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	cmp eax,edi
	je Block26

 Block24:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x98]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x98]
	cmp eax,edi
	mov ebp,ecx
	mov dword ptr [esp+0x28],ebp
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block11

 Block26:
	mov ebx,8
	mov byte ptr [esp+0x148],9
	cmp word ptr [esp+0xB0],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0xB8]
	xor edx,edx
	mov word ptr [esp+0xB0],dx
	cmp eax,edi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0xB0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp ebp,edi
	sete al
	test al,al
	jne Block155

 Block31:
	cmp ebp,edi
	je Block6

 Block32:
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x14C],0xA
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block36

 Block35:
	cmp eax,0x80004002
	jne Block11

 Block36:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x148],0xC
	cmp eax,edi
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x148],0xD
	mov dword ptr [esp+0x7C],edi
	jmp Block40

 Block39:
	mov ebp,dword ptr [esp+0x28]

 Block40:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block6

 Block41:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block138

 Block42:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x40]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x3C]
	test ebx,ebx
	je Block44

 Block43:
	mov eax,dword ptr [ebx]
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	push eax
	call __wtoi
	add esp,4
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block47

 Block46:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	lea edx,[esp+0x10C]
	mov byte ptr [esp+0x154],0xF
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x158],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x150],0x10
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x50],edi
	test eax,eax
	je Block50

 Block48:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x84]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x84]
	mov edi,ecx
	mov dword ptr [esp+0x50],edi
	test eax,eax
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block11

 Block50:
	cmp word ptr [esp+0x100],8
	mov byte ptr [esp+0x148],0x12
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x108]
	xor edx,edx
	mov word ptr [esp+0x100],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x100]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	test edi,edi
	sete al
	test al,al
	jne Block164

 Block55:
	test edi,edi
	je Block6

 Block56:
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	xor esi,esi
	mov ecx,esp
	mov byte ptr [esp+0x14C],0x13
	mov dword ptr [esp+0x58],esi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block58:
	lea ecx,[esp+0x58]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block60

 Block59:
	cmp eax,0x80004002
	jne Block11

 Block60:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x148],0x15
	cmp eax,esi
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x148],0x16
	mov dword ptr [esp+0x9C],esi
	jmp Block64

 Block64:
	mov edi,dword ptr [esp+0x54]
	test edi,edi
	je Block6

 Block65:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x9C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block121

 Block66:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x5C]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x58]
	test ebx,ebx
	je Block68

 Block67:
	mov eax,dword ptr [ebx]
	jmp Block69

 Block68:
	xor eax,eax

 Block69:
	push eax
	call __wtoi
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],eax
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block71

 Block70:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	mov esi,dword ptr [esp+0x5C]
	lea edx,[esp+0xEC]
	mov byte ptr [esp+0x154],0x18
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x158],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x150],0x19
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x70],edi
	test eax,eax
	je Block74

 Block72:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x80]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x80]
	mov edi,ecx
	mov dword ptr [esp+0x70],edi
	test eax,eax
	jge Block74

 Block73:
	cmp eax,0x80004002
	jne Block11

 Block74:
	mov ebp,8
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0xE0],bp
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0xE8]
	xor edx,edx
	mov word ptr [esp+0xE0],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0xE0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	test edi,edi
	sete al
	test al,al
	jne Block190

 Block79:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x937
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x150],0x1C
	test edi,edi
	je Block6

 Block80:
	lea edx,[esp+0x128]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esp+0x88],eax
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0x120],bp
	jne Block87

 Block81:
	xor eax,eax
	mov word ptr [esp+0x120],ax
	mov eax,dword ptr [esp+0x128]
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block83:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block84:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x939
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xC8]
	mov byte ptr [esp+0x150],0x1E
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esp+0x90],eax
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0xC0],bp
	jne Block88

 Block85:
	mov eax,dword ptr [esp+0xC8]
	xor ecx,ecx
	mov word ptr [esp+0xC0],cx
	test eax,eax
	je Block89

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block87:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x120]
	push ecx
	call esi
	jmp Block84

 Block88:
	lea edx,[esp+0xC0]
	push edx
	call esi

 Block89:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x938
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xD8]
	push ecx
	mov byte ptr [esp+0x154],0x20
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x21
	call get_int32
	add esp,8
	mov dword ptr [esp+0xA0],eax
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0xD0],bp
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0xD8]
	xor edx,edx
	mov word ptr [esp+0xD0],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0xD0]
	push eax
	call esi

 Block93:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x93A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xF8]
	mov byte ptr [esp+0x150],0x22
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x23
	call get_int32
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0xF0],bp
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0xF0],ax
	mov eax,dword ptr [esp+0xF8]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0xF0]
	push ecx
	call esi

 Block97:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x94],esp
	push 0x79F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x118]
	mov byte ptr [esp+0x150],0x24
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x25
	call get_int32
	add esp,8
	mov ebx,eax
	mov byte ptr [esp+0x148],0x1B
	cmp word ptr [esp+0x110],bp
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x118]
	xor ecx,ecx
	mov word ptr [esp+0x110],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x110]
	push edx
	call esi

 Block101:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x94],esp
	push 0x7A0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x138]
	push ecx
	mov byte ptr [esp+0x154],0x26
	mov ecx,edi
	mov byte ptr [esp+0x154],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x27
	call get_int32
	add esp,8
	cmp word ptr [esp+0x130],8
	mov ebp,eax
	mov byte ptr [esp+0x148],0x1B
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x138]
	xor edx,edx
	mov word ptr [esp+0x130],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x130]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<SimpleMiniMap_FootHold>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0xAC],esi
	mov ecx,dword ptr [esp+0x88]
	mov edx,dword ptr [esp+0xA0]
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esi],ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [esi+8],edx
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0xC],ecx
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr [esi+0x10],eax
	lea edx,[esp+0xA8]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x14],ebx
	push edx
	lea eax,[esp+0x18]
	mov dword ptr [esi+0x18],ebp
	push eax
	add ecx,0xC38
	mov byte ptr [esp+0x150],0x28
	mov dword ptr [esi+0x1C],0
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::Insert
	add esi,0xFFFFFFF0
	lea ebp,[esi+4]
	push ebp
	mov byte ptr [esp+0x14C],0x1B
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block108

 Block106:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block108

 Block107:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block108:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	xor ebx,ebx
	push edi
	mov dword ptr [esp+0xB0],ebx
	mov byte ptr [esp+0x14C],0x17
	call edx
	mov esi,dword ptr [esp+0x58]
	mov byte ptr [esp+0x148],0x16
	cmp esi,ebx
	je Block116

 Block109:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block115

 Block110:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block112

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block112:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block114

 Block113:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block114:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block115:
	mov dword ptr [esp+0x58],ebx

 Block116:
	cmp word ptr [esp+0x5C],8
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block64

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block119:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block64

 Block120:
	jmp Block11

 Block121:
	mov esi,8
	mov byte ptr [esp+0x148],0x15
	cmp word ptr [esp+0x5C],si
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x14C],0x12
	call eax
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x14C],0xE
	call edx
	mov edi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x148],0xD
	test edi,edi
	je Block133

 Block126:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block132

 Block127:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block129:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block131

 Block130:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block131:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block132:
	mov dword ptr [esp+0x3C],0

 Block133:
	cmp word ptr [esp+0x40],si
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block39

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block136:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block11

 Block137:
	jmp Block39

 Block138:
	mov edi,8
	mov byte ptr [esp+0x148],0xC
	cmp word ptr [esp+0x40],di
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x14C],9
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x14C],5
	call edx
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x148],4
	test esi,esi
	je Block150

 Block143:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block149

 Block144:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block146:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block148

 Block147:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block148:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block149:
	mov dword ptr [esp+0x24],0

 Block150:
	cmp word ptr [esp+0x2C],di
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block15

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block153:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block15

 Block154:
	jmp Block11

 Block155:
	mov byte ptr [esp+0x148],5
	cmp ebp,edi
	je Block157

 Block156:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block157:
	cmp esi,edi
	je Block159

 Block158:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block159:
	mov byte ptr [esp+0x148],3
	cmp word ptr [esp+0x2C],bx
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x14C],0
	call edx
	mov eax,dword ptr [esp+0x150]
	cmp eax,edi
	jmp Block2

 Block164:
	mov byte ptr [esp+0x148],0xE
	test edi,edi
	je Block166

 Block165:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block166:
	mov byte ptr [esp+0x148],0xD
	test ebx,ebx
	je Block173

 Block167:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block173

 Block168:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block170:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block172

 Block171:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block172:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block173:
	mov edi,8
	mov byte ptr [esp+0x148],0xC
	cmp word ptr [esp+0x40],di
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x14C],9
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x14C],5
	call edx
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x148],4
	test esi,esi
	je Block184

 Block178:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block184

 Block179:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block181:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block183

 Block182:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block184:
	cmp word ptr [esp+0x2C],di

 Block185:
	mov byte ptr [esp+0x148],3
	jne Block188

 Block186:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block189:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x14C],0
	call edx
	mov eax,dword ptr [esp+0x150]
	test eax,eax
	jmp Block2

 Block190:
	mov byte ptr [esp+0x148],0x17
	test edi,edi
	je Block192

 Block191:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block192:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x148],0x16
	test ebx,ebx
	je Block199

 Block193:
	lea edx,[ebx+8]
	push edx
	call ebp
	test eax,eax
	jne Block199

 Block194:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block196:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block198

 Block197:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block198:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block199:
	mov ebx,8
	mov byte ptr [esp+0x148],0x15
	cmp word ptr [esp+0x5C],bx
	jne Block202

 Block200:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block203:
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x14C],0x12
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x14C],0xE
	call edx
	mov edi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x148],0xD
	test edi,edi
	je Block210

 Block204:
	lea eax,[edi+8]
	push eax
	call ebp
	test eax,eax
	jne Block210

 Block205:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block207:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block209

 Block208:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block209:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block210:
	mov byte ptr [esp+0x148],0xC
	cmp word ptr [esp+0x40],bx
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x14C],9
	call edx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x14C],5
	call edx
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x148],4
	test edi,edi
	je Block221

 Block215:
	lea eax,[edi+8]
	push eax
	call ebp
	test eax,eax
	jne Block221

 Block216:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block218

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block218:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block220

 Block219:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block220:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block221:
	cmp word ptr [esp+0x2C],bx
	jmp Block185

 Block222:
	mov ebx,dword ptr [esp+0x6C]
	mov ecx,ebx
	call CUIMiniMap::SortFootHold
	mov ecx,ebx
	call CUIMiniMap::ReleaseFootHoldMapData
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x148],3
	jne Block225

 Block223:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x14C],0
	call eax
	mov eax,dword ptr [esp+0x150]
	mov dword ptr [esp+0x148],0xFFFFFFFF
	cmp eax,edi
	je Block228

 Block227:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block228:
	mov eax,1

 Block229:
	mov ecx,dword ptr [esp+0x140]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x138
	ret 4
}
}
// CUIMiniMap::CUIMiniMap
_SUB_EXCEPTION_HANDLER(3FFD20)
__SUB_CLASS_THIS(003FFD20, __thiscall, 56182,  CUIMiniMap, void, CWvsContext*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3FFD20
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
	mov dword ptr [esp+0x18],esi
	xor edi,edi
	push edi
	push edi
	push edi
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push edi
	push 4
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x88],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIMiniMap>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMiniMap>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMiniMap::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMiniMap::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMiniMap::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB0C],0xFFFFFFFF
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	lea ecx,[esi+0xB60]
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, unsigned long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, unsigned long, long>::_CalcAutoGrow
	lea ecx,[esi+0xB78]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, tagPOINT, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0xB90]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZXString<char>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZXString<char>, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0xBAC],edi
	mov dword ptr [esi+0xBB4],edi
	mov dword ptr [esi+0xBBC],edi
	mov dword ptr [esi+0xBC4],edi
	mov dword ptr [esi+0xBCC],edi
	mov dword ptr [esi+0xBD0],edi
	mov dword ptr [esi+0xBD4],edi
	mov dword ptr [esi+0xBD8],edi
	mov dword ptr [esi+0xBDC],edi
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esi+0xBE4],edi
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esi+0xBEC],edi
	mov dword ptr [esi+0xBF0],edi
	mov dword ptr [esi+0xBF4],edi
	mov dword ptr [esi+0xBF8],edi
	mov dword ptr [esi+0xBFC],edi
	mov dword ptr [esi+0xC00],edi
	mov dword ptr [esi+0xC04],edi
	mov dword ptr [esi+0xC08],edi
	mov dword ptr [esi+0xC0C],edi
	mov dword ptr [esi+0xC10],edi
	mov dword ptr [esi+0xC14],edi
	mov dword ptr [esi+0xC18],edi
	mov dword ptr [esi+0xC1C],edi
	mov dword ptr [esi+0xC20],edi
	mov dword ptr [esi+0xC24],edi
	mov dword ptr [esi+0xC28],edi
	mov dword ptr [esi+0xC2C],edi
	mov dword ptr [esi+0xC30],edi
	mov dword ptr [esi+0xC34],edi
	lea ecx,[esi+0xC38]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::_CalcAutoGrow
	mov dword ptr [esi+0xC50],edi
	int 3// TODO: 	mov dword ptr [esi+0xC54],offset ZList<ZRef<SimpleMiniMap_LadderRope>>::`vftable'
	mov dword ptr [esi+0xC5C],edi
	mov dword ptr [esi+0xC60],edi
	mov dword ptr [esi+0xC64],edi
	mov dword ptr [esi+0xC68],edi
	mov dword ptr [esi+0xC6C],edi
	mov dword ptr [esi+0xC70],edi
	mov dword ptr [esi+0xC74],edi
	mov dword ptr [esi+0xC78],edi
	mov dword ptr [esi+0xC7C],edi
	mov dword ptr [esi+0xC80],edi
	lea ebp,[esi+0xC94]
	mov dword ptr [esi+0xC8C],edi
	mov dword ptr [esi+0xC90],edi
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0xC98],edi
	lea ebx,[esi+0xC9C]
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0xCA0],edi
	mov dword ptr [esi+0xCA4],edi
	mov dword ptr [esi+0xCA8],edi
	mov dword ptr [esi+0xCAC],edi
	mov dword ptr [esi+0xCB0],edi
	mov dword ptr [esi+0xCB4],edi
	mov dword ptr [esi+0xCB8],edi
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
	mov dword ptr [esi+0xCE4],edi
	mov dword ptr [esi+0xCE8],edi
	mov dword ptr [esi+0xCEC],edi
	mov dword ptr [esi+0xCF0],edi
	mov dword ptr [esi+0xCF4],edi
	mov dword ptr [esi+0xCF8],edi
	mov dword ptr [esi+0xCFC],edi
	mov dword ptr [esi+0xD00],edi
	mov dword ptr [esi+0xD04],edi
	mov dword ptr [esi+0xD08],edi
	mov dword ptr [esi+0xD0C],edi
	mov dword ptr [esi+0xD10],edi
	mov dword ptr [esi+0xD14],edi
	mov dword ptr [esi+0xD18],edi
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x8C],0x52
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x8C],0x53
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x6DA
	push edx
	mov byte ptr [esp+0xA4],0x54
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x9C],0x55
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x74]
	mov byte ptr [esp+0x9C],0x54
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],0x56
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],0x58
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x88],0x59
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x88],0x5A
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x113E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],0x5B
	cmp ecx,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x5C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
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
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x113F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x94],0x5D
	cmp dword ptr [esp+0x20],edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x5C]
	push eax
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x5E
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1140
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x5F
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x60
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xC98]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1141
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x61
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x62
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block52

 Block50:
	cmp eax,0x80004002
	je Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block59

 Block53:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block56:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1142
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x63
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x64
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCA0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block60

 Block57:
	cmp eax,0x80004002
	je Block60

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x50]
	push ecx
	call ebx
	jmp Block56

 Block60:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block64:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1143
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x65
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x66
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCA4]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block71:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1144
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x67
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x68
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCA8]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block78:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AC5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x69
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x6A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCAC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block81

 Block79:
	cmp eax,0x80004002
	je Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block85:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1145
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x6B
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x6C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCB0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block92:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x59B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x6D
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x6E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCB4]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block99:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1146
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x6F
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x70
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCB8]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block102

 Block100:
	cmp eax,0x80004002
	je Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block106:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1147
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x71
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x72
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCBC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block109

 Block107:
	cmp eax,0x80004002
	je Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block113:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1148
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x73
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x74
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCC0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block116

 Block114:
	cmp eax,0x80004002
	je Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block120:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1149
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x75
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x76
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCC4]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block123

 Block121:
	cmp eax,0x80004002
	je Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block127:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5EE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x77
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x78
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCC8]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block130

 Block128:
	cmp eax,0x80004002
	je Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block134:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x114A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x79
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x7A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCCC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block137

 Block135:
	cmp eax,0x80004002
	je Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block141:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x114B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x7B
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x7C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCD0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block144

 Block142:
	cmp eax,0x80004002
	je Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block148:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x114C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x7D
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x7E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCD4]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block151

 Block149:
	cmp eax,0x80004002
	je Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block155:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x114D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x7F
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x80
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCD8]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block158

 Block156:
	cmp eax,0x80004002
	je Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block162:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x114E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x81
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x82
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCDC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block165

 Block163:
	cmp eax,0x80004002
	je Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block169:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x114F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0x83
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x84
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCE0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block172

 Block170:
	cmp eax,0x80004002
	je Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block175

 Block173:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block176:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1150
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x94],0x85
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x86
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCE4]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block179

 Block177:
	cmp eax,0x80004002
	je Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block182

 Block180:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block183:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1151
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],0x87
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x90],0x88
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xCE8]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block186

 Block184:
	cmp eax,0x80004002
	je Block186

 Block185:
	push eax
	call _com_issue_error

 Block186:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],0x5A
	jne Block189

 Block187:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block190:
	mov eax,dword ptr [esi+0xC98]
	mov ebx,dword ptr [esi+0xCEC]
	cmp ebx,eax
	je Block195

 Block191:
	mov dword ptr [esi+0xCEC],eax
	cmp eax,edi
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block193:
	cmp ebx,edi
	je Block195

 Block194:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block195:
	mov eax,dword ptr [esi+0xCC0]
	mov ebx,dword ptr [esi+0xCF0]
	cmp ebx,eax
	je Block200

 Block196:
	mov dword ptr [esi+0xCF0],eax
	cmp eax,edi
	je Block198

 Block197:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block198:
	cmp ebx,edi
	je Block200

 Block199:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block200:
	mov eax,dword ptr [esi+0xCAC]
	mov ebx,dword ptr [esi+0xCF4]
	cmp ebx,eax
	je Block205

 Block201:
	mov dword ptr [esi+0xCF4],eax
	cmp eax,edi
	je Block203

 Block202:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block203:
	cmp ebx,edi
	je Block205

 Block204:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block205:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call ebx
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block207

 Block206:
	push eax
	call _com_issue_error

 Block207:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x8C],0x89
	call ebx
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block209

 Block208:
	push eax
	call _com_issue_error

 Block209:
	push edi
	push edi
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x19EF
	mov bl,0x8A
	push edx
	mov byte ptr [esp+0xA4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x9C],0x8B
	cmp dword ptr [_D_G_RM],edi
	jne Block211

 Block210:
	push 0x80004003
	call _com_issue_error

 Block211:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],0x8C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xD18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block214

 Block212:
	cmp eax,0x80004002
	je Block214

 Block213:
	push eax
	call _com_issue_error

 Block214:
	mov byte ptr [esp+0x88],bl
	mov ebx,8
	cmp word ptr [esp+0x70],bx
	jne Block217

 Block215:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,edi
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov byte ptr [esp+0x88],0x89
	cmp word ptr [esp+0x40],bx
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov byte ptr [esp+0x88],0x5A
	cmp word ptr [esp+0x50],bx
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x8C],0x52
	call edx
	mov eax,esi
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
// CUIMiniMap::UpdateRect
__SUB_CLASS_THIS(003F6B10, __thiscall, 56214,  CUIMiniMap, void, tagRECT&) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xB08],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0xAFC],0
	jne Block3

 Block2:
	mov ecx,dword ptr [esp+4]
	mov eax,dword ptr [ecx+0xC]
	push ebx
	mov ebx,dword ptr [ecx+8]
	push ebp
	push esi
	mov esi,dword ptr [ecx]
	push edi
	mov edi,dword ptr [ecx+4]
	sub eax,edi
	cdq
	sub eax,edx
	mov ebp,eax
	sub ebx,esi
	mov eax,ebx
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0xC]
	sar ebp,1
	add edx,ebp
	push edx
	mov edx,dword ptr [ecx+8]
	sar eax,1
	add edx,eax
	push edx
	sub edi,ebp
	push edi
	sub esi,eax
	push esi
	push ecx
	call dword ptr [ZImports::_SetRect]
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block3:
	ret 4
}
}
// CUIMiniMap::CalculateScr
__SUB_CLASS_THIS0(003F6790, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB30]
	push edi
	mov edi,dword ptr [esi+0xB10]
	shl edi,cl
	mov eax,edi
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [esi+0xB3C]
	sar edx,1
	sub eax,edx
	mov edx,dword ptr [esi+0xB28]
	mov ebx,edx
	neg ebx
	cmp eax,ebx
	mov dword ptr [esi+0xB4C],eax
	jge Block2

 Block1:
	mov dword ptr [esi+0xB4C],ebx

 Block2:
	mov eax,dword ptr [esi+0xB20]
	sub eax,edx
	sub eax,edi
	cmp dword ptr [esi+0xB4C],eax
	jle Block4

 Block3:
	mov dword ptr [esi+0xB4C],eax

 Block4:
	mov eax,dword ptr [esi+0xB4C]
	mov edi,dword ptr [esi+0xB14]
	mov ebx,dword ptr [esi+0xB2C]
	add eax,edx
	sar eax,cl
	shl edi,cl
	mov dword ptr [esi+0xB4C],eax
	mov eax,edi
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [esi+0xB40]
	sar edx,1
	sub eax,edx
	mov edx,ebx
	neg edx
	cmp eax,edx
	mov dword ptr [esi+0xB50],eax
	jge Block6

 Block5:
	mov dword ptr [esi+0xB50],edx

 Block6:
	mov eax,dword ptr [esi+0xB24]
	sub eax,ebx
	sub eax,edi
	cmp dword ptr [esi+0xB50],eax
	jle Block8

 Block7:
	mov dword ptr [esi+0xB50],eax

 Block8:
	mov eax,dword ptr [esi+0xB50]
	add eax,ebx
	sar eax,cl
	pop edi
	mov dword ptr [esi+0xB50],eax
	pop esi
	pop ebx
	ret
}
}
// CUIMiniMap::Update
_SUB_EXCEPTION_HANDLER(4053A0)
__SUB_CLASS_THIS0(004053A0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4053A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x210
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x208],eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x220]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov esi,ecx
	mov dword ptr [esp+0x14],ebx
	cmp dword ptr [esi+0x14],ebx
	je Block343

 Block1:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],ebx
	je Block343

 Block2:
	cmp dword ptr [esi+0xB58],ebx
	lea ecx,[esi+0xB58]
	sete al
	test al,al
	jne Block343

 Block3:
	cmp dword ptr [esi+0xAFC],2
	je Block338

 Block4:
	cmp dword ptr [esi+0xC90],ebx
	je Block338

 Block5:
	push 1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putvisible
	mov eax,dword ptr [_D_NCOUNTER__3]
	inc eax
	mov dword ptr [_D_NCOUNTER__3],eax
	and eax,0x80000003
	jns Block7

 Block6:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block7:
	jne Block343

 Block8:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3F28],ebx
	je Block343

 Block9:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x2C],edi
	add edi,4
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x58],edi
	call edx
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xB3C],eax
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x44]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,esi
	mov dword ptr [esi+0xB40],eax
	call CUIMiniMap::CalculateScr
	mov ecx,3
	xor edi,edi
	mov word ptr [esp+0x1A4],cx
	mov dword ptr [esp+0x1AC],edi
	lea edx,[esp+0x1A4]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esi+0xB58]
	mov dword ptr [esp+0x230],edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x1A4]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [esp+0x1B4],cx
	mov dword ptr [esp+0x1BC],1
	mov byte ptr [esp+0x228],cl
	cmp dword ptr [esp+0x40],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [esi+0x24]
	lea edx,[esp+0x1B4]
	push edx
	mov edx,dword ptr [esi+0xB48]
	push eax
	sub ecx,0x12
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push edx
	push 9
	lea eax,[esp+0x1A8]
	push eax
	call IWzCanvas::SetClipRect
	lea ecx,[esp+0x1B4]
	mov byte ptr [esp+0x228],5
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [esi+0x24]
	mov eax,dword ptr [esi+0xB48]
	push 0xFFFFFF
	push ecx
	mov ecx,dword ptr [esp+0x48]
	sub edx,0x12
	push edx
	push eax
	push 9
	call IWzCanvas::DrawRectangle
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [esi+0x24]
	mov eax,dword ptr [esi+0xB48]
	push 0xA0000000
	push ecx
	mov ecx,dword ptr [esp+0x48]
	sub edx,0x12
	push edx
	push eax
	push 9
	call IWzCanvas::DrawRectangle
	mov eax,dword ptr [esi+0xB08]
	cmp eax,1
	jne Block13

 Block12:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [esi+0xB10]
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esi+0xB50]
	push eax
	push ecx
	push edx
	mov edx,dword ptr [esi+0xB4C]
	push edx
	push eax
	mov eax,dword ptr [esi+0xB54]
	push ecx
	mov ecx,dword ptr [esi+0xB44]
	push 0xFF
	push eax
	mov eax,dword ptr [esi+0xB48]
	push eax
	mov byte ptr [esp+0x250],6
	push ecx
	jmp Block17

 Block13:
	cmp eax,edi
	jne Block18

 Block14:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x228],7
	lea eax,[esi+0xC6C]
	cmp dword ptr [esi+0xAFC],edi
	je Block16

 Block15:
	lea eax,[esi+0xC68]

 Block16:
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [esi+0xB10]
	mov dword ptr [esp+0x18],edx
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esi+0xB50]
	push eax
	push ecx
	push edx
	mov edx,dword ptr [esi+0xB4C]
	push edx
	mov edx,dword ptr [esi+0xB44]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov ecx,dword ptr [esi+0xB48]
	push 0xFF
	push eax
	push ecx
	push edx

 Block17:
	mov ecx,dword ptr [esp+0x6C]
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t

 Block18:
	int 3// TODO: 	mov eax,offset ZList<tagPOINT>::`vftable'
	mov dword ptr [esp+0xA8],eax
	mov dword ptr [esp+0xB0],edi
	mov dword ptr [esp+0xB4],edi
	mov dword ptr [esp+0xB8],edi
	mov dword ptr [esp+0xE4],eax
	mov dword ptr [esp+0xEC],edi
	mov dword ptr [esp+0xF0],edi
	mov dword ptr [esp+0xF4],edi
	mov dword ptr [esp+0xBC],eax
	mov dword ptr [esp+0xC4],edi
	mov dword ptr [esp+0xC8],edi
	mov dword ptr [esp+0xCC],edi
	mov dword ptr [esp+0x94],eax
	mov dword ptr [esp+0x9C],edi
	mov dword ptr [esp+0xA0],edi
	mov dword ptr [esp+0xA4],edi
	mov dword ptr [esp+0xD0],eax
	mov dword ptr [esp+0xD8],edi
	mov dword ptr [esp+0xDC],edi
	mov dword ptr [esp+0xE0],edi
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x88],edi
	mov dword ptr [esp+0x8C],edi
	mov dword ptr [esp+0x90],edi
	mov dword ptr [esp+0xF8],eax
	mov dword ptr [esp+0x100],edi
	mov dword ptr [esp+0x104],edi
	mov dword ptr [esp+0x108],edi
	mov dword ptr [esp+0x134],eax
	mov dword ptr [esp+0x13C],edi
	mov dword ptr [esp+0x140],edi
	mov dword ptr [esp+0x144],edi
	mov dword ptr [esp+0x148],eax
	mov dword ptr [esp+0x150],edi
	mov dword ptr [esp+0x154],edi
	mov dword ptr [esp+0x158],edi
	mov dword ptr [esp+0x120],eax
	mov dword ptr [esp+0x128],edi
	mov dword ptr [esp+0x12C],edi
	mov dword ptr [esp+0x130],edi
	mov eax,dword ptr [TSingleton<CEmployeePool>::ms_pInstance]
	mov eax,dword ptr [eax+0x28]
	mov byte ptr [esp+0x228],0x11
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block26

 Block19:
	lea ecx,[esp+0x3C]
	push ecx
	call ZList<EMPLOYEEENTRY>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+0x10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	add esp,4
	lea eax,[esp+0x44]
	push eax
	call edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+0x19E8]
	mov edi,dword ptr [edi+0x10]
	cmp eax,dword ptr [edi+0x88]
	jne Block21

 Block20:
	lea ecx,[esp+0xF8]
	call ZList<tagPOINT>::AddTail_
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	jmp Block24

 Block21:
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xCC4]
	jne Block23

 Block22:
	lea eax,[esi+0xC00]

 Block23:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block24:
	cmp dword ptr [esp+0x3C],0
	jne Block19

 Block25:
	xor edi,edi

 Block26:
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [eax+0x30]
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block54

 Block27:
	nop

 Block28:
	lea ecx,[esp+0x3C]
	push ecx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x38],edi
	test edi,edi
	je Block30

 Block29:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [edi+0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x22C],0x12
	call eax
	call get_field
	test eax,eax
	je Block38

 Block31:
	call get_field
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0x13
	jne Block38

 Block32:
	mov edi,dword ptr [edi+0x10]
	mov eax,dword ptr [edi+0x3A80]
	sub eax,0
	je Block37

 Block33:
	sub eax,1
	je Block36

 Block34:
	sub eax,1
	jne Block53

 Block35:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x48]
	push edx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0x120]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block36:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0x148]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block37:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x190]
	push eax
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0x134]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block38:
	mov ecx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ecx+0x3790]
	mov eax,dword ptr [edi+0x10]
	cmp ecx,dword ptr [eax+0x19E8]
	jne Block40

 Block39:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x180]
	push eax
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	push eax
	lea ecx,[esp+0x84]
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block40:
	mov eax,dword ptr [eax+0x19E8]
	mov ecx,dword ptr [esp+0x30]
	push eax
	call CWvsContext::IsPartyMemberID
	test eax,eax
	je Block44

 Block41:
	mov edi,dword ptr [edi+0x10]
	mov ecx,dword ptr [esp+0x30]
	mov edi,dword ptr [edi+0x19E8]
	call CWvsContext::GetPartyBossID
	cmp eax,edi
	jne Block43

 Block42:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x170]
	push edx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0xD0]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block43:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x168]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0x94]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block44:
	mov eax,dword ptr [edi+0x10]
	mov eax,dword ptr [eax+0x19EC]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xFFFFFFFF
	push eax
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [esp+0x34]
	call CWvsContext::GetGuildMemberIDByName
	mov ecx,dword ptr [edi+0x10]
	cmp dword ptr [ecx+0x19E8],eax
	mov ecx,dword ptr [esp+0x30]
	jne Block48

 Block45:
	lea edx,[esp+0x1F0]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	call CWvsContext::GetGuildMemberDataByIdx
	mov edi,dword ptr [edi+0x10]
	mov edi,dword ptr [edi+0x19E8]
	cmp dword ptr [esp+0x18],edi
	jne Block47

 Block46:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x178]
	push edx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0xBC]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block47:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x160]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	lea ecx,[esp+0xE4]
	push eax
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block48:
	mov dword ptr [esp+0x1C8],0
	mov edi,dword ptr [edi+0x10]
	mov edi,dword ptr [edi+0x19E8]
	lea edx,[esp+0x1C8]
	push edx
	push edi
	call CWvsContext::GetFriendByID
	cmp dword ptr [esp+0x1C8],0
	je Block50

 Block49:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x188]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	push eax
	lea ecx,[esp+0xAC]
	call ZList<tagPOINT>::Insert
	jmp Block53

 Block50:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xC98]
	jne Block52

 Block51:
	lea eax,[esi+0xBD4]

 Block52:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block53:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x228],0x11
	call ZRef<USERREMOTE_ENTRY>::~ZRef<USERREMOTE_ENTRY>
	cmp dword ptr [esp+0x3C],0
	jne Block28

 Block54:
	lea ecx,[esi+0xCF8]
	push offset _S_
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xCFC]
	push offset _S_
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xD00]
	push offset _S_
	call ZXString<char>::AssignCStr
	lea edi,[esi+0xD0C]
	push offset _S_
	mov ecx,edi
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xD10]
	push offset _S_
	call ZXString<char>::AssignCStr
	push offset _S_
	mov ecx,edi
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xD04]
	push offset _S_
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xD08]
	push offset _S_
	call ZXString<char>::AssignCStr
	lea ecx,[esi+0xB78]
	call ZMap<unsigned long, tagPOINT, unsigned long>::GetHeadPosition
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block162

 Block55:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esi+0xB78]
	call ZMap<unsigned long, tagPOINT, unsigned long>::GetNext
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x24],eax
	call CUserPool::GetUser
	test eax,eax
	jne Block161

 Block56:
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	jge Block89

 Block57:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jge Block68

 Block58:
	mov eax,dword ptr [esi+0xCF8]
	test eax,eax
	je Block61

 Block59:
	cmp dword ptr [eax-4],0
	je Block61

 Block60:
	push offset _S___4
	lea eax,[esp+0x7C]
	push eax
	lea ecx,[esi+0xCF8]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea ecx,[esp+0x24]
	push ecx
	or ebx,1
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x13
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea edx,[esp+0x80]
	push edx
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,2
	mov dword ptr [esp+0x228],0x14
	mov dword ptr [esp+0x14],ebx
	jmp Block62

 Block61:
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block62:
	push eax
	lea ecx,[esi+0xCF8]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x13
	test bl,2
	je Block65

 Block63:
	mov eax,dword ptr [esp+0x7C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov dword ptr [esp+0x228],0x11
	test bl,1
	je Block161

 Block66:
	mov eax,dword ptr [esp+0x78]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block68:
	cmp eax,dword ptr [esi+0xB14]
	jle Block79

 Block69:
	mov eax,dword ptr [esi+0xD0C]
	test eax,eax
	je Block72

 Block70:
	cmp dword ptr [eax-4],0
	je Block72

 Block71:
	push offset _S___4
	lea ecx,[esp+0x68]
	push ecx
	lea ecx,[esi+0xD0C]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea edx,[esp+0x24]
	or ebx,4
	push edx
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x15
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea eax,[esp+0x78]
	push eax
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,8
	mov dword ptr [esp+0x228],0x16
	mov dword ptr [esp+0x14],ebx
	jmp Block73

 Block72:
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block73:
	push eax
	lea ecx,[esi+0xD0C]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x15
	test bl,8
	je Block76

 Block74:
	mov eax,dword ptr [esp+0x74]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov dword ptr [esp+0x228],0x11
	test bl,4
	je Block161

 Block77:
	mov eax,dword ptr [esp+0x64]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block79:
	mov eax,dword ptr [esi+0xD04]
	test eax,eax
	je Block82

 Block80:
	cmp dword ptr [eax-4],0
	je Block82

 Block81:
	push offset _S___4
	lea edx,[esp+0x6C]
	push edx
	lea ecx,[esi+0xD04]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea eax,[esp+0x24]
	or ebx,0x10
	push eax
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x17
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x20
	mov dword ptr [esp+0x228],0x18
	mov dword ptr [esp+0x14],ebx
	jmp Block83

 Block82:
	push 0
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block83:
	push eax
	lea ecx,[esi+0xD04]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x17
	test bl,0x20
	je Block86

 Block84:
	mov eax,dword ptr [esp+0x60]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov dword ptr [esp+0x228],0x11
	test bl,0x10
	je Block161

 Block87:
	mov eax,dword ptr [esp+0x68]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block89:
	cmp eax,dword ptr [esi+0xB10]
	jle Block122

 Block90:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	jge Block101

 Block91:
	mov eax,dword ptr [esi+0xD00]
	test eax,eax
	je Block94

 Block92:
	cmp dword ptr [eax-4],0
	je Block94

 Block93:
	push offset _S___4
	lea eax,[esp+0x160]
	push eax
	lea ecx,[esi+0xD00]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea ecx,[esp+0x24]
	push ecx
	or ebx,0x40
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x19
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea edx,[esp+0x188]
	push edx
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x80
	mov dword ptr [esp+0x228],0x1A
	mov dword ptr [esp+0x14],ebx
	jmp Block95

 Block94:
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block95:
	push eax
	lea ecx,[esi+0xD00]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x19
	test bl,bl
	jns Block98

 Block96:
	mov eax,dword ptr [esp+0x184]
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov dword ptr [esp+0x228],0x11
	test bl,0x40
	je Block161

 Block99:
	mov eax,dword ptr [esp+0x15C]
	and ebx,0xFFFFFFBF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block101:
	cmp eax,dword ptr [esi+0xB14]
	jle Block112

 Block102:
	mov eax,dword ptr [esi+0xD14]
	test eax,eax
	je Block105

 Block103:
	cmp dword ptr [eax-4],0
	je Block105

 Block104:
	push offset _S___4
	lea ecx,[esp+0x168]
	push ecx
	lea ecx,[esi+0xD14]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea edx,[esp+0x24]
	or ebx,0x100
	push edx
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x1B
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea eax,[esp+0x178]
	push eax
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x200
	mov dword ptr [esp+0x228],0x1C
	mov dword ptr [esp+0x14],ebx
	jmp Block106

 Block105:
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block106:
	push eax
	lea ecx,[esi+0xD14]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x1B
	test ebx,0x200
	je Block109

 Block107:
	mov eax,dword ptr [esp+0x174]
	and ebx,0xFFFFFDFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov dword ptr [esp+0x228],0x11
	test ebx,0x100
	je Block161

 Block110:
	mov eax,dword ptr [esp+0x164]
	and ebx,0xFFFFFEFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block112:
	mov eax,dword ptr [esi+0xD08]
	test eax,eax
	je Block115

 Block113:
	cmp dword ptr [eax-4],0
	je Block115

 Block114:
	push offset _S___4
	lea edx,[esp+0x180]
	push edx
	lea ecx,[esi+0xD08]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea eax,[esp+0x24]
	or ebx,0x400
	push eax
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x1D
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea ecx,[esp+0x170]
	push ecx
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x800
	mov dword ptr [esp+0x228],0x1E
	mov dword ptr [esp+0x14],ebx
	jmp Block116

 Block115:
	push 0
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block116:
	push eax
	lea ecx,[esi+0xD08]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x1D
	test ebx,0x800
	je Block119

 Block117:
	mov eax,dword ptr [esp+0x16C]
	and ebx,0xFFFFF7FF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	mov dword ptr [esp+0x228],0x11
	test ebx,0x400
	je Block161

 Block120:
	mov eax,dword ptr [esp+0x17C]
	and ebx,0xFFFFFBFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block122:
	mov edi,dword ptr [esp+0x38]
	test edi,edi
	jge Block133

 Block123:
	mov eax,dword ptr [esi+0xCFC]
	test eax,eax
	je Block126

 Block124:
	cmp dword ptr [eax-4],0
	je Block126

 Block125:
	push offset _S___4
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esi+0xCFC]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea ecx,[esp+0x24]
	push ecx
	or ebx,0x1000
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x1F
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea edx,[esp+0x190]
	push edx
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x2000
	mov dword ptr [esp+0x228],0x20
	mov dword ptr [esp+0x14],ebx
	jmp Block127

 Block126:
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block127:
	push eax
	lea ecx,[esi+0xCFC]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x1F
	test ebx,0x2000
	je Block130

 Block128:
	mov eax,dword ptr [esp+0x18C]
	and ebx,0xFFFFDFFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov dword ptr [esp+0x228],0x11
	test ebx,0x1000
	je Block161

 Block131:
	mov eax,dword ptr [esp+0x6C]
	and ebx,0xFFFFEFFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block133:
	cmp edi,dword ptr [esi+0xB14]
	jle Block144

 Block134:
	mov eax,dword ptr [esi+0xD10]
	test eax,eax
	je Block137

 Block135:
	cmp dword ptr [eax-4],0
	je Block137

 Block136:
	push offset _S___4
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0xD10]
	call ZXString<char>::op_add_0
	mov edi,eax
	push 0
	lea edx,[esp+0x24]
	or ebx,0x4000
	push edx
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x230],0x21
	mov dword ptr [esp+0x1C],ebx
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC
	push eax
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	call ZXString<char>::op_add_1
	or ebx,0x8000
	mov dword ptr [esp+0x228],0x22
	mov dword ptr [esp+0x14],ebx
	jmp Block138

 Block137:
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	add eax,0xC

 Block138:
	push eax
	lea ecx,[esi+0xD10]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x228],0x21
	test ebx,0x8000
	je Block141

 Block139:
	mov eax,dword ptr [esp+0x58]
	and ebx,0xFFFF7FFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov dword ptr [esp+0x228],0x11
	test ebx,0x4000
	je Block161

 Block142:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFBFFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block161

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block161

 Block144:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x30]
	push edx
	call CWvsContext::IsPartyMemberID
	test eax,eax
	je Block149

 Block145:
	mov ecx,dword ptr [esp+0x30]
	call CWvsContext::GetPartyBossID
	cmp eax,dword ptr [esp+0x20]
	jne Block147

 Block146:
	lea ecx,[esp+0xD0]
	call ZList<tagPOINT>::AddTail_
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	jmp Block148

 Block147:
	lea ecx,[esp+0x94]
	call ZList<tagPOINT>::AddTail_
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax],edx

 Block148:
	mov dword ptr [eax+4],edi

 Block149:
	mov dword ptr [esp+0x2C],0
	mov ecx,dword ptr [esp+0x30]
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x22C],0x23
	call CWvsContext::GetOnlineGuildMemberID
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x3C],0

 Block150:
	test eax,eax
	je Block157

 Block151:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,dword ptr [eax-4]
	jae Block157

 Block152:
	mov ecx,dword ptr [eax+ecx*4]
	cmp ecx,dword ptr [esp+0x20]
	jne Block156

 Block153:
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x1F0]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	call CWvsContext::GetGuildMemberDataByIdx
	mov ecx,dword ptr [esp+0x20]
	cmp dword ptr [esp+0x1C],ecx
	jne Block155

 Block154:
	lea ecx,[esp+0xBC]
	call ZList<tagPOINT>::AddTail_
	mov edx,dword ptr [esp+0x34]
	inc dword ptr [esp+0x3C]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],edi
	mov eax,dword ptr [esp+0x2C]
	jmp Block150

 Block155:
	lea ecx,[esp+0xE4]
	call ZList<tagPOINT>::AddTail_
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edi
	mov eax,dword ptr [esp+0x2C]

 Block156:
	inc dword ptr [esp+0x3C]
	jmp Block150

 Block157:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x228],0x11
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x1C8]
	push edx
	push eax
	mov dword ptr [esp+0x1D0],0
	call CWvsContext::GetFriendByID
	cmp dword ptr [esp+0x1C8],0
	je Block159

 Block158:
	lea ecx,[esp+0xA8]
	call ZList<tagPOINT>::AddTail_
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edi

 Block159:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x30]
	cmp dword ptr [eax+0x3790],edx
	jne Block161

 Block160:
	lea ecx,[esp+0x80]
	call ZList<tagPOINT>::AddTail_
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edi

 Block161:
	cmp dword ptr [esp+0x18],0
	jne Block55

 Block162:
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xCC0]
	jne Block164

 Block163:
	lea eax,[esi+0xBFC]

 Block164:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea edx,[esp+0xFC]
	push edx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	mov edi,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block166

 Block165:
	mov eax,dword ptr [eax-4]

 Block166:
	lea ebx,[eax-1]
	test ebx,ebx
	jl Block175

 Block167:
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+ebx*8+4]
	mov ecx,dword ptr [eax+8]
	cmp ecx,2
	je Block169

 Block168:
	cmp ecx,7
	jne Block174

 Block169:
	add eax,0xC
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xCC8]
	jne Block171

 Block170:
	lea eax,[esi+0xC04]

 Block171:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block173

 Block172:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block173:
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block174:
	sub ebx,1
	jns Block167

 Block175:
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xC9C]
	jne Block177

 Block176:
	lea eax,[esi+0xBD8]

 Block177:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block179

 Block178:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block179:
	lea ecx,[esp+0xAC]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	xor edi,edi
	lea eax,[esi+0xCA0]
	cmp dword ptr [esi+0xB08],edi
	jne Block181

 Block180:
	lea eax,[esi+0xBDC]

 Block181:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block183

 Block182:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block183:
	lea ecx,[esp+0xE8]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCA4]
	cmp dword ptr [esi+0xB08],edi
	jne Block185

 Block184:
	lea eax,[esi+0xBE0]

 Block185:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block187

 Block186:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block187:
	lea ecx,[esp+0xC0]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCAC]
	cmp dword ptr [esi+0xB08],edi
	jne Block189

 Block188:
	lea eax,[esi+0xBE8]

 Block189:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block191:
	lea ecx,[esp+0x98]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCB0]
	cmp dword ptr [esi+0xB08],edi
	jne Block193

 Block192:
	lea eax,[esi+0xBEC]

 Block193:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block195

 Block194:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block195:
	lea ecx,[esp+0xD4]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCA8]
	cmp dword ptr [esi+0xB08],edi
	jne Block197

 Block196:
	lea eax,[esi+0xBE4]

 Block197:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block199

 Block198:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block199:
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	mov eax,dword ptr [_D_G_PSTAGE+4]
	cmp eax,edi
	je Block209

 Block200:
	mov edx,dword ptr [eax+4]
	add eax,4
	mov ecx,eax
	mov eax,dword ptr [edx+0x48]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block209

 Block201:
	call get_field
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0x13
	jne Block209

 Block202:
	lea eax,[esi+0xCEC]
	cmp dword ptr [esi+0xB08],edi
	jne Block204

 Block203:
	lea eax,[esi+0xC2C]

 Block204:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea ecx,[esp+0x138]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCF0]
	cmp dword ptr [esi+0xB08],edi
	jne Block206

 Block205:
	lea eax,[esi+0xC30]

 Block206:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea edx,[esp+0x14C]
	push edx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCF4]
	cmp dword ptr [esi+0xB08],edi
	jne Block208

 Block207:
	lea eax,[esi+0xC34]

 Block208:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea eax,[esp+0x124]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1

 Block209:
	int 3// TODO: 	mov eax,offset ZList<tagPOINT>::`vftable'
	mov dword ptr [esp+0x1F0],eax
	mov dword ptr [esp+0x1F8],edi
	mov dword ptr [esp+0x1FC],edi
	mov dword ptr [esp+0x200],edi
	mov dword ptr [esp+0x1C8],eax
	mov dword ptr [esp+0x1D0],edi
	mov dword ptr [esp+0x1D4],edi
	mov dword ptr [esp+0x1D8],edi
	mov dword ptr [esp+0x10C],eax
	mov dword ptr [esp+0x114],edi
	mov dword ptr [esp+0x118],edi
	mov dword ptr [esp+0x11C],edi
	mov byte ptr [esp+0x228],0x26
	mov dword ptr [esp+0x2C],edi
	jmp Block211

 Block211:
	mov eax,dword ptr [esi+0xB5C]
	cmp eax,edi
	je Block231

 Block212:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,dword ptr [eax-4]
	jae Block231

 Block213:
	mov edx,dword ptr [esi+0xB28]
	mov ebx,ecx
	mov ecx,dword ptr [esi+0xB30]
	add ebx,ebx
	add ebx,ebx
	add ebx,ebx
	add edx,dword ptr [eax+ebx]
	add eax,ebx
	sar edx,cl
	sub edx,dword ptr [esi+0xB4C]
	mov dword ptr [esp+0x34],edx
	mov edx,dword ptr [esi+0xB2C]
	add edx,dword ptr [eax+4]
	lea eax,[esp+0x1C]
	sar edx,cl
	push eax
	lea ecx,[esp+0x30]
	push ecx
	sub edx,dword ptr [esi+0xB50]
	lea ecx,[esi+0xB60]
	mov dword ptr [esp+0x40],edx
	call ZMap<long, unsigned long, long>::GetAt
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	push edi
	call CNpcPool::FindNpcByTemplateID
	test eax,eax
	je Block222

 Block214:
	cmp dword ptr [eax+0x138],0
	je Block230

 Block215:
	cmp dword ptr [eax+0x150],0
	jne Block230

 Block216:
	mov eax,dword ptr [eax+0xDC]
	sub eax,0
	je Block221

 Block217:
	sub eax,2
	je Block220

 Block218:
	sub eax,2
	jne Block225

 Block219:
	mov edx,dword ptr [esi+0xB5C]
	add edx,ebx
	push edx
	lea eax,[esp+0x48]
	push eax
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	push eax
	lea ecx,[esp+0x110]
	call ZList<tagPOINT>::Insert
	inc dword ptr [esp+0x2C]
	xor edi,edi
	jmp Block211

 Block220:
	mov ecx,dword ptr [esi+0xB5C]
	add ecx,ebx
	push ecx
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	push eax
	lea ecx,[esp+0x1F4]
	call ZList<tagPOINT>::Insert
	inc dword ptr [esp+0x2C]
	xor edi,edi
	jmp Block211

 Block221:
	mov eax,dword ptr [esi+0xB5C]
	add eax,ebx
	push eax
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	call CUIMiniMap::TransformPoint
	push eax
	lea ecx,[esp+0x1CC]
	call ZList<tagPOINT>::Insert
	inc dword ptr [esp+0x2C]
	xor edi,edi
	jmp Block211

 Block222:
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	push edi
	call CNpcPool::IsNpcEnabled
	test eax,eax
	je Block230

 Block223:
	push edi
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	test eax,eax
	je Block225

 Block224:
	push 0x3E8
	mov ecx,eax
	call CNpcTemplate::IsHideToLocalUser
	test eax,eax
	jne Block230

 Block225:
	cmp dword ptr [esi+0xB08],0
	lea eax,[esi+0xCB4]
	jne Block227

 Block226:
	lea eax,[esi+0xBF0]

 Block227:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block229

 Block228:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block229:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block230:
	inc dword ptr [esp+0x2C]
	xor edi,edi
	jmp Block211

 Block231:
	lea eax,[esi+0xCBC]
	cmp dword ptr [esi+0xB08],edi
	jne Block233

 Block232:
	lea eax,[esi+0xBF8]

 Block233:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block235

 Block234:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block235:
	lea ecx,[esp+0x1F4]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xCB8]
	cmp dword ptr [esi+0xB08],edi
	jne Block237

 Block236:
	lea eax,[esi+0xBF4]

 Block237:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block239

 Block238:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block239:
	lea ecx,[esp+0x1CC]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	lea eax,[esi+0xD18]
	cmp dword ptr [esi+0xB08],edi
	jne Block241

 Block240:
	lea eax,[esi+0xC28]

 Block241:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block243

 Block242:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block243:
	lea ecx,[esp+0x110]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_1
	mov eax,dword ptr [esi+0xCF8]
	cmp eax,edi
	je Block254

 Block244:
	cmp dword ptr [eax-4],edi
	je Block254

 Block245:
	mov edx,dword ptr [esi+0xB44]
	mov ebx,dword ptr [esi+0xCCC]
	lea edi,[esi+0xCCC]
	inc edx
	mov dword ptr [esp+0x24],edx
	test ebx,ebx
	jne Block247

 Block246:
	push 0x80004003
	call _com_issue_error

 Block247:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block249

 Block248:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block249:
	mov eax,dword ptr [esp+0x18]
	inc eax
	cmp dword ptr [esi+0xB08],0
	mov dword ptr [esp+0x28],eax
	mov eax,edi
	jne Block251

 Block250:
	lea eax,[esi+0xC08]

 Block251:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block253

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block253:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	xor edi,edi

 Block254:
	mov eax,dword ptr [esi+0xCFC]
	cmp eax,edi
	je Block265

 Block255:
	cmp dword ptr [eax-4],edi
	je Block265

 Block256:
	mov eax,dword ptr [esi+0xB10]
	mov ebx,dword ptr [esi+0xCD0]
	cdq
	sub eax,edx
	lea edi,[esi+0xCD0]
	sar eax,1
	mov dword ptr [esp+0x24],eax
	test ebx,ebx
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block260

 Block259:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block260:
	mov ecx,dword ptr [esp+0x18]
	inc ecx
	cmp dword ptr [esi+0xB08],0
	mov dword ptr [esp+0x28],ecx
	mov eax,edi
	jne Block262

 Block261:
	lea eax,[esi+0xC0C]

 Block262:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block264

 Block263:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block264:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	xor edi,edi

 Block265:
	mov eax,dword ptr [esi+0xD00]
	cmp eax,edi
	je Block278

 Block266:
	cmp dword ptr [eax-4],edi
	je Block278

 Block267:
	mov ebx,dword ptr [esi+0xCD4]
	cmp ebx,edi
	jne Block269

 Block268:
	push 0x80004003
	call _com_issue_error

 Block269:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push ebx
	mov dword ptr [esp+0x20],edi
	call ecx
	cmp eax,edi
	jge Block271

 Block270:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block271:
	mov edx,dword ptr [esi+0xB44]
	add edx,dword ptr [esi+0xB10]
	mov ebx,dword ptr [esi+0xCD4]
	sub edx,dword ptr [esp+0x18]
	dec edx
	mov dword ptr [esp+0x24],edx
	cmp ebx,edi
	jne Block273

 Block272:
	push 0x80004003
	call _com_issue_error

 Block273:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block275

 Block274:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block275:
	mov eax,dword ptr [esp+0x18]
	inc eax
	push ecx
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esi+0xCD4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block277

 Block276:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block277:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block278:
	mov eax,dword ptr [esi+0xD04]
	cmp eax,edi
	je Block289

 Block279:
	cmp dword ptr [eax-4],edi
	je Block289

 Block280:
	mov ecx,dword ptr [esi+0xB44]
	mov ebx,dword ptr [esi+0xCE4]
	lea edi,[esi+0xCE4]
	inc ecx
	mov dword ptr [esp+0x24],ecx
	test ebx,ebx
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push ebx
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block284

 Block283:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block284:
	mov edx,dword ptr [esi+0xB14]
	add edx,dword ptr [esp+0x18]
	mov eax,edi
	shr edx,1
	cmp dword ptr [esi+0xB08],0
	mov dword ptr [esp+0x28],edx
	jne Block286

 Block285:
	lea eax,[esi+0xC20]

 Block286:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block288

 Block287:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block288:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	xor edi,edi

 Block289:
	mov eax,dword ptr [esi+0xD0C]
	cmp eax,edi
	je Block296

 Block290:
	cmp dword ptr [eax-4],edi
	je Block296

 Block291:
	mov ecx,dword ptr [esi+0xB44]
	mov edx,dword ptr [esi+0xB14]
	inc ecx
	dec edx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],edx
	lea eax,[esi+0xCD8]
	cmp dword ptr [esi+0xB08],edi
	jne Block293

 Block292:
	lea eax,[esi+0xC14]

 Block293:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block295

 Block294:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block295:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block296:
	mov eax,dword ptr [esi+0xD10]
	cmp eax,edi
	je Block303

 Block297:
	cmp dword ptr [eax-4],edi
	je Block303

 Block298:
	mov eax,dword ptr [esi+0xB10]
	mov ecx,dword ptr [esi+0xB14]
	cdq
	sub eax,edx
	sar eax,1
	dec ecx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],ecx
	lea eax,[esi+0xCDC]
	cmp dword ptr [esi+0xB08],edi
	jne Block300

 Block299:
	lea eax,[esi+0xC18]

 Block300:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block302

 Block301:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block302:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0

 Block303:
	mov eax,dword ptr [esi+0xD14]
	cmp eax,edi
	je Block314

 Block304:
	cmp dword ptr [eax-4],edi
	je Block314

 Block305:
	mov ebx,dword ptr [esi+0xCE0]
	lea edi,[esi+0xCE0]
	test ebx,ebx
	jne Block307

 Block306:
	push 0x80004003
	call _com_issue_error

 Block307:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push ebx
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block309

 Block308:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block309:
	mov edx,dword ptr [esi+0xB44]
	add edx,dword ptr [esi+0xB10]
	mov eax,dword ptr [esi+0xB14]
	sub edx,dword ptr [esp+0x18]
	dec eax
	dec edx
	cmp dword ptr [esi+0xB08],0
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],edx
	mov eax,edi
	jne Block311

 Block310:
	lea eax,[esi+0xC1C]

 Block311:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block313

 Block312:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block313:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	xor edi,edi

 Block314:
	mov eax,dword ptr [esi+0xD08]
	cmp eax,edi
	je Block329

 Block315:
	cmp dword ptr [eax-4],edi
	je Block329

 Block316:
	mov ebx,dword ptr [esi+0xCE8]
	lea edi,[esi+0xCE8]
	test ebx,ebx
	jne Block318

 Block317:
	push 0x80004003
	call _com_issue_error

 Block318:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block320

 Block319:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block320:
	mov ecx,dword ptr [esi+0xB44]
	add ecx,dword ptr [esi+0xB10]
	mov ebx,dword ptr [edi]
	sub ecx,dword ptr [esp+0x18]
	sub ecx,2
	mov dword ptr [esp+0x24],ecx
	test ebx,ebx
	jne Block322

 Block321:
	push 0x80004003
	call _com_issue_error

 Block322:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push ebx
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block324

 Block323:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block324:
	mov edx,dword ptr [esi+0xB14]
	add edx,dword ptr [esp+0x18]
	mov eax,edi
	shr edx,1
	cmp dword ptr [esi+0xB08],0
	mov dword ptr [esp+0x28],edx
	jne Block326

 Block325:
	lea eax,[esi+0xC24]

 Block326:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block328

 Block327:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block328:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	xor edi,edi

 Block329:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x34]
	push eax
	call edx
	mov edx,dword ptr [esi+0xB28]
	add edx,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB2C]
	add ebx,dword ptr [eax+4]
	mov ecx,dword ptr [esi+0xB30]
	sar edx,cl
	sar ebx,cl
	lea eax,[esi+0xC94]
	sub edx,dword ptr [esi+0xB4C]
	sub ebx,dword ptr [esi+0xB50]
	mov dword ptr [esp+0x24],edx
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [esi+0xB08],edi
	jne Block331

 Block330:
	lea eax,[esi+0xBD0]

 Block331:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block333

 Block332:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block333:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	mov ecx,esi
	call CWnd::Update
	int 3// TODO: 	mov esi,offset ZList<tagPOINT>::`vftable'
	lea ecx,[esp+0x10C]
	mov byte ptr [esp+0x228],0x25
	mov dword ptr [esp+0x10C],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x1C8]
	mov byte ptr [esp+0x228],0x24
	mov dword ptr [esp+0x1C8],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x1F0]
	mov byte ptr [esp+0x228],0x11
	mov dword ptr [esp+0x1F0],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x120]
	mov byte ptr [esp+0x228],0x10
	mov dword ptr [esp+0x120],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x148]
	mov byte ptr [esp+0x228],0xF
	mov dword ptr [esp+0x148],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x134]
	mov byte ptr [esp+0x228],0xE
	mov dword ptr [esp+0x134],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0xF8]
	mov byte ptr [esp+0x228],0xD
	mov dword ptr [esp+0xF8],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x228],0xC
	mov dword ptr [esp+0x80],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x228],0xB
	mov dword ptr [esp+0xD0],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0x228],0xA
	mov dword ptr [esp+0x94],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0xBC]
	mov byte ptr [esp+0x228],9
	mov dword ptr [esp+0xBC],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0xE4]
	mov byte ptr [esp+0x228],8
	mov dword ptr [esp+0xE4],esi
	call ZList<tagPOINT>::RemoveAll
	lea ecx,[esp+0xA8]
	mov byte ptr [esp+0x228],5
	mov dword ptr [esp+0xA8],esi
	call ZList<tagPOINT>::RemoveAll
	cmp word ptr [esp+0x194],8
	mov byte ptr [esp+0x228],2
	jne Block336

 Block334:
	mov eax,dword ptr [esp+0x19C]
	xor ecx,ecx
	mov word ptr [esp+0x194],cx
	cmp eax,edi
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea edx,[esp+0x194]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block337:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x22C],0xFFFFFFFF
	call edx
	jmp Block343

 Block338:
	mov edi,dword ptr [ecx]
	test edi,edi
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x11C]
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block342

 Block341:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block342:
	mov ecx,esi
	call CWnd::Update

 Block343:
	mov ecx,dword ptr [esp+0x220]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [esp+0x208]
	xor ecx,esp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIMiniMap::DrawIcon
_SUB_EXCEPTION_HANDLER(3F7980)
__SUB_CLASS_THIS(003F7980, __thiscall, 56203,  CUIMiniMap, void, tagPOINT&, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F7980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0xB58],ebx
	mov dword ptr [esp+0x50],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block21

 Block1:
	cmp dword ptr [esi+0xB08],ebx
	jne Block25

 Block2:
	cmp dword ptr [esi+0xAFC],ebx
	jne Block25

 Block3:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [esi+0xB58]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],3
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edi,dword ptr [eax]
	mov ebp,ecx
	mov ebx,ecx
	test edi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x38]
	push eax
	push 0
	push 0
	push 0
	push 0
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebp
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB48]
	mov ebp,dword ptr [esp+0x7C]
	add ecx,dword ptr [ebp+4]
	add eax,eax
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esi+0xB44]
	add edx,dword ptr [ebp]
	mov ecx,edi
	sub edx,eax
	push edx
	call IWzCanvas::CopyEx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x28],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x38],di
	jne Block24

 Block18:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block20:
	xor ebx,ebx

 Block21:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8

 Block24:
	lea eax,[esp+0x38]
	push eax
	call esi
	jmp Block20

 Block25:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov edx,ecx
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],ebx
	mov ecx,dword ptr [esi+0xB58]
	mov byte ptr [esp+0x50],5
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],6
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block31:
	mov eax,dword ptr [esp+0x5C]
	mov ebp,dword ptr [esp+0x14]
	cmp eax,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block35

 Block34:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	mov ecx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ecx]
	cmp ecx,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esi+0xB48]
	mov esi,dword ptr [esi+0xB44]
	push eax
	mov eax,dword ptr [esp+0x60]
	add edx,dword ptr [eax+4]
	sub edx,ebp
	push edx
	mov edx,dword ptr [esp+0x24]
	shr edx,1
	sub esi,edx
	add esi,dword ptr [eax]
	push esi
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x38],di
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block43:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],di
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block21

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block46:
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block21
}
}
// CUIMiniMap::SetShowMiniMap
__SUB_CLASS_THIS(003F6B00, __thiscall, 56196,  CUIMiniMap, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xC90],eax
	ret 4
}
}
// CUIMiniMap::LoadMiniMap
_SUB_EXCEPTION_HANDLER(407910)
__SUB_CLASS_THIS(00407910, __thiscall, 56186,  CUIMiniMap, int32_t, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>, unsigned long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_407910
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x3C],ebx
	mov dword ptr [ebp+0x5C],0
	cmp dword ptr [ebx+0xB54],0
	mov dword ptr [ebp-4],1
	je Block3

 Block1:
	mov eax,dword ptr [ebx+0xB54]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [ebx+0xB54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	lea ecx,[ebx+0xB5C]
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[ebx+0xB60]
	call ZMap<long, unsigned long, long>::RemoveAll
	mov esi,dword ptr [ebx+0xC70]
	mov eax,dword ptr [ebp+0x74]
	cmp esi,eax
	je Block8

 Block4:
	mov dword ptr [ebx+0xC70],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block8:
	mov esi,dword ptr [ebx+0xC74]
	mov eax,dword ptr [ebp+0x78]
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [ebx+0xC74],eax
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block13:
	mov eax,dword ptr [ebp+0x7C]
	push 1
	mov ecx,ebx
	mov dword ptr [ebx+0xC84],eax
	call CUIMiniMap::SetShowMiniMap
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edi,[esi+0x2038]
	mov ecx,edi
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block18

 Block14:
	mov eax,dword ptr [esi+0x209C]
	test eax,eax
	jne Block18

 Block15:
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x777
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp+0x5C],1
	call get_int32
	add esp,8
	test eax,eax
	jne Block21

 Block18:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x776
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],4
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	or dword ptr [ebp+0x5C],2
	push offset _D_VTEMPTY
	mov ecx,eax
	call _xvariant_t::op_eq
	mov byte ptr [ebp+0x67],0
	test al,al
	je Block22

 Block21:
	mov byte ptr [ebp+0x67],1

 Block22:
	test byte ptr [ebp+0x5C],2
	je Block27

 Block23:
	and dword ptr [ebp+0x5C],0xFFFFFFFD
	cmp word ptr [ebp+0x4C],8
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	test byte ptr [ebp+0x5C],1
	mov dword ptr [ebp-4],1
	je Block32

 Block28:
	and dword ptr [ebp+0x5C],0xFFFFFFFE
	cmp word ptr [ebp+0x2C],8
	jne Block31

 Block29:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp byte ptr [ebp+0x67],0
	je Block34

 Block33:
	push 0
	mov ecx,ebx
	call CUIMiniMap::SetShowMiniMap

 Block34:
	cmp dword ptr [ebx+0xC90],0
	je Block41

 Block35:
	mov ecx,edi
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block41

 Block36:
	mov eax,dword ptr [esi+0x209C]
	test eax,eax
	jne Block41

 Block37:
	cmp dword ptr [esi+0x40C8],eax
	jne Block41

 Block38:
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x778
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	or dword ptr [ebp+0x5C],4
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	add esp,8
	mov byte ptr [ebp+0x67],1
	test eax,eax
	jne Block42

 Block41:
	mov byte ptr [ebp+0x67],0

 Block42:
	test byte ptr [ebp+0x5C],4
	mov dword ptr [ebp-4],1
	mov edi,8
	je Block47

 Block43:
	cmp word ptr [ebp+0x2C],di
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp byte ptr [ebp+0x67],0
	je Block49

 Block48:
	push 0
	mov ecx,ebx
	call CUIMiniMap::SetShowMiniMap

 Block49:
	cmp dword ptr [ebx+0xC90],0
	je Block158

 Block50:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x776
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[ebp+0x2C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x2C],di
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x779
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebx+0xB54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block64

 Block62:
	cmp eax,0x80004002
	je Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block67

 Block65:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x700
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0xD
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xB20],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x701
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0xF
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xB24],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block75

 Block73:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x77A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x11
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xB28],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x77B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x13
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xB2C],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x77C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x15
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xB30],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x4C],di
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov eax,dword ptr [ebx+0xB30]
	mov dword ptr [ebx+0xB34],eax
	dec eax
	mov ecx,ebx
	mov dword ptr [ebx+0xB38],eax
	call CUIMiniMap::SetSize
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x60],esp
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block90:
	mov ecx,ebx
	call CUIMiniMap::MakeSimpleMiniMap
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x77D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x4C],di
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	lea ecx,[ebx+0xB5C]
	mov byte ptr [ebp-4],0x1B
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[ebx+0xB60]
	call ZMap<long, unsigned long, long>::RemoveAll
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x5C],esi
	test edi,edi
	je Block16

 Block100:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x48]
	push eax
	push edi
	mov dword ptr [ebp+0x48],0
	call ecx
	test eax,eax
	jge Block102

 Block101:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block102:
	mov edx,dword ptr [ebp+0x5C]
	cmp edx,dword ptr [ebp+0x48]
	jae Block155

 Block103:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x1C
	mov ecx,edi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block111

 Block104:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x20]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x20]
	test esi,esi
	je Block106

 Block105:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block106:
	mov esi,ebx
	mov dword ptr [ebp+0x28],esi
	test edi,edi
	jge Block108

 Block107:
	cmp edi,0x80004002
	jne Block154

 Block108:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1B
	jne Block114

 Block109:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block115

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block111:
	test esi,esi
	je Block108

 Block112:
	mov eax,esi
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block108

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block108

 Block114:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	test esi,esi
	sete al
	test al,al
	jne Block153

 Block116:
	lea eax,[ebp+0x24]
	push 0x5A1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x618
	push ecx
	mov byte ptr [ebp-4],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test esi,esi
	je Block16

 Block117:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	jne Block119

 Block118:
	mov eax,dword ptr [eax+8]
	jmp Block120

 Block119:
	mov eax,offset _S___3

 Block120:
	push eax
	call __wcsicmp
	add esp,8
	test eax,eax
	setne bl
	cmp word ptr [ebp-0x1C],8
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block126:
	test bl,bl
	jne Block153

 Block127:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xC45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x10],8
	mov edi,eax
	mov byte ptr [ebp-4],0x1B
	jne Block130

 Block128:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	test edi,edi
	jne Block153

 Block132:
	mov ebx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ebx+0xB5C]
	add ebx,0xB5C
	test eax,eax
	je Block134

 Block133:
	mov eax,dword ptr [eax-4]

 Block134:
	lea ecx,[ebp+0x67]
	push ecx
	push 0
	inc eax
	push eax
	mov ecx,ebx
	call ZArray<tagPOINT>::_Realloc
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	je Block136

 Block135:
	mov ecx,dword ptr [ecx-4]

 Block136:
	mov edx,dword ptr [ebx]
	push eax
	lea edi,[edx+ecx*8-8]
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x1B
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x24
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],0x25
	test ecx,ecx
	je Block142

 Block141:
	mov ecx,dword ptr [ecx-4]

 Block142:
	mov edx,dword ptr [ebx]
	push eax
	lea edi,[edx+ecx*8-8]
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x1B
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_ID
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x26
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x1B
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block152

 Block151:
	mov eax,dword ptr [eax-4]

 Block152:
	mov ecx,dword ptr [ebp+0x3C]
	dec eax
	lea edx,[ebp+0x48]
	mov dword ptr [ebp+0x60],eax
	push edx
	lea eax,[ebp+0x60]
	push eax
	add ecx,0xB60
	call ZMap<long, unsigned long, long>::Insert

 Block153:
	inc dword ptr [ebp+0x5C]
	mov ebx,dword ptr [ebp+0x3C]
	mov edi,dword ptr [ebp+0x40]
	jmp Block100

 Block154:
	push edi
	call _com_issue_error

 Block155:
	mov byte ptr [ebp-4],0x1A
	test esi,esi
	je Block157

 Block156:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block157:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xA
	call ecx
	mov eax,dword ptr [ebp+0x44]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],1
	call eax

 Block158:
	cmp dword ptr [ebx+0xC8C],0
	jne Block163

 Block159:
	push 0xA
	push 0
	push 0
	mov ecx,ebx
	call CUIWnd::CreateUIWndPosSaved
	mov eax,dword ptr [ebx+0xAFC]
	test eax,eax
	jl Block161

 Block160:
	cmp eax,2
	jle Block162

 Block161:
	mov dword ptr [ebx+0xAFC],0

 Block162:
	mov dword ptr [ebx+0xC8C],1

 Block163:
	mov ecx,ebx
	call CUIMiniMap::ToggleMap
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block167

 Block166:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block167:
	mov eax,1
	lea esp,[ebp-0x5C]
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
	ret 0xC
}
}
// CUIMiniMap::ToggleMap
__SUB_CLASS_THIS0(00403DD0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIMiniMap::SetSize
	mov ecx,esi
	call CUIMiniMap::SetLayer
	mov ecx,esi
	call CUIMiniMap::SetCtrl
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUIMiniMap::DestroyMMWindow
__SUB_CLASS_THIS0(003F7DC0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x14],0
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	cmp dword ptr [esi+0xB54],0
	je Block5

 Block3:
	mov eax,dword ptr [esi+0xB54]
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esi+0xB54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	lea ecx,[esi+0xB5C]
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[esi+0xB60]
	pop esi
	jmp  ZMap<long, unsigned long, long>::RemoveAll
}
}
// CUIMiniMap::OnMouseMove
_SUB_EXCEPTION_HANDLER(4040A0)
__SUB_CLASS_THIS(004040A0, __thiscall, 56191,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4040A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
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
	mov ebx,dword ptr [ebp+8]
	lea ecx,[esi-4]
	call CUIMiniMap::CalculateScr
	mov eax,dword ptr [esi+0xCF4]
	test eax,eax
	je Block15

 Block1:
	cmp dword ptr [eax-4],0
	je Block15

 Block2:
	mov edi,dword ptr [esi+0xCC8]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [esi+0xCC8]
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],eax
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp-0x30]
	push edx
	push edi
	mov dword ptr [ebp-0x30],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ebp-0x30]
	push ecx
	push edx
	push 0
	push 0
	lea eax,[ebp-0x2C]
	push eax
	call SetRect
	mov ecx,dword ptr [esi+0xB44]
	mov edx,dword ptr [esi+0xB40]
	inc ecx
	push ecx
	inc edx
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edi,dword ptr [ebp+0xC]
	push edi
	push ebx
	lea edx,[ebp-0x2C]
	push edx
	call PtInRect
	test eax,eax
	je Block15

 Block11:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xCF4]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],0

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	lea eax,[eax+edi+0x14]
	push eax

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	lea ecx,[eax+ebx+0x14]
	push ecx
	lea ecx,[esi+0x84]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine

 Block14:
	mov eax,1
	jmp Block143

 Block15:
	mov eax,dword ptr [esi+0xCF8]
	test eax,eax
	je Block28

 Block16:
	cmp dword ptr [eax-4],0
	je Block28

 Block17:
	mov edi,dword ptr [esi+0xCCC]
	test edi,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp-0x14]
	push eax
	push edi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov edi,dword ptr [esi+0xCCC]
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],edx
	test edi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp-0x30]
	push ecx
	push edi
	mov dword ptr [ebp-0x30],0
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x30]
	push eax
	push ecx
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov eax,dword ptr [esi+0xB44]
	inc eax
	push eax
	mov eax,dword ptr [esi+0xB0C]
	sub eax,dword ptr [esi+0xB40]
	lea ecx,[ebp-0x2C]
	cdq
	sub eax,edx
	sar eax,1
	push eax
	push ecx
	call OffsetRect
	lea edx,[ebp-0x2C]
	push edx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edi,dword ptr [ebp+0xC]
	push edi
	push ebx
	lea eax,[ebp-0x2C]
	push eax
	call PtInRect
	test eax,eax
	je Block28

 Block26:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xCF8]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],1

 Block27:
	mov edx,dword ptr [esi]
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
	lea ecx,[esi+0x84]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	mov eax,1
	jmp Block143

 Block28:
	mov eax,dword ptr [esi+0xCFC]
	test eax,eax
	je Block44

 Block29:
	cmp dword ptr [eax-4],0
	je Block44

 Block30:
	mov edi,dword ptr [esi+0xCD0]
	test edi,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp-0x14]
	push eax
	push edi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov edi,dword ptr [esi+0xCD0]
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],edx
	test edi,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp-0x30]
	push ecx
	push edi
	mov dword ptr [ebp-0x30],0
	call edx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x30]
	push eax
	push ecx
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov edi,dword ptr [esi+0xCD0]
	test edi,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block42:
	mov ecx,dword ptr [esi+0xB40]
	add ecx,dword ptr [esi+0xB0C]
	mov eax,dword ptr [esi+0xB44]
	sub ecx,dword ptr [ebp-0x14]
	inc eax
	push eax
	dec ecx
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	call OffsetRect
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edi,dword ptr [ebp+0xC]
	push edi
	push ebx
	lea ecx,[ebp-0x2C]
	push ecx
	call PtInRect
	test eax,eax
	je Block44

 Block43:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xCFC]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],2
	jmp Block27

 Block44:
	mov eax,dword ptr [esi+0xD00]
	test eax,eax
	je Block60

 Block45:
	cmp dword ptr [eax-4],0
	je Block60

 Block46:
	mov edi,dword ptr [esi+0xCE0]
	test edi,edi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp-0x14]
	push eax
	push edi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block50:
	mov edi,dword ptr [esi+0xCE0]
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],edx
	test edi,edi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp-0x30]
	push ecx
	push edi
	mov dword ptr [ebp-0x30],0
	call edx
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block54:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x30]
	push eax
	push ecx
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov edi,dword ptr [esi+0xCE0]
	test edi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	mov eax,dword ptr [esi+0xB10]
	sub eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [esi+0xB40]
	shr eax,1
	add eax,dword ptr [esi+0xB44]
	inc ecx
	push eax
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	call OffsetRect
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edi,dword ptr [ebp+0xC]
	push edi
	push ebx
	lea ecx,[ebp-0x2C]
	push ecx
	call PtInRect
	test eax,eax
	je Block60

 Block59:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xD00]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],3
	jmp Block27

 Block60:
	mov eax,dword ptr [esi+0xD08]
	test eax,eax
	je Block70

 Block61:
	cmp dword ptr [eax-4],0
	je Block70

 Block62:
	mov ecx,dword ptr [esi+0xCD4]
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov edi,dword ptr [esi+0xCD4]
	test edi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	call IWzCanvas::Getheight
	push eax
	mov ecx,edi
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov ecx,dword ptr [esi+0xCD4]
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB44]
	add ecx,dword ptr [esi+0xB10]
	mov edx,dword ptr [esi+0xB40]
	sub ecx,eax
	dec ecx
	push ecx
	inc edx
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edi,dword ptr [ebp+0xC]
	push edi
	push ebx
	lea edx,[ebp-0x2C]
	push edx
	call PtInRect
	test eax,eax
	je Block71

 Block69:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xD08]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],4
	jmp Block12

 Block70:
	mov edi,dword ptr [ebp+0xC]

 Block71:
	mov eax,dword ptr [esi+0xD0C]
	test eax,eax
	je Block81

 Block72:
	cmp dword ptr [eax-4],0
	je Block81

 Block73:
	mov ecx,dword ptr [esi+0xCD8]
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov eax,dword ptr [esi+0xCD8]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [ebp-0x14]
	push eax
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov ecx,dword ptr [esi+0xCD8]
	test ecx,ecx
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB44]
	add ecx,dword ptr [esi+0xB10]
	sub ecx,eax
	mov eax,dword ptr [esi+0xB0C]
	sub eax,dword ptr [esi+0xB40]
	dec ecx
	cdq
	sub eax,edx
	push ecx
	sar eax,1
	push eax
	lea edx,[ebp-0x2C]
	push edx
	call OffsetRect
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	push edi
	push ebx
	lea ecx,[ebp-0x2C]
	push ecx
	call PtInRect
	test eax,eax
	je Block81

 Block80:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esi+0xD0C]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [ebp-4],5
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	jmp Block13

 Block81:
	mov eax,dword ptr [esi+0xD10]
	test eax,eax
	je Block93

 Block82:
	cmp dword ptr [eax-4],0
	je Block93

 Block83:
	mov ecx,dword ptr [esi+0xCDC]
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov eax,dword ptr [esi+0xCDC]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [ebp-0x14]
	push eax
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov ecx,dword ptr [esi+0xCDC]
	test ecx,ecx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov eax,dword ptr [esi+0xCDC]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB44]
	add ecx,dword ptr [esi+0xB10]
	sub ecx,eax
	dec ecx
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esi+0xB40]
	add edx,dword ptr [esi+0xB0C]
	sub edx,eax
	dec edx
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	push edi
	push ebx
	lea edx,[ebp-0x2C]
	push edx
	call PtInRect
	test eax,eax
	je Block93

 Block92:
	push 1
	push 0
	push ecx
	lea eax,[esi+0xD10]
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov dword ptr [ebp-4],6
	jmp Block12

 Block93:
	mov eax,dword ptr [esi+0xD04]
	test eax,eax
	je Block105

 Block94:
	cmp dword ptr [eax-4],0
	je Block105

 Block95:
	mov ecx,dword ptr [esi+0xCE4]
	test ecx,ecx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov eax,dword ptr [esi+0xCE4]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [ebp-0x14]
	push eax
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov ecx,dword ptr [esi+0xCE4]
	test ecx,ecx
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov eax,dword ptr [esi+0xCE4]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB10]
	sub ecx,eax
	shr ecx,1
	add ecx,dword ptr [esi+0xB44]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esi+0xB40]
	add edx,dword ptr [esi+0xB0C]
	sub edx,eax
	dec edx
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	push edi
	push ebx
	lea edx,[ebp-0x2C]
	push edx
	call PtInRect
	test eax,eax
	je Block105

 Block104:
	push 1
	push 0
	push ecx
	lea eax,[esi+0xD04]
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov dword ptr [ebp-4],7
	jmp Block12

 Block105:
	xor edi,edi

 Block106:
	mov eax,dword ptr [esi+0xB58]
	mov dword ptr [ebp-0x14],edi
	test eax,eax
	je Block117

 Block107:
	cmp edi,dword ptr [eax-4]
	jae Block117

 Block108:
	push 7
	push 5
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov eax,dword ptr [esi+0xB58]
	mov ecx,dword ptr [esi+0xB2C]
	lea edx,[eax+edi*8]
	mov eax,dword ptr [esi+0xB24]
	add eax,dword ptr [edx]
	mov edx,dword ptr [edx+4]
	add edx,dword ptr [esi+0xB28]
	sar eax,cl
	sar edx,cl
	mov ecx,dword ptr [esi+0xB44]
	sub eax,dword ptr [esi+0xB48]
	sub edx,dword ptr [esi+0xB4C]
	sub eax,2
	sub edx,5
	add ecx,edx
	mov edx,dword ptr [esi+0xB40]
	push ecx
	add edx,eax
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edx,dword ptr [ebp+0xC]
	push edx
	push ebx
	lea eax,[ebp-0x2C]
	push eax
	call PtInRect
	test eax,eax
	je Block114

 Block109:
	lea ecx,[ebp-0x18]
	push ecx
	lea edx,[ebp-0x14]
	push edx
	lea ecx,[esi+0xB5C]
	call ZMap<long, unsigned long, long>::GetAt
	mov eax,dword ptr [ebp-0x18]
	push eax
	call CNpcTemplate::GetNpcTemplate
	mov ebx,eax
	add esp,4
	cmp dword ptr [ebx+0x1C],0
	jne Block116

 Block110:
	mov ecx,dword ptr [ebp-0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	call CNpcPool::FindNpcByTemplateID
	test eax,eax
	je Block113

 Block111:
	cmp dword ptr [eax+0x138],0
	je Block114

 Block112:
	cmp dword ptr [eax+0x150],0
	jne Block114

 Block113:
	mov edx,dword ptr [ebp-0x18]
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	push edx
	call CNpcPool::IsNpcEnabled
	test eax,eax
	jne Block115

 Block114:
	mov ebx,dword ptr [ebp+8]
	inc edi
	jmp Block106

 Block115:
	mov ebx,dword ptr [ebx+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push ebx
	mov ecx,esi
	call edx
	mov ecx,dword ptr [ebp+0xC]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [ebp+8]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_String
	mov eax,1
	jmp Block143

 Block116:
	mov ebx,dword ptr [ebp+8]

 Block117:
	mov eax,dword ptr [TSingleton<CEmployeePool>::ms_pInstance]
	test eax,eax
	je Block123

 Block118:
	mov eax,dword ptr [eax+0x28]
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	je Block123

 Block119:
	mov edi,edi

 Block120:
	push 7
	push 5
	push 0
	push 0
	lea eax,[ebp-0x2C]
	push eax
	call SetRect
	lea ecx,[ebp-0x14]
	push ecx
	call ZList<EMPLOYEEENTRY>::GetNext
	mov ebx,eax
	mov eax,dword ptr [ebx+0x10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	add esp,4
	lea eax,[ebp-0x34]
	push eax
	call edx
	mov edi,dword ptr [eax]
	add edi,dword ptr [esi+0xB24]
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [ebx+0x10]
	sar edi,cl
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	sub edi,dword ptr [esi+0xB48]
	lea edx,[ebp-0x1C]
	push edx
	sub edi,2
	call eax
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [esi+0xB28]
	mov ecx,dword ptr [esi+0xB2C]
	mov edx,dword ptr [esi+0xB40]
	sar eax,cl
	mov ecx,dword ptr [esi+0xB44]
	add edx,edi
	sub eax,dword ptr [esi+0xB4C]
	sub eax,5
	add ecx,eax
	push ecx
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x2C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [ebp+8]
	push edx
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	call PtInRect
	test eax,eax
	jne Block131

 Block121:
	cmp dword ptr [ebp-0x14],eax
	jne Block120

 Block122:
	mov ebx,dword ptr [ebp+8]

 Block123:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block142

 Block124:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block142

 Block125:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block127

 Block126:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block128

 Block127:
	xor edi,edi

 Block128:
	lea ecx,[edi+0x16C]
	call TSecType<unsigned long>::GetData
	mov eax,dword ptr [TSingleton<CPortalList>::ms_pInstance]
	test eax,eax
	je Block141

 Block129:
	add eax,4
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block133

 Block130:
	jmp Block134

 Block131:
	mov ecx,dword ptr [ebx+0x10]
	lea edx,[ebp-0x14]
	push edx
	call CEmployee::GetNameTag
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov dword ptr [ebp-4],8
	call edx
	mov ecx,dword ptr [ebp+0xC]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [ebp+8]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block14

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov eax,1
	jmp Block143

 Block133:
	mov eax,dword ptr [eax-4]

 Block134:
	add eax,0xFFFFFFFF
	mov dword ptr [ebp-0x18],eax
	js Block141

 Block135:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0x18]
	mov edi,dword ptr [ecx+edx*8+4]
	mov eax,dword ptr [edi+8]
	cmp eax,2
	je Block137

 Block136:
	cmp eax,7
	jne Block140

 Block137:
	cmp dword ptr [edi+0x1C],0xFFFFFFFF
	je Block140

 Block138:
	cmp dword ptr [edi+0x24],0
	jne Block140

 Block139:
	push 7
	push 5
	push 0
	push 0
	lea eax,[ebp-0x4C]
	push eax
	call SetRect
	mov edx,dword ptr [edi+0x10]
	add edx,dword ptr [esi+0xB28]
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [edi+0xC]
	add eax,dword ptr [esi+0xB24]
	sar edx,cl
	sar eax,cl
	mov ecx,dword ptr [esi+0xB44]
	sub edx,dword ptr [esi+0xB4C]
	sub eax,dword ptr [esi+0xB48]
	sub edx,5
	add ecx,edx
	mov edx,dword ptr [esi+0xB40]
	sub eax,2
	push ecx
	add edx,eax
	push edx
	lea eax,[ebp-0x4C]
	push eax
	call OffsetRect
	lea ecx,[ebp-0x4C]
	push ecx
	lea ecx,[esi-4]
	call CUIMiniMap::UpdateRect
	mov edx,dword ptr [ebp+0xC]
	push edx
	push ebx
	lea eax,[ebp-0x4C]
	push eax
	call PtInRect
	test eax,eax
	jne Block144

 Block140:
	sub dword ptr [ebp-0x18],1
	jns Block135

 Block141:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip

 Block142:
	xor eax,eax

 Block143:
	lea esp,[ebp-0x8C]
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

 Block144:
	xor eax,eax
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],9
	mov dword ptr [ebp-0x18],eax
	lea ecx,[ebp-0x30]
	push 0xEE3
	push ecx
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,eax
	mov byte ptr [ebp-4],0xB
	call get_field
	lea ecx,[eax+0x16C]
	call TSecType<unsigned long>::GetData
	mov ebx,dword ptr [ebx]
	push eax
	lea edx,[ebp-0x14]
	push ebx
	push edx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x30]
	add esp,0xC
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block146:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	mov bl,0xD
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp-0x30],0
	je Block151

 Block149:
	mov eax,dword ptr [edi+4]
	push 0xFFFFFFFF
	push 0
	push eax
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ecx,dword ptr [edi+4]
	mov eax,esp
	push offset _S___3
	push 0xFFFFFFFF
	push eax
	push ecx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp-0x38],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0x14
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_string
	add esp,8
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x18]
	call ZXString<char>::AssignWideStr
	lea ecx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp-0x18]
	test ebx,ebx
	je Block151

 Block150:
	cmp byte ptr [ebx],0
	jne Block156

 Block151:
	lea edx,[ebp-0x38]
	push 0x6EC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov bl,0x16
	mov byte ptr [ebp-4],bl
	call CItemInfo::GetMapString
	push eax
	lea ecx,[ebp-0x18]
	mov byte ptr [ebp-4],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block153

 Block152:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block153:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
	mov ebx,dword ptr [ebp-0x18]

 Block156:
	test ebx,ebx
	je Block159

 Block157:
	cmp byte ptr [ebx],0
	je Block159

 Block158:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push ebx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [ebp+0xC]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [ebp+8]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_String

 Block159:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	mov byte ptr [ebp-4],9
	test ebx,ebx
	je Block163

 Block162:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block163:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block14

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov eax,1
	jmp Block143
}
}
// CUIMiniMap::SetLayer_Simple
_SUB_EXCEPTION_HANDLER(3FD340)
__SUB_CLASS_THIS0(003FD340, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3FD340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xFC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x110]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x70],edi
	xor ebx,ebx
	mov esi,2
	cmp dword ptr [edi+0xC90],ebx
	je Block2

 Block1:
	mov eax,dword ptr [edi+0xAFC]
	mov dword ptr [esp+0x6C],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x6C],esi

 Block3:
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],0xFFFFFFFE
	lea edx,[esp+0x40]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x11C],ebx
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x118],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x40]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x118],0
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x118],0xFFFFFFFF
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3F28],ebx
	jne Block16

 Block14:
	mov eax,dword ptr [edi+0xB58]
	cmp eax,ebx
	je Block555

 Block15:
	mov dword ptr [edi+0xB58],ebx
	jmp Block554

 Block16:
	mov eax,dword ptr [edi+0xC70]
	mov dword ptr [esp+0xE8],eax
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	lea eax,[esp+0x40]
	push 0x6EB
	push eax
	mov dword ptr [esp+0x120],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0xC84]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x124],3
	call CItemInfo::GetMapString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0x11C],4
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x118],6
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x118],7
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea eax,[esp+0xE4]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0xC84]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0xF4]
	push edx
	mov byte ptr [esp+0x124],8
	call CItemInfo::GetMapString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x11C],9
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0xEC]
	mov byte ptr [esp+0x118],0xB
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0x118],0xC
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	lea eax,[esp+0x3C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ebp,[edi+0xC7C]
	push ebp
	push eax
	mov byte ptr [esp+0x124],0xD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x118],0xC
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	lea ecx,[esp+0x3C]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x118],0xE
	cmp eax,ebx
	je Block30

 Block29:
	mov esi,dword ptr [eax]
	jmp Block31

 Block30:
	xor esi,esi

 Block31:
	mov edx,8
	push esi
	mov word ptr [esp+0x50],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x54],eax
	cmp eax,ebx
	jne Block34

 Block32:
	cmp esi,ebx
	je Block34

 Block33:
	push 0x8007000E
	call _com_issue_error

 Block34:
	lea eax,[esp+0x4C]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0x130],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x128],0x10
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x128],bl
	call IWzFont::Create
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x118],0xE
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x118],0xC
	test ecx,ecx
	je Block42

 Block41:
	call _xbstr_t::Data_t::Release

 Block42:
	lea ecx,[esp+0x3C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xC80]
	push esi
	push eax
	mov byte ptr [esp+0x124],0x11
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x118],0xC
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	lea edx,[esp+0x3C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x118],0x12
	test eax,eax
	je Block46

 Block45:
	mov edi,dword ptr [eax]
	jmp Block47

 Block46:
	xor edi,edi

 Block47:
	mov eax,8
	push edi
	mov word ptr [esp+0x50],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x54],eax
	test eax,eax
	jne Block50

 Block48:
	test edi,edi
	je Block50

 Block49:
	push 0x8007000E
	call _com_issue_error

 Block50:
	lea ecx,[esp+0x4C]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x130],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x128],0x14
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov byte ptr [esp+0x128],bl
	call IWzFont::Create
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x118],0x12
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
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x118],0xC
	test ecx,ecx
	je Block58

 Block57:
	call _xbstr_t::Data_t::Release

 Block58:
	lea edx,[esp+0x3C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	add esi,0xC78
	push 0
	push esi
	push eax
	mov byte ptr [esp+0x124],0x15
	mov dword ptr [esp+0xCC],esi
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x118],0xC
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea edx,[esp+0x4C]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x16
	push eax
	mov byte ptr [esp+0x130],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x128],0x17
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov byte ptr [esp+0x128],bl
	call IWzFont::Create
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x118],0xC
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
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
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xA4]
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block72

 Block71:
	add ecx,8
	push ecx
	call esi

 Block72:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x120],0x19
	test ecx,ecx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov byte ptr [esp+0x120],0x18
	call IWzFont::CalcTextWidth
	mov ebx,8
	lea edi,[eax+5]
	mov dword ptr [esp+0x3C],edi
	mov byte ptr [esp+0x118],0xC
	cmp word ptr [esp+0x4C],bx
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
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
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x90]
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block82

 Block81:
	add ecx,8
	push ecx
	call esi

 Block82:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x120],0x1B
	test ecx,ecx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov byte ptr [esp+0x120],0x1A
	call IWzFont::CalcTextWidth
	lea esi,[eax+5]
	mov byte ptr [esp+0x118],0xC
	cmp word ptr [esp+0x4C],bx
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	cmp esi,edi
	mov eax,edi
	jl Block90

 Block89:
	mov eax,esi

 Block90:
	mov ebp,dword ptr [esp+0x70]
	mov edx,dword ptr [ebp+0xB10]
	cmp edx,eax
	mov ecx,eax
	jl Block92

 Block91:
	mov ecx,edx

 Block92:
	mov eax,dword ptr [esp+0x6C]
	sub eax,0
	je Block101

 Block93:
	sub eax,1
	je Block96

 Block94:
	sub eax,1
	jne Block106

 Block95:
	lea ecx,[esi+edi+0x50]
	mov dword ptr [ebp+0x24],ecx
	mov dword ptr [ebp+0x28],0x14
	jmp Block106

 Block96:
	lea eax,[edx+0x12]
	cmp eax,0x81
	jg Block98

 Block97:
	mov eax,0x81

 Block98:
	lea ecx,[esi+edi+0x3C]
	cmp eax,ecx
	mov dword ptr [ebp+0x24],eax
	jge Block100

 Block99:
	mov eax,ecx

 Block100:
	mov dword ptr [ebp+0x24],eax
	mov eax,dword ptr [ebp+0xB14]
	add eax,0x28
	mov dword ptr [ebp+0x28],eax
	jmp Block106

 Block101:
	lea eax,[ecx+0x12]
	cmp eax,0x81
	jg Block103

 Block102:
	mov eax,0x81

 Block103:
	lea ecx,[esi+edi+0x3C]
	cmp eax,ecx
	mov dword ptr [ebp+0x24],eax
	jge Block105

 Block104:
	mov eax,ecx

 Block105:
	mov ecx,dword ptr [ebp+0xB14]
	add ecx,0x28
	mov dword ptr [ebp+0x24],eax
	mov dword ptr [ebp+0x28],ecx

 Block106:
	mov eax,dword ptr [ebp+0x24]
	sub eax,edx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ebp+0xB44],eax
	mov dword ptr [esp+0x28],0
	lea edx,[esp+0x40]
	push 0x3D0
	push edx
	mov byte ptr [esp+0x120],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov byte ptr [esp+0x124],0x1D
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0x118],0x1C
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	lea edx,[esp+0xC4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	lea ecx,[esp+0x4C]
	mov bl,0x1E
	push ecx
	mov byte ptr [esp+0x11C],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x118],0x1F
	cmp ecx,ebp
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov edi,dword ptr [esp+0x70]
	lea eax,[esp+0xC4]
	push eax
	mov eax,dword ptr [edi+0x28]
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [edi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x118],bl
	cmp word ptr [esp+0x4C],si
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov byte ptr [esp+0x118],0x1C
	cmp word ptr [esp+0xC4],si
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block126

 Block125:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block126:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block130

 Block129:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block130:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	lea edx,[esp+0xC4]
	push edx
	mov byte ptr [esp+0x11C],0x20
	call esi
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	push ebp
	push ebp
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0xD0]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x21
	push offset _S_UIUIWINDOW2IMGMI__11
	mov byte ptr [esp+0x130],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x12C],0x22
	cmp dword ptr [_D_G_RM],ebp
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea eax,[esp+0x104]
	mov byte ptr [esp+0x12C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x120],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x84]
	mov dword ptr [esp+0x84],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block139

 Block137:
	cmp eax,0x80004002
	je Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	mov ebx,8
	mov byte ptr [esp+0x118],0x25
	cmp word ptr [esp+0xF0],bx
	jne Block146

 Block140:
	mov eax,dword ptr [esp+0xF8]
	xor ecx,ecx
	mov word ptr [esp+0xF0],cx
	cmp eax,ebp
	je Block142

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block142:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block143:
	mov byte ptr [esp+0x118],0x26
	cmp word ptr [esp+0xC4],bx
	jne Block147

 Block144:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	je Block148

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block146:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xF0]
	push edx
	call esi
	jmp Block143

 Block147:
	lea ecx,[esp+0xC4]
	push ecx
	call esi

 Block148:
	mov byte ptr [esp+0x118],0x27
	cmp word ptr [esp+0x4C],bx
	jne Block151

 Block149:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block152:
	mov dword ptr [esp+0x84],ebp
	mov dword ptr [esp+0x78],ebp
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x118],0x29
	cmp eax,ebp
	je Block260

 Block153:
	cmp eax,1
	je Block260

 Block154:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x124],0x57
	cmp ecx,ebp
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea edx,[esp+0x98]
	push edx
	mov byte ptr [esp+0x128],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x58
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x84]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov byte ptr [esp+0x118],0x29
	cmp word ptr [esp+0x8C],bx
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebp
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x8C]
	push ecx
	call esi

 Block163:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_LEFT__1
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x124],0x59
	cmp edi,ebp
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	lea edx,[esp+0x98]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x128],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x5A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block168

 Block166:
	cmp eax,0x80004002
	je Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	mov esi,8
	mov byte ptr [esp+0x118],0x5C
	cmp word ptr [esp+0x8C],si
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebp
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_RIGHT__2
	call _xbstr_t::_ctor_1
	lea edx,[esp+0xBC]
	mov byte ptr [esp+0x124],0x5D
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x128],0x5C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x5E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block175

 Block173:
	cmp eax,0x80004002
	je Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	mov byte ptr [esp+0x118],0x60
	cmp word ptr [esp+0xB0],si
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	cmp eax,ebp
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[esp+0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov edx,3
	mov ebx,0xFF
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x118],0x61
	cmp ecx,ebp
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov edx,dword ptr [esp+0x44]
	lea eax,[esp+0x2C]
	push eax
	push edx
	push ebp
	push ebp
	call IWzCanvas::Copy
	mov byte ptr [esp+0x118],0x60
	cmp word ptr [esp+0x2C],si
	jne Block184

 Block182:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0x118],0x62
	cmp ecx,ebp
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	mov esi,dword ptr [esp+0x28]
	cmp esi,ebp
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	lea eax,[esp+0x2C]
	push eax
	push ecx
	push ebp
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [ecx+0x24]
	sub edx,eax
	push edx
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x118],0x60
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_CENTER__1
	call _xbstr_t::_ctor_1
	lea edx,[esp+0xAC]
	mov byte ptr [esp+0x124],0x63
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x128],0x60
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x64
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block196

 Block194:
	cmp eax,0x80004002
	je Block196

 Block195:
	push eax
	call _com_issue_error

 Block196:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0x118],0x66
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	cmp eax,ebp
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block202

 Block201:
	push eax
	call _com_issue_error

 Block202:
	mov ebp,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x118],0x67
	test ebp,ebp
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	cmp dword ptr [esp+0x44],0
	jne Block206

 Block205:
	push 0x80004003
	call _com_issue_error

 Block206:
	mov edi,dword ptr [esp+0x28]
	test edi,edi
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	mov ecx,dword ptr [esp+0x44]
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x70]
	mov esi,dword ptr [ecx+0x24]
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebp
	sub esi,eax
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esp+0x88]
	push eax
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x5C]
	sub esi,eax
	push esi
	push ebx
	push ebp
	push 0
	call IWzCanvas::Getwidth
	push eax
	mov ecx,edi
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x118],0x66
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block214

 Block213:
	push eax
	call _com_issue_error

 Block214:
	lea ecx,[esp+0x2C]
	mov bl,0x68
	push ecx
	mov byte ptr [esp+0x11C],bl
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	mov edi,dword ptr [esp+0xC0]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xAC]
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block218

 Block217:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block218:
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x6A
	test ecx,ecx
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	push 5
	push 6
	mov byte ptr [esp+0x130],0x69
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x118],bl
	mov ebx,8
	cmp word ptr [esp+0x2C],bx
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov byte ptr [esp+0x118],0x66
	cmp word ptr [esp+0x18],bx
	jne Block227

 Block225:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block228:
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block230

 Block229:
	push eax
	call _com_issue_error

 Block230:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x11C],0x6B
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block232

 Block231:
	push eax
	call _com_issue_error

 Block232:
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x6C
	push offset _S___5
	mov byte ptr [esp+0x12C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x6D
	test ecx,ecx
	jne Block234

 Block233:
	push 0x80004003
	call _com_issue_error

 Block234:
	mov edi,dword ptr [esp+0x4C]
	push 5
	lea eax,[edi+2]
	push eax
	mov byte ptr [esp+0x130],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x6B
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x118],0x66
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block244

 Block243:
	push eax
	call _com_issue_error

 Block244:
	lea ecx,[esp+0x18]
	mov bl,0x6E
	push ecx
	mov byte ptr [esp+0x11C],bl
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block246

 Block245:
	push eax
	call _com_issue_error

 Block246:
	mov edx,dword ptr [esp+0xC0]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edx]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x98]
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block248

 Block247:
	mov eax,ecx
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block248:
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x70
	test ecx,ecx
	jne Block250

 Block249:
	push 0x80004003
	call _com_issue_error

 Block250:
	push 5
	add edi,6
	push edi
	mov byte ptr [esp+0x130],0x6F
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],bl
	jne Block253

 Block251:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x118],0x66
	jne Block259

 Block255:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block257:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block258:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x11C],0x60
	call eax
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x5C
	call edx
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x29
	call edx
	jmp Block498

 Block259:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	jmp Block258

 Block260:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_NORMAL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x124],0x2A
	cmp ecx,ebp
	jne Block262

 Block261:
	push 0x80004003
	call _com_issue_error

 Block262:
	lea eax,[esp+0x98]
	push eax
	mov byte ptr [esp+0x128],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block265

 Block263:
	cmp eax,0x80004002
	je Block265

 Block264:
	push eax
	call _com_issue_error

 Block265:
	mov byte ptr [esp+0x118],0x2D
	cmp word ptr [esp+0x8C],bx
	jne Block268

 Block266:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebp
	je Block269

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block268:
	lea edx,[esp+0x8C]
	push edx
	call esi

 Block269:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_UPLEFT
	mov dword ptr [edi+0xB48],0x15
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x124],0x2E
	cmp ebx,ebp
	jne Block271

 Block270:
	push 0x80004003
	call _com_issue_error

 Block271:
	lea eax,[esp+0xBC]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block274

 Block272:
	cmp eax,0x80004002
	je Block274

 Block273:
	push eax
	call _com_issue_error

 Block274:
	cmp word ptr [esp+0xB0],8
	mov byte ptr [esp+0x118],0x31
	jne Block277

 Block275:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	cmp eax,ebp
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea edx,[esp+0xB0]
	push edx
	call esi

 Block278:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x118],0x32
	cmp ecx,ebp
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov eax,dword ptr [esp+0x44]
	lea edx,[esp+0x18]
	push edx
	push eax
	push ebp
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x31
	jne Block285

 Block283:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block286:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_UPRIGHT
	call _xbstr_t::_ctor_1
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0x124],0x33
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x31
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x34
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block289

 Block287:
	cmp eax,0x80004002
	je Block289

 Block288:
	push eax
	call _com_issue_error

 Block289:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0x118],0x36
	jne Block292

 Block290:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,ebp
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block293:
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block295

 Block294:
	push eax
	call _com_issue_error

 Block295:
	mov esi,dword ptr [esp+0x74]
	mov byte ptr [esp+0x118],0x37
	cmp esi,ebp
	jne Block297

 Block296:
	push 0x80004003
	call _com_issue_error

 Block297:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x64]
	push eax
	push esi
	mov dword ptr [esp+0x6C],ebp
	call ecx
	cmp eax,ebp
	jge Block299

 Block298:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block299:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebp
	jne Block301

 Block300:
	push 0x80004003
	call _com_issue_error

 Block301:
	mov eax,dword ptr [edi+0x24]
	sub eax,dword ptr [esp+0x64]
	lea edx,[esp+0x18]
	push edx
	push esi
	push ebp
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x36
	jne Block304

 Block302:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block305:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_DOWNLEFT
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x124],0x38
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x36
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x39
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x80]
	mov dword ptr [esp+0x80],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block308

 Block306:
	cmp eax,0x80004002
	je Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	cmp word ptr [esp+0x100],8
	mov byte ptr [esp+0x118],0x3B
	jne Block311

 Block309:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	cmp eax,ebp
	je Block312

 Block310:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block312

 Block311:
	lea edx,[esp+0x100]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block312:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block314

 Block313:
	push eax
	call _com_issue_error

 Block314:
	mov esi,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x118],0x3C
	cmp esi,ebp
	jne Block316

 Block315:
	push 0x80004003
	call _com_issue_error

 Block316:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x64]
	push eax
	push esi
	mov dword ptr [esp+0x6C],ebp
	call ecx
	cmp eax,ebp
	jge Block318

 Block317:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block318:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebp
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	mov eax,dword ptr [edi+0x28]
	sub eax,dword ptr [esp+0x64]
	lea edx,[esp+0x18]
	push edx
	push esi
	push eax
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x3B
	jne Block323

 Block321:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block324

 Block322:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block324

 Block323:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block324:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_DOWNRIGHT
	call _xbstr_t::_ctor_1
	lea eax,[esp+0xE0]
	mov byte ptr [esp+0x124],0x3D
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x3B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x3E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block327

 Block325:
	cmp eax,0x80004002
	je Block327

 Block326:
	push eax
	call _com_issue_error

 Block327:
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x118],0x40
	jne Block330

 Block328:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,ebp
	je Block331

 Block329:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block331

 Block330:
	lea edx,[esp+0xD4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block331:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block333

 Block332:
	push eax
	call _com_issue_error

 Block333:
	mov edi,dword ptr [esp+0x64]
	mov byte ptr [esp+0x118],0x41
	cmp edi,ebp
	jne Block335

 Block334:
	push 0x80004003
	call _com_issue_error

 Block335:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x68]
	push eax
	push edi
	mov dword ptr [esp+0x70],ebp
	call ecx
	cmp eax,ebp
	jge Block337

 Block336:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block337:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	mov esi,dword ptr [esp+0x68]
	lea eax,[esp+0x48]
	push eax
	push edi
	mov dword ptr [esp+0x50],ebp
	call ecx
	cmp eax,ebp
	jge Block339

 Block338:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block339:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebp
	jne Block341

 Block340:
	push 0x80004003
	call _com_issue_error

 Block341:
	mov eax,dword ptr [esp+0x70]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [eax+0x28]
	mov eax,dword ptr [eax+0x24]
	sub eax,dword ptr [esp+0x4C]
	push edi
	sub edx,esi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x40
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block345:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_UPCENTER
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x24]
	mov byte ptr [esp+0x124],0x42
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x40
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x43
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block348

 Block346:
	cmp eax,0x80004002
	je Block348

 Block347:
	push eax
	call _com_issue_error

 Block348:
	mov esi,8
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x18],si
	jne Block351

 Block349:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block352

 Block350:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block352

 Block351:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block352:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_DOWNCENTER
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x24]
	mov byte ptr [esp+0x124],0x44
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x40
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x45
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block355

 Block353:
	cmp eax,0x80004002
	je Block355

 Block354:
	push eax
	call _com_issue_error

 Block355:
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x18],si
	jne Block358

 Block356:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block359

 Block357:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block359

 Block358:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block359:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	mov edi,dword ptr [esp+0x84]
	mov byte ptr [esp+0x118],0x46
	cmp edi,ebp
	jne Block363

 Block362:
	push 0x80004003
	call _com_issue_error

 Block363:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x48]
	push eax
	push edi
	mov dword ptr [esp+0x50],ebp
	call ecx
	cmp eax,ebp
	jge Block365

 Block364:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block365:
	mov esi,dword ptr [esp+0x44]
	mov ebx,dword ptr [esp+0x48]
	cmp esi,ebp
	jne Block367

 Block366:
	push 0x80004003
	call _com_issue_error

 Block367:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x68]
	push eax
	push esi
	mov dword ptr [esp+0x70],ebp
	call ecx
	cmp eax,ebp
	jge Block369

 Block368:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block369:
	mov esi,dword ptr [esp+0x74]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov ebp,dword ptr [esp+0x68]
	lea eax,[esp+0x60]
	push eax
	push esi
	mov dword ptr [esp+0x68],0
	call ecx
	test eax,eax
	jge Block371

 Block370:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block371:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	mov esi,dword ptr [esp+0x60]
	lea ecx,[esp+0x5C]
	push ecx
	push eax
	mov dword ptr [esp+0x64],0
	call edx
	test eax,eax
	jge Block373

 Block372:
	mov ecx,dword ptr [esp+0x44]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block373:
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	jne Block375

 Block374:
	push 0x80004003
	call _com_issue_error

 Block375:
	mov eax,dword ptr [esp+0x70]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [esp+0x60]
	push 0
	push 0
	push 0
	push 0
	push ebx
	sub edx,esi
	sub edx,ebp
	push edx
	push 0xFF
	push edi
	push 0
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x40
	jne Block378

 Block376:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block379

 Block377:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block378:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block379:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block381

 Block380:
	push eax
	call _com_issue_error

 Block381:
	mov esi,dword ptr [esp+0x78]
	mov byte ptr [esp+0x118],0x47
	cmp esi,ebx
	jne Block383

 Block382:
	push 0x80004003
	call _com_issue_error

 Block383:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x5C]
	push eax
	push esi
	mov dword ptr [esp+0x64],ebx
	call ecx
	cmp eax,ebx
	jge Block385

 Block384:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block385:
	mov edx,dword ptr [esp+0x5C]
	mov edi,dword ptr [esp+0x7C]
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x60]
	push ecx
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x40]
	push edi
	mov dword ptr [esp+0x68],ebx
	call edx
	cmp eax,ebx
	jge Block387

 Block386:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block387:
	mov ebp,dword ptr [esp+0x64]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	mov ebx,dword ptr [esp+0x60]
	lea ecx,[esp+0x48]
	push ecx
	xor edi,edi
	push ebp
	mov dword ptr [esp+0x50],edi
	call edx
	cmp eax,edi
	jge Block389

 Block388:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block389:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	mov ebp,dword ptr [esp+0x48]
	lea ecx,[esp+0x68]
	push ecx
	push esi
	mov dword ptr [esp+0x70],edi
	call edx
	cmp eax,edi
	jge Block391

 Block390:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block391:
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x68]
	lea edx,[esp+0x40]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x48],0
	call eax
	test eax,eax
	jge Block393

 Block392:
	mov ecx,dword ptr [esp+0x7C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block393:
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	jne Block395

 Block394:
	push 0x80004003
	call _com_issue_error

 Block395:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x88]
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [eax+0x28]
	sub edx,ebp
	sub edx,ebx
	push edx
	mov edx,dword ptr [esp+0x5C]
	push 0xFF
	push esi
	sub eax,edi
	push eax
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x40
	jne Block398

 Block396:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block399

 Block397:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block399

 Block398:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block399:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_MIDDLELEFT
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x78]
	lea edx,[esp+0x24]
	mov byte ptr [esp+0x124],0x48
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x128],0x40
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x49
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block402

 Block400:
	cmp eax,0x80004002
	je Block402

 Block401:
	push eax
	call _com_issue_error

 Block402:
	mov edi,8
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x18],di
	jne Block405

 Block403:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block406

 Block404:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block406

 Block405:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block406:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_MIDDLERIGHT
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x24]
	mov byte ptr [esp+0x124],0x4A
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x128],0x40
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x120],0x4B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block409

 Block407:
	cmp eax,0x80004002
	je Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x18],di
	jne Block412

 Block410:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block413

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block413

 Block412:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block413:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block415

 Block414:
	push eax
	call _com_issue_error

 Block415:
	mov ebx,dword ptr [esp+0x44]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x40]
	push edx
	push ebx
	mov byte ptr [esp+0x120],0x4C
	mov dword ptr [esp+0x48],0
	call eax
	test eax,eax
	jge Block417

 Block416:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block417:
	mov esi,dword ptr [esp+0x7C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	mov ebp,dword ptr [esp+0x40]
	lea edx,[esp+0x5C]
	push edx
	push esi
	mov dword ptr [esp+0x64],0
	call eax
	test eax,eax
	jge Block419

 Block418:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block419:
	mov esi,dword ptr [esp+0x84]
	mov edi,dword ptr [esp+0x5C]
	test esi,esi
	jne Block421

 Block420:
	push 0x80004003
	call _com_issue_error

 Block421:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x60]
	push edx
	push esi
	mov dword ptr [esp+0x68],0
	call eax
	test eax,eax
	jge Block423

 Block422:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block423:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	mov esi,dword ptr [esp+0x60]
	lea edx,[esp+0x48]
	push edx
	push ebx
	mov dword ptr [esp+0x50],0
	call eax
	test eax,eax
	jge Block425

 Block424:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block425:
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	jne Block427

 Block426:
	push 0x80004003
	call _com_issue_error

 Block427:
	mov ebx,dword ptr [esp+0x70]
	mov eax,dword ptr [ebx+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x88]
	push 0
	push 0
	push 0
	push 0
	sub eax,edi
	sub eax,ebp
	push eax
	mov eax,dword ptr [esp+0x60]
	push esi
	push 0xFF
	push edx
	push eax
	push 0
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x118],0x40
	jne Block430

 Block428:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block431

 Block429:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block431

 Block430:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block431:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block433

 Block432:
	push eax
	call _com_issue_error

 Block433:
	mov esi,dword ptr [esp+0x74]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x40]
	push eax
	push esi
	mov byte ptr [esp+0x120],0x4D
	mov dword ptr [esp+0x48],ebp
	call ecx
	cmp eax,ebp
	jge Block435

 Block434:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block435:
	mov edx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x64]
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x5C]
	push ecx
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x48]
	push edi
	mov dword ptr [esp+0x64],ebp
	call edx
	cmp eax,ebp
	jge Block437

 Block436:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block437:
	mov edi,dword ptr [esp+0x78]
	mov ebp,dword ptr [esp+0x5C]
	test edi,edi
	jne Block439

 Block438:
	push 0x80004003
	call _com_issue_error

 Block439:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x60]
	push ecx
	push edi
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block441

 Block440:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block441:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	mov edi,dword ptr [esp+0x60]
	lea ecx,[esp+0x48]
	push ecx
	push esi
	mov dword ptr [esp+0x50],0
	call edx
	test eax,eax
	jge Block443

 Block442:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block443:
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x48]
	lea edx,[esp+0x68]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x70],0
	call eax
	test eax,eax
	jge Block445

 Block444:
	mov ecx,dword ptr [esp+0x78]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block445:
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	jne Block447

 Block446:
	push 0x80004003
	call _com_issue_error

 Block447:
	mov eax,dword ptr [ebx+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x7C]
	push 0
	push 0
	push 0
	push 0
	sub eax,ebp
	sub eax,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [ebx+0x24]
	sub eax,dword ptr [esp+0x80]
	push edi
	push 0xFF
	push edx
	push esi
	push eax
	call IWzCanvas::CopyEx
	mov edi,8
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x18],di
	jne Block450

 Block448:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block451

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block451

 Block450:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block451:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block453

 Block452:
	push eax
	call _com_issue_error

 Block453:
	lea edx,[esp+0x18]
	mov bl,0x4E
	push edx
	mov byte ptr [esp+0x11C],bl
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block455

 Block454:
	push eax
	call _com_issue_error

 Block455:
	mov eax,dword ptr [esp+0xC0]
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xAC]
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block457

 Block456:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block457:
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x50
	test ecx,ecx
	jne Block459

 Block458:
	push 0x80004003
	call _com_issue_error

 Block459:
	push 5
	push 6
	mov byte ptr [esp+0x130],0x4F
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x118],bl
	cmp word ptr [esp+0x18],di
	jne Block462

 Block460:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block463

 Block461:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block463

 Block462:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block463:
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x2C],di
	jne Block466

 Block464:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block467

 Block465:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block467

 Block466:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block467:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block469

 Block468:
	push eax
	call _com_issue_error

 Block469:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x11C],0x51
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block471

 Block470:
	push eax
	call _com_issue_error

 Block471:
	mov edi,dword ptr [esp+0x70]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0xC78]
	lea ecx,[esp+0x1C]
	push ecx
	add edi,0xC78
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x52
	push offset _S___5
	mov byte ptr [esp+0x12C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x53
	test ecx,ecx
	jne Block473

 Block472:
	push 0x80004003
	call _com_issue_error

 Block473:
	mov ebp,dword ptr [esp+0x4C]
	push 5
	lea edx,[ebp+2]
	push edx
	mov byte ptr [esp+0x130],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x118],0x51
	cmp word ptr [esp+0x18],si
	jne Block476

 Block474:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block477

 Block475:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block477

 Block476:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block477:
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x2C],si
	jne Block480

 Block478:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block481

 Block479:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block481

 Block480:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block481:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block483

 Block482:
	push eax
	call _com_issue_error

 Block483:
	lea eax,[esp+0x18]
	mov bl,0x54
	push eax
	mov byte ptr [esp+0x11C],bl
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block485

 Block484:
	push eax
	call _com_issue_error

 Block485:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x98]
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block487

 Block486:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block487:
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x128],0x56
	test ecx,ecx
	jne Block489

 Block488:
	push 0x80004003
	call _com_issue_error

 Block489:
	push 5
	add ebp,6
	push ebp
	mov byte ptr [esp+0x130],0x55
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x118],bl
	cmp word ptr [esp+0x18],si
	jne Block492

 Block490:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block493

 Block491:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block493

 Block492:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block493:
	mov byte ptr [esp+0x118],0x40
	cmp word ptr [esp+0x2C],si
	jne Block496

 Block494:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block497

 Block495:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block497

 Block496:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block497:
	mov eax,dword ptr [esp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x11C],0x3B
	call eax
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x36
	call edx
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x31
	call edx
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x2D
	call edx
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x29
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ZImports::_VariantClear]

 Block498:
	lea eax,[esp+0x8C]
	push eax
	call esi
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block500

 Block499:
	push eax
	call _com_issue_error

 Block500:
	lea edx,[esp+0xB0]
	push edx
	mov byte ptr [esp+0x11C],0x71
	call esi
	lea eax,[esp+0xB0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block502

 Block501:
	push eax
	call _com_issue_error

 Block502:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x11C],0x72
	call esi
	lea edx,[esp+0xA0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block504

 Block503:
	push eax
	call _com_issue_error

 Block504:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x11C],0x73
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block506

 Block505:
	push eax
	call _com_issue_error

 Block506:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x11C],0x74
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block508

 Block507:
	push eax
	call _com_issue_error

 Block508:
	mov ebp,dword ptr [esp+0x70]
	lea ecx,[esp+0x14]
	push ecx
	mov bl,0x75
	mov ecx,ebp
	mov byte ptr [esp+0x11C],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x118],0x76
	test ecx,ecx
	jne Block510

 Block509:
	push 0x80004003
	call _com_issue_error

 Block510:
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0xB4]
	push eax
	lea edx,[esp+0xA8]
	push edx
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x28]
	push edx
	push eax
	lea edx,[esp+0xEC]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [esp+0xD4],si
	jne Block513

 Block511:
	xor eax,eax
	mov word ptr [esp+0xD4],ax
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block514

 Block512:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block514

 Block513:
	lea ecx,[esp+0xD4]
	push ecx
	call edi

 Block514:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x118],bl
	test eax,eax
	je Block516

 Block515:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block516:
	mov byte ptr [esp+0x118],0x74
	cmp word ptr [esp+0x18],si
	jne Block519

 Block517:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block520

 Block518:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block520

 Block519:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block520:
	mov byte ptr [esp+0x118],0x73
	cmp word ptr [esp+0x2C],si
	jne Block523

 Block521:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block524

 Block522:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block524

 Block523:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block524:
	mov byte ptr [esp+0x118],0x72
	cmp word ptr [esp+0xA0],si
	jne Block527

 Block525:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block528

 Block526:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block528

 Block527:
	lea eax,[esp+0xA0]
	push eax
	call edi

 Block528:
	mov byte ptr [esp+0x118],0x71
	cmp word ptr [esp+0xB0],si
	jne Block531

 Block529:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	test eax,eax
	je Block532

 Block530:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block532

 Block531:
	lea edx,[esp+0xB0]
	push edx
	call edi

 Block532:
	mov byte ptr [esp+0x118],0x29
	cmp word ptr [esp+0x8C],si
	jne Block535

 Block533:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block536

 Block534:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block536

 Block535:
	lea ecx,[esp+0x8C]
	push ecx
	call edi

 Block536:
	push 0xFFFFFFFF
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	lea eax,[esp+0x1C]
	push eax
	call CLayoutMan::CopyToEmptyLayerOverlay
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xB58]
	add esp,0xC
	cmp esi,eax
	je Block541

 Block537:
	mov dword ptr [ebp+0xB58],eax
	test eax,eax
	je Block539

 Block538:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block539:
	test esi,esi
	je Block541

 Block540:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block541:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block543

 Block542:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block543:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x118],0x28
	test eax,eax
	je Block545

 Block544:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block545:
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x118],0x27
	test eax,eax
	je Block547

 Block546:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block547:
	mov eax,dword ptr [esp+0x80]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x11C],0x1C
	call edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x118],0xC
	test eax,eax
	je Block549

 Block548:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block549:
	mov ecx,dword ptr [esp+0x88]
	test ecx,ecx
	je Block551

 Block550:
	call _xbstr_t::Data_t::Release

 Block551:
	mov ecx,dword ptr [esp+0x9C]
	test ecx,ecx
	je Block553

 Block552:
	call _xbstr_t::Data_t::Release

 Block553:
	mov eax,dword ptr [esp+0xE8]
	mov dword ptr [esp+0x118],0xFFFFFFFF
	test eax,eax
	je Block555

 Block554:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block555:
	mov ecx,dword ptr [esp+0x110]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x108
	ret
}
}
// CUIMiniMap::MakeConvexLayer
_SUB_EXCEPTION_HANDLER(3FB0B0)
__SUB_CLASS_THIS0(003FB0B0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3FB0B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x144
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x158]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	xor ebp,ebp
	cmp dword ptr [ecx+0xC68],ebp
	lea edi,[ecx+0xC68]
	sete al
	test al,al
	je Block28

 Block1:
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x160],ebp
	cmp eax,ebp
	je Block3

 Block2:
	mov eax,dword ptr [eax]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push ebp
	push edi
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x24]
	add esp,0xC
	mov dword ptr [esp+0x160],0xFFFFFFFF
	cmp ecx,ebp
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release

 Block6:
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
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x164],1
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0xB54]
	mov byte ptr [esp+0x160],2
	cmp esi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0xB54]
	mov ebx,dword ptr [esp+0x18]
	cmp esi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x30]
	push eax
	push ebx
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x160],1
	cmp word ptr [esp+0x2C],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x160],0xFFFFFFFF
	cmp word ptr [esp+0x3C],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ebx,dword ptr [esp+0x14]
	add ebx,0xC6C
	cmp dword ptr [ebx],ebp
	sete al
	test al,al
	je Block56

 Block29:
	lea ecx,[esp+0x18]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x160],3
	cmp eax,ebp
	je Block31

 Block30:
	mov eax,dword ptr [eax]
	jmp Block32

 Block31:
	xor eax,eax

 Block32:
	push ebp
	push ebx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x24]
	add esp,0xC
	mov dword ptr [esp+0x160],0xFFFFFFFF
	cmp ecx,ebp
	je Block34

 Block33:
	call _xbstr_t::Data_t::Release

 Block34:
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
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x164],4
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0xB54]
	mov byte ptr [esp+0x160],5
	cmp esi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0xB54]
	mov edi,dword ptr [esp+0x18]
	cmp esi,ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov ecx,dword ptr [ebx]
	cmp ecx,ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[edi+edi]
	push edx
	lea edx,[eax+eax]
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x160],4
	cmp word ptr [esp+0x2C],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [esp+0x160],0xFFFFFFFF
	cmp word ptr [esp+0x3C],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xD4]
	push ecx
	call edi
	lea edx,[esp+0xD4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea eax,[esp+0xE4]
	push eax
	mov dword ptr [esp+0x164],6
	call edi
	lea ecx,[esp+0xE4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	push ebp
	push ebp
	lea edx,[esp+0xDC]
	push edx
	lea eax,[esp+0xF0]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push 0x19E5
	mov bl,7
	push ecx
	mov byte ptr [esp+0x17C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x174],8
	cmp dword ptr [_D_G_RM],ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[esp+0x138]
	mov byte ptr [esp+0x174],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x168],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	cmp word ptr [esp+0x124],8
	mov byte ptr [esp+0x160],0xB
	jne Block72

 Block66:
	xor eax,eax
	mov word ptr [esp+0x124],ax
	mov eax,dword ptr [esp+0x12C]
	cmp eax,ebp
	je Block68

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block68:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block69:
	mov ebx,8
	mov byte ptr [esp+0x160],0xC
	cmp word ptr [esp+0xE4],bx
	jne Block73

 Block70:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	cmp eax,ebp
	je Block74

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block72:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x124]
	push ecx
	call esi
	jmp Block69

 Block73:
	lea eax,[esp+0xE4]
	push eax
	call esi

 Block74:
	mov byte ptr [esp+0x160],0xD
	cmp word ptr [esp+0xD4],bx
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0xD4]
	push edx
	call esi

 Block78:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x16C],0xE
	cmp ecx,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x120]
	push eax
	mov byte ptr [esp+0x170],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x168],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block83

 Block81:
	cmp eax,0x80004002
	je Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov byte ptr [esp+0x160],0x11
	cmp word ptr [esp+0x114],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x11C]
	xor ecx,ecx
	mov word ptr [esp+0x114],cx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x114]
	push edx
	call esi

 Block87:
	lea eax,[esp+0xC4]
	push eax
	call edi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea edx,[esp+0xF4]
	push edx
	mov byte ptr [esp+0x164],0x12
	call edi
	lea eax,[esp+0xF4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	push ebp
	push ebp
	lea ecx,[esp+0xCC]
	push ecx
	lea edx,[esp+0x100]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	push 0x19E6
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x17C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x174],0x14
	cmp dword ptr [_D_G_RM],ebp
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea ecx,[esp+0x148]
	push ecx
	mov byte ptr [esp+0x178],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x168],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x5C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block96

 Block94:
	cmp eax,0x80004002
	je Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov edi,8
	mov byte ptr [esp+0x160],0x17
	cmp word ptr [esp+0x134],di
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x13C]
	xor edx,edx
	mov word ptr [esp+0x134],dx
	cmp eax,ebp
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x134]
	push eax
	call esi

 Block100:
	mov byte ptr [esp+0x160],0x18
	cmp word ptr [esp+0xF4],di
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0xFC]
	xor ecx,ecx
	mov word ptr [esp+0xF4],cx
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0xF4]
	push edx
	call esi

 Block104:
	mov byte ptr [esp+0x160],0x19
	cmp word ptr [esp+0xC4],di
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0xC4]
	push ecx
	call esi

 Block108:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x64]
	mov byte ptr [esp+0x16C],0x1A
	cmp edi,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea edx,[esp+0x110]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x170],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x168],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block113

 Block111:
	cmp eax,0x80004002
	je Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x160],0x1D
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	cmp eax,ebp
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x104]
	push ecx
	call esi

 Block117:
	mov eax,dword ptr [esp+0x14]
	add eax,0xC50
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block169

 Block118:
	mov ecx,dword ptr [eax-4]
	cmp ecx,ebp
	je Block169

 Block119:
	lea eax,[eax+ecx*8-8]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block169

 Block120:
	lea ebx,[ebx]

 Block121:
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esi+0xC50]
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::GetNext
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esi+0xB28]
	mov edx,dword ptr [eax]
	add edx,ecx
	mov dword ptr [esp+0x8C],edx
	mov edx,dword ptr [esi+0xB2C]
	mov esi,dword ptr [eax+4]
	add esi,edx
	mov dword ptr [esp+0x90],esi
	mov esi,dword ptr [eax+8]
	add esi,ecx
	mov ecx,dword ptr [eax+0xC]
	add ecx,edx
	mov dword ptr [esp+0x98],ecx
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x94],esi
	cmp ecx,dword ptr [eax+8]
	je Block167

 Block122:
	fild dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x14]
	fstp qword ptr [esp+0x4C]
	fld qword ptr [__real_4000000000000000]
	fild dword ptr [ebx+0xB34]
	call __CIpow
	fld qword ptr [esp+0x4C]
	fdiv st,st(1)
	call __ftol2_sse
	fild dword ptr [esp+0x90]
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	fst qword ptr [esp+0x14C]
	fdiv st,st(1)
	call __ftol2_sse
	fild dword ptr [esp+0x94]
	mov dword ptr [esp+0x24],eax
	fst qword ptr [esp+0x144]
	fdiv st,st(1)
	call __ftol2_sse
	fild dword ptr [esp+0x98]
	mov esi,eax
	mov dword ptr [esp+0x6C],esi
	fst qword ptr [esp+0x7C]
	fdivrp st(1),st(0)
	call __ftol2_sse
	fld qword ptr [__real_4000000000000000]
	fild dword ptr [ebx+0xB38]
	mov dword ptr [esp+0x70],eax
	call __CIpow
	fld qword ptr [esp+0x4C]
	fdiv st,st(1)
	call __ftol2_sse
	fld qword ptr [esp+0x14C]
	fdiv st,st(1)
	mov dword ptr [esp+0x74],eax
	call __ftol2_sse
	fld qword ptr [esp+0x144]
	fdiv st,st(1)
	mov ebp,eax
	call __ftol2_sse
	fdivr qword ptr [esp+0x7C]
	mov dword ptr [esp+0xBC],eax
	call __ftol2_sse
	mov ebx,eax
	mov eax,esi
	sub eax,edi
	cdq
	mov edi,eax
	mov eax,dword ptr [esp+0xBC]
	sub eax,dword ptr [esp+0x74]
	xor edi,edx
	sub edi,edx
	cdq
	mov esi,eax
	mov eax,dword ptr [esp+0x70]
	sub eax,dword ptr [esp+0x24]
	xor esi,edx
	sub esi,edx
	cdq
	mov ecx,eax
	xor ecx,edx
	mov eax,ebx
	sub eax,ebp
	sub ecx,edx
	cdq
	xor eax,edx
	sub eax,edx
	test eax,eax
	jle Block125

 Block123:
	lea edx,[eax*4]
	cmp esi,edx
	jl Block125

 Block124:
	lea eax,[ebx+ebp]
	cdq
	sub eax,edx
	sar eax,1
	mov ebx,eax
	mov ebp,ebx

 Block125:
	test ecx,ecx
	jle Block128

 Block126:
	lea eax,[ecx*4]
	cmp edi,eax
	jl Block128

 Block127:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x70]
	lea eax,[ecx+edx]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x24],eax

 Block128:
	mov eax,dword ptr [esp+0x98]
	cmp dword ptr [esp+0x90],eax
	jne Block137

 Block129:
	test esi,esi
	jle Block137

 Block130:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block131:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0xC6C]
	add eax,0xC6C
	mov byte ptr [esp+0x160],0x1E
	test edi,edi
	je Block11

 Block132:
	mov edx,dword ptr [esp+0x5C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	push 0
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x74]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x80]
	push 0
	push 5
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x8C]
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x9C]
	push 0xFF
	push eax
	mov eax,dword ptr [ecx+0x84]
	add ebp,0xFFFFFFFD
	push ebp
	push edx
	push edi
	call eax
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block134:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x160],0x1D
	jne Block136

 Block135:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	jmp Block149

 Block136:
	lea edx,[esp+0x5C]
	push edx
	jmp Block152

 Block137:
	mov eax,3
	mov ecx,4
	mov word ptr [esp+0xAC],ax
	mov dword ptr [esp+0xB4],ecx
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0xC6C]
	add eax,0xC6C
	mov byte ptr [esp+0x160],0x1F
	mov dword ptr [esp+0x4C],eax
	test esi,esi
	je Block11

 Block138:
	mov edi,dword ptr [esp+0xAC]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0xC0]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xC8]
	push 0x88FD00FF
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0xD4]
	mov ecx,dword ptr [esp+0x8C]
	push eax
	push ebp
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block140

 Block139:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x160],0x1D
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov edx,3
	mov ecx,2
	mov word ptr [esp+0x9C],dx
	mov dword ptr [esp+0xA4],ecx
	mov eax,dword ptr [esp+0x4C]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x160],0x20
	test esi,esi
	je Block11

 Block145:
	mov edi,dword ptr [esp+0x9C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0xB0]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xB8]
	push 0xEFFFF200
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0xD4]
	mov ecx,dword ptr [esp+0x8C]
	push eax
	push ebp
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x160],0x1D
	jne Block151

 Block148:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]

 Block149:
	test eax,eax
	je Block153

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block151:
	lea ecx,[esp+0x9C]
	push ecx

 Block152:
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov edx,3
	mov ecx,edx
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ecx
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+0xC68]
	add edi,0xC68
	mov byte ptr [esp+0x160],0x21
	test esi,esi
	je Block11

 Block154:
	mov ebx,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x80]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x58]
	push 0x88FD00FF
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x38]
	push eax
	push ebp
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block156:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x160],0x1D
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov edx,3
	mov ecx,1
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ecx
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x160],0x22
	test esi,esi
	je Block11

 Block161:
	mov edi,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push 0xEFFFF200
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x38]
	push eax
	push ebp
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block163

 Block162:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block163:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x160],0x1D
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	cmp dword ptr [esp+0x28],0
	jne Block121

 Block168:
	mov edi,dword ptr [esp+0x58]
	xor ebp,ebp

 Block169:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0xC60]
	mov esi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block193

 Block170:
	lea eax,[esp+0x28]
	push eax
	call ZList<ZRef<SimpleMiniMap_LadderRope>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+4]
	mov edi,dword ptr [eax+8]
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ebx+0xB28]
	add edx,dword ptr [eax]
	mov ecx,dword ptr [ebx+0xB2C]
	add esi,ecx
	add edi,ecx
	mov ecx,dword ptr [ebx+0xB34]
	mov eax,edx
	sar eax,cl
	mov ebp,esi
	add esp,4
	mov dword ptr [esp+0x20],eax
	mov eax,esi
	sar eax,cl
	mov dword ptr [esp+0x24],eax
	mov eax,edi
	sar eax,cl
	mov ecx,dword ptr [ebx+0xB38]
	sar edx,cl
	mov ebx,edi
	sub eax,dword ptr [esp+0x24]
	sar ebx,cl
	mov dword ptr [esp+0x74],edx
	cdq
	xor eax,edx
	sub eax,edx
	sar ebp,cl
	mov dword ptr [esp+0x4C],eax
	mov eax,ebx
	sub eax,ebp
	cdq
	mov ebx,eax
	xor ebx,edx
	sub ebx,edx
	cmp esi,edi
	je Block191

 Block171:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block172:
	mov byte ptr [esp+0x160],0x23
	test ebx,ebx
	jg Block174

 Block173:
	mov ebx,1

 Block174:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+0xC6C]
	test esi,esi
	je Block11

 Block175:
	mov edx,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ecx+0x84]
	push 0
	push 0
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x78]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x84]
	push ebx
	mov ebx,dword ptr [esp+0x78]
	push 5
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x90]
	push 0xFF
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xA0]
	push ebx
	push ebp
	add eax,0xFFFFFFFD
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block177

 Block176:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block177:
	mov ebp,8
	mov byte ptr [esp+0x160],0x1D
	cmp word ptr [esp+0x5C],bp
	jne Block180

 Block178:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block181:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block182:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x160],0x24
	test ecx,ecx
	jg Block184

 Block183:
	mov ecx,1

 Block184:
	mov esi,dword ptr [edi+0xC68]
	lea eax,[edi+0xC68]
	test esi,esi
	je Block11

 Block185:
	mov edi,dword ptr [esp+0x7C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov edx,dword ptr [edx+0x84]
	push 0
	push 0
	push 0
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x9C]
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0xA8]
	push 3
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0xB0]
	push 0xFF
	push ebx
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x54]
	push eax
	add ecx,0xFFFFFFFE
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block187

 Block186:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block187:
	mov byte ptr [esp+0x160],0x1D
	cmp word ptr [esp+0x7C],bp
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	cmp dword ptr [esp+0x28],0
	jne Block170

 Block192:
	mov esi,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x58]
	xor ebp,ebp

 Block193:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x160],0x19
	cmp eax,ebp
	je Block195

 Block194:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block195:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x164],0x11
	call edx
	mov byte ptr [esp+0x160],0xD
	cmp esi,ebp
	je Block197

 Block196:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block197:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x164],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x158]
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
// CUIMiniMap::CalcAngle
__SUB_CLASS_THIS(003F6F50, __thiscall, 56213,  CUIMiniMap, double, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<tagPOINT>) {
__asm {

 Block0:
	sub esp,8
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x14]
	push ebx
	mov eax,edx
	sub eax,ecx
	mov dword ptr [esp+4],eax
	fild dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x18]
	fld1
	push edi
	fld st(0)
	mov edi,dword ptr [esp+0x24]
	mov eax,esi
	sub eax,edi
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esp+0x28]
	mov ebx,eax
	sub ebx,ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],ebx
	mov ebx,ecx
	sub eax,edx
	sub ebx,edi
	sub ecx,esi
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x2C],ecx
	mov eax,2

 Block1:
	test al,1
	je Block3

 Block2:
	fmul st,st(2)

 Block3:
	shr eax,1
	je Block5

 Block4:
	fld st(2)
	fmulp st(3),st
	jmp Block1

 Block5:
	fstp st(2)
	mov eax,2
	fild dword ptr [esp+0x10]

 Block6:
	test al,1
	je Block8

 Block7:
	fmul st(1),st

 Block8:
	shr eax,1
	je Block10

 Block9:
	fmul st(0),st
	jmp Block6

 Block10:
	fstp st(0)
	faddp st(1),st(0)
	call __CIsqrt
	call __ftol2_sse
	fild dword ptr [esp+0x20]
	fld1
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	fld st(0)
	mov eax,2

 Block11:
	test al,1
	je Block13

 Block12:
	fmul st,st(2)

 Block13:
	shr eax,1
	je Block15

 Block14:
	fld st(2)
	fmulp st(3),st
	jmp Block11

 Block15:
	fstp st(2)
	mov eax,2
	fild dword ptr [esp+0x24]

 Block16:
	test al,1
	je Block18

 Block17:
	fmul st(1),st

 Block18:
	shr eax,1
	je Block20

 Block19:
	fmul st(0),st
	jmp Block16

 Block20:
	fstp st(0)
	faddp st(1),st(0)
	call __CIsqrt
	call __ftol2_sse
	fild dword ptr [esp+0x28]
	fld1
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	fld st(0)
	mov eax,2

 Block21:
	test al,1
	je Block23

 Block22:
	fmul st,st(2)

 Block23:
	shr eax,1
	je Block25

 Block24:
	fld st(2)
	fmulp st(3),st
	jmp Block21

 Block25:
	fstp st(2)
	mov eax,2
	fild dword ptr [esp+0x2C]

 Block26:
	test al,1
	je Block28

 Block27:
	fmul st(1),st

 Block28:
	shr eax,1
	je Block30

 Block29:
	fmul st(0),st
	jmp Block26

 Block30:
	fstp st(0)
	faddp st(1),st(0)
	call __CIsqrt
	call __ftol2_sse
	fild dword ptr [esp+0x18]
	fld1
	mov dword ptr [esp+0x28],eax
	mov eax,2
	fld st(0)

 Block31:
	test al,1
	je Block33

 Block32:
	fmul st,st(2)

 Block33:
	shr eax,1
	je Block35

 Block34:
	fld st(2)
	fmulp st(3),st
	jmp Block31

 Block35:
	fstp st(2)
	mov eax,2
	fild dword ptr [esp+0x20]
	fld st(1)

 Block36:
	test al,1
	je Block38

 Block37:
	fmul st,st(1)

 Block38:
	shr eax,1
	je Block40

 Block39:
	fld st(1)
	fmulp st(2),st
	jmp Block36

 Block40:
	fstp st(1)
	mov eax,2
	fild dword ptr [esp+0x28]

 Block41:
	test al,1
	je Block43

 Block42:
	fmul st(2),st

 Block43:
	shr eax,1
	je Block45

 Block44:
	fmul st(0),st
	jmp Block41

 Block45:
	imul esi,edi
	fstp st(0)
	faddp st(2),st
	fsubp st(1),st(0)
	add esi,esi
	mov dword ptr [esp+0x18],esi
	fild dword ptr [esp+0x18]
	fdivp st(1),st(0)
	call __CIacos
	fld qword ptr [__real_4066800000000000]
	fmul st(1),st
	pop edi
	fxch
	pop esi
	pop ebx
	fdiv qword ptr [_D_PI__71]
	fld qword ptr [__real_4056800000000000]
	fcomp
	fnstsw ax
	test ah,5
	jp Block47

 Block46:
	fsubp st(1),st(0)
	add esp,8
	ret 0x18

 Block47:
	fstp st(1)
	add esp,8
	ret 0x18
}
}
// CUIMiniMap::LoadLadderRope
_SUB_EXCEPTION_HANDLER(405010)
__SUB_CLASS_THIS(00405010, __thiscall, 56211,  CUIMiniMap, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_405010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+8]
	xor edi,edi
	cmp eax,edi
	sete dl
	mov dword ptr [ebp-4],edi
	test dl,dl
	je Block4

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	jmp Block41

 Block4:
	add ecx,0xC54
	mov dword ptr [ebp-0x20],ecx
	call ZList<ZRef<SimpleMiniMap_LadderRope>>::RemoveAll
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x18],edi
	call eax
	cmp eax,edi
	jge Block8

 Block7:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,1
	cmp dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-0x1C],edi
	jl Block38

 Block9:
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
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block5

 Block10:
	lea edx,[ebp-0x54]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp-0x2C],ebx
	test eax,eax
	je Block13

 Block11:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x2C],ebx
	test eax,eax
	jge Block13

 Block12:
	cmp eax,0x80004002
	jne Block42

 Block13:
	mov esi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x54],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
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
	test ebx,ebx
	sete al
	test al,al
	je Block20

 Block18:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block37

 Block19:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx
	jmp Block37

 Block20:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block5

 Block21:
	lea eax,[ebp-0x44]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x44],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x939
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],7
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x74],si
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x78],esp
	push 0x93A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x64]
	mov byte ptr [ebp-4],9
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x64],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<SimpleMiniMap_LadderRope>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp-0x30],esi
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [esi],edx
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0xB
	mov dword ptr [esi+8],edi
	call ZList<ZRef<SimpleMiniMap_LadderRope>>::AddTail_
	lea ecx,[ebp-0x34]
	push ecx
	mov ecx,eax
	call ZRef<SimpleMiniMap_LadderRope>::op_assign_copy
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov dword ptr [ebp-0x30],0
	mov byte ptr [ebp-4],0
	call edx
	mov edi,dword ptr [ebp-0x1C]

 Block37:
	inc edi
	cmp edi,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x1C],edi
	jle Block9

 Block38:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,1

 Block41:
	lea esp,[ebp-0x88]
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

 Block42:
	push eax
	call _com_issue_error
}
}
// CUIMiniMap::OnMouseButton
_SUB_EXCEPTION_HANDLER(3F8410)
__SUB_CLASS_THIS(003F8410, __thiscall, 56192,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F8410
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [esp+0x4C],0x202
	jne Block4

 Block1:
	lea ebx,[ebp-4]
	mov ecx,ebx
	call CUIMiniMap::CalculateScr
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block2:
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x14]
	push edx
	call eax
	mov esi,dword ptr [ebx+0xB28]
	mov edi,dword ptr [ebx+0xB2C]
	mov ecx,dword ptr [ebx+0xB30]
	add esi,dword ptr [eax]
	add edi,dword ptr [eax+4]
	push 7
	push 5
	sar esi,cl
	sar edi,cl
	push 0xFFFFFFFB
	push 0xFFFFFFFE
	sub esi,dword ptr [ebx+0xB4C]
	sub edi,dword ptr [ebx+0xB50]
	lea ecx,[esp+0x2C]
	push ecx
	call SetRect
	mov edx,dword ptr [ebp+0xB44]
	mov eax,dword ptr [ebp+0xB40]
	add edx,edi
	push edx
	add eax,esi
	push eax
	lea ecx,[esp+0x24]
	push ecx
	call OffsetRect
	mov eax,dword ptr [esp+0x58]
	push eax
	mov eax,dword ptr [esp+0x58]
	push eax
	lea edx,[esp+0x24]
	push edx
	call PtInRect
	test eax,eax
	je Block4

 Block3:
	push 0xA6
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x48],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0x10
}
}
// CUIMiniMap::ReleaseFootHoldMapData
__SUB_CLASS_THIS0(003F7E10, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	add ecx,0xC38
	jmp  ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::RemoveAll
}
}
// CUIMiniMap::TransformPoint
__SUB_CLASS_THIS(003F6750, __thiscall, 56199,  CUIMiniMap, tagPOINT*, tagPOINT*, const tagPOINT&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edx,ecx
	mov edi,dword ptr [edx+0xB28]
	add edi,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB30]
	sar edi,cl
	sub edi,dword ptr [edx+0xB4C]
	mov dword ptr [eax],edi
	mov edi,dword ptr [edx+0xB2C]
	add edi,dword ptr [esi+4]
	sar edi,cl
	sub edi,dword ptr [edx+0xB50]
	mov dword ptr [eax+4],edi
	pop edi
	pop esi
	ret 8
}
}
// CUIMiniMap::DrawIcon
_SUB_EXCEPTION_HANDLER(3F7D00)
__SUB_CLASS_THIS(003F7D00, __thiscall, 56201,  CUIMiniMap, void, ZList<tagPOINT>&, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F7D00
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
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block5

 Block1:
	lea ecx,[ecx]

 Block2:
	lea ecx,[esp+0x24]
	push ecx
	call ZList<tagPOINT>::GetNext
	mov edx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x10],edx
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CUIMiniMap::DrawIcon_0
	cmp dword ptr [esp+0x24],0
	jne Block2

 Block5:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret 8
}
}
// CUIMiniMap::SetSize
__SUB_CLASS_THIS0(003F6DE0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB54],0
	je Block25

 Block1:
	cmp dword ptr [esi+0xB08],0
	jne Block12

 Block2:
	cmp dword ptr [esi+0xAFC],0
	jne Block12

 Block3:
	mov ecx,dword ptr [esi+0xB54]
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	call IWzCanvas::Getwidth
	add eax,eax
	mov dword ptr [esi+0xB18],eax
	mov ecx,dword ptr [esi+0xB54]
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	call IWzCanvas::Getheight
	mov ecx,dword ptr [esi+0xB18]
	add eax,eax
	cmp ecx,0x230
	mov dword ptr [esi+0xB1C],eax
	jl Block9

 Block8:
	mov ecx,0x1A4

 Block9:
	cmp eax,0x12C
	mov dword ptr [esi+0xB10],ecx
	jl Block11

 Block10:
	mov eax,0xE1

 Block11:
	mov dword ptr [esi+0xB14],eax
	mov eax,dword ptr [esi+0xB38]
	mov dword ptr [esi+0xB30],eax
	pop esi
	pop ecx
	ret

 Block12:
	push edi
	mov edi,dword ptr [esi+0xB54]
	test edi,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+8]
	push edx
	push edi
	mov dword ptr [esp+0x10],0
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0xB18],ecx
	mov edi,dword ptr [esi+0xB54]
	test edi,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+8]
	push eax
	push edi
	mov dword ptr [esp+0x10],0
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esi+0xB18]
	cmp eax,0x118
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0xB1C],ecx
	jl Block22

 Block21:
	mov eax,0xD2

 Block22:
	cmp ecx,0x96
	mov dword ptr [esi+0xB10],eax
	jl Block24

 Block23:
	mov ecx,0x70

 Block24:
	mov edx,dword ptr [esi+0xB34]
	mov dword ptr [esi+0xB14],ecx
	mov dword ptr [esi+0xB30],edx
	pop edi

 Block25:
	pop esi
	pop ecx
	ret
}
}
// CUIMiniMap::MakeSimpleMiniMap
_SUB_EXCEPTION_HANDLER(407380)
__SUB_CLASS_THIS(00407380, __thiscall, 56210,  CUIMiniMap, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_407380
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	lea ebx,[esi+0xC68]
	mov dword ptr [esp+0x48],edi
	cmp dword ptr [ebx],edi
	je Block3

 Block1:
	mov eax,dword ptr [ebx]
	cmp eax,edi
	je Block3

 Block2:
	mov dword ptr [ebx],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	cmp dword ptr [esi+0xC6C],edi
	je Block6

 Block4:
	mov eax,dword ptr [esi+0xC6C]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0xC6C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea eax,[esp+0x1C]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],1
	cmp eax,edi
	je Block8

 Block7:
	mov eax,dword ptr [eax]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push edi
	push ebx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x48],0
	cmp ecx,edi
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x4C],2
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov esi,dword ptr [esi+0xB54]
	mov byte ptr [esp+0x48],3
	cmp esi,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],edi
	call ecx
	cmp eax,edi
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0xB54]
	mov edi,dword ptr [esp+0x18]
	test esi,esi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x24]
	push edx
	push edi
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea edx,[esp+0x1C]
	push 0x3D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [eax]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	mov ecx,dword ptr [esp+0x14]
	push 0
	add ecx,0xC6C
	push ecx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x48],0
	test ecx,ecx
	je Block38

 Block37:
	call _xbstr_t::Data_t::Release

 Block38:
	lea eax,[esp+0x20]
	push eax
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0x30]
	mov bl,5
	push edx
	mov byte ptr [esp+0x4C],bl
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ebp,dword ptr [esp+0x14]
	mov esi,dword ptr [ebp+0xB54]
	mov byte ptr [esp+0x48],6
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov esi,dword ptr [ebp+0xB54]
	mov edi,dword ptr [esp+0x1C]
	test esi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov ecx,dword ptr [ebp+0xC6C]
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[edi+edi]
	push edx
	lea edx,[eax+eax]
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],si
	jne Block59

 Block53:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],si
	jne Block60

 Block57:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block61

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block59:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x30]
	push ecx
	call edi
	jmp Block56

 Block60:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block61:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],7
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x50],8
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block66

 Block64:
	cmp eax,0x80004002
	je Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,ebp
	call CUIMiniMap::LoadFootHold
	test eax,eax
	sete bl
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block70:
	test bl,bl
	je Block73

 Block71:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block85

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block85

 Block73:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5FC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],9
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x50],0xA
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block78

 Block76:
	cmp eax,0x80004002
	je Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov ecx,ebp
	call CUIMiniMap::LoadLadderRope
	test eax,eax
	sete bl
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block82:
	test bl,bl
	jne Block71

 Block83:
	mov ecx,ebp
	call CUIMiniMap::MakeConvexLayer
	mov ecx,ebp
	call CUIMiniMap::MakeIconsForSimpleMiniMap
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUIMiniMap::SetCtrl_Simple
_SUB_EXCEPTION_HANDLER(3F9030)
__SUB_CLASS_THIS0(003F9030, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F9030
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
	xor ebx,ebx
	cmp dword ptr [esi+0xC90],ebx
	je Block2

 Block1:
	mov ebp,dword ptr [esi+0xAFC]
	jmp Block3

 Block2:
	mov ebp,2

 Block3:
	mov ecx,dword ptr [esi+0xBBC]
	cmp ecx,ebx
	je Block6

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBBC],ebx
	lea edi,[esi+0xBB8]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,dword ptr [esi+0xBB4]
	cmp ecx,ebx
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBB4],ebx
	lea edi,[esi+0xBB0]
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	mov ecx,dword ptr [esi+0xBAC]
	cmp ecx,ebx
	je Block12

 Block10:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBAC],ebx
	lea edi,[esi+0xBA8]
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,dword ptr [esi+0xBCC]
	cmp ecx,ebx
	je Block15

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBCC],ebx
	lea edi,[esi+0xBC8]
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3F28],ebx
	je Block41

 Block16:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIUIWINDOW2IMGMI__9
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push eax
	lea ecx,[esi+0xBB8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 1
	push 4
	sub eax,0x2E
	push eax
	push 0x3EA
	push esi
	call edx
	mov eax,ebp
	sub eax,ebx
	je Block32

 Block20:
	sub eax,1
	je Block27

 Block21:
	sub eax,1
	jne Block39

 Block22:
	push offset _S_UIUIWINDOW2IMGMI__8
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	push eax
	lea ecx,[esi+0xBB0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push 1
	push 4
	sub edx,0x3B
	push edx
	push 0x3E9
	push esi
	call eax
	cmp dword ptr [esi+0xC90],ebx
	jne Block39

 Block26:
	mov esi,dword ptr [esi+0xBB4]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push ebx
	call eax
	jmp Block39

 Block27:
	push offset _S_UIUIWINDOW2IMGMI__7
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push eax
	lea ecx,[esi+0xBA8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 1
	push 4
	sub eax,0x3B
	push eax
	push 0x3E8
	push esi
	call edx
	push offset _S_UIUIWINDOW2IMGMI__6
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],4
	cmp eax,ebx
	je Block37

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block38

 Block32:
	push offset _S_UIUIWINDOW2IMGMI__5
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],5
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push eax
	lea ecx,[esi+0xBA8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 1
	push 4
	sub eax,0x3B
	push eax
	push 0x3E8
	push esi
	call edx
	push offset _S_UIUIWINDOW2IMGMI__4
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],6
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	lea ecx,[esi+0xBC8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBCC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x28]
	push 1
	sub edx,0x10
	push edx
	mov edx,dword ptr [esi+0x24]
	sub edx,0x1E
	push edx
	push 0x3EB
	push esi
	call eax

 Block39:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
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
// CUIMiniMap::SetSearch
__SUB_CLASS_THIS(003F6DB0, __thiscall, 56193,  CUIMiniMap, void, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esp+8]
	push eax
	lea ecx,[esi+0xB78]
	call ZMap<unsigned long, tagPOINT, unsigned long>::RemoveKey
	lea ecx,[esp+8]
	push ecx
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::RemoveKey
	pop esi
	ret 4
}
}
// CUIMiniMap::ReloadMiniMap
__SUB_CLASS_THIS0(00408510, __thiscall, 56187,  CUIMiniMap, int32_t) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC84]
	push eax
	mov eax,dword ptr [esi+0xC74]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xC70]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov ecx,esi
	call CUIMiniMap::LoadMiniMap
	pop esi
	pop ecx
	ret
}
}
// CUIMiniMap::MakeIconsForSimpleMiniMap
_SUB_EXCEPTION_HANDLER(3FC210)
__SUB_CLASS_THIS0(003FC210, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3FC210
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
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x88],ebp
	call edi
	lea eax,[esp+0x1C]
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
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x19E7
	mov bl,1
	push eax
	mov byte ptr [esp+0xA0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x98],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x84],5
	cmp word ptr [esp+0x5C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block13:
	mov byte ptr [esp+0x84],6
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block17:
	cmp word ptr [esp+0x2C],8
	mov bl,7
	mov byte ptr [esp+0x84],bl
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block21:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp edi,ebp
	je Block218

 Block23:
	jmp Block217

 Block24:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x113F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x90],8
	cmp edi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x58]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBD0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1140
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0xA
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBD4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1141
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0xC
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xD
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1142
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0xE
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1143
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x10
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x11
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBE0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block57

 Block55:
	cmp eax,0x80004002
	je Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1144
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x12
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x13
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBE4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block64

 Block62:
	cmp eax,0x80004002
	je Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1AC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x14
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x15
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBE8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1145
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x16
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x17
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block78

 Block76:
	cmp eax,0x80004002
	je Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x59B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x18
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x19
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBF0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block85

 Block83:
	cmp eax,0x80004002
	je Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1146
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x1B
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBF4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block92

 Block90:
	cmp eax,0x80004002
	je Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1147
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x1C
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x1D
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBF8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block99

 Block97:
	cmp eax,0x80004002
	je Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1148
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x1E
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x1F
	call Ztl_variant_t::GetUnknown
	lea ebp,[esi+0xBFC]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block106

 Block104:
	cmp eax,0x80004002
	je Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1149
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x20
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x21
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC00]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block113

 Block111:
	cmp eax,0x80004002
	je Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x5EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x22
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x23
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC04]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block120

 Block118:
	cmp eax,0x80004002
	je Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x114A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x24
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x25
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC08]
	push eax
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
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block131:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x114B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x26
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x27
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC0C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block134

 Block132:
	cmp eax,0x80004002
	je Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x114C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x28
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x29
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC10]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block141

 Block139:
	cmp eax,0x80004002
	je Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x114D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x2A
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x2B
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC14]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block148

 Block146:
	cmp eax,0x80004002
	je Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block151

 Block149:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block152:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x114E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x2D
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC18]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block155

 Block153:
	cmp eax,0x80004002
	je Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x114F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x90],0x2E
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x2F
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC1C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block162

 Block160:
	cmp eax,0x80004002
	je Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1150
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x94],0x30
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x31
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC20]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block169

 Block167:
	cmp eax,0x80004002
	je Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block172

 Block170:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block173:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1151
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x90],0x32
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x94],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x33
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC24]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block176

 Block174:
	cmp eax,0x80004002
	je Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x88],0x34
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	push 0
	push 0
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x19E8
	push edx
	mov byte ptr [esp+0xA0],0x35
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x98],0x36
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea eax,[esp+0x80]
	mov byte ptr [esp+0x98],0x35
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x37
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC28]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block189

 Block187:
	cmp eax,0x80004002
	je Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x84],0x35
	jne Block192

 Block190:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],0x34
	jne Block196

 Block194:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],bl
	jne Block200

 Block198:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov eax,dword ptr [esi+0xBD4]
	mov ebx,dword ptr [esi+0xC2C]
	cmp ebx,eax
	je Block206

 Block202:
	mov dword ptr [esi+0xC2C],eax
	test eax,eax
	je Block204

 Block203:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block204:
	test ebx,ebx
	je Block206

 Block205:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block206:
	mov eax,dword ptr [ebp]
	mov ebx,dword ptr [esi+0xC30]
	cmp ebx,eax
	je Block211

 Block207:
	mov dword ptr [esi+0xC30],eax
	test eax,eax
	je Block209

 Block208:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block209:
	test ebx,ebx
	je Block211

 Block210:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block211:
	mov eax,dword ptr [esi+0xBE8]
	mov ebx,dword ptr [esi+0xC34]
	cmp ebx,eax
	je Block216

 Block212:
	mov dword ptr [esi+0xC34],eax
	test eax,eax
	je Block214

 Block213:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block214:
	test ebx,ebx
	je Block216

 Block215:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block216:
	mov dword ptr [esp+0x84],0xFFFFFFFF

 Block217:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block218:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret
}
}
// CUIMiniMap::~CUIMiniMap
_SUB_EXCEPTION_HANDLER(3F9550)
__SUB_CLASS_THIS0(003F9550, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F9550
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMiniMap::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMiniMap::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMiniMap::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],0x52
	call CUIMiniMap::DestroyMMWindow
	mov eax,dword ptr [esi+0xD18]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0x51
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xD14]
	mov byte ptr [esp+0x1C],0x50
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xD10]
	mov byte ptr [esp+0x1C],0x4F
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0xD0C]
	mov byte ptr [esp+0x1C],0x4E
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0xD08]
	mov byte ptr [esp+0x1C],0x4D
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esi+0xD04]
	mov byte ptr [esp+0x1C],0x4C
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0xD00]
	mov byte ptr [esp+0x1C],0x4B
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0xCFC]
	mov byte ptr [esp+0x1C],0x4A
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0xCF8]
	mov byte ptr [esp+0x1C],0x49
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esi+0xCF4]
	mov byte ptr [esp+0x1C],0x48
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0xCF0]
	mov byte ptr [esp+0x1C],0x47
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0xCEC]
	mov byte ptr [esp+0x1C],0x46
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi+0xCE8]
	mov byte ptr [esp+0x1C],0x45
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+0xCE4]
	mov byte ptr [esp+0x1C],0x44
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esi+0xCE0]
	mov byte ptr [esp+0x1C],0x43
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esi+0xCDC]
	mov byte ptr [esp+0x1C],0x42
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [esi+0xCD8]
	mov byte ptr [esp+0x1C],0x41
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esi+0xCD4]
	mov byte ptr [esp+0x1C],0x40
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esi+0xCD0]
	mov byte ptr [esp+0x1C],0x3F
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [esi+0xCCC]
	mov byte ptr [esp+0x1C],0x3E
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,dword ptr [esi+0xCC8]
	mov byte ptr [esp+0x1C],0x3D
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esi+0xCC4]
	mov byte ptr [esp+0x1C],0x3C
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esi+0xCC0]
	mov byte ptr [esp+0x1C],0x3B
	cmp eax,ebx
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,dword ptr [esi+0xCBC]
	mov byte ptr [esp+0x1C],0x3A
	cmp eax,ebx
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov eax,dword ptr [esi+0xCB8]
	mov byte ptr [esp+0x1C],0x39
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov eax,dword ptr [esi+0xCB4]
	mov byte ptr [esp+0x1C],0x38
	cmp eax,ebx
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [esi+0xCB0]
	mov byte ptr [esp+0x1C],0x37
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov eax,dword ptr [esi+0xCAC]
	mov byte ptr [esp+0x1C],0x36
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [esi+0xCA8]
	mov byte ptr [esp+0x1C],0x35
	cmp eax,ebx
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [esi+0xCA4]
	mov byte ptr [esp+0x1C],0x34
	cmp eax,ebx
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esi+0xCA0]
	mov byte ptr [esp+0x1C],0x33
	cmp eax,ebx
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov eax,dword ptr [esi+0xC9C]
	mov byte ptr [esp+0x1C],0x32
	cmp eax,ebx
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [esi+0xC98]
	mov byte ptr [esp+0x1C],0x31
	cmp eax,ebx
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov eax,dword ptr [esi+0xC94]
	mov byte ptr [esp+0x1C],0x30
	cmp eax,ebx
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,dword ptr [esi+0xC80]
	mov byte ptr [esp+0x1C],0x2F
	cmp eax,ebx
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [esi+0xC7C]
	mov byte ptr [esp+0x1C],0x2E
	cmp eax,ebx
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [esi+0xC78]
	mov byte ptr [esp+0x1C],0x2D
	cmp eax,ebx
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	mov eax,dword ptr [esi+0xC74]
	mov byte ptr [esp+0x1C],0x2C
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,dword ptr [esi+0xC70]
	mov byte ptr [esp+0x1C],0x2B
	cmp eax,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov eax,dword ptr [esi+0xC6C]
	mov byte ptr [esp+0x1C],0x2A
	cmp eax,ebx
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,dword ptr [esi+0xC68]
	mov byte ptr [esp+0x1C],0x29
	cmp eax,ebx
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	lea ecx,[esi+0xC54]
	mov byte ptr [esp+0x1C],0x28
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<SimpleMiniMap_LadderRope>>::`vftable'
	call ZList<ZRef<SimpleMiniMap_LadderRope>>::RemoveAll
	lea ecx,[esi+0xC50]
	mov byte ptr [esp+0x1C],0x27
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::RemoveAll
	lea ecx,[esi+0xC38]
	mov byte ptr [esp+0x1C],0x26
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::`vftable'
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::RemoveAll
	mov eax,dword ptr [esi+0xC34]
	mov byte ptr [esp+0x1C],0x25
	cmp eax,ebx
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov eax,dword ptr [esi+0xC30]
	mov byte ptr [esp+0x1C],0x24
	cmp eax,ebx
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov eax,dword ptr [esi+0xC2C]
	mov byte ptr [esp+0x1C],0x23
	cmp eax,ebx
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [esi+0xC28]
	mov byte ptr [esp+0x1C],0x22
	cmp eax,ebx
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [esi+0xC24]
	mov byte ptr [esp+0x1C],0x21
	cmp eax,ebx
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov eax,dword ptr [esi+0xC20]
	mov byte ptr [esp+0x1C],0x20
	cmp eax,ebx
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov eax,dword ptr [esi+0xC1C]
	mov byte ptr [esp+0x1C],0x1F
	cmp eax,ebx
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	mov eax,dword ptr [esi+0xC18]
	mov byte ptr [esp+0x1C],0x1E
	cmp eax,ebx
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	mov eax,dword ptr [esi+0xC14]
	mov byte ptr [esp+0x1C],0x1D
	cmp eax,ebx
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [esi+0xC10]
	mov byte ptr [esp+0x1C],0x1C
	cmp eax,ebx
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [esi+0xC0C]
	mov byte ptr [esp+0x1C],0x1B
	cmp eax,ebx
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [esi+0xC08]
	mov byte ptr [esp+0x1C],0x1A
	cmp eax,ebx
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	mov eax,dword ptr [esi+0xC04]
	mov byte ptr [esp+0x1C],0x19
	cmp eax,ebx
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov eax,dword ptr [esi+0xC00]
	mov byte ptr [esp+0x1C],0x18
	cmp eax,ebx
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	mov eax,dword ptr [esi+0xBFC]
	mov byte ptr [esp+0x1C],0x17
	cmp eax,ebx
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov eax,dword ptr [esi+0xBF8]
	mov byte ptr [esp+0x1C],0x16
	cmp eax,ebx
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov eax,dword ptr [esi+0xBF4]
	mov byte ptr [esp+0x1C],0x15
	cmp eax,ebx
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	mov eax,dword ptr [esi+0xBF0]
	mov byte ptr [esp+0x1C],0x14
	cmp eax,ebx
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	mov eax,dword ptr [esi+0xBEC]
	mov byte ptr [esp+0x1C],0x13
	cmp eax,ebx
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov eax,dword ptr [esi+0xBE8]
	mov byte ptr [esp+0x1C],0x12
	cmp eax,ebx
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov eax,dword ptr [esi+0xBE4]
	mov byte ptr [esp+0x1C],0x11
	cmp eax,ebx
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	mov eax,dword ptr [esi+0xBE0]
	mov byte ptr [esp+0x1C],0x10
	cmp eax,ebx
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	mov eax,dword ptr [esi+0xBDC]
	mov byte ptr [esp+0x1C],0xF
	cmp eax,ebx
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov eax,dword ptr [esi+0xBD8]
	mov byte ptr [esp+0x1C],0xE
	cmp eax,ebx
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov eax,dword ptr [esi+0xBD4]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block132:
	mov eax,dword ptr [esi+0xBD0]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	lea edi,[esi+0xBC8]
	mov byte ptr [esp+0x1C],0xB
	cmp dword ptr [edi+4],ebx
	je Block136

 Block135:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block136:
	lea edi,[esi+0xBC0]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block138

 Block137:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block138:
	lea edi,[esi+0xBB8]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block140

 Block139:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block140:
	lea edi,[esi+0xBB0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block142

 Block141:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block142:
	lea edi,[esi+0xBA8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block144

 Block143:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block144:
	lea ecx,[esi+0xB90]
	mov byte ptr [esp+0x1C],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZXString<char>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZXString<char>, unsigned long>::RemoveAll
	lea ecx,[esi+0xB78]
	mov byte ptr [esp+0x1C],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	call ZMap<unsigned long, tagPOINT, unsigned long>::RemoveAll
	lea ecx,[esi+0xB60]
	mov byte ptr [esp+0x1C],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, unsigned long, long>::`vftable'
	call ZMap<long, unsigned long, long>::RemoveAll
	lea ecx,[esi+0xB5C]
	mov byte ptr [esp+0x1C],3
	call ZArray<tagPOINT>::RemoveAll
	mov eax,dword ptr [esi+0xB58]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block146

 Block145:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block146:
	mov eax,dword ptr [esi+0xB54]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMiniMap>::ms_pInstance],ebx
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
// CUIMiniMap::SetLayer
_SUB_EXCEPTION_HANDLER(4011A0)
__SUB_CLASS_THIS0(004011A0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4011A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x114
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x128]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x38],ebp
	xor esi,esi
	mov dword ptr [esp+0x98],esi
	cmp dword ptr [ebp+0xB08],esi
	jne Block2

 Block1:
	call CUIMiniMap::SetLayer_Simple
	jmp Block533

 Block2:
	mov ebx,2
	cmp dword ptr [ebp+0xC90],esi
	je Block4

 Block3:
	mov eax,dword ptr [ebp+0xAFC]
	mov dword ptr [esp+0xA8],eax
	jmp Block5

 Block4:
	mov dword ptr [esp+0xA8],ebx

 Block5:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],0xFFFFFFFE
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x134],esi
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x130],1
	cmp ecx,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x40]
	cmp eax,esi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x130],0
	cmp eax,esi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0x64],8
	mov dword ptr [esp+0x130],0xFFFFFFFF
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,esi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3F28],esi
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0xB58]
	cmp eax,esi
	je Block533

 Block17:
	mov dword ptr [ebp+0xB58],esi
	jmp Block532

 Block18:
	mov edi,dword ptr [ebp+0xC70]
	mov dword ptr [esp+0x110],edi
	cmp edi,esi
	je Block20

 Block19:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block20:
	lea edx,[esp+0x18]
	push 0x6EB
	push edx
	mov dword ptr [esp+0x138],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0xC84]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x13C],3
	call CItemInfo::GetMapString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0xB8]
	mov byte ptr [esp+0x134],4
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x130],6
	cmp eax,esi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x130],7
	cmp eax,esi
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	lea edx,[esp+0x10C]
	push 0x6EC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0xC84]
	push eax
	lea ecx,[esp+0x11C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x13C],8
	call CItemInfo::GetMapString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0x134],9
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x114]
	mov byte ptr [esp+0x130],0xB
	cmp eax,esi
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x10C]
	mov byte ptr [esp+0x130],0xC
	cmp eax,esi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [esp+0xC0],esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x6ED
	push edx
	mov byte ptr [esp+0x13C],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x134],0xE
	cmp edi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x78]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x138],0xD
	call IWzProperty::Getitem
	cmp word ptr [eax],si
	setne bl
	cmp word ptr [esp+0x74],8
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	test bl,bl
	je Block55

 Block35:
	lea eax,[esp+0x84]
	push 0x6EE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x6ED
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0x13C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x78]
	mov byte ptr [esp+0x134],0x10
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x138],bl
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x138],0x11
	call DetachBSTR
	add esp,8
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x130],0x13
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,esi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	lea eax,[esp+0x18]
	push 0x1A54
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,dword ptr [esp+0x40]
	mov ecx,dword ptr [eax]
	cmp ebx,esi
	je Block41

 Block40:
	mov eax,dword ptr [ebx]
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	push ecx
	push eax
	call __wcsicmp
	mov edi,eax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	cmp eax,esi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	cmp edi,esi
	je Block51

 Block45:
	cmp ebx,esi
	je Block47

 Block46:
	mov eax,dword ptr [ebx]
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	push eax
	lea ecx,[esp+0x88]
	call ZXString16::op_add_assign_t_0
	push offset _D_VTMISSING
	lea ecx,[esp+0xE8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x134],0x14
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x84]
	push esi
	push esi
	lea ecx,[esp+0xEC]
	push ecx
	lea edx,[esp+0x94]
	push edx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x148],0x15
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x144],0x16
	cmp dword ptr [_D_G_RM],esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea ecx,[esp+0x12C]
	push ecx
	mov byte ptr [esp+0x148],0x15
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x138],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xC4]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x118]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xE4]
	call Ztl_variant_t::~Ztl_variant_t

 Block51:
	cmp ebx,esi
	je Block53

 Block52:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block53:
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x130],0xD
	cmp eax,esi
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	lea edx,[esp+0x40]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea esi,[ebp+0xC7C]
	push 0
	push esi
	push eax
	mov byte ptr [esp+0x13C],0x18
	mov dword ptr [esp+0x3C],esi
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0x130],0xD
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block57:
	lea eax,[esp+0x40]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x134],0x19
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x74]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A25
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0x148],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x140],0x1B
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov byte ptr [esp+0x140],bl
	call IWzFont::Create
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x130],0x19
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x130],0xD
	test ecx,ecx
	je Block65

 Block64:
	call _xbstr_t::Data_t::Release

 Block65:
	lea edx,[esp+0x18]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea edi,[ebp+0xC80]
	push 0
	push edi
	push eax
	mov byte ptr [esp+0x13C],0x1C
	mov dword ptr [esp+0x4C],edi
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x130],0xD
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block67:
	lea eax,[esp+0x18]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov bl,0x1D
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x134],bl
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x74]
	push ecx
	push 0xFF52759C
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x148],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x140],0x1F
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov byte ptr [esp+0x140],0x1E
	call IWzFont::Create
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x130],bl
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x130],0xD
	test ecx,ecx
	je Block75

 Block74:
	call _xbstr_t::Data_t::Release

 Block75:
	lea edx,[esp+0x18]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[ebp+0xC78]
	push edi
	push eax
	mov byte ptr [esp+0x13C],0x20
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x130],0xD
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea edx,[esp+0x64]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A25
	mov bl,0x21
	push eax
	mov byte ptr [esp+0x148],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x140],0x22
	test ecx,ecx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov byte ptr [esp+0x140],bl
	call IWzFont::Create
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x130],0xD
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	cmp dword ptr [esp+0xC0],0
	sete bl
	mov byte ptr [esp+0x2F],bl
	test bl,bl
	jne Block90

 Block88:
	cmp dword ptr [esp+0xA8],0
	jne Block90

 Block89:
	mov edi,0x28
	jmp Block91

 Block90:
	xor edi,edi

 Block91:
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xBC]
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block93

 Block92:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block93:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x138],0x24
	test ecx,ecx
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	mov byte ptr [esp+0x138],0x23
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x64],8
	lea ebp,[eax+edi+5]
	mov dword ptr [esp+0x3C],ebp
	mov byte ptr [esp+0x130],0xD
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	test bl,bl
	jne Block104

 Block102:
	cmp dword ptr [esp+0xA8],0
	jne Block104

 Block103:
	mov edi,0x28
	jmp Block105

 Block104:
	xor edi,edi

 Block105:
	lea ecx,[esp+0x64]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block107

 Block106:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block107:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x138],0x26
	test ecx,ecx
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov byte ptr [esp+0x138],0x25
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x64],8
	lea edi,[eax+edi+5]
	mov byte ptr [esp+0x130],0xD
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block113:
	cmp edi,ebp
	mov eax,ebp
	jl Block115

 Block114:
	mov eax,edi

 Block115:
	mov esi,dword ptr [esp+0x38]
	mov edx,dword ptr [esi+0xB10]
	cmp edx,eax
	mov ecx,eax
	jl Block117

 Block116:
	mov ecx,edx

 Block117:
	mov eax,dword ptr [esp+0xA8]
	sub eax,0
	je Block124

 Block118:
	sub eax,1
	je Block121

 Block119:
	sub eax,1
	jne Block127

 Block120:
	lea ecx,[edi+ebp+0x50]
	mov dword ptr [esi+0x24],ecx
	mov dword ptr [esi+0x28],0x14
	jmp Block127

 Block121:
	lea eax,[edx+0x12]
	cmp eax,0x81
	jg Block123

 Block122:
	mov eax,0x81

 Block123:
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [esi+0xB14]
	add eax,0x1E
	mov dword ptr [esi+0x28],eax
	jmp Block127

 Block124:
	lea eax,[ecx+0x12]
	cmp eax,0x81
	jg Block126

 Block125:
	mov eax,0x81

 Block126:
	mov ecx,dword ptr [esi+0xB14]
	add ecx,0x46
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x28],ecx

 Block127:
	mov eax,dword ptr [esi+0x24]
	sub eax,edx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0xB44],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x18]
	push 0x3D0
	push edx
	mov byte ptr [esp+0x138],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x13C],0x28
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x130],0x27
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block129:
	lea edx,[esp+0xC4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	mov bl,0x29
	push ecx
	mov byte ptr [esp+0x134],bl
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x130],0x2A
	cmp ecx,esi
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	lea eax,[esp+0xC4]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x68]
	push edx
	mov edx,dword ptr [eax+0x28]
	mov eax,dword ptr [eax+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x130],bl
	cmp word ptr [esp+0x64],di
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,esi
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov byte ptr [esp+0x130],0x27
	cmp word ptr [esp+0xC4],di
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,esi
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov edx,dword ptr [eax]
	push esi
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	cmp eax,esi
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push esi
	push eax
	mov edi,eax
	call edx
	cmp eax,esi
	jge Block151

 Block150:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block151:
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[esp+0xC4]
	push edx
	mov byte ptr [esp+0x134],0x2B
	call ebp
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	push esi
	push esi
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0xD0]
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x2C
	push offset _S_UIUIWINDOW2IMGMI__12
	mov byte ptr [esp+0x148],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x144],0x2D
	cmp dword ptr [_D_G_RM],esi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	lea eax,[esp+0x12C]
	mov byte ptr [esp+0x144],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x138],0x2E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA8]
	mov dword ptr [esp+0xA8],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block160

 Block158:
	cmp eax,0x80004002
	je Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	mov edi,8
	mov byte ptr [esp+0x130],0x30
	cmp word ptr [esp+0x118],di
	jne Block167

 Block161:
	mov eax,dword ptr [esp+0x120]
	xor ecx,ecx
	mov word ptr [esp+0x118],cx
	cmp eax,esi
	je Block163

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block163:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block164:
	mov byte ptr [esp+0x130],0x31
	cmp word ptr [esp+0xC4],di
	jne Block168

 Block165:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,esi
	je Block169

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block167:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x118]
	push edx
	call ebp
	jmp Block164

 Block168:
	lea ecx,[esp+0xC4]
	push ecx
	call ebp

 Block169:
	mov byte ptr [esp+0x130],0x32
	cmp word ptr [esp+0x64],di
	jne Block172

 Block170:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,esi
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea eax,[esp+0x64]
	push eax
	call ebp

 Block173:
	mov dword ptr [esp+0xB8],esi
	mov dword ptr [esp+0xBC],esi
	mov edi,dword ptr [esp+0xA8]
	mov byte ptr [esp+0x130],0x34
	cmp edi,esi
	je Block202

 Block174:
	cmp edi,1
	je Block203

 Block175:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x13C],0x6A
	cmp ecx,esi
	jne Block177

 Block176:
	push 0x80004003
	call _com_issue_error

 Block177:
	lea edx,[esp+0x94]
	push edx
	mov byte ptr [esp+0x140],0x34
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x6B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA8]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0x130],0x34
	call Ztl_variant_t::~Ztl_variant_t
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x13C],0x6C
	cmp ebp,esi
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	lea ecx,[esp+0xE0]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x34
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x6D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0xD4]
	mov byte ptr [esp+0x130],0x6F
	call Ztl_variant_t::~Ztl_variant_t
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x100]
	mov byte ptr [esp+0x13C],0x70
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x6F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x71
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0xF4]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov edi,0xFF
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],edi
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x130],0x74
	cmp ecx,esi
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov ebx,dword ptr [esp+0x40]
	lea edx,[esp+0x88]
	push edx
	push ebx
	push esi
	push esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x88],ax
	mov dword ptr [esp+0x90],edi
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x130],0x75
	cmp edi,esi
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	lea ecx,[esp+0x88]
	push ecx
	push edi
	push 0
	mov ecx,edi
	mov esi,eax
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [edx+0x24]
	sub ecx,eax
	push ecx
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0x130],0x73
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x13C],0x76
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x73
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x77
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x130],0x79
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xE8]
	call Ztl_variant_t::_ctor_1
	mov ebp,dword ptr [esp+0x58]
	mov byte ptr [esp+0x130],0x7A
	test ebp,ebp
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	test ebx,ebx
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	mov ecx,ebx
	mov dword ptr [esp+0x54],eax
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x38]
	mov esi,dword ptr [ecx+0x24]
	lea edx,[esp+0xE4]
	push edx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebp
	sub esi,eax
	call IWzCanvas::Getheight
	push eax
	mov ecx,edi
	call IWzCanvas::Getwidth
	sub esi,eax
	push esi
	push 0xFF
	push ebp
	push 0
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esp+0x7C]
	push eax
	call IWzCanvas::CopyEx
	lea ecx,[esp+0xE4]
	mov byte ptr [esp+0x130],0x79
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x134],0x7B
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x74]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea ecx,[esp+0x8C]
	add eax,0xC78
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xC4]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block193

 Block192:
	mov edx,ecx
	add edx,8
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block193:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x7D
	test ecx,ecx
	jne Block195

 Block194:
	push 0x80004003
	call _com_issue_error

 Block195:
	push 5
	push 6
	mov byte ptr [esp+0x148],0x7C
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x130],0x79
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xE8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x134],0x7E
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x38]
	lea eax,[esp+0xE4]
	push eax
	mov eax,dword ptr [edx+0xC78]
	lea ecx,[esp+0x8C]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S___5
	mov byte ptr [esp+0x144],0x7F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x80
	test ecx,ecx
	jne Block197

 Block196:
	push 0x80004003
	call _com_issue_error

 Block197:
	mov esi,dword ptr [esp+0x4C]
	push 5
	lea eax,[esi+2]
	push eax
	mov byte ptr [esp+0x148],0x7F
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xE4]
	mov byte ptr [esp+0x130],0x79
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x134],0x81
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x38]
	mov eax,dword ptr [eax+0xC78]
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x8C]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xC0]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block199

 Block198:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x83
	test ecx,ecx
	jne Block201

 Block200:
	push 0x80004003
	call _com_issue_error

 Block201:
	push 5
	add esi,6
	push esi
	mov byte ptr [esp+0x148],0x82
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x134],0x73
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x134],0x6F
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x134],0x34
	call ecx
	jmp Block473

 Block202:
	lea edx,[esp+0x108]
	push 0xA65
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,1
	jmp Block204

 Block203:
	lea eax,[esp+0x104]
	push 0xA66
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,2

 Block204:
	mov eax,dword ptr [eax]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA4],ebx
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block206

 Block205:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block206:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr [esp+0x13C],0x37
	cmp ecx,esi
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0x140],0x36
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x138],0x38
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0x88],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block211

 Block209:
	cmp eax,0x80004002
	je Block211

 Block210:
	push eax
	call _com_issue_error

 Block211:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x130],0x3A
	jne Block214

 Block212:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,esi
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea ecx,[esp+0x74]
	push ecx
	call ebp

 Block215:
	test bl,2
	je Block218

 Block216:
	mov ecx,dword ptr [esp+0x104]
	and ebx,0xFFFFFFFD
	cmp ecx,esi
	je Block218

 Block217:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x104],esi

 Block218:
	mov byte ptr [esp+0x130],0x3C
	test bl,1
	je Block221

 Block219:
	mov ecx,dword ptr [esp+0x108]
	cmp ecx,esi
	je Block221

 Block220:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x108],esi

 Block221:
	mov edx,dword ptr [esp+0x38]
	push esi
	neg edi
	push esi
	push ecx
	sbb edi,edi
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	and edi,0xFFFFFFD8
	push 0x5A0
	add edi,0x3D
	push eax
	mov dword ptr [edx+0xB48],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x90]
	mov byte ptr [esp+0x13C],0x3D
	cmp ebp,esi
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	lea ecx,[esp+0xE0]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x3C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x3E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA0]
	mov dword ptr [esp+0xA0],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block226

 Block224:
	cmp eax,0x80004002
	je Block226

 Block225:
	push eax
	call _com_issue_error

 Block226:
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x130],0x40
	jne Block229

 Block227:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	cmp eax,esi
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block232

 Block231:
	push eax
	call _com_issue_error

 Block232:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x130],0x41
	cmp ecx,esi
	jne Block234

 Block233:
	push 0x80004003
	call _com_issue_error

 Block234:
	mov edx,dword ptr [esp+0x9C]
	lea eax,[esp+0x1C]
	push eax
	push edx
	push esi
	push esi
	call IWzCanvas::Copy
	mov edi,8
	mov byte ptr [esp+0x130],0x40
	cmp word ptr [esp+0x1C],di
	jne Block237

 Block235:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x100]
	mov byte ptr [esp+0x13C],0x42
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x40
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x43
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x9C]
	mov dword ptr [esp+0x9C],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block241

 Block239:
	cmp eax,0x80004002
	je Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	mov byte ptr [esp+0x130],0x45
	cmp word ptr [esp+0xF4],di
	jne Block244

 Block242:
	mov eax,dword ptr [esp+0xFC]
	xor ecx,ecx
	mov word ptr [esp+0xF4],cx
	cmp eax,esi
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea edx,[esp+0xF4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block245:
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block247

 Block246:
	push eax
	call _com_issue_error

 Block247:
	mov edi,dword ptr [esp+0x98]
	mov byte ptr [esp+0x130],0x46
	cmp edi,esi
	jne Block249

 Block248:
	push 0x80004003
	call _com_issue_error

 Block249:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x60]
	push eax
	push edi
	mov dword ptr [esp+0x68],esi
	call ecx
	cmp eax,esi
	jge Block251

 Block250:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block251:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,esi
	jne Block253

 Block252:
	push 0x80004003
	call _com_issue_error

 Block253:
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [eax+0x24]
	sub edx,dword ptr [esp+0x64]
	push edi
	push esi
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x45
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xF0]
	mov byte ptr [esp+0x13C],0x47
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x45
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x48
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA4]
	mov dword ptr [esp+0xA4],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block260

 Block258:
	cmp eax,0x80004002
	je Block260

 Block259:
	push eax
	call _com_issue_error

 Block260:
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x130],0x4A
	jne Block263

 Block261:
	mov eax,dword ptr [esp+0xEC]
	xor ecx,ecx
	mov word ptr [esp+0xE4],cx
	cmp eax,esi
	je Block264

 Block262:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block264

 Block263:
	lea edx,[esp+0xE4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block264:
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block266

 Block265:
	push eax
	call _com_issue_error

 Block266:
	mov edi,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x130],0x4B
	cmp edi,esi
	jne Block268

 Block267:
	push 0x80004003
	call _com_issue_error

 Block268:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x60]
	push eax
	push edi
	mov dword ptr [esp+0x68],esi
	call ecx
	cmp eax,esi
	jge Block270

 Block269:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block270:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,esi
	jne Block272

 Block271:
	push 0x80004003
	call _com_issue_error

 Block272:
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [eax+0x28]
	sub edx,dword ptr [esp+0x64]
	push edi
	push edx
	push esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4A
	jne Block275

 Block273:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1AD4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x94]
	mov byte ptr [esp+0x13C],0x4C
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x4A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x4D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block279

 Block277:
	cmp eax,0x80004002
	je Block279

 Block278:
	push eax
	call _com_issue_error

 Block279:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x130],0x4F
	jne Block282

 Block280:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	cmp eax,esi
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block283:
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block285

 Block284:
	push eax
	call _com_issue_error

 Block285:
	mov ebx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x130],0x50
	cmp ebx,esi
	jne Block287

 Block286:
	push 0x80004003
	call _com_issue_error

 Block287:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x5C]
	push eax
	push ebx
	mov dword ptr [esp+0x64],esi
	call ecx
	cmp eax,esi
	jge Block289

 Block288:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block289:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [esp+0x5C]
	lea eax,[esp+0x3C]
	push eax
	push ebx
	mov dword ptr [esp+0x44],esi
	call ecx
	cmp eax,esi
	jge Block291

 Block290:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block291:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,esi
	jne Block293

 Block292:
	push 0x80004003
	call _com_issue_error

 Block293:
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [eax+0x28]
	mov eax,dword ptr [eax+0x24]
	sub eax,dword ptr [esp+0x40]
	push ebx
	sub edx,edi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block296

 Block294:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,esi
	je Block297

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block297

 Block296:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block297:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x140],0x51
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x4F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x52
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xBC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block300

 Block298:
	cmp eax,0x80004002
	je Block300

 Block299:
	push eax
	call _com_issue_error

 Block300:
	mov edi,8
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x44],di
	jne Block303

 Block301:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,esi
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block304:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x13C],0x53
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x140],0x4F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x54
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xC0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block307

 Block305:
	cmp eax,0x80004002
	je Block307

 Block306:
	push eax
	call _com_issue_error

 Block307:
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x44],di
	jne Block310

 Block308:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,esi
	je Block311

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block311

 Block310:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block311:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block313

 Block312:
	push eax
	call _com_issue_error

 Block313:
	mov ebx,dword ptr [esp+0xB8]
	mov byte ptr [esp+0x130],0x55
	cmp ebx,esi
	jne Block315

 Block314:
	push 0x80004003
	call _com_issue_error

 Block315:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x3C]
	push edx
	push ebx
	mov dword ptr [esp+0x44],esi
	call eax
	cmp eax,esi
	jge Block317

 Block316:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block317:
	mov ebp,dword ptr [esp+0x9C]
	mov esi,dword ptr [esp+0x3C]
	xor edi,edi
	cmp ebp,edi
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x5C]
	push edx
	push ebp
	mov dword ptr [esp+0x64],edi
	call eax
	cmp eax,edi
	jge Block321

 Block320:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block321:
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],edi
	mov edi,dword ptr [esp+0x98]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x54]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block323

 Block322:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block323:
	mov eax,dword ptr [esp+0x9C]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x54]
	lea edx,[esp+0x58]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x60],0
	call eax
	test eax,eax
	jge Block325

 Block324:
	mov ecx,dword ptr [esp+0x9C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block325:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block327

 Block326:
	push 0x80004003
	call _com_issue_error

 Block327:
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [esp+0x5C]
	push 0
	push 0
	push 0
	push 0
	push esi
	sub edx,edi
	sub edx,ebp
	push edx
	push 0xFF
	push ebx
	push 0
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block330

 Block328:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block331

 Block329:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block331

 Block330:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block331:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block333

 Block332:
	push eax
	call _com_issue_error

 Block333:
	mov edi,dword ptr [esp+0xBC]
	mov byte ptr [esp+0x130],0x56
	cmp edi,ebx
	jne Block335

 Block334:
	push 0x80004003
	call _com_issue_error

 Block335:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x58]
	push eax
	push edi
	mov dword ptr [esp+0x60],ebx
	call ecx
	cmp eax,ebx
	jge Block337

 Block336:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block337:
	mov edx,dword ptr [esp+0x58]
	mov esi,dword ptr [esp+0xA0]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x54]
	push ecx
	mov dword ptr [esp+0xB0],edx
	mov edx,dword ptr [eax+0x40]
	push esi
	mov dword ptr [esp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block339

 Block338:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block339:
	mov ebx,dword ptr [esp+0x60]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	mov esi,dword ptr [esp+0x54]
	lea ecx,[esp+0x3C]
	push ecx
	xor ebp,ebp
	push ebx
	mov dword ptr [esp+0x44],ebp
	call edx
	cmp eax,ebp
	jge Block341

 Block340:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block341:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	mov ebx,dword ptr [esp+0x3C]
	lea ecx,[esp+0x5C]
	push ecx
	push edi
	mov dword ptr [esp+0x64],ebp
	call edx
	cmp eax,ebp
	jge Block343

 Block342:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block343:
	mov eax,dword ptr [esp+0xA0]
	mov ecx,dword ptr [eax]
	mov ebp,dword ptr [esp+0x5C]
	lea edx,[esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block345

 Block344:
	mov ecx,dword ptr [esp+0xA0]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block345:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block347

 Block346:
	push 0x80004003
	call _com_issue_error

 Block347:
	mov eax,dword ptr [esp+0xAC]
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x50]
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [eax+0x28]
	sub edx,ebx
	sub edx,esi
	push edx
	mov edx,dword ptr [esp+0x34]
	push 0xFF
	push edi
	sub eax,ebp
	push eax
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block350

 Block348:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	xor ebp,ebp
	cmp eax,ebp
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor ebp,ebp

 Block351:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x90]
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x13C],0x57
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x140],0x4F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x58
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xBC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block354

 Block352:
	cmp eax,0x80004002
	je Block354

 Block353:
	push eax
	call _com_issue_error

 Block354:
	mov edi,8
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x44],di
	jne Block357

 Block355:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block358

 Block356:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block357:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block358:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x5A3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x140],0x59
	mov ecx,esi
	mov byte ptr [esp+0x140],0x4F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x138],0x5A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xC0]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block361

 Block359:
	cmp eax,0x80004002
	je Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x44],di
	jne Block364

 Block362:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,ebp
	je Block365

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block365

 Block364:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block365:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block367

 Block366:
	push eax
	call _com_issue_error

 Block367:
	mov esi,dword ptr [esp+0x9C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov byte ptr [esp+0x138],0x5B
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block369

 Block368:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block369:
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0xA0]
	mov ecx,dword ptr [edi]
	lea edx,[esp+0x58]
	push edx
	mov dword ptr [esp+0xB0],eax
	mov eax,dword ptr [ecx+0x48]
	push edi
	mov dword ptr [esp+0x60],ebp
	call eax
	cmp eax,ebp
	jge Block371

 Block370:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block371:
	mov edi,dword ptr [esp+0xB8]
	mov ebx,dword ptr [esp+0x58]
	cmp edi,ebp
	jne Block373

 Block372:
	push 0x80004003
	call _com_issue_error

 Block373:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x54]
	push edx
	push edi
	mov dword ptr [esp+0x5C],ebp
	call eax
	cmp eax,ebp
	jge Block375

 Block374:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block375:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	mov ebp,dword ptr [esp+0x54]
	lea edx,[esp+0x3C]
	push edx
	push esi
	mov dword ptr [esp+0x44],0
	call eax
	test eax,eax
	jge Block377

 Block376:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block377:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block379

 Block378:
	push 0x80004003
	call _com_issue_error

 Block379:
	mov esi,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x40]
	push 0
	push 0
	push 0
	push 0
	sub eax,ebx
	sub eax,dword ptr [esp+0xC0]
	push eax
	push ebp
	push 0xFF
	push edi
	push edx
	push 0
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block382

 Block380:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	xor ebx,ebx
	cmp eax,ebx
	je Block383

 Block381:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block383

 Block382:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor ebx,ebx

 Block383:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block385

 Block384:
	push eax
	call _com_issue_error

 Block385:
	mov ebp,dword ptr [esp+0x98]
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push ebp
	mov byte ptr [esp+0x138],0x5C
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block387

 Block386:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block387:
	mov ecx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x60]
	mov edx,dword ptr [edi]
	lea eax,[esp+0x58]
	push eax
	mov dword ptr [esp+0x38],ecx
	mov ecx,dword ptr [edx+0x48]
	push edi
	mov dword ptr [esp+0x60],ebx
	call ecx
	cmp eax,ebx
	jge Block389

 Block388:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block389:
	mov edi,dword ptr [esp+0xBC]
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [esp+0xAC],edx
	cmp edi,ebx
	jne Block391

 Block390:
	push 0x80004003
	call _com_issue_error

 Block391:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x54]
	push ecx
	push edi
	mov dword ptr [esp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block393

 Block392:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block393:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	mov ebx,dword ptr [esp+0x54]
	lea ecx,[esp+0x3C]
	push ecx
	push ebp
	mov dword ptr [esp+0x44],0
	call edx
	test eax,eax
	jge Block395

 Block394:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block395:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ebp,dword ptr [esp+0x3C]
	lea ecx,[esp+0x5C]
	push ecx
	push edi
	mov dword ptr [esp+0x64],0
	call edx
	test eax,eax
	jge Block397

 Block396:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block397:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block399

 Block398:
	push 0x80004003
	call _com_issue_error

 Block399:
	mov edx,dword ptr [esi+0x28]
	sub edx,dword ptr [esp+0xAC]
	lea eax,[esp+0x1C]
	sub edx,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,dword ptr [esp+0x60]
	push 0
	push 0
	push 0
	push 0
	push edx
	push ebx
	push 0xFF
	push edi
	push ebp
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block402

 Block400:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block403

 Block401:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block403

 Block402:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block403:
	cmp dword ptr [esp+0xA8],0
	jne Block472

 Block404:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block406

 Block405:
	push eax
	call _com_issue_error

 Block406:
	lea edx,[esp+0x1C]
	mov bl,0x5D
	push edx
	mov byte ptr [esp+0x134],bl
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block408

 Block407:
	push eax
	call _com_issue_error

 Block408:
	mov eax,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0xB4]
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block410

 Block409:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block410:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x5F
	test ecx,ecx
	jne Block412

 Block411:
	push 0x80004003
	call _com_issue_error

 Block412:
	xor edx,edx
	cmp byte ptr [esp+0x3F],dl
	push 0x15
	setne dl
	mov byte ptr [esp+0x144],0x5E
	dec edx
	and edx,0x28
	add edx,9
	push edx
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x130],bl
	mov ebx,8
	cmp word ptr [esp+0x1C],bx
	jne Block415

 Block413:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block416

 Block414:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block416

 Block415:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block416:
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x44],bx
	jne Block419

 Block417:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block420

 Block418:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block420

 Block419:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block420:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block422

 Block421:
	push eax
	call _com_issue_error

 Block422:
	lea eax,[esp+0x44]
	mov bl,0x60
	push eax
	mov byte ptr [esp+0x134],bl
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block424

 Block423:
	push eax
	call _com_issue_error

 Block424:
	mov ebp,dword ptr [esp+0x30]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [ebp]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block426

 Block425:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block426:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x62
	test ecx,ecx
	jne Block428

 Block427:
	push 0x80004003
	call _com_issue_error

 Block428:
	xor edx,edx
	cmp byte ptr [esp+0x3F],dl
	mov edi,8
	setne dl
	push 0x14
	mov byte ptr [esp+0x144],0x61
	dec edx
	and edx,0x28
	add edx,edi
	push edx
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x130],bl
	cmp word ptr [esp+0x44],di
	jne Block431

 Block429:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block432

 Block430:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block432

 Block431:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block432:
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x1C],di
	jne Block435

 Block433:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block436

 Block434:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block436

 Block435:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block436:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block438

 Block437:
	push eax
	call _com_issue_error

 Block438:
	lea eax,[esp+0x44]
	mov bl,0x63
	push eax
	mov byte ptr [esp+0x134],bl
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block440

 Block439:
	push eax
	call _com_issue_error

 Block440:
	mov ecx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0xB0]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [ecx]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block442

 Block441:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block442:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x65
	test ecx,ecx
	jne Block444

 Block443:
	push 0x80004003
	call _com_issue_error

 Block444:
	xor eax,eax
	cmp byte ptr [esp+0x3F],al
	push 0x23
	setne al
	mov byte ptr [esp+0x144],0x64
	dec eax
	and eax,0x28
	add eax,9
	push eax
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x130],bl
	jne Block447

 Block445:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block448

 Block446:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block448

 Block447:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block448:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x130],0x4F
	jne Block451

 Block449:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block452

 Block450:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block452

 Block451:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block452:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block454

 Block453:
	push eax
	call _com_issue_error

 Block454:
	lea ecx,[esp+0x44]
	mov bl,0x66
	push ecx
	mov byte ptr [esp+0x134],bl
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block456

 Block455:
	push eax
	call _com_issue_error

 Block456:
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x48]
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block458

 Block457:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block458:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x68
	test ecx,ecx
	jne Block460

 Block459:
	push 0x80004003
	call _com_issue_error

 Block460:
	xor edx,edx
	cmp byte ptr [esp+0x3F],dl
	mov esi,8
	setne dl
	push 0x22
	mov byte ptr [esp+0x144],0x67
	dec edx
	and edx,0x28
	add edx,esi
	push edx
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x130],bl
	cmp word ptr [esp+0x44],si
	jne Block463

 Block461:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block464

 Block462:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block464

 Block463:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block464:
	mov byte ptr [esp+0x130],0x4F
	cmp word ptr [esp+0x1C],si
	jne Block467

 Block465:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block468

 Block466:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block468

 Block467:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block468:
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block472

 Block469:
	mov ecx,3
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],0xFF
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x130],0x69
	test ecx,ecx
	jne Block471

 Block470:
	push 0x80004003
	call _com_issue_error

 Block471:
	lea edx,[esp+0x88]
	push edx
	push eax
	push 0x11
	push 7
	call IWzCanvas::Copy
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t

 Block472:
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x4A
	call edx
	mov eax,dword ptr [esp+0xA0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x45
	call edx
	mov eax,dword ptr [esp+0x98]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x40
	call edx
	mov eax,dword ptr [esp+0x9C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x3C
	call edx
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x34
	call edx

 Block473:
	mov edi,dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x38]
	lea eax,[esp+0x74]
	push eax
	call edi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block475

 Block474:
	push eax
	call _com_issue_error

 Block475:
	lea edx,[esp+0xD4]
	push edx
	mov byte ptr [esp+0x134],0x84
	call edi
	lea eax,[esp+0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block477

 Block476:
	push eax
	call _com_issue_error

 Block477:
	lea ecx,[esp+0xF4]
	push ecx
	mov byte ptr [esp+0x134],0x85
	call edi
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block479

 Block478:
	push eax
	call _com_issue_error

 Block479:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x134],0x86
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block481

 Block480:
	push eax
	call _com_issue_error

 Block481:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x134],0x87
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block483

 Block482:
	push eax
	call _com_issue_error

 Block483:
	lea ecx,[esp+0x30]
	push ecx
	mov bl,0x88
	mov ecx,ebp
	mov byte ptr [esp+0x134],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x130],0x89
	test ecx,ecx
	jne Block485

 Block484:
	push 0x80004003
	call _com_issue_error

 Block485:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0xD8]
	push eax
	lea edx,[esp+0xFC]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x54]
	push edx
	push eax
	lea edx,[esp+0xA0]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x88],di
	jne Block494

 Block486:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block488

 Block487:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block488:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block489:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x130],bl
	test eax,eax
	je Block491

 Block490:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block491:
	mov byte ptr [esp+0x130],0x87
	cmp word ptr [esp+0x44],di
	jne Block495

 Block492:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block496

 Block493:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block496

 Block494:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x88]
	push ecx
	call esi
	jmp Block489

 Block495:
	lea edx,[esp+0x44]
	push edx
	call esi

 Block496:
	mov byte ptr [esp+0x130],0x86
	cmp word ptr [esp+0x1C],di
	jne Block499

 Block497:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block500

 Block498:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block500

 Block499:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block500:
	mov byte ptr [esp+0x130],0x85
	cmp word ptr [esp+0xF4],di
	jne Block503

 Block501:
	mov eax,dword ptr [esp+0xFC]
	xor edx,edx
	mov word ptr [esp+0xF4],dx
	test eax,eax
	je Block504

 Block502:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block504

 Block503:
	lea eax,[esp+0xF4]
	push eax
	call esi

 Block504:
	mov byte ptr [esp+0x130],0x84
	cmp word ptr [esp+0xD4],di
	jne Block507

 Block505:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	test eax,eax
	je Block508

 Block506:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block508

 Block507:
	lea edx,[esp+0xD4]
	push edx
	call esi

 Block508:
	mov byte ptr [esp+0x130],0x34
	cmp word ptr [esp+0x74],di
	jne Block511

 Block509:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block512

 Block510:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block512

 Block511:
	lea ecx,[esp+0x74]
	push ecx
	call esi

 Block512:
	push 0xFFFFFFFF
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	lea eax,[esp+0x38]
	push eax
	call CLayoutMan::CopyToEmptyLayerOverlay
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xB58]
	add esp,0xC
	cmp esi,eax
	je Block517

 Block513:
	mov dword ptr [ebp+0xB58],eax
	test eax,eax
	je Block515

 Block514:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block515:
	test esi,esi
	je Block517

 Block516:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block517:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block519

 Block518:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block519:
	mov eax,dword ptr [esp+0xBC]
	mov byte ptr [esp+0x130],0x33
	test eax,eax
	je Block521

 Block520:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block521:
	mov eax,dword ptr [esp+0xB8]
	mov byte ptr [esp+0x130],0x32
	test eax,eax
	je Block523

 Block522:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block523:
	mov eax,dword ptr [esp+0xA4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x134],0x27
	call edx
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x130],0xD
	test eax,eax
	je Block525

 Block524:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block525:
	mov eax,dword ptr [esp+0xC0]
	mov byte ptr [esp+0x130],0xC
	test eax,eax
	je Block527

 Block526:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block527:
	mov ecx,dword ptr [esp+0xB0]
	test ecx,ecx
	je Block529

 Block528:
	call _xbstr_t::Data_t::Release

 Block529:
	mov ecx,dword ptr [esp+0xB4]
	test ecx,ecx
	je Block531

 Block530:
	call _xbstr_t::Data_t::Release

 Block531:
	mov eax,dword ptr [esp+0x110]
	mov dword ptr [esp+0x130],0xFFFFFFFF

 Block532:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block533:
	mov ecx,dword ptr [esp+0x128]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x120
	ret
}
}
// CUIMiniMap::SortFootHold
_SUB_EXCEPTION_HANDLER(3F88A0)
__SUB_CLASS_THIS0(003F88A0, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F88A0
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	lea ecx,[ebx+0xC38]
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetHeadPosition
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block41

 Block1:
	lea ebx,[ebx]

 Block2:
	xor edi,edi
	mov dword ptr [esp+0x30],edi
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea esi,[ebx+0xC38]
	mov ecx,esi
	mov dword ptr [esp+0x68],edi
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetNext
	mov ebp,dword ptr [esp+0x30]
	cmp dword ptr [ebp+0x1C],edi
	je Block6

 Block3:
	lea edx,[ebp+0x10]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::RemoveKey
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block40

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block40

 Block6:
	cmp dword ptr [ebp+0x14],edi
	jne Block63

 Block7:
	lea ecx,[ebx+0xC50]
	push 0xFFFFFFFF
	mov dword ptr [ebp+0x1C],1
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::InsertBefore
	mov esi,eax
	lea eax,[ebp-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block12

 Block8:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block11

 Block10:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block11:
	mov dword ptr [esi+4],0

 Block12:
	mov dword ptr [esi+4],ebp
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x20],ecx
	test eax,eax
	je Block36

 Block13:
	xor ebp,ebp
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x40],ebp
	mov ebx,dword ptr [esp+0x18]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x28]
	lea esi,[ebx+0xC38]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x68],2
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetAt
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetAt
	mov edi,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x48]
	cmp edi,ebp
	je Block55

 Block14:
	cmp esi,ebp
	je Block55

 Block15:
	cmp dword ptr [esi+0x1C],ebp
	jne Block47

 Block16:
	mov dword ptr [esi+0x1C],1
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+8]
	mov edx,dword ptr [esi+4]
	push eax
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [edi+4]
	push edx
	mov edx,dword ptr [edi]
	push eax
	push ecx
	push edx
	mov ecx,ebx
	call CUIMiniMap::CalcAngle
	fldz
	fcomp
	fnstsw ax
	test ah,5
	jp Block19

 Block17:
	fcomp qword ptr [__real_4034000000000000]
	fnstsw ax
	test ah,5
	jp Block20

 Block18:
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [edi+0xC],ecx
	mov edx,dword ptr [esi+0x18]
	mov dword ptr [edi+0x18],edx
	mov eax,dword ptr [edi+0x10]
	jmp Block28

 Block19:
	fstp st(0)

 Block20:
	mov ecx,dword ptr [esi]
	cmp ecx,dword ptr [esi+8]
	je Block27

 Block21:
	push 0xFFFFFFFF
	lea ecx,[ebx+0xC50]
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::InsertBefore
	lea edx,[esi-0xC]
	push edx
	mov ebx,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	cmp eax,ebp
	je Block26

 Block22:
	lea ebp,[eax-0x10]
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block23:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block25

 Block24:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block25:
	mov dword ptr [ebx+4],0

 Block26:
	mov dword ptr [ebx+4],esi

 Block27:
	mov eax,dword ptr [esi+0x10]

 Block28:
	mov ecx,dword ptr [esi+0x18]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],ecx
	mov byte ptr [esp+0x64],1
	call ebx
	test eax,eax
	jne Block31

 Block29:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block31

 Block30:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block31:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	xor ebp,ebp
	push edi
	mov dword ptr [esp+0x44],ebp
	mov byte ptr [esp+0x64],0
	call ebx
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block34

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block34:
	mov dword ptr [esp+0x48],ebp
	cmp dword ptr [esp+0x24],ebp
	jne Block13

 Block35:
	mov ebp,dword ptr [esp+0x30]

 Block36:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block39

 Block38:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block39:
	mov ebx,dword ptr [esp+0x18]

 Block40:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x30],0
	jne Block2

 Block41:
	lea ecx,[ebx+0xC38]
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetHeadPosition
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block110

 Block42:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block43:
	mov dword ptr [esp+0x50],0
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[ebx+0xC38]
	mov dword ptr [esp+0x68],5
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetNext
	mov esi,dword ptr [esp+0x50]
	cmp dword ptr [esi+0x1C],0
	je Block99

 Block44:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block109

 Block45:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block109

 Block46:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block109

 Block47:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [esp+0x64],1
	call ebp
	test eax,eax
	jne Block50

 Block48:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block50

 Block49:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block50:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x44],0
	mov byte ptr [esp+0x64],0
	call ebp
	test eax,eax
	jne Block54

 Block51:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi

 Block52:
	je Block54

 Block53:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block54:
	mov dword ptr [esp+0x48],0
	jmp Block35

 Block55:
	mov byte ptr [esp+0x60],1
	cmp edi,ebp
	je Block60

 Block56:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block57:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block59

 Block58:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block59:
	mov dword ptr [esp+0x40],ebp

 Block60:
	mov byte ptr [esp+0x60],0
	cmp esi,ebp
	je Block35

 Block61:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block62:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	jmp Block52

 Block63:
	cmp dword ptr [ebp+0x18],edi
	jne Block36

 Block64:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xC50
	push 0xFFFFFFFF
	mov dword ptr [ebp+0x1C],1
	mov dword ptr [esp+0x30],ecx
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::InsertBefore
	mov ecx,eax
	call ZRef<SimpleMiniMap_FootHold>::op_assign_copy
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],ecx
	test eax,eax
	je Block36

 Block65:
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x50],ebx
	mov edi,dword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x24]
	lea esi,[edi+0xC38]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x68],4
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetAt
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::GetAt
	mov esi,dword ptr [esp+0x50]
	cmp esi,ebx
	mov ebx,dword ptr [esp+0x38]
	je Block89

 Block66:
	test ebx,ebx
	je Block89

 Block67:
	cmp dword ptr [esi+0x1C],0
	jne Block88

 Block68:
	mov dword ptr [esi+0x1C],1
	mov eax,dword ptr [ebx+0xC]
	mov ecx,dword ptr [ebx+8]
	mov edx,dword ptr [ebx+4]
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov ecx,dword ptr [esi+4]
	push edx
	mov edx,dword ptr [esi]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call CUIMiniMap::CalcAngle
	fldz
	fcomp
	fnstsw ax
	test ah,5
	jp Block71

 Block69:
	fcomp qword ptr [__real_4034000000000000]
	fnstsw ax
	test ah,5
	jp Block72

 Block70:
	mov eax,dword ptr [esi]
	mov dword ptr [ebx],eax
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebx+4],ecx
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [ebx+0x14],edx
	mov eax,dword ptr [ebx+0x10]
	jmp Block80

 Block71:
	fstp st(0)

 Block72:
	mov ecx,dword ptr [esi]
	cmp ecx,dword ptr [esi+8]
	je Block79

 Block73:
	mov ecx,dword ptr [esp+0x28]
	push 0xFFFFFFFF
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::InsertBefore
	lea edx,[esi-0xC]
	push edx
	mov ebp,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block78

 Block74:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block75:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block77

 Block76:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block77:
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [ebp+4],0

 Block78:
	mov dword ptr [ebp+4],esi
	mov ebp,dword ptr [esp+0x30]

 Block79:
	mov eax,dword ptr [esi+0x10]

 Block80:
	mov ecx,dword ptr [esi+0x14]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],ecx
	mov byte ptr [esp+0x64],3
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block83

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block83:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x54],0
	mov byte ptr [esp+0x64],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block86

 Block84:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block86

 Block85:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block86:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x38],0
	jne Block65

 Block87:
	jmp Block36

 Block88:
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x60],3
	call ZRef<SimpleMiniMap_FootHold>::~ZRef<SimpleMiniMap_FootHold>
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x60],0
	call ZRef<SimpleMiniMap_FootHold>::~ZRef<SimpleMiniMap_FootHold>
	jmp Block36

 Block89:
	mov byte ptr [esp+0x60],3
	test esi,esi
	je Block94

 Block90:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block91:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block93

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block93:
	mov dword ptr [esp+0x50],0

 Block94:
	mov byte ptr [esp+0x60],0
	test ebx,ebx
	je Block36

 Block95:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block98

 Block96:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block98

 Block97:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block98:
	mov dword ptr [esp+0x38],0
	jmp Block36

 Block99:
	mov eax,dword ptr [esi]
	cmp eax,dword ptr [esi+8]
	je Block106

 Block100:
	push 0xFFFFFFFF
	lea ecx,[ebx+0xC50]
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::InsertBefore
	lea ecx,[esi-0xC]
	push ecx
	mov ebp,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block105

 Block101:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block102:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block104

 Block103:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block104:
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [ebp+4],0

 Block105:
	mov dword ptr [ebp+4],esi
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block106:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block109

 Block107:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block109

 Block108:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block109:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x50],0
	jne Block43

 Block110:
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
// CUIMiniMap::InsertStalkee
__SUB_CLASS_THIS(00407330, __thiscall, 56195,  CUIMiniMap, void, unsigned long, ZXString<char>&, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push 0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esi+0xB78]
	call ZMap<unsigned long, tagPOINT, unsigned long>::Insert
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [eax+0xC],ecx
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [eax+0x10],edx
	push 0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esi+0xB90]
	call ZMap<unsigned long, ZXString<char>, unsigned long>::Insert
	mov ecx,dword ptr [esp+0xC]
	push ecx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	pop esi
	ret 0x10
}
}
// CUIMiniMap::ReleaseFootHoldData
__SUB_CLASS_THIS0(003F9010, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xC50]
	call ZArray<ZRef<SimpleMiniMap_FootHold>>::RemoveAll
	lea ecx,[esi+0xC38]
	pop esi
	jmp  ZMap<long, ZRef<SimpleMiniMap_FootHold>, long>::RemoveAll
}
}
// CUIMiniMap::ToggleMiniMapState
__SUB_CLASS_THIS0(00403E00, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xC90],0
	je Block4

 Block1:
	mov eax,dword ptr [ecx+0xAFC]
	mov dword ptr [ecx+0xB0C],eax
	add eax,2
	push esi
	cdq
	mov esi,3
	idiv esi
	pop esi
	mov dword ptr [ecx+0xAFC],edx
	cmp edx,2
	jne Block3

 Block2:
	mov dword ptr [ecx+0xB0C],1

 Block3:
	jmp  CUIMiniMap::ToggleMap

 Block4:
	ret
}
}
// CUIMiniMap::SetCtrl
_SUB_EXCEPTION_HANDLER(3F9D40)
__SUB_CLASS_THIS0(003F9D40, __thiscall, 56184,  CUIMiniMap, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3F9D40
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
	xor ebx,ebx
	cmp dword ptr [esi+0xB08],ebx
	jne Block2

 Block1:
	call CUIMiniMap::SetCtrl_Simple
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block2:
	cmp dword ptr [esi+0xC90],ebx
	je Block4

 Block3:
	mov ebp,dword ptr [esi+0xAFC]
	jmp Block5

 Block4:
	mov ebp,2

 Block5:
	mov ecx,dword ptr [esi+0xBBC]
	cmp ecx,ebx
	je Block8

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBBC],ebx
	lea edi,[esi+0xBB8]
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,dword ptr [esi+0xBB4]
	cmp ecx,ebx
	je Block11

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBB4],ebx
	lea edi,[esi+0xBB0]
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	mov ecx,dword ptr [esi+0xBAC]
	cmp ecx,ebx
	je Block14

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBAC],ebx
	lea edi,[esi+0xBA8]
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,dword ptr [esi+0xBCC]
	cmp ecx,ebx
	je Block17

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xBCC],ebx
	lea edi,[esi+0xBC8]
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3F28],ebx
	je Block36

 Block18:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIUIWINDOW2IMGMI__9
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push eax
	lea ecx,[esi+0xBB8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 1
	push 4
	sub eax,0x2E
	push eax
	push 0x3EA
	push esi
	call edx
	push offset _S_UIUIWINDOW2IMGMI__10
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	push eax
	lea ecx,[esi+0xBB0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push 1
	push 4
	sub edx,0x3B
	push edx
	push 0x3E9
	push esi
	call eax
	push offset _S_UIUIWINDOW2IMGMI__5
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esi+0xBA8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 1
	push 4
	sub eax,0x48
	push eax
	push 0x3E8
	push esi
	call edx
	cmp ebp,2
	jne Block29

 Block28:
	mov eax,dword ptr [esi+0xBAC]
	jmp Block31

 Block29:
	cmp ebp,ebx
	jne Block32

 Block30:
	mov eax,dword ptr [esi+0xBB4]

 Block31:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx

 Block32:
	cmp dword ptr [esi+0xC90],ebx
	jne Block34

 Block33:
	mov eax,dword ptr [esi+0xBAC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	mov esi,dword ptr [esi+0xBB4]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push ebx
	call edx

 Block34:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
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
