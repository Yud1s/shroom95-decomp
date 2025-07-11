#include "regen.hpp"
// UIQuestDelivery.ipp
#include "UIQuestDelivery.hpp"

// CUIQuestDelivery::SyncScrollBarWithSelected
__SUB_CLASS_THIS0(0041EF10, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	cmp eax,3
	mov ecx,dword ptr [ecx+0xAC]
	jle Block2

 Block1:
	push eax
	call CCtrlScrollBar::SetCurPos
	ret

 Block2:
	push 0
	call CCtrlScrollBar::SetCurPos
	ret
}
}
// CUIQuestDelivery::CUIQuestDelivery
_SUB_EXCEPTION_HANDLER(41F8B0)
__SUB_CLASS_THIS(0041F8B0, __thiscall, 72000,  CUIQuestDelivery, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41F8B0
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestDelivery::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestDelivery::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestDelivery::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD0],edi
	lea ebp,[esi+0xD8]
	mov dword ptr [ebp+4],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	xor eax,eax
	mov word ptr [esi+0xBC],ax
	push edx
	lea eax,[esp+0x1C]
	mov dword ptr [esi+0xA4],0xFFFFFFFF
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xD4],ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	mov byte ptr [esp+0x30],9
	call CItemInfo::GetQuestDeliveryItem
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x2C],0xA
	call ZRef<CItemInfo::QUESTDELIVERYITEM>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],9
	cmp eax,edi
	je Block4

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp ebp,edi
	je Block4

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block4:
	mov eax,dword ptr [esi+0xDC]
	cmp eax,edi
	je Block11

 Block5:
	cmp dword ptr [eax+4],edi
	jne Block7

 Block6:
	lea ecx,[esp+0x30]
	push 0x19FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x28],0xB
	jmp Block9

 Block7:
	cmp dword ptr [eax+4],1
	jne Block11

 Block8:
	lea edx,[esp+0x30]
	push 0x1A02
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x28],0xC

 Block9:
	mov eax,dword ptr [eax]
	push 1
	push edi
	push 1
	push eax
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],9
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUIQuestDelivery::GetRTTI
__SUB_CLASS_THIS0(0041FA70, __thiscall, 72014,  CUIQuestDelivery, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIQuestDelivery::ms_RTTI_CUIQuestDelivery
	ret
}
}
// CUIQuestDelivery::OnCreate
_SUB_EXCEPTION_HANDLER(420500)
__SUB_CLASS_THIS(00420500, __thiscall, 72003,  CUIQuestDelivery, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_420500
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
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xE0]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov edx,1
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x48],edx
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x50],ebp
	mov eax,dword ptr [esi+0xDC]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x60],ebp
	cmp ecx,ebp
	jne Block6

 Block1:
	lea eax,[esp+0x14]
	push 0x1A00
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0xBB8
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x78],1
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x64],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x60],1
	cmp dword ptr [esp+0x1C],ebp
	je Block3

 Block2:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	lea edx,[esp+0x14]
	push 0x1A01
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0xBB9
	push eax
	lea eax,[esp+0x2C]
	mov bl,3
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],bl
	call CLayoutMan::AddButton
	mov byte ptr [esp+0x60],4
	jmp Block12

 Block6:
	cmp ecx,edx
	jne Block16

 Block7:
	lea ecx,[esp+0x14]
	push 0x1A03
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0xBB8
	push eax
	lea edx,[esp+0x2C]
	mov bl,5
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x78],bl
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x64],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x60],bl
	cmp dword ptr [esp+0x1C],ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	lea eax,[esp+0x14]
	push 0x1A04
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0xBB9
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov bl,7
	mov ecx,edi
	mov byte ptr [esp+0x78],bl
	call CLayoutMan::AddButton
	mov byte ptr [esp+0x60],8

 Block12:
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x9C]
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x60],bl
	cmp dword ptr [esp+0x1C],ebp
	je Block14

 Block13:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x64],9
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	push ebp
	push ebp
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xCC1
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x7C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x74],0xB
	cmp dword ptr [_D_G_RM],ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB4]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x38],bx
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x38]
	push edx
	call edi

 Block29:
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x18],bx
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block33:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x28],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block37:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xD
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block47

 Block41:
	add eax,8
	cmp eax,ebp
	je Block47

 Block42:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block44

 Block43:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block46

 Block45:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block46:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebp
	push 0x4D
	push 0x7B
	push 0xD9
	push ebx
	push 1
	push 0x7D0
	push esi
	call eax
	mov eax,dword ptr [esi+0xAC]
	mov ecx,esi
	mov dword ptr [eax+0x34],0xCF
	call CUIQuestDelivery::LoadData
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x38]
	mov ecx,esi
	call eax
	mov ecx,esi
	call CUIQuestDelivery::SyncScrollBarWithSelected
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block47:
	xor edi,edi
	jmp Block44
}
}
// CUIQuestDelivery::LoadData
_SUB_EXCEPTION_HANDLER(41FC60)
__SUB_CLASS_THIS0(0041FC60, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41FC60
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
	mov dword ptr [ebp-0x18],esi
	lea ecx,[esi+0xB8]
	call ZArray<ZRef<QuestDeliveryInfo>>::RemoveAll
	mov ecx,esi
	call CUIQuestDelivery::ResetShowOnlyWorthyQuests
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[ebp-0x50]
	push eax
	mov ecx,edi
	mov dword ptr [ebp-0x14],ebx
	mov dword ptr [ebp-0x38],edi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x28],ecx
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
	mov esi,dword ptr [ebp-0x18]
	mov ebx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x4C],0

 Block5:
	movzx eax,word ptr [edi+0x407C]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x2148
	xor edx,edx
	mov dword ptr [ebp-0x2C],ecx
	mov word ptr [edi+0x407C],dx
	test ax,ax
	jbe Block7

 Block6:
	mov word ptr [esi+0xBC],ax

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCurFieldID
	lea eax,[ebp-0x40]
	push eax
	mov ecx,ebx
	call CQuestMan::GetQuestArray
	xor ecx,ecx
	mov dword ptr [ebp-4],ecx
	mov dword ptr [ebp-0x20],ecx

 Block8:
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block64

 Block9:
	cmp ecx,dword ptr [eax-4]
	jae Block64

 Block10:
	movzx esi,word ptr [eax+ecx*2]
	push esi
	mov ecx,ebx
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block61

 Block11:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	movzx ecx,si
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp-0x18]
	mov ecx,dword ptr [edx+0xB4]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block62

 Block12:
	lea eax,[ebp-0x60]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	je Block15

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x3C]
	mov edi,ecx
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	jge Block15

 Block14:
	cmp eax,0x80004002
	jne Block63

 Block15:
	mov ebx,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x60],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	test edi,edi
	sete al
	test al,al
	je Block22

 Block20:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block61

 Block21:
	jmp Block59

 Block22:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xCC5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block62

 Block23:
	lea ecx,[ebp-0x70]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],6
	cmp word ptr [eax],bx
	jne Block25

 Block24:
	mov eax,dword ptr [eax+8]
	jmp Block26

 Block25:
	mov eax,offset _S___3

 Block26:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],0
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x70],bx
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ebx,dword ptr [ebp-0x24]
	test ebx,ebx
	je Block33

 Block31:
	cmp byte ptr [ebx],0
	je Block33

 Block32:
	mov byte ptr [ebp-4],4
	jmp Block57

 Block33:
	mov eax,dword ptr [ebp-0x18]
	mov eax,dword ptr [eax+0xDC]
	cmp dword ptr [eax+4],0
	jne Block43

 Block34:
	mov ecx,dword ptr [ebp-0x38]
	push esi
	call CWvsContext::GetQuestState
	test eax,eax
	jne Block56

 Block35:
	mov ecx,dword ptr [ebp-0x18]
	mov ecx,dword ptr [ecx+0xDC]
	push esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	jne Block39

 Block36:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block38

 Block37:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	inc dword ptr [ebp-0x20]
	mov ecx,dword ptr [ebp-0x20]
	mov ebx,dword ptr [ebp-0x14]
	mov esi,dword ptr [ebp-0x18]
	jmp Block8

 Block39:
	mov ecx,dword ptr [ebp-0x18]
	cmp dword ptr [ecx+0xC0],0
	je Block41

 Block40:
	push esi
	call CUIQuestDelivery::IsWorthlessQuest
	test eax,eax
	jne Block36

 Block41:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::IsDeliveryAcceptQuest
	test eax,eax
	je Block56

 Block42:
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-0x44],0
	call ZRef<QuestDeliveryInfo>::_Alloc
	mov edi,dword ptr [ebp-0x44]
	mov ecx,dword ptr [ebp-0x14]
	push esi
	mov byte ptr [ebp-4],9
	mov word ptr [edi],si
	call CQuestMan::GetStartDemand
	mov eax,dword ptr [eax+0x18]
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [edi+4],eax
	push 0xFFFFFFFF
	add ecx,0xB8
	mov dword ptr [edi+8],0
	call ZArray<ZRef<QuestDeliveryInfo>>::InsertBefore
	mov ecx,eax
	call ZRef<QuestDeliveryInfo>::op_assign_copy
	lea ecx,[ebp-0x48]
	jmp Block55

 Block43:
	cmp dword ptr [eax+4],1
	jne Block56

 Block44:
	mov ecx,dword ptr [ebp-0x38]
	push esi
	call CWvsContext::GetQuestState
	cmp eax,1
	jne Block56

 Block45:
	mov edx,dword ptr [ebp-0x18]
	mov ecx,dword ptr [edx+0xDC]
	push esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	jne Block49

 Block46:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block48

 Block47:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	inc dword ptr [ebp-0x20]
	mov ecx,dword ptr [ebp-0x20]
	mov ebx,dword ptr [ebp-0x14]
	mov esi,dword ptr [ebp-0x18]
	jmp Block8

 Block49:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::IsDeliveryCompleteQuest
	test eax,eax
	je Block36

 Block50:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ebp-0x28]
	mov edi,dword ptr [eax+0x18]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	push edx
	push edi
	push esi
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	je Block54

 Block51:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block53

 Block52:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0
	push eax
	jmp Block60

 Block54:
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x30],0
	call ZRef<QuestDeliveryInfo>::_Alloc
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [ebp-0x18]
	mov word ptr [eax],si
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],1
	lea eax,[ebp-0x34]
	push eax
	push 0xFFFFFFFF
	add ecx,0xB8
	mov byte ptr [ebp-4],0xA
	call ZArray<ZRef<QuestDeliveryInfo>>::InsertBefore
	mov ecx,eax
	call ZRef<QuestDeliveryInfo>::op_assign_copy
	lea ecx,[ebp-0x34]

 Block55:
	mov byte ptr [ebp-4],8
	call ZRef<QuestDeliveryInfo>::~ZRef<QuestDeliveryInfo>
	mov edi,dword ptr [ebp-0x1C]

 Block56:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block58

 Block57:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov byte ptr [ebp-4],0

 Block59:
	mov ecx,dword ptr [edi]
	push edi

 Block60:
	mov edx,dword ptr [ecx+8]
	call edx

 Block61:
	inc dword ptr [ebp-0x20]
	mov ecx,dword ptr [ebp-0x20]
	mov ebx,dword ptr [ebp-0x14]
	mov esi,dword ptr [ebp-0x18]
	jmp Block8

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov eax,dword ptr [esi+0xDC]
	cmp dword ptr [eax+4],0
	jne Block97

 Block65:
	lea ecx,[ebx+4]
	mov dword ptr [ebp-0x3C],ecx
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetHeadPosition
	mov dword ptr [ebp-0x2C],eax
	test eax,eax
	je Block116

 Block66:
	mov edi,edi

 Block67:
	xor ebx,ebx
	mov dword ptr [ebp-0x1C],ebx
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0xB
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetNext
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],ebx
	call ZXString<char>::op_assign
	mov edi,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp-0x24],ebx
	nop

 Block68:
	test edi,edi
	je Block93

 Block69:
	cmp ebx,dword ptr [edi-4]
	jae Block93

 Block70:
	movzx esi,word ptr [edi+ebx*2]
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block93

 Block71:
	mov ecx,dword ptr [ebp-0x38]
	push esi
	call CWvsContext::GetQuestState
	test eax,eax
	je Block76

 Block72:
	cmp eax,1
	je Block93

 Block73:
	cmp eax,2
	jne Block75

 Block74:
	movzx edx,si
	mov dword ptr [ebp-0x24],edx

 Block75:
	inc ebx
	jmp Block68

 Block76:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax+0xDC]
	push esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block93

 Block77:
	test ebx,ebx
	jne Block80

 Block78:
	mov ecx,dword ptr [ebp-0x18]
	cmp dword ptr [ecx+0xC0],ebx
	je Block80

 Block79:
	push esi
	call CUIQuestDelivery::IsWorthlessQuest
	test eax,eax
	jne Block93

 Block80:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::IsDeliveryAcceptQuest
	test eax,eax
	je Block93

 Block81:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<QuestDeliveryInfo>>::call
	lea edi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp-0x4C],edi
	mov ecx,dword ptr [ebp-0x14]
	push esi
	mov byte ptr [ebp-4],0xD
	call CQuestMan::GetStartDemand
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [edi+4],ecx
	mov word ptr [edi],si
	test ebx,ebx
	jne Block83

 Block82:
	xor edx,edx
	mov word ptr [edi+2],dx
	mov dword ptr [edi+8],edx
	jmp Block84

 Block83:
	mov ax,word ptr [ebp-0x24]
	mov word ptr [edi+2],ax
	mov dword ptr [edi+8],1

 Block84:
	mov ecx,dword ptr [ebp-0x18]
	push 0xFFFFFFFF
	add ecx,0xB8
	call ZArray<ZRef<QuestDeliveryInfo>>::InsertBefore
	lea esi,[edi-0x10]
	lea ecx,[esi+4]
	push ecx
	mov ebx,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block89

 Block85:
	add eax,0xFFFFFFF0
	mov dword ptr [ebp-0x20],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [ebp-0x20],0
	je Block88

 Block87:
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block88:
	mov dword ptr [ebx+4],0

 Block89:
	mov dword ptr [ebx+4],edi
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block92

 Block90:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block92

 Block91:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block92:
	mov dword ptr [ebp-0x4C],0

 Block93:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0
	call ZArray<unsigned short>::RemoveAll
	cmp dword ptr [ebp-0x2C],0
	jne Block67

 Block96:
	jmp Block116

 Block97:
	cmp dword ptr [eax+4],1
	jne Block116

 Block98:
	mov ecx,dword ptr [ebp-0x14]
	add ecx,4
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetHeadPosition
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block116

 Block99:
	lea ecx,[ecx]

 Block100:
	xor edi,edi
	mov dword ptr [ebp-0x20],edi
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	lea edx,[ebp-0x1C]
	push edx
	add ecx,4
	mov byte ptr [ebp-4],0xE
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetNext
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],edi
	call ZXString<char>::op_assign
	mov byte ptr [ebp-4],0xF
	lea esp,[esp]

 Block101:
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block113

 Block102:
	cmp edi,dword ptr [eax-4]
	jae Block113

 Block103:
	movzx esi,word ptr [eax+edi*2]
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block113

 Block104:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax+0xDC]
	push esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block113

 Block105:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::IsDeliveryCompleteQuest
	test eax,eax
	je Block113

 Block106:
	mov ecx,dword ptr [ebp-0x14]
	push esi
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [ebp-0x38]
	mov ebx,dword ptr [eax+0x18]
	push esi
	call CWvsContext::GetQuestState
	cmp eax,1
	je Block108

 Block107:
	inc edi
	jmp Block101

 Block108:
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ebp-0x28]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	push edx
	push ebx
	push esi
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	jne Block113

 Block109:
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x30],eax
	call ZRef<QuestDeliveryInfo>::_Alloc
	mov edi,dword ptr [ebp-0x30]
	mov ecx,dword ptr [ebp-0x18]
	lea eax,[ebp-0x34]
	mov word ptr [edi],si
	push eax
	mov dword ptr [edi+4],ebx
	push 0xFFFFFFFF
	add ecx,0xB8
	mov byte ptr [ebp-4],0x10
	mov dword ptr [edi+8],1
	call ZArray<ZRef<QuestDeliveryInfo>>::InsertBefore
	mov ecx,eax
	call ZRef<QuestDeliveryInfo>::op_assign_copy
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block112

 Block110:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block112

 Block111:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block112:
	mov dword ptr [ebp-0x30],0

 Block113:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0
	call ZArray<unsigned short>::RemoveAll
	cmp dword ptr [ebp-0x1C],0
	jne Block100

 Block116:
	mov edx,dword ptr [ebp-0x18]
	movzx esi,word ptr [edx+0xBC]
	test si,si
	jbe Block126

 Block117:
	xor ecx,ecx
	mov edi,edi

 Block118:
	mov eax,dword ptr [edx+0xB8]
	test eax,eax
	je Block126

 Block119:
	cmp ecx,dword ptr [eax-4]
	jae Block126

 Block120:
	mov eax,dword ptr [eax+ecx*8+4]
	cmp word ptr [eax+2],0
	jbe Block122

 Block121:
	movzx eax,word ptr [eax+2]
	jmp Block123

 Block122:
	movzx eax,word ptr [eax]

 Block123:
	cmp ax,si
	je Block125

 Block124:
	inc ecx
	jmp Block118

 Block125:
	mov dword ptr [edx+0xA4],ecx

 Block126:
	lea ecx,[ebp-0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned short>::RemoveAll
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
	ret
}
}
// CUIQuestDelivery::ResetShowOnlyWorthyQuests
__SUB_CLASS_THIS0(0041EF30, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	sub esp,0xC
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xDC]
	cmp dword ptr [eax+4],0
	jne Block4

 Block1:
	mov eax,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax+0xAFC]
	xor edx,edx
	and ecx,0xF0000000
	cmp ecx,0x10000000
	sete dl
	mov dword ptr [esi+0xC0],edx
	pop esi
	add esp,0xC
	ret

 Block3:
	lea eax,[esp+4]
	push eax
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	push 6
	call CConfig::GetUIWndPos
	mov eax,dword ptr [esp+4]
	xor ecx,ecx
	and eax,0xF0000000
	cmp eax,0x10000000
	sete cl
	mov dword ptr [esi+0xC0],ecx

 Block4:
	pop esi
	add esp,0xC
	ret
}
}
// CUIQuestDelivery::OnButtonClicked
_SUB_EXCEPTION_HANDLER(41F4E0)
__SUB_CLASS_THIS(0041F4E0, __thiscall, 72005,  CUIQuestDelivery, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41F4E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,ecx
	sub eax,0xBB8
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block4:
	mov ecx,dword ptr [esi+0xA4]
	test ecx,ecx
	jl Block20

 Block5:
	mov eax,dword ptr [esi+0xB8]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	cmp ecx,eax
	jae Block20

 Block8:
	mov eax,ecx
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx+eax*8+4]
	movzx ebx,word ptr [eax]
	mov eax,dword ptr [eax+4]
	push eax
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	push eax
	call CreateNpc
	add esp,8
	test eax,eax
	je Block15

 Block9:
	add eax,8
	je Block15

 Block10:
	lea edi,[eax-8]
	mov dword ptr [esp+0x14],edi
	test edi,edi
	je Block12

 Block11:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov dword ptr [esp+0x20],0
	test edi,edi
	je Block19

 Block13:
	mov eax,dword ptr [esi+0xD4]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x4078],eax
	mov eax,dword ptr [esi+0xDC]
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	jne Block16

 Block14:
	push ebx
	mov ecx,edi
	call CNpc::SetAcceptQuestOnlyOne
	jmp Block18

 Block15:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block12

 Block16:
	cmp ecx,1
	jne Block18

 Block17:
	push ebx
	mov ecx,edi
	call CNpc::SetCompletedQuestOnlyOne

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	sub esp,8
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZRef<CNpc>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::TalkToNpc
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [eax+0x4078],0

 Block19:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CNpc>::~ZRef<CNpc>

 Block20:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIQuestDelivery::OnMouseButton
