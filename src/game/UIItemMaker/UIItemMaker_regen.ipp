#include "regen.hpp"
// UIItemMaker.ipp
#include "UIItemMaker.hpp"

// CUIItemMaker::GEM_SLOT::~GEM_SLOT
__SUB_CLASS_THIS0(003D0160, __thiscall, 69752,  CUIItemMaker::GEM_SLOT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x18]
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
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	mov dword ptr [esi+4],0

 Block9:
	pop esi
	ret
}
}
// CUIItemMaker::Update
__SUB_CLASS_THIS0(003D5D20, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	jl Block10

 Block1:
	cmp eax,1
	jle Block6

 Block2:
	cmp eax,2
	jne Block10

 Block3:
	call get_update_time
	sub eax,dword ptr [esi+0x1794]
	cmp eax,0x13EC
	jl Block10

 Block4:
	mov ecx,esi
	mov dword ptr [esi+0xB08],3
	call CUIItemMaker::RequestItemMake
	test eax,eax
	jne Block10

 Block5:
	jmp Block9

 Block6:
	mov ecx,esi
	call CUIItemMaker::IsAbleToMake
	test eax,eax
	mov eax,dword ptr [esi+0x17B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	je Block8

 Block7:
	push 1
	call edx
	mov ecx,esi
	mov dword ptr [esi+0xB08],1
	call CUIItemMaker::UpdateItemCount
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret

 Block8:
	push 0
	call edx

 Block9:
	mov dword ptr [esi+0xB08],0

 Block10:
	mov ecx,esi
	call CUIItemMaker::UpdateItemCount
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUIItemMaker::~CUIItemMaker
_SUB_EXCEPTION_HANDLER(3D2130)
__SUB_CLASS_THIS0(003D2130, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2130
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemMaker::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemMaker::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemMaker::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x17D8]
	mov dword ptr [esp+0x20],0x12
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0x17D0]
	xor ebp,ebp
	mov byte ptr [esp+0x20],0x11
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x17CC]
	mov byte ptr [esp+0x20],0x10
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x17C8]
	mov byte ptr [esp+0x20],0xF
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x17C4]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x17C0]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x17BC]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea edi,[esi+0x17B4]
	mov byte ptr [esp+0x20],0xB
	cmp dword ptr [edi+4],ebp
	je Block14

 Block13:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block14:
	lea edi,[esi+0x17AC]
	mov byte ptr [esp+0x20],0xA
	cmp dword ptr [edi+4],ebp
	je Block16

 Block15:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block16:
	lea edi,[esi+0x17A4]
	mov byte ptr [esp+0x20],9
	cmp dword ptr [edi+4],ebp
	je Block18

 Block17:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block18:
	lea edi,[esi+0x179C]
	mov byte ptr [esp+0x20],8
	cmp dword ptr [edi+4],ebp
	je Block20

 Block19:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block20:
	lea ecx,[esi+0xD1C]
	mov byte ptr [esp+0x20],7
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xCF0]
	mov byte ptr [esp+0x20],6
	call CUIItemMaker::CATALYST_SLOT::~CATALYST_SLOT
	push offset CUIItemMaker::GEM_SLOT::~GEM_SLOT
	push 4
	push 0x20
	lea eax,[esi+0xC68]
	push eax
	mov byte ptr [esp+0x30],5
	call __eh_vector_dtor_iterator
	push offset CUIItemMaker::RECIPE_SLOT::~RECIPE_SLOT
	push 6
	push 0x2C
	lea ecx,[esi+0xB54]
	push ecx
	mov byte ptr [esp+0x30],4
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0xB40]
	mov byte ptr [esp+0x20],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xB2C]
	mov byte ptr [esp+0x20],2
	cmp eax,ebp
	je Block25

 Block21:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block24

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block24:
	mov dword ptr [esi+0xB2C],ebp

 Block25:
	lea ecx,[esi+0xB0C]
	mov byte ptr [esp+0x20],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	call ZMap<long, ZList<long>, long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIItemMaker>::ms_pInstance],ebp
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIItemMaker::OnMouseMove
__SUB_CLASS_THIS(003D37F0, __thiscall, 69705,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esp],eax
	lea eax,[esp]
	push eax
	add ecx,0xFFFFFFFC
	mov dword ptr [esp+8],edx
	call CUIItemMaker::SetToolTip
	xor eax,eax
	add esp,8
	ret 8
}
}
// CUIItemMaker::SetRecipe_MonsterCrystal
_SUB_EXCEPTION_HANDLER(3D2690)
__SUB_CLASS_THIS0(003D2690, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	mov ebx,1
	push eax
	mov dword ptr [esi+0xC5C],3
	mov dword ptr [esi+0xC60],ebx
	call edi
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],0
	call edi
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__2
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x60],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB70]
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
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x34],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x34]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block17:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block21:
	mov dword ptr [esi+0xB78],0
	mov dword ptr [esi+0xB74],0x64
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret
}
}
// CUIItemMaker::GetItemCategoryName
_SUB_EXCEPTION_HANDLER(3D24E0)
__SUB_CLASS_THIS(003D24E0, __thiscall, 69727,  CUIItemMaker, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D24E0
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
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [esp+0x2C]
	lea eax,[esp+0x2C]
	push esi
	mov ebx,1
	push eax
	mov dword ptr [esp+0x28],ebx
	call get_weapon_category_name
	add esp,8
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_assign
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test edi,edi
	je Block4

 Block3:
	mov esi,dword ptr [esp+0x28]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	jmp Block21

 Block4:
	lea edx,[esp+0x2C]
	push esi
	push edx
	call get_item_category_name
	add esp,8
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x24],3
	call ZXString<char>::op_assign
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],bl
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	jmp Block21

 Block8:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	sub eax,0x1A9
	je Block18

 Block9:
	sub eax,ebx
	je Block17

 Block10:
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	imul eax,0x64
	sub eax,0xC8
	je Block16

 Block11:
	sub eax,0x64
	je Block15

 Block12:
	sub eax,0x64
	mov esi,dword ptr [esp+0x28]
	je Block14

 Block13:
	push 0xFFFFFFFF
	push offset _S_
	mov ecx,esi
	call ZXString<char>::CreateFromCharStr
	jmp Block21

 Block14:
	push 0x1A38
	jmp Block20

 Block15:
	push 0xB
	jmp Block19

 Block16:
	push 0x1A87
	jmp Block19

 Block17:
	push 0x268
	jmp Block19

 Block18:
	push 0x267

 Block19:
	mov esi,dword ptr [esp+0x2C]

 Block20:
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0

 Block21:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],0
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIItemMaker::SetComboBox_Item
_SUB_EXCEPTION_HANDLER(3D5AF0)
__SUB_CLASS_THIS0(003D5AF0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D5AF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0x17A8]
	call CCtrlComboBox::RemoveAllItems
	mov ecx,esi
	call CUIItemMaker::ClearItemSlot
	mov ecx,dword ptr [esi+0x17A0]
	mov edi,dword ptr [ecx+0x68]
	push edi
	call CCtrlComboBox::GetItemParam
	xor ebp,ebp
	mov dword ptr [esp+0x1C],eax
	cmp edi,ebp
	je Block18

 Block1:
	lea eax,[esp+0x18]
	push 0x1A48
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x17A8]
	push ebp
	push eax
	mov dword ptr [esp+0x44],ebp
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	cmp edi,ebp
	jle Block9

 Block4:
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x30],ebp
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x20]
	mov ebx,1
	push edx
	lea ecx,[esi+0xB0C]
	mov dword ptr [esp+0x44],ebx
	call ZMap<long, ZList<long>, long>::GetAt
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block8

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<long>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x17A8]
	push edi
	push edx
	mov byte ptr [esp+0x44],2
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [esp+0x18],ebp
	jne Block5

 Block8:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	or ebx,0xFFFFFFFF

 Block9:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x3E6
	jne Block12

 Block10:
	lea eax,[esp+0x1C]
	push 0x268
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x17A8]
	push 0x3E6
	push eax
	mov dword ptr [esp+0x44],3
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebp
	je Block17

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block17

 Block12:
	cmp eax,0x1AA
	jne Block15

 Block13:
	lea ecx,[esp+0x14]
	push 0x268
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x17A8]
	push 0x1AA
	push eax
	mov dword ptr [esp+0x44],4
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebp
	je Block17

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block17

 Block15:
	cmp eax,0x3E7
	jne Block17

 Block16:
	mov ecx,dword ptr [esi+0x17A8]
	push eax
	push offset _S___32
	call CCtrlComboBox::AddItem

 Block17:
	mov edx,dword ptr [esi+0x17A8]
	mov dword ptr [edx+0x68],ebp

 Block18:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CUIItemMaker::GEM_SLOT::GEM_SLOT
__SUB_CLASS_THIS0(003D0230, __thiscall, 69757,  CUIItemMaker::GEM_SLOT, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	ret
}
}
// CUIItemMaker::RemoveCatalyst
__SUB_CLASS_THIS0(003D0770, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB08]
	test eax,eax
	je Block3

 Block1:
	cmp eax,1
	je Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	cmp dword ptr [ecx+0xD10],0
	je Block2

 Block4:
	cmp dword ptr [ecx+0xC5C],2
	mov dword ptr [ecx+0xD10],0
	jne Block6

 Block5:
	push 0
	add ecx,0xCF0
	call ZRef<GW_ItemSlotBase>::op_assign_zero

 Block6:
	mov eax,1
	ret
}
}
// CUIItemMaker::OnMouseEnter
__SUB_CLASS_THIS(003D20B0, __thiscall, 69703,    IUIMsgHandler, void, int32_t) {
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
	lea ecx,[esi+0xD18]
	call CUIToolTip::ClearToolTip

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CUIItemMaker::RemoveItem_byMouseClick
__SUB_CLASS_THIS(003D5130, __thiscall, 69724,  CUIItemMaker, int32_t, tagPOINT&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0xC60],edi
	jle Block4

 Block1:
	lea ebx,[esi+0xB5C]
	lea ebx,[ebx]

 Block2:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	push ebx
	call PtInRect
	test eax,eax
	jne Block10

 Block3:
	inc edi
	add ebx,0x2C
	cmp edi,dword ptr [esi+0xC60]
	jl Block2

 Block4:
	xor edi,edi
	cmp dword ptr [esi+0xCE8],edi
	jle Block8

 Block5:
	lea ebx,[esi+0xC70]
	nop

 Block6:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	push edx
	push eax
	push ebx
	call PtInRect
	test eax,eax
	jne Block11

 Block7:
	inc edi
	add ebx,0x20
	cmp edi,dword ptr [esi+0xCE8]
	jl Block6

 Block8:
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	lea eax,[esi+0xCF8]
	push eax
	call PtInRect
	test eax,eax
	je Block12

 Block9:
	mov ecx,esi
	call CUIItemMaker::RemoveCatalyst
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4

 Block10:
	push edi
	mov ecx,esi
	call CUIItemMaker::RemoveRecipe
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4

 Block11:
	push edi
	mov ecx,esi
	call CUIItemMaker::RemoveGem
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4

 Block12:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 4
}
}
// CUIItemMaker::PutItem
__SUB_CLASS_THIS(003D56A0, __thiscall, 69713,  CUIItemMaker, int32_t, GW_ItemSlotBase*, long, long, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov esi,ecx
	test ebp,ebp
	je Block5

 Block1:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block3

 Block2:
	cmp eax,1
	jne Block5

 Block3:
	cmp dword ptr [esi+0xB24],0
	mov edi,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x24]
	jne Block6

 Block4:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x2F1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block5:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x14

 Block6:
	push ebx
	push edi
	lea ecx,[esi+0x1764]
	push ecx
	call PtInRect
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	push edx
	push eax
	push ebp
	mov ecx,esi
	call CUIItemMaker::PutRecipe
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x14

 Block8:
	push ebx
	push edi
	lea ecx,[esi+0x1774]
	push ecx
	call PtInRect
	test eax,eax
	je Block10

 Block9:
	push ebp
	mov ecx,esi
	call CUIItemMaker::PutCatalyst
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x14

 Block10:
	push ebx
	push edi
	lea edx,[esi+0x1784]
	push edx
	call PtInRect
	test eax,eax
	je Block5

 Block11:
	push ebp
	mov ecx,esi
	call CUIItemMaker::PutGem
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x14
}
}
// CUIItemMaker::RequestItemMake
_SUB_EXCEPTION_HANDLER(3D58D0)
__SUB_CLASS_THIS0(003D58D0, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D58D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xB08],3
	jne Block7

 Block1:
	cmp dword ptr [esi+0xC5C],2
	jne Block3

 Block2:
	call CUIItemMaker::IsExistMakableItem
	test eax,eax
	je Block7

 Block3:
	mov ecx,esi
	call CUIItemMaker::IsExistEmptySlot
	test eax,eax
	je Block7

 Block4:
	mov ecx,esi
	call CUIItemMaker::IsEnoughMeso
	test eax,eax
	je Block7

 Block5:
	mov ecx,esi
	call CUIItemMaker::IsAbleToMake
	test eax,eax
	jne Block8

 Block6:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x301
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block7:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret

 Block8:
	cmp dword ptr [esi+0xC5C],3
	jne Block10

 Block9:
	cmp dword ptr [esi+0xB58],0
	je Block7

 Block10:
	push 0x7D
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xC5C]
	xor edi,edi
	lea ecx,[eax-1]
	mov dword ptr [esp+0x2C],edi
	cmp ecx,3
	ja Block21

 Block11:
	cmp ECX, 0
