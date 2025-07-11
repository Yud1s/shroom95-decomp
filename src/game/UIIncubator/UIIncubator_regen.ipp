#include "regen.hpp"
// UIIncubator.ipp
#include "UIIncubator.hpp"

// CUIIncubator::ClearToolTip
__SUB_CLASS_THIS0(003CB580, __thiscall, 68845,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xA8
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIIncubator::UIinfo::~UIinfo
__SUB_CLASS_THIS0(003CA370, __thiscall, 68864,  CUIIncubator::UIinfo, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2C]
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
// CUIIncubator::OnMouseMove
__SUB_CLASS_THIS(003CA570, __thiscall, 68844,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	cmp eax,ebp
	jg Block7

 Block1:
	mov ecx,dword ptr [esi+0xB18]
	add ecx,eax
	cmp ebp,ecx
	jg Block7

 Block2:
	mov eax,dword ptr [esi+0xB14]
	mov ebx,dword ptr [esp+0x24]
	mov edx,eax
	sub edx,dword ptr [esi+0xB1C]
	cmp edx,ebx
	jg Block7

 Block3:
	cmp ebx,eax
	jg Block7

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0xAFC]
	mov edx,dword ptr [esi+0xAF8]
	push ecx
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0xA8]
	call CUIToolTip::ShowItemToolTip

 Block6:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8

 Block7:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIIncubator::PutItem
_SUB_EXCEPTION_HANDLER(3CA3F0)
__SUB_CLASS_THIS(003CA3F0, __thiscall, 68846,  CUIIncubator, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CA3F0
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x20]
	test ebx,ebx
	je Block11

 Block1:
	lea edi,[ebx+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	cmp eax,0x3FA110
	jl Block9

 Block2:
	mov ecx,edi
	call TSecType<long>::GetData
	cmp eax,0x27C4B03
	jg Block9

 Block3:
	mov dword ptr [esp+0x20],0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	call TSecType<long>::GetData
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetGachaponItemIDByAggID
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block8

 Block4:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	je Block8

 Block5:
	cmp ecx,1
	ja Block8

 Block6:
	mov edx,dword ptr [esi+0xAF8]
	cmp edx,dword ptr [eax]
	jne Block8

 Block7:
	push ebx
	lea ecx,[esi+0xA4]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+0xB00],ecx
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xAFC],eax
	call CWnd::InvalidateRect
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC

 Block8:
	mov eax,dword ptr [esi+0xAF8]
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 1
	push eax
	push edx
	call CItemInfo::GetGachaponMsg
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	jmp Block11

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	test ecx,ecx
	je Block11

 Block10:
	mov eax,dword ptr [esi+0xAF8]
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 1
	push eax
	push edx
	call CItemInfo::GetGachaponMsg
	call CUtilDlg::Notice
	add esp,0x14

 Block11:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CUIIncubator::HitTest