__SUB_CLASS_THIS(0041F1E0, __thiscall, 72007,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIQuestDelivery::GetQuestIdxFromMousePos
	test eax,eax
	jl Block19

 Block1:
	mov ecx,dword ptr [esi+0xB4]
	test ecx,ecx
	je Block19

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block19

 Block3:
	mov ecx,dword ptr [esp+0xC]
	cmp ecx,0x202
	jne Block6

 Block4:
	cmp dword ptr [esi+0xA0],eax
	je Block19

 Block5:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xA0],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block6:
	cmp ecx,0x203
	jne Block19

 Block7:
	cmp dword ptr [esi+0xA0],eax
	je Block9

 Block8:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xA0],eax
	call CWnd::InvalidateRect

 Block9:
	mov edx,dword ptr [esi+0xA0]
	mov eax,dword ptr [esi+0xB4]
	mov eax,dword ptr [eax+edx*8+4]
	mov ecx,dword ptr [eax+8]
	cmp ecx,1
	jne Block13

 Block10:
	movzx ecx,word ptr [eax+2]
	test cx,cx
	jbe Block12

 Block11:
	movzx eax,cx
	push eax
	push 1
	jmp Block18

 Block12:
	movzx eax,word ptr [eax]
	push eax
	push 1
	jmp Block18

 Block13:
	test ecx,ecx
	jne Block19

 Block14:
	movzx ecx,word ptr [eax+2]
	test cx,cx
	jbe Block16

 Block15:
	movzx eax,cx
	jmp Block17

 Block16:
	movzx eax,word ptr [eax]

 Block17:
	push eax
	push 0

 Block18:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ShowQuestInfoDetail
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	and eax,esi
	push eax
	call CWndMan::SetFocus

 Block19:
	pop edi
	pop esi
	ret 0x10
}
}
// CUIQuestDelivery::OnChildNotify
__SUB_CLASS_THIS(0041EEC0, __thiscall, 72006,  CUIQuestDelivery, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x7D0
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
// CUIQuestDelivery::Draw
_SUB_EXCEPTION_HANDLER(420940)
__SUB_CLASS_THIS(00420940, __thiscall, 72004,  CUIQuestDelivery, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_420940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0xA0]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x18],edi
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esp+0x38],edx
	mov edx,dword ptr [eax+0x38]
	mov ecx,edx
	mov dword ptr [esp+0x98],edi
	mov dword ptr [esp+0x34],edx
	cmp dword ptr [esi+0xB0],ecx
	je Block2

 Block1:
	mov eax,ecx
	mov dword ptr [esi+0xB0],eax

 Block2:
	mov eax,dword ptr [esi+0xB8]
	cmp eax,edi
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	sub eax,edx
	cmp eax,4
	jge Block9

 Block6:
	mov dword ptr [esp+0x28],eax
	cmp eax,edi
	jne Block46

 Block7:
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ecx+0xDC]
	mov byte ptr [esp+0x98],1
	cmp dword ptr [eax+4],edi
	jne Block10

 Block8:
	push offset _S_UIUIWINDOW2IMGQU__46
	lea edx,[esp+0x1C]
	push edx
	jmp Block11

 Block9:
	mov dword ptr [esp+0x28],4
	jmp Block46

 Block10:
	push offset _S_UIUIWINDOW2IMGQU__45
	lea eax,[esp+0x1C]
	push eax

 Block11:
	call ZXString16::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,8
	lea ecx,[esp+0x60]
	push ecx
	call esi
	lea edx,[esp+0x60]
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
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x9C],2
	call esi
	lea ecx,[esp+0x50]
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
	mov ebp,dword ptr [esp+0x18]
	push edi
	push edi
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	mov ebx,3
	push ebp
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xAC],4
	cmp dword ptr [_D_G_RM],edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x94]
	push ecx
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov esi,8
	mov byte ptr [esp+0x98],7
	cmp word ptr [esp+0x80],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x50],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x98],9
	cmp word ptr [esp+0x60],si
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov word ptr [esp+0x70],bx
	mov dword ptr [esp+0x78],0xFF
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],0xA
	cmp esi,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],edi
	call ecx
	cmp eax,edi
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x70]
	push edx
	mov eax,0x4D
	sub eax,edi
	mov edx,0xCA
	sub edx,dword ptr [esp+0x20]
	shr eax,1
	push esi
	sub eax,0xFFFFFF80
	shr edx,1
	push eax
	dec edx
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],9
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x9C],1
	call eax
	mov byte ptr [esp+0x98],0
	test ebp,ebp
	je Block46

 Block45:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block46:
	cmp dword ptr [esp+0x28],0
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0
	jle Block91

 Block47:
	mov ecx,dword ptr [esp+0x34]
	mov ebp,dword ptr [esp+0x30]
	lea edx,[ecx*8]
	mov dword ptr [esp+0x18],0x84
	mov dword ptr [esp+0x24],edx

 Block48:
	mov eax,dword ptr [ebp+0xB8]
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+eax+4]
	movzx esi,word ptr [eax]
	mov ecx,dword ptr [esp+0x38]
	push esi
	lea edx,[esp+0x20]
	push edx
	call CQuestMan::GetQuestName
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x34]
	add eax,ecx
	xor edx,edx
	cmp dword ptr [ebp+0xA4],eax
	mov eax,dword ptr [ebp+0xDC]
	sete dl
	cmp dword ptr [eax+4],0
	mov byte ptr [esp+0x98],0xB
	mov edi,edx
	jne Block51

 Block49:
	push esi
	mov ecx,ebp
	call CUIQuestDelivery::IsWorthlessQuest
	test eax,eax
	je Block51

 Block50:
	mov eax,1
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	test edi,edi
	je Block57

 Block53:
	test ebx,ebx
	je Block16

 Block54:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x8C]
	push 0xFF9C9A9C
	push 0x10
	push 0xB8
	add ecx,0xFFFFFFFE
	push ecx
	push 0x1D
	push ebx
	call edx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block56:
	lea eax,[esp+0x40]
	push 0x16
	push eax
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],1
	mov byte ptr [esp+0x98],0xC
	jmp Block60

 Block57:
	test eax,eax
	je Block59

 Block58:
	lea ecx,[esp+0x3C]
	push 0x44
	push ecx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],2
	mov dword ptr [esp+0x98],0xD
	jmp Block60

 Block59:
	lea edx,[esp+0x30]
	push 0x30
	push edx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],4

 Block60:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x48],esi
	test esi,esi
	je Block62

 Block61:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block62:
	test byte ptr [esp+0x14],4
	mov dword ptr [esp+0x98],0xE
	je Block65

 Block63:
	mov eax,dword ptr [esp+0x30]
	and dword ptr [esp+0x14],0xFFFFFFFB
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block65:
	test byte ptr [esp+0x14],2
	mov byte ptr [esp+0x98],0xF
	je Block68

 Block66:
	mov eax,dword ptr [esp+0x3C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	test byte ptr [esp+0x14],1
	mov byte ptr [esp+0x98],0x10
	je Block71

 Block69:
	mov eax,dword ptr [esp+0x40]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	lea eax,[esp+0x44]
	push 0x23
	push eax
	call get_basic_font
	add esp,8
	push 0xBC
	push ecx
	mov eax,esp
	mov byte ptr [esp+0xA0],0x11
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block73

 Block72:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block73:
	lea eax,[esp+0x24]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x60]
	push ecx
	call edi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block12

 Block74:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0x9C],0x12
	call edi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block12

 Block75:
	lea edx,[esp+0x60]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x74]
	push eax
	push esi
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xAC],0x13
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xA8],0x14
	test ebx,ebx
	je Block16

 Block76:
	mov eax,dword ptr [esp+0x28]
	push eax
	push 0x1F
	mov ecx,ebx
	mov byte ptr [esp+0xB0],0x13
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x98],0x12
	cmp word ptr [esp+0x70],di
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [esp+0x98],0x11
	cmp word ptr [esp+0x60],di
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x98],0x10
	test eax,eax
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov byte ptr [esp+0x98],0xB
	test esi,esi
	je Block88

 Block87:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block88:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esp+0x20]
	add dword ptr [esp+0x24],edi
	add dword ptr [esp+0x18],0x11
	inc eax
	cmp eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],eax
	jl Block48

 Block91:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test ebx,ebx
	je Block93

 Block92:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block93:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4
}
}
// CUIQuestDelivery::IsKindOf
__SUB_CLASS_THIS(0041FA90, __thiscall, 72015,  CUIQuestDelivery, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIQuestDelivery::ms_RTTI_CUIQuestDelivery
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
// CUIQuestDelivery::GetQuestIdxFromMousePos
__SUB_CLASS_THIS(0041F0A0, __thiscall, 72008,  CUIQuestDelivery, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	cmp edi,0x28
	mov esi,ecx
	jl Block7

 Block1:
	mov eax,dword ptr [esi+0xB8]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	mov ecx,dword ptr [esi+0xAC]
	mov ecx,dword ptr [ecx+0x38]
	sub eax,ecx
	mov edx,eax
	shl edx,4
	lea eax,[edx+eax+0x80]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x1C]
	push edi
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x14],0xE
	mov dword ptr [esp+0x18],0x80
	mov dword ptr [esp+0x1C],0xD8
	call PtInRect
	test eax,eax
	je Block7

 Block4:
	lea ecx,[edi-0x80]
	mov eax,0x78787879
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esi+0xAC]
	add eax,dword ptr [edx+0x38]
	js Block7

 Block5:
	mov esi,dword ptr [esi+0xB8]
	test esi,esi
	je Block7

 Block6:
	cmp eax,dword ptr [esi-4]
	jb Block8

 Block7:
	or eax,0xFFFFFFFF

 Block8:
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIQuestDelivery::ResetInfo
__SUB_CLASS_THIS0(0041F2E0, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA4]
	test ecx,ecx
	jl Block4

 Block1:
	mov eax,dword ptr [esi+0xB8]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	cmp ecx,eax
	jb Block5

 Block4:
	mov dword ptr [esi+0xA4],0xFFFFFFFF

 Block5:
	mov ecx,esi
	call CUIQuestDelivery::SetScrollBar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUIQuestDelivery::IsWorthlessQuest