je Block12
cmp ECX, 1
je Block12
cmp ECX, 2
je Block18
cmp ECX, 3
je Block19


 Block12:
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xB24]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	movzx edx,byte ptr [esi+0xD10]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xCEC]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	cmp dword ptr [esi+0xCE8],edi
	jle Block21

 Block13:
	lea ebx,[esi+0xC6C]

 Block14:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block16

 Block15:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4

 Block16:
	inc edi
	add ebx,0x20
	cmp edi,dword ptr [esi+0xCE8]
	jl Block14

 Block17:
	jmp Block21

 Block18:
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xB58]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	jmp Block20

 Block19:
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xB58]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xD14]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xD18]
	push edx

 Block20:
	lea ecx,[esp+0x18]
	call COutPacket::Encode4

 Block21:
	mov eax,dword ptr [esi+0x17D4]
	test eax,eax
	je Block23

 Block22:
	push eax
	call stop_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0x17D4],0

 Block23:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esi+0xB08],3
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret
}
}
// CUIItemMaker::SetItemSlot
_SUB_EXCEPTION_HANDLER(3D4190)
__SUB_CLASS_THIS0(003D4190, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D4190
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
	mov esi,ecx
	call CUIItemMaker::ClearItemSlot
	mov ecx,dword ptr [esi+0x17A8]
	mov edi,dword ptr [ecx+0x68]
	push edi
	call CCtrlComboBox::GetItemParam
	mov dword ptr [esi+0xB24],eax
	test edi,edi
	jle Block74

 Block1:
	mov ecx,eax
	sub ecx,0x1AA
	je Block52

 Block2:
	sub ecx,0x23C
	je Block30

 Block3:
	sub ecx,1
	je Block8

 Block4:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 0
	push eax
	lea eax,[esp+0x24]
	push eax
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[esi+0x17BC]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB24]
	push eax
	lea ecx,[esp+0xB0]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	push eax
	lea ecx,[esi+0xB28]
	mov dword ptr [esp+0xC0],0xC
	call ZRef<ITEM_MAKE_INFO>::op_assign_copy
	lea ecx,[esp+0xAC]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	mov eax,dword ptr [esi+0xB2C]
	test eax,eax
	je Block74

 Block7:
	mov edx,dword ptr [eax+0x18]
	mov ecx,esi
	mov dword ptr [esi+0xCE8],edx
	call CUIItemMaker::SetRecipe_Normal
	mov ecx,esi
	call CUIItemMaker::SetCatalyst_Normal
	jmp Block74

 Block8:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call edi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea edx,[esp+0x3C]
	mov ebp,4
	push edx
	mov dword ptr [esp+0xC0],ebp
	call edi
	lea eax,[esp+0x3C]
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
	push 0
	push 0
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOW2IMGMA__3
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],6
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0xA0]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x17BC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov edi,8
	mov byte ptr [esp+0xBC],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x8C],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x8C]
	push edx
	call ebx

 Block21:
	mov byte ptr [esp+0xBC],4
	cmp word ptr [esp+0x3C],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block25:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x6C],di
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x6C]
	push eax
	call ebx

 Block29:
	mov ecx,esi
	mov dword ptr [esi+0xCE8],ebp
	call CUIItemMaker::SetRecipe_Hidden
	mov ecx,esi
	call CUIItemMaker::SetCatalyst_Hidden
	jmp Block74

 Block30:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea eax,[esp+0x1C]
	mov ebp,8
	push eax
	mov dword ptr [esp+0xC0],ebp
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	push 0
	push 0
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGMA__3
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0xA
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x17BC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block39

 Block37:
	cmp eax,0x80004002
	je Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x9C],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x9C]
	push eax
	call edi

 Block43:
	mov byte ptr [esp+0xBC],8
	cmp word ptr [esp+0x1C],bp
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block47:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x5C],bp
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block51:
	mov ecx,esi
	mov dword ptr [esi+0xCE8],0
	call CUIItemMaker::SetRecipe_EquipDisassemble
	jmp Block74

 Block52:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0xC0],0
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push 0
	push 0
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,1
	push offset _S_UIUIWINDOW2IMGMA__3
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],2
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x90]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x17BC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xBC],bl
	mov ebx,8
	cmp word ptr [esp+0x7C],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x7C]
	push ecx
	call edi

 Block65:
	mov byte ptr [esp+0xBC],0
	cmp word ptr [esp+0x2C],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block69:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp word ptr [esp+0x4C],bx
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block73:
	mov ecx,esi
	mov dword ptr [esi+0xCE8],0
	call CUIItemMaker::SetRecipe_MonsterCrystal

 Block74:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret
}
}
// CUIItemMaker::IsPossibleToDisassemble
_SUB_EXCEPTION_HANDLER(3D3C70)
__SUB_CLASS_THIS(003D3C70, __thiscall, 69716,  CUIItemMaker, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D3C70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	int 3// TODO: 	mov ebp,offset ZList<long>::`vftable'
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	push ebx
	mov byte ptr [esp+0x64],1
	call CItemMakerInfo::GetMakableItemList
	xor edi,edi
	lea ebx,[ebx]

 Block1:
	cmp edi,ebx
	fld1
	fld qword ptr [__real_4000000000000000]
	mov eax,edi
	jge Block3

 Block2:
	neg eax

 Block3:
	fld st(1)

 Block4:
	test al,1
	je Block6

 Block5:
	fmul st,st(1)

 Block6:
	shr eax,1
	je Block8

 Block7:
	fld st(1)
	fmulp st(2),st
	jmp Block4

 Block8:
	cmp edi,ebx
	fstp st(1)
	jge Block10

 Block9:
	fdivp st(1),st(0)
	jmp Block11

 Block10:
	fstp st(1)

 Block11:
	call __ftol2_sse
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x50],ebx
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	push eax
	mov byte ptr [esp+0x64],2
	call CItemMakerInfo::GetMakableItemList
	cmp dword ptr [esp+0x48],ebx
	je Block22

 Block12:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block15

 Block13:
	nop

 Block14:
	lea edx,[esp+0x14]
	push edx
	call ZList<long>::GetPrev
	add esp,4
	lea ecx,[esp+0x18]
	mov esi,eax
	call ZList<long>::AddHead_
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	cmp dword ptr [esp+0x14],ebx
	jne Block14

 Block15:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x5C],1
	mov dword ptr [esp+0x40],ebp
	call ZList<long>::RemoveAll
	inc edi
	lea edx,[edi+1]
	cmp edx,5
	jle Block1

 Block16:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block19

 Block17:
	lea ecx,[ecx]

 Block18:
	lea eax,[esp+0x14]
	push eax
	call ZList<long>::GetPrev
	add esp,4
	lea ecx,[esp+0x18]
	mov esi,eax
	call ZList<long>::AddHead_
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	cmp dword ptr [esp+0x14],ebx
	jne Block18

 Block19:
	cmp dword ptr [esp+0x20],ebx
	je Block23

 Block20:
	push ebx
	lea edx,[esp+0x68]
	push edx
	lea ecx,[esp+0x20]
	call ZList<long>::Find
	xor ecx,ecx
	cmp eax,ebx
	setne cl
	mov byte ptr [esp+0x5C],bl
	mov dword ptr [esp+0x2C],ebp
	mov esi,ecx
	lea ecx,[esp+0x2C]
	call ZList<long>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	mov dword ptr [esp+0x18],ebp
	call ZList<long>::RemoveAll
	mov eax,esi

 Block21:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4

 Block22:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x5C],1
	mov dword ptr [esp+0x40],ebp
	call ZList<long>::RemoveAll

 Block23:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x5C],bl
	mov dword ptr [esp+0x2C],ebp
	call ZList<long>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	mov dword ptr [esp+0x18],ebp
	call ZList<long>::RemoveAll
	xor eax,eax
	jmp Block21
}
}
// CUIItemMaker::DrawRecipe
_SUB_EXCEPTION_HANDLER(3D2DA0)
__SUB_CLASS_THIS(003D2DA0, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2DA0
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
	mov dword ptr [esp+0x18],ecx
	xor esi,esi
	cmp dword ptr [ecx+0xC60],esi
	mov dword ptr [esp+0x94],esi
	mov dword ptr [esp+0x1C],esi
	jle Block74

 Block1:
	add ecx,0xB6C
	mov dword ptr [esp+0x14],ecx

 Block2:
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [ebx]
	xor ebp,ebp
	cmp edi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block34

 Block3:
	cmp dword ptr [ebx-0x14],ebp
	je Block34

 Block4:
	cmp edi,ebp
	je Block81

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [ebx]
	mov eax,0x25
	sub eax,dword ptr [esp+0x20]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x28],eax
	cmp edi,ebp
	je Block81

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,0x25
	sub eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],0xFF
	cdq
	sub eax,edx
	mov ebp,eax
	mov eax,3
	sar ebp,1
	mov word ptr [esp+0x2C],ax
	cmp dword ptr [ebx+0x10],0
	mov byte ptr [esp+0x94],1
	mov eax,ebx
	jne Block12

 Block11:
	lea eax,[ebx+4]

 Block12:
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esp+0x9C]
	test ecx,ecx
	je Block81

 Block13:
	xor edx,edx
	cmp esi,3
	setl dl
	mov ebx,dword ptr [esp+0x2C]
	mov eax,0x55555556
	sub esp,0x10
	mov dword ptr [esp+0x30],ecx
	dec edx
	and edx,0x2A
	mov edi,edx
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [ecx]
	lea eax,[eax+eax*2]
	sub esi,eax
	mov eax,esp
	imul esi,0x59
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	lea eax,[edi+ebp+0x6D]
	push eax
	mov eax,dword ptr [esp+0x40]
	lea eax,[esi+eax+0x12]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block15

 Block14:
	mov edx,dword ptr [esp+0x20]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block15:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x94],0
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov dword ptr [esp+0x20],0
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [ebp+0xC]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push offset _S_DD__3
	push ecx
	mov byte ptr [esp+0xA4],2
	call ZXString<char>::Format
	mov ebx,dword ptr [esp+0x28]
	add esp,0x10
	cmp dword ptr [ebx+0xC5C],2
	jne Block21

 Block20:
	mov edx,dword ptr [ebp+0xC]
	push edx
	lea eax,[esp+0x24]
	push offset _S_D__9
	push eax
	call ZXString<char>::Format
	add esp,0xC

 Block21:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block22:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],3
	call ebp
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block23:
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [ebx+0x17CC]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xA8],4
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [ebx+0x17CC]
	mov byte ptr [esp+0xA4],5
	test ebp,ebp
	je Block81

 Block24:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+0x34]
	push ecx
	push ebp
	mov dword ptr [esp+0x3C],0
	call edx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push ebp
	push eax
	call _com_issue_errorex

 Block26:
	mov ecx,dword ptr [esp+0xAC]
	test ecx,ecx
	je Block81

 Block27:
	sub edi,dword ptr [esp+0x34]
	add esi,0x3A
	add edi,0x92
	push edi
	push esi
	mov byte ptr [esp+0xAC],4
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x94],3
	cmp word ptr [esp+0x4C],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x94],2
	cmp word ptr [esp+0x5C],si
	jne Block33

 Block32:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	jmp Block66

 Block33:
	lea eax,[esp+0x5C]
	jmp Block69

 Block34:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0xC5C]
	cmp eax,2
	je Block38

 Block35:
	cmp eax,3
	je Block38

 Block36:
	cmp eax,4
	jne Block73

 Block37:
	mov ebx,dword ptr [esp+0x14]

 Block38:
	mov edi,dword ptr [ebx+4]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block73

 Block39:
	xor ebx,ebx
	cmp edi,ebx
	je Block81

 Block40:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],ebx
	call ecx
	cmp eax,ebx
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,0x25
	sub eax,dword ptr [esp+0x24]
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x14]
	mov edi,dword ptr [edx+4]
	sar eax,1
	mov dword ptr [esp+0x28],eax
	cmp edi,ebx
	je Block81

 Block43:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x24]
	push ecx
	push edi
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov eax,0x25
	sub eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x44],0xFF
	cdq
	sub eax,edx
	mov edi,eax
	mov eax,3
	sar edi,1
	mov word ptr [esp+0x3C],ax
	mov ecx,dword ptr [esp+0x9C]
	mov byte ptr [esp+0x94],6
	cmp ecx,ebx
	je Block81

 Block46:
	xor edx,edx
	cmp esi,eax
	setl dl
	mov ebx,dword ptr [esp+0x3C]
	mov eax,0x55555556
	sub esp,0x10
	mov dword ptr [esp+0x34],ecx
	dec edx
	and edx,0x2A
	mov ebp,edx
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	mov edx,dword ptr [ecx]
	sub esi,eax
	mov eax,esp
	imul esi,0x59
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [ebx+4]
	push eax
	lea eax,[edi+ebp+0x6D]
	push eax
	mov eax,dword ptr [esp+0x40]
	lea eax,[esi+eax+0x12]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block48

 Block47:
	mov edx,dword ptr [esp+0x24]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],0
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [esp+0x20],0
	mov edx,dword ptr [ebx+8]
	mov eax,dword ptr [ebx+0xC]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push offset _S_DD__3
	push ecx
	mov byte ptr [esp+0xA4],7
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x28]
	add esp,0x10
	cmp dword ptr [edx+0xC5C],2
	jne Block54

 Block53:
	mov eax,dword ptr [ebx+0xC]
	push eax
	lea ecx,[esp+0x24]
	push offset _S_D__9
	push ecx
	call ZXString<char>::Format
	add esp,0xC

 Block54:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x7C]
	push edx
	call edi
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block55:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],8
	call edi
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block56:
	mov edi,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x7C]
	push eax
	mov eax,dword ptr [edi+0x17CC]
	lea ecx,[esp+0x70]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,9
	push edx
	mov byte ptr [esp+0xA8],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [edi+0x17CC]
	mov byte ptr [esp+0xA4],0xA
	test edi,edi
	je Block81

 Block57:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+0x34]
	push ecx
	push edi
	mov dword ptr [esp+0x3C],0
	call edx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block59:
	mov ecx,dword ptr [esp+0xAC]
	test ecx,ecx
	je Block81

 Block60:
	sub ebp,dword ptr [esp+0x34]
	add esi,0x3A
	add ebp,0x92
	push ebp
	push esi
	mov byte ptr [esp+0xAC],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x6C],si
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x94],7
	cmp word ptr [esp+0x7C],si
	jne Block68

 Block65:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx

 Block66:
	test eax,eax
	je Block70

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block68:
	lea eax,[esp+0x7C]

 Block69:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],0
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov esi,dword ptr [esp+0x1C]

 Block73:
	mov ecx,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0x2C
	inc esi
	cmp esi,dword ptr [ecx+0xC60]
	mov dword ptr [esp+0x1C],esi
	jl Block2

 Block74:
	mov esi,dword ptr [ecx+0xC60]
	cmp esi,6
	jge Block85

 Block75:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x44],edx
	mov ecx,dword ptr [esp+0x9C]
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [eax+0x17C0]
	mov byte ptr [esp+0x94],0xB
	test ecx,ecx
	je Block81

 Block76:
	mov ebp,dword ptr [esp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edx
	xor eax,eax
	cmp esi,3
	setl al
	push edi
	mov ebx,dword ptr [ecx]
	mov dword ptr [esp+0x3C],ecx
	dec eax
	and eax,0x2A
	add eax,0x6D
	push eax
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	mov eax,esi
	sub eax,edx
	imul eax,0x59
	add eax,0x12
	push eax
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block78

 Block77:
	mov edx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block78:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],0
	jne Block83

 Block79:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block84

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	inc esi
	cmp esi,6
	jl Block75

 Block85:
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block87:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4
}
}
// CUIItemMaker::IsEnoughMeso
__SUB_CLASS_THIS0(003D1D30, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0xC5C],3
	je Block20

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block6

 Block2:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov dword ptr [esp+0x14],0

 Block6:
	mov ecx,dword ptr [edi+0xB2C]
	test ecx,ecx
	je Block19

 Block7:
	mov eax,dword ptr [edi+0xC5C]
	mov esi,dword ptr [ecx+0x20]
	test eax,eax
	jle Block13

 Block8:
	cmp eax,2
	jle Block11

 Block9:
	cmp eax,4
	jne Block13

 Block10:
	mov ecx,edi
	call CUIItemMaker::GetTotalCostToDisassemble
	jmp Block12

 Block11:
	mov ecx,esi
	push ecx
	mov ecx,edi
	call CUIItemMaker::GetTotalCostToMake

 Block12:
	mov esi,eax

 Block13:
	mov edx,dword ptr [ebp+0xBD]
	push edx
	add ebp,0xB5
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,esi
	jge Block20

 Block14:
	mov edi,dword ptr [edi+0xC5C]
	cmp edi,1
	jne Block16

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A8B
	push eax
	jmp Block18

 Block16:
	cmp edi,2
	jne Block19

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x301
	push ecx

 Block18:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block19:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret

 Block20:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret
}
}
// CUIItemMaker::DrawGem
_SUB_EXCEPTION_HANDLER(3CF780)
__SUB_CLASS_THIS(003CF780, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CF780
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
	mov dword ptr [esp+0x24],ecx
	xor ebx,ebx
	cmp dword ptr [ecx+0xCE8],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x20],ebx
	jle Block19

 Block1:
	lea edi,[ecx+0xC80]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],edi

 Block2:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block18

 Block3:
	cmp dword ptr [edi-0x14],ebx
	je Block18

 Block4:
	cmp esi,ebx
	je Block21

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov esi,dword ptr [edi]
	mov eax,0x25
	sub eax,dword ptr [esp+0x1C]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x28],eax
	cmp esi,ebx
	je Block21

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,0x25
	sub eax,dword ptr [esp+0x1C]
	mov ecx,3
	cdq
	sub eax,edx
	mov esi,0xFF
	sar eax,1
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],esi
	mov edx,dword ptr [esp+0x4C]
	mov edi,dword ptr [edi]
	mov byte ptr [esp+0x44],1
	cmp edx,ebx
	je Block21

 Block11:
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,dword ptr [edx]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],ebp
	mov dword ptr [ecx+8],esi
	mov esi,dword ptr [esp+0x48]
	push edi
	add eax,0xF0
	push eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [ecx+0xC],esi
	mov ecx,dword ptr [esp+0x30]
	lea eax,[ecx+eax+0x5D]
	mov ecx,dword ptr [ebx+0x80]
	push eax
	push edx
	mov dword ptr [esp+0x3C],edx
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block13

 Block12:
	mov edx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block13:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edi,dword ptr [esp+0x14]

 Block18:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	add dword ptr [esp+0x18],0x31
	inc eax
	add edi,0x20
	cmp eax,dword ptr [ecx+0xCE8]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],edi
	jl Block2

 Block19:
	mov eax,dword ptr [ecx+0xCE8]
	cmp eax,4
	jge Block33

 Block20:
	imul eax,0x31
	add eax,0x5D
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	jmp Block24

 Block21:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esp+0x24]

 Block24:
	mov edx,dword ptr [ecx+0x17C0]
	cmp edx,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block32

 Block25:
	mov eax,3
	mov esi,0xFF
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],esi
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],2
	cmp ecx,ebx
	je Block21

 Block26:
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x48]
	push edx
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [esp+0x34]
	push 0xF0
	push esi
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	add esi,0x31
	cmp esi,0x121
	mov dword ptr [esp+0x20],esi
	jl Block23

 Block33:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CUIItemMaker::SetToolTip
