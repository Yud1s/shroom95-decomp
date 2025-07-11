#include "regen.hpp"
// RepairDurabilityDlg.ipp
#include "RepairDurabilityDlg.hpp"

// CRepairDurabilityDlg::GetRTTI
__SUB_CLASS_THIS0(0051D9E0, __thiscall, 81640,  CRepairDurabilityDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CRepairDurabilityDlg::ms_RTTI_CRepairDurabilityDlg
	ret
}
}
// CRepairDurabilityDlg::ITEM::~ITEM
_SUB_EXCEPTION_HANDLER(2D3A80)
__SUB_CLASS_THIS0(002D3A80, __thiscall, 81655,  CRepairDurabilityDlg::ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D3A80
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
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x10],0

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CRepairDurabilityDlg::Draw
_SUB_EXCEPTION_HANDLER(2D4E20)
__SUB_CLASS_THIS(002D4E20, __thiscall, 81628,  CRepairDurabilityDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D4E20
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
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x18],0

 Block5:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x2C]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block7:
	mov ecx,edi
	call CRepairDurabilityDlg::DrawItem
	mov ecx,dword ptr [edi+0xCC]
	push 0xD6
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block9:
	mov ecx,edi
	call CRepairDurabilityDlg::DrawMoney
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block11:
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
// CRepairDurabilityDlg::AddItem
_SUB_EXCEPTION_HANDLER(2D5000)
__SUB_CLASS_THIS(002D5000, __thiscall, 81634,  CRepairDurabilityDlg, void, GW_ItemSlotBase*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D5000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x1C],ecx
	mov edi,dword ptr [ebp+8]
	xor ebx,ebx
	cmp edi,ebx
	je Block11

 Block1:
	lea esi,[edi+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov dword ptr [ebp-0x14],eax
	cmp eax,ebx
	je Block11

 Block2:
	mov eax,dword ptr [edi+0xF5]
	push eax
	lea ecx,[edi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edx+0x260]
	add esp,8
	cmp ecx,ebx
	mov dword ptr [ebp-0x24],ecx
	jle Block11

 Block3:
	cmp eax,ecx
	jge Block11

 Block4:
	mov dword ptr [ebp-0x38],ebx
	mov dword ptr [ebp-0x34],ebx
	mov dword ptr [ebp-0x2C],ebx
	mov ecx,esi
	mov dword ptr [ebp-4],ebx
	call TSecType<long>::GetData
	mov edx,dword ptr [edi]
	mov dword ptr [ebp-0x48],eax
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x44],eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+0xC8]
	mov ecx,esi
	mov dword ptr [ebp-0x40],eax
	mov dword ptr [ebp-0x3C],edx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp-0x18]
	push eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push ebx
	push eax
	mov byte ptr [ebp-4],1
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ecx,esi
	mov ebx,esp
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push ebx
	push eax
	mov byte ptr [ebp-4],2
	call ZStrUtil::_Conv_0
	add esp,0xC
	push eax
	lea ecx,[ebp-0x14]
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x14]
	push edx
	lea ecx,[ebp-0x38]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x14]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [ebp-0x48]
	push 0
	push 1
	push eax
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp-0x34]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	push edi
	lea ecx,[ebp-0x30]
	call ZRef<GW_ItemSlotEquip>::op_assign_ptr
	mov ecx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x48]
	push edx
	mov dword ptr [ebp-0x28],ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0xB8]
	call ZArray<CRepairDurabilityDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CRepairDurabilityDlg::ITEM::operator=
	inc dword ptr [esi+0xC8]
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CRepairDurabilityDlg::ITEM::~ITEM

 Block11:
	lea esp,[ebp-0x58]
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
// CRepairDurabilityDlg::ResetRepairPay
__SUB_CLASS_THIS0(002D2D20, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD0]
	mov dword ptr [esi+0xCC],0
	test eax,eax
	jl Block5

 Block1:
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[eax+eax*8]
	cmp dword ptr [ecx+eax*4+0x1C],0
	lea eax,[ecx+eax*4]
	je Block5

 Block2:
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	push edx
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [esi+0xD0]
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[eax+eax*8]
	mov eax,dword ptr [ecx+eax*4+0x1C]
	mov edx,dword ptr [eax+0xF5]
	add eax,0x49
	push edx
	add eax,0xA4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::CalcRepairDurabilityPay
	mov dword ptr [esi+0xCC],eax

 Block4:
	pop edi

 Block5:
	pop esi
	ret
}
}
// CRepairDurabilityDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2D4650)
__SUB_CLASS_THIS(002D4650, __thiscall, 81623,  CRepairDurabilityDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D4650
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
	push 0
	push 0
	lea ebp,[edi+0xB24]
	push edi
	mov ecx,ebp
	call CLayoutMan::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x88],0
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGRE__25
	mov byte ptr [esp+0x9C],1
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x98],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x70]
	mov byte ptr [esp+0x98],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xC4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x84],1
	cmp word ptr [esp+0x5C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block13:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x2C],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block17:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block21:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGRE__24
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x84],4
	test eax,eax
	je Block49

 Block22:
	add eax,8
	je Block49

 Block23:
	lea esi,[eax-8]
	test esi,esi
	je Block25

 Block24:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block25:
	mov eax,dword ptr [edi+0x98]
	mov dword ptr [edi+0x98],esi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block27

 Block26:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block27:
	or ebx,0xFFFFFFFF
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x84],ebx
	je Block29

 Block28:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block29:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGRE__23
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x84],5
	test eax,eax
	je Block50

 Block30:
	add eax,8
	je Block50

 Block31:
	lea esi,[eax-8]
	test esi,esi
	je Block33

 Block32:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [edi+0xA0]
	mov dword ptr [edi+0xA0],esi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block35

 Block34:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x84],ebx
	je Block37

 Block36:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block37:
	lea edx,[esp+0x14]
	push 0x1962
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	mov ebx,6
	push ebx
	push 0xD3
	push 2
	push eax
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x9C],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x84],7
	test eax,eax
	je Block51

 Block38:
	add eax,8
	je Block51

 Block39:
	lea esi,[eax-8]
	test esi,esi
	je Block41

 Block40:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov eax,dword ptr [edi+0xA8]
	mov dword ptr [edi+0xA8],esi
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block43

 Block42:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block43:
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x84],bl
	je Block45

 Block44:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],0

 Block45:
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x84],esi
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov ebp,8
	mov dword ptr [esp+0x84],ebp
	test eax,eax
	je Block52

 Block48:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block53

 Block49:
	xor esi,esi
	jmp Block25

 Block50:
	xor esi,esi
	jmp Block33

 Block51:
	xor esi,esi
	jmp Block41

 Block52:
	xor eax,eax

 Block53:
	mov dword ptr [esp+0x84],esi
	test eax,eax
	je Block68

 Block54:
	add eax,8
	je Block68

 Block55:
	lea esi,[eax-8]
	test esi,esi
	je Block57

 Block56:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block57:
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [edi+0xB0],esi
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block59

 Block58:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block59:
	mov ecx,dword ptr [edi+0xB0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xCB
	push 0x6D
	push 0xD4
	push 3
	push 1
	push 0x3EA
	push edi
	call edx
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [eax+0x34],0xB4
	lea eax,[esp+0x14]
	push 0x31
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xBC]
	add esp,8
	cmp esi,eax
	je Block64

 Block60:
	mov dword ptr [edi+0xBC],eax
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block62:
	test esi,esi
	je Block64

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block64:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block67:
	push eax
	call _com_issue_error

 Block68:
	xor esi,esi
	jmp Block57

 Block69:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x88],9
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x50E
	mov bl,0xA
	push ecx
	mov byte ptr [esp+0xA0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x98],0xB
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x70]
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xC0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block76

 Block74:
	cmp eax,0x80004002
	je Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x5C],bp
	jne Block83

 Block77:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block80:
	mov ebx,8
	mov byte ptr [esp+0x84],9
	cmp word ptr [esp+0x2C],bx
	jne Block84

 Block81:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	jmp Block80

 Block84:
	lea eax,[esp+0x2C]
	push eax
	call ebp

 Block85:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block89:
	lea eax,[esp+0x4C]
	push eax
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x88],0xD
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	push 0
	push 0
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x95F
	mov bl,0xE
	push eax
	mov byte ptr [esp+0xA0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x98],0xF
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x6C],si
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x6C]
	push eax
	call ebp

 Block102:
	mov byte ptr [esp+0x84],0xD
	cmp word ptr [esp+0x3C],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block106:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x4C],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x4C]
	push ecx
	call ebp

 Block110:
	mov ecx,edi
	call CRepairDurabilityDlg::SetNPC
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x38]
	mov ecx,edi
	call eax
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
// CRepairDurabilityDlg::SetScrollBar
__SUB_CLASS_THIS0(002D2B80, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC8]
	cmp eax,5
	jle Block2

 Block1:
	mov ecx,dword ptr [ecx+0xB0]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret

 Block2:
	mov ecx,dword ptr [ecx+0xB0]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CRepairDurabilityDlg::DrawItem