__SUB_CLASS_THIS(0041F670, __thiscall, 72011,  CUIQuestDelivery, int32_t, uint16_t) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,dword ptr [esp+0x10]
	test si,si
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	add esp,8
	ret 4

 Block2:
	cmp si,word ptr [ecx+0xBC]
	je Block1

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea eax,[esp+8]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+8]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push esi
	call CQuestMan::GetStartDemand
	mov esi,eax
	test esi,esi
	jne Block5

 Block4:
	pop edi
	pop esi
	add esp,8
	ret 4

 Block5:
	mov ecx,dword ptr [edi+0x35]
	push ecx
	add edi,0x33
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edx,dword ptr [esi+0x1C]
	add esp,8
	movzx eax,al
	add edx,0xA
	cmp eax,edx
	sbb edi,edi
	push offset _D_DB_DATE_20790101__12
	add esi,0x40
	push esi
	inc edi
	call CompareFileTime
	neg eax
	sbb eax,eax
	inc eax
	and eax,edi
	pop edi
	pop esi
	add esp,8
	ret 4
}
}
// CUIQuestDelivery::OnDestroy
__SUB_CLASS_THIS0(0041FA60, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	ret
}
}
// CUIQuestDelivery::SetScrollBar
__SUB_CLASS_THIS0(0041F150, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB8]
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [ecx+0xAC]
	mov eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret

 Block2:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [ecx+0xAC]
	add eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CUIQuestDelivery::~CUIQuestDelivery
_SUB_EXCEPTION_HANDLER(41FAC0)
__SUB_CLASS_THIS0(0041FAC0, __thiscall, 72002,  CUIQuestDelivery, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41FAC0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestDelivery::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestDelivery::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestDelivery::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x20],9
	call CUserLocal::SendRepeatEffectRemoveRequest
	xor ebx,ebx
	cmp word ptr [esi+0xBC],bx
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 6
	call CWvsContext::UI_Close

 Block2:
	lea ecx,[esi+0xE0]
	mov byte ptr [esp+0x20],8
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block6:
	mov dword ptr [esi+0xDC],ebx

 Block7:
	lea edi,[esi+0xCC]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x20],4
	call ZArray<ZRef<QuestDeliveryInfo>>::RemoveAll
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x20],bl
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
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