_SUB_EXCEPTION_HANDLER(3D1A70)
__SUB_CLASS_THIS(003D1A70, __thiscall, 69726,  CUIItemMaker, void, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D1A70
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
	mov edi,ecx
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x2C]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	mov ebp,dword ptr [esp+0x3C]
	mov ecx,dword ptr [ebp]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x1C],edx
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [ebp+4]
	lea edx,[eax+ecx+0x14]
	lea ebx,[edi+0xD1C]
	mov ecx,ebx
	mov dword ptr [esp+0x20],edx
	mov dword ptr [esp+0x3C],ebx
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block4

 Block1:
	add esi,0xFFFFFFF0
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	lea eax,[esi+4]
	push eax
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
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	lea eax,[edi+0xB30]
	push eax
	call PtInRect
	test eax,eax
	je Block10

 Block5:
	cmp dword ptr [edi+0xB24],0
	je Block10

 Block6:
	cmp dword ptr [edi+0xC5C],1
	jne Block10

 Block7:
	mov ecx,dword ptr [edi+0xB24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,ebx
	call CUIToolTip::ShowItemToolTip

 Block9:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block31

 Block10:
	xor esi,esi
	lea ebx,[edi+0xB58]

 Block11:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	push edx
	push eax
	lea ecx,[ebx+4]
	push ecx
	call PtInRect
	test eax,eax
	je Block13

 Block12:
	cmp dword ptr [ebx],0
	jne Block21

 Block13:
	inc esi
	add ebx,0x2C
	cmp esi,6
	jl Block11

 Block14:
	xor esi,esi
	lea ebx,[edi+0xC6C]

 Block15:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	push edx
	push eax
	lea ecx,[ebx+4]
	push ecx
	call PtInRect
	test eax,eax
	je Block17

 Block16:
	cmp dword ptr [ebx],0
	jne Block23

 Block17:
	inc esi
	add ebx,0x20
	cmp esi,4
	jl Block15

 Block18:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	push edx
	push eax
	lea ecx,[edi+0xCF8]
	push ecx
	call PtInRect
	test eax,eax
	je Block24

 Block19:
	mov eax,dword ptr [edi+0xCF4]
	test eax,eax
	je Block24

 Block20:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x3C]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x34]
	push edx
	push eax
	call CUIToolTip::ShowItemToolTip
	jmp Block31

 Block21:
	add esi,0x42
	imul esi,0x2C
	mov edx,dword ptr [esi+edi]

 Block22:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	call CUIToolTip::ShowItemToolTip
	jmp Block31

 Block23:
	shl esi,5
	mov edx,dword ptr [esi+edi+0xC6C]
	jmp Block22

 Block24:
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	lea esi,[edi+0x1764]
	push esi
	call PtInRect
	test eax,eax
	je Block27

 Block25:
	cmp dword ptr [edi+0xC5C],3
	jne Block27

 Block26:
	push 1
	push 0xC8
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x308
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push ecx
	push edx
	jmp Block30

 Block27:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	push esi
	call PtInRect
	test eax,eax
	je Block31

 Block28:
	cmp dword ptr [edi+0xC5C],4
	jne Block31

 Block29:
	push 1
	push 0xC8
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x309
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push ecx

 Block30:
	mov ecx,dword ptr [esp+0x50]
	call CUIToolTip::SetToolTip_String_MultiLine

 Block31:
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
// CUIItemMaker::OnMouseButton
_SUB_EXCEPTION_HANDLER(3D5770)
__SUB_CLASS_THIS(003D5770, __thiscall, 69704,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D5770
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
	cmp dword ptr [esp+0x20],0x201
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0xC],ecx
	jne Block4

 Block1:
	lea edx,[esp+8]
	push edx
	lea ecx,[esi-4]
	call CUIItemMaker::RemoveItem_byMouseClick
	test eax,eax
	je Block4

 Block2:
	lea eax,[esp+0x28]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x2C]
	add esp,4
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 0x10
}
}
// CUIItemMaker::IsExistMakableItem
_SUB_EXCEPTION_HANDLER(3D2380)
__SUB_CLASS_THIS0(003D2380, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2380
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
	mov ebp,ecx
	cmp dword ptr [ebp+0xC5C],2
	jne Block10

 Block1:
	mov eax,dword ptr [ebp+0xB4C]
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<long>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	push esi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	push esi
	mov ecx,ebp
	mov dword ptr [esp+0x34],ebx
	call CUIItemMaker::IsMatched_WithCurrentSetting
	test eax,eax
	jne Block11

 Block3:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
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
	cmp esi,ebx
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov dword ptr [esp+0x1C],ebx

 Block8:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block9:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x301
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block10:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block11:
	push esi
	lea ecx,[esp+0x24]
	mov dword ptr [ebp+0xB24],esi
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	push eax
	lea ecx,[ebp+0xB28]
	mov byte ptr [esp+0x34],1
	call ZRef<ITEM_MAKE_INFO>::op_assign_copy
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x30],bl
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	mov eax,1
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
// CUIItemMaker::RECIPE_SLOT::Clear
__SUB_CLASS_THIS0(003D0090, __thiscall, 69739,  CUIItemMaker::RECIPE_SLOT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	xor edi,edi
	cmp eax,edi
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	cmp ecx,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+4],edi

 Block5:
	mov eax,dword ptr [esi+0x18]
	cmp eax,edi
	je Block7

 Block6:
	mov dword ptr [esi+0x18],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x1C]
	cmp eax,edi
	je Block9

 Block8:
	mov dword ptr [esi+0x1C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	pop edi
	pop esi
	ret
}
}
// CUIItemMaker::RemoveRecipe
_SUB_EXCEPTION_HANDLER(3D35B0)
__SUB_CLASS_THIS(003D35B0, __thiscall, 69716,  CUIItemMaker, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D35B0
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
	mov eax,dword ptr [ebp+0xB08]
	xor ebx,ebx
	cmp eax,ebx
	je Block3

 Block1:
	cmp eax,1
	je Block3

 Block2:
	xor eax,eax
	jmp Block36

 Block3:
	mov eax,dword ptr [ebp+0xC5C]
	cmp eax,2
	je Block6

 Block4:
	cmp eax,3
	je Block6

 Block5:
	cmp eax,4
	jne Block2

 Block6:
	mov eax,dword ptr [esp+0x54]
	cmp eax,dword ptr [ebp+0xC60]
	jge Block2

 Block7:
	lea ecx,[eax+0x42]
	imul ecx,0x2C
	cmp dword ptr [ecx+ebp],ebx
	je Block2

 Block8:
	imul eax,0x2C
	lea esi,[eax+ebp]
	mov eax,dword ptr [esi+0xB6C]
	cmp eax,ebx
	je Block10

 Block9:
	mov dword ptr [esi+0xB6C],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x50],ebx
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push ebx
	push ebx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__2
	mov byte ptr [esp+0x64],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x60],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB70]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x34],di
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x34]
	push eax
	call ebx

 Block23:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x14],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block27:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x24]
	push ecx
	call ebx

 Block31:
	push 0
	lea ecx,[esi+0xB54]
	call ZRef<GW_ItemSlotBase>::op_assign_zero
	mov dword ptr [esi+0xB78],0
	mov eax,dword ptr [ebp+0xC64]
	test eax,eax
	jle Block33

 Block32:
	dec eax
	mov dword ptr [ebp+0xC64],eax

 Block33:
	cmp dword ptr [ebp+0xC5C],4
	jne Block35

 Block34:
	mov ecx,ebp
	call CUIItemMaker::EraseDisassembleInfo

 Block35:
	mov eax,1

 Block36:
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
// CUIItemMaker::SetRecipe_Hidden
_SUB_EXCEPTION_HANDLER(3D2A30)
__SUB_CLASS_THIS0(003D2A30, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	xor ebx,ebx
	mov dword ptr [edi+0xC5C],2
	mov dword ptr [edi+0xC60],6
	mov dword ptr [esp+0x14],ebx
	lea ebp,[edi+0xB70]
	lea ecx,[ecx]

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block26

 Block2:
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block26

 Block3:
	push ebx
	push ebx
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__2
	mov byte ptr [esp+0x74],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x70],2
	cmp dword ptr [_D_G_RM],ebx
	je Block27

 Block4:
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x70],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],3
	call Ztl_variant_t::GetUnknown
	cmp eax,ebx
	je Block13

 Block5:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebp]
	cmp esi,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov edi,ecx
	cmp eax,ebx
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	cmp esi,ebx
	mov dword ptr [ebp],edi
	jge Block9

 Block8:
	cmp esi,0x80004002
	jne Block28

 Block9:
	mov edi,dword ptr [esp+0x1C]

 Block10:
	mov esi,8
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x44],si
	jne Block15

 Block11:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebx
	je Block16

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block13:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block10

 Block14:
	mov dword ptr [ebp],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block10

 Block15:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [ebp+8],ebx
	inc eax
	add ebp,0x2C
	cmp eax,dword ptr [edi+0xC60]
	mov dword ptr [esp+0x14],eax
	jl Block1

 Block25:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block26:
	push eax
	call _com_issue_error

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	push esi
	call _com_issue_error
}
}
// CUIItemMaker::GetTotalCostToMake
__SUB_CLASS_THIS(003D0820, __thiscall, 69728,  CUIItemMaker, long, long) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xD10]
	xor ebx,ebx
	cmp dword ptr [edi+0xCE8],ebx
	mov dword ptr [esp+0x10],ebx
	jle Block5

 Block1:
	lea ebp,[edi+0xC6C]

 Block2:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cdq
	mov ecx,0xA
	idiv ecx
	mov eax,dword ptr [esp+0x10]
	lea ecx,[eax+edx+1]
	mov dword ptr [esp+0x10],ecx

 Block4:
	inc ebx
	add ebp,0x20
	cmp ebx,dword ptr [edi+0xCE8]
	jl Block2

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	lea ebx,[eax-0x10]
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block9:
	mov dword ptr [esp+0x18],0

 Block10:
	mov eax,dword ptr [edi+0x3D]
	push eax
	lea ecx,[edi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block12

 Block11:
	cmp ecx,0x7D1
	jne Block13

 Block12:
	mov eax,0x7D1
	jmp Block14

 Block13:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	imul eax,0x3E8

 Block14:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	imul eax,0x2710
	push 0
	add eax,0x3EF
	push eax
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov eax,dword ptr [esp+0x10]
	neg esi
	sbb esi,esi
	lea edx,[eax+eax*2]
	and esi,5
	lea ecx,[esi+edx+1]
	mov esi,dword ptr [esp+0x20]
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul ecx,eax
	test ecx,ecx
	jg Block16

 Block15:
	xor ecx,ecx

 Block16:
	add ecx,esi
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add edx,eax
	imul edx,0x3E8
	mov eax,ecx
	sub eax,edx
	xor edx,edx
	test eax,eax
	setle dl
	pop edi
	pop esi
	pop ebp
	pop ebx
	dec edx
	and edx,eax
	mov eax,ecx
	sub eax,edx
	add esp,0xC
	ret 4
}
}
// CUIItemMaker::ConfirmMake
_SUB_EXCEPTION_HANDLER(3D3820)
__SUB_CLASS_THIS0(003D3820, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D3820
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
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [ecx+0xC5C]
	dec eax
	mov dword ptr [esp+0x38],ebx
	cmp eax,3
	ja Block13

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9


 Block2:
	mov eax,dword ptr [ecx+0xB24]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x1C]
	push 0x304
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x1C]
	jmp Block10

 Block6:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x1C]
	jmp Block10

 Block7:
	lea eax,[esp+0x20]
	push 0x307
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block10

 Block8:
	lea ecx,[esp+0x24]
	push 0x305
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block10

 Block9:
	lea edx,[esp+0x28]
	push 0x306
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]

 Block10:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov edi,dword ptr [esp+0x14]

 Block13:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ebp],ebx
	cmp edi,ebx
	je Block17

 Block14:
	mov eax,edi
	lea edx,[eax+1]

 Block15:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block15

 Block16:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push ebx
	push esi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer

 Block17:
	call CUtilDlg::YesNo_0
	add esp,0x14
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,6
	je Block21

 Block18:
	cmp edi,ebx
	je Block20

 Block19:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block21:
	cmp edi,ebx
	je Block23

 Block22:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,1
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUIItemMaker::Draw
_SUB_EXCEPTION_HANDLER(3D4980)
__SUB_CLASS_THIS(003D4980, __thiscall, 69700,  CUIItemMaker, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D4980
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x20]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x20]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block2

 Block1:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block2:
	mov ecx,edi
	call CUIItemMaker::DrawTargetItem
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block4

 Block3:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block4:
	mov ecx,edi
	call CUIItemMaker::DrawRecipe
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block6:
	mov ecx,edi
	call CUIItemMaker::DrawGem
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block8:
	mov ecx,edi
	call CUIItemMaker::DrawCatalyst
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block10

 Block9:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block10:
	mov ecx,edi
	call CUIItemMaker::DrawMeso
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block12:
	mov ecx,edi
	call CUIItemMaker::DrawGaugeBar
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block14:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIItemMaker::Notice_NoEmptySlot
_SUB_EXCEPTION_HANDLER(3D3A40)
__SUB_CLASS_THIS(003D3A40, __thiscall, 69720,  CUIItemMaker, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D3A40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	cmp dword ptr [ecx+0xC5C],2
	jne Block2

 Block1:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x301
	push eax
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
	pop ebx
	add esp,0x1C
	ret 4

 Block2:
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esp+0x30]
	dec eax
	mov dword ptr [esp+0x28],ebx
	cmp eax,3
	ja Block10

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7


 Block4:
	lea ecx,[esp+0x30]
	push 0xA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x30]
	jmp Block8

 Block5:
	lea edx,[esp+0x14]
	push 0x1A87
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],2
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x14]
	jmp Block8

 Block6:
	lea eax,[esp+0x18]
	push 0xB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x18]
	jmp Block8

 Block7:
	lea ecx,[esp+0x1C]
	push 0x1A38
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x1C]

 Block8:
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	push 1
	push offset _S___2
	lea ecx,[esp+0x18]
	call ZXString<char>::_Cat
	lea edx,[esp+0x30]
	push 0x2F2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x28],5
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax-4]
	jmp Block13

 Block12:
	xor ecx,ecx

 Block13:
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x10]
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [edi],ebx
	cmp ecx,ebx
	je Block19

 Block16:
	mov eax,ecx
	lea esi,[eax+1]

 Block17:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block17

 Block18:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block19:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIItemMaker::RECIPE_SLOT::~RECIPE_SLOT
