#include "regen.hpp"
// ItemEffect.ipp
#include "ItemEffect.hpp"

// CParticleEffect::OnChangeAction
// 58F6D0
static uint8_t _SUB_18F690_LOOKUP_TABLE_0[45] = {
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 
};
__SUB_CLASS_THIS(0018F690, __thiscall, 141505,  CParticleEffect, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x14],0
	je Block5

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,0x2C
	ja Block4

 Block2:
	movzx eax,byte ptr [eax+_SUB_18F690_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4


 Block3:
	mov ecx,dword ptr [ecx+0x1C]
	mov dword ptr [ecx+4],0
	ret 4

 Block4:
	mov edx,dword ptr [ecx+0x1C]
	mov dword ptr [edx+4],1

 Block5:
	ret 4
}
}
// IItemEffect::OnFlip
__SUB_CLASS_THIS(0018EE70, __thiscall, 23884,  IItemEffect, void, int32_t) {
__asm {

 Block0:
	ret 4
}
}
// CParticleEffect::OnFlip
__SUB_CLASS_THIS(0018F700, __thiscall, 141506,  CParticleEffect, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1C]
	mov ecx,dword ptr [esp+4]
	mov dword ptr [eax+8],ecx
	ret 4
}
}
// CItemEffectManager::~CItemEffectManager
__SUB_CLASS_THIS0(004EAFF0, __thiscall, 24707,  CItemEffectManager, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	pop esi
	jmp  ZArray<ZRef<IItemEffect>>::RemoveAll
}
}
// CItemEffectManager::CItemEffectManager
_SUB_EXCEPTION_HANDLER(18F8F0)
__SUB_CLASS_THIS0(0018F8F0, __thiscall, 24699,  CItemEffectManager, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F8F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	xor eax,eax
	mov dword ptr [esi],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	lea eax,[esp+0xB]
	push eax
	push 0x3C
	mov byte ptr [esp+0x20],3
	call ZArray<ZRef<IItemEffect>>::_Alloc
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CItemEffectManager::LoadItemEffect
_SUB_EXCEPTION_HANDLER(18F950)
// 590A04
static uint8_t _SUB_18F950_LOOKUP_TABLE_0[17] = {
0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 
0, 
};
__SUB_CLASS_THIS(0018F950, __thiscall, 24706,  CItemEffectManager, ZRef<IItemEffect>*, ZRef<IItemEffect>*, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x128
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x24],ecx
	mov eax,dword ptr [ebp+0x74]
	xor edi,edi
	mov dword ptr [ebp+0x34],edi
	cmp eax,edi
	jne Block2

 Block1:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [eax+4],edi
	jmp Block146

 Block2:
	push eax
	lea eax,[ebp+0x40]
	push eax
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [ebp+0x40]
	mov ecx,1
	mov dword ptr [ebp-4],ecx
	cmp eax,edi
	je Block4

 Block3:
	cmp word ptr [eax],di
	jne Block7

 Block4:
	mov esi,dword ptr [ebp+0x70]
	mov dword ptr [esi+4],edi
	mov dword ptr [ebp+0x34],ecx
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,esi
	jmp Block146

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x54]
	push ecx
	call esi
	lea edx,[ebp-0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push edi
	push edi
	lea edx,[ebp-0x54]
	push edx
	mov edx,dword ptr [ebp+0x40]
	lea eax,[ebp-0x44]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,3
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x74]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x74],bx
	jne Block23

 Block17:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x44],bx
	jne Block24

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block25

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block23:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x74]
	push edx
	call esi
	jmp Block20

 Block24:
	lea ecx,[ebp-0x44]
	push ecx
	call esi

 Block25:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x54],bx
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x54]
	push eax
	call esi

 Block29:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0xA
	cmp ecx,edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[ebp-0x64]
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x64],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x64]
	push ecx
	call esi

 Block38:
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xE
	cmp edi,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[ebp-0xA4]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	cmp word ptr [ebp-0xA4],8
	mov byte ptr [ebp-4],0x11
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x9C]
	xor ecx,ecx
	mov word ptr [ebp-0xA4],cx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[ebp-0xA4]
	push edx
	call esi

 Block47:
	mov esi,dword ptr [ebp+0x10]
	cmp esi,ebx
	sete al
	test al,al
	je Block53

 Block48:
	mov ebx,dword ptr [ebp+0x70]
	mov dword ptr [ebx+4],0
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block50

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block50:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],9
	call eax
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	mov eax,ebx
	jmp Block146

 Block53:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x734
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	cmp esi,ebx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea ecx,[ebp-0x84]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block57

 Block56:
	mov eax,dword ptr [eax+8]
	jmp Block58

 Block57:
	mov eax,offset _S___3

 Block58:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],ebx
	call ZXString16::Assign
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0x15
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x7C]
	xor edx,edx
	mov word ptr [ebp-0x84],dx
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp-0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov ebx,dword ptr [ebp+0x1C]
	test ebx,ebx
	je Block64

 Block63:
	cmp word ptr [ebx],0
	jne Block67

 Block64:
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [ecx+4],0
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],0x11
	test ebx,ebx
	je Block66

 Block65:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block66:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xD
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],9
	call edx
	jmp Block143

 Block67:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_ANIMATE
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x94]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	lea ecx,[ebp-0x94]
	mov dword ptr [ebp-0x34],eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x94]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x114]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0x94]
	push ecx
	lea edx,[ebp-0x114]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x19
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1A
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[ebp-0x134]
	mov byte ptr [ebp-4],0x19
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	push eax
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0x1B
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1C
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block71

 Block70:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block71:
	lea ecx,[ebp-0x134]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x114]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x94]
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x2C]
	test edi,edi
	sete al
	test al,al
	jne Block140

 Block72:
	test edi,edi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block140

 Block75:
	lea ecx,[ebp+0x1B]
	push ecx
	mov ecx,edi
	call IWzProperty::Getcount
	push eax
	lea ecx,[ebp+0x30]
	call ZArray<_x_com_ptr<IWzProperty>>::_ctor_alloc
	mov edx,dword ptr [ebp+0x30]
	mov bl,0x22
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp+0x54],0
	mov dword ptr [ebp+0x38],edx
	nop

 Block76:
	mov ecx,edi
	call IWzProperty::Getcount
	cmp dword ptr [ebp+0x54],eax
	jae Block84

 Block77:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x23
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]
	test edi,edi
	sete al
	test al,al
	jne Block81

 Block78:
	test edi,edi
	je Block12

 Block79:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [ebp+0x38]
	lea edx,[ebp+0x58]
	push edx
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],bl
	call ecx
	inc dword ptr [ebp+0x54]
	add dword ptr [ebp+0x38],4
	mov edi,dword ptr [ebp+0x2C]
	jmp Block76

 Block81:
	mov edx,dword ptr [ebp+0x70]
	mov dword ptr [edx+4],0
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],bl
	test edi,edi
	je Block83

 Block82:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block83:
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],0x21
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	mov eax,dword ptr [ebp+0x2C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x15
	call eax
	mov ecx,dword ptr [ebp+0x1C]
	add ecx,0xFFFFFFF4
	push ecx
	mov byte ptr [ebp-4],0x11
	call ZXString16::_Release
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0xD
	call eax
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],9
	call edx
	jmp Block143

 Block84:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x27
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x28
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x30],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xE2C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x29
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2A
	call get_int32
	mov edi,eax
	add esp,8
	neg edi
	sbb edi,edi
	lea ecx,[ebp+0x44]
	neg edi
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x2B
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2C
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFA
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ABA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x2D
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x2C],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFE7
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xF16
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x2F
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x24],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFE7
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xF18
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x31
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x20],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x19
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0xF17
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x33
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x34
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x19
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xF19
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x35
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x36
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x18],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5E8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x37
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x38
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+4],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,edi
	neg eax
	sbb eax,eax
	and eax,0x14
	add eax,0xFFFFFFEC
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x39
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3A
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+8],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+4]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5EA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x3B
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3C
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+8]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x3D
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3E
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-0x10],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1165
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x3F
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,esi
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x40
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0xC],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xBD1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x41
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x42
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x20],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1167
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x43
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x44
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x14],esp
	push 0x1166
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x45
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x46
	call get_int32
	add esp,8
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x14],eax
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x38],0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1168
	push edx
	mov byte ptr [ebp-4],0x47
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x124]
	mov byte ptr [ebp-4],0x48
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x47
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x49
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x124]
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x54],0
	sete al
	test al,al
	sete al
	test al,al
	je Block100

 Block85:
	cmp dword ptr [ebp+0x54],0
	mov dword ptr [ebp+0x58],0
	je Block12

 Block86:
	mov edi,edi

 Block87:
	mov ecx,dword ptr [ebp+0x54]
	call IWzProperty::Getcount
	cmp dword ptr [ebp+0x58],eax
	jae Block100

 Block88:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x58]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x4C
	push edx
	mov byte ptr [ebp-4],0x4B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block90

 Block89:
	cmp eax,0x80004002
	jne Block8

 Block90:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x4F
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov ecx,dword ptr [ebp+0x5C]
	test ecx,ecx
	sete al
	test al,al
	jne Block98

 Block95:
	push 0xFFFFFFFF
	lea edx,[ebp+0x5C]
	push edx
	lea ecx,[ebp+0x38]
	call ZArray<_x_com_ptr<IWzVector2D>>::Insert
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0x4B
	je Block97

 Block96:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	inc dword ptr [ebp+0x58]
	jmp Block87

 Block98:
	mov byte ptr [ebp-4],0x4B
	test ecx,ecx
	je Block100

 Block99:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [ebp+0x24]
	add eax,4
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x5C],eax
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block102:
	cmp dword ptr [ebp+0xC],0
	mov byte ptr [ebp-4],0x50
	jne Block108

 Block103:
	mov eax,dword ptr [ebp+0x78]
	cmp eax,0x10
	ja Block106

 Block104:
	movzx eax,byte ptr [eax+_SUB_18F950_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block105
cmp EAX, 1
je Block106


 Block105:
	mov eax,dword ptr [ebp+0x24]
	add eax,4
	push eax
	jmp Block107

 Block106:
	mov ecx,dword ptr [ebp+0x24]
	add ecx,8
	push ecx

 Block107:
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy

 Block108:
	cmp dword ptr [ebp-0x34],0
	je Block123

 Block109:
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block123

 Block110:
	cmp dword ptr [eax-4],0
	je Block123

 Block111:
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [ebp+0x60],edi
	mov byte ptr [ebp-4],0x51
	test edi,edi
	je Block113

 Block112:
	mov edx,dword ptr [ebp+0x24]
	push ecx
	add edx,0xC
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push edx
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	push ecx
	lea eax,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov edx,dword ptr [ebp+0x30]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	mov eax,dword ptr [ebp+0x74]
	push eax
	mov ecx,edi
	call CAnimateEffect::_ctor_0
	jmp Block114

 Block113:
	xor eax,eax

 Block114:
	mov edi,dword ptr [ebp+0x70]
	mov dword ptr [edi+4],eax
	test eax,eax
	je Block116

 Block115:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block116:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],bl
	call ZArray<_x_com_ptr<IWzVector2D>>::RemoveAll
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],0x21
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x15
	call edx
	mov eax,dword ptr [ebp+0x1C]
	add eax,0xFFFFFFF4
	push eax
	mov byte ptr [ebp-4],0x11
	call ZXString16::_Release
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0xD
	call edx
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],9
	call edx
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block122:
	mov eax,edi
	jmp Block146

 Block123:
	xor eax,eax
	mov dword ptr [ebp-0x104],eax
	mov dword ptr [ebp-0x100],eax
	mov dword ptr [ebp-0xFC],eax
	mov dword ptr [ebp-0xF8],eax
	mov dword ptr [ebp-0xA8],eax
	lea eax,[ebp+0x30]
	push eax
	lea ecx,[ebp-0x104]
	mov byte ptr [ebp-4],0x52
	call ZArray<_x_com_ptr<IWzProperty>>::operator=
	mov eax,dword ptr [ebp-0x100]
	cmp eax,dword ptr [ebp+0x5C]
	je Block128

 Block124:
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-0x100],eax
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block126:
	cmp dword ptr [ebp+0x58],0
	je Block128

 Block127:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov eax,dword ptr [ebp+0x24]
	mov eax,dword ptr [eax+0xC]
	mov ecx,dword ptr [ebp-0xFC]
	cmp ecx,eax
	je Block133

 Block129:
	mov dword ptr [ebp+0x58],ecx
	mov dword ptr [ebp-0xFC],eax
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block131:
	cmp dword ptr [ebp+0x58],0
	je Block133

 Block132:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0xF0],ecx
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [ebp-0xEC],edx
	mov edx,dword ptr [ebp+8]
	mov dword ptr [ebp-0xF4],eax
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0xE4],ecx
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0xE0],edx
	mov edx,dword ptr [ebp-0x30]
	mov dword ptr [ebp-0xE8],eax
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0xD8],ecx
	mov ecx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0xD4],edx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0xDC],eax
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp-0xCC],ecx
	mov ecx,dword ptr [ebp+0x20]
	mov dword ptr [ebp-0xC4],edx
	mov dword ptr [ebp-0xD0],eax
	mov eax,dword ptr [ebp+0x14]
	lea edx,[ebp+0x38]
	mov dword ptr [ebp-0xBC],ecx
	push edx
	lea ecx,[ebp-0xF8]
	mov dword ptr [ebp-0xC8],edi
	mov dword ptr [ebp-0xC0],eax
	call ZArray<_x_com_ptr<IWzVector2D>>::operator=
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x20],eax
	mov byte ptr [ebp-4],0x53
	test eax,eax
	je Block135

 Block134:
	mov ecx,dword ptr [ebp+0x60]
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	lea edx,[ebp-0x104]
	push edx
	push ecx
	mov ecx,eax
	call CParticleEffect::_ctor_0
	jmp Block136

 Block135:
	xor eax,eax

 Block136:
	mov edi,dword ptr [ebp+0x70]
	mov dword ptr [edi+4],eax
	test eax,eax
	je Block138

 Block137:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block138:
	lea ecx,[ebp-0x104]
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],0x50
	call CAnimationDisplayer::FOLLOWINFO::~FOLLOWINFO
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block118

 Block139:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block118

 Block140:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [eax+4],0
	mov dword ptr [ebp+0x34],1
	mov byte ptr [ebp-4],0x15
	test edi,edi
	je Block142

 Block141:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block142:
	add ebx,0xFFFFFFF4
	push ebx
	mov byte ptr [ebp-4],0x11
	call ZXString16::_Release
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0xD
	call ecx
	mov eax,dword ptr [ebp+0x28]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],9
	call eax

 Block143:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [ebp+0x70]

 Block146:
	lea esp,[ebp-0x144]
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
	ret 0xC
}
}
// CParticleEffect::CParticleEffect
_SUB_EXCEPTION_HANDLER(18F5A0)
__SUB_CLASS_THIS(0018F5A0, __thiscall, 141501,  CParticleEffect, void, long, const CAnimationDisplayer::FOLLOWINFO&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F5A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x2C]
	lea edi,[esi+0x18]
	int 3// TODO: 	mov dword ptr [esi],offset CParticleEffect::`vftable'
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x14],ecx
	mov dword ptr [edi+4],0
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x2C],1
	call CAnimationDisplayer::RegisterFollowAnimation
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x28],2
	call ZRef<AnimationState>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block4

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
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
	cmp dword ptr [esi+0x14],0
	mov eax,esi
	je Block6

 Block5:
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [ecx+4],1

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 0xC
}
}
// IItemEffect::OnChangeAction
__SUB_CLASS_THIS(0018EE60, __thiscall, 23883,  IItemEffect, void, long) {
__asm {

 Block0:
	ret 4
}
}
// CItemEffectManager::Init
__SUB_CLASS_THIS(0018F030, __thiscall, 24702,  CItemEffectManager, void, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esi+4]
	cmp edi,edx
	je Block5

 Block1:
	mov dword ptr [esi+4],edx
	test edx,edx
	je Block3

 Block2:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+4]
	push edx
	call ecx
	mov edx,dword ptr [esp+0xC]

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	mov edx,dword ptr [esp+0xC]

 Block5:
	mov edi,dword ptr [esi+8]
	mov ecx,dword ptr [esp+0x10]
	cmp edi,ecx
	je Block10

 Block6:
	mov dword ptr [esi+8],ecx
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]

 Block10:
	mov edi,dword ptr [esi+0xC]
	mov eax,dword ptr [esp+0x14]
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]

 Block13:
	test edi,edi
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]

 Block15:
	pop edi
	pop esi
	test edx,edx
	je Block17

 Block16:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+8]
	push edx
	call ecx
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+8]

 Block17:
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov eax,dword ptr [esp+0xC]

 Block19:
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	ret 0xC
}
}
// CAnimateEffect::CAnimateEffect
_SUB_EXCEPTION_HANDLER(18F1A0)
__SUB_CLASS_THIS(0018F1A0, __thiscall, 141520,  CAnimateEffect, void, long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F1A0
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	mov dword ptr [esp+0x40],0
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x48]
	int 3// TODO: 	mov dword ptr [esi],offset CAnimateEffect::`vftable'
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],0
	push 0
	push 0xFF
	push 0
	push ecx
	mov dword ptr [esp+0x58],esp
	mov edi,esp
	push ecx
	mov dword ptr [edi],0
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x54],4
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::_QueryWzVector2DComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	lea ecx,[esp+0x6C]
	push ecx
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10]
	add esp,0x28
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0x10],eax
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	test edi,edi
	je Block14

 Block13:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	cmp dword ptr [esi+0x10],0
	je Block31

 Block17:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea edx,[esp+0x18]
	mov bl,5
	push edx
	mov byte ptr [esp+0x44],bl
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [esp+0x40],6
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x40],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x18],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block27:
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x28],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block31:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,esi
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 0x10
}
}
// CItemEffectManager::ChangeAction
__SUB_CLASS_THIS(0018EEF0, __thiscall, 24704,  CItemEffectManager, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	call ZArray<ZRef<IItemEffect>>::GetCount
	test eax,eax
	jbe Block6

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x10]

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+esi*8+4]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block4:
	mov ecx,edi
	inc esi
	call ZArray<ZRef<IItemEffect>>::GetCount
	cmp esi,eax
	jb Block2

 Block5:
	pop ebx

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CItemEffectManager::UpdateEffects
_SUB_EXCEPTION_HANDLER(190A20)
__SUB_CLASS_THIS(00190A20, __thiscall, 24705,  CItemEffectManager, void, const long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_190A20
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	call ZArray<ZRef<IItemEffect>>::GetCount
	test eax,eax
	jbe Block17

 Block1:
	mov eax,dword ptr [esi]
	lea ebx,[edi*8]
	cmp dword ptr [ebx+eax+4],0
	lea eax,[ebx+eax+4]
	je Block3

 Block2:
	mov eax,dword ptr [eax]
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0xC]
	call eax
	mov ecx,dword ptr [esp+0x30]
	cmp eax,dword ptr [ecx+edi*4]
	je Block16

 Block3:
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [edx+edi*4]
	push edi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CItemEffectManager::LoadItemEffect
	mov ebp,eax
	mov esi,dword ptr [esi]
	mov eax,dword ptr [ebp+4]
	add esi,ebx
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block5

 Block4:
	add eax,4
	push eax
	call ebx

 Block5:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esi+4],0

 Block10:
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [esi+4],ecx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call ebx
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block14:
	mov dword ptr [esp+0x1C],0

 Block15:
	mov esi,dword ptr [esp+0x14]

 Block16:
	mov ecx,esi
	inc edi
	call ZArray<ZRef<IItemEffect>>::GetCount
	cmp edi,eax
	jb Block1

 Block17:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CItemEffectManager::UpdateFlip