_SUB_EXCEPTION_HANDLER(2D3B20)
__SUB_CLASS_THIS(002D3B20, __thiscall, 81635,  CRepairDurabilityDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D3B20
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [ebp+0xB0]
	mov eax,dword ptr [eax+0x38]
	mov dword ptr [esp+0x28],eax
	lea eax,[eax+eax*8]
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0xB8],0
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x18],0x6D
	mov ecx,1

 Block1:
	mov eax,dword ptr [esp+0x28]
	cmp eax,dword ptr [ebp+0xD0]
	jne Block10

 Block2:
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov edx,0xFF
	mov dword ptr [esp+0x68],edx
	mov esi,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0xB8],cl
	mov ecx,dword ptr [esp+0xC0]
	test ecx,ecx
	je Block91

 Block3:
	mov ebp,dword ptr [esp+0x60]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	push 0x2F
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xB8],0
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebp,dword ptr [esp+0x14]

 Block10:
	mov eax,dword ptr [ebp+0xB8]
	test eax,eax
	je Block87

 Block11:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,dword ptr [eax-4]
	jae Block87

 Block12:
	mov edi,eax
	add edi,dword ptr [esp+0x2C]
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [edi+0x14]
	mov esi,eax
	xor ebx,ebx
	mov byte ptr [esp+0xB8],2
	mov dword ptr [esp+0x1C],eax
	cmp esi,ebx
	je Block91

 Block13:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x38]
	push edx
	push esi
	mov dword ptr [esp+0x40],ebx
	call eax
	cmp eax,ebx
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov esi,dword ptr [edi+0x14]
	mov ebp,dword ptr [esp+0x38]
	cmp esi,ebx
	je Block91

 Block16:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],ebx
	call eax
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,dword ptr [esp+0xC0]
	cmp ecx,ebx
	je Block91

 Block19:
	mov ebx,dword ptr [esp+0x50]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x64]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x68]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x6C]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	sub eax,ebp
	add eax,0x22
	push eax
	mov eax,0xD
	sub eax,dword ptr [esp+0x3C]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xB8],0
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov esi,dword ptr [edi+0x10]
	test esi,esi
	je Block29

 Block26:
	cmp dword ptr [esi+4],0
	jne Block28

 Block27:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block28:
	mov edx,dword ptr [esi+4]
	jmp Block30

 Block29:
	xor edx,edx

 Block30:
	mov dword ptr [esp+0x20],0
	test edx,edx
	je Block34

 Block31:
	mov eax,edx
	lea esi,[eax+1]

 Block32:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block32

 Block33:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer

 Block34:
	mov ebp,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp+0xBC]
	push 0xA0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xC0],3
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	lea ecx,[esp+0x28]
	push ecx
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x90]
	push edx
	call esi
	lea eax,[esp+0x90]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block92

 Block37:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xBC],4
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block92

 Block38:
	mov edx,dword ptr [esp+0xC0]
	lea eax,[esp+0x90]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea ecx,[esp+0x74]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xBC]
	mov byte ptr [esp+0xC8],6
	test ecx,ecx
	je Block91

 Block39:
	mov eax,dword ptr [esp+0x28]
	add eax,0x15
	mov dword ptr [esp+0x34],eax
	add eax,0xFFFFFFEE
	push eax
	push 0x36
	mov byte ptr [esp+0xD0],bl
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xB8],4
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xB8],3
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[esp+0xA0]
	push edx
	call esi
	lea eax,[esp+0xA0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block92

 Block48:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xBC],7
	call esi
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block92

 Block49:
	mov edx,dword ptr [esp+0xC0]
	lea eax,[esp+0xA0]
	push eax
	lea ecx,[esp+0x84]
	push ecx
	push edx
	mov dword ptr [esp+0x48],0
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [eax+0xF5]
	push ecx
	add eax,0xED
	mov bl,9
	push eax
	mov byte ptr [esp+0xCC],bl
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x64
	cdq
	idiv dword ptr [edi+0x20]
	lea edx,[esp+0x50]
	push eax
	push offset _S_D__10
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xBC]
	mov byte ptr [esp+0xC8],0xA
	test ecx,ecx
	je Block91

 Block50:
	mov eax,dword ptr [esp+0x34]
	push eax
	push 0x36
	mov byte ptr [esp+0xD0],bl
	call IWzFont::DrawTextA
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB8],8
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov esi,8
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x80],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0xB8],3
	cmp word ptr [esp+0xA0],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov esi,dword ptr [edi]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block65

 Block61:
	cmp eax,3
	je Block65

 Block62:
	cmp eax,4
	je Block65

 Block63:
	push esi
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block65

 Block64:
	push esi
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block70

 Block65:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xC0]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	mov eax,dword ptr [esp+0x2C]
	dec eax
	push esi
	push eax
	push 0xB
	push ecx
	mov ecx,dword ptr [esp+0xD8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD8]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block69:
	call draw_number_by_image
	add esp,0x18

 Block70:
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block85

 Block71:
	mov edx,3
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],0xFF
	mov ebx,dword ptr [ebp+0xD8]
	mov esi,ebx
	mov byte ptr [esp+0xB8],0xB
	test esi,esi
	je Block91

 Block72:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	mov esi,dword ptr [ebp+0xD8]
	mov edi,dword ptr [esp+0x30]
	test esi,esi
	je Block91

 Block75:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x34]
	push ecx
	push esi
	mov dword ptr [esp+0x3C],0
	call edx
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	mov ecx,dword ptr [esp+0xC0]
	test ecx,ecx
	je Block91

 Block78:
	mov ebp,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x54]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x28]
	sub eax,edi
	push ebx
	add eax,0x20
	push eax
	mov eax,0x2B
	sub eax,dword ptr [esp+0x4C]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xB8],3
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov ebp,dword ptr [esp+0x14]

 Block85:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB8],0
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x2C],0x24
	add eax,0x2A
	mov ecx,1
	add dword ptr [esp+0x28],ecx
	cmp eax,0x13F
	mov dword ptr [esp+0x18],eax
	jl Block1

 Block88:
	mov eax,dword ptr [esp+0xC0]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 4

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	push eax
	call _com_issue_error
}
}
// CRepairDurabilityDlg::ClearToolTip
__SUB_CLASS_THIS0(0051D9D0, __thiscall, 81629,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xD8
	jmp  CUIToolTip::ClearToolTip
}
}
// CRepairDurabilityDlg::ITEM::operator=
__SUB_CLASS_THIS(002D45A0, __thiscall, 81657,  CRepairDurabilityDlg::ITEM, CRepairDurabilityDlg::ITEM&, const CRepairDurabilityDlg::ITEM&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [edi+8]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [edi+0xC]
	lea ebp,[edi+0x10]
	lea ebx,[esi+0x10]
	mov dword ptr [esi+0xC],eax
	cmp ebx,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [edi+0x14]
	mov ebx,dword ptr [esi+0x14]
	cmp ebx,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x14],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block10:
	lea edx,[edi+0x18]
	push edx
	lea ecx,[esi+0x18]
	call ZRef<GW_ItemSlotEquip>::op_assign_copy
	mov eax,dword ptr [edi+0x20]
	pop edi
	mov dword ptr [esi+0x20],eax
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CRepairDurabilityDlg::ResetInfo
__SUB_CLASS_THIS0(002D52C0, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esi+0xC8]
	lea ecx,[esi+0xB8]
	call ZArray<CRepairDurabilityDlg::ITEM>::RemoveAll
	mov ecx,esi
	call CRepairDurabilityDlg::SetItems
	cmp edi,dword ptr [esi+0xC8]
	je Block2

 Block1:
	mov ecx,esi
	mov dword ptr [esi+0xD0],0xFFFFFFFF
	call CRepairDurabilityDlg::ResetRepairPay
	mov ecx,esi
	call CRepairDurabilityDlg::SetScrollBar

 Block2:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret
}
}
// CRepairDurabilityDlg::DrawMoney
_SUB_EXCEPTION_HANDLER(2D4320)
__SUB_CLASS_THIS(002D4320, __thiscall, 81636,  CRepairDurabilityDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D4320
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x48]
	push 1
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x48],1
	call format_integer
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x14]
	push edx
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esp+0xC]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x50]
	push 0x37
	push eax
	mov byte ptr [esp+0x4C],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x44],5
	call IWzFont::CalcTextWidth
	mov edi,dword ptr [esp+0x4C]
	sub edi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x40],6
	call esi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x50]
	push 0x38
	push edx
	mov byte ptr [esp+0x4C],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x18]
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],9
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x51
	push edi
	mov byte ptr [esp+0x54],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],7
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,8
	mov byte ptr [esp+0x3C],6
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret 0xC
}
}
// CRepairDurabilityDlg::IsKindOf
__SUB_CLASS_THIS(0051D9F0, __thiscall, 81641,  CRepairDurabilityDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CRepairDurabilityDlg::ms_RTTI_CRepairDurabilityDlg
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
// CRepairDurabilityDlg::SetNPC
_SUB_EXCEPTION_HANDLER(2D2ED0)
__SUB_CLASS_THIS0(002D2ED0, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D2ED0
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
	mov ebp,ecx
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov dword ptr [esp+0x94],edi
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xD4]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+0xD4],eax
	cmp eax,edi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,edi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x18],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block19:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [ebp+0xD4]
	mov byte ptr [esp+0x94],3
	cmp esi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x28]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x98],ebx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp+0xD4]
	mov byte ptr [esp+0x94],5
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x5C
	push 0x39
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x28],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov esi,dword ptr [ebp+0xD4]
	cmp esi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [ebp+0xD4]
	mov byte ptr [esp+0x94],7
	cmp esi,edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,edi
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [ebp+0xD4]
	cmp esi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,edi
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebp+0xD4]
	cmp esi,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	cmp eax,edi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [ebp+0xB4]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	mov ecx,dword ptr [eax+0x34]
	mov esi,8
	mov dword ptr [esp+0x94],esi
	cmp ecx,edi
	jne Block71

 Block70:
	mov ecx,1

 Block71:
	push 0xFFFFFFFE
	lea edx,[esp+0x7C]
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	call CActionMan::LoadNpcAction
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0xD4]
	mov byte ptr [esp+0x94],9
	cmp ecx,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x28],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x84]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block112

 Block80:
	lea ebx,[ebx]

 Block81:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x58]
	push eax
	call ebx
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block82:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x98],0xA
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block83:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x98],0xB
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block84:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x98],0xC
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block85:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [ebp+0xD4]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],0xE
	cmp ecx,edi
	je Block3

 Block86:
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	lea edx,[esp+0x80]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x68],8
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,edi
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],0xD
	jne Block97

 Block91:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block94:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],0xC
	jne Block98

 Block95:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block99

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block94

 Block98:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block99:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x94],0xB
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block103:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x94],0xA
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block107:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x94],8
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block111:
	cmp dword ptr [esp+0x14],edi
	jne Block81

 Block112:
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	lea edx,[esp+0x58]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x98],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [ebp+0xD4]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,edi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x58],si
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x48],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CRepairDurabilityDlg::SendRepairDurabilityAll
_SUB_EXCEPTION_HANDLER(2D37B0)
__SUB_CLASS_THIS0(002D37B0, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D37B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x82
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	mov dword ptr [esp+0x20],0
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CRepairDurabilityDlg::SetItems
__SUB_CLASS_THIS0(002D5200, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov ebx,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
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
	mov dword ptr [esp+0x14],0

 Block5:
	mov dword ptr [ebx+0xC8],0
	mov eax,dword ptr [ebp+0x505]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	lea edi,[eax-1]
	mov esi,1
	cmp edi,esi
	jl Block9

 Block8:
	mov ecx,dword ptr [ebp+0x505]
	mov edx,dword ptr [ecx+esi*8+4]
	push esi
	push edx
	mov ecx,ebx
	call CRepairDurabilityDlg::AddItem
	inc esi
	cmp esi,edi
	jle Block8

 Block9:
	xor esi,esi
	lea edi,[ebp+0xFD]

 Block10:
	mov eax,dword ptr [edi]
	push esi
	push eax
	mov ecx,ebx
	call CRepairDurabilityDlg::AddItem
	dec esi
	add edi,8
	cmp esi,0xFFFFFFC5
	jge Block10

 Block11:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// CRepairDurabilityDlg::OnButtonClicked
__SUB_CLASS_THIS(002D3A20, __thiscall, 81631,  CRepairDurabilityDlg, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3E8
	je Block4

 Block1:
	sub eax,1
	jne Block5

 Block2:
	call CRepairDurabilityDlg::SendRepairDurability

 Block3:
	ret 4

 Block4:
	call CRepairDurabilityDlg::SendRepairDurabilityAll
	ret 4

 Block5:
	cmp edx,1
	jne Block7

 Block6:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block7:
	cmp edx,2
	jne Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block9:
	cmp edx,8
	jne Block3

 Block10:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx
}
}
// CRepairDurabilityDlg::SendRepairDurability
_SUB_EXCEPTION_HANDLER(2D3980)
__SUB_CLASS_THIS0(002D3980, __thiscall, 81622,  CRepairDurabilityDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D3980
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
	cmp dword ptr [esi+0xD0],0
	jl Block2

 Block1:
	push 0x83
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xD0]
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[eax+eax*8]
	mov edx,dword ptr [ecx+eax*4+4]
	push edx
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CRepairDurabilityDlg::OnMouseButton
__SUB_CLASS_THIS(002D2DA0, __thiscall, 81626,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push edi
	mov edi,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push esi
	push eax
	lea esi,[edi-4]
	push ecx
	mov ecx,esi
	call CRepairDurabilityDlg::GetItemIndexFromPoint
	mov ecx,esi
	mov dword ptr [edi+0xCC],eax
	call CRepairDurabilityDlg::ResetRepairPay
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi

 Block2:
	pop edi
	ret 0x10
}
}
// CRepairDurabilityDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(002D2BB0, __thiscall, 81637,  CRepairDurabilityDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx+0xC8]
	cmp eax,5
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov ebx,5
	jg Block2

 Block1:
	mov ebx,eax

 Block2:
	xor edi,edi
	test ebx,ebx
	jle Block6

 Block3:
	mov esi,0x6D
	lea esp,[esp]

 Block4:
	lea eax,[esi+0x23]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0x20],0xB
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],0xD2
	call PtInRect
	test eax,eax
	jne Block7

 Block5:
	inc edi
	add esi,0x2A
	cmp edi,ebx
	jl Block4

 Block6:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 8

 Block7:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [edx+0xB0]
	mov eax,dword ptr [eax+0x38]
	add eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CRepairDurabilityDlg::HitTest