__SUB_CLASS_THIS0(003D0100, __thiscall, 69739,  CUIItemMaker::RECIPE_SLOT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x18]
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
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	mov dword ptr [esi+4],0

 Block9:
	pop esi
	ret
}
}
// CUIItemMaker::CATALYST_SLOT::~CATALYST_SLOT
__SUB_CLASS_THIS0(003D01C0, __thiscall, 69765,  CUIItemMaker::CATALYST_SLOT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x18]
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
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	mov dword ptr [esi+4],0

 Block9:
	pop esi
	ret
}
}
// CUIItemMaker::DrawCatalyst
_SUB_EXCEPTION_HANDLER(3CFA60)
__SUB_CLASS_THIS(003CFA60, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CFA60
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
	xor ebp,ebp
	cmp dword ptr [esi+0xD08],ebp
	lea ebx,[esi+0xD08]
	sete al
	test al,al
	sete al
	mov dword ptr [esp+0x34],ebp
	lea ecx,[ebp+2]
	test al,al
	je Block19

 Block1:
	cmp dword ptr [esi+0xD0C],ebp
	lea eax,[esi+0xD0C]
	mov dword ptr [esp+0x18],eax
	sete al
	test al,al
	sete al
	test al,al
	je Block19

 Block2:
	cmp dword ptr [esi+0xCF4],ebp
	jne Block4

 Block3:
	cmp dword ptr [esi+0xC5C],ecx
	jne Block19

 Block4:
	mov edi,dword ptr [ebx]
	cmp edi,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,dword ptr [ebx]
	mov eax,0x25
	sub eax,dword ptr [esp+0x14]
	cdq
	sub eax,edx
	mov ebp,eax
	sar ebp,1
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,0x25
	sub eax,dword ptr [esp+0x14]
	mov ecx,3
	cdq
	sub eax,edx
	sar eax,1
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],0xFF
	cmp dword ptr [esi+0xD10],0
	mov byte ptr [esp+0x34],1
	jne Block14

 Block13:
	mov ebx,dword ptr [esp+0x18]

 Block14:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ebx]
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea esi,[esp+0x1C]
	push esi
	push edx
	add eax,0xF0
	push eax
	add ebp,0x12
	push ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block18

 Block17:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	jmp Block24

 Block18:
	lea eax,[esp+0x1C]
	push eax
	jmp Block27

 Block19:
	mov esi,dword ptr [esi+0x17C0]
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block28

 Block20:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0xFF
	mov byte ptr [esp+0x34],cl
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x1C]
	push eax
	push esi
	push 0xF0
	push 0x12
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block26

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp

 Block24:
	je Block28

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block26:
	lea edx,[esp+0x1C]
	push edx

 Block27:
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
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
// CUIItemMaker::PutRecipe
_SUB_EXCEPTION_HANDLER(3D4AA0)
__SUB_CLASS_THIS(003D4AA0, __thiscall, 69714,  CUIItemMaker, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D4AA0
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
	mov ebx,ecx
	mov dword ptr [esp+0x28],ebx
	mov esi,dword ptr [esp+0x4C]
	xor edi,edi
	cmp esi,edi
	je Block8

 Block1:
	mov eax,dword ptr [ebx+0xC5C]
	cmp eax,2
	je Block4

 Block2:
	cmp eax,3
	je Block4

 Block3:
	cmp eax,4
	jne Block8

 Block4:
	mov eax,dword ptr [ebx+0xC60]
	cmp dword ptr [ebx+0xC64],eax
	mov dword ptr [esp+0x14],edi
	jl Block10

 Block5:
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	push 0x2F5

 Block6:
	push eax

 Block7:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block8:
	xor eax,eax

 Block9:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0xC

 Block10:
	cmp eax,edi
	jle Block16

 Block11:
	lea ebp,[ebx+0xB58]

 Block12:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block15

 Block13:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x18],eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x18]
	cmp eax,ecx
	je Block19

 Block14:
	mov esi,dword ptr [esp+0x4C]

 Block15:
	inc edi
	add ebp,0x2C
	cmp edi,dword ptr [ebx+0xC60]
	jl Block12

 Block16:
	mov eax,dword ptr [ebx+0xC5C]
	cmp eax,3
	jne Block20

 Block17:
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x50],0
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	lea edx,[esp+0x50]
	push edx
	push eax
	call CItemMakerInfo::GetMonsterTrophyLevel
	cmp dword ptr [esp+0x50],0
	jne Block31

 Block18:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	push 0x2FD
	jmp Block6

 Block19:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push 0x2F4
	push ecx
	jmp Block7

 Block20:
	cmp eax,2
	jne Block36

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	lea ecx,[esp+0x18]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x44],0
	test eax,eax
	je Block29

 Block22:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block29

 Block23:
	lea esi,[eax+8]
	test esi,esi
	je Block29

 Block24:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block26

 Block25:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	push 0
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x303
	push eax
	mov dword ptr [esp+0x58],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push 0xA
	push 0
	push eax
	call CWvsContext::GetItemCount
	push eax
	push 1
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,1
	je Block30

 Block27:
	test esi,esi
	je Block8

 Block28:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block8

 Block29:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block26

 Block30:
	mov ecx,dword ptr [esi+0xF4]
	mov dword ptr [esp+0x14],ecx
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov esi,dword ptr [esp+0x4C]

 Block31:
	xor eax,eax
	cmp dword ptr [ebx+0xC64],eax
	jl Block8

 Block32:
	lea ecx,[ebx+0xB58]
	lea esp,[esp]

 Block33:
	cmp dword ptr [ecx],0
	je Block41

 Block34:
	inc eax
	add ecx,0x2C
	cmp eax,dword ptr [ebx+0xC64]
	jle Block33

 Block35:
	jmp Block8

 Block36:
	cmp eax,4
	jne Block31

 Block37:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call CUIItemMaker::IsPossibleToDisassemble
	test eax,eax
	je Block40

 Block38:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x54]
	mov ecx,edi
	mov dword ptr [ebx+0xD14],edx
	mov dword ptr [ebx+0xD18],eax
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	push eax
	lea ecx,[ebx+0xB28]
	mov dword ptr [esp+0x48],2
	call ZRef<ITEM_MAKE_INFO>::op_assign_copy
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	jmp Block31

 Block40:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x11DF
	push edx
	jmp Block7

 Block41:
	imul eax,0x2C
	lea ebp,[eax+ebx]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [ebp+0xB58]
	mov dword ptr [ebp+0xB58],esi
	test edi,edi
	je Block45

 Block42:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block43:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block44:
	mov esi,dword ptr [esp+0x4C]

 Block45:
	add esi,0xC
	mov ecx,esi
	call TSecType<long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+0xB6C]
	cmp edi,eax
	je Block50

 Block46:
	mov dword ptr [ebp+0xB6C],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	test edi,edi
	je Block50

 Block49:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block50:
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	cmp dword ptr [ebx+0xC5C],2
	jne Block54

 Block53:
	mov eax,dword ptr [esp+0x14]
	jmp Block55

 Block54:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount

 Block55:
	mov dword ptr [ebp+0xB78],eax
	mov eax,dword ptr [ebx+0xC64]
	cmp eax,6
	jge Block57

 Block56:
	inc eax
	mov dword ptr [ebx+0xC64],eax

 Block57:
	mov esi,3
	cmp dword ptr [ebx+0xC5C],esi
	jne Block87

 Block58:
	mov eax,dword ptr [ebp+0xB70]
	lea edi,[ebp+0xB70]
	test eax,eax
	je Block60

 Block59:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	lea eax,[esp+0x4C]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	mov dword ptr [esp+0x50],esi
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x48],4
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x64
	push 0x64
	call IWzCanvas::Create
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x44],4
	cmp word ptr [esp+0x18],bx
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block72:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bx
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block76:
	mov edx,3
	mov ecx,0x64
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],ecx
	mov esi,dword ptr [edi]
	mov ebp,dword ptr [ebp+0xB6C]
	mov dword ptr [esp+0x44],6
	test esi,esi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	push ebp
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block86:
	call make_gray_canvas
	mov ebx,dword ptr [esp+0x2C]
	add esp,4

 Block87:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	lea ecx,[esp+0x54]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x48],7
	call play_ui_sound
	mov eax,dword ptr [esp+0x58]
	add esp,4
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	mov eax,1
	jmp Block9
}
}
// CUIItemMaker::DrawTargetItem
_SUB_EXCEPTION_HANDLER(3CF610)
__SUB_CLASS_THIS(003CF610, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CF610
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	cmp dword ptr [ebp+0x17BC],ebx
	je Block15

 Block1:
	mov esi,dword ptr [ebp+0x17BC]
	cmp esi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [ebp+0x17BC]
	mov eax,0x2E
	sub eax,dword ptr [esp+0x14]
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	cmp esi,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,0x2E
	sub eax,dword ptr [esp+0x14]
	mov ecx,3
	cdq
	sub eax,edx
	sar eax,1
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],0xFF
	mov ecx,dword ptr [esp+0x38]
	mov ebp,dword ptr [ebp+0x17BC]
	mov byte ptr [esp+0x30],1
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x18]
	push edx
	push ebp
	add eax,0x20
	push eax
	add edi,0x11
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUIItemMaker::IsKindOf
__SUB_CLASS_THIS(003D2100, __thiscall, 69710,  CUIItemMaker, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIItemMaker::ms_RTTI_CUIItemMaker
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
// CUIItemMaker::EraseDisassembleInfo
__SUB_CLASS_THIS0(003D0680, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	or eax,0xFFFFFFFF
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xD14],eax
	mov dword ptr [esi+0xD18],eax
	mov eax,dword ptr [esi+0xB2C]
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
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	pop edi
	mov dword ptr [esi+0xB2C],0
	pop ebx

 Block5:
	pop esi
	ret
}
}
// CUIItemMaker::IsExistEmptySlot
__SUB_CLASS_THIS0(003D54F0, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push ebp
	push esi
	lea eax,[esp+0x10]
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	push edi
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
	mov dword ptr [esp+0x18],0
	pop edi

 Block5:
	mov eax,dword ptr [ebp+0xC5C]
	cmp eax,1
	je Block13

 Block6:
	cmp eax,2
	je Block13

 Block7:
	cmp eax,3
	jne Block10

 Block8:
	push 4
	mov ecx,ebx
	call CharacterData::GetEmptySlotCount
	test eax,eax
	jg Block26

 Block9:
	push 4
	mov ecx,ebp
	call CUIItemMaker::Notice_NoEmptySlot
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret

 Block10:
	cmp eax,4
	jne Block26

 Block11:
	push eax
	mov ecx,ebx
	call CharacterData::GetEmptySlotCount
	mov ecx,dword ptr [ebp+0xB2C]
	cmp eax,dword ptr [ecx+0x40]
	jge Block26

 Block12:
	push 4
	mov ecx,ebp
	call CUIItemMaker::Notice_NoEmptySlot
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret

 Block13:
	mov eax,dword ptr [ebp+0xB2C]
	test eax,eax
	je Block28

 Block14:
	cmp dword ptr [eax+0x54],0
	jbe Block29

 Block15:
	mov eax,dword ptr [eax+0x58]
	mov dword ptr [esp+0xC],eax
	test eax,eax
	je Block26

 Block16:
	lea edx,[esp+0xC]
	push edx
	call ZList<RANDOM_REWARD_INFO>::GetNext
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax+8]
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x20],edx
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax-1]
	add esp,4
	xor esi,esi
	cmp ecx,4
	ja Block27

 Block17:
	mov ecx,dword ptr [ebx+eax*4+0x501]
	test ecx,ecx
	je Block19

 Block18:
	mov ecx,dword ptr [ecx-4]

 Block19:
	lea edx,[ecx-1]
	cmp edx,1
	jl Block27

 Block20:
	mov ecx,dword ptr [ebx+eax*4+0x501]
	add ecx,0xC

 Block21:
	cmp dword ptr [ecx],0
	jne Block23

 Block22:
	inc esi

 Block23:
	add ecx,8
	sub edx,1
	jne Block21

 Block24:
	test esi,esi
	jle Block27

 Block25:
	cmp dword ptr [esp+0xC],edx
	jne Block16

 Block26:
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x18
	ret

 Block27:
	push eax
	mov ecx,ebp
	call CUIItemMaker::Notice_NoEmptySlot

 Block28:
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret

 Block29:
	mov ecx,dword ptr [ebp+0xB24]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov ecx,ebx
	call CharacterData::GetEmptySlotCount
	test eax,eax
	jg Block26

 Block30:
	push esi
	mov ecx,ebp
	call CUIItemMaker::Notice_NoEmptySlot
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret
}
}
// CUIItemMaker::OnSetFocus
__SUB_CLASS_THIS(003CF5E0, __thiscall, 69701,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIItemMaker::OnCreate
_SUB_EXCEPTION_HANDLER(3D6340)
__SUB_CLASS_THIS(003D6340, __thiscall, 69699,  CUIItemMaker, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D6340
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
	mov eax,dword ptr [esp+0xC0]
	push eax
	call CUIWnd::OnCreate_0
	xor ebp,ebp
	push ebp
	push ebp
	lea ebx,[esi+0x17D8]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	lea ecx,[esp+0x5C]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov ecx,0x16
	mov eax,0x14
	mov dword ptr [esp+0x8C],ecx
	mov dword ptr [esp+0x94],ecx
	push offset _S_UIUIWINDOW2IMGMA__9
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0xBC],ebp
	mov dword ptr [esp+0x8C],eax
	mov dword ptr [esp+0x94],eax
	mov dword ptr [esp+0x60],0xFFEEEEEE
	mov dword ptr [esp+0x64],0xFFA5A198
	mov dword ptr [esp+0x68],0xFF999999
	mov dword ptr [esp+0x80],0xA
	mov dword ptr [esp+0x84],8
	mov dword ptr [esp+0x88],0x7531
	mov dword ptr [esp+0x78],3
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,ebp
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release

 Block2:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA8],edi
	cmp edi,ebp
	je Block4

 Block3:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block4:
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB8],1
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov byte ptr [esp+0xB8],0
	cmp eax,ebp
	je Block15

 Block8:
	add eax,8
	cmp eax,ebp
	je Block15

 Block9:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block11

 Block10:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esi+0x17A0]
	mov dword ptr [esi+0x17A0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block13

 Block12:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esi+0x17A0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x5C]
	push edx
	push 0x12
	push 0x46
	push 0x3D
	push 0x4C
	push 3
	push 0x7530
	push esi
	call eax
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x88],0x9C41
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB8],2
	cmp eax,ebp
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block11

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xB8],0
	cmp eax,ebp
	je Block41

 Block18:
	add eax,8
	cmp eax,ebp
	je Block41

 Block19:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x17A8]
	mov dword ptr [esi+0x17A8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x17A8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push 0x12
	push 0x83
	push 0x3D
	push 0x96
	push 3
	push 0x9C40
	push esi
	call edx
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push ebp
	push 0x4E20
	push offset _S_UIUIWINDOW2IMGMA__8
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0xD0],3
	mov dword ptr [esp+0x64],ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0xB8],4
	cmp eax,ebp
	je Block42

 Block24:
	add eax,8
	cmp eax,ebp
	je Block42

 Block25:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block27

 Block26:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [esi+0x17B0]
	mov dword ptr [esi+0x17B0],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block29

 Block28:
	push ebp
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block29:
	mov byte ptr [esp+0xB8],3
	cmp dword ptr [esp+0x18],ebp
	je Block31

 Block30:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block31:
	mov eax,dword ptr [esi+0x17B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push ebp
	push 0x4E21
	push offset _S_UIUIWINDOW2IMGMA__7
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0xB8],5
	cmp eax,ebp
	je Block43

 Block32:
	add eax,8
	cmp eax,ebp
	je Block43

 Block33:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block35

 Block34:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov eax,dword ptr [esi+0x17B8]
	mov dword ptr [esi+0x17B8],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block37

 Block36:
	push ebp
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block37:
	mov byte ptr [esp+0xB8],3
	cmp dword ptr [esp+0x18],ebp
	je Block39

 Block38:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block39:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block44

 Block40:
	push eax
	call _com_issue_error

 Block41:
	xor edi,edi
	jmp Block21

 Block42:
	xor edi,edi
	jmp Block27

 Block43:
	xor edi,edi
	jmp Block35

 Block44:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xBC],6
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,7
	push offset _S_UIUIWINDOW2IMGMA__6
	mov byte ptr [esp+0xD0],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xCC],8
	cmp dword ptr [_D_G_RM],ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x17C0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB8],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block55:
	mov byte ptr [esp+0xB8],6
	cmp word ptr [esp+0x2C],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block59:
	mov byte ptr [esp+0xB8],3
	cmp word ptr [esp+0x1C],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x1C]
	push eax
	call edi

 Block63:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xBC],0xA
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__5
	mov byte ptr [esp+0xD0],0xB
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xCC],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xD0],0xB
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0xD
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0x17C4]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov ebx,8
	mov byte ptr [esp+0xB8],0xB
	cmp word ptr [esp+0x3C],bx
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0xB8],0xA
	cmp word ptr [esp+0x1C],bx
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [esp+0xB8],3
	cmp word ptr [esp+0x2C],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xBC],0xE
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xF
	push offset _S_UIUIWINDOW2IMGMA__4
	mov byte ptr [esp+0xD0],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xCC],0x10
	cmp dword ptr [_D_G_RM],ebp
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x11
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x17C8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xB8],bl
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov ebx,8
	mov byte ptr [esp+0xB8],0xE
	cmp word ptr [esp+0x1C],bx
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [esp+0xB8],3
	cmp word ptr [esp+0x2C],bx
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov edi,dword ptr [edi]
	cmp edi,ebp
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block109

 Block108:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block109:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[eax-4]
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,2
	mov dword ptr [esi+0x1798],edx
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0x17CC]
	push edi
	push eax
	mov byte ptr [esp+0xC4],0x12
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB8],3
	cmp eax,ebp
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea edx,[esp+0x1C]
	push edx
	push 0xFF90A8C3
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x13
	push eax
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xC8],0x14
	cmp ecx,ebp
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov byte ptr [esp+0xC8],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB8],3
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0x17D0]
	push edi
	push eax
	mov byte ptr [esp+0xC4],0x15
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB8],3
	cmp eax,ebp
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	push 0xD
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xD0],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xC8],0x17
	cmp ecx,ebp
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov byte ptr [esp+0xC8],0x16
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB8],3
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov ecx,esi
	call CUIItemMaker::ClearItemSlot
	mov ecx,esi
	call CUIItemMaker::SetItemSlotRect
	mov ecx,esi
	call CUIItemMaker::SetComboBox_Category
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xB8],0
	cmp eax,ebp
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block131:
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,ebp
	je Block133

 Block132:
	call _xbstr_t::Data_t::Release

 Block133:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 4
}
}
// CUIItemMaker::OnDestroy
__SUB_CLASS_THIS0(003CFF10, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x17D4]
	test eax,eax
	je Block2

 Block1:
	push eax
	call stop_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0x17D4],0

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIItemMaker::SetRecipe_Normal
_SUB_EXCEPTION_HANDLER(3D0C60)
__SUB_CLASS_THIS0(003D0C60, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D0C60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [edi+0xB2C]
	lea ecx,[eax+0x38]
	mov dword ptr [edi+0xC5C],1
	mov eax,dword ptr [ecx+8]
	mov dword ptr [edi+0xC60],eax
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	jne Block4

 Block1:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret

 Block3:
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]

 Block4:
	push eax
	call ZList<RECIPE_INFO>::IndexOf
	mov esi,eax
	cmp esi,dword ptr [edi+0xC60]
	jge Block1

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<RECIPE_INFO>::GetNext
	mov ebp,dword ptr [eax]
	mov ebx,dword ptr [eax+4]
	add esp,4
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x40],ebx
	call CItemInfo::GetItemSlot
	mov edi,eax
	imul esi,0x2C
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+4]
	add esi,edx
	mov dword ptr [esp+0x74],0
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xB58]
	test eax,eax
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esi+0xB58]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB58]
	test ecx,ecx
	je Block11

 Block10:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block11:
	mov dword ptr [esi+0xB58],0

 Block12:
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+0xB58],eax
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block17

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	mov ecx,dword ptr [esp+0x30]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block16

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block16:
	mov dword ptr [esp+0x30],0

 Block17:
	push 0
	push 0
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB6C]
	cmp edi,eax
	je Block22

 Block18:
	mov dword ptr [esi+0xB6C],eax
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	test edi,edi
	je Block22

 Block21:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block22:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	cmp dword ptr [esi+0xB6C],0
	je Block50

 Block25:
	lea eax,[esp+0x24]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0xB70]
	push ebp
	push eax
	mov dword ptr [esp+0x80],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x30]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x74],ebx
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block52

 Block28:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x78],2
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block52

 Block29:
	mov edi,dword ptr [ebp]
	mov byte ptr [esp+0x74],3
	test edi,edi
	je Block53

 Block30:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x2C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x64]
	push 0x64
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x6C]
	push 0x64
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov edi,8
	mov byte ptr [esp+0x74],2
	cmp word ptr [esp+0x3C],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov dword ptr [esp+0x74],ebx
	cmp word ptr [esp+0x4C],di
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
	mov ecx,3
	mov word ptr [esp+0x5C],cx
	mov ecx,0x64
	mov dword ptr [esp+0x64],ecx
	mov edi,dword ptr [ebp]
	mov edx,dword ptr [esi+0xB6C]
	mov dword ptr [esp+0x74],4
	test edi,edi
	je Block53

 Block41:
	mov ebp,dword ptr [esp+0x5C]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x70]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x80]
	push 0
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	cmp word ptr [esp+0x5C],8
	mov dword ptr [esp+0x74],0xFFFFFFFF
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov eax,dword ptr [esi+0xB70]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	call make_gray_canvas
	mov ebp,dword ptr [esp+0x38]
	mov ebx,dword ptr [esp+0x3C]
	add esp,4

 Block50:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	call CWvsContext::GetItemCount
	xor ecx,ecx
	cmp eax,ebx
	setge cl
	mov dword ptr [esi+0xB78],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0xB74],ebx
	mov dword ptr [esi+0xB7C],ecx
	test eax,eax
	jne Block3

 Block51:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret

 Block52:
	push eax
	call _com_issue_error

 Block53:
	push 0x80004003
	call _com_issue_error
}
}
// CUIItemMaker::GetRTTI
__SUB_CLASS_THIS0(003D20E0, __thiscall, 69709,  CUIItemMaker, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIItemMaker::ms_RTTI_CUIItemMaker
	ret
}
}
// CUIItemMaker::PutCatalyst
_SUB_EXCEPTION_HANDLER(3D18B0)
__SUB_CLASS_THIS(003D18B0, __thiscall, 69715,  CUIItemMaker, int32_t, GW_ItemSlotBase*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D18B0
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
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	je Block4

 Block1:
	cmp dword ptr [esi+0xD10],1
	jne Block5

 Block2:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x2FB

 Block3:
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block4:
	xor eax,eax
	jmp Block16

 Block5:
	lea edi,[ebp+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1022
	je Block7

 Block6:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x2FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	jmp Block16

 Block7:
	cmp dword ptr [esi+0xC5C],2
	je Block11

 Block8:
	cmp dword ptr [esi+0xCF4],0
	je Block11

 Block9:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ebx,eax
	mov eax,dword ptr [esi+0xCF4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block11

 Block10:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x2FC
	jmp Block3

 Block11:
	mov ecx,edi
	call TSecType<long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[esi+0xD08]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	push ebp
	lea ecx,[esi+0xCF0]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xD10],1
	call CWnd::InvalidateRect
	lea ecx,[esp+0x14]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x24],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov eax,1

 Block16:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIItemMaker::RECIPE_SLOT::RECIPE_SLOT
__SUB_CLASS_THIS0(003D0220, __thiscall, 69744,  CUIItemMaker::RECIPE_SLOT, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	ret
}
}
// CUIItemMaker::IsAbleToMake
__SUB_CLASS_THIS0(003D0450, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB24]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	mov eax,dword ptr [esi+0xC5C]
	dec eax
	cmp eax,3
	ja Block9

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block11
cmp EAX, 2
je Block10
cmp EAX, 3
je Block12


 Block4:
	push ecx
	mov ecx,esi
	call CUIItemMaker::DoesSatisfyPreCondition
	test eax,eax
	je Block1

 Block5:
	mov ecx,dword ptr [esi+0xC60]
	xor eax,eax
	test ecx,ecx
	jle Block9

 Block6:
	lea edx,[esi+0xB7C]

 Block7:
	cmp dword ptr [edx],0
	je Block1

 Block8:
	inc eax
	add edx,0x2C
	cmp eax,ecx
	jl Block7

 Block9:
	mov eax,1
	pop esi
	ret

 Block10:
	xor eax,eax
	cmp dword ptr [esi+0xB78],0x64
	pop esi
	setge al
	ret

 Block11:
	xor eax,eax
	cmp dword ptr [esi+0xC64],eax
	pop esi
	setg al
	ret

 Block12:
	xor eax,eax
	cmp dword ptr [esi+0xB2C],eax
	pop esi
	setne al
	ret
}
}
// CUIItemMaker::OnChildNotify
__SUB_CLASS_THIS(003D5E90, __thiscall, 69702,  CUIItemMaker, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	cmp edi,0x258
	jne Block5

 Block1:
	cmp ebx,0x7530
	jne Block3

 Block2:
	call CUIItemMaker::SetComboBox_Item
	jmp Block5

 Block3:
	cmp ebx,0x9C40
	jne Block5

 Block4:
	call CUIItemMaker::SetItemSlot

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	cmp edi,0x64
	jne Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov ecx,esi
	call edx

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIItemMaker::RemoveGem
__SUB_CLASS_THIS(003D06E0, __thiscall, 69716,  CUIItemMaker, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block3

 Block1:
	cmp eax,1
	je Block3

 Block2:
	xor eax,eax
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [esp+8]
	cmp eax,dword ptr [esi+0xCE8]
	jge Block2

 Block4:
	mov ecx,eax
	shl ecx,5
	cmp dword ptr [ecx+esi+0xC6C],0
	push edi
	lea edi,[ecx+esi]
	jne Block6

 Block5:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block6:
	add eax,0x64
	shl eax,5
	mov ecx,dword ptr [eax+esi]
	add eax,esi
	test ecx,ecx
	je Block8

 Block7:
	mov dword ptr [eax],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block8:
	push 0
	lea ecx,[edi+0xC68]
	call ZRef<GW_ItemSlotBase>::op_assign_zero
	mov eax,dword ptr [esi+0xCEC]
	test eax,eax
	jle Block10

 Block9:
	dec eax
	mov dword ptr [esi+0xCEC],eax

 Block10:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CUIItemMaker::SetComboBox_Category
_SUB_EXCEPTION_HANDLER(3D5EE0)
__SUB_CLASS_THIS0(003D5EE0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D5EE0
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
	mov edi,ecx
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x34],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x54],ebx
	call CUIItemMaker::GetMakableItem_ForJob
	lea ecx,[esp+0x18]
	push 0x1A2E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push ebx
	push eax
	mov byte ptr [esp+0x58],1
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x18]
	push 0x269
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0x3E6
	push eax
	mov byte ptr [esp+0x58],2
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x18]
	push 0x268
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0x1AA
	push eax
	mov byte ptr [esp+0x58],3
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x18]
	push 0x267
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0x1A9
	push eax
	mov byte ptr [esp+0x58],4
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block25

 Block9:
	lea edx,[esp+0x18]
	push edx
	call ZList<long>::GetNext
	mov ebp,dword ptr [eax]
	add esp,4
	push ebp
	mov ecx,edi
	call CUIItemMaker::DoesSatisfyPreCondition
	test eax,eax
	je Block24

 Block10:
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov dword ptr [esp+0x14],esi
	cmp esi,0x1A9
	je Block15

 Block11:
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	mov ecx,eax
	sub ecx,0xC8
	je Block14

 Block12:
	sub ecx,0x64
	je Block14

 Block13:
	sub ecx,0x64
	jne Block15

 Block14:
	mov esi,eax
	mov dword ptr [esp+0x14],esi

 Block15:
	push 0
	lea eax,[esp+0x18]
	lea ebx,[edi+0xB0C]
	push eax
	mov ecx,ebx
	call ZMap<long, ZList<long>, long>::GetAt
	xor ecx,ecx
	cmp eax,ecx
	je Block17

 Block16:
	mov ecx,eax
	call ZList<long>::AddTail_
	mov dword ptr [eax],ebp
	jmp Block24

 Block17:
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x2C],ecx
	mov dword ptr [esp+0x30],ecx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x50],5
	call ZList<long>::AddTail_
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebx
	mov dword ptr [eax],ebp
	call ZMap<long, ZList<long>, long>::Insert
	cmp esi,0xC8
	je Block23

 Block18:
	cmp esi,0x12C
	je Block23

 Block19:
	cmp esi,0x190
	je Block23

 Block20:
	cmp esi,0x1A9
	je Block23

 Block21:
	push ebp
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CUIItemMaker::GetItemCategoryName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push esi
	push eax
	mov byte ptr [esp+0x58],6
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x50],0
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll

 Block24:
	xor ebx,ebx
	cmp dword ptr [esp+0x18],ebx
	jne Block9

 Block25:
	push ebx
	lea ecx,[esp+0x20]
	lea esi,[edi+0xB0C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x1A9
	call ZMap<long, ZList<long>, long>::GetAt
	test eax,eax
	jne Block27

 Block26:
	mov ecx,dword ptr [edi+0x17A0]
	push ebx
	push 0x1A9
	call CCtrlComboBox::DeleteByParam

 Block27:
	push ebx
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0xC8
	call ZMap<long, ZList<long>, long>::GetAt
	cmp eax,ebx
	je Block31

 Block28:
	cmp dword ptr [eax+8],ebx
	jbe Block31

 Block29:
	lea eax,[esp+0x1C]
	push 0x1A87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0xC8
	push eax
	mov byte ptr [esp+0x58],7
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],0x12C
	call ZMap<long, ZList<long>, long>::GetAt
	cmp eax,ebx
	je Block35

 Block32:
	cmp dword ptr [eax+8],ebx
	jbe Block35

 Block33:
	lea edx,[esp+0x1C]
	push 0xB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0x12C
	push eax
	mov byte ptr [esp+0x58],8
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	push ebx
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0x190
	call ZMap<long, ZList<long>, long>::GetAt
	cmp eax,ebx
	je Block39

 Block36:
	cmp dword ptr [eax+8],ebx
	jbe Block39

 Block37:
	lea ecx,[esp+0x1C]
	push 0x1A38
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x17A0]
	push 0x190
	push eax
	mov byte ptr [esp+0x58],9
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],0
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov edi,dword ptr [edi+0x17A0]
	push 0x3E7
	push offset _S___32
	mov ecx,edi
	call CCtrlComboBox::AddItem
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x34],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret
}
}
// CUIItemMaker::UpdateItemCount
__SUB_CLASS_THIS0(003D47A0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x10
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB24],0
	push edi
	je Block30

 Block1:
	xor ebp,ebp
	cmp dword ptr [esi+0xC60],ebp
	jle Block20

 Block2:
	lea edi,[esi+0xB78]

 Block3:
	mov eax,dword ptr [edi-0x20]
	test eax,eax
	je Block19

 Block4:
	mov ecx,dword ptr [esi+0xC5C]
	dec ecx
	cmp ecx,3
	ja Block19

 Block5:
	cmp ECX, 0
