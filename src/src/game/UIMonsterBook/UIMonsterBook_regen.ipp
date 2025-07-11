#include "regen.hpp"
// UIMonsterBook.ipp
#include "UIMonsterBook.hpp"

#include "ActionMan/ActionMan.hpp"

// CUIMonsterBook::CCtrlTab::SetEnable
__SUB_CLASS_THIS(00408740, __thiscall, 68965,  CUIMonsterBook::CCtrlTab, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jl Block9

 Block1:
	mov edx,dword ptr [ecx+0x44]
	test edx,edx
	je Block3

 Block2:
	mov edx,dword ptr [edx-4]

 Block3:
	cmp eax,edx
	jge Block9

 Block4:
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+eax*8+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	cmp dword ptr [edx+0xC],esi
	je Block8

 Block5:
	mov dword ptr [edx+0xC],esi
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+eax*8+4]
	mov dword ptr [edx+0x10],1
	cmp eax,dword ptr [ecx+0x38]
	jne Block7

 Block6:
	mov dword ptr [ecx+0x38],0xFFFFFFFF

 Block7:
	call CCtrlWnd::InvalidateRect

 Block8:
	pop esi

 Block9:
	ret 8
}
}
// CUIMonsterBook::SetBookCover
_SUB_EXCEPTION_HANDLER(409CE0)
__SUB_CLASS_THIS(00409CE0, __thiscall, 68907,  CUIMonsterBook, void, NakedParam<ZRef<MonsterBookCard>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_409CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x50],ebx
	lea edi,[ebx+0x18AC]
	mov ecx,edi
	mov dword ptr [ebp-4],0
	call CUIMonsterBook::MOBINFO::Clear
	mov ecx,dword ptr [ebp+0x7C]
	test ecx,ecx
	je Block196

 Block1:
	mov eax,dword ptr [ebx+0x1564]
	mov eax,dword ptr [eax+0x34]
	cmp eax,9
	jne Block3

 Block2:
	lea ecx,[ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<MonsterBookCard>::~ZRef<MonsterBookCard>
	jmp Block196

 Block3:
	mov eax,dword ptr [ecx]
	push eax
	call CUserLocal::GetMonsterCardCount
	mov ecx,dword ptr [ebp+0x7C]
	mov dword ptr [edi],eax
	mov edx,dword ptr [ecx+4]
	push edx
	call CMobTemplate::GetMobTemplate
	mov esi,eax
	add esp,8
	mov dword ptr [ebp-0x20],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block7

 Block6:
	add esi,0x30
	push esi
	lea ecx,[ebx+0x18B0]
	call ZXString<char>::op_assign

 Block7:
	mov dword ptr [ebp+0x14],0
	lea ecx,[ebp+0x58]
	push 0x3CE
	push ecx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x7C]
	mov ecx,dword ptr [edx+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp]
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
	mov eax,dword ptr [ebp+0x14]
	xor esi,esi
	push esi
	push esi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],9
	jne Block25

 Block19:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,esi
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xA
	jne Block26

 Block23:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block27

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block25:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x54]
	push eax
	call ebx
	jmp Block22

 Block26:
	lea edx,[ebp]
	push edx
	call ebx

 Block27:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xB
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x1C]
	push ecx
	call ebx

 Block31:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0xC
	cmp ecx,esi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0xF
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,esi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp-0x34]
	push edx
	call ebx

 Block40:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x3D4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x10
	cmp ecx,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[ebp-0x74]
	push edx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x13
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp-0x74]
	push ecx
	call ebx

 Block49:
	mov ebx,dword ptr [ebp+0x34]
	cmp ebx,esi
	je Block92

 Block50:
	xor edi,edi

 Block51:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x5C]
	push eax
	push ebx
	mov dword ptr [ebp+0x54],edi
	mov dword ptr [ebp+0x5C],esi
	call ecx
	cmp eax,esi
	jge Block53

 Block52:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block53:
	cmp edi,dword ptr [ebp+0x5C]
	jae Block93

 Block54:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0x14
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x24],si
	je Block87

 Block55:
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x20],0
	call ZRef<CActionMan::MOBACTIONFRAMEENTRY>::_Alloc
	lea eax,[ebp+0x24]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x16
	call get_unknown
	add esp,8
	mov ebx,dword ptr [ebp+0x20]
	lea esi,[ebx+0xC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x17
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	cmp dword ptr [esi],0
	sete al
	test al,al
	jne Block88

 Block58:
	push 0x78
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1AA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	je Block14

 Block59:
	lea edx,[ebp+0x44]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block14

 Block60:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebx+0x50],eax
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x44],di
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	push 0xFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A98
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block14

 Block67:
	lea edx,[ebp+0x64]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	je Block14

 Block68:
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x54],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x64],di
	jne Block71

 Block69:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	push 0xFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	je Block14

 Block75:
	lea edx,[ebp+0x60]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block14

 Block76:
	lea eax,[ebp-0x84]
	push eax
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x58],eax
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x84],di
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov ecx,dword ptr [ebp+0x50]
	add ecx,0x18CC
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[ebp+0x1C]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::MOBACTIONFRAMEENTRY>::op_assign_copy
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x15
	call ZRef<CActionMan::MOBACTIONFRAMEENTRY>::~ZRef<CActionMan::MOBACTIONFRAMEENTRY>
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x24],di
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov edi,dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x34]
	inc edi
	xor esi,esi
	jmp Block51

 Block85:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov edi,dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x34]
	inc edi
	xor esi,esi
	jmp Block51

 Block87:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x13
	call dword ptr [ZImports::_VariantClear]
	jmp Block93

 Block88:
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x15
	call ZRef<CActionMan::MOBACTIONFRAMEENTRY>::~ZRef<CActionMan::MOBACTIONFRAMEENTRY>
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x13
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block93

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block91:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block93

 Block92:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [edi]
	lea edx,[ecx+0x18CC]
	push edx
	mov edx,dword ptr [ebp+0x7C]
	push eax
	mov eax,dword ptr [edx+4]
	push eax
	call CUIMonsterBook::LoadMobAction

 Block93:
	mov ecx,dword ptr [ebp+0x7C]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance]
	push edx
	lea eax,[ebp+0x38]
	push eax
	call CMonsterBookMan::GetString
	mov eax,dword ptr [ebp+0x3C]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block180

 Block94:
	mov esi,dword ptr [ebp+0x50]
	push eax
	lea ecx,[esi+0x18B4]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,4
	push ecx
	lea ecx,[esi+0x18B8]
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edx+0xC]
	xor esi,esi
	test eax,eax
	je Block117

 Block95:
	mov eax,dword ptr [eax-4]
	mov dword ptr [ebp+0x5C],eax
	test eax,eax
	jle Block117

 Block96:
	mov eax,dword ptr [ebp+0x50]
	add eax,0x18C0
	mov dword ptr [ebp+0x4C],eax
	mov edi,edi

 Block97:
	xor eax,eax
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp+0x68],esi
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x25

 Block98:
	mov ecx,dword ptr [ebp+0x5C]
	cmp dword ptr [ebp+0x68],ecx
	jge Block116

 Block99:
	push 0
	call ZRefCounted_AllocHelper<CUIMonsterBook::AREA>::call
	mov esi,eax
	add esp,4
	mov dword ptr [esi+4],1
	mov dword ptr [ebp+0x30],esi
	mov edx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edx+0xC]
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [eax+ecx*4]
	lea edx,[ebp+0x44]
	push 0x6EB
	push edx
	mov byte ptr [ebp-4],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x27
	call CItemInfo::GetMapString
	lea ebx,[esi+0x10]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x28
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	lea ecx,[ebp+0x20]
	push 0x6EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x29
	call CItemInfo::GetMapString
	push eax
	lea ecx,[esi+0x14]
	mov byte ptr [ebp-4],0x2A
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	mov edi,dword ptr [ebp+0x60]
	test edi,edi
	jle Block110

 Block108:
	mov eax,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax+edi*8-4]
	push ebx
	lea ecx,[eax+0x10]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block110

 Block109:
	mov dword ptr [esi+0xC],0
	jmp Block111

 Block110:
	mov dword ptr [esi+0xC],1

 Block111:
	cmp dword ptr [esi+0xC],0
	je Block144

 Block112:
	cmp edi,0xA
	jne Block145

 Block113:
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0x25
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block115

 Block114:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block115:
	mov dword ptr [ebp+0x30],0

 Block116:
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	call ZArray<ZArray<ZRef<CUIMonsterBook::AREA>>>::InsertBefore
	mov ecx,eax
	call ZArray<ZRef<CUIMonsterBook::AREA>>::operator=
	mov esi,dword ptr [ebp+0x68]
	lea ecx,[ebp+0x64]
	mov byte ptr [ebp-4],0x24
	call ZArray<ZRef<CUIMonsterBook::AREA>>::RemoveAll
	cmp esi,dword ptr [ebp+0x5C]
	jl Block97

 Block117:
	mov edx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [edx+0x10]
	xor esi,esi
	test eax,eax
	je Block142

 Block118:
	mov edi,dword ptr [eax-4]
	mov dword ptr [ebp+0x5C],edi
	test edi,edi
	jle Block142

 Block119:
	xor eax,eax
	mov dword ptr [ebp+0x64],eax
	mov dword ptr [ebp+0x68],esi
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0x2B

 Block120:
	cmp esi,edi
	jge Block141

 Block121:
	push 0
	call ZRefCounted_AllocHelper<CUIMonsterBook::REWARD>::call
	mov esi,eax
	lea ebx,[esi+4]
	add esp,4
	mov dword ptr [ebx],1
	mov dword ptr [ebp+0x30],esi
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [ebp+0x68]
	mov eax,dword ptr [ecx+edx*4]
	lea edi,[esi+0xC]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x2C
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp+0x48]
	push eax
	call CItemInfo::GetItemSlot
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block123

 Block122:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block128

 Block124:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block127

 Block125:
	mov eax,dword ptr [esi+0x1C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x1C]
	test ecx,ecx
	je Block127

 Block126:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block127:
	mov dword ptr [esi+0x1C],0

 Block128:
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+0x1C],ecx
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block133

 Block129:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block132

 Block130:
	mov edx,dword ptr [ebp+0x4C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x4C]
	test ecx,ecx
	je Block132

 Block131:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block132:
	mov dword ptr [ebp+0x4C],0

 Block133:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<ZRef<CUIMonsterBook::REWARD>>::InsertBefore
	push ebx
	mov edi,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block138

 Block134:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block137

 Block135:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block137

 Block136:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block137:
	mov dword ptr [edi+4],0

 Block138:
	mov eax,1
	add dword ptr [ebp+0x64],eax
	add dword ptr [ebp+0x68],eax
	push ebx
	mov dword ptr [edi+4],esi
	mov byte ptr [ebp-4],0x2B
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block139:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block140:
	cmp dword ptr [ebp+0x64],0x14
	mov esi,dword ptr [ebp+0x68]
	mov edi,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x30],0
	jl Block120

 Block141:
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp+0x60]
	push eax
	push 0xFFFFFFFF
	add ecx,0x18C4
	call ZArray<ZArray<ZRef<CUIMonsterBook::REWARD>>>::InsertBefore
	mov ecx,eax
	call ZArray<ZRef<CUIMonsterBook::REWARD>>::operator=
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x24
	call ZArray<ZRef<CUIMonsterBook::REWARD>>::RemoveAll
	cmp esi,edi
	jl Block119

 Block142:
	mov dword ptr [ebp+0x40],0
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,8
	push ecx
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x2E
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::op_assign
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],0x2F
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block154

 Block143:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0xDC
	mov dword ptr [eax+0xC],0x1E
	mov edi,eax
	mov dword ptr [ebp+0x58],eax
	jmp Block155

 Block144:
	inc dword ptr [ebp+0x68]

 Block145:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x64]
	call ZArray<ZRef<CUIMonsterBook::AREA>>::InsertBefore
	lea ebx,[esi+4]
	push ebx
	mov edi,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block150

 Block146:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block149

 Block147:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block149

 Block148:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block149:
	mov dword ptr [edi+4],0

 Block150:
	inc dword ptr [ebp+0x60]
	push ebx
	mov dword ptr [edi+4],esi
	mov byte ptr [ebp-4],0x25
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block152

 Block151:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block152:
	cmp dword ptr [ebp+0x60],0xB
	mov dword ptr [ebp+0x30],0
	jl Block98

 Block153:
	jmp Block116

 Block154:
	xor edi,edi
	mov dword ptr [ebp+0x58],edi

 Block155:
	mov dword ptr [ebp+0x20],edi
	test edi,edi
	je Block157

 Block156:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block157:
	mov eax,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0
	add eax,0xB14
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x4C],esp
	push edx
	mov byte ptr [ebp-4],0x30
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,edi
	call CTextAnalyzer::AnalyzeText
	xor esi,esi
	lea esp,[esp]

 Block158:
	mov ecx,dword ptr [ebp+0x40]
	test ecx,ecx
	je Block174

 Block159:
	cmp esi,dword ptr [ecx-4]
	jae Block174

 Block160:
	mov eax,esi
	shl eax,4
	add eax,esi
	add eax,eax
	add eax,eax
	mov edx,dword ptr [eax+ecx+0x1C]
	mov dword ptr [ebp+0x68],esi
	mov dword ptr [ebp+0x44],edx
	mov dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0x31
	mov dword ptr [ebp+0x64],eax

 Block161:
	test ecx,ecx
	je Block173

 Block162:
	cmp esi,dword ptr [ecx-4]
	jae Block173

 Block163:
	mov edx,dword ptr [eax+ecx+0x24]
	add edx,dword ptr [eax+ecx+0x1C]
	sub edx,dword ptr [ebp+0x44]
	cmp edx,0xDC
	jge Block173

 Block164:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CT_INFO>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x30],esi
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ebp+0x64]
	add ecx,eax
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x32
	call CT_INFO::operator=
	mov edx,dword ptr [ebp+0x44]
	sub dword ptr [esi+0x1C],edx
	push 0xFFFFFFFF
	lea ecx,[ebp+0x54]
	call ZArray<ZRef<CT_INFO>>::InsertBefore
	mov ebx,eax
	lea edi,[esi-0x10]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block169

 Block165:
	add eax,0xFFFFFFF0
	mov dword ptr [ebp+0x60],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block168

 Block166:
	mov eax,dword ptr [ebp+0x60]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [ebp+0x60],0
	je Block168

 Block167:
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block168:
	mov dword ptr [ebx+4],0

 Block169:
	inc dword ptr [ebp+0x68]
	add dword ptr [ebp+0x64],0x44
	mov dword ptr [ebx+4],esi
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0x31
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block172

 Block170:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block172

 Block171:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block172:
	mov ecx,dword ptr [ebp+0x40]
	mov edi,dword ptr [ebp+0x58]
	mov esi,dword ptr [ebp+0x68]
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x30],0
	jmp Block161

 Block173:
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	push 0xFFFFFFFF
	add ecx,0x18BC
	call ZArray<ZArray<ZRef<CT_INFO>>>::InsertBefore
	mov ecx,eax
	call ZArray<ZRef<CT_INFO>>::operator=
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0x30
	call ZArray<ZRef<CT_INFO>>::RemoveAll
	jmp Block158

 Block174:
	mov byte ptr [ebp-4],0x2F
	test edi,edi
	je Block177

 Block175:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block177

 Block176:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block177:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x24
	call ZArray<CT_INFO>::RemoveAll
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block180:
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ecx+0x18AC]
	push edx
	call CUIMonsterBook::SetRightTab
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block185

 Block181:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block184

 Block182:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block184

 Block183:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block184:
	mov dword ptr [ebp+0x3C],0

 Block185:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block187

 Block186:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block187:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block189:
	cmp dword ptr [ebp-0x20],0
	mov byte ptr [ebp-4],0
	je Block192

 Block190:
	mov edi,dword ptr [ebp-0x20]
	lea esi,[edi+4]
	push esi
	call ebx
	test eax,eax
	jne Block192

 Block191:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block192:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block196

 Block193:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block196

 Block194:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block196

 Block195:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block196:
	lea esp,[ebp-0x94]
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
	ret 8
}
}
// CUIMonsterBook::UpdateUI
__SUB_CLASS_THIS0(0040ABC0, __thiscall, 68888,  CUIMonsterBook, void) {
__asm {

 Block0:
	push ecx
	mov eax,1
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x15A0],eax
	mov dword ptr [esi+0x15A8],eax
	mov dword ptr [esi+0x15B0],eax
	mov eax,dword ptr [esi+0x1564]
	cmp dword ptr [eax+0x34],9
	je Block2

 Block1:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push ecx
	mov ecx,esi
	call CUIMonsterBook::GetCard_1
	mov ecx,esi
	call CUIMonsterBook::LoadMobInfo

 Block2:
	mov ecx,esi
	pop esi
	add esp,4
	jmp  CUIMonsterBook::UpdateCheckList
}
}
// CUIMonsterBook::UpdateCheckList
__SUB_CLASS_THIS0(004085E0, __thiscall, 68888,  CUIMonsterBook, void) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	lea ecx,[ecx]

 Block1:
	push esi
	mov ecx,ebx
	call CUserLocal::GetMonsterCardCheckListSize
	mov ecx,dword ptr [edi+0x1564]
	test eax,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x2C]
	je Block3

 Block2:
	push 1
	jmp Block4

 Block3:
	push 0

 Block4:
	push esi
	call edx
	inc esi
	cmp esi,9
	jl Block1

 Block5:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIMonsterBook::AREA::~AREA