__SUB_CLASS_THIS(002D2B00, __thiscall, 81627,  CRepairDurabilityDlg, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0x40
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CRepairDurabilityDlg::OnChildNotify
__SUB_CLASS_THIS(002D2B40, __thiscall, 81630,  CRepairDurabilityDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EA
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block4

 Block2:
	cmp edx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block4:
	cmp edx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block6:
	ret 0xC
}
}
// CRepairDurabilityDlg::CRepairDurabilityDlg
_SUB_EXCEPTION_HANDLER(51D8D0)
__SUB_CLASS_THIS(0051D8D0, __thiscall, 81620,  CRepairDurabilityDlg, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_51D8D0
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRepairDurabilityDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRepairDurabilityDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRepairDurabilityDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],0xFFFFFFFF
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	lea ecx,[esi+0xDC]
	mov byte ptr [esp+0x18],0xA
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB30],edi
	mov dword ptr [esi+0xB34],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGRE__6
	mov ecx,esi
	mov byte ptr [esp+0x28],0xC
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CRepairDurabilityDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(2D3870)
__SUB_CLASS_THIS(002D3870, __thiscall, 81624,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D3870
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x50]
	mov edi,dword ptr [esp+0x4C]
	push ebx
	push edi
	lea ecx,[esi-4]
	call CRepairDurabilityDlg::GetItemIndexFromPoint
	xor ecx,ecx
	cmp eax,ecx
	jl Block3

 Block1:
	cmp edi,0x2E
	jge Block3

 Block2:
	mov edx,dword ptr [_D_DB_DATE_19000101__123]
	mov dword ptr [esp+0x28],edx
	mov edx,dword ptr [_D_DB_DATE_19000101__123+4]
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [esi+0xB4]
	push ecx
	push ecx
	push ecx
	lea eax,[eax+eax*8]
	push ecx
	mov dword ptr [esp+0x54],ecx
	lea eax,[edx+eax*4]
	mov edx,dword ptr [esi]
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],1
	mov eax,dword ptr [eax+0x1C]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,edi
	push eax
	lea ecx,[esi+0xD8]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam
	mov eax,1
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 8

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 8
}
}
// CRepairDurabilityDlg::OnMouseEnter
__SUB_CLASS_THIS(002D2AE0, __thiscall, 81625,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xD8]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