je Block6
cmp ECX, 1
je Block9
cmp ECX, 2
je Block6
cmp ECX, 3
je Block14


 Block6:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount
	mov dword ptr [edi],eax
	test eax,eax
	jne Block8

 Block7:
	push ebp
	mov ecx,esi
	call CUIItemMaker::RemoveRecipe

 Block8:
	mov eax,dword ptr [edi]
	xor ecx,ecx
	cmp eax,dword ptr [edi-4]
	setge cl
	mov dword ptr [edi+4],ecx
	jmp Block19

 Block9:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount
	mov ecx,dword ptr [edi]
	cmp ecx,eax
	jge Block11

 Block10:
	mov eax,ecx

 Block11:
	mov dword ptr [edi],eax
	test eax,eax
	jne Block13

 Block12:
	push ebp
	mov ecx,esi
	call CUIItemMaker::RemoveRecipe

 Block13:
	mov dword ptr [edi+4],1
	jmp Block19

 Block14:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xD18]
	mov ecx,dword ptr [esi+0xD14]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	je Block17

 Block15:
	cmp dword ptr [esi+0xB58],ebx
	jne Block17

 Block16:
	mov dword ptr [edi],1
	mov dword ptr [edi+4],1
	jmp Block19

 Block17:
	mov ecx,esi
	call CUIItemMaker::ClearItemSlot
	mov ecx,esi
	call CUIItemMaker::SetItemSlot
	mov eax,dword ptr [esi+0x17D4]
	test eax,eax
	je Block19

 Block18:
	push eax
	call stop_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0x17D4],0

 Block19:
	inc ebp
	add edi,0x2C
	cmp ebp,dword ptr [esi+0xC60]
	jl Block3

 Block20:
	xor edi,edi
	cmp dword ptr [esi+0xCE8],edi
	jle Block26

 Block21:
	lea ebx,[esi+0xC6C]

 Block22:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block25

 Block23:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount
	test eax,eax
	jne Block25

 Block24:
	push edi
	mov ecx,esi
	call CUIItemMaker::RemoveGem

 Block25:
	inc edi
	add ebx,0x20
	cmp edi,dword ptr [esi+0xCE8]
	jl Block22

 Block26:
	cmp dword ptr [esi+0xD10],0
	je Block30

 Block27:
	mov eax,dword ptr [esi+0xCF4]
	test eax,eax
	je Block30

 Block28:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount
	test eax,eax
	jne Block30

 Block29:
	mov ecx,esi
	call CUIItemMaker::RemoveCatalyst

 Block30:
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIItemMaker::PutGem
_SUB_EXCEPTION_HANDLER(3D15F0)
__SUB_CLASS_THIS(003D15F0, __thiscall, 69715,  CUIItemMaker, int32_t, GW_ItemSlotBase*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D15F0
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
	mov ebp,dword ptr [esp+0x2C]
	test ebp,ebp
	je Block5

 Block1:
	add ebp,0xC
	mov ecx,ebp
	mov dword ptr [esp+0x14],ebp
	call TSecType<long>::GetData
	cdq
	mov ecx,0x2710
	idiv ecx
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,dword ptr [esi+0xCEC]
	cmp edx,dword ptr [esi+0xCE8]
	jl Block7

 Block2:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x2F7

 Block3:
	push eax

 Block4:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block7:
	mov ecx,ebp
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1A9
	je Block9

 Block8:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x2F6
	push edx
	jmp Block4

 Block9:
	xor ebx,ebx
	cmp dword ptr [esi+0xCE8],ebx
	jle Block15

 Block10:
	lea ebp,[esi+0xC6C]

 Block11:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block14

 Block12:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cdq
	mov ecx,0x2710
	idiv ecx
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp edi,eax
	jne Block14

 Block13:
	mov eax,dword ptr [ebp]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	test eax,eax
	jne Block20

 Block14:
	inc ebx
	add ebp,0x20
	cmp ebx,dword ptr [esi+0xCE8]
	jl Block11

 Block15:
	cmp dword ptr [esi+0xC5C],2
	je Block21

 Block16:
	test edi,edi
	je Block18

 Block17:
	cmp edi,1
	jne Block21

 Block18:
	mov edx,dword ptr [esi+0xB24]
	push edx
	call get_weapon_type
	add esp,4
	test eax,eax
	jne Block21

 Block19:
	push eax
	push 1
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x2F9
	jmp Block3

 Block20:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x2F8
	push ecx
	jmp Block4

 Block21:
	xor edi,edi
	cmp dword ptr [esi+0xCE8],edi
	jl Block5

 Block22:
	lea eax,[esi+0xC6C]

 Block23:
	cmp dword ptr [eax],0
	je Block26

 Block24:
	inc edi
	add eax,0x20
	cmp edi,dword ptr [esi+0xCE8]
	jle Block23

 Block25:
	jmp Block5

 Block26:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,edi
	add edx,4
	shl ecx,5
	push edx
	lea ebp,[ecx+esi+0xC68]
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ebp+4]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [ebp+4],eax
	test ebx,ebx
	je Block29

 Block27:
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block28:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block29:
	mov ecx,dword ptr [esp+0x14]
	call TSecType<long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	lea ecx,[edi+0x64]
	shl ecx,5
	mov edi,dword ptr [ecx+esi]
	add ecx,esi
	cmp edi,eax
	je Block34

 Block30:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	test edi,edi
	je Block34

 Block33:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block34:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esi+0xCEC]
	cmp eax,4
	jge Block38

 Block37:
	inc eax
	mov dword ptr [esi+0xCEC],eax

 Block38:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea eax,[esp+0x18]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x28],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov eax,1
	jmp Block6
}
}
// CUIItemMaker::CUIItemMaker
_SUB_EXCEPTION_HANDLER(3D1E50)
__SUB_CLASS_THIS0(003D1E50, __thiscall, 69696,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D1E50
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
	mov dword ptr [esp+0x1C],esi
	push 1
	xor edi,edi
	push edi
	push edi
	push offset _S_UIUIWINDOW2IMGMA__1
	push 6
	push 0x111
	push 5
	push 0x16
	call CUIWnd::_ctor_1
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x28],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIItemMaker>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIItemMaker>::ms_pInstance],edi

 Block3:
	lea ecx,[esi+0xB0C]
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemMaker::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemMaker::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemMaker::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZList<long>, long>::_CalcAutoGrow
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	int 3// TODO: 	mov dword ptr [esi+0xB40],offset ZList<long>::`vftable'
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	push offset CUIItemMaker::RECIPE_SLOT::~RECIPE_SLOT
	push offset CUIItemMaker::RECIPE_SLOT::_ctor_default
	push 6
	push 0x2C
	lea edx,[esi+0xB54]
	push edx
	mov byte ptr [esp+0x3C],4
	call __eh_vector_ctor_iterator
	push offset CUIItemMaker::GEM_SLOT::~GEM_SLOT
	push offset CUIItemMaker::GEM_SLOT::_ctor_default
	push 4
	push 0x20
	lea eax,[esi+0xC68]
	push eax
	mov byte ptr [esp+0x3C],5
	mov dword ptr [esi+0xC5C],1
	mov dword ptr [esi+0xC60],edi
	mov dword ptr [esi+0xC64],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xCE8],edi
	mov dword ptr [esi+0xCEC],edi
	mov dword ptr [esi+0xCF4],edi
	mov dword ptr [esi+0xD08],edi
	mov dword ptr [esi+0xD0C],edi
	or eax,0xFFFFFFFF
	lea ecx,[esi+0xD1C]
	mov byte ptr [esp+0x28],7
	mov dword ptr [esi+0xD14],eax
	mov dword ptr [esi+0xD18],eax
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x1794],edi
	mov dword ptr [esi+0x1798],edi
	mov dword ptr [esi+0x17A0],edi
	mov dword ptr [esi+0x17A8],edi
	mov dword ptr [esi+0x17B0],edi
	mov dword ptr [esi+0x17B8],edi
	mov dword ptr [esi+0x17BC],edi
	mov dword ptr [esi+0x17C0],edi
	mov dword ptr [esi+0x17C4],edi
	mov dword ptr [esi+0x17C8],edi
	mov dword ptr [esi+0x17CC],edi
	mov dword ptr [esi+0x17D0],edi
	mov dword ptr [esi+0x17D4],edi
	mov dword ptr [esi+0x17D8],edi
	mov dword ptr [esi+0x17DC],edi
	mov dword ptr [esi+0x17E0],edi
	mov dword ptr [esi+0x17E4],edi
	mov dword ptr [esi+0x17E8],edi
	mov ebx,dword ptr [esi+0x78]
	mov byte ptr [esp+0x28],0x13
	cmp ebx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push ebx
	mov dword ptr [esp+0x1C],edi
	call eax
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp ebx,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block11:
	mov ecx,dword ptr [esp+0x18]
	push 0xA
	push ebp
	push ecx
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CUIItemMaker::ClearItemSlot
__SUB_CLASS_THIS0(003D04E0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push ebp
	push edi
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [edi+0xB08],ebp
	mov eax,dword ptr [edi+0x17BC]
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [edi+0x17BC],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov dword ptr [edi+0xB24],ebp
	mov eax,dword ptr [edi+0xB2C]
	push ebx
	push esi
	cmp eax,ebp
	je Block7

 Block3:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block6:
	mov dword ptr [edi+0xB2C],ebp

 Block7:
	lea esi,[edi+0xB54]
	mov ebx,6
	lea ecx,[ecx]

 Block8:
	mov ecx,esi
	call CUIItemMaker::RECIPE_SLOT::Clear
	add esi,0x2C
	sub ebx,1
	jne Block8

 Block9:
	mov dword ptr [edi+0xC5C],1
	mov dword ptr [edi+0xC60],ebp
	mov dword ptr [edi+0xC64],ebp
	lea esi,[edi+0xC6C]
	mov ebx,4

 Block10:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	cmp ecx,ebp
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esi],ebp

 Block15:
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebp
	je Block17

 Block16:
	mov dword ptr [esi+0x14],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0x18]
	cmp eax,ebp
	je Block19

 Block18:
	mov dword ptr [esi+0x18],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	add esi,0x20
	sub ebx,1
	jne Block10

 Block20:
	mov dword ptr [edi+0xCE8],ebp
	mov dword ptr [edi+0xCEC],ebp
	mov eax,dword ptr [edi+0xCF4]
	pop esi
	pop ebx
	cmp eax,ebp
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [edi+0xCF4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+0xCF4]
	cmp ecx,ebp
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [edi+0xCF4],ebp

 Block25:
	mov eax,dword ptr [edi+0xD08]
	cmp eax,ebp
	je Block27

 Block26:
	mov dword ptr [edi+0xD08],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [edi+0xD0C]
	cmp eax,ebp
	je Block29

 Block28:
	mov dword ptr [edi+0xD0C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov dword ptr [edi+0xD10],ebp
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0xD14],eax
	mov dword ptr [edi+0xD18],eax
	pop edi
	pop ebp
	ret
}
}
// CUIItemMaker::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3D5DC0)
__SUB_CLASS_THIS(003D5DC0, __thiscall, 69706,  CUIItemMaker, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D5DC0
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
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x14],edi
	mov ebx,dword ptr [esp+0x28]
	mov eax,ebx
	sub eax,0x4E20
	mov ecx,1
	mov byte ptr [esp+0x20],cl
	je Block5

 Block1:
	sub eax,ecx
	jne Block8

 Block2:
	mov eax,dword ptr [esi+0x17D4]
	cmp eax,edi
	je Block4

 Block3:
	push eax
	call stop_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0x17D4],edi

 Block4:
	mov eax,dword ptr [esi+0xAD0]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::UI_Close
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block5:
	cmp dword ptr [esi+0xB08],ecx
	jne Block9

 Block6:
	mov ecx,esi
	call CUIItemMaker::ConfirmMake
	test eax,eax
	je Block9

 Block7:
	mov ecx,esi
	call CUIItemMaker::StartItemMake

 Block8:
	push ebx
	mov ecx,esi
	call CUIWnd::OnButtonClicked

 Block9:
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
// CUIItemMaker::DrawGaugeBar
_SUB_EXCEPTION_HANDLER(3CFC90)
__SUB_CLASS_THIS(003CFC90, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CFC90
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
	mov edi,ecx
	mov eax,3
	mov edx,0xFF
	mov dword ptr [esp+0x34],0
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],edx
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [edi+0x17C4]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	push esi
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	push 0x121
	push 0xB
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x38],ecx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	xor esi,esi
	cmp dword ptr [edi+0xB08],2
	jne Block14

 Block9:
	cmp dword ptr [edi+0x1794],ebx
	jle Block27

 Block10:
	call get_update_time
	sub eax,dword ptr [edi+0x1794]
	cmp eax,ebx
	jle Block27

 Block11:
	mov ecx,dword ptr [edi+0x1798]
	imul ecx,eax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [edi+0x17C4]
	sar edx,6
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	call IWzCanvas::Getwidth
	sub eax,4
	cmp esi,eax
	ja Block27

 Block14:
	lea ebp,[esi+0xD]
	mov esi,dword ptr [edi+0x17C4]
	mov dword ptr [esp+0x18],ebp
	cmp esi,ebx
	je Block26

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov eax,dword ptr [esp+0x14]
	add eax,9
	cmp ebp,eax
	jae Block27

 Block18:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],edx
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [edi+0x17C8]
	mov byte ptr [esp+0x34],2
	cmp ecx,ebx
	je Block1

 Block19:
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x28]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	push 0x121
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x34],ecx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block21

 Block20:
	mov ecx,dword ptr [esp+0x14]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block21:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov esi,dword ptr [edi+0x17C4]
	inc ebp
	mov dword ptr [esp+0x18],ebp
	cmp esi,ebx
	jne Block15

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
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
// CUIItemMaker::GetTotalCostToDisassemble
_SUB_EXCEPTION_HANDLER(3D0990)
__SUB_CLASS_THIS0(003D0990, __thiscall, 69729,  CUIItemMaker, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D0990
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
	mov esi,dword ptr [ecx+0xB58]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi+4]
	push eax
	call edi

 Block2:
	mov dword ptr [esp+0x28],0
	test esi,esi
	je Block5

 Block3:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	test eax,eax
	jne Block6

 Block4:
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x28],al
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret

 Block6:
	mov edx,dword ptr [eax+0x20]
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x18],esp
	add esi,4
	push esi
	call edi
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcMakerSkillDisassembleCost
	lea ecx,[esp+0x10]
	mov esi,eax
	mov byte ptr [esp+0x28],0
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CUIItemMaker::SetItemSlotRect
__SUB_CLASS_THIS0(003CF4D0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	push 0x4E
	push 0x3F
	push 0x20
	mov ebx,ecx
	push 0x11
	lea eax,[ebx+0xB30]
	push eax
	call SetRect
	xor esi,esi
	lea edi,[ebx+0xB5C]

 Block1:
	xor ecx,ecx
	cmp esi,3
	setl cl
	mov eax,0xAAAAAAAB
	mul esi
	shr edx,1
	lea edx,[edx+edx*2]
	mov eax,esi
	sub eax,edx
	imul eax,0x59
	dec ecx
	and ecx,0x2A
	lea edx,[ecx+0x92]
	push edx
	lea edx,[eax+0x37]
	push edx
	add ecx,0x6D
	push ecx
	add eax,0x12
	push eax
	push edi
	call SetRect
	inc esi
	add edi,0x2C
	cmp esi,6
	jl Block1

 Block2:
	mov esi,0x5D
	lea edi,[ebx+0xC70]
	nop

 Block3:
	push 0x115
	lea eax,[esi+0x25]
	push eax
	push 0xF0
	push esi
	push edi
	call SetRect
	add esi,0x31
	add edi,0x20
	cmp esi,0x121
	jl Block3

 Block4:
	push 0x115
	push 0x37
	push 0xF0
	push 0x12
	lea ecx,[ebx+0xCF8]
	push ecx
	call SetRect
	push 0xC0
	push 0x118
	push 0x68
	push 0xE
	lea edx,[ebx+0x1764]
	push edx
	call SetRect
	push 0x118
	push 0x46
	push 0xDD
	push 0xE
	lea eax,[ebx+0x1774]
	push eax
	call SetRect
	push 0x118
	push 0x118
	push 0xDD
	push 0x50
	add ebx,0x1784
	push ebx
	call SetRect
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIItemMaker::DoesSatisfyPreCondition
_SUB_EXCEPTION_HANDLER(3D0240)
__SUB_CLASS_THIS(003D0240, __thiscall, 69716,  CUIItemMaker, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D0240
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x30]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	call CItemMakerInfo::GetItemMakeInfo
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],0
	je Block9

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block6

 Block2:
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
	mov dword ptr [esp+0x1C],0

 Block6:
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	movsx edx,ax
	push 0
	push edx
	push 0x3EF
	call get_novice_skill_as_race
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0xC]
	test edx,edx
	je Block10

 Block7:
	cmp eax,edx
	jge Block10

 Block8:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block10:
	cmp dword ptr [ecx+8],0
	je Block12

 Block11:
	mov eax,dword ptr [esi+0x35]
	push eax
	add esi,0x33
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [esp+0x1C]
	movzx edx,al
	add esp,8
	cmp edx,dword ptr [ecx+8]
	jl Block8

 Block12:
	mov eax,dword ptr [ecx+0x10]
	test eax,eax
	je Block15

 Block13:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetItemCount
	test eax,eax
	jle Block8

 Block14:
	mov ecx,dword ptr [esp+0x14]

 Block15:
	mov eax,dword ptr [ecx+0x14]
	test eax,eax
	je Block18

 Block16:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::IsEquipped
	test eax,eax
	je Block8

 Block17:
	mov ecx,dword ptr [esp+0x14]

 Block18:
	cmp dword ptr [ecx+0x2C],0
	jbe Block25

 Block19:
	mov esi,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block25

 Block20:
	lea ebx,[ebx]

 Block21:
	movzx eax,word ptr [esi]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetQuestState
	mov esi,dword ptr [esi+4]
	cmp esi,3
	je Block30

 Block22:
	xor ecx,ecx
	cmp eax,esi
	sete cl
	mov eax,ecx
	test eax,eax
	je Block8

 Block23:
	lea edx,[esp+0x30]
	push edx
	call ZList<QUEST_CONDITION>::GetNext
	mov esi,dword ptr [esp+0x34]
	add esp,4
	test esi,esi
	jne Block21

 Block24:
	mov ecx,dword ptr [esp+0x14]

 Block25:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ecx,ecx
	je Block29

 Block26:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block29

 Block28:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block29:
	mov eax,1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block30:
	cmp eax,1
	je Block23

 Block31:
	cmp eax,2
	jne Block8

 Block32:
	jmp Block23
}
}
// CUIItemMaker::SetRecipe_EquipDisassemble
_SUB_EXCEPTION_HANDLER(3D2860)
__SUB_CLASS_THIS0(003D2860, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2860
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
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	mov ebx,1
	push eax
	mov dword ptr [esi+0xC5C],4
	mov dword ptr [esi+0xC60],ebx
	call edi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x54],0
	call edi
	lea eax,[esp+0x18]
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
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__2
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x64],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB70]
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
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x38]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block17:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x28]
	push eax
	call ebp

 Block21:
	mov dword ptr [esi+0xB78],0
	mov dword ptr [esi+0xB74],ebx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret
}
}
// CUIItemMaker::StartItemMake
__SUB_CLASS_THIS0(003D5830, __thiscall, 69717,  CUIItemMaker, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB08],1
	jne Block6

 Block1:
	mov eax,dword ptr [esi+0xC5C]
	dec eax
	cmp eax,3
	ja Block8

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block7
cmp EAX, 2
je Block3
cmp EAX, 3
je Block3


 Block3:
	call CUIItemMaker::IsAbleToMake
	test eax,eax
	je Block6

 Block4:
	mov ecx,esi
	call CUIItemMaker::IsExistEmptySlot
	test eax,eax
	je Block6

 Block5:
	mov ecx,esi
	call CUIItemMaker::IsEnoughMeso
	test eax,eax
	jne Block8

 Block6:
	xor eax,eax
	pop esi
	ret

 Block7:
	cmp dword ptr [esi+0xC64],0
	jle Block6

 Block8:
	mov eax,dword ptr [esi+0x17B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	call get_update_time
	push offset _S_ITEMMAKE
	mov dword ptr [esi+0x1794],eax
	mov dword ptr [esi+0xB08],2
	call play_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0x17D4],eax
	mov eax,1
	pop esi
	ret
}
}
// CUIItemMaker::IsMatched_WithCurrentSetting
_SUB_EXCEPTION_HANDLER(3D0A90)
__SUB_CLASS_THIS(003D0A90, __thiscall, 69716,  CUIItemMaker, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D0A90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x30]
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	push edi
	lea eax,[esp+0x14]
	push eax
	call CItemMakerInfo::GetItemMakeInfo
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],0
	je Block4

 Block1:
	push edi
	mov ecx,esi
	call CUIItemMaker::DoesSatisfyPreCondition
	test eax,eax
	jne Block5

 Block2:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	lea ecx,[esp+0x10]

 Block3:
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block5:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0x44]
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block9

 Block6:
	nop

 Block7:
	lea edx,[esp+0x30]
	push edx
	call ZList<RECIPE_INFO>::GetNext
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	add esp,4
	push ecx
	push edx
	mov ecx,esi
	call CUIItemMaker::IsMatched_WithCurrentRecipe
	test eax,eax
	je Block2

 Block8:
	cmp dword ptr [esp+0x30],0
	jne Block7

 Block9:
	cmp dword ptr [esi+0xD10],0
	je Block12

 Block10:
	mov eax,dword ptr [esi+0xCF4]
	test eax,eax
	je Block12

 Block11:
	mov edi,dword ptr [esp+0x14]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp dword ptr [edi+0x1C],eax
	jne Block2

 Block12:
	mov eax,dword ptr [esi+0xCEC]
	mov ecx,dword ptr [esp+0x14]
	cmp eax,dword ptr [ecx+0x18]
	jg Block2

 Block13:
	test eax,eax
	jle Block21

 Block14:
	mov edx,dword ptr [esi+0xB24]
	push edx
	call get_weapon_type
	add esp,4
	test eax,eax
	jne Block21

 Block15:
	xor edi,edi
	cmp dword ptr [esi+0xCE8],edi
	jle Block21

 Block16:
	lea ebx,[esi+0xC6C]

 Block17:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block20

 Block18:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cdq
	mov ecx,0x2710
	idiv ecx
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	je Block2

 Block19:
	cmp eax,1
	je Block2

 Block20:
	inc edi
	add ebx,0x20
	cmp edi,dword ptr [esi+0xCE8]
	jl Block17

 Block21:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xBD]
	push eax
	add esi,0xB5
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	cmp eax,dword ptr [ecx+0x20]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	lea ecx,[esp+0x10]
	jl Block3

 Block22:
	call ZRef<ITEM_MAKE_INFO>::~ZRef<ITEM_MAKE_INFO>
	mov eax,1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIItemMaker::DrawMeso