_SUB_EXCEPTION_HANDLER(409260)
__SUB_CLASS_THIS0(00409260, __thiscall, 69156,  CUIMonsterBook::AREA, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_409260
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
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMonsterBook::LoadMobAction
_SUB_EXCEPTION_HANDLER(4099F0)
__SUB_CLASS_THIS(004099F0, __thiscall, 68908,  CUIMonsterBook, void, unsigned long, long, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4099F0
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
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x14],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov edi,dword ptr [esp+0x50]
	cmp edi,ebx
	mov dword ptr [esp+0x44],ebx
	jle Block2

 Block1:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	lea ecx,[esp+0x14]
	mov dword ptr [eax],1
	call ZList<long>::AddTail_
	mov dword ptr [eax],3

 Block2:
	cmp edi,1
	jle Block4

 Block3:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	lea ecx,[esp+0x14]
	mov dword ptr [eax],ebx
	call ZList<long>::AddTail_
	mov dword ptr [eax],2

 Block4:
	cmp edi,2
	jle Block9

 Block5:
	mov esi,0xD

 Block6:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	inc esi
	cmp esi,0x15
	jle Block6

 Block7:
	mov esi,0x16

 Block8:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	inc esi
	cmp esi,0x26
	jle Block8

 Block9:
	cmp edi,3
	jle Block12

 Block10:
	mov esi,7

 Block11:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	inc esi
	cmp esi,9
	jle Block11

 Block12:
	cmp edi,4
	jle Block15

 Block13:
	mov esi,0xA
	lea esp,[esp]

 Block14:
	lea ecx,[esp+0x14]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	inc esi
	cmp esi,0xC
	jle Block14

 Block15:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x50],eax
	cmp eax,ebx
	je Block21

 Block16:
	mov ebp,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x4C]
	int 3// TODO: 	mov esi,offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	lea ebx,[ebx]

 Block17:
	lea eax,[esp+0x50]
	push eax
	call ZList<long>::GetNext
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	mov byte ptr [esp+0x44],1
	cmp ecx,ebx
	je Block20

 Block18:
	lea edx,[esp+0x28]
	push edx
	push eax
	push edi
	call CActionMan::LoadMobAction
	cmp dword ptr [esp+0x30],ebx
	je Block20

 Block19:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_List

 Block20:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x44],bl
	mov dword ptr [esp+0x28],esi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	cmp dword ptr [esp+0x50],ebx
	jne Block17

 Block21:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x14],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0xC
}
}
// CUIMonsterBook::REWARD::~REWARD
_SUB_EXCEPTION_HANDLER(408D00)
__SUB_CLASS_THIS0(00408D00, __thiscall, 69142,  CUIMonsterBook::REWARD, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_408D00
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
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x1C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x1C]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x1C],0

 Block5:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block7:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMonsterBook::GetCard