__SUB_CLASS_THIS(003CA330, __thiscall, 68843,  CUIIncubator, int32_t, long, long, CCtrlWnd**) {
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
// CUIIncubator::CUIIncubator
_SUB_EXCEPTION_HANDLER(3CA8B0)
__SUB_CLASS_THIS(003CA8B0, __thiscall, 68837,  CUIIncubator, void, long, long, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CA8B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x9C],esi
	call CUniqueModeless::_ctor_default
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUIIncubator::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIIncubator::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIIncubator::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0xB8],ebx
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esi+0xA8],ebx
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0xB8],3
	call CUIToolTip::_ctor_default
	lea ebp,[esi+0xB04]
	mov dword ptr [ebp],ebx
	lea edi,[esi+0xB08]
	mov dword ptr [edi],ebx
	mov dword ptr [esi+0xB0C],ebx
	mov dword ptr [esi+0xB10],ebx
	mov dword ptr [esi+0xB40],ebx
	mov dword ptr [esi+0xB44],ebx
	mov dword ptr [esi+0xB48],ebx
	mov dword ptr [esi+0xB4C],ebx
	mov dword ptr [esi+0xB50],ebx
	mov dword ptr [esi+0xB54],ebx
	lea eax,[esp+0x2C]
	push 0x19E3
	push eax
	mov byte ptr [esp+0xC0],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x1C],ebx
	mov ecx,dword ptr [esp+0xC4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xC4],0xC
	call ZXString16::Format
	add esp,0xC
	push eax
	mov ecx,edi
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB8],0xB
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],0xA
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xBC],0xD
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov edi,dword ptr [edi]
	push ebx
	push ebx
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0xD0],0xE
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xCC],0xF
	cmp dword ptr [_D_G_RM],ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0xCC],0xE
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,8
	mov byte ptr [esp+0xB8],0xE
	cmp word ptr [esp+0x58],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xB8],0xD
	cmp word ptr [esp+0x30],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [esp+0xB8],0xA
	cmp word ptr [esp+0x48],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_INFO
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xC4],0x11
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0xC8],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0xB8],0x14
	cmp word ptr [esp+0x58],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebp,dword ptr [esp+0x1C]
	cmp ebp,ebx
	sete al
	cmp al,bl
	jne Block85

 Block35:
	cmp ebp,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block39

 Block38:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block39:
	cmp dword ptr [esp+0x18],ebx
	je Block85

 Block40:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_PUTITEMINFO
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x54]
	mov byte ptr [esp+0xC4],0x15
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
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
	mov byte ptr [esp+0xB8],0x18
	cmp word ptr [esp+0x48],di
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov edi,dword ptr [esp+0x44]
	cmp edi,ebx
	sete al
	cmp al,bl
	jne Block84

 Block48:
	cmp edi,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block84

 Block51:
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_X
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x38]
	mov byte ptr [esp+0xC0],0x19
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x1A
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xB14],eax
	mov byte ptr [esp+0xB8],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_Y
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x38]
	mov byte ptr [esp+0xC0],0x1B
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x1C
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xB18],eax
	mov byte ptr [esp+0xB8],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_OVEROFFSETX
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xC4],0x1D
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x1E
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xB1C],eax
	mov byte ptr [esp+0xB8],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_OVEROFFSETY
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x38]
	mov byte ptr [esp+0xC0],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x18
	call IWzProperty::Getitem
	mov byte ptr [esp+0xBC],0x20
	push eax
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xB20],eax
	mov byte ptr [esp+0xB8],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_BTINFO
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0xC4],0x21
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x22
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xB8],0x24
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x2C]
	cmp ebp,ebx
	sete al
	cmp al,bl
	jne Block83

 Block52:
	cmp ebp,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov ecx,ebp
	call IWzProperty::Getcount
	test eax,eax
	je Block83

 Block55:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_OK__1
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0xC8],0x25
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0xB8],0x28
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	sete al
	cmp al,bl
	jne Block82

 Block56:
	cmp ecx,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	call IWzProperty::Getcount
	test eax,eax
	je Block82

 Block59:
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_X
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x74]
	mov byte ptr [esp+0xC0],0x29
	push edx
	mov byte ptr [esp+0xC4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x2A
	call get_int32
	add esp,8
	lea ecx,[esp+0x6C]
	mov dword ptr [esi+0xB24],eax
	mov byte ptr [esp+0xB8],0x28
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_Y
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x74]
	mov byte ptr [esp+0xC0],0x2B
	push eax
	mov byte ptr [esp+0xC4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x2C
	call get_int32
	add esp,8
	lea ecx,[esp+0x6C]
	mov dword ptr [esi+0xB28],eax
	mov byte ptr [esp+0xB8],0x28
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_CANCEL
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0xC8],0x2D
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x2E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB8],0x30
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x68]
	cmp ebp,ebx
	sete al
	cmp al,bl
	jne Block81

 Block60:
	cmp ebp,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov ecx,ebp
	call IWzProperty::Getcount
	test eax,eax
	je Block81

 Block63:
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_X
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x94]
	mov byte ptr [esp+0xC0],0x31
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],0x30
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x32
	call get_int32
	add esp,8
	lea ecx,[esp+0x8C]
	mov dword ptr [esi+0xB2C],eax
	mov byte ptr [esp+0xB8],0x30
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_Y
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x94]
	mov byte ptr [esp+0xC0],0x33
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xC4],0x30
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x34
	call get_int32
	add esp,8
	lea ecx,[esp+0x8C]
	mov dword ptr [esi+0xB30],eax
	mov byte ptr [esp+0xB8],0x30
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_PUTITEMINFO
	mov dword ptr [esi+0xB3C],ebx
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x98]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xC8],0x35
	mov byte ptr [esp+0xC8],0x30
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x36
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xB8],0x38
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block72

 Block64:
	cmp ecx,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	call IWzProperty::Getcount
	test eax,eax
	je Block72

 Block67:
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_X
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x84]
	mov byte ptr [esp+0xC0],0x39
	push edx
	mov byte ptr [esp+0xC4],0x38
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x3A
	call get_int32
	add esp,8
	lea ecx,[esp+0x7C]
	mov dword ptr [esi+0xB34],eax
	mov byte ptr [esp+0xB8],0x38
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_Y
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x30]
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xC0],0x3B
	push eax
	mov byte ptr [esp+0xC4],0x38
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x3C
	call get_int32
	add esp,8
	lea ecx,[esp+0x7C]
	mov dword ptr [esi+0xB38],eax
	mov byte ptr [esp+0xB8],0x38
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_EFFECT__1
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0xC8],0x3D
	mov byte ptr [esp+0xC8],0x38
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x3E
	call Ztl_variant_t::GetUnknown
	test eax,eax
	lea ecx,[esp+0x7C]
	setne byte ptr [esp+0x23]
	mov byte ptr [esp+0xB8],0x38
	call Ztl_variant_t::~Ztl_variant_t
	cmp byte ptr [esp+0x23],bl
	je Block72

 Block68:
	push 0xFFFFFFFF
	push offset _S_INFORESULTEFFECT
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0xB3C],1
	call ZXString16::CreateFromCharStr
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0xC0],0x3F
	call ZXString16::op_add_1
	push eax
	lea ecx,[esi+0xB40]
	mov byte ptr [esp+0xBC],0x40
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB8],0x3F
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0x38
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	push 0xFFFFFFFF
	push offset _S_BACKGRND
	lea ecx,[esp+0x2C]
	call ZXString16::CreateFromCharStr
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0xC0],0x41
	call ZXString16::op_add_1
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0x43
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	push ebx
	lea ecx,[esi+0xA4]
	call ZRef<GW_ItemSlotBase>::op_assign_zero
	mov ecx,dword ptr [esp+0xC4]
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0xC0]
	push 1
	push ebx
	push 1
	mov dword ptr [esi+0xAF8],ecx
	push edx
	mov ecx,esi
	mov dword ptr [esi+0xAF4],eax
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC8]
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,dword ptr [esp+0xD0]
	mov edx,dword ptr [esp+0xCC]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CUIIncubator::PutItem

 Block76:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB8],0x38
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],0x30
	cmp eax,ebx
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xBC],0x28
	call ecx
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xBC],0x24
	call eax
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xBC],0x18
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xBC],0x14
	call ecx
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xBC],0xA
	call eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 0x14

 Block81:
	push offset ZException::THROW_INFO
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block82:
	push offset ZException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block83:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block84:
	push offset ZException::THROW_INFO
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block85:
	push offset ZException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException
	int 3
}
}
// CUIIncubator::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3CA660)
__SUB_CLASS_THIS(003CA660, __thiscall, 68842,  CUIIncubator, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CA660
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
	mov ecx,dword ptr [esp+0x2C]
	mov eax,ecx
	sub eax,0x7D0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block4:
	cmp dword ptr [esi+0xA8],0
	jne Block7

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block6:
	mov edx,dword ptr [esi+0xAF8]
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 2
	push edx
	push eax
	call CItemInfo::GetGachaponMsg
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esi+0xAF8]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 4
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetGachaponMsg
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block13

 Block8:
	push 0x55
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x24],0
	call get_update_time
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	movzx edx,word ptr [esi+0xAF4]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0xAF8]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xAFC]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xB00]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov edi,eax
	jne Block11

 Block9:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block11

 Block10:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jge Block12

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block12:
	call get_update_time
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	call CWvsContext::SetExclRequestSent
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUIIncubator::~CUIIncubator
_SUB_EXCEPTION_HANDLER(3CB5E0)
__SUB_CLASS_THIS0(003CB5E0, __thiscall, 68839,  CUIIncubator, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CB5E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIIncubator::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIIncubator::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIIncubator::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB44]
	mov dword ptr [esp+0x1C],9
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB40]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xB10]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xB0C]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB08]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0xB04]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov eax,dword ptr [esi+0xA8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xA8]
	cmp ecx,ebx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block14:
	mov dword ptr [esi+0xA8],ebx

 Block15:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
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
// CUIIncubator::OnCreate
_SUB_EXCEPTION_HANDLER(3CB7A0)
__SUB_CLASS_THIS(003CB7A0, __thiscall, 68840,  CUIIncubator, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CB7A0
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
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xB44]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0xAF8]
	cmp eax,0x4D35A2
	jne Block10

 Block1:
	push 0xFFFFFFFF
	push offset _S_BTOK
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	lea ebp,[esi+0xB08]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x40],ebx
	call ZXString16::op_add_1
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 0x7D0
	push eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],1
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x3C],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x38],1
	cmp dword ptr [esp+0x24],ebx
	je Block3

 Block2:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x24],ebx

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push 0xFFFFFFFF
	push offset _S_BTCANCEL
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x40],3
	call ZXString16::op_add_1
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 0x7D1
	push eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],4
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x3C],5
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x38],4
	cmp dword ptr [esp+0x24],ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x24],ebx

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],3
	jmp Block20

 Block10:
	cmp eax,0x4D35A3
	jne Block24

 Block11:
	push 0xFFFFFFFF
	push offset _S_BTOK
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	lea ebp,[esi+0xB08]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x40],6
	call ZXString16::op_add_1
	mov edx,dword ptr [esi+0xB28]
	mov ecx,dword ptr [esi+0xB24]
	mov eax,dword ptr [eax]
	push ebx
	push edx
	push ecx
	push 0x7D0
	push eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],7
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x3C],8
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x38],7
	cmp dword ptr [esp+0x24],ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x24],ebx

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],6
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push 0xFFFFFFFF
	push offset _S_BTCANCEL
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x40],9
	call ZXString16::op_add_1
	mov edx,dword ptr [esi+0xB30]
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [eax]
	push ebx
	push edx
	push ecx
	push 0x7D1
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],0xA
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x3C],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x38],0xA
	cmp dword ptr [esp+0x2C],ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x2C],ebx

 Block19:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],9

 Block20:
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esi+0xA0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
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
// CUIIncubator::GetRTTI
__SUB_CLASS_THIS0(003CB590, __thiscall, 68849,  CUIIncubator, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIIncubator::ms_RTTI_CUIIncubator
	ret
}
}
// CUIIncubator::IsKindOf
__SUB_CLASS_THIS(003CB5B0, __thiscall, 68850,  CUIIncubator, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIIncubator::ms_RTTI_CUIIncubator
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
// CUIIncubator::Draw
__SUB_CLASS_THIS(003CA390, __thiscall, 68841,  CUIIncubator, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::Draw
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [esi+0xB14]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	push edx
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block2:
	pop esi
	ret 4
}
}
// CUIIncubator::OnDestroy
__SUB_CLASS_THIS0(003CB570, __thiscall, 68839,  CUIIncubator, void) {
__asm {

 Block0:
	ret
}
}