__SUB_CLASS_THIS(0018EEB0, __thiscall, 24703,  CItemEffectManager, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	call ZArray<ZRef<IItemEffect>>::GetCount
	test eax,eax
	jbe Block6

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x10]

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+esi*8+4]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block4:
	mov ecx,edi
	inc esi
	call ZArray<ZRef<IItemEffect>>::GetCount
	cmp esi,eax
	jb Block2

 Block5:
	pop ebx

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// IItemEffect::~IItemEffect
__SUB_CLASS_THIS0(0018EE50, __thiscall, 23882,  IItemEffect, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// CParticleEffect::~CParticleEffect
_SUB_EXCEPTION_HANDLER(18F710)
__SUB_CLASS_THIS0(0018F710, __thiscall, 141504,  CParticleEffect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F710
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
	int 3// TODO: 	mov dword ptr [esi],offset CParticleEffect::`vftable'
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [eax],1
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x1C],0
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
	mov dword ptr [esi+0x1C],0

 Block5:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
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
// CAnimateEffect::~CAnimateEffect
_SUB_EXCEPTION_HANDLER(18F420)
__SUB_CLASS_THIS0(0018F420, __thiscall, 141523,  CAnimateEffect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18F420
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
	int 3// TODO: 	mov dword ptr [esi],offset CAnimateEffect::`vftable'
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x10],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

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
// CParticleEffect::GetItemID
__SUB_CLASS_THIS0(0018F680, __thiscall, 141507,  CParticleEffect, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	ret
}
}
// CAnimateEffect::GetItemID
__SUB_CLASS_THIS0(0018F410, __thiscall, 141524,  CAnimateEffect, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	ret
}
}