_SUB_EXCEPTION_HANDLER(3D2C70)
__SUB_CLASS_THIS(003D2C70, __thiscall, 69725,  CUIItemMaker, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D2C70
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
	mov ecx,dword ptr [esi+0xC5C]
	mov dword ptr [esp+0x18],0
	cmp ecx,1
	je Block3

 Block1:
	cmp ecx,4
	je Block3

 Block2:
	cmp ecx,3
	jne Block13

 Block3:
	xor eax,eax
	cmp ecx,1
	jne Block6

 Block4:
	mov edx,dword ptr [esi+0xB2C]
	test edx,edx
	je Block6

 Block5:
	mov eax,dword ptr [edx+0x20]
	push eax
	mov ecx,esi
	call CUIItemMaker::GetTotalCostToMake
	jmp Block8

 Block6:
	cmp ecx,4
	jne Block9

 Block7:
	mov ecx,esi
	call CUIItemMaker::GetTotalCostToDisassemble

 Block8:
	test eax,eax
	jl Block13

 Block9:
	mov dword ptr [esp+8],0
	push 1
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov byte ptr [esp+0x24],1
	call format_integer
	mov esi,dword ptr [esi+0x17D0]
	add esp,0xC
	push 2
	push esi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0xC4
	push 0x100
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	call _DrawTextA
	mov eax,dword ptr [esp+0x20]
	add esp,0x18
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CUIItemMaker::SetCatalyst_Normal
_SUB_EXCEPTION_HANDLER(3D10C0)
__SUB_CLASS_THIS0(003D10C0, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D10C0
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
	mov esi,ecx
	mov eax,dword ptr [esi+0xB2C]
	mov eax,dword ptr [eax+0x1C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemSlot
	push eax
	lea ecx,[esi+0xCF0]
	mov dword ptr [esp+0x50],0
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	test eax,eax
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov edx,dword ptr [esp+0x18]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB2C]
	mov eax,dword ptr [eax+0x1C]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xD08]
	cmp edi,eax
	je Block9

 Block5:
	mov dword ptr [esi+0xD08],eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	test edi,edi
	je Block9

 Block8:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block9:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp dword ptr [esi+0xD08],0
	je Block37

 Block12:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0xD0C]
	push edi
	push eax
	mov dword ptr [esp+0x58],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x4C],ebx
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x14]
	mov ebx,2
	push eax
	mov dword ptr [esp+0x50],ebx
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x4C],3
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0x64
	push 0x64
	call IWzCanvas::Create
	mov ebp,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x14],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	cmp word ptr [esp+0x24],bp
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],0x64
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [esi+0xD08]
	mov dword ptr [esp+0x4C],4
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x34]
	push eax
	push esi
	push 0
	push 0
	call IWzCanvas::Copy
	mov dword ptr [esp+0x4C],ebx
	cmp word ptr [esp+0x34],bp
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	call make_gray_canvas
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CUIItemMaker::GetMakableItem_ForJob
_SUB_EXCEPTION_HANDLER(3D3E60)
__SUB_CLASS_THIS(003D3E60, __thiscall, 69722,  CUIItemMaker, void, ZList<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D3E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x3D]
	push ecx
	add eax,0x39
	xor edi,edi
	push eax
	mov dword ptr [esp+0x70],edi
	call _ZtlSecureFuseHelper<short>::call
	movsx esi,ax
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [esp+0x68],0xFFFFFFFF
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
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	imul ecx,0x3E8
	sub esi,ecx
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	int 3// TODO: 	mov ebx,offset ZList<long>::`vftable'
	add esi,edx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x68],1
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x48],edi
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	lea edx,[esp+0x4C]
	push edx
	push edi
	mov byte ptr [esp+0x70],2
	call CItemMakerInfo::GetMakableItemList
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	push edi
	call CItemMakerInfo::GetMakableItemList_Hidden
	cmp esi,9
	jne Block25

 Block5:
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	nop

 Block6:
	cmp ebx,edi
	fld1
	fld qword ptr [__real_4000000000000000]
	mov eax,ebx
	jge Block8

 Block7:
	neg eax

 Block8:
	fld st(1)

 Block9:
	test al,1
	je Block11

 Block10:
	fmul st,st(1)

 Block11:
	shr eax,1
	je Block13

 Block12:
	fld st(1)
	fmulp st(2),st
	jmp Block9

 Block13:
	cmp ebx,edi
	fstp st(1)
	jge Block15

 Block14:
	fdivp st(1),st(0)
	jmp Block16

 Block15:
	fstp st(1)

 Block16:
	call __ftol2_sse
	mov ebp,eax
	int 3// TODO: 	mov dword ptr [esp+0x24],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],edi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	push ebp
	mov byte ptr [esp+0x70],3
	call CItemMakerInfo::GetMakableItemList
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block20

 Block17:
	jmp Block19

 Block19:
	lea edx,[esp+0x18]
	push edx
	call ZList<long>::GetPrev
	mov ecx,dword ptr [esp+0x74]
	add esp,4
	mov esi,eax
	call ZList<long>::AddHead_
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	cmp dword ptr [esp+0x18],edi
	jne Block19

 Block20:
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	push ebp
	call CItemMakerInfo::GetMakableItemList_Hidden
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block23

 Block21:
	mov ebp,dword ptr [esp+0x14]
	add ebp,0xB40
	lea esp,[esp]

 Block22:
	lea eax,[esp+0x18]
	push eax
	call ZList<long>::GetPrev
	add esp,4
	mov ecx,ebp
	mov esi,eax
	call ZList<long>::AddHead_
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	cmp dword ptr [esp+0x18],edi
	jne Block22

 Block23:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x68],2
	int 3// TODO: 	mov dword ptr [esp+0x24],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	inc ebx
	sub dword ptr [esp+0x1C],1
	jne Block6

 Block24:
	int 3// TODO: 	mov ebx,offset ZList<long>::`vftable'
	jmp Block27

 Block25:
	cmp esi,edi
	je Block27

 Block26:
	fld qword ptr [__real_4000000000000000]
	dec esi
	push esi
	sub esp,8
	fstp qword ptr [esp]
	call _pow
	add esp,0xC
	call __ftol2_sse
	mov edx,dword ptr [esp+0x70]
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	mov esi,eax
	push edx
	push esi
	call CItemMakerInfo::GetMakableItemList
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance]
	add eax,0xB40
	push eax
	push esi
	call CItemMakerInfo::GetMakableItemList_Hidden

 Block27:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block30

 Block28:
	mov ebp,dword ptr [esp+0x70]

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call ZList<long>::GetPrev
	add esp,4
	mov ecx,ebp
	mov esi,eax
	call ZList<long>::AddHead_
	mov edx,dword ptr [esi]
	mov dword ptr [eax],edx
	cmp dword ptr [esp+0x1C],edi
	jne Block29

 Block30:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x70],eax
	cmp eax,edi
	je Block35

 Block31:
	mov ebp,dword ptr [esp+0x14]
	add ebp,0xB40
	jmp Block33

 Block33:
	lea eax,[esp+0x70]
	push eax
	call ZList<long>::GetPrev
	add esp,4
	mov ecx,ebp
	mov esi,eax
	call ZList<long>::AddHead_
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	cmp dword ptr [esp+0x70],edi
	jne Block33

 Block34:
	int 3// TODO: 	mov ebx,offset ZList<long>::`vftable'

 Block35:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x68],1
	mov dword ptr [esp+0x38],ebx
	call ZList<long>::RemoveAll
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CUIItemMaker::OnItemMakeResult
_SUB_EXCEPTION_HANDLER(3D51F0)
__SUB_CLASS_THIS(003D51F0, __thiscall, 69707,  CUIItemMaker, void, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D51F0
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
	mov dword ptr [esp+0x1C],esi
	cmp dword ptr [esi+0xB08],3
	jne Block33

 Block1:
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esp+0x30]
	mov eax,ecx
	sub eax,ebp
	mov byte ptr [esp+0x28],1
	je Block6

 Block2:
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block17

 Block4:
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x2FE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block19

 Block5:
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x302
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block19

 Block6:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x34]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,ebp
	je Block19

 Block9:
	cmp byte ptr [ebx],0
	je Block19

 Block10:
	lea ecx,[esp+0x34]
	push 0x2FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push ebx
	push edx
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	push ebp
	push 1
	push ebp
	push ebp
	mov ebp,dword ptr [esp+0x28]
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block16

 Block13:
	mov eax,ebp
	lea edx,[eax+1]

 Block14:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block14

 Block15:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
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
	mov esi,dword ptr [esp+0x30]

 Block16:
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block19

 Block17:
	lea edx,[ecx-4]
	cmp edx,3
	ja Block19

 Block18:
	add ecx,0xFFFFFFFD
	push ecx
	mov ecx,esi
	call CUIItemMaker::Notice_NoEmptySlot

 Block19:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jle Block29

 Block20:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x34]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea ecx,[esp+0x30]
	push 0x300
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x34],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ebp,dword ptr [esp+0x18]
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block28

 Block25:
	mov eax,ebp
	lea edx,[eax+1]

 Block26:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block26

 Block27:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
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
	mov esi,dword ptr [esp+0x30]

 Block28:
	call CUtilDlg::Notice
	add esp,0x14

 Block29:
	mov dword ptr [esi+0xB08],0
	mov byte ptr [esp+0x28],0
	test ebx,ebx
	je Block31

 Block30:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebp,ebp
	je Block33

 Block32:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x10
}
}
// CUIItemMaker::IsMatched_WithCurrentRecipe
__SUB_CLASS_THIS(003D07C0, __thiscall, 69719,  CUIItemMaker, int32_t, NakedParam<RECIPE_INFO>) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov ebx,ecx
	xor edi,edi
	cmp dword ptr [ebx+0xC60],edi
	jle Block6

 Block1:
	lea esi,[ebx+0xB58]

 Block2:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block5

 Block3:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x10]
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0x20]
	cmp eax,dword ptr [esp+0x14]
	je Block7

 Block5:
	inc edi
	add esi,0x2C
	cmp edi,dword ptr [ebx+0xC60]
	jl Block2

 Block6:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block7:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8
}
}
// CUIItemMaker::SetCatalyst_Hidden
_SUB_EXCEPTION_HANDLER(3D1390)
__SUB_CLASS_THIS0(003D1390, __thiscall, 69698,  CUIItemMaker, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D1390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 0
	push 0x3F04E2
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xD08]
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [edi+0xD08],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	cmp dword ptr [edi+0xD08],0
	je Block33

 Block8:
	lea ecx,[esp+0x10]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xD0C]
	push esi
	push eax
	mov dword ptr [esp+0x58],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call ebp
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
	mov dword ptr [esp+0x50],1
	call ebp
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
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x4C],2
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0x64
	push 0x64
	call IWzCanvas::Create
	mov ebp,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x14],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],0x64
	mov eax,dword ptr [edi+0xD08]
	mov dword ptr [esp+0x4C],ecx
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x34]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],bp
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	call make_gray_canvas
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x40
	ret
}
}
