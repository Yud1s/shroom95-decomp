#include "regen.hpp"
// UIPQReward.ipp
#include "UIPQReward.hpp"

// CUIPQReward::~CUIPQReward
_SUB_EXCEPTION_HANDLER(41E0F0)
__SUB_CLASS_THIS0(0041E0F0, __thiscall, 43089,  CUIPQReward, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41E0F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIPQReward::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPQReward::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPQReward::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x1F4]
	mov dword ptr [esp+0x1C],8
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x1E0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1DC]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1D8]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0x1D8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x1D8]
	cmp ecx,ebx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0x1D8],ebx

 Block9:
	mov eax,dword ptr [esi+0x1D0]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0x1CC]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	push offset CUIPQReward::RewardBoxInfo::~RewardBoxInfo
	push 6
	push 0x28
	lea eax,[esi+0xCC]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 6
	push 8
	lea ecx,[esi+0x94]
	push ecx
	mov byte ptr [esp+0x2C],bl
	call __eh_vector_dtor_iterator
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
// CUIPQReward::OnSelectRewardFail
_SUB_EXCEPTION_HANDLER(41D440)
__SUB_CLASS_THIS(0041D440, __thiscall, 43099,  CUIPQReward, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41D440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x28]
	xor esi,esi
	sub eax,esi
	je Block12

 Block1:
	sub eax,1
	je Block7

 Block2:
	sub eax,1
	jne Block17

 Block3:
	lea eax,[esp+0x28]
	push 0x18CD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],2
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block5

 Block4:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block5:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,esi
	je Block11

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi+0x1BC],esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4

 Block7:
	lea ecx,[esp+0xC]
	push 0x1887
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],1
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block9

 Block8:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block9:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,esi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov dword ptr [edi+0x1BC],esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4

 Block12:
	lea edx,[esp+0x10]
	push 0x18D8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],esi
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block14

 Block13:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block14:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,esi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,edi
	call edx

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// CUIPQReward::OnFailToRequestReward
__SUB_CLASS_THIS(0041CA70, __thiscall, 43100,  CUIPQReward, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x1C0],0
	call get_update_time
	add eax,0x1388
	mov dword ptr [esi+0x1F0],eax
	pop esi
	ret 4
}
}
// CUIPQReward::OnKey
__SUB_CLASS_THIS(0041E090, __thiscall, 43094,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIPQReward::OnCreate
_SUB_EXCEPTION_HANDLER(41E290)
__SUB_CLASS_THIS(0041E290, __thiscall, 43090,  CUIPQReward, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41E290
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x44],1
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x4C],ebp
	lea eax,[esp+0x18]
	push 0x1986
	push eax
	mov dword ptr [esp+0x74],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x70],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x6C],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x6C],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x44]
	push eax
	push ebp
	push 0x12
	push 0xEC
	push 1
	push esi
	call edx
	mov eax,dword ptr [esi+0xC8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	mov eax,dword ptr [esi+0xC8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebp
	call edx
	lea eax,[esp+0x18]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0x1CC]
	push edi
	push eax
	mov byte ptr [esp+0x78],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x6C],0
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call ebx
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block16

 Block14:
	push eax
	call _com_issue_error

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	lea eax,[esp+0x24]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x84],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x7C],5
	cmp ecx,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x7C],4
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],0
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	lea ecx,[esp+0x18]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0x1D0]
	push edi
	push eax
	mov byte ptr [esp+0x78],6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x6C],0
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	lea edx,[esp+0x24]
	push edx
	call ebx
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF979897
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov ebx,7
	push edx
	mov byte ptr [esp+0x84],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x7C],8
	cmp ecx,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov byte ptr [esp+0x7C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],0
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x1C],edi
	mov byte ptr [esp+0x6C],9
	cmp edi,ebp
	je Block43

 Block33:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x70],0xA
	mov dword ptr [esp+0x18],1
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push 0x16
	push 3
	push ebp
	push ebp
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1987
	push edx
	mov dword ptr [esp+0x90],0xB
	mov dword ptr [esp+0x38],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x88],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x70]
	mov byte ptr [esp+0x88],0xB
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov dword ptr [esp+0x7C],0xD
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,edi
	call CBitmapNumber::_ctor_0
	mov ebp,eax
	jmp Block44

 Block43:
	mov ebx,dword ptr [esp+0x14]
	xor ebp,ebp

 Block44:
	mov dword ptr [esp+0x6C],0x10
	test ebp,ebp
	je Block46

 Block45:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov edi,dword ptr [esi+0x1D8]
	mov dword ptr [esi+0x1D8],ebp
	test edi,edi
	je Block49

 Block47:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block48:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block49:
	mov dword ptr [esp+0x6C],0xF
	mov edi,8
	test bl,4
	je Block53

 Block50:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x54],di
	jne Block58

 Block51:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block53:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [esp+0x6C],0xE
	test bl,2
	je Block60

 Block55:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x24],di
	jne Block59

 Block56:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block60

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block58:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x54]
	push edx
	call ebp
	jmp Block54

 Block59:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block60:
	mov dword ptr [esp+0x6C],0
	test bl,1
	je Block65

 Block61:
	cmp word ptr [esp+0x34],di
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x34]
	push eax
	call ebp

 Block65:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x34]
	mov bl,0x11
	push eax
	mov byte ptr [esp+0x70],bl
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x70],0x12
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x13
	test edi,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block73:
	mov ecx,dword ptr [_D_G_GR]
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [esi+0x24]
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edi,[esp+0x24]
	push edi
	lea edi,[esp+0x38]
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	push eax
	push edx
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1DC]
	cmp edi,eax
	je Block80

 Block76:
	mov dword ptr [esi+0x1DC],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	test edi,edi
	je Block80

 Block79:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block80:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block82:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0x12
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],bl
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x34]
	push ecx
	call ebp

 Block88:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],0
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[esp+0x24]
	push eax
	call ebp

 Block92:
	cmp dword ptr [esi+0x1DC],0
	je Block121

 Block93:
	mov edi,dword ptr [esi+0x1DC]
	test edi,edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block97

 Block96:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block97:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x14
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block99:
	mov edi,dword ptr [esi+0x1DC]
	mov byte ptr [esp+0x6C],0x15
	test edi,edi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block103

 Block102:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block103:
	mov byte ptr [esp+0x6C],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x6C],0x16
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block111

 Block110:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block111:
	mov edi,dword ptr [esi+0x1DC]
	mov byte ptr [esp+0x6C],0x17
	test edi,edi
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block115

 Block114:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block115:
	mov byte ptr [esp+0x6C],0x16
	cmp word ptr [esp+0x24],bx
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x70],0x18
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea ecx,[esp+0x18]
	push ecx
	mov bl,0x19
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x1A
	test edi,edi
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xB0]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block129:
	mov ecx,dword ptr [_D_G_GR]
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [esi+0x24]
	test ecx,ecx
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea edi,[esp+0x24]
	push edi
	lea edi,[esp+0x38]
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	push eax
	push edx
	push 0
	push 0
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1E0]
	cmp edi,eax
	je Block136

 Block132:
	mov dword ptr [esi+0x1E0],eax
	test eax,eax
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block134:
	test edi,edi
	je Block136

 Block135:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block136:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block138

 Block137:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block138:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],bl
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	mov edi,8
	mov byte ptr [esp+0x6C],0x18
	cmp word ptr [esp+0x34],di
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x24],di
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	cmp dword ptr [esi+0x1E0],0
	je Block177

 Block149:
	mov edi,dword ptr [esi+0x1E0]
	test edi,edi
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block153:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block155

 Block154:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block155:
	mov edi,dword ptr [esi+0x1E0]
	mov byte ptr [esp+0x6C],0x1C
	test edi,edi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block159:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],bl
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1D
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block167

 Block166:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block167:
	mov esi,dword ptr [esi+0x1E0]
	mov byte ptr [esp+0x6C],0x1E
	test esi,esi
	jne Block169

 Block168:
	push 0x80004003
	call _com_issue_error

 Block169:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block171

 Block170:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block171:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],bl
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block179:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CUIPQReward::Update
_SUB_EXCEPTION_HANDLER(41CCD0)
__SUB_CLASS_THIS0(0041CCD0, __thiscall, 43089,  CUIPQReward, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41CCD0
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
	mov ebp,ecx
	call get_update_time
	mov esi,eax
	mov eax,dword ptr [ebp+0x1BC]
	test eax,eax
	jne Block10

 Block1:
	mov eax,dword ptr [ebp+0x1E4]
	test eax,eax
	je Block10

 Block2:
	mov ecx,esi
	sub ecx,dword ptr [ebp+0x1E8]
	cmp ecx,0x3E8
	jl Block43

 Block3:
	dec eax
	mov dword ptr [ebp+0x1E8],esi
	mov dword ptr [ebp+0x1E4],eax
	test eax,eax
	jg Block10

 Block4:
	xor eax,eax
	lea ecx,[ebp+0xCC]

 Block5:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block9

 Block6:
	cmp byte ptr [edx],0
	je Block9

 Block7:
	inc eax
	add ecx,0x28
	cmp eax,6
	jl Block5

 Block8:
	jmp Block10

 Block9:
	add eax,0x3E8
	push eax
	mov ecx,ebp
	call CUIPQReward::SelectReward

 Block10:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3604],0
	je Block16

 Block11:
	mov ecx,dword ptr [eax+0x20B4]
	cmp dword ptr [eax+0x36B6],ecx
	jne Block16

 Block12:
	cmp dword ptr [ebp+0x1C4],0
	jne Block16

 Block13:
	cmp dword ptr [ebp+0x1C0],0
	jne Block16

 Block14:
	cmp esi,dword ptr [ebp+0x1F0]
	jl Block16

 Block15:
	mov ecx,ebp
	call CUIPQReward::RequestReward

 Block16:
	lea ecx,[ebp+0x1F4]
	call CUIToolTip::ClearToolTip
	cmp dword ptr [ebp+0x1C4],0
	je Block24

 Block17:
	cmp dword ptr [ebp+0x1C8],0
	jne Block25

 Block18:
	cmp esi,dword ptr [ebp+0x1EC]
	jl Block43

 Block19:
	lea esi,[ebp+0x98]
	mov edi,6

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi],0
	je Block22

 Block21:
	push 0
	lea ecx,[esi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi],0

 Block22:
	add esi,8
	sub edi,1
	jne Block20

 Block23:
	mov dword ptr [ebp+0x1C8],1

 Block24:
	cmp dword ptr [ebp+0x1C8],0
	je Block42

 Block25:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetCursorPos
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edx
	push eax
	call CWndMan::GetHandlerFromPoint
	mov esi,eax
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax

 Block27:
	xor ebx,ebx
	lea edi,[ebp+4]
	lea esi,[ebp+0xF0]
	jmp Block29

 Block29:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,dword ptr [esi-4]
	mov edx,dword ptr [edi]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	add eax,dword ptr [esi]
	mov edx,dword ptr [edi]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi-4]
	lea edx,[eax+ecx+0x45]
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x2C],edx
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esi]
	lea edx,[eax+ecx+0x3E]
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x34],edx
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block32

 Block30:
	mov eax,dword ptr [esi-0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],0
	test eax,eax
	jne Block34

 Block31:
	mov dword ptr [esp+0x3C],0xFFFFFFFF

 Block32:
	inc ebx
	add esi,0x28
	cmp ebx,6
	jl Block29

 Block33:
	jmp Block42

 Block34:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block37

 Block35:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block37

 Block36:
	lea edx,[ebx+ebx*4]
	mov cl,byte ptr [ebp+edx*8+0xDC]
	lea edi,[ebp+edx*8]
	add esi,0x105
	mov edx,esi
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+2],eax
	movzx ecx,word ptr [edi+0xE0]
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x10],eax
	movzx ecx,word ptr [edi+0xE2]
	lea edx,[esi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x18],eax
	movzx ecx,word ptr [edi+0xE4]
	lea edx,[esi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x20],eax

 Block37:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	add ecx,0x1E
	push ecx
	add edx,0x24
	push edx
	lea ecx,[ebp+0x1F4]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block42

 Block38:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block41

 Block40:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block41:
	mov dword ptr [esp+0x18],0

 Block42:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect

 Block43:
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
// CUIPQReward::OnReceiveReward
_SUB_EXCEPTION_HANDLER(41D8F0)
__SUB_CLASS_THIS(0041D8F0, __thiscall, 43100,  CUIPQReward, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41D8F0
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
	mov ebp,ecx
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x1C],6
	lea esp,[esp]

 Block1:
	mov edi,dword ptr [esp+0x3C]
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx esi,al
	call CInPacket::Decode4
	mov ebx,eax
	cmp esi,5
	ja Block19

 Block2:
	lea eax,[esi+esi*4]
	lea edi,[ebp+eax*8]
	mov dword ptr [edi+0xD8],ebx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x3C]
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [edi+0xDC],ecx
	mov ecx,dword ptr [esp+0x3C]
	call CInPacket::Decode2
	mov ecx,dword ptr [esp+0x3C]
	mov word ptr [edi+0xE0],ax
	call CInPacket::Decode2
	mov ecx,dword ptr [esp+0x3C]
	mov word ptr [edi+0xE2],ax
	call CInPacket::Decode2
	mov word ptr [edi+0xE4],ax

 Block4:
	mov ecx,dword ptr [ebp+esi*8+0x98]
	push 1
	call CCtrlButton::SetKeyFocus
	cmp dword ptr [edi+0xD4],0
	jne Block16

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	lea edx,[esp+0x18]
	push edx
	call CItemInfo::GetItemName
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block14

 Block6:
	cmp byte ptr [eax],0
	je Block14

 Block7:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x24]
	push 0x1872
	push eax
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x40],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov esi,dword ptr [esp+0x18]
	je Block11

 Block10:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block11:
	mov byte ptr [esp+0x34],0
	test esi,esi
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x14]

 Block14:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	test ebx,ebx
	jne Block19

 Block17:
	cmp dword ptr [edi+0xD4],ebx
	jne Block19

 Block18:
	mov dword ptr [esp+0x20],1

 Block19:
	sub dword ptr [esp+0x1C],1
	jne Block1

 Block20:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [ebp+0xC8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [ebp+0xC8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	cmp dword ptr [esp+0x20],0
	mov dword ptr [ebp+0x1C4],1
	je Block26

 Block21:
	lea eax,[esp+0x3C]
	push 0x18DF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x34],3
	je Block23

 Block22:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block23:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,ebp
	call eax

 Block26:
	call get_update_time
	add eax,0x1F4
	mov dword ptr [ebp+0x1EC],eax
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
// CUIPQReward::RequestReward
_SUB_EXCEPTION_HANDLER(41CAD0)
__SUB_CLASS_THIS0(0041CAD0, __thiscall, 43089,  CUIPQReward, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41CAD0
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
	push 0x89
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C0],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CUIPQReward::OnSelectRewardSuccess
_SUB_EXCEPTION_HANDLER(41D600)
__SUB_CLASS_THIS(0041D600, __thiscall, 43098,  CUIPQReward, void, NakedParam<ZXString<char>>, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41D600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ecx,ecx
	mov dword ptr [ebp-0x18],ecx
	mov esi,dword ptr [ebp+0x10]
	cmp esi,ecx
	mov dword ptr [ebp-4],ecx
	jge Block3

 Block1:
	cmp esi,6
	jl Block3

 Block2:
	mov eax,dword ptr [ebp+8]
	cmp eax,ecx
	jmp Block30

 Block3:
	lea eax,[esi+esi*4]
	lea ebx,[edi+eax*8]
	lea ecx,[ebp+8]
	push ecx
	lea ecx,[ebx+0xCC]
	mov dword ptr [ebp-0x20],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block29

 Block4:
	mov dword ptr [ebx+0xD4],eax
	mov ecx,dword ptr [edi+esi*8+0x98]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	xor eax,eax
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x30],1
	mov dword ptr [ebp-0x2C],eax
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],1
	cmp dword ptr [ebx+0xD0],eax
	je Block6

 Block5:
	lea ecx,[ebp-0x14]
	push 0x198B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],2
	mov ebx,1
	jmp Block7

 Block6:
	lea edx,[ebp-0x1C]
	push 0x1989
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],3
	mov ebx,2

 Block7:
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x18],ebx
	call ZXString16::op_assign
	mov dword ptr [ebp-4],2
	test bl,2
	je Block10

 Block8:
	mov eax,dword ptr [ebp-0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x18],ebx
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov dword ptr [ebp-4],1
	test bl,1
	je Block13

 Block11:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block15

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push eax
	lea ecx,[edi+esi*8+0x94]
	mov byte ptr [ebp-4],1
	call ZRef<CCtrlButton>::op_assign_ptr
	xor edx,edx
	cmp esi,3
	setl dl
	lea eax,[ebp-0x30]
	push eax
	push 0
	mov eax,0x55555556
	mov ecx,dword ptr [edi+esi*8+0x98]
	mov ebx,dword ptr [ecx]
	dec edx
	and edx,0x50
	add edx,0x33
	push edx
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	mov edx,esi
	sub edx,eax
	imul edx,0x5C
	add edx,0x16
	push edx
	mov edx,dword ptr [ebx+0x28]
	lea eax,[esi+0x3E8]
	push eax
	push edi
	call edx
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push 4
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+esi*8+0x98]
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],5
	call CCtrlButton::GetPropFocusFrame
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ebx,8
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp-0x20]
	add ecx,0xE8
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x40],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov esi,dword ptr [edi+esi*8+0x98]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	mov eax,dword ptr [ebp+8]
	test eax,eax

 Block30:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea esp,[ebp-0x50]
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
// CUIPQReward::GetRTTI
__SUB_CLASS_THIS0(0041E0A0, __thiscall, 43107,  CUIPQReward, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIPQReward::ms_RTTI_CUIPQReward
	ret
}
}
// CUIPQReward::IsKindOf
__SUB_CLASS_THIS(0041E0C0, __thiscall, 43108,  CUIPQReward, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIPQReward::ms_RTTI_CUIPQReward
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
// CUIPQReward::RewardBoxInfo::~RewardBoxInfo
__SUB_CLASS_THIS0(0041CB80, __thiscall, 43122,  CUIPQReward::RewardBoxInfo, void) {
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
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	pop esi
	ret
}
}
// CUIPQReward::Draw
_SUB_EXCEPTION_HANDLER(41D010)
__SUB_CLASS_THIS(0041D010, __thiscall, 43092,  CUIPQReward, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41D010
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
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0x68]
	push eax
	call CWnd::Draw
	mov ecx,3
	xor edi,edi
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],edi
	mov ecx,dword ptr [esi+0x1DC]
	mov dword ptr [esp+0x60],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x28],bx
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov eax,3
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],edi
	mov ecx,dword ptr [esi+0x1E0]
	mov byte ptr [esp+0x60],al
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x38],bx
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ebx,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x1C]
	cmp ebx,edi
	sete al
	test al,al
	jne Block47

 Block13:
	cmp ebp,edi
	sete al
	test al,al
	jne Block47

 Block14:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov byte ptr [esp+0x60],6
	cmp ebp,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x48]
	push edx
	push ebx
	push edi
	push edi
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],5
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,dword ptr [esi+0xC8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x28]
	call eax
	test eax,eax
	jne Block25

 Block23:
	cmp dword ptr [esi+0x1D8],edi
	je Block25

 Block24:
	mov ecx,dword ptr [esi+0x1E4]
	push ecx
	push 0xE
	push 0xC0
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x78],esp
	push ebp
	call eax
	mov ecx,dword ptr [esi+0x1D8]
	call CBitmapNumber::Draw

 Block25:
	lea ebx,[esi+0xCC]
	mov dword ptr [esp+0x68],ebx
	lea esp,[esp]

 Block26:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block35

 Block27:
	cmp byte ptr [ecx],0
	je Block35

 Block28:
	cmp dword ptr [ebx+8],0
	lea eax,[esi+0x1D0]
	jne Block30

 Block29:
	lea eax,[esi+0x1CC]

 Block30:
	mov eax,dword ptr [eax]
	push 0
	push eax
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ebx],0
	test ecx,ecx
	je Block34

 Block31:
	mov eax,ecx
	lea esi,[eax+1]

 Block32:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block32

 Block33:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block34:
	xor ecx,ecx
	cmp edi,3
	setl cl
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	mov eax,edi
	sub eax,edx
	imul eax,0x5C
	dec ecx
	and ecx,0x50
	add ecx,0x6D
	push ecx
	add eax,0x15
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x7C],7
	call CWnd::GetCanvas
	mov byte ptr [esp+0x78],5
	call _DrawTextA
	mov ebx,dword ptr [esp+0x80]
	mov esi,dword ptr [esp+0x2C]
	add esp,0x18

 Block35:
	cmp dword ptr [esi+0x1C8],0
	je Block44

 Block36:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block15

 Block37:
	mov ecx,dword ptr [ebx+0x1C]
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	lea eax,[esp+0x48]
	push eax
	push ecx
	xor ecx,ecx
	mov esi,edi
	sub esi,edx
	imul esi,0x5C
	cmp edi,3
	setl cl
	lea edx,[esi+0x16]
	mov byte ptr [esp+0x68],8
	dec ecx
	and ecx,0x50
	add ecx,0x33
	push ecx
	push edx
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],5
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov edx,dword ptr [ebx+0xC]
	test edx,edx
	jle Block43

 Block42:
	push 2
	xor ecx,ecx
	push 0
	push 0
	cmp edi,3
	setl cl
	push 0
	push 0
	push 0
	push 0
	lea eax,[esi+0x28]
	dec ecx
	and ecx,0x54
	add ecx,0x63
	push ecx
	push eax
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x94],esp
	push ebp
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block43:
	mov esi,dword ptr [esp+0x14]

 Block44:
	inc edi
	add ebx,0x28
	cmp edi,6
	mov dword ptr [esp+0x68],ebx
	jl Block26

 Block45:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x64],2
	call edx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block51

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block51

 Block47:
	mov byte ptr [esp+0x60],2
	cmp ebp,edi
	je Block49

 Block48:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block49:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp ebx,edi
	je Block51

 Block50:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block51:
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
// CUIPQReward::HitTest
__SUB_CLASS_THIS(0041CA40, __thiscall, 43091,  CUIPQReward, int32_t, long, long, CCtrlWnd**) {
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
	mov eax,2

 Block4:
	pop esi
	ret 0xC
}
}
// CUIPQReward::CUIPQReward
_SUB_EXCEPTION_HANDLER(41DBB0)
__SUB_CLASS_THIS(0041DBB0, __thiscall, 43087,  CUIPQReward, void, ZArray<int>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41DBB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
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
	mov dword ptr [ebp-0x60],esi
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [ebp-0x20],ebx
	call CUniqueModeless::_ctor_default
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 6
	push 8
	lea eax,[esi+0x94]
	push eax
	mov dword ptr [ebp-4],edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIPQReward::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPQReward::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPQReward::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC8],edi
	push offset CUIPQReward::RewardBoxInfo::~RewardBoxInfo
	push offset CUIPQReward::RewardBoxInfo::_ctor_default
	push 6
	push 0x28
	lea ecx,[esi+0xCC]
	push ecx
	mov byte ptr [ebp-4],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1CC],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1DC],edi
	mov dword ptr [esi+0x1E0],edi
	lea ecx,[esi+0x1F4]
	mov byte ptr [ebp-4],8
	call CUIToolTip::_ctor_default
	lea edx,[ebp-0x14]
	push 0x1985
	push edx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call CDialog::CreateDlg_2
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],9
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov dword ptr [ebp-0x38],edi
	mov dword ptr [ebp-0x44],1
	mov dword ptr [ebp-0x40],edi
	mov dword ptr [ebp-0x3C],edi
	lea eax,[esi+0x98]
	lea ecx,[esi+0xE8]
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp-0x24],ecx
	jmp Block6

 Block5:
	mov ebx,dword ptr [ebp-0x20]

 Block6:
	mov edx,dword ptr [eax]
	cmp dword ptr [edx+edi*4],0
	je Block8

 Block7:
	lea eax,[ebp-0x34]
	push 0x198A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],0xC
	or ebx,1
	jmp Block9

 Block8:
	lea ecx,[ebp-0x30]
	push 0x1988
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],0xD
	or ebx,2

 Block9:
	push eax
	lea ecx,[ebp-0x38]
	mov dword ptr [ebp-0x20],ebx
	call ZXString16::op_assign
	mov dword ptr [ebp-4],0xC
	test bl,2
	je Block12

 Block10:
	mov eax,dword ptr [ebp-0x30]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x20],ebx
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov dword ptr [ebp-4],0xB
	test bl,1
	je Block15

 Block13:
	mov eax,dword ptr [ebp-0x34]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp-0x20],ebx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x18],eax
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block17

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block35

 Block19:
	add eax,8
	je Block35

 Block20:
	add eax,0xFFFFFFF8
	mov dword ptr [ebp-0x48],eax
	test eax,eax
	je Block22

 Block21:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ebx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [ebp-0x48]
	mov dword ptr [ebx],edx
	test eax,eax
	je Block26

 Block23:
	add eax,8
	mov dword ptr [ebp-0x14],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	je Block26

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block26:
	xor eax,eax
	cmp edi,3
	setl al
	lea edx,[ebp-0x44]
	push edx
	push 0
	mov ecx,dword ptr [ebx]
	mov ebx,dword ptr [ecx]
	dec eax
	and eax,0x50
	add eax,0x33
	push eax
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	mov eax,edi
	sub eax,edx
	imul eax,0x5C
	add eax,0x16
	push eax
	mov eax,dword ptr [ebx+0x28]
	lea edx,[edi+0x3E8]
	push edx
	push esi
	call eax
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push 4
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ecx]
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0xF
	call CCtrlButton::GetPropFocusFrame
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	je Block51

 Block27:
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block36

 Block28:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ebx,dword ptr [ebp-0x24]
	xor ecx,ecx
	test eax,eax
	setl cl
	mov dword ptr [ebp-0x14],eax
	dec ecx
	and ecx,dword ptr [ebp-0x28]
	mov dword ptr [ebp-0x18],ecx
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov eax,dword ptr [ebp-0x14]

 Block30:
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [ebx],ecx
	test eax,eax
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block52

 Block32:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x11
	jne Block38

 Block33:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block39

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block35:
	mov dword ptr [ebp-0x48],0
	jmp Block22

 Block36:
	mov ebx,dword ptr [ebp-0x24]
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block32

 Block37:
	mov dword ptr [ebx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block32

 Block38:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [ebp-0x1C]
	mov eax,dword ptr [eax]
	mov eax,dword ptr [eax+0x18]
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block51

 Block42:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x68]
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block44

 Block43:
	mov ecx,dword ptr [ebp-0x18]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block44:
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebx+4],edx
	mov eax,dword ptr [eax]
	mov eax,dword ptr [eax+0x18]
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block51

 Block45:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x70]
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block47

 Block46:
	mov ecx,dword ptr [ebp-0x18]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block47:
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [ebp+8]
	add dword ptr [ebp-0x1C],8
	mov dword ptr [ebx+8],edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+edi*4]
	mov dword ptr [ebx-0x18],edx
	inc edi
	add ebx,0x28
	cmp edi,6
	mov dword ptr [ebp-0x24],ebx
	jl Block5

 Block48:
	xor edi,edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1E4],5
	call get_update_time
	mov dword ptr [esi+0x1E8],eax
	call get_update_time
	add eax,0x2710
	mov dword ptr [esi+0x1F0],eax
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],9
	cmp eax,edi
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	mov eax,esi
	lea esp,[ebp-0x70]
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

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	push eax
	call _com_issue_error
}
}
// CUIPQReward::SelectReward
_SUB_EXCEPTION_HANDLER(41CBB0)
__SUB_CLASS_THIS(0041CBB0, __thiscall, 43095,  CUIPQReward, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41CBB0
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
	mov eax,dword ptr [esi+0x1BC]
	test eax,eax
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4

 Block2:
	push 0x88
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov al,byte ptr [esp+0x28]
	add al,0x18
	movzx ecx,al
	push ecx
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1BC],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUIPQReward::RewardBoxInfo::RewardBoxInfo
__SUB_CLASS_THIS0(0041CB50, __thiscall, 43120,  CUIPQReward::RewardBoxInfo, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	xor edx,edx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov word ptr [eax+0x14],dx
	mov word ptr [eax+0x16],dx
	mov word ptr [eax+0x18],dx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	ret
}
}
// CUIPQReward::OnButtonClicked
__SUB_CLASS_THIS(0041CC70, __thiscall, 43093,  CUIPQReward, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x3E8]
	mov esi,ecx
	cmp eax,5
	ja Block2

 Block1:
	push edi
	call CUIPQReward::SelectReward

 Block2:
	cmp edi,1
	jne Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block4:
	cmp edi,2
	jne Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block6:
	cmp edi,8
	jne Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax

 Block8:
	pop edi
	pop esi
	ret 4
}
}