__SUB_CLASS_THIS(00408FB0, __thiscall, 68909,  CUIMonsterBook, ZRef<MonsterBookCard>*, ZRef<MonsterBookCard>*, long, long, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push edi
	xor edi,edi
	mov dword ptr [esp+4],edi
	cmp eax,9
	je Block9

 Block1:
	mov edx,dword ptr [esp+0x14]
	cmp edx,edi
	jl Block9

 Block2:
	mov eax,dword ptr [ecx+eax*4+0x1888]
	cmp eax,edi
	je Block9

 Block3:
	cmp edx,dword ptr [eax-4]
	jae Block9

 Block4:
	push esi
	mov esi,dword ptr [esp+0x1C]
	cmp esi,edi
	jl Block8

 Block5:
	mov ecx,dword ptr [eax+edx*4]
	cmp ecx,edi
	je Block8

 Block6:
	cmp esi,dword ptr [ecx-4]
	jae Block8

 Block7:
	mov eax,ecx
	lea ecx,[eax+esi*8]
	mov esi,dword ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call ZRef<MonsterBookCard>::_ctor_copy
	mov eax,esi
	pop esi
	pop edi
	pop ecx
	ret 0x10

 Block8:
	mov eax,dword ptr [esp+0x10]
	pop esi
	mov dword ptr [eax+4],edi
	pop edi
	pop ecx
	ret 0x10

 Block9:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax+4],edi
	pop edi
	pop ecx
	ret 0x10
}
}
// CUIMonsterBook::REWARD::REWARD
_SUB_EXCEPTION_HANDLER(408C60)
__SUB_CLASS_THIS0(00408C60, __thiscall, 69140,  CUIMonsterBook::REWARD, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_408C60
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
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	xor eax,eax
	mov dword ptr [edi+4],eax
	mov dword ptr [edi+8],eax
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x20],eax
	int 3// TODO: 	mov dword ptr [edi],offset CUIMonsterBook::REWARD::`vftable'
	lea esi,[edi+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea ebx,[esi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [esi],eax
	call _rand
	mov cl,byte ptr [esi]
	add eax,ebx
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [esi+4]
	mov edx,dword ptr [esi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov dword ptr [edi+0x1C],0
	mov eax,edi
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
// CUIMonsterBook::DrawLayer
__SUB_CLASS_THIS(00408790, __thiscall, 68906,  CUIMonsterBook, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	xor eax,eax
	test edi,edi
	setg al
	mov esi,ecx
	mov ecx,dword ptr [esi+0x156C]
	push eax
	push 0
	call CUIMonsterBook::CCtrlTab::SetEnable
	xor ecx,ecx
	cmp edi,2
	setg cl
	push ecx
	mov ecx,dword ptr [esi+0x156C]
	push 1
	call CUIMonsterBook::CCtrlTab::SetEnable
	mov ecx,dword ptr [esi+0x156C]
	xor edx,edx
	cmp edi,3
	setg dl
	push edx
	push 2
	call CUIMonsterBook::CCtrlTab::SetEnable
	mov ecx,dword ptr [esi+0x156C]
	xor eax,eax
	cmp edi,4
	setg al
	push eax
	push 3
	call CUIMonsterBook::CCtrlTab::SetEnable
	mov ecx,dword ptr [esi+0x156C]
	push 0
	push 4
	call CUIMonsterBook::CCtrlTab::SetEnable
	pop edi
	pop esi
	ret 4
}
}
// CUIMonsterBook::GetCard
__SUB_CLASS_THIS0(00409460, __thiscall, 68910,  CUIMonsterBook, ZRef<MonsterBookCard>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0xB10]
	mov edx,dword ptr [ecx+0xB08]
	push esi
	mov esi,dword ptr [esp+0xC]
	push eax
	mov eax,dword ptr [ecx+0x1564]
	push edx
	mov edx,dword ptr [eax+0x34]
	push edx
	push esi
	mov dword ptr [esp+0x14],0
	call CUIMonsterBook::GetCard_0
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUIMonsterBook::MOBINFO::~MOBINFO
__SUB_CLASS_THIS0(00409C60, __thiscall, 69166,  CUIMonsterBook::MOBINFO, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	mov dword ptr [esi],edi
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+4],edi

 Block2:
	mov eax,dword ptr [esi+8]
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+8],edi

 Block4:
	mov eax,dword ptr [esi+0xC]
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xC],edi

 Block6:
	lea ecx,[esi+0x10]
	call ZArray<ZArray<ZRef<CT_INFO>>>::RemoveAll
	lea ecx,[esi+0x18]
	call ZArray<ZArray<ZRef<CUIMonsterBook::REWARD>>>::RemoveAll
	lea ecx,[esi+0x14]
	call ZArray<ZArray<ZRef<CUIMonsterBook::AREA>>>::RemoveAll
	mov eax,dword ptr [esi+0x1C]
	cmp eax,edi
	je Block8

 Block7:
	mov dword ptr [esi+0x1C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	pop edi
	lea ecx,[esi+0x20]
	pop esi
	jmp  ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
}
}
